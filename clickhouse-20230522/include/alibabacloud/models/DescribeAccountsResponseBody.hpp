// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Accounts, accounts_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Accounts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Accounts& obj) { 
          DARABONBA_PTR_TO_JSON(Account, account_);
          DARABONBA_PTR_TO_JSON(AccountType, accountType_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
          DARABONBA_PTR_FROM_JSON(Account, account_);
          DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
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
        virtual bool empty() const override { return this->account_ == nullptr
        && this->accountType_ == nullptr && this->description_ == nullptr && this->status_ == nullptr; };
        // account Field Functions 
        bool hasAccount() const { return this->account_ != nullptr;};
        void deleteAccount() { this->account_ = nullptr;};
        inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
        inline Accounts& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


        // accountType Field Functions 
        bool hasAccountType() const { return this->accountType_ != nullptr;};
        void deleteAccountType() { this->accountType_ = nullptr;};
        inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
        inline Accounts& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Accounts& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Accounts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The username of the database account.
        shared_ptr<string> account_ {};
        // The type of the database account. Valid values:
        // 
        // *   **1**: standard account
        // *   **6**: privileged account
        shared_ptr<string> accountType_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The state of the database account. Valid values:
        // 
        // *   **0**: The database account is being created.
        // *   **1**: The database account is in use.
        // *   **3**: The database account is being deleted.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->accounts_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // accounts Field Functions 
      bool hasAccounts() const { return this->accounts_ != nullptr;};
      void deleteAccounts() { this->accounts_ = nullptr;};
      inline const vector<Data::Accounts> & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<Data::Accounts>) };
      inline vector<Data::Accounts> getAccounts() { DARABONBA_PTR_GET(accounts_, vector<Data::Accounts>) };
      inline Data& setAccounts(const vector<Data::Accounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
      inline Data& setAccounts(vector<Data::Accounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The database accounts.
      shared_ptr<vector<Data::Accounts>> accounts_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Valid values:
      // 
      // *   **30** (default)
      // *   **50**
      // *   **100**
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAccountsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAccountsResponseBody::Data) };
    inline DescribeAccountsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAccountsResponseBody::Data) };
    inline DescribeAccountsResponseBody& setData(const DescribeAccountsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAccountsResponseBody& setData(DescribeAccountsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result returned.
    shared_ptr<DescribeAccountsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
