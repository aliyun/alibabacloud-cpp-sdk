// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateCloudAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCloudAccountResponseBody() = default ;
    CreateCloudAccountResponseBody(const CreateCloudAccountResponseBody &) = default ;
    CreateCloudAccountResponseBody(CreateCloudAccountResponseBody &&) = default ;
    CreateCloudAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudAccountResponseBody() = default ;
    CreateCloudAccountResponseBody& operator=(const CreateCloudAccountResponseBody &) = default ;
    CreateCloudAccountResponseBody& operator=(CreateCloudAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Account : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Account& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Account& obj) { 
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
      Account() = default ;
      Account(const Account &) = default ;
      Account(Account &&) = default ;
      Account(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Account() = default ;
      Account& operator=(const Account &) = default ;
      Account& operator=(Account &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->displayName_ == nullptr && this->folderId_ == nullptr && this->joinMethod_ == nullptr && this->modifyTime_ == nullptr
        && this->recordId_ == nullptr && this->resourceDirectoryId_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Account& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Account& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Account& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // folderId Field Functions 
      bool hasFolderId() const { return this->folderId_ != nullptr;};
      void deleteFolderId() { this->folderId_ = nullptr;};
      inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
      inline Account& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


      // joinMethod Field Functions 
      bool hasJoinMethod() const { return this->joinMethod_ != nullptr;};
      void deleteJoinMethod() { this->joinMethod_ = nullptr;};
      inline string getJoinMethod() const { DARABONBA_PTR_GET_DEFAULT(joinMethod_, "") };
      inline Account& setJoinMethod(string joinMethod) { DARABONBA_PTR_SET_VALUE(joinMethod_, joinMethod) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Account& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
      inline Account& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


      // resourceDirectoryId Field Functions 
      bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
      void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
      inline string getResourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
      inline Account& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Account& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Account& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The account ID.
      shared_ptr<string> accountId_ {};
      // The account name.
      shared_ptr<string> accountName_ {};
      // The member name.
      shared_ptr<string> displayName_ {};
      // The folder ID.
      shared_ptr<string> folderId_ {};
      // The method used by the member to join the resource directory. Valid values:
      // 
      // - invited: The member is invited to join.
      // - created: The member is created in the resource directory.
      shared_ptr<string> joinMethod_ {};
      // The time when the member was last modified. The time is displayed in UTC, as specified by RFC 3339, with Z indicating UTC.
      shared_ptr<string> modifyTime_ {};
      // The account record ID.
      shared_ptr<string> recordId_ {};
      // The resource directory ID.
      shared_ptr<string> resourceDirectoryId_ {};
      // The status of the member. Valid values:
      // 
      // - CreateSuccess: The member is created.
      // - CreateVerifying: The creation is being confirmed.
      // - CreateFailed: The member failed to be created.
      // - CreateExpired: The creation has expired.
      // - CreateCancelled: The creation is canceled.
      // - PromoteVerifying: The upgrade is being confirmed.
      // - PromoteFailed: The member failed to be upgraded.
      // - PromoteExpired: The upgrade has expired.
      // - PromoteCancelled: The upgrade is canceled.
      // - PromoteSuccess: The member is upgraded.
      // - InviteSuccess: The member is invited.
      // - Removed: The member is removed.
      shared_ptr<string> status_ {};
      // The member type. The value CloudAccount indicates a cloud account.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->account_ == nullptr
        && this->requestId_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const CreateCloudAccountResponseBody::Account & getAccount() const { DARABONBA_PTR_GET_CONST(account_, CreateCloudAccountResponseBody::Account) };
    inline CreateCloudAccountResponseBody::Account getAccount() { DARABONBA_PTR_GET(account_, CreateCloudAccountResponseBody::Account) };
    inline CreateCloudAccountResponseBody& setAccount(const CreateCloudAccountResponseBody::Account & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline CreateCloudAccountResponseBody& setAccount(CreateCloudAccountResponseBody::Account && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCloudAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The member information.
    shared_ptr<CreateCloudAccountResponseBody::Account> account_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
