// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETTRACKINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_TARGETTRACKINGPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class TargetTrackingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetTrackingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(maxCapacity, maxCapacity_);
      DARABONBA_PTR_TO_JSON(metricTarget, metricTarget_);
      DARABONBA_PTR_TO_JSON(metricType, metricType_);
      DARABONBA_PTR_TO_JSON(minCapacity, minCapacity_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, TargetTrackingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(maxCapacity, maxCapacity_);
      DARABONBA_PTR_FROM_JSON(metricTarget, metricTarget_);
      DARABONBA_PTR_FROM_JSON(metricType, metricType_);
      DARABONBA_PTR_FROM_JSON(minCapacity, minCapacity_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
    };
    TargetTrackingPolicy() = default ;
    TargetTrackingPolicy(const TargetTrackingPolicy &) = default ;
    TargetTrackingPolicy(TargetTrackingPolicy &&) = default ;
    TargetTrackingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetTrackingPolicy() = default ;
    TargetTrackingPolicy& operator=(const TargetTrackingPolicy &) = default ;
    TargetTrackingPolicy& operator=(TargetTrackingPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->maxCapacity_ == nullptr && this->metricTarget_ == nullptr && this->metricType_ == nullptr && this->minCapacity_ == nullptr && this->name_ == nullptr
        && this->startTime_ == nullptr && this->timeZone_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline TargetTrackingPolicy& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxCapacity Field Functions 
    bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
    void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
    inline int64_t getMaxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0L) };
    inline TargetTrackingPolicy& setMaxCapacity(int64_t maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


    // metricTarget Field Functions 
    bool hasMetricTarget() const { return this->metricTarget_ != nullptr;};
    void deleteMetricTarget() { this->metricTarget_ = nullptr;};
    inline float getMetricTarget() const { DARABONBA_PTR_GET_DEFAULT(metricTarget_, 0.0) };
    inline TargetTrackingPolicy& setMetricTarget(float metricTarget) { DARABONBA_PTR_SET_VALUE(metricTarget_, metricTarget) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline TargetTrackingPolicy& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // minCapacity Field Functions 
    bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
    void deleteMinCapacity() { this->minCapacity_ = nullptr;};
    inline int64_t getMinCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0L) };
    inline TargetTrackingPolicy& setMinCapacity(int64_t minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline TargetTrackingPolicy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline TargetTrackingPolicy& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline TargetTrackingPolicy& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    shared_ptr<string> endTime_ {};
    // This parameter is required.
    shared_ptr<int64_t> maxCapacity_ {};
    // This parameter is required.
    shared_ptr<float> metricTarget_ {};
    // This parameter is required.
    shared_ptr<string> metricType_ {};
    // This parameter is required.
    shared_ptr<int64_t> minCapacity_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> timeZone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
