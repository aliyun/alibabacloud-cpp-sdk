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
          DARABONBA_PTR_TO_JSON(PromqlInsertPrivileges, promqlInsertPrivileges_);
          DARABONBA_PTR_TO_JSON(PromqlSelectNodes, promqlSelectNodes_);
          DARABONBA_PTR_TO_JSON(PromqlSelectPrivileges, promqlSelectPrivileges_);
          DARABONBA_PTR_TO_JSON(RamUserList, ramUserList_);
          DARABONBA_PTR_TO_JSON(RamUsers, ramUsers_);
          DARABONBA_PTR_TO_JSON(promqlSelectNodePercentage, promqlSelectNodePercentage_);
        };
        friend void from_json(const Darabonba::Json& j, DBAccount& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
          DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(PromqlInsertPrivileges, promqlInsertPrivileges_);
          DARABONBA_PTR_FROM_JSON(PromqlSelectNodes, promqlSelectNodes_);
          DARABONBA_PTR_FROM_JSON(PromqlSelectPrivileges, promqlSelectPrivileges_);
          DARABONBA_PTR_FROM_JSON(RamUserList, ramUserList_);
          DARABONBA_PTR_FROM_JSON(RamUsers, ramUsers_);
          DARABONBA_PTR_FROM_JSON(promqlSelectNodePercentage, promqlSelectNodePercentage_);
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
        class RamUserList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RamUserList& obj) { 
            DARABONBA_PTR_TO_JSON(RamUserList, ramUserList_);
          };
          friend void from_json(const Darabonba::Json& j, RamUserList& obj) { 
            DARABONBA_PTR_FROM_JSON(RamUserList, ramUserList_);
          };
          RamUserList() = default ;
          RamUserList(const RamUserList &) = default ;
          RamUserList(RamUserList &&) = default ;
          RamUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RamUserList() = default ;
          RamUserList& operator=(const RamUserList &) = default ;
          RamUserList& operator=(RamUserList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ramUserList_ == nullptr; };
          // ramUserList Field Functions 
          bool hasRamUserList() const { return this->ramUserList_ != nullptr;};
          void deleteRamUserList() { this->ramUserList_ = nullptr;};
          inline const vector<string> & getRamUserList() const { DARABONBA_PTR_GET_CONST(ramUserList_, vector<string>) };
          inline vector<string> getRamUserList() { DARABONBA_PTR_GET(ramUserList_, vector<string>) };
          inline RamUserList& setRamUserList(const vector<string> & ramUserList) { DARABONBA_PTR_SET_VALUE(ramUserList_, ramUserList) };
          inline RamUserList& setRamUserList(vector<string> && ramUserList) { DARABONBA_PTR_SET_RVALUE(ramUserList_, ramUserList) };


        protected:
          shared_ptr<vector<string>> ramUserList_ {};
        };

        class PromqlSelectPrivileges : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PromqlSelectPrivileges& obj) { 
            DARABONBA_PTR_TO_JSON(PromqlSelectPrivileges, promqlSelectPrivileges_);
          };
          friend void from_json(const Darabonba::Json& j, PromqlSelectPrivileges& obj) { 
            DARABONBA_PTR_FROM_JSON(PromqlSelectPrivileges, promqlSelectPrivileges_);
          };
          PromqlSelectPrivileges() = default ;
          PromqlSelectPrivileges(const PromqlSelectPrivileges &) = default ;
          PromqlSelectPrivileges(PromqlSelectPrivileges &&) = default ;
          PromqlSelectPrivileges(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PromqlSelectPrivileges() = default ;
          PromqlSelectPrivileges& operator=(const PromqlSelectPrivileges &) = default ;
          PromqlSelectPrivileges& operator=(PromqlSelectPrivileges &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->promqlSelectPrivileges_ == nullptr; };
          // promqlSelectPrivileges Field Functions 
          bool hasPromqlSelectPrivileges() const { return this->promqlSelectPrivileges_ != nullptr;};
          void deletePromqlSelectPrivileges() { this->promqlSelectPrivileges_ = nullptr;};
          inline const vector<string> & getPromqlSelectPrivileges() const { DARABONBA_PTR_GET_CONST(promqlSelectPrivileges_, vector<string>) };
          inline vector<string> getPromqlSelectPrivileges() { DARABONBA_PTR_GET(promqlSelectPrivileges_, vector<string>) };
          inline PromqlSelectPrivileges& setPromqlSelectPrivileges(const vector<string> & promqlSelectPrivileges) { DARABONBA_PTR_SET_VALUE(promqlSelectPrivileges_, promqlSelectPrivileges) };
          inline PromqlSelectPrivileges& setPromqlSelectPrivileges(vector<string> && promqlSelectPrivileges) { DARABONBA_PTR_SET_RVALUE(promqlSelectPrivileges_, promqlSelectPrivileges) };


        protected:
          shared_ptr<vector<string>> promqlSelectPrivileges_ {};
        };

        class PromqlSelectNodes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PromqlSelectNodes& obj) { 
            DARABONBA_PTR_TO_JSON(PromqlSelectNodes, promqlSelectNodes_);
          };
          friend void from_json(const Darabonba::Json& j, PromqlSelectNodes& obj) { 
            DARABONBA_PTR_FROM_JSON(PromqlSelectNodes, promqlSelectNodes_);
          };
          PromqlSelectNodes() = default ;
          PromqlSelectNodes(const PromqlSelectNodes &) = default ;
          PromqlSelectNodes(PromqlSelectNodes &&) = default ;
          PromqlSelectNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PromqlSelectNodes() = default ;
          PromqlSelectNodes& operator=(const PromqlSelectNodes &) = default ;
          PromqlSelectNodes& operator=(PromqlSelectNodes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->promqlSelectNodes_ == nullptr; };
          // promqlSelectNodes Field Functions 
          bool hasPromqlSelectNodes() const { return this->promqlSelectNodes_ != nullptr;};
          void deletePromqlSelectNodes() { this->promqlSelectNodes_ = nullptr;};
          inline const vector<string> & getPromqlSelectNodes() const { DARABONBA_PTR_GET_CONST(promqlSelectNodes_, vector<string>) };
          inline vector<string> getPromqlSelectNodes() { DARABONBA_PTR_GET(promqlSelectNodes_, vector<string>) };
          inline PromqlSelectNodes& setPromqlSelectNodes(const vector<string> & promqlSelectNodes) { DARABONBA_PTR_SET_VALUE(promqlSelectNodes_, promqlSelectNodes) };
          inline PromqlSelectNodes& setPromqlSelectNodes(vector<string> && promqlSelectNodes) { DARABONBA_PTR_SET_RVALUE(promqlSelectNodes_, promqlSelectNodes) };


        protected:
          shared_ptr<vector<string>> promqlSelectNodes_ {};
        };

        class PromqlInsertPrivileges : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PromqlInsertPrivileges& obj) { 
            DARABONBA_PTR_TO_JSON(PromqlInsertPrivileges, promqlInsertPrivileges_);
          };
          friend void from_json(const Darabonba::Json& j, PromqlInsertPrivileges& obj) { 
            DARABONBA_PTR_FROM_JSON(PromqlInsertPrivileges, promqlInsertPrivileges_);
          };
          PromqlInsertPrivileges() = default ;
          PromqlInsertPrivileges(const PromqlInsertPrivileges &) = default ;
          PromqlInsertPrivileges(PromqlInsertPrivileges &&) = default ;
          PromqlInsertPrivileges(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PromqlInsertPrivileges() = default ;
          PromqlInsertPrivileges& operator=(const PromqlInsertPrivileges &) = default ;
          PromqlInsertPrivileges& operator=(PromqlInsertPrivileges &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->promqlInsertPrivileges_ == nullptr; };
          // promqlInsertPrivileges Field Functions 
          bool hasPromqlInsertPrivileges() const { return this->promqlInsertPrivileges_ != nullptr;};
          void deletePromqlInsertPrivileges() { this->promqlInsertPrivileges_ = nullptr;};
          inline const vector<string> & getPromqlInsertPrivileges() const { DARABONBA_PTR_GET_CONST(promqlInsertPrivileges_, vector<string>) };
          inline vector<string> getPromqlInsertPrivileges() { DARABONBA_PTR_GET(promqlInsertPrivileges_, vector<string>) };
          inline PromqlInsertPrivileges& setPromqlInsertPrivileges(const vector<string> & promqlInsertPrivileges) { DARABONBA_PTR_SET_VALUE(promqlInsertPrivileges_, promqlInsertPrivileges) };
          inline PromqlInsertPrivileges& setPromqlInsertPrivileges(vector<string> && promqlInsertPrivileges) { DARABONBA_PTR_SET_RVALUE(promqlInsertPrivileges_, promqlInsertPrivileges) };


        protected:
          shared_ptr<vector<string>> promqlInsertPrivileges_ {};
        };

        virtual bool empty() const override { return this->accountDescription_ == nullptr
        && this->accountName_ == nullptr && this->accountStatus_ == nullptr && this->accountType_ == nullptr && this->engine_ == nullptr && this->promqlInsertPrivileges_ == nullptr
        && this->promqlSelectNodes_ == nullptr && this->promqlSelectPrivileges_ == nullptr && this->ramUserList_ == nullptr && this->ramUsers_ == nullptr && this->promqlSelectNodePercentage_ == nullptr; };
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


        // promqlInsertPrivileges Field Functions 
        bool hasPromqlInsertPrivileges() const { return this->promqlInsertPrivileges_ != nullptr;};
        void deletePromqlInsertPrivileges() { this->promqlInsertPrivileges_ = nullptr;};
        inline const DBAccount::PromqlInsertPrivileges & getPromqlInsertPrivileges() const { DARABONBA_PTR_GET_CONST(promqlInsertPrivileges_, DBAccount::PromqlInsertPrivileges) };
        inline DBAccount::PromqlInsertPrivileges getPromqlInsertPrivileges() { DARABONBA_PTR_GET(promqlInsertPrivileges_, DBAccount::PromqlInsertPrivileges) };
        inline DBAccount& setPromqlInsertPrivileges(const DBAccount::PromqlInsertPrivileges & promqlInsertPrivileges) { DARABONBA_PTR_SET_VALUE(promqlInsertPrivileges_, promqlInsertPrivileges) };
        inline DBAccount& setPromqlInsertPrivileges(DBAccount::PromqlInsertPrivileges && promqlInsertPrivileges) { DARABONBA_PTR_SET_RVALUE(promqlInsertPrivileges_, promqlInsertPrivileges) };


        // promqlSelectNodes Field Functions 
        bool hasPromqlSelectNodes() const { return this->promqlSelectNodes_ != nullptr;};
        void deletePromqlSelectNodes() { this->promqlSelectNodes_ = nullptr;};
        inline const DBAccount::PromqlSelectNodes & getPromqlSelectNodes() const { DARABONBA_PTR_GET_CONST(promqlSelectNodes_, DBAccount::PromqlSelectNodes) };
        inline DBAccount::PromqlSelectNodes getPromqlSelectNodes() { DARABONBA_PTR_GET(promqlSelectNodes_, DBAccount::PromqlSelectNodes) };
        inline DBAccount& setPromqlSelectNodes(const DBAccount::PromqlSelectNodes & promqlSelectNodes) { DARABONBA_PTR_SET_VALUE(promqlSelectNodes_, promqlSelectNodes) };
        inline DBAccount& setPromqlSelectNodes(DBAccount::PromqlSelectNodes && promqlSelectNodes) { DARABONBA_PTR_SET_RVALUE(promqlSelectNodes_, promqlSelectNodes) };


        // promqlSelectPrivileges Field Functions 
        bool hasPromqlSelectPrivileges() const { return this->promqlSelectPrivileges_ != nullptr;};
        void deletePromqlSelectPrivileges() { this->promqlSelectPrivileges_ = nullptr;};
        inline const DBAccount::PromqlSelectPrivileges & getPromqlSelectPrivileges() const { DARABONBA_PTR_GET_CONST(promqlSelectPrivileges_, DBAccount::PromqlSelectPrivileges) };
        inline DBAccount::PromqlSelectPrivileges getPromqlSelectPrivileges() { DARABONBA_PTR_GET(promqlSelectPrivileges_, DBAccount::PromqlSelectPrivileges) };
        inline DBAccount& setPromqlSelectPrivileges(const DBAccount::PromqlSelectPrivileges & promqlSelectPrivileges) { DARABONBA_PTR_SET_VALUE(promqlSelectPrivileges_, promqlSelectPrivileges) };
        inline DBAccount& setPromqlSelectPrivileges(DBAccount::PromqlSelectPrivileges && promqlSelectPrivileges) { DARABONBA_PTR_SET_RVALUE(promqlSelectPrivileges_, promqlSelectPrivileges) };


        // ramUserList Field Functions 
        bool hasRamUserList() const { return this->ramUserList_ != nullptr;};
        void deleteRamUserList() { this->ramUserList_ = nullptr;};
        inline const DBAccount::RamUserList & getRamUserList() const { DARABONBA_PTR_GET_CONST(ramUserList_, DBAccount::RamUserList) };
        inline DBAccount::RamUserList getRamUserList() { DARABONBA_PTR_GET(ramUserList_, DBAccount::RamUserList) };
        inline DBAccount& setRamUserList(const DBAccount::RamUserList & ramUserList) { DARABONBA_PTR_SET_VALUE(ramUserList_, ramUserList) };
        inline DBAccount& setRamUserList(DBAccount::RamUserList && ramUserList) { DARABONBA_PTR_SET_RVALUE(ramUserList_, ramUserList) };


        // ramUsers Field Functions 
        bool hasRamUsers() const { return this->ramUsers_ != nullptr;};
        void deleteRamUsers() { this->ramUsers_ = nullptr;};
        inline string getRamUsers() const { DARABONBA_PTR_GET_DEFAULT(ramUsers_, "") };
        inline DBAccount& setRamUsers(string ramUsers) { DARABONBA_PTR_SET_VALUE(ramUsers_, ramUsers) };


        // promqlSelectNodePercentage Field Functions 
        bool hasPromqlSelectNodePercentage() const { return this->promqlSelectNodePercentage_ != nullptr;};
        void deletePromqlSelectNodePercentage() { this->promqlSelectNodePercentage_ = nullptr;};
        inline double getPromqlSelectNodePercentage() const { DARABONBA_PTR_GET_DEFAULT(promqlSelectNodePercentage_, 0.0) };
        inline DBAccount& setPromqlSelectNodePercentage(double promqlSelectNodePercentage) { DARABONBA_PTR_SET_VALUE(promqlSelectNodePercentage_, promqlSelectNodePercentage) };


      protected:
        shared_ptr<string> accountDescription_ {};
        shared_ptr<string> accountName_ {};
        shared_ptr<string> accountStatus_ {};
        shared_ptr<string> accountType_ {};
        shared_ptr<string> engine_ {};
        shared_ptr<DBAccount::PromqlInsertPrivileges> promqlInsertPrivileges_ {};
        shared_ptr<DBAccount::PromqlSelectNodes> promqlSelectNodes_ {};
        shared_ptr<DBAccount::PromqlSelectPrivileges> promqlSelectPrivileges_ {};
        shared_ptr<DBAccount::RamUserList> ramUserList_ {};
        shared_ptr<string> ramUsers_ {};
        shared_ptr<double> promqlSelectNodePercentage_ {};
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
    shared_ptr<DescribeAccountsResponseBody::AccountList> accountList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
