// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTRESPONSEBODYACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTRESPONSEBODYACCOUNT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAccountResponseBodyAccountTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetAccountResponseBodyAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountResponseBodyAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EmailStatus, emailStatus_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(HasSecureMobilePhone, hasSecureMobilePhone_);
      DARABONBA_PTR_TO_JSON(IdentityInformation, identityInformation_);
      DARABONBA_PTR_TO_JSON(JoinMethod, joinMethod_);
      DARABONBA_PTR_TO_JSON(JoinTime, joinTime_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryPath, resourceDirectoryPath_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountResponseBodyAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EmailStatus, emailStatus_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(HasSecureMobilePhone, hasSecureMobilePhone_);
      DARABONBA_PTR_FROM_JSON(IdentityInformation, identityInformation_);
      DARABONBA_PTR_FROM_JSON(JoinMethod, joinMethod_);
      DARABONBA_PTR_FROM_JSON(JoinTime, joinTime_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryPath, resourceDirectoryPath_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetAccountResponseBodyAccount() = default ;
    GetAccountResponseBodyAccount(const GetAccountResponseBodyAccount &) = default ;
    GetAccountResponseBodyAccount(GetAccountResponseBodyAccount &&) = default ;
    GetAccountResponseBodyAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountResponseBodyAccount() = default ;
    GetAccountResponseBodyAccount& operator=(const GetAccountResponseBodyAccount &) = default ;
    GetAccountResponseBodyAccount& operator=(GetAccountResponseBodyAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->accountName_ != nullptr && this->displayName_ != nullptr && this->emailStatus_ != nullptr && this->folderId_ != nullptr && this->hasSecureMobilePhone_ != nullptr
        && this->identityInformation_ != nullptr && this->joinMethod_ != nullptr && this->joinTime_ != nullptr && this->location_ != nullptr && this->modifyTime_ != nullptr
        && this->resourceDirectoryId_ != nullptr && this->resourceDirectoryPath_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->type_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetAccountResponseBodyAccount& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline GetAccountResponseBodyAccount& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetAccountResponseBodyAccount& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // emailStatus Field Functions 
    bool hasEmailStatus() const { return this->emailStatus_ != nullptr;};
    void deleteEmailStatus() { this->emailStatus_ = nullptr;};
    inline string emailStatus() const { DARABONBA_PTR_GET_DEFAULT(emailStatus_, "") };
    inline GetAccountResponseBodyAccount& setEmailStatus(string emailStatus) { DARABONBA_PTR_SET_VALUE(emailStatus_, emailStatus) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline GetAccountResponseBodyAccount& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // hasSecureMobilePhone Field Functions 
    bool hasHasSecureMobilePhone() const { return this->hasSecureMobilePhone_ != nullptr;};
    void deleteHasSecureMobilePhone() { this->hasSecureMobilePhone_ = nullptr;};
    inline bool hasSecureMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(hasSecureMobilePhone_, false) };
    inline GetAccountResponseBodyAccount& setHasSecureMobilePhone(bool hasSecureMobilePhone) { DARABONBA_PTR_SET_VALUE(hasSecureMobilePhone_, hasSecureMobilePhone) };


    // identityInformation Field Functions 
    bool hasIdentityInformation() const { return this->identityInformation_ != nullptr;};
    void deleteIdentityInformation() { this->identityInformation_ = nullptr;};
    inline string identityInformation() const { DARABONBA_PTR_GET_DEFAULT(identityInformation_, "") };
    inline GetAccountResponseBodyAccount& setIdentityInformation(string identityInformation) { DARABONBA_PTR_SET_VALUE(identityInformation_, identityInformation) };


    // joinMethod Field Functions 
    bool hasJoinMethod() const { return this->joinMethod_ != nullptr;};
    void deleteJoinMethod() { this->joinMethod_ = nullptr;};
    inline string joinMethod() const { DARABONBA_PTR_GET_DEFAULT(joinMethod_, "") };
    inline GetAccountResponseBodyAccount& setJoinMethod(string joinMethod) { DARABONBA_PTR_SET_VALUE(joinMethod_, joinMethod) };


    // joinTime Field Functions 
    bool hasJoinTime() const { return this->joinTime_ != nullptr;};
    void deleteJoinTime() { this->joinTime_ = nullptr;};
    inline string joinTime() const { DARABONBA_PTR_GET_DEFAULT(joinTime_, "") };
    inline GetAccountResponseBodyAccount& setJoinTime(string joinTime) { DARABONBA_PTR_SET_VALUE(joinTime_, joinTime) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline GetAccountResponseBodyAccount& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline GetAccountResponseBodyAccount& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // resourceDirectoryId Field Functions 
    bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
    void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
    inline string resourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
    inline GetAccountResponseBodyAccount& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


    // resourceDirectoryPath Field Functions 
    bool hasResourceDirectoryPath() const { return this->resourceDirectoryPath_ != nullptr;};
    void deleteResourceDirectoryPath() { this->resourceDirectoryPath_ = nullptr;};
    inline string resourceDirectoryPath() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryPath_, "") };
    inline GetAccountResponseBodyAccount& setResourceDirectoryPath(string resourceDirectoryPath) { DARABONBA_PTR_SET_VALUE(resourceDirectoryPath_, resourceDirectoryPath) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAccountResponseBodyAccount& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetAccountResponseBodyAccountTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetAccountResponseBodyAccountTags>) };
    inline vector<Models::GetAccountResponseBodyAccountTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetAccountResponseBodyAccountTags>) };
    inline GetAccountResponseBodyAccount& setTags(const vector<Models::GetAccountResponseBodyAccountTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetAccountResponseBodyAccount& setTags(vector<Models::GetAccountResponseBodyAccountTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAccountResponseBodyAccount& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The Alibaba Cloud account ID of the member.
    std::shared_ptr<string> accountId_ = nullptr;
    // The Alibaba Cloud account name of the member.
    std::shared_ptr<string> accountName_ = nullptr;
    // The display name of the member.
    std::shared_ptr<string> displayName_ = nullptr;
    // The status of the modification for the email address bound to the member. Valid values:
    // 
    // *   If the value of this parameter is empty, no modification is performed for the email address.
    // *   WAIT_MODIFY: The modification is being performed.
    // *   CANCELLED: The modification is canceled.
    // *   EXPIRED: The modification expires.
    std::shared_ptr<string> emailStatus_ = nullptr;
    // The ID of the folder.
    std::shared_ptr<string> folderId_ = nullptr;
    // Indicates whether a mobile phone number is bound to the member for security purposes. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> hasSecureMobilePhone_ = nullptr;
    // The real-name verification information.
    std::shared_ptr<string> identityInformation_ = nullptr;
    // The way in which the member joins the resource directory. Valid values:
    // 
    // *   invited: The member is invited to join the resource directory.
    // *   created: The member is directly created in the resource directory.
    std::shared_ptr<string> joinMethod_ = nullptr;
    // The time when the member joined the resource directory.
    std::shared_ptr<string> joinTime_ = nullptr;
    // The location of the member in the resource directory.
    std::shared_ptr<string> location_ = nullptr;
    // The time when the member was modified.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The ID of the resource directory.
    std::shared_ptr<string> resourceDirectoryId_ = nullptr;
    // The path of the member in the resource directory.
    std::shared_ptr<string> resourceDirectoryPath_ = nullptr;
    // The status of the member. Valid values:
    // 
    // *   CreateSuccess: The member is created.
    // *   PromoteVerifying: The upgrade of the member is being confirmed.
    // *   PromoteFailed: The upgrade of the member fails.
    // *   PromoteExpired: The upgrade of the member expires.
    // *   PromoteCancelled: The upgrade of the member is canceled.
    // *   PromoteSuccess: The member is upgraded.
    // *   InviteSuccess: The member accepts the invitation.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the member.
    std::shared_ptr<vector<Models::GetAccountResponseBodyAccountTags>> tags_ = nullptr;
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
