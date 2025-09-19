// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRATEGYRESPONSEBODYSTRATEGIESCONFIGTARGETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRATEGYRESPONSEBODYSTRATEGIESCONFIGTARGETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeStrategyResponseBodyStrategiesConfigTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrategyResponseBodyStrategiesConfigTargets& obj) { 
      DARABONBA_PTR_TO_JSON(Flag, flag_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrategyResponseBodyStrategiesConfigTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(Flag, flag_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    DescribeStrategyResponseBodyStrategiesConfigTargets() = default ;
    DescribeStrategyResponseBodyStrategiesConfigTargets(const DescribeStrategyResponseBodyStrategiesConfigTargets &) = default ;
    DescribeStrategyResponseBodyStrategiesConfigTargets(DescribeStrategyResponseBodyStrategiesConfigTargets &&) = default ;
    DescribeStrategyResponseBodyStrategiesConfigTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrategyResponseBodyStrategiesConfigTargets() = default ;
    DescribeStrategyResponseBodyStrategiesConfigTargets& operator=(const DescribeStrategyResponseBodyStrategiesConfigTargets &) = default ;
    DescribeStrategyResponseBodyStrategiesConfigTargets& operator=(DescribeStrategyResponseBodyStrategiesConfigTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flag_ != nullptr
        && this->target_ != nullptr && this->targetType_ != nullptr; };
    // flag Field Functions 
    bool hasFlag() const { return this->flag_ != nullptr;};
    void deleteFlag() { this->flag_ = nullptr;};
    inline string flag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
    inline DescribeStrategyResponseBodyStrategiesConfigTargets& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeStrategyResponseBodyStrategiesConfigTargets& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeStrategyResponseBodyStrategiesConfigTargets& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // Indicates whether the baseline check policy is applied to the asset group. Valid values:
    // 
    // *   **add**: The baseline check policy is applied to the asset group.
    // *   **del**: the baseline check policy is not applied to the asset group.
    std::shared_ptr<string> flag_ = nullptr;
    // The asset group ID or UUID of the asset to which the baseline check policy is applied.
    std::shared_ptr<string> target_ = nullptr;
    // The condition by which the baseline check policy is applied to the asset. Valid values:
    // 
    // *   **groupId**: the ID of the asset group
    // *   **uuid**: the UUID of the asset
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
