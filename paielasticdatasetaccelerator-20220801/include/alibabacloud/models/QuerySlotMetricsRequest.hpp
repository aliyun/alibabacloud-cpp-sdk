// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSLOTMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSLOTMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class QuerySlotMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySlotMetricsRequest& obj) { 
      DARABONBA_ANY_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeStep, timeStep_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySlotMetricsRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeStep, timeStep_);
    };
    QuerySlotMetricsRequest() = default ;
    QuerySlotMetricsRequest(const QuerySlotMetricsRequest &) = default ;
    QuerySlotMetricsRequest(QuerySlotMetricsRequest &&) = default ;
    QuerySlotMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySlotMetricsRequest() = default ;
    QuerySlotMetricsRequest& operator=(const QuerySlotMetricsRequest &) = default ;
    QuerySlotMetricsRequest& operator=(QuerySlotMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dimensions_ == nullptr
        && this->endTime_ == nullptr && this->metricType_ == nullptr && this->startTime_ == nullptr && this->timeStep_ == nullptr; };
    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline     const Darabonba::Json & getDimensions() const { DARABONBA_GET(dimensions_) };
    Darabonba::Json & getDimensions() { DARABONBA_GET(dimensions_) };
    inline QuerySlotMetricsRequest& setDimensions(const Darabonba::Json & dimensions) { DARABONBA_SET_VALUE(dimensions_, dimensions) };
    inline QuerySlotMetricsRequest& setDimensions(Darabonba::Json && dimensions) { DARABONBA_SET_RVALUE(dimensions_, dimensions) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QuerySlotMetricsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline QuerySlotMetricsRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QuerySlotMetricsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeStep Field Functions 
    bool hasTimeStep() const { return this->timeStep_ != nullptr;};
    void deleteTimeStep() { this->timeStep_ = nullptr;};
    inline string getTimeStep() const { DARABONBA_PTR_GET_DEFAULT(timeStep_, "") };
    inline QuerySlotMetricsRequest& setTimeStep(string timeStep) { DARABONBA_PTR_SET_VALUE(timeStep_, timeStep) };


  protected:
    Darabonba::Json dimensions_ {};
    shared_ptr<string> endTime_ {};
    // This parameter is required.
    shared_ptr<string> metricType_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> timeStep_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
