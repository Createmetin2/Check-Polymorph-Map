///Add
bool CPolymorphUtils::CheckMap(LPCHARACTER pChar)
{
	std::list<DWORD> maplist {113, 41}; // edit
	const auto it = std::find(maplist.begin(), maplist.end(), pChar->GetMapIndex());
	if (it != maplist.end()) {
		if (pChar->IsPolymorphed()){
			pChar->RemoveAffect(AFFECT_POLYMORPH);
			pChar->SetPolymorph(0);
		}
		return false;
	}
	return true;
}