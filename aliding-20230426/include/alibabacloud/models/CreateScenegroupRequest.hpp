// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCENEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCENEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateScenegroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScenegroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddFriendForbidden, addFriendForbidden_);
      DARABONBA_PTR_TO_JSON(AllMembersCanCreateCalendar, allMembersCanCreateCalendar_);
      DARABONBA_PTR_TO_JSON(AllMembersCanCreateMcsConf, allMembersCanCreateMcsConf_);
      DARABONBA_PTR_TO_JSON(ChatBannedType, chatBannedType_);
      DARABONBA_PTR_TO_JSON(GroupEmailDisabled, groupEmailDisabled_);
      DARABONBA_PTR_TO_JSON(GroupLiveSwitch, groupLiveSwitch_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(ManagementType, managementType_);
      DARABONBA_PTR_TO_JSON(MembersToAdminChat, membersToAdminChat_);
      DARABONBA_PTR_TO_JSON(MentionAllAuthority, mentionAllAuthority_);
      DARABONBA_PTR_TO_JSON(OnlyAdminCanDing, onlyAdminCanDing_);
      DARABONBA_PTR_TO_JSON(OnlyAdminCanSetMsgTop, onlyAdminCanSetMsgTop_);
      DARABONBA_PTR_TO_JSON(Searchable, searchable_);
      DARABONBA_PTR_TO_JSON(ShowHistoryType, showHistoryType_);
      DARABONBA_PTR_TO_JSON(SubadminIds, subadminIds_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(ValidationType, validationType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScenegroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddFriendForbidden, addFriendForbidden_);
      DARABONBA_PTR_FROM_JSON(AllMembersCanCreateCalendar, allMembersCanCreateCalendar_);
      DARABONBA_PTR_FROM_JSON(AllMembersCanCreateMcsConf, allMembersCanCreateMcsConf_);
      DARABONBA_PTR_FROM_JSON(ChatBannedType, chatBannedType_);
      DARABONBA_PTR_FROM_JSON(GroupEmailDisabled, groupEmailDisabled_);
      DARABONBA_PTR_FROM_JSON(GroupLiveSwitch, groupLiveSwitch_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(ManagementType, managementType_);
      DARABONBA_PTR_FROM_JSON(MembersToAdminChat, membersToAdminChat_);
      DARABONBA_PTR_FROM_JSON(MentionAllAuthority, mentionAllAuthority_);
      DARABONBA_PTR_FROM_JSON(OnlyAdminCanDing, onlyAdminCanDing_);
      DARABONBA_PTR_FROM_JSON(OnlyAdminCanSetMsgTop, onlyAdminCanSetMsgTop_);
      DARABONBA_PTR_FROM_JSON(Searchable, searchable_);
      DARABONBA_PTR_FROM_JSON(ShowHistoryType, showHistoryType_);
      DARABONBA_PTR_FROM_JSON(SubadminIds, subadminIds_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(ValidationType, validationType_);
    };
    CreateScenegroupRequest() = default ;
    CreateScenegroupRequest(const CreateScenegroupRequest &) = default ;
    CreateScenegroupRequest(CreateScenegroupRequest &&) = default ;
    CreateScenegroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScenegroupRequest() = default ;
    CreateScenegroupRequest& operator=(const CreateScenegroupRequest &) = default ;
    CreateScenegroupRequest& operator=(CreateScenegroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addFriendForbidden_ == nullptr
        && this->allMembersCanCreateCalendar_ == nullptr && this->allMembersCanCreateMcsConf_ == nullptr && this->chatBannedType_ == nullptr && this->groupEmailDisabled_ == nullptr && this->groupLiveSwitch_ == nullptr
        && this->icon_ == nullptr && this->managementType_ == nullptr && this->membersToAdminChat_ == nullptr && this->mentionAllAuthority_ == nullptr && this->onlyAdminCanDing_ == nullptr
        && this->onlyAdminCanSetMsgTop_ == nullptr && this->searchable_ == nullptr && this->showHistoryType_ == nullptr && this->subadminIds_ == nullptr && this->templateId_ == nullptr
        && this->title_ == nullptr && this->userIds_ == nullptr && this->uuid_ == nullptr && this->validationType_ == nullptr; };
    // addFriendForbidden Field Functions 
    bool hasAddFriendForbidden() const { return this->addFriendForbidden_ != nullptr;};
    void deleteAddFriendForbidden() { this->addFriendForbidden_ = nullptr;};
    inline int64_t getAddFriendForbidden() const { DARABONBA_PTR_GET_DEFAULT(addFriendForbidden_, 0L) };
    inline CreateScenegroupRequest& setAddFriendForbidden(int64_t addFriendForbidden) { DARABONBA_PTR_SET_VALUE(addFriendForbidden_, addFriendForbidden) };


    // allMembersCanCreateCalendar Field Functions 
    bool hasAllMembersCanCreateCalendar() const { return this->allMembersCanCreateCalendar_ != nullptr;};
    void deleteAllMembersCanCreateCalendar() { this->allMembersCanCreateCalendar_ = nullptr;};
    inline int64_t getAllMembersCanCreateCalendar() const { DARABONBA_PTR_GET_DEFAULT(allMembersCanCreateCalendar_, 0L) };
    inline CreateScenegroupRequest& setAllMembersCanCreateCalendar(int64_t allMembersCanCreateCalendar) { DARABONBA_PTR_SET_VALUE(allMembersCanCreateCalendar_, allMembersCanCreateCalendar) };


    // allMembersCanCreateMcsConf Field Functions 
    bool hasAllMembersCanCreateMcsConf() const { return this->allMembersCanCreateMcsConf_ != nullptr;};
    void deleteAllMembersCanCreateMcsConf() { this->allMembersCanCreateMcsConf_ = nullptr;};
    inline int64_t getAllMembersCanCreateMcsConf() const { DARABONBA_PTR_GET_DEFAULT(allMembersCanCreateMcsConf_, 0L) };
    inline CreateScenegroupRequest& setAllMembersCanCreateMcsConf(int64_t allMembersCanCreateMcsConf) { DARABONBA_PTR_SET_VALUE(allMembersCanCreateMcsConf_, allMembersCanCreateMcsConf) };


    // chatBannedType Field Functions 
    bool hasChatBannedType() const { return this->chatBannedType_ != nullptr;};
    void deleteChatBannedType() { this->chatBannedType_ = nullptr;};
    inline int64_t getChatBannedType() const { DARABONBA_PTR_GET_DEFAULT(chatBannedType_, 0L) };
    inline CreateScenegroupRequest& setChatBannedType(int64_t chatBannedType) { DARABONBA_PTR_SET_VALUE(chatBannedType_, chatBannedType) };


    // groupEmailDisabled Field Functions 
    bool hasGroupEmailDisabled() const { return this->groupEmailDisabled_ != nullptr;};
    void deleteGroupEmailDisabled() { this->groupEmailDisabled_ = nullptr;};
    inline int64_t getGroupEmailDisabled() const { DARABONBA_PTR_GET_DEFAULT(groupEmailDisabled_, 0L) };
    inline CreateScenegroupRequest& setGroupEmailDisabled(int64_t groupEmailDisabled) { DARABONBA_PTR_SET_VALUE(groupEmailDisabled_, groupEmailDisabled) };


    // groupLiveSwitch Field Functions 
    bool hasGroupLiveSwitch() const { return this->groupLiveSwitch_ != nullptr;};
    void deleteGroupLiveSwitch() { this->groupLiveSwitch_ = nullptr;};
    inline int64_t getGroupLiveSwitch() const { DARABONBA_PTR_GET_DEFAULT(groupLiveSwitch_, 0L) };
    inline CreateScenegroupRequest& setGroupLiveSwitch(int64_t groupLiveSwitch) { DARABONBA_PTR_SET_VALUE(groupLiveSwitch_, groupLiveSwitch) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline CreateScenegroupRequest& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // managementType Field Functions 
    bool hasManagementType() const { return this->managementType_ != nullptr;};
    void deleteManagementType() { this->managementType_ = nullptr;};
    inline int64_t getManagementType() const { DARABONBA_PTR_GET_DEFAULT(managementType_, 0L) };
    inline CreateScenegroupRequest& setManagementType(int64_t managementType) { DARABONBA_PTR_SET_VALUE(managementType_, managementType) };


    // membersToAdminChat Field Functions 
    bool hasMembersToAdminChat() const { return this->membersToAdminChat_ != nullptr;};
    void deleteMembersToAdminChat() { this->membersToAdminChat_ = nullptr;};
    inline int64_t getMembersToAdminChat() const { DARABONBA_PTR_GET_DEFAULT(membersToAdminChat_, 0L) };
    inline CreateScenegroupRequest& setMembersToAdminChat(int64_t membersToAdminChat) { DARABONBA_PTR_SET_VALUE(membersToAdminChat_, membersToAdminChat) };


    // mentionAllAuthority Field Functions 
    bool hasMentionAllAuthority() const { return this->mentionAllAuthority_ != nullptr;};
    void deleteMentionAllAuthority() { this->mentionAllAuthority_ = nullptr;};
    inline int64_t getMentionAllAuthority() const { DARABONBA_PTR_GET_DEFAULT(mentionAllAuthority_, 0L) };
    inline CreateScenegroupRequest& setMentionAllAuthority(int64_t mentionAllAuthority) { DARABONBA_PTR_SET_VALUE(mentionAllAuthority_, mentionAllAuthority) };


    // onlyAdminCanDing Field Functions 
    bool hasOnlyAdminCanDing() const { return this->onlyAdminCanDing_ != nullptr;};
    void deleteOnlyAdminCanDing() { this->onlyAdminCanDing_ = nullptr;};
    inline int64_t getOnlyAdminCanDing() const { DARABONBA_PTR_GET_DEFAULT(onlyAdminCanDing_, 0L) };
    inline CreateScenegroupRequest& setOnlyAdminCanDing(int64_t onlyAdminCanDing) { DARABONBA_PTR_SET_VALUE(onlyAdminCanDing_, onlyAdminCanDing) };


    // onlyAdminCanSetMsgTop Field Functions 
    bool hasOnlyAdminCanSetMsgTop() const { return this->onlyAdminCanSetMsgTop_ != nullptr;};
    void deleteOnlyAdminCanSetMsgTop() { this->onlyAdminCanSetMsgTop_ = nullptr;};
    inline int64_t getOnlyAdminCanSetMsgTop() const { DARABONBA_PTR_GET_DEFAULT(onlyAdminCanSetMsgTop_, 0L) };
    inline CreateScenegroupRequest& setOnlyAdminCanSetMsgTop(int64_t onlyAdminCanSetMsgTop) { DARABONBA_PTR_SET_VALUE(onlyAdminCanSetMsgTop_, onlyAdminCanSetMsgTop) };


    // searchable Field Functions 
    bool hasSearchable() const { return this->searchable_ != nullptr;};
    void deleteSearchable() { this->searchable_ = nullptr;};
    inline int64_t getSearchable() const { DARABONBA_PTR_GET_DEFAULT(searchable_, 0L) };
    inline CreateScenegroupRequest& setSearchable(int64_t searchable) { DARABONBA_PTR_SET_VALUE(searchable_, searchable) };


    // showHistoryType Field Functions 
    bool hasShowHistoryType() const { return this->showHistoryType_ != nullptr;};
    void deleteShowHistoryType() { this->showHistoryType_ = nullptr;};
    inline int64_t getShowHistoryType() const { DARABONBA_PTR_GET_DEFAULT(showHistoryType_, 0L) };
    inline CreateScenegroupRequest& setShowHistoryType(int64_t showHistoryType) { DARABONBA_PTR_SET_VALUE(showHistoryType_, showHistoryType) };


    // subadminIds Field Functions 
    bool hasSubadminIds() const { return this->subadminIds_ != nullptr;};
    void deleteSubadminIds() { this->subadminIds_ = nullptr;};
    inline string getSubadminIds() const { DARABONBA_PTR_GET_DEFAULT(subadminIds_, "") };
    inline CreateScenegroupRequest& setSubadminIds(string subadminIds) { DARABONBA_PTR_SET_VALUE(subadminIds_, subadminIds) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateScenegroupRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateScenegroupRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline string getUserIds() const { DARABONBA_PTR_GET_DEFAULT(userIds_, "") };
    inline CreateScenegroupRequest& setUserIds(string userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline CreateScenegroupRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // validationType Field Functions 
    bool hasValidationType() const { return this->validationType_ != nullptr;};
    void deleteValidationType() { this->validationType_ = nullptr;};
    inline int64_t getValidationType() const { DARABONBA_PTR_GET_DEFAULT(validationType_, 0L) };
    inline CreateScenegroupRequest& setValidationType(int64_t validationType) { DARABONBA_PTR_SET_VALUE(validationType_, validationType) };


  protected:
    shared_ptr<int64_t> addFriendForbidden_ {};
    shared_ptr<int64_t> allMembersCanCreateCalendar_ {};
    shared_ptr<int64_t> allMembersCanCreateMcsConf_ {};
    shared_ptr<int64_t> chatBannedType_ {};
    shared_ptr<int64_t> groupEmailDisabled_ {};
    shared_ptr<int64_t> groupLiveSwitch_ {};
    shared_ptr<string> icon_ {};
    shared_ptr<int64_t> managementType_ {};
    shared_ptr<int64_t> membersToAdminChat_ {};
    shared_ptr<int64_t> mentionAllAuthority_ {};
    shared_ptr<int64_t> onlyAdminCanDing_ {};
    shared_ptr<int64_t> onlyAdminCanSetMsgTop_ {};
    shared_ptr<int64_t> searchable_ {};
    shared_ptr<int64_t> showHistoryType_ {};
    shared_ptr<string> subadminIds_ {};
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    // This parameter is required.
    shared_ptr<string> title_ {};
    shared_ptr<string> userIds_ {};
    shared_ptr<string> uuid_ {};
    shared_ptr<int64_t> validationType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
