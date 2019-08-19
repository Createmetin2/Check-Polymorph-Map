///Add
bool CPolymorphUtils::CheckMap(LPCHARACTER pChar, bool remove)
{
	std::list<DWORD> maplist {113, 41}; // edit
	const auto it = std::find(maplist.begin(), maplist.end(), pChar->GetMapIndex());
	if (it != maplist.end()) {
		if (remove && pChar->IsPolymorphed()){
			pChar->RemoveAffect(AFFECT_POLYMORPH);
			pChar->SetPolymorph(0);
		}
		return false;
	}
	return true;
}

//Find
	BYTE bySkillLevel = pChar->GetSkillLevel(POLYMORPH_SKILL_ID);
	
///Add Above
	if (!CheckMap(pChar)) {
		pChar->ChatPacket(CHAT_TYPE_INFO, "Bu mapte olmaz.");
		return false;
	}