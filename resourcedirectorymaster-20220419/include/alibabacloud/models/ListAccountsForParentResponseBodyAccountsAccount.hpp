// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTSFORPARENTRESPONSEBODYACCOUNTSACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTSFORPARENTRESPONSEBODYACCOUNTSACCOUNT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAccountsForParentResponseBodyAccountsAccountTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListAccountsForParentResponseBodyAccountsAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountsForParentResponseBodyAccountsAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DeletionStatus, deletionStatus_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(JoinMethod, joinMethod_);
      DARABONBA_PTR_TO_JSON(JoinTime, joinTime_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountsForParentResponseBodyAccountsAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DeletionStatus, deletionStatus_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(JoinMethod, joinMethod_);
      DARABONBA_PTR_FROM_JSON(JoinTime, joinTime_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListAccountsForParentResponseBodyAccountsAccount() = default ;
    ListAccountsForParentResponseBodyAccountsAccount(const ListAccountsForParentResponseBodyAccountsAccount &) = default ;
    ListAccountsForParentResponseBodyAccountsAccount(ListAccountsForParentResponseBodyAccountsAccount &&) = default ;
    ListAccountsForParentResponseBodyAccountsAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountsForParentResponseBodyAccountsAccount() = default ;
    ListAccountsForParentResponseBodyAccountsAccount& operator=(const ListAccountsForParentResponseBodyAccountsAccount &) = default ;
    ListAccountsForParentResponseBodyAccountsAccount& operator=(ListAccountsForParentResponseBodyAccountsAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->accountName_ == nullptr && return this->deletionStatus_ == nullptr && return this->displayName_ == nullptr && return this->folderId_ == nullptr && return this->joinMethod_ == nullptr
        && return this->joinTime_ == nullptr && return this->modifyTime_ == nullptr && return this->resourceDirectoryId_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr
        && return this->type_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListAccountsForParentResponseBodyAccountsAccount& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ListAccountsForParentResponseBodyAccountsAccount& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // deletionStatus Field Functions 
    bool hasDeletionStatus() const { return this->deletionStatus_ != nullptr;};
    void deleteDeletionStatus() { this->deletionStatus_ = nullptr;};
    inline string deletionStatus() const { DARABONBA_PTR_GET_DEFAULT(deletionStatus_, "") };
    inline ListAccountsForParentResponseBodyAccountsAccount& setDeletionStatus(string deletionStatus) { DARABONBA_PTR_SET_VALUE(deletionStatus_, deletionStatus) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListAccountsForParentResponseBodyAccountsAccount& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline ListAccountsForParentResponseBodyAccountsAccount& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // joinMethod Field Functions 
    bool hasJoinMethod() const { return this->joinMethod_ != nullptr;};
    void deleteJoinMethod() { this->joinMethod_ = nullptr;};
    inline string joinMethod() const { DARABONBA_PTR_GET_DEFAULT(joinMethod_, "") };
    inline ListAccountsForParentResponseBodyAccountsAccount& setJoinMethod(string joinMethod) { DARABONBA_PTR_SET_VALUE(joinMethod_, joinMethod) };


    // joinTime Field Functions 
    bool hasJoinTime() const { return this->joinTime_ != nullptr;};
    void deleteJoinTime() { this->joinTime_ = nullptr;};
    inline string joinTime() const { DARABONBA_PTR_GET_DEFAULT(joinTime_, "") };
    inline ListAccountsForParentResponseBodyAccountsAccount& setJoinTime(string joinTime) { DARABONBA_PTR_SET_VALUE(joinTime_, joinTime) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListAccountsForParentResponseBodyAccountsAccount& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // resourceDirectoryId Field Functions 
    bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
    void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
    inline string resourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
    inline ListAccountsForParentResponseBodyAccountsAccount& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAccountsForParentResponseBodyAccountsAccount& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::ListAccountsForParentResponseBodyAccountsAccountTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::ListAccountsForParentResponseBodyAccountsAccountTags) };
    inline Models::ListAccountsForParentResponseBodyAccountsAccountTags tags() { DARABONBA_PTR_GET(tags_, Models::ListAccountsForParentResponseBodyAccountsAccountTags) };
    inline ListAccountsForParentResponseBodyAccountsAccount& setTags(const Models::ListAccountsForParentResponseBodyAccountsAccountTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListAccountsForParentResponseBodyAccountsAccount& setTags(Models::ListAccountsForParentResponseBodyAccountsAccountTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAccountsForParentResponseBodyAccountsAccount& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The Alibaba Cloud account ID of the member.
    std::shared_ptr<string> accountId_ = nullptr;
    // The Alibaba Cloud account name of the member.
    std::shared_ptr<string> accountName_ = nullptr;
    // The deletion status of the member. Valid values:
    // 
    // *   Checking: A deletion check is being performed for the member.
    // *   Deleting: The member is being deleted.
    // *   CheckFailed: The deletion check for the member fails.
    // *   DeleteFailed: The member fails to be deleted.
    // 
    // >  If deletion is not performed for the member, the value of this parameter is empty.
    std::shared_ptr<string> deletionStatus_ = nullptr;
    // The display name of the member.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the folder.
    std::shared_ptr<string> folderId_ = nullptr;
    // The way in which the member joins the resource directory.
    // 
    // *   invited: The member is invited to join the resource directory.
    // *   created: The member is directly created in the resource directory.
    std::shared_ptr<string> joinMethod_ = nullptr;
    // The time when the member joined the resource directory. The time is displayed in UTC.
    std::shared_ptr<string> joinTime_ = nullptr;
    // The time when the member was modified. The time is displayed in UTC.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The ID of the resource directory.
    std::shared_ptr<string> resourceDirectoryId_ = nullptr;
    // The status of the member. Valid values:
    // 
    // *   CreateSuccess: The member is created.
    // *   PromoteVerifying: The upgrade of the member is under confirmation.
    // *   PromoteFailed: The upgrade of the member fails.
    // *   PromoteExpired: The upgrade of the member expires.
    // *   PromoteCancelled: The upgrade of the member is canceled.
    // *   PromoteSuccess: The member is upgraded.
    // *   InviteSuccess: The member accepts the invitation.
    std::shared_ptr<string> status_ = nullptr;
    // The tags that are added to the member.
    std::shared_ptr<Models::ListAccountsForParentResponseBodyAccountsAccountTags> tags_ = nullptr;
    // The type of the member. Valid values:
    // 
    // *   CloudAccount: cloud account
    // *   ResourceAccount: resource account
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
