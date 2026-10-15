// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryAccountBillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountBillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(BillingDate, billingDate_);
      DARABONBA_PTR_TO_JSON(Granularity, granularity_);
      DARABONBA_PTR_TO_JSON(IsGroupByProduct, isGroupByProduct_);
      DARABONBA_PTR_TO_JSON(OwnerID, ownerID_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountBillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(BillingDate, billingDate_);
      DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(IsGroupByProduct, isGroupByProduct_);
      DARABONBA_PTR_FROM_JSON(OwnerID, ownerID_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    QueryAccountBillRequest() = default ;
    QueryAccountBillRequest(const QueryAccountBillRequest &) = default ;
    QueryAccountBillRequest(QueryAccountBillRequest &&) = default ;
    QueryAccountBillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountBillRequest() = default ;
    QueryAccountBillRequest& operator=(const QueryAccountBillRequest &) = default ;
    QueryAccountBillRequest& operator=(QueryAccountBillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billOwnerId_ == nullptr
        && this->billingCycle_ == nullptr && this->billingDate_ == nullptr && this->granularity_ == nullptr && this->isGroupByProduct_ == nullptr && this->ownerID_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->productCode_ == nullptr; };
    // billOwnerId Field Functions 
    bool hasBillOwnerId() const { return this->billOwnerId_ != nullptr;};
    void deleteBillOwnerId() { this->billOwnerId_ = nullptr;};
    inline int64_t getBillOwnerId() const { DARABONBA_PTR_GET_DEFAULT(billOwnerId_, 0L) };
    inline QueryAccountBillRequest& setBillOwnerId(int64_t billOwnerId) { DARABONBA_PTR_SET_VALUE(billOwnerId_, billOwnerId) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline QueryAccountBillRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // billingDate Field Functions 
    bool hasBillingDate() const { return this->billingDate_ != nullptr;};
    void deleteBillingDate() { this->billingDate_ = nullptr;};
    inline string getBillingDate() const { DARABONBA_PTR_GET_DEFAULT(billingDate_, "") };
    inline QueryAccountBillRequest& setBillingDate(string billingDate) { DARABONBA_PTR_SET_VALUE(billingDate_, billingDate) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline QueryAccountBillRequest& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // isGroupByProduct Field Functions 
    bool hasIsGroupByProduct() const { return this->isGroupByProduct_ != nullptr;};
    void deleteIsGroupByProduct() { this->isGroupByProduct_ = nullptr;};
    inline bool getIsGroupByProduct() const { DARABONBA_PTR_GET_DEFAULT(isGroupByProduct_, false) };
    inline QueryAccountBillRequest& setIsGroupByProduct(bool isGroupByProduct) { DARABONBA_PTR_SET_VALUE(isGroupByProduct_, isGroupByProduct) };


    // ownerID Field Functions 
    bool hasOwnerID() const { return this->ownerID_ != nullptr;};
    void deleteOwnerID() { this->ownerID_ = nullptr;};
    inline int64_t getOwnerID() const { DARABONBA_PTR_GET_DEFAULT(ownerID_, 0L) };
    inline QueryAccountBillRequest& setOwnerID(int64_t ownerID) { DARABONBA_PTR_SET_VALUE(ownerID_, ownerID) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryAccountBillRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryAccountBillRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QueryAccountBillRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // The ID of the account that owns and actually uses the resource.
    shared_ptr<int64_t> billOwnerId_ {};
    // The billing date. Format: YYYY-MM.
    // 
    // This parameter is required.
    shared_ptr<string> billingCycle_ {};
    // The billing date. This parameter is required only when you set Granularity to DAILY. Format: YYYY-MM-DD.
    shared_ptr<string> billingDate_ {};
    // The granularity for querying the bill. Valid values:
    // 
    // - MONTHLY: Queries bills on a monthly basis. Corresponds to the monthly bills in **Expenses & Costs&#xA;**> **Bills&#xA;**> **Bill Details&#xA;**.
    // 
    // - DAILY: Queries bills on a daily basis. Corresponds to the daily bills in **Expenses & Costs&#xA;**> **Bills&#xA;**> **Bill Details&#xA;**.
    // 
    // > If you set `Granularity` to `DAILY`, you must also specify the `BillingDate` parameter.
    shared_ptr<string> granularity_ {};
    // Specifies whether to aggregate the results by product code.
    // 
    // - true: Results are aggregated by product code.
    // 
    // - false: Results are not aggregated by product code.
    // 
    // Default value: false.
    shared_ptr<bool> isGroupByProduct_ {};
    shared_ptr<int64_t> ownerID_ {};
    // The page number. The default value is 1.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page. The default value is 20. The maximum value is 300.
    shared_ptr<int32_t> pageSize_ {};
    // The product code.
    shared_ptr<string> productCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
