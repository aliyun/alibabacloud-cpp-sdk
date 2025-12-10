// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDACCOUNTRESPONSEBODYACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDACCOUNTRESPONSEBODYACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateCloudAccountResponseBodyAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudAccountResponseBodyAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(JoinMethod, joinMethod_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudAccountResponseBodyAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(JoinMethod, joinMethod_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateCloudAccountResponseBodyAccount() = default ;
    CreateCloudAccountResponseBodyAccount(const CreateCloudAccountResponseBodyAccount &) = default ;
    CreateCloudAccountResponseBodyAccount(CreateCloudAccountResponseBodyAccount &&) = default ;
    CreateCloudAccountResponseBodyAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudAccountResponseBodyAccount() = default ;
    CreateCloudAccountResponseBodyAccount& operator=(const CreateCloudAccountResponseBodyAccount &) = default ;
    CreateCloudAccountResponseBodyAccount& operator=(CreateCloudAccountResponseBodyAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->accountName_ == nullptr && return this->displayName_ == nullptr && return this->folderId_ == nullptr && return this->joinMethod_ == nullptr && return this->modifyTime_ == nullptr
        && return this->recordId_ == nullptr && return this->resourceDirectoryId_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline CreateCloudAccountResponseBodyAccount& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateCloudAccountResponseBodyAccount& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateCloudAccountResponseBodyAccount& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline CreateCloudAccountResponseBodyAccount& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // joinMethod Field Functions 
    bool hasJoinMethod() const { return this->joinMethod_ != nullptr;};
    void deleteJoinMethod() { this->joinMethod_ = nullptr;};
    inline string joinMethod() const { DARABONBA_PTR_GET_DEFAULT(joinMethod_, "") };
    inline CreateCloudAccountResponseBodyAccount& setJoinMethod(string joinMethod) { DARABONBA_PTR_SET_VALUE(joinMethod_, joinMethod) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline CreateCloudAccountResponseBodyAccount& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline CreateCloudAccountResponseBodyAccount& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // resourceDirectoryId Field Functions 
    bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
    void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
    inline string resourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
    inline CreateCloudAccountResponseBodyAccount& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateCloudAccountResponseBodyAccount& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateCloudAccountResponseBodyAccount& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the member account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The name of the member account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The display name of the member account.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the folder.
    std::shared_ptr<string> folderId_ = nullptr;
    // The way in which the member account joined the resource directory. Valid values:
    // 
    // *   invited: The member account is invited to join the resource directory.
    // *   created: The member account is directly created in the resource directory.
    std::shared_ptr<string> joinMethod_ = nullptr;
    // The time when the member account was modified.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The account record ID.
    std::shared_ptr<string> recordId_ = nullptr;
    // The ID of the resource directory.
    std::shared_ptr<string> resourceDirectoryId_ = nullptr;
    // The status of the member account. Valid values:
    // 
    // *   CreateSuccess: The member account is created.
    // *   CreateVerifying: The creation of the member account is under confirmation.
    // *   CreateFailed: The member account failed to be created.
    // *   CreateExpired: The creation of the member account expired.
    // *   CreateCancelled: The creation of the member account is canceled.
    // *   PromoteVerifying: The upgrade of the member account is under confirmation.
    // *   PromoteFailed: The member account failed to be upgraded.
    // *   PromoteExpired: The upgrade of the member account expired.
    // *   PromoteCancelled: The upgrade of the member account is canceled.
    // *   PromoteSuccess: The member account is upgraded.
    // *   InviteSuccess: The owner of the member account accepted the invitation.
    // *   Removed: The member account is removed from the resource directory.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the member account. The value CloudAccount indicates that the member account is a cloud account.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
