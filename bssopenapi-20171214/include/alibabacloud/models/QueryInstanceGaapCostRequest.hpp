// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCEGAAPCOSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCEGAAPCOSTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryInstanceGaapCostRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceGaapCostRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceGaapCostRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    QueryInstanceGaapCostRequest() = default ;
    QueryInstanceGaapCostRequest(const QueryInstanceGaapCostRequest &) = default ;
    QueryInstanceGaapCostRequest(QueryInstanceGaapCostRequest &&) = default ;
    QueryInstanceGaapCostRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceGaapCostRequest() = default ;
    QueryInstanceGaapCostRequest& operator=(const QueryInstanceGaapCostRequest &) = default ;
    QueryInstanceGaapCostRequest& operator=(QueryInstanceGaapCostRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billingCycle_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->productCode_ != nullptr && this->productType_ != nullptr && this->subscriptionType_ != nullptr; };
    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline QueryInstanceGaapCostRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryInstanceGaapCostRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryInstanceGaapCostRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QueryInstanceGaapCostRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryInstanceGaapCostRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline QueryInstanceGaapCostRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> billingCycle_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<string> subscriptionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
