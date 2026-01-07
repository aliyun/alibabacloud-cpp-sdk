// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICECRONSCALERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICECRONSCALERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceCronScalerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceCronScalerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeDates, excludeDates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScaleJobs, scaleJobs_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceCronScalerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeDates, excludeDates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScaleJobs, scaleJobs_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    DescribeServiceCronScalerResponseBody() = default ;
    DescribeServiceCronScalerResponseBody(const DescribeServiceCronScalerResponseBody &) = default ;
    DescribeServiceCronScalerResponseBody(DescribeServiceCronScalerResponseBody &&) = default ;
    DescribeServiceCronScalerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceCronScalerResponseBody() = default ;
    DescribeServiceCronScalerResponseBody& operator=(const DescribeServiceCronScalerResponseBody &) = default ;
    DescribeServiceCronScalerResponseBody& operator=(DescribeServiceCronScalerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScaleJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScaleJobs& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(LastProbeTime, lastProbeTime_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Schedule, schedule_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(TargetSize, targetSize_);
      };
      friend void from_json(const Darabonba::Json& j, ScaleJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(LastProbeTime, lastProbeTime_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(TargetSize, targetSize_);
      };
      ScaleJobs() = default ;
      ScaleJobs(const ScaleJobs &) = default ;
      ScaleJobs(ScaleJobs &&) = default ;
      ScaleJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScaleJobs() = default ;
      ScaleJobs& operator=(const ScaleJobs &) = default ;
      ScaleJobs& operator=(ScaleJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->lastProbeTime_ == nullptr && this->message_ == nullptr && this->name_ == nullptr && this->schedule_ == nullptr && this->state_ == nullptr
        && this->targetSize_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ScaleJobs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // lastProbeTime Field Functions 
      bool hasLastProbeTime() const { return this->lastProbeTime_ != nullptr;};
      void deleteLastProbeTime() { this->lastProbeTime_ = nullptr;};
      inline string getLastProbeTime() const { DARABONBA_PTR_GET_DEFAULT(lastProbeTime_, "") };
      inline ScaleJobs& setLastProbeTime(string lastProbeTime) { DARABONBA_PTR_SET_VALUE(lastProbeTime_, lastProbeTime) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline ScaleJobs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ScaleJobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // schedule Field Functions 
      bool hasSchedule() const { return this->schedule_ != nullptr;};
      void deleteSchedule() { this->schedule_ = nullptr;};
      inline string getSchedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
      inline ScaleJobs& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline ScaleJobs& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // targetSize Field Functions 
      bool hasTargetSize() const { return this->targetSize_ != nullptr;};
      void deleteTargetSize() { this->targetSize_ = nullptr;};
      inline int32_t getTargetSize() const { DARABONBA_PTR_GET_DEFAULT(targetSize_, 0) };
      inline ScaleJobs& setTargetSize(int32_t targetSize) { DARABONBA_PTR_SET_VALUE(targetSize_, targetSize) };


    protected:
      // The time when the most recent CronHPA job was created. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The time when the most recent CronHPA job ran. The time is displayed in UTC.
      shared_ptr<string> lastProbeTime_ {};
      // The returned message.
      shared_ptr<string> message_ {};
      // The name of the CronHPA job.
      shared_ptr<string> name_ {};
      // The cron expression that is used to configure the execution time of the CronHPA job.
      shared_ptr<string> schedule_ {};
      // The status of the most recent CronHPA job.
      shared_ptr<string> state_ {};
      // The number of instances that you expect to configure for the CronHPA job.
      shared_ptr<int32_t> targetSize_ {};
    };

    virtual bool empty() const override { return this->excludeDates_ == nullptr
        && this->requestId_ == nullptr && this->scaleJobs_ == nullptr && this->serviceName_ == nullptr; };
    // excludeDates Field Functions 
    bool hasExcludeDates() const { return this->excludeDates_ != nullptr;};
    void deleteExcludeDates() { this->excludeDates_ = nullptr;};
    inline const vector<string> & getExcludeDates() const { DARABONBA_PTR_GET_CONST(excludeDates_, vector<string>) };
    inline vector<string> getExcludeDates() { DARABONBA_PTR_GET(excludeDates_, vector<string>) };
    inline DescribeServiceCronScalerResponseBody& setExcludeDates(const vector<string> & excludeDates) { DARABONBA_PTR_SET_VALUE(excludeDates_, excludeDates) };
    inline DescribeServiceCronScalerResponseBody& setExcludeDates(vector<string> && excludeDates) { DARABONBA_PTR_SET_RVALUE(excludeDates_, excludeDates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceCronScalerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scaleJobs Field Functions 
    bool hasScaleJobs() const { return this->scaleJobs_ != nullptr;};
    void deleteScaleJobs() { this->scaleJobs_ = nullptr;};
    inline const vector<DescribeServiceCronScalerResponseBody::ScaleJobs> & getScaleJobs() const { DARABONBA_PTR_GET_CONST(scaleJobs_, vector<DescribeServiceCronScalerResponseBody::ScaleJobs>) };
    inline vector<DescribeServiceCronScalerResponseBody::ScaleJobs> getScaleJobs() { DARABONBA_PTR_GET(scaleJobs_, vector<DescribeServiceCronScalerResponseBody::ScaleJobs>) };
    inline DescribeServiceCronScalerResponseBody& setScaleJobs(const vector<DescribeServiceCronScalerResponseBody::ScaleJobs> & scaleJobs) { DARABONBA_PTR_SET_VALUE(scaleJobs_, scaleJobs) };
    inline DescribeServiceCronScalerResponseBody& setScaleJobs(vector<DescribeServiceCronScalerResponseBody::ScaleJobs> && scaleJobs) { DARABONBA_PTR_SET_RVALUE(scaleJobs_, scaleJobs) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeServiceCronScalerResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The points in time that are excluded when you schedule a CronHPA job. The points in time must be specified by using a cron expression.
    shared_ptr<vector<string>> excludeDates_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The CronHPA jobs.
    shared_ptr<vector<DescribeServiceCronScalerResponseBody::ScaleJobs>> scaleJobs_ {};
    // The service name.
    shared_ptr<string> serviceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
