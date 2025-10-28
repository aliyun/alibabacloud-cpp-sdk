// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_SCALINGPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ScalingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(maxInstances, maxInstances_);
      DARABONBA_PTR_TO_JSON(metricTarget, metricTarget_);
      DARABONBA_PTR_TO_JSON(metricType, metricType_);
      DARABONBA_PTR_TO_JSON(minInstances, minInstances_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(maxInstances, maxInstances_);
      DARABONBA_PTR_FROM_JSON(metricTarget, metricTarget_);
      DARABONBA_PTR_FROM_JSON(metricType, metricType_);
      DARABONBA_PTR_FROM_JSON(minInstances, minInstances_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
    };
    ScalingPolicy() = default ;
    ScalingPolicy(const ScalingPolicy &) = default ;
    ScalingPolicy(ScalingPolicy &&) = default ;
    ScalingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingPolicy() = default ;
    ScalingPolicy& operator=(const ScalingPolicy &) = default ;
    ScalingPolicy& operator=(ScalingPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->maxInstances_ == nullptr && return this->metricTarget_ == nullptr && return this->metricType_ == nullptr && return this->minInstances_ == nullptr && return this->name_ == nullptr
        && return this->startTime_ == nullptr && return this->timeZone_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ScalingPolicy& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxInstances Field Functions 
    bool hasMaxInstances() const { return this->maxInstances_ != nullptr;};
    void deleteMaxInstances() { this->maxInstances_ = nullptr;};
    inline int64_t maxInstances() const { DARABONBA_PTR_GET_DEFAULT(maxInstances_, 0L) };
    inline ScalingPolicy& setMaxInstances(int64_t maxInstances) { DARABONBA_PTR_SET_VALUE(maxInstances_, maxInstances) };


    // metricTarget Field Functions 
    bool hasMetricTarget() const { return this->metricTarget_ != nullptr;};
    void deleteMetricTarget() { this->metricTarget_ = nullptr;};
    inline float metricTarget() const { DARABONBA_PTR_GET_DEFAULT(metricTarget_, 0.0) };
    inline ScalingPolicy& setMetricTarget(float metricTarget) { DARABONBA_PTR_SET_VALUE(metricTarget_, metricTarget) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline ScalingPolicy& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // minInstances Field Functions 
    bool hasMinInstances() const { return this->minInstances_ != nullptr;};
    void deleteMinInstances() { this->minInstances_ = nullptr;};
    inline int64_t minInstances() const { DARABONBA_PTR_GET_DEFAULT(minInstances_, 0L) };
    inline ScalingPolicy& setMinInstances(int64_t minInstances) { DARABONBA_PTR_SET_VALUE(minInstances_, minInstances) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ScalingPolicy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ScalingPolicy& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline ScalingPolicy& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int64_t> maxInstances_ = nullptr;
    std::shared_ptr<float> metricTarget_ = nullptr;
    std::shared_ptr<string> metricType_ = nullptr;
    std::shared_ptr<int64_t> minInstances_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
