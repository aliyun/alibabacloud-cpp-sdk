// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSLOTMETRICSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSLOTMETRICSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class QuerySlotMetricsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySlotMetricsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Dimensions, dimensionsShrink_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeStep, timeStep_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySlotMetricsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensionsShrink_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeStep, timeStep_);
    };
    QuerySlotMetricsShrinkRequest() = default ;
    QuerySlotMetricsShrinkRequest(const QuerySlotMetricsShrinkRequest &) = default ;
    QuerySlotMetricsShrinkRequest(QuerySlotMetricsShrinkRequest &&) = default ;
    QuerySlotMetricsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySlotMetricsShrinkRequest() = default ;
    QuerySlotMetricsShrinkRequest& operator=(const QuerySlotMetricsShrinkRequest &) = default ;
    QuerySlotMetricsShrinkRequest& operator=(QuerySlotMetricsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dimensionsShrink_ == nullptr
        && this->endTime_ == nullptr && this->metricType_ == nullptr && this->startTime_ == nullptr && this->timeStep_ == nullptr; };
    // dimensionsShrink Field Functions 
    bool hasDimensionsShrink() const { return this->dimensionsShrink_ != nullptr;};
    void deleteDimensionsShrink() { this->dimensionsShrink_ = nullptr;};
    inline string getDimensionsShrink() const { DARABONBA_PTR_GET_DEFAULT(dimensionsShrink_, "") };
    inline QuerySlotMetricsShrinkRequest& setDimensionsShrink(string dimensionsShrink) { DARABONBA_PTR_SET_VALUE(dimensionsShrink_, dimensionsShrink) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QuerySlotMetricsShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline QuerySlotMetricsShrinkRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QuerySlotMetricsShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeStep Field Functions 
    bool hasTimeStep() const { return this->timeStep_ != nullptr;};
    void deleteTimeStep() { this->timeStep_ = nullptr;};
    inline string getTimeStep() const { DARABONBA_PTR_GET_DEFAULT(timeStep_, "") };
    inline QuerySlotMetricsShrinkRequest& setTimeStep(string timeStep) { DARABONBA_PTR_SET_VALUE(timeStep_, timeStep) };


  protected:
    shared_ptr<string> dimensionsShrink_ {};
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
