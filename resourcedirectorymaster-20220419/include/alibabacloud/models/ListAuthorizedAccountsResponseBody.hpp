// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDACCOUNTSRESPONSEBODY_HPP_
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
  class ListAuthorizedAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAuthorizedAccountsResponseBody() = default ;
    ListAuthorizedAccountsResponseBody(const ListAuthorizedAccountsResponseBody &) = default ;
    ListAuthorizedAccountsResponseBody(ListAuthorizedAccountsResponseBody &&) = default ;
    ListAuthorizedAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedAccountsResponseBody() = default ;
    ListAuthorizedAccountsResponseBody& operator=(const ListAuthorizedAccountsResponseBody &) = default ;
    ListAuthorizedAccountsResponseBody& operator=(ListAuthorizedAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Accounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Accounts& obj) { 
        DARABONBA_PTR_TO_JSON(Account, account_);
      };
      friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
        DARABONBA_PTR_FROM_JSON(Account, account_);
      };
      Accounts() = default ;
      Accounts(const Accounts &) = default ;
      Accounts(Accounts &&) = default ;
      Accounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Accounts() = default ;
      Accounts& operator=(const Accounts &) = default ;
      Accounts& operator=(Accounts &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ResourceDirectoryPath, resourceDirectoryPath_);
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
          DARABONBA_PTR_FROM_JSON(ResourceDirectoryPath, resourceDirectoryPath_);
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
        && this->modifyTime_ == nullptr && this->resourceDirectoryId_ == nullptr && this->resourceDirectoryPath_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
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


        // resourceDirectoryPath Field Functions 
        bool hasResourceDirectoryPath() const { return this->resourceDirectoryPath_ != nullptr;};
        void deleteResourceDirectoryPath() { this->resourceDirectoryPath_ = nullptr;};
        inline string getResourceDirectoryPath() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryPath_, "") };
        inline Account& setResourceDirectoryPath(string resourceDirectoryPath) { DARABONBA_PTR_SET_VALUE(resourceDirectoryPath_, resourceDirectoryPath) };


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
        // The name of the member.
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
        // The RDPath of the member.
        shared_ptr<string> resourceDirectoryPath_ {};
        // The status of the member. Valid values:
        // 
        // *   CreateSuccess: The member is created.
        // *   PromoteVerifying: The upgrade of the member is under confirmation.
        // *   PromoteFailed: The upgrade of the member fails.
        // *   PromoteExpired: The upgrade of the member expires.
        // *   PromoteCancelled: The upgrade of the member is canceled.
        // *   PromoteSuccess: The member is upgraded.
        // *   InviteSuccess: The member accepts the invitation.
        shared_ptr<string> status_ {};
        // The type of the member. Valid values:
        // 
        // *   CloudAccount: cloud account
        // *   ResourceAccount: resource account
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->account_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline const vector<Accounts::Account> & getAccount() const { DARABONBA_PTR_GET_CONST(account_, vector<Accounts::Account>) };
      inline vector<Accounts::Account> getAccount() { DARABONBA_PTR_GET(account_, vector<Accounts::Account>) };
      inline Accounts& setAccount(const vector<Accounts::Account> & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
      inline Accounts& setAccount(vector<Accounts::Account> && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


    protected:
      shared_ptr<vector<Accounts::Account>> account_ {};
    };

    virtual bool empty() const override { return this->accounts_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const ListAuthorizedAccountsResponseBody::Accounts & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, ListAuthorizedAccountsResponseBody::Accounts) };
    inline ListAuthorizedAccountsResponseBody::Accounts getAccounts() { DARABONBA_PTR_GET(accounts_, ListAuthorizedAccountsResponseBody::Accounts) };
    inline ListAuthorizedAccountsResponseBody& setAccounts(const ListAuthorizedAccountsResponseBody::Accounts & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline ListAuthorizedAccountsResponseBody& setAccounts(ListAuthorizedAccountsResponseBody::Accounts && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAuthorizedAccountsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAuthorizedAccountsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizedAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAuthorizedAccountsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the member.
    shared_ptr<ListAuthorizedAccountsResponseBody::Accounts> accounts_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
