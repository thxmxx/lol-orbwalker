#include "orbwalking.hpp"

CObject* m_orbTarget = nullptr;
CObject* m_KittingTarget = nullptr;

void tryFindTarget() {

	if (!me) {
		m_orbTarget = nullptr;
		return;
	}

	if (m_orbTarget != nullptr)
	{
		if (/* consertar pObject->IsAlive() &&*/ m_orbTarget->GetHealth() > .0f)
		{
			if (m_orbTarget->GetPos().DistTo(me->GetPos()) <= me->GetAttackRange() + 2 * me->GetBoundingRadius())
			{
				return;
			}
		}
		m_orbTarget = nullptr;
	}

	std::vector<CObject*> possibleTargets;

	CObject object;
	CObject* pObject = object.GetFirstObject();


	while (pObject)
	{
		if (pObject != nullptr && pObject->IsEnemyTo(me))
		{
			if (pObject->IsHero() || pObject->IsMinion() || pObject->IsTurret())
			{
				if ( /* consertar pObject->IsAlive() &&*/ pObject->GetHealth() > .0f && me->GetPos().DistTo(pObject->GetPos()) <= me->GetAttackRange() + 2 * me->GetBoundingRadius())
				{
					possibleTargets.push_back(pObject);
				}
			}
		}
		pObject = object.GetNextObject(pObject);
	}

	if (possibleTargets.empty())
		return;


	if (possibleTargets.size() > 1)
	{
		std::sort(possibleTargets.begin(), possibleTargets.end(),
			[](CObject* pFirst, CObject* pSecond)
			{
				return (pFirst->GetHealth() < pSecond->GetHealth());
			});
	}


	m_orbTarget = possibleTargets.front();

	if ((me->GetBaseAttackDamage() + me->GetBonusAttackDamage()) < m_orbTarget->GetHealth()) {
		m_orbTarget = nullptr;
	}

	possibleTargets.clear();
}


void tryFindTargetKiting() {

	if (!me) {
		m_KittingTarget = nullptr;
		return;
	}

	if (m_KittingTarget != nullptr)
	{
		if (/* consertar pObject->IsAlive() &&*/ m_KittingTarget->GetHealth() > .0f)
		{
			if (m_KittingTarget->GetPos().DistTo(me->GetPos()) <= me->GetAttackRange() + 2 * me->GetBoundingRadius())
			{
				return;
			}
		}
		m_KittingTarget = nullptr;
	}

	std::vector<CObject*> possibleTargets;

	CObject object;
	CObject* pObject = object.GetFirstObject();


	while (pObject)
	{
		if (pObject != nullptr && pObject->IsEnemyTo(me))
		{
			if (pObject->IsHero())
			{
				if ( /* consertar pObject->IsAlive() &&*/ pObject->GetHealth() > .0f && me->GetPos().DistTo(pObject->GetPos()) <= me->GetAttackRange() + 2 * me->GetBoundingRadius())
				{
					possibleTargets.push_back(pObject);
				}
			}
		}
		pObject = object.GetNextObject(pObject);
	}

	if (possibleTargets.empty())
		return;


	if (possibleTargets.size() > 1)
	{
		std::sort(possibleTargets.begin(), possibleTargets.end(),
			[](CObject* pFirst, CObject* pSecond)
			{
				return (pFirst->GetHealth() < pSecond->GetHealth());
			});
	}


	m_KittingTarget = possibleTargets.front();

	possibleTargets.clear();
}