// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMSRESPONSEBODYALARMLISTHYBRIDMETRICSDIMENSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMSRESPONSEBODYALARMLISTHYBRIDMETRICSDIMENSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions& obj) { 
      DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_TO_JSON(DimensionValue, dimensionValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions& obj) { 
      DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_FROM_JSON(DimensionValue, dimensionValue_);
    };
    DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions() = default ;
    DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions(const DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions &) = default ;
    DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions(DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions &&) = default ;
    DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions() = default ;
    DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions& operator=(const DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions &) = default ;
    DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions& operator=(DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dimensionKey_ == nullptr
        && return this->dimensionValue_ == nullptr; };
    // dimensionKey Field Functions 
    bool hasDimensionKey() const { return this->dimensionKey_ != nullptr;};
    void deleteDimensionKey() { this->dimensionKey_ = nullptr;};
    inline string dimensionKey() const { DARABONBA_PTR_GET_DEFAULT(dimensionKey_, "") };
    inline DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


    // dimensionValue Field Functions 
    bool hasDimensionValue() const { return this->dimensionValue_ != nullptr;};
    void deleteDimensionValue() { this->dimensionValue_ = nullptr;};
    inline string dimensionValue() const { DARABONBA_PTR_GET_DEFAULT(dimensionValue_, "") };
    inline DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions& setDimensionValue(string dimensionValue) { DARABONBA_PTR_SET_VALUE(dimensionValue_, dimensionValue) };


  protected:
    // The key of the metric dimension.
    std::shared_ptr<string> dimensionKey_ = nullptr;
    // The key of the metric dimension.
    std::shared_ptr<string> dimensionValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
