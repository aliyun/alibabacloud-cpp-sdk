// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(CommodityType, commodityType_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_TO_JSON(PromotionOptions, promotionOptions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(CommodityType, commodityType_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionOptions, promotionOptions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribePriceRequest() = default ;
    DescribePriceRequest(const DescribePriceRequest &) = default ;
    DescribePriceRequest(DescribePriceRequest &&) = default ;
    DescribePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceRequest() = default ;
    DescribePriceRequest& operator=(const DescribePriceRequest &) = default ;
    DescribePriceRequest& operator=(DescribePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PromotionOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PromotionOptions& obj) { 
        DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
        DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      };
      friend void from_json(const Darabonba::Json& j, PromotionOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
        DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      };
      PromotionOptions() = default ;
      PromotionOptions(const PromotionOptions &) = default ;
      PromotionOptions(PromotionOptions &&) = default ;
      PromotionOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PromotionOptions() = default ;
      PromotionOptions& operator=(const PromotionOptions &) = default ;
      PromotionOptions& operator=(PromotionOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activityId_ == nullptr
        && this->couponNo_ == nullptr; };
      // activityId Field Functions 
      bool hasActivityId() const { return this->activityId_ != nullptr;};
      void deleteActivityId() { this->activityId_ = nullptr;};
      inline string getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
      inline PromotionOptions& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


      // couponNo Field Functions 
      bool hasCouponNo() const { return this->couponNo_ != nullptr;};
      void deleteCouponNo() { this->couponNo_ = nullptr;};
      inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
      inline PromotionOptions& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    protected:
      // The activity ID.
      shared_ptr<string> activityId_ {};
      // The coupon code.
      shared_ptr<string> couponNo_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->amount_ == nullptr && this->commodityType_ == nullptr && this->dataDiskSize_ == nullptr && this->instanceId_ == nullptr && this->orderType_ == nullptr
        && this->payType_ == nullptr && this->period_ == nullptr && this->planId_ == nullptr && this->priceUnit_ == nullptr && this->promotionOptions_ == nullptr
        && this->regionId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DescribePriceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline DescribePriceRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // commodityType Field Functions 
    bool hasCommodityType() const { return this->commodityType_ != nullptr;};
    void deleteCommodityType() { this->commodityType_ = nullptr;};
    inline string getCommodityType() const { DARABONBA_PTR_GET_DEFAULT(commodityType_, "") };
    inline DescribePriceRequest& setCommodityType(string commodityType) { DARABONBA_PTR_SET_VALUE(commodityType_, commodityType) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline DescribePriceRequest& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePriceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribePriceRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribePriceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribePriceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline DescribePriceRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // priceUnit Field Functions 
    bool hasPriceUnit() const { return this->priceUnit_ != nullptr;};
    void deletePriceUnit() { this->priceUnit_ = nullptr;};
    inline string getPriceUnit() const { DARABONBA_PTR_GET_DEFAULT(priceUnit_, "") };
    inline DescribePriceRequest& setPriceUnit(string priceUnit) { DARABONBA_PTR_SET_VALUE(priceUnit_, priceUnit) };


    // promotionOptions Field Functions 
    bool hasPromotionOptions() const { return this->promotionOptions_ != nullptr;};
    void deletePromotionOptions() { this->promotionOptions_ = nullptr;};
    inline const DescribePriceRequest::PromotionOptions & getPromotionOptions() const { DARABONBA_PTR_GET_CONST(promotionOptions_, DescribePriceRequest::PromotionOptions) };
    inline DescribePriceRequest::PromotionOptions getPromotionOptions() { DARABONBA_PTR_GET(promotionOptions_, DescribePriceRequest::PromotionOptions) };
    inline DescribePriceRequest& setPromotionOptions(const DescribePriceRequest::PromotionOptions & promotionOptions) { DARABONBA_PTR_SET_VALUE(promotionOptions_, promotionOptions) };
    inline DescribePriceRequest& setPromotionOptions(DescribePriceRequest::PromotionOptions && promotionOptions) { DARABONBA_PTR_SET_RVALUE(promotionOptions_, promotionOptions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePriceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The language of the response. Valid values:
    // 
    // - **zh-CN** (default): Chinese.
    // 
    // - **en-US**: English.
    shared_ptr<string> acceptLanguage_ {};
    // The number of Simple Application Server instances to create. Valid values: 1 to 20.
    // 
    // Default value: 1.
    shared_ptr<int32_t> amount_ {};
    // The resource type. Valid values:
    // - Server.
    // 
    // This parameter is required.
    shared_ptr<string> commodityType_ {};
    // The capacity of the mounted data cloud disk. Unit: GB. Valid values: 0 to 16380. The value must be a multiple of 20.
    shared_ptr<int32_t> dataDiskSize_ {};
    // The ID of the Simple Application Server instance.
    shared_ptr<string> instanceId_ {};
    // The order type. Valid values:
    // - Buy.
    // 
    // Default value: Buy.
    shared_ptr<string> orderType_ {};
    // The billing method of the instance. Valid values:
    // - Prepaid: subscription.
    // 
    // Example: Prepaid.
    shared_ptr<string> payType_ {};
    // The billing duration. Valid values:
    // - If the PriceUnit parameter is set to Month: 1 to 9.
    // - If the PriceUnit parameter is set to Year: 1 to 5.
    // 
    // Default value: 1.
    shared_ptr<int32_t> period_ {};
    // The plan ID. You can call the [ListPlans](https://help.aliyun.com/document_detail/189314.html) operation to query all plan information in the specified region.
    shared_ptr<string> planId_ {};
    // The pricing unit. Valid values:
    // - Month: the pricing unit for monthly billing.
    // - Year: the pricing unit for yearly billing.
    // 
    // Default value: Month.
    shared_ptr<string> priceUnit_ {};
    // The promotion option information.
    shared_ptr<DescribePriceRequest::PromotionOptions> promotionOptions_ {};
    // The region ID of the specified Simple Application Server instance. You can call the [ListRegions](https://help.aliyun.com/document_detail/189315.html) operation to query the list of supported Alibaba Cloud regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
