// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSPLITITEMBILLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYSPLITITEMBILLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuerySplitItemBillResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySplitItemBillResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySplitItemBillResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountID, accountID_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySplitItemBillResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountID, accountID_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QuerySplitItemBillResponseBodyData() = default ;
    QuerySplitItemBillResponseBodyData(const QuerySplitItemBillResponseBodyData &) = default ;
    QuerySplitItemBillResponseBodyData(QuerySplitItemBillResponseBodyData &&) = default ;
    QuerySplitItemBillResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySplitItemBillResponseBodyData() = default ;
    QuerySplitItemBillResponseBodyData& operator=(const QuerySplitItemBillResponseBodyData &) = default ;
    QuerySplitItemBillResponseBodyData& operator=(QuerySplitItemBillResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountID_ != nullptr
        && this->accountName_ != nullptr && this->billingCycle_ != nullptr && this->items_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr
        && this->totalCount_ != nullptr; };
    // accountID Field Functions 
    bool hasAccountID() const { return this->accountID_ != nullptr;};
    void deleteAccountID() { this->accountID_ = nullptr;};
    inline string accountID() const { DARABONBA_PTR_GET_DEFAULT(accountID_, "") };
    inline QuerySplitItemBillResponseBodyData& setAccountID(string accountID) { DARABONBA_PTR_SET_VALUE(accountID_, accountID) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline QuerySplitItemBillResponseBodyData& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline QuerySplitItemBillResponseBodyData& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const Models::QuerySplitItemBillResponseBodyDataItems & items() const { DARABONBA_PTR_GET_CONST(items_, Models::QuerySplitItemBillResponseBodyDataItems) };
    inline Models::QuerySplitItemBillResponseBodyDataItems items() { DARABONBA_PTR_GET(items_, Models::QuerySplitItemBillResponseBodyDataItems) };
    inline QuerySplitItemBillResponseBodyData& setItems(const Models::QuerySplitItemBillResponseBodyDataItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QuerySplitItemBillResponseBodyData& setItems(Models::QuerySplitItemBillResponseBodyDataItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QuerySplitItemBillResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuerySplitItemBillResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QuerySplitItemBillResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the account.
    std::shared_ptr<string> accountID_ = nullptr;
    // The name of the account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The billing cycle, in the YYYY-MM format.
    std::shared_ptr<string> billingCycle_ = nullptr;
    // The details of the bills.
    std::shared_ptr<Models::QuerySplitItemBillResponseBodyDataItems> items_ = nullptr;
    // The page number of the returned page. Default value: 1.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries returned on each page. Default value: 20. Maximum value: 300.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
