// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGGROUPCONFIGINSTANCETYPELIST_HPP_
#define ALIBABACLOUD_MODELS_SCALINGGROUPCONFIGINSTANCETYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ScalingGroupConfigInstanceTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingGroupConfigInstanceTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingGroupConfigInstanceTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
    };
    ScalingGroupConfigInstanceTypeList() = default ;
    ScalingGroupConfigInstanceTypeList(const ScalingGroupConfigInstanceTypeList &) = default ;
    ScalingGroupConfigInstanceTypeList(ScalingGroupConfigInstanceTypeList &&) = default ;
    ScalingGroupConfigInstanceTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingGroupConfigInstanceTypeList() = default ;
    ScalingGroupConfigInstanceTypeList& operator=(const ScalingGroupConfigInstanceTypeList &) = default ;
    ScalingGroupConfigInstanceTypeList& operator=(ScalingGroupConfigInstanceTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceType_ != nullptr
        && this->spotPriceLimit_ != nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ScalingGroupConfigInstanceTypeList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float spotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline ScalingGroupConfigInstanceTypeList& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


  protected:
    // Ecs类型。
    std::shared_ptr<string> instanceType_ = nullptr;
    // 抢占价格上限,可空。
    std::shared_ptr<float> spotPriceLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
