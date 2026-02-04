// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDELEGATEDADMINISTRATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDELEGATEDADMINISTRATORSRESPONSEBODY_HPP_
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
  class ListDelegatedAdministratorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDelegatedAdministratorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDelegatedAdministratorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDelegatedAdministratorsResponseBody() = default ;
    ListDelegatedAdministratorsResponseBody(const ListDelegatedAdministratorsResponseBody &) = default ;
    ListDelegatedAdministratorsResponseBody(ListDelegatedAdministratorsResponseBody &&) = default ;
    ListDelegatedAdministratorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDelegatedAdministratorsResponseBody() = default ;
    ListDelegatedAdministratorsResponseBody& operator=(const ListDelegatedAdministratorsResponseBody &) = default ;
    ListDelegatedAdministratorsResponseBody& operator=(ListDelegatedAdministratorsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(DelegationEnabledTime, delegationEnabledTime_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(JoinMethod, joinMethod_);
          DARABONBA_PTR_TO_JSON(ServicePrincipal, servicePrincipal_);
        };
        friend void from_json(const Darabonba::Json& j, Account& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(DelegationEnabledTime, delegationEnabledTime_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(JoinMethod, joinMethod_);
          DARABONBA_PTR_FROM_JSON(ServicePrincipal, servicePrincipal_);
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
        && this->delegationEnabledTime_ == nullptr && this->displayName_ == nullptr && this->joinMethod_ == nullptr && this->servicePrincipal_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
        inline Account& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // delegationEnabledTime Field Functions 
        bool hasDelegationEnabledTime() const { return this->delegationEnabledTime_ != nullptr;};
        void deleteDelegationEnabledTime() { this->delegationEnabledTime_ = nullptr;};
        inline string getDelegationEnabledTime() const { DARABONBA_PTR_GET_DEFAULT(delegationEnabledTime_, "") };
        inline Account& setDelegationEnabledTime(string delegationEnabledTime) { DARABONBA_PTR_SET_VALUE(delegationEnabledTime_, delegationEnabledTime) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Account& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // joinMethod Field Functions 
        bool hasJoinMethod() const { return this->joinMethod_ != nullptr;};
        void deleteJoinMethod() { this->joinMethod_ = nullptr;};
        inline string getJoinMethod() const { DARABONBA_PTR_GET_DEFAULT(joinMethod_, "") };
        inline Account& setJoinMethod(string joinMethod) { DARABONBA_PTR_SET_VALUE(joinMethod_, joinMethod) };


        // servicePrincipal Field Functions 
        bool hasServicePrincipal() const { return this->servicePrincipal_ != nullptr;};
        void deleteServicePrincipal() { this->servicePrincipal_ = nullptr;};
        inline string getServicePrincipal() const { DARABONBA_PTR_GET_DEFAULT(servicePrincipal_, "") };
        inline Account& setServicePrincipal(string servicePrincipal) { DARABONBA_PTR_SET_VALUE(servicePrincipal_, servicePrincipal) };


      protected:
        // The Alibaba Cloud account ID of the member.
        shared_ptr<string> accountId_ {};
        // The time when the member was specified as a delegated administrator account.
        shared_ptr<string> delegationEnabledTime_ {};
        // The display name of the member.
        shared_ptr<string> displayName_ {};
        // The way in which the member joins the resource directory. Valid values:
        // 
        // *   invited: The member is invited to join the resource directory.
        // *   created: The member is directly created in the resource directory.
        shared_ptr<string> joinMethod_ {};
        // The identifier of the trusted service.
        shared_ptr<string> servicePrincipal_ {};
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
    inline const ListDelegatedAdministratorsResponseBody::Accounts & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, ListDelegatedAdministratorsResponseBody::Accounts) };
    inline ListDelegatedAdministratorsResponseBody::Accounts getAccounts() { DARABONBA_PTR_GET(accounts_, ListDelegatedAdministratorsResponseBody::Accounts) };
    inline ListDelegatedAdministratorsResponseBody& setAccounts(const ListDelegatedAdministratorsResponseBody::Accounts & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline ListDelegatedAdministratorsResponseBody& setAccounts(ListDelegatedAdministratorsResponseBody::Accounts && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListDelegatedAdministratorsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDelegatedAdministratorsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDelegatedAdministratorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDelegatedAdministratorsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the delegated administrator accounts.
    shared_ptr<ListDelegatedAdministratorsResponseBody::Accounts> accounts_ {};
    // The page number of the returned page.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
