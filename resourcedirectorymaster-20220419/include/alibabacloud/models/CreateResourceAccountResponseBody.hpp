// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class CreateResourceAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateResourceAccountResponseBody() = default ;
    CreateResourceAccountResponseBody(const CreateResourceAccountResponseBody &) = default ;
    CreateResourceAccountResponseBody(CreateResourceAccountResponseBody &&) = default ;
    CreateResourceAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceAccountResponseBody() = default ;
    CreateResourceAccountResponseBody& operator=(const CreateResourceAccountResponseBody &) = default ;
    CreateResourceAccountResponseBody& operator=(CreateResourceAccountResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(JoinTime, joinTime_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
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
        DARABONBA_PTR_FROM_JSON(JoinTime, joinTime_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
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
        && this->accountName_ == nullptr && this->displayName_ == nullptr && this->folderId_ == nullptr && this->joinMethod_ == nullptr && this->joinTime_ == nullptr
        && this->modifyTime_ == nullptr && this->resourceDirectoryId_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
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


      // joinTime Field Functions 
      bool hasJoinTime() const { return this->joinTime_ != nullptr;};
      void deleteJoinTime() { this->joinTime_ = nullptr;};
      inline string getJoinTime() const { DARABONBA_PTR_GET_DEFAULT(joinTime_, "") };
      inline Account& setJoinTime(string joinTime) { DARABONBA_PTR_SET_VALUE(joinTime_, joinTime) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Account& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


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
      // The Alibaba Cloud account ID of the member.
      shared_ptr<string> accountId_ {};
      // The Alibaba Cloud account name of the member.
      shared_ptr<string> accountName_ {};
      // The display name of the member.
      shared_ptr<string> displayName_ {};
      // The ID of the folder.
      shared_ptr<string> folderId_ {};
      // The way in which the member joins the resource directory. Valid values:
      // 
      // *   invited: The member is invited to join the resource directory.
      // *   created: The member is directly created in the resource directory.
      shared_ptr<string> joinMethod_ {};
      // The time when the member joined the resource directory. The time is displayed in UTC.
      shared_ptr<string> joinTime_ {};
      // The time when the member was modified. The time is displayed in UTC.
      shared_ptr<string> modifyTime_ {};
      // The ID of the resource directory.
      shared_ptr<string> resourceDirectoryId_ {};
      // The status of the member. The value CreateSuccess indicates that the member is created.
      shared_ptr<string> status_ {};
      // The type of the member. The value ResourceAccount indicates that the member is a resource account.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->account_ == nullptr
        && this->requestId_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const CreateResourceAccountResponseBody::Account & getAccount() const { DARABONBA_PTR_GET_CONST(account_, CreateResourceAccountResponseBody::Account) };
    inline CreateResourceAccountResponseBody::Account getAccount() { DARABONBA_PTR_GET(account_, CreateResourceAccountResponseBody::Account) };
    inline CreateResourceAccountResponseBody& setAccount(const CreateResourceAccountResponseBody::Account & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline CreateResourceAccountResponseBody& setAccount(CreateResourceAccountResponseBody::Account && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateResourceAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information of the member.
    shared_ptr<CreateResourceAccountResponseBody::Account> account_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
