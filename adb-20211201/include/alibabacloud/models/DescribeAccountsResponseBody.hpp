// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountList, accountList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountList, accountList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAccountsResponseBody() = default ;
    DescribeAccountsResponseBody(const DescribeAccountsResponseBody &) = default ;
    DescribeAccountsResponseBody(DescribeAccountsResponseBody &&) = default ;
    DescribeAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsResponseBody() = default ;
    DescribeAccountsResponseBody& operator=(const DescribeAccountsResponseBody &) = default ;
    DescribeAccountsResponseBody& operator=(DescribeAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountList& obj) { 
        DARABONBA_PTR_TO_JSON(DBAccount, DBAccount_);
      };
      friend void from_json(const Darabonba::Json& j, AccountList& obj) { 
        DARABONBA_PTR_FROM_JSON(DBAccount, DBAccount_);
      };
      AccountList() = default ;
      AccountList(const AccountList &) = default ;
      AccountList(AccountList &&) = default ;
      AccountList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountList() = default ;
      AccountList& operator=(const AccountList &) = default ;
      AccountList& operator=(AccountList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBAccount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBAccount& obj) { 
          DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
          DARABONBA_PTR_TO_JSON(AccountType, accountType_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(RamUsers, ramUsers_);
        };
        friend void from_json(const Darabonba::Json& j, DBAccount& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
          DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(RamUsers, ramUsers_);
        };
        DBAccount() = default ;
        DBAccount(const DBAccount &) = default ;
        DBAccount(DBAccount &&) = default ;
        DBAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBAccount() = default ;
        DBAccount& operator=(const DBAccount &) = default ;
        DBAccount& operator=(DBAccount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountDescription_ == nullptr
        && this->accountName_ == nullptr && this->accountStatus_ == nullptr && this->accountType_ == nullptr && this->engine_ == nullptr && this->ramUsers_ == nullptr; };
        // accountDescription Field Functions 
        bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
        void deleteAccountDescription() { this->accountDescription_ = nullptr;};
        inline string getAccountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
        inline DBAccount& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline DBAccount& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // accountStatus Field Functions 
        bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
        void deleteAccountStatus() { this->accountStatus_ = nullptr;};
        inline string getAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
        inline DBAccount& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


        // accountType Field Functions 
        bool hasAccountType() const { return this->accountType_ != nullptr;};
        void deleteAccountType() { this->accountType_ = nullptr;};
        inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
        inline DBAccount& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline DBAccount& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // ramUsers Field Functions 
        bool hasRamUsers() const { return this->ramUsers_ != nullptr;};
        void deleteRamUsers() { this->ramUsers_ = nullptr;};
        inline string getRamUsers() const { DARABONBA_PTR_GET_DEFAULT(ramUsers_, "") };
        inline DBAccount& setRamUsers(string ramUsers) { DARABONBA_PTR_SET_VALUE(ramUsers_, ramUsers) };


      protected:
        // The description of the database account.
        shared_ptr<string> accountDescription_ {};
        // The name of the database account.
        shared_ptr<string> accountName_ {};
        // The status of the database account. Valid values:
        // 
        // *   **Creating**
        // *   **Available**
        // *   **Deleting**
        shared_ptr<string> accountStatus_ {};
        // The type of the database account. Valid values:
        // 
        // *   **Normal**: standard account.
        // *   **Super**: privileged account.
        shared_ptr<string> accountType_ {};
        // The database engine of the cluster. Valid values:
        // 
        // *   **AnalyticDB**: the AnalyticDB for MySQL engine.
        // *   **Clickhouse**: the wide table engine.
        shared_ptr<string> engine_ {};
        // The ID of the Resource Access Management (RAM) user.
        shared_ptr<string> ramUsers_ {};
      };

      virtual bool empty() const override { return this->DBAccount_ == nullptr; };
      // DBAccount Field Functions 
      bool hasDBAccount() const { return this->DBAccount_ != nullptr;};
      void deleteDBAccount() { this->DBAccount_ = nullptr;};
      inline const vector<AccountList::DBAccount> & getDBAccount() const { DARABONBA_PTR_GET_CONST(DBAccount_, vector<AccountList::DBAccount>) };
      inline vector<AccountList::DBAccount> getDBAccount() { DARABONBA_PTR_GET(DBAccount_, vector<AccountList::DBAccount>) };
      inline AccountList& setDBAccount(const vector<AccountList::DBAccount> & dBAccount) { DARABONBA_PTR_SET_VALUE(DBAccount_, dBAccount) };
      inline AccountList& setDBAccount(vector<AccountList::DBAccount> && dBAccount) { DARABONBA_PTR_SET_RVALUE(DBAccount_, dBAccount) };


    protected:
      shared_ptr<vector<AccountList::DBAccount>> DBAccount_ {};
    };

    virtual bool empty() const override { return this->accountList_ == nullptr
        && this->requestId_ == nullptr; };
    // accountList Field Functions 
    bool hasAccountList() const { return this->accountList_ != nullptr;};
    void deleteAccountList() { this->accountList_ = nullptr;};
    inline const DescribeAccountsResponseBody::AccountList & getAccountList() const { DARABONBA_PTR_GET_CONST(accountList_, DescribeAccountsResponseBody::AccountList) };
    inline DescribeAccountsResponseBody::AccountList getAccountList() { DARABONBA_PTR_GET(accountList_, DescribeAccountsResponseBody::AccountList) };
    inline DescribeAccountsResponseBody& setAccountList(const DescribeAccountsResponseBody::AccountList & accountList) { DARABONBA_PTR_SET_VALUE(accountList_, accountList) };
    inline DescribeAccountsResponseBody& setAccountList(DescribeAccountsResponseBody::AccountList && accountList) { DARABONBA_PTR_SET_RVALUE(accountList_, accountList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried database accounts.
    shared_ptr<DescribeAccountsResponseBody::AccountList> accountList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
