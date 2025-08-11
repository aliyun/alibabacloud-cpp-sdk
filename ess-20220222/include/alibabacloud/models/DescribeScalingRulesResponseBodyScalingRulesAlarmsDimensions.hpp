// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGRULESRESPONSEBODYSCALINGRULESALARMSDIMENSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGRULESRESPONSEBODYSCALINGRULESALARMSDIMENSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions& obj) { 
      DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_TO_JSON(DimensionValue, dimensionValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions& obj) { 
      DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_FROM_JSON(DimensionValue, dimensionValue_);
    };
    DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions() = default ;
    DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions(const DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions &) = default ;
    DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions(DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions &&) = default ;
    DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions() = default ;
    DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions& operator=(const DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions &) = default ;
    DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions& operator=(DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dimensionKey_ != nullptr
        && this->dimensionValue_ != nullptr; };
    // dimensionKey Field Functions 
    bool hasDimensionKey() const { return this->dimensionKey_ != nullptr;};
    void deleteDimensionKey() { this->dimensionKey_ = nullptr;};
    inline string dimensionKey() const { DARABONBA_PTR_GET_DEFAULT(dimensionKey_, "") };
    inline DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


    // dimensionValue Field Functions 
    bool hasDimensionValue() const { return this->dimensionValue_ != nullptr;};
    void deleteDimensionValue() { this->dimensionValue_ = nullptr;};
    inline string dimensionValue() const { DARABONBA_PTR_GET_DEFAULT(dimensionValue_, "") };
    inline DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions& setDimensionValue(string dimensionValue) { DARABONBA_PTR_SET_VALUE(dimensionValue_, dimensionValue) };


  protected:
    // The key of the dimension that is associated with the metric. Valid values:
    // 
    // *   ScalingGroupId: the ID of the scaling group.
    // *   userId: the ID of the user account.
    std::shared_ptr<string> dimensionKey_ = nullptr;
    // The value of the dimension that is associated with the metric.
    std::shared_ptr<string> dimensionValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
