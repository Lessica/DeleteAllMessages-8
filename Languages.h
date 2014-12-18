/***************************************************
* language list
****************************************************/

/* language list of Delete All Button */
NSDictionary *delete_btn_langs = @{
	@"en":      @"Delete All",                  // 英語
	@"ja":      @"全て削除",                     // 日本語
	@"zh-Hans": @"删除所有",                     // 中国語 簡化字
	@"zh-Hant": @"刪除所有",                     // 中国語 繁華字
	@"ko":      @"모두 삭제",                     // 韓国語
	@"ru":      @"Удалить Все",                 // ロシア語
	@"de":      @"Alle Löschen",                // ドイツ語
	@"fr":      @"Supprimer Tout",              // フランス語
	@"it":      @"Elimina Tutto",               // イタリア語
	@"la":      @"Delere Omnes",                // ラテン語
};

/* language list of UIActionSheet initWithTitle */
NSDictionary *delete_uis_title_langs = @{
	// 英語
	@"en":      @"You can not restore a deleted message\nAre you sure you want to delete all messages?",
	// 日本語
	@"ja":      @"削除されたメッセージは復元できません\n全てのメッセージを削除しますか？",
	// 中国語 簡化字
	@"zh-Hans": @"您无法还原已删除的信息\n您确定要删除所有信息？",
	// 中国語 繁華字
	@"zh-Hans": @"您無法還原已刪除的信息\n您確定要刪除所有信息？",
	// 韓国語
	@"ko":      @"삭제 된 메시지를 복원 할 수 없습니다\n모든 메시지를 삭제 하시겠습니까?",
	// ロシア語
	@"ru":      @"Вы не можете восстановить удаленное сообщение\nВы уверены, что хотите удалить все сообщения?",
	// ドイツ語
	@"de":      @"Sie können eine gelöschte Nachricht nicht wiederherstellen\nSind Sie sicher, dass Sie alle Nachrichten löschen?",
	// フランス語
	@"fr":      @"Vous ne pouvez pas restaurer un message supprimé\nEtes-vous sûr de vouloir supprimer tous les messages?",
	// イタリア語
	@"it":      @"Non è possibile ripristinare un messaggio eliminato\nSei sicuro di voler eliminare tutti i messaggi?",
	// ラテン語
	@"la":      @"Amet lectus a te non possit\nCertus es, verba omnes delere vis?",
};

/* language list of UIActionSheet cancelButtonTitle */
NSDictionary *delete_uis_btn_cancel_langs = @{
	@"en":      @"Cancel",                      // 英語
	@"ja":      @"キャンセル",                    // 日本語
	@"zh-Hans": @"取消",                         // 中国語 簡化字
	@"zh-Hant": @"消除",                         // 中国語 繁華字
	@"ko":      @"취소",                         // 韓国語
	@"ru":      @"Отмена",                      // ロシア語
	@"de":      @"Stornierung",                 // ドイツ語
	@"fr":      @"Annulation",                  // フランス語
	@"it":      @"Cancellazione",               // イタリア語
	@"la":      @"Tabulae",                     // ラテン語
};

/* language list of UIActionSheet destructiveButtonTitle */
NSDictionary *delete_uis_btn_dest_langs = @{
	@"en":      @"Delete",                      // 英語
	@"ja":      @"削除",                         // 日本語
	@"zh-Hans": @"删除",                         // 中国語 簡化字
	@"zh-Hant": @"刪除",                         // 中国語 繁華字
	@"ko":      @"삭제",                         // 韓国語
	@"ru":      @"Удалить",                     // ロシア語
	@"de":      @"Löschen",                     // ドイツ語
	@"fr":      @"Supprimer",                   // フランス語
	@"it":      @"Elimina",                     // イタリア語
	@"la":      @"Delere",                      // ラテン語
};

/* Setup default language */
NSString *button_title          = delete_btn_langs[@"en"];
NSString *delete_uis_title      = delete_uis_title_langs[@"en"];
NSString *delete_uis_btn_cancel = delete_uis_btn_cancel_langs[@"en"];
NSString *delete_uis_btn_dest   = delete_uis_btn_dest_langs[@"en"];
