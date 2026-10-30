// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEGROUPPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEGROUPPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeInstanceGroupPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceGroupPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceGroupSpec, instanceGroupSpec_);
      DARABONBA_PTR_TO_JSON(InstanceVersion, instanceVersion_);
      DARABONBA_PTR_TO_JSON(NumberOfInstances, numberOfInstances_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(SaleMode, saleMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceGroupPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupSpec, instanceGroupSpec_);
      DARABONBA_PTR_FROM_JSON(InstanceVersion, instanceVersion_);
      DARABONBA_PTR_FROM_JSON(NumberOfInstances, numberOfInstances_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(SaleMode, saleMode_);
    };
    DescribeInstanceGroupPriceRequest() = default ;
    DescribeInstanceGroupPriceRequest(const DescribeInstanceGroupPriceRequest &) = default ;
    DescribeInstanceGroupPriceRequest(DescribeInstanceGroupPriceRequest &&) = default ;
    DescribeInstanceGroupPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceGroupPriceRequest() = default ;
    DescribeInstanceGroupPriceRequest& operator=(const DescribeInstanceGroupPriceRequest &) = default ;
    DescribeInstanceGroupPriceRequest& operator=(DescribeInstanceGroupPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->bandwidth_ == nullptr && this->bizRegionId_ == nullptr && this->imageId_ == nullptr && this->instanceGroupSpec_ == nullptr && this->instanceVersion_ == nullptr
        && this->numberOfInstances_ == nullptr && this->orderType_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->promotionId_ == nullptr
        && this->saleMode_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline DescribeInstanceGroupPriceRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeInstanceGroupPriceRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline DescribeInstanceGroupPriceRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeInstanceGroupPriceRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceGroupSpec Field Functions 
    bool hasInstanceGroupSpec() const { return this->instanceGroupSpec_ != nullptr;};
    void deleteInstanceGroupSpec() { this->instanceGroupSpec_ = nullptr;};
    inline string getInstanceGroupSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupSpec_, "") };
    inline DescribeInstanceGroupPriceRequest& setInstanceGroupSpec(string instanceGroupSpec) { DARABONBA_PTR_SET_VALUE(instanceGroupSpec_, instanceGroupSpec) };


    // instanceVersion Field Functions 
    bool hasInstanceVersion() const { return this->instanceVersion_ != nullptr;};
    void deleteInstanceVersion() { this->instanceVersion_ = nullptr;};
    inline string getInstanceVersion() const { DARABONBA_PTR_GET_DEFAULT(instanceVersion_, "") };
    inline DescribeInstanceGroupPriceRequest& setInstanceVersion(string instanceVersion) { DARABONBA_PTR_SET_VALUE(instanceVersion_, instanceVersion) };


    // numberOfInstances Field Functions 
    bool hasNumberOfInstances() const { return this->numberOfInstances_ != nullptr;};
    void deleteNumberOfInstances() { this->numberOfInstances_ = nullptr;};
    inline int32_t getNumberOfInstances() const { DARABONBA_PTR_GET_DEFAULT(numberOfInstances_, 0) };
    inline DescribeInstanceGroupPriceRequest& setNumberOfInstances(int32_t numberOfInstances) { DARABONBA_PTR_SET_VALUE(numberOfInstances_, numberOfInstances) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeInstanceGroupPriceRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeInstanceGroupPriceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeInstanceGroupPriceRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline DescribeInstanceGroupPriceRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // saleMode Field Functions 
    bool hasSaleMode() const { return this->saleMode_ != nullptr;};
    void deleteSaleMode() { this->saleMode_ = nullptr;};
    inline string getSaleMode() const { DARABONBA_PTR_GET_DEFAULT(saleMode_, "") };
    inline DescribeInstanceGroupPriceRequest& setSaleMode(string saleMode) { DARABONBA_PTR_SET_VALUE(saleMode_, saleMode) };


  protected:
    // The number of instance groups.
    shared_ptr<int32_t> amount_ {};
    // The ID of the bandwidth plan.
    shared_ptr<int32_t> bandwidth_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> bizRegionId_ {};
    // The image ID.
    shared_ptr<string> imageId_ {};
    // The instance group specifications.
    // 
    // This parameter is required.
    shared_ptr<string> instanceGroupSpec_ {};
    // The instance version. You do not need to specify this parameter. The system automatically matches the value.
    shared_ptr<string> instanceVersion_ {};
    // The number of instances in the instance group.
    shared_ptr<int32_t> numberOfInstances_ {};
    // The order type.
    shared_ptr<string> orderType_ {};
    // The subscription period. The unit is specified by PeriodUnit. Default value: 1.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription period. Default value: Month.
    shared_ptr<string> periodUnit_ {};
    // The ID of the promotion.
    shared_ptr<string> promotionId_ {};
    // The sales mode. You do not need to specify this parameter. The system automatically matches the value.
    shared_ptr<string> saleMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
