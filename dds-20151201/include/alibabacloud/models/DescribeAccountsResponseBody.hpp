// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
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
          DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
          DARABONBA_PTR_TO_JSON(CharacterType, characterType_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
        };
        friend void from_json(const Darabonba::Json& j, Account& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
          DARABONBA_PTR_FROM_JSON(CharacterType, characterType_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
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
        virtual bool empty() const override { return this->accountDescription_ == nullptr
        && this->accountName_ == nullptr && this->accountStatus_ == nullptr && this->characterType_ == nullptr && this->DBInstanceId_ == nullptr; };
        // accountDescription Field Functions 
        bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
        void deleteAccountDescription() { this->accountDescription_ = nullptr;};
        inline string getAccountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
        inline Account& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline Account& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // accountStatus Field Functions 
        bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
        void deleteAccountStatus() { this->accountStatus_ = nullptr;};
        inline string getAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
        inline Account& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


        // characterType Field Functions 
        bool hasCharacterType() const { return this->characterType_ != nullptr;};
        void deleteCharacterType() { this->characterType_ = nullptr;};
        inline string getCharacterType() const { DARABONBA_PTR_GET_DEFAULT(characterType_, "") };
        inline Account& setCharacterType(string characterType) { DARABONBA_PTR_SET_VALUE(characterType_, characterType) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline Account& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      protected:
        // The description of the account.
        shared_ptr<string> accountDescription_ {};
        // The name of the account.
        shared_ptr<string> accountName_ {};
        // The status of the account. Valid values:
        // 
        // *   **Unavailable**
        // *   **Available**
        shared_ptr<string> accountStatus_ {};
        // The role of the account. Valid values:
        // 
        // *   **db**: shard node
        // *   **cs**: Configserver node
        // *   **mongos**: mongos node
        // *   **logic**: sharded cluster instance
        // *   **normal**: replica set instance
        shared_ptr<string> characterType_ {};
        // The ID of the instance to which the account belongs.
        shared_ptr<string> DBInstanceId_ {};
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
        && this->requestId_ == nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const DescribeAccountsResponseBody::Accounts & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, DescribeAccountsResponseBody::Accounts) };
    inline DescribeAccountsResponseBody::Accounts getAccounts() { DARABONBA_PTR_GET(accounts_, DescribeAccountsResponseBody::Accounts) };
    inline DescribeAccountsResponseBody& setAccounts(const DescribeAccountsResponseBody::Accounts & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline DescribeAccountsResponseBody& setAccounts(DescribeAccountsResponseBody::Accounts && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the account.
    shared_ptr<DescribeAccountsResponseBody::Accounts> accounts_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
