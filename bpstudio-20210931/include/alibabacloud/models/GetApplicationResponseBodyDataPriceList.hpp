// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYDATAPRICELIST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYDATAPRICELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetApplicationResponseBodyDataPriceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBodyDataPriceList& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_TO_JSON(OnePrice, onePrice_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceCode, resourceCode_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBodyDataPriceList& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_FROM_JSON(OnePrice, onePrice_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceCode, resourceCode_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetApplicationResponseBodyDataPriceList() = default ;
    GetApplicationResponseBodyDataPriceList(const GetApplicationResponseBodyDataPriceList &) = default ;
    GetApplicationResponseBodyDataPriceList(GetApplicationResponseBodyDataPriceList &&) = default ;
    GetApplicationResponseBodyDataPriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBodyDataPriceList() = default ;
    GetApplicationResponseBodyDataPriceList& operator=(const GetApplicationResponseBodyDataPriceList &) = default ;
    GetApplicationResponseBodyDataPriceList& operator=(GetApplicationResponseBodyDataPriceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && return this->count_ == nullptr && return this->instanceName_ == nullptr && return this->lifecycle_ == nullptr && return this->onePrice_ == nullptr && return this->originalPrice_ == nullptr
        && return this->period_ == nullptr && return this->price_ == nullptr && return this->priceUnit_ == nullptr && return this->region_ == nullptr && return this->remark_ == nullptr
        && return this->resourceCode_ == nullptr && return this->specification_ == nullptr && return this->type_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline GetApplicationResponseBodyDataPriceList& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetApplicationResponseBodyDataPriceList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetApplicationResponseBodyDataPriceList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // lifecycle Field Functions 
    bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
    void deleteLifecycle() { this->lifecycle_ = nullptr;};
    inline string lifecycle() const { DARABONBA_PTR_GET_DEFAULT(lifecycle_, "") };
    inline GetApplicationResponseBodyDataPriceList& setLifecycle(string lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };


    // onePrice Field Functions 
    bool hasOnePrice() const { return this->onePrice_ != nullptr;};
    void deleteOnePrice() { this->onePrice_ = nullptr;};
    inline double onePrice() const { DARABONBA_PTR_GET_DEFAULT(onePrice_, 0.0) };
    inline GetApplicationResponseBodyDataPriceList& setOnePrice(double onePrice) { DARABONBA_PTR_SET_VALUE(onePrice_, onePrice) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline double originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline GetApplicationResponseBodyDataPriceList& setOriginalPrice(double originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline GetApplicationResponseBodyDataPriceList& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline double price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline GetApplicationResponseBodyDataPriceList& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // priceUnit Field Functions 
    bool hasPriceUnit() const { return this->priceUnit_ != nullptr;};
    void deletePriceUnit() { this->priceUnit_ = nullptr;};
    inline string priceUnit() const { DARABONBA_PTR_GET_DEFAULT(priceUnit_, "") };
    inline GetApplicationResponseBodyDataPriceList& setPriceUnit(string priceUnit) { DARABONBA_PTR_SET_VALUE(priceUnit_, priceUnit) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetApplicationResponseBodyDataPriceList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetApplicationResponseBodyDataPriceList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceCode Field Functions 
    bool hasResourceCode() const { return this->resourceCode_ != nullptr;};
    void deleteResourceCode() { this->resourceCode_ = nullptr;};
    inline string resourceCode() const { DARABONBA_PTR_GET_DEFAULT(resourceCode_, "") };
    inline GetApplicationResponseBodyDataPriceList& setResourceCode(string resourceCode) { DARABONBA_PTR_SET_VALUE(resourceCode_, resourceCode) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline GetApplicationResponseBodyDataPriceList& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetApplicationResponseBodyDataPriceList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The billing method.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The quantity.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Resource Fill Labels.
    std::shared_ptr<string> lifecycle_ = nullptr;
    // The unit price of the instance.
    std::shared_ptr<double> onePrice_ = nullptr;
    // The original price of the instance.
    std::shared_ptr<double> originalPrice_ = nullptr;
    // The service duration.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The total price.
    std::shared_ptr<double> price_ = nullptr;
    // Unit: USD per hour
    std::shared_ptr<string> priceUnit_ = nullptr;
    // The region in which the instance resides.
    std::shared_ptr<string> region_ = nullptr;
    // The error message that is returned when a price query fails.
    std::shared_ptr<string> remark_ = nullptr;
    // Product code
    std::shared_ptr<string> resourceCode_ = nullptr;
    // The instance type. This parameter indicates the information about the instance type. For example, 192.168.0.0/16 may be returned for a Virtual Private Cloud (VPC) instance, ecs.g5.large may be returned for an Elastic Compute Service (ECS) instance, and slb.s1.small may be returned for a Server Load Balancer (SLB) instance. If the resource does not have a specific type, an empty value is returned.
    std::shared_ptr<string> specification_ = nullptr;
    // The creation mode. Valid values:\\
    // 1: creates a new instance.\\
    // 2: imports an instance.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
