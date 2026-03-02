// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORMETRICMEASUREPOINTDATA_HPP_
#define ALIBABACLOUD_MODELS_MONITORMETRICMEASUREPOINTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorMetricMeasurePointData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorMetricMeasurePointData& obj) { 
      DARABONBA_PTR_TO_JSON(measure, measure_);
      DARABONBA_PTR_TO_JSON(timeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(value, value_);
      DARABONBA_PTR_TO_JSON(valueWithUnit, valueWithUnit_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorMetricMeasurePointData& obj) { 
      DARABONBA_PTR_FROM_JSON(measure, measure_);
      DARABONBA_PTR_FROM_JSON(timeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(value, value_);
      DARABONBA_PTR_FROM_JSON(valueWithUnit, valueWithUnit_);
    };
    MonitorMetricMeasurePointData() = default ;
    MonitorMetricMeasurePointData(const MonitorMetricMeasurePointData &) = default ;
    MonitorMetricMeasurePointData(MonitorMetricMeasurePointData &&) = default ;
    MonitorMetricMeasurePointData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorMetricMeasurePointData() = default ;
    MonitorMetricMeasurePointData& operator=(const MonitorMetricMeasurePointData &) = default ;
    MonitorMetricMeasurePointData& operator=(MonitorMetricMeasurePointData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->measure_ == nullptr
        && this->timeStamp_ == nullptr && this->value_ == nullptr && this->valueWithUnit_ == nullptr; };
    // measure Field Functions 
    bool hasMeasure() const { return this->measure_ != nullptr;};
    void deleteMeasure() { this->measure_ = nullptr;};
    inline string getMeasure() const { DARABONBA_PTR_GET_DEFAULT(measure_, "") };
    inline MonitorMetricMeasurePointData& setMeasure(string measure) { DARABONBA_PTR_SET_VALUE(measure_, measure) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline MonitorMetricMeasurePointData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline MonitorMetricMeasurePointData& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueWithUnit Field Functions 
    bool hasValueWithUnit() const { return this->valueWithUnit_ != nullptr;};
    void deleteValueWithUnit() { this->valueWithUnit_ = nullptr;};
    inline string getValueWithUnit() const { DARABONBA_PTR_GET_DEFAULT(valueWithUnit_, "") };
    inline MonitorMetricMeasurePointData& setValueWithUnit(string valueWithUnit) { DARABONBA_PTR_SET_VALUE(valueWithUnit_, valueWithUnit) };


  protected:
    shared_ptr<string> measure_ {};
    shared_ptr<string> timeStamp_ {};
    shared_ptr<string> value_ {};
    shared_ptr<string> valueWithUnit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
