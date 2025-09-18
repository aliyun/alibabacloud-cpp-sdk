// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGGROUPCONFIGMULTIAVAILABLEPOLICYPOLICYPARAM_HPP_
#define ALIBABACLOUD_MODELS_SCALINGGROUPCONFIGMULTIAVAILABLEPOLICYPOLICYPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ScalingGroupConfigMultiAvailablePolicyPolicyParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingGroupConfigMultiAvailablePolicyPolicyParam& obj) { 
      DARABONBA_PTR_TO_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
      DARABONBA_PTR_TO_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_TO_JSON(SpotInstancePools, spotInstancePools_);
      DARABONBA_PTR_TO_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingGroupConfigMultiAvailablePolicyPolicyParam& obj) { 
      DARABONBA_PTR_FROM_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(SpotInstancePools, spotInstancePools_);
      DARABONBA_PTR_FROM_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
    };
    ScalingGroupConfigMultiAvailablePolicyPolicyParam() = default ;
    ScalingGroupConfigMultiAvailablePolicyPolicyParam(const ScalingGroupConfigMultiAvailablePolicyPolicyParam &) = default ;
    ScalingGroupConfigMultiAvailablePolicyPolicyParam(ScalingGroupConfigMultiAvailablePolicyPolicyParam &&) = default ;
    ScalingGroupConfigMultiAvailablePolicyPolicyParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingGroupConfigMultiAvailablePolicyPolicyParam() = default ;
    ScalingGroupConfigMultiAvailablePolicyPolicyParam& operator=(const ScalingGroupConfigMultiAvailablePolicyPolicyParam &) = default ;
    ScalingGroupConfigMultiAvailablePolicyPolicyParam& operator=(ScalingGroupConfigMultiAvailablePolicyPolicyParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->onDemandBaseCapacity_ != nullptr
        && this->onDemandPercentageAboveBaseCapacity_ != nullptr && this->spotInstancePools_ != nullptr && this->spotInstanceRemedy_ != nullptr; };
    // onDemandBaseCapacity Field Functions 
    bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
    void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
    inline int32_t onDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0) };
    inline ScalingGroupConfigMultiAvailablePolicyPolicyParam& setOnDemandBaseCapacity(int32_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


    // onDemandPercentageAboveBaseCapacity Field Functions 
    bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
    void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
    inline int32_t onDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0) };
    inline ScalingGroupConfigMultiAvailablePolicyPolicyParam& setOnDemandPercentageAboveBaseCapacity(int32_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


    // spotInstancePools Field Functions 
    bool hasSpotInstancePools() const { return this->spotInstancePools_ != nullptr;};
    void deleteSpotInstancePools() { this->spotInstancePools_ = nullptr;};
    inline int32_t spotInstancePools() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePools_, 0) };
    inline ScalingGroupConfigMultiAvailablePolicyPolicyParam& setSpotInstancePools(int32_t spotInstancePools) { DARABONBA_PTR_SET_VALUE(spotInstancePools_, spotInstancePools) };


    // spotInstanceRemedy Field Functions 
    bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
    void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
    inline bool spotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
    inline ScalingGroupConfigMultiAvailablePolicyPolicyParam& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


  protected:
    // 按需实例最小个数。
    std::shared_ptr<int32_t> onDemandBaseCapacity_ = nullptr;
    // 按需实例百分比。
    std::shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ = nullptr;
    // 抢占实例类型池规模。
    std::shared_ptr<int32_t> spotInstancePools_ = nullptr;
    // 是否使用按量补偿。
    std::shared_ptr<bool> spotInstanceRemedy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
