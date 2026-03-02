// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORMETRICMEASUREDATA_HPP_
#define ALIBABACLOUD_MODELS_MONITORMETRICMEASUREDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MonitorMetricMeasurePointData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorMetricMeasureData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorMetricMeasureData& obj) { 
      DARABONBA_PTR_TO_JSON(measure, measure_);
      DARABONBA_PTR_TO_JSON(measurePointData, measurePointData_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorMetricMeasureData& obj) { 
      DARABONBA_PTR_FROM_JSON(measure, measure_);
      DARABONBA_PTR_FROM_JSON(measurePointData, measurePointData_);
    };
    MonitorMetricMeasureData() = default ;
    MonitorMetricMeasureData(const MonitorMetricMeasureData &) = default ;
    MonitorMetricMeasureData(MonitorMetricMeasureData &&) = default ;
    MonitorMetricMeasureData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorMetricMeasureData() = default ;
    MonitorMetricMeasureData& operator=(const MonitorMetricMeasureData &) = default ;
    MonitorMetricMeasureData& operator=(MonitorMetricMeasureData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->measure_ == nullptr
        && this->measurePointData_ == nullptr; };
    // measure Field Functions 
    bool hasMeasure() const { return this->measure_ != nullptr;};
    void deleteMeasure() { this->measure_ = nullptr;};
    inline string getMeasure() const { DARABONBA_PTR_GET_DEFAULT(measure_, "") };
    inline MonitorMetricMeasureData& setMeasure(string measure) { DARABONBA_PTR_SET_VALUE(measure_, measure) };


    // measurePointData Field Functions 
    bool hasMeasurePointData() const { return this->measurePointData_ != nullptr;};
    void deleteMeasurePointData() { this->measurePointData_ = nullptr;};
    inline const vector<MonitorMetricMeasurePointData> & getMeasurePointData() const { DARABONBA_PTR_GET_CONST(measurePointData_, vector<MonitorMetricMeasurePointData>) };
    inline vector<MonitorMetricMeasurePointData> getMeasurePointData() { DARABONBA_PTR_GET(measurePointData_, vector<MonitorMetricMeasurePointData>) };
    inline MonitorMetricMeasureData& setMeasurePointData(const vector<MonitorMetricMeasurePointData> & measurePointData) { DARABONBA_PTR_SET_VALUE(measurePointData_, measurePointData) };
    inline MonitorMetricMeasureData& setMeasurePointData(vector<MonitorMetricMeasurePointData> && measurePointData) { DARABONBA_PTR_SET_RVALUE(measurePointData_, measurePointData) };


  protected:
    shared_ptr<string> measure_ {};
    shared_ptr<vector<MonitorMetricMeasurePointData>> measurePointData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
