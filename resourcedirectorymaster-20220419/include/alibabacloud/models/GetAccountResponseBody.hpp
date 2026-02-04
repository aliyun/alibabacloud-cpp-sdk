// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccountResponseBody() = default ;
    GetAccountResponseBody(const GetAccountResponseBody &) = default ;
    GetAccountResponseBody(GetAccountResponseBody &&) = default ;
    GetAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountResponseBody() = default ;
    GetAccountResponseBody& operator=(const GetAccountResponseBody &) = default ;
    GetAccountResponseBody& operator=(GetAccountResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(SecureMobilePhone, secureMobilePhone_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Account& obj) { 
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
        DARABONBA_PTR_FROM_JSON(SecureMobilePhone, secureMobilePhone_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->displayName_ == nullptr && this->emailStatus_ == nullptr && this->folderId_ == nullptr && this->hasSecureMobilePhone_ == nullptr
        && this->identityInformation_ == nullptr && this->joinMethod_ == nullptr && this->joinTime_ == nullptr && this->location_ == nullptr && this->modifyTime_ == nullptr
        && this->resourceDirectoryId_ == nullptr && this->resourceDirectoryPath_ == nullptr && this->secureMobilePhone_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->type_ == nullptr; };
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


      // emailStatus Field Functions 
      bool hasEmailStatus() const { return this->emailStatus_ != nullptr;};
      void deleteEmailStatus() { this->emailStatus_ = nullptr;};
      inline string getEmailStatus() const { DARABONBA_PTR_GET_DEFAULT(emailStatus_, "") };
      inline Account& setEmailStatus(string emailStatus) { DARABONBA_PTR_SET_VALUE(emailStatus_, emailStatus) };


      // folderId Field Functions 
      bool hasFolderId() const { return this->folderId_ != nullptr;};
      void deleteFolderId() { this->folderId_ = nullptr;};
      inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
      inline Account& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


      // hasSecureMobilePhone Field Functions 
      bool hasHasSecureMobilePhone() const { return this->hasSecureMobilePhone_ != nullptr;};
      void deleteHasSecureMobilePhone() { this->hasSecureMobilePhone_ = nullptr;};
      inline bool getHasSecureMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(hasSecureMobilePhone_, false) };
      inline Account& setHasSecureMobilePhone(bool hasSecureMobilePhone) { DARABONBA_PTR_SET_VALUE(hasSecureMobilePhone_, hasSecureMobilePhone) };


      // identityInformation Field Functions 
      bool hasIdentityInformation() const { return this->identityInformation_ != nullptr;};
      void deleteIdentityInformation() { this->identityInformation_ = nullptr;};
      inline string getIdentityInformation() const { DARABONBA_PTR_GET_DEFAULT(identityInformation_, "") };
      inline Account& setIdentityInformation(string identityInformation) { DARABONBA_PTR_SET_VALUE(identityInformation_, identityInformation) };


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


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline Account& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


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


      // resourceDirectoryPath Field Functions 
      bool hasResourceDirectoryPath() const { return this->resourceDirectoryPath_ != nullptr;};
      void deleteResourceDirectoryPath() { this->resourceDirectoryPath_ = nullptr;};
      inline string getResourceDirectoryPath() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryPath_, "") };
      inline Account& setResourceDirectoryPath(string resourceDirectoryPath) { DARABONBA_PTR_SET_VALUE(resourceDirectoryPath_, resourceDirectoryPath) };


      // secureMobilePhone Field Functions 
      bool hasSecureMobilePhone() const { return this->secureMobilePhone_ != nullptr;};
      void deleteSecureMobilePhone() { this->secureMobilePhone_ = nullptr;};
      inline string getSecureMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(secureMobilePhone_, "") };
      inline Account& setSecureMobilePhone(string secureMobilePhone) { DARABONBA_PTR_SET_VALUE(secureMobilePhone_, secureMobilePhone) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Account& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Account::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Account::Tags>) };
      inline vector<Account::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Account::Tags>) };
      inline Account& setTags(const vector<Account::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Account& setTags(vector<Account::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


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
      // The status of the modification for the email address bound to the member. Valid values:
      // 
      // *   If the value of this parameter is empty, no modification is performed for the email address.
      // *   WAIT_MODIFY: The modification is being performed.
      // *   CANCELLED: The modification is canceled.
      // *   EXPIRED: The modification expires.
      shared_ptr<string> emailStatus_ {};
      // The ID of the folder.
      shared_ptr<string> folderId_ {};
      // Indicates whether a mobile phone number is bound to the member for security purposes. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> hasSecureMobilePhone_ {};
      // The real-name verification information.
      shared_ptr<string> identityInformation_ {};
      // The way in which the member joins the resource directory. Valid values:
      // 
      // *   invited: The member is invited to join the resource directory.
      // *   created: The member is directly created in the resource directory.
      shared_ptr<string> joinMethod_ {};
      // The time when the member joined the resource directory.
      shared_ptr<string> joinTime_ {};
      // The location of the member in the resource directory.
      shared_ptr<string> location_ {};
      // The time when the member was modified.
      shared_ptr<string> modifyTime_ {};
      // The ID of the resource directory.
      shared_ptr<string> resourceDirectoryId_ {};
      // The path of the member in the resource directory.
      shared_ptr<string> resourceDirectoryPath_ {};
      shared_ptr<string> secureMobilePhone_ {};
      // The status of the member. Valid values:
      // 
      // *   CreateSuccess: The member is created.
      // *   PromoteVerifying: The upgrade of the member is being confirmed.
      // *   PromoteFailed: The upgrade of the member fails.
      // *   PromoteExpired: The upgrade of the member expires.
      // *   PromoteCancelled: The upgrade of the member is canceled.
      // *   PromoteSuccess: The member is upgraded.
      // *   InviteSuccess: The member accepts the invitation.
      shared_ptr<string> status_ {};
      // The tags of the member.
      shared_ptr<vector<Account::Tags>> tags_ {};
      // The type of the member. Valid values:
      // 
      // *   CloudAccount: cloud account
      // *   ResourceAccount: resource account
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->account_ == nullptr
        && this->requestId_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const GetAccountResponseBody::Account & getAccount() const { DARABONBA_PTR_GET_CONST(account_, GetAccountResponseBody::Account) };
    inline GetAccountResponseBody::Account getAccount() { DARABONBA_PTR_GET(account_, GetAccountResponseBody::Account) };
    inline GetAccountResponseBody& setAccount(const GetAccountResponseBody::Account & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline GetAccountResponseBody& setAccount(GetAccountResponseBody::Account && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the member.
    shared_ptr<GetAccountResponseBody::Account> account_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
