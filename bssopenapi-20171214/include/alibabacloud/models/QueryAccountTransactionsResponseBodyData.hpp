// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTTRANSACTIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTTRANSACTIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAccountTransactionsResponseBodyDataAccountTransactionsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryAccountTransactionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountTransactionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountTransactionsList, accountTransactionsList_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountTransactionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountTransactionsList, accountTransactionsList_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryAccountTransactionsResponseBodyData() = default ;
    QueryAccountTransactionsResponseBodyData(const QueryAccountTransactionsResponseBodyData &) = default ;
    QueryAccountTransactionsResponseBodyData(QueryAccountTransactionsResponseBodyData &&) = default ;
    QueryAccountTransactionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountTransactionsResponseBodyData() = default ;
    QueryAccountTransactionsResponseBodyData& operator=(const QueryAccountTransactionsResponseBodyData &) = default ;
    QueryAccountTransactionsResponseBodyData& operator=(QueryAccountTransactionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->accountTransactionsList_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline QueryAccountTransactionsResponseBodyData& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountTransactionsList Field Functions 
    bool hasAccountTransactionsList() const { return this->accountTransactionsList_ != nullptr;};
    void deleteAccountTransactionsList() { this->accountTransactionsList_ = nullptr;};
    inline const Models::QueryAccountTransactionsResponseBodyDataAccountTransactionsList & accountTransactionsList() const { DARABONBA_PTR_GET_CONST(accountTransactionsList_, Models::QueryAccountTransactionsResponseBodyDataAccountTransactionsList) };
    inline Models::QueryAccountTransactionsResponseBodyDataAccountTransactionsList accountTransactionsList() { DARABONBA_PTR_GET(accountTransactionsList_, Models::QueryAccountTransactionsResponseBodyDataAccountTransactionsList) };
    inline QueryAccountTransactionsResponseBodyData& setAccountTransactionsList(const Models::QueryAccountTransactionsResponseBodyDataAccountTransactionsList & accountTransactionsList) { DARABONBA_PTR_SET_VALUE(accountTransactionsList_, accountTransactionsList) };
    inline QueryAccountTransactionsResponseBodyData& setAccountTransactionsList(Models::QueryAccountTransactionsResponseBodyDataAccountTransactionsList && accountTransactionsList) { DARABONBA_PTR_SET_RVALUE(accountTransactionsList_, accountTransactionsList) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryAccountTransactionsResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryAccountTransactionsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryAccountTransactionsResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The name of your Alibaba Cloud account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The information about transactions.
    std::shared_ptr<Models::QueryAccountTransactionsResponseBodyDataAccountTransactionsList> accountTransactionsList_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
