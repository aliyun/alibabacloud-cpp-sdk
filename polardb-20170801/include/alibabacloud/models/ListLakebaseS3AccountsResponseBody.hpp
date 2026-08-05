// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLAKEBASES3ACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLAKEBASES3ACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ListLakebaseS3AccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLakebaseS3AccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(S3Accounts, s3Accounts_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLakebaseS3AccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(S3Accounts, s3Accounts_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLakebaseS3AccountsResponseBody() = default ;
    ListLakebaseS3AccountsResponseBody(const ListLakebaseS3AccountsResponseBody &) = default ;
    ListLakebaseS3AccountsResponseBody(ListLakebaseS3AccountsResponseBody &&) = default ;
    ListLakebaseS3AccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLakebaseS3AccountsResponseBody() = default ;
    ListLakebaseS3AccountsResponseBody& operator=(const ListLakebaseS3AccountsResponseBody &) = default ;
    ListLakebaseS3AccountsResponseBody& operator=(ListLakebaseS3AccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class S3Accounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const S3Accounts& obj) { 
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
        DARABONBA_PTR_TO_JSON(UserAccAk, userAccAk_);
        DARABONBA_PTR_TO_JSON(UserAccSk, userAccSk_);
      };
      friend void from_json(const Darabonba::Json& j, S3Accounts& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(UserAccAk, userAccAk_);
        DARABONBA_PTR_FROM_JSON(UserAccSk, userAccSk_);
      };
      S3Accounts() = default ;
      S3Accounts(const S3Accounts &) = default ;
      S3Accounts(S3Accounts &&) = default ;
      S3Accounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~S3Accounts() = default ;
      S3Accounts& operator=(const S3Accounts &) = default ;
      S3Accounts& operator=(S3Accounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountType_ == nullptr
        && this->userAccAk_ == nullptr && this->userAccSk_ == nullptr; };
      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
      inline S3Accounts& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // userAccAk Field Functions 
      bool hasUserAccAk() const { return this->userAccAk_ != nullptr;};
      void deleteUserAccAk() { this->userAccAk_ = nullptr;};
      inline string getUserAccAk() const { DARABONBA_PTR_GET_DEFAULT(userAccAk_, "") };
      inline S3Accounts& setUserAccAk(string userAccAk) { DARABONBA_PTR_SET_VALUE(userAccAk_, userAccAk) };


      // userAccSk Field Functions 
      bool hasUserAccSk() const { return this->userAccSk_ != nullptr;};
      void deleteUserAccSk() { this->userAccSk_ = nullptr;};
      inline string getUserAccSk() const { DARABONBA_PTR_GET_DEFAULT(userAccSk_, "") };
      inline S3Accounts& setUserAccSk(string userAccSk) { DARABONBA_PTR_SET_VALUE(userAccSk_, userAccSk) };


    protected:
      // The account type. Valid values:
      // - default: the built-in default account.
      // - user: a user-created account.
      shared_ptr<string> accountType_ {};
      // The access key of the S3 account.
      shared_ptr<string> userAccAk_ {};
      // The secret key of the S3 account (displayed in masked format).
      shared_ptr<string> userAccSk_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->s3Accounts_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLakebaseS3AccountsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLakebaseS3AccountsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLakebaseS3AccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // s3Accounts Field Functions 
    bool hasS3Accounts() const { return this->s3Accounts_ != nullptr;};
    void deleteS3Accounts() { this->s3Accounts_ = nullptr;};
    inline const vector<ListLakebaseS3AccountsResponseBody::S3Accounts> & getS3Accounts() const { DARABONBA_PTR_GET_CONST(s3Accounts_, vector<ListLakebaseS3AccountsResponseBody::S3Accounts>) };
    inline vector<ListLakebaseS3AccountsResponseBody::S3Accounts> getS3Accounts() { DARABONBA_PTR_GET(s3Accounts_, vector<ListLakebaseS3AccountsResponseBody::S3Accounts>) };
    inline ListLakebaseS3AccountsResponseBody& setS3Accounts(const vector<ListLakebaseS3AccountsResponseBody::S3Accounts> & s3Accounts) { DARABONBA_PTR_SET_VALUE(s3Accounts_, s3Accounts) };
    inline ListLakebaseS3AccountsResponseBody& setS3Accounts(vector<ListLakebaseS3AccountsResponseBody::S3Accounts> && s3Accounts) { DARABONBA_PTR_SET_RVALUE(s3Accounts_, s3Accounts) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLakebaseS3AccountsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of S3 accounts.
    shared_ptr<vector<ListLakebaseS3AccountsResponseBody::S3Accounts>> s3Accounts_ {};
    // The total number of accounts.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
