// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORMETRICRESULT_HPP_
#define ALIBABACLOUD_MODELS_MONITORMETRICRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MonitorMetricMeasureData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorMetricResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorMetricResult& obj) { 
      DARABONBA_PTR_TO_JSON(measureData, measureData_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorMetricResult& obj) { 
      DARABONBA_PTR_FROM_JSON(measureData, measureData_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    MonitorMetricResult() = default ;
    MonitorMetricResult(const MonitorMetricResult &) = default ;
    MonitorMetricResult(MonitorMetricResult &&) = default ;
    MonitorMetricResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorMetricResult() = default ;
    MonitorMetricResult& operator=(const MonitorMetricResult &) = default ;
    MonitorMetricResult& operator=(MonitorMetricResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->measureData_ == nullptr
        && this->requestId_ == nullptr; };
    // measureData Field Functions 
    bool hasMeasureData() const { return this->measureData_ != nullptr;};
    void deleteMeasureData() { this->measureData_ = nullptr;};
    inline const vector<MonitorMetricMeasureData> & getMeasureData() const { DARABONBA_PTR_GET_CONST(measureData_, vector<MonitorMetricMeasureData>) };
    inline vector<MonitorMetricMeasureData> getMeasureData() { DARABONBA_PTR_GET(measureData_, vector<MonitorMetricMeasureData>) };
    inline MonitorMetricResult& setMeasureData(const vector<MonitorMetricMeasureData> & measureData) { DARABONBA_PTR_SET_VALUE(measureData_, measureData) };
    inline MonitorMetricResult& setMeasureData(vector<MonitorMetricMeasureData> && measureData) { DARABONBA_PTR_SET_RVALUE(measureData_, measureData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MonitorMetricResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<MonitorMetricMeasureData>> measureData_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
