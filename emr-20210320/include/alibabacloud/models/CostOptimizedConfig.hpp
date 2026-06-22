// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COSTOPTIMIZEDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_COSTOPTIMIZEDCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class CostOptimizedConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CostOptimizedConfig& obj) { 
      DARABONBA_PTR_TO_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
      DARABONBA_PTR_TO_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_TO_JSON(SpotInstancePools, spotInstancePools_);
    };
    friend void from_json(const Darabonba::Json& j, CostOptimizedConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(SpotInstancePools, spotInstancePools_);
    };
    CostOptimizedConfig() = default ;
    CostOptimizedConfig(const CostOptimizedConfig &) = default ;
    CostOptimizedConfig(CostOptimizedConfig &&) = default ;
    CostOptimizedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CostOptimizedConfig() = default ;
    CostOptimizedConfig& operator=(const CostOptimizedConfig &) = default ;
    CostOptimizedConfig& operator=(CostOptimizedConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->onDemandBaseCapacity_ == nullptr
        && this->onDemandPercentageAboveBaseCapacity_ == nullptr && this->spotInstancePools_ == nullptr; };
    // onDemandBaseCapacity Field Functions 
    bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
    void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
    inline int32_t getOnDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0) };
    inline CostOptimizedConfig& setOnDemandBaseCapacity(int32_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


    // onDemandPercentageAboveBaseCapacity Field Functions 
    bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
    void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
    inline int32_t getOnDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0) };
    inline CostOptimizedConfig& setOnDemandPercentageAboveBaseCapacity(int32_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


    // spotInstancePools Field Functions 
    bool hasSpotInstancePools() const { return this->spotInstancePools_ != nullptr;};
    void deleteSpotInstancePools() { this->spotInstancePools_ = nullptr;};
    inline int32_t getSpotInstancePools() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePools_, 0) };
    inline CostOptimizedConfig& setSpotInstancePools(int32_t spotInstancePools) { DARABONBA_PTR_SET_VALUE(spotInstancePools_, spotInstancePools) };


  protected:
    // The minimum number of pay-as-you-go instances that are required for the node group. Valid values: 0 to 1000. If the number of pay-as-you-go instances is less than the value of this parameter, pay-as-you-go instances are preferentially created.
    // 
    // This parameter is required.
    shared_ptr<int32_t> onDemandBaseCapacity_ {};
    // The percentage of pay-as-you-go instances among the instances that exceed the number specified by the OnDemandBaseCapacity parameter for the node group. Valid values: 0 to 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ {};
    // The number of instance types that are specified. Preemptible instances of multiple instance types that are provided at the lowest price are evenly created in the scaling group. Valid values: 0 to 10.
    // 
    // This parameter is required.
    shared_ptr<int32_t> spotInstancePools_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
