// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCETRENDINGREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCETRENDINGREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class GetInstanceTrendingReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceTrendingReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceTrendingReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
    };
    GetInstanceTrendingReportRequest() = default ;
    GetInstanceTrendingReportRequest(const GetInstanceTrendingReportRequest &) = default ;
    GetInstanceTrendingReportRequest(GetInstanceTrendingReportRequest &&) = default ;
    GetInstanceTrendingReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceTrendingReportRequest() = default ;
    GetInstanceTrendingReportRequest& operator=(const GetInstanceTrendingReportRequest &) = default ;
    GetInstanceTrendingReportRequest& operator=(GetInstanceTrendingReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->startTime_ == nullptr && this->timeInterval_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetInstanceTrendingReportRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceTrendingReportRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetInstanceTrendingReportRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeInterval Field Functions 
    bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
    void deleteTimeInterval() { this->timeInterval_ = nullptr;};
    inline string getTimeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, "") };
    inline GetInstanceTrendingReportRequest& setTimeInterval(string timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


  protected:
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<string> timeInterval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
