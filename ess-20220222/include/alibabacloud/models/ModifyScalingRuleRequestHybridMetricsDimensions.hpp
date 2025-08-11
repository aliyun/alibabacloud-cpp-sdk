// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGRULEREQUESTHYBRIDMETRICSDIMENSIONS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGRULEREQUESTHYBRIDMETRICSDIMENSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyScalingRuleRequestHybridMetricsDimensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingRuleRequestHybridMetricsDimensions& obj) { 
      DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_TO_JSON(DimensionValue, dimensionValue_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScalingRuleRequestHybridMetricsDimensions& obj) { 
      DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_FROM_JSON(DimensionValue, dimensionValue_);
    };
    ModifyScalingRuleRequestHybridMetricsDimensions() = default ;
    ModifyScalingRuleRequestHybridMetricsDimensions(const ModifyScalingRuleRequestHybridMetricsDimensions &) = default ;
    ModifyScalingRuleRequestHybridMetricsDimensions(ModifyScalingRuleRequestHybridMetricsDimensions &&) = default ;
    ModifyScalingRuleRequestHybridMetricsDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingRuleRequestHybridMetricsDimensions() = default ;
    ModifyScalingRuleRequestHybridMetricsDimensions& operator=(const ModifyScalingRuleRequestHybridMetricsDimensions &) = default ;
    ModifyScalingRuleRequestHybridMetricsDimensions& operator=(ModifyScalingRuleRequestHybridMetricsDimensions &&) = default ;
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
    inline ModifyScalingRuleRequestHybridMetricsDimensions& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


    // dimensionValue Field Functions 
    bool hasDimensionValue() const { return this->dimensionValue_ != nullptr;};
    void deleteDimensionValue() { this->dimensionValue_ = nullptr;};
    inline string dimensionValue() const { DARABONBA_PTR_GET_DEFAULT(dimensionValue_, "") };
    inline ModifyScalingRuleRequestHybridMetricsDimensions& setDimensionValue(string dimensionValue) { DARABONBA_PTR_SET_VALUE(dimensionValue_, dimensionValue) };


  protected:
    // The key of the metric dimension.
    std::shared_ptr<string> dimensionKey_ = nullptr;
    // The value of the metric dimension.
    std::shared_ptr<string> dimensionValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
