// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCRIPTTRENDINGREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCRIPTTRENDINGREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class GetScriptTrendingReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScriptTrendingReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
    };
    friend void from_json(const Darabonba::Json& j, GetScriptTrendingReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
    };
    GetScriptTrendingReportRequest() = default ;
    GetScriptTrendingReportRequest(const GetScriptTrendingReportRequest &) = default ;
    GetScriptTrendingReportRequest(GetScriptTrendingReportRequest &&) = default ;
    GetScriptTrendingReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScriptTrendingReportRequest() = default ;
    GetScriptTrendingReportRequest& operator=(const GetScriptTrendingReportRequest &) = default ;
    GetScriptTrendingReportRequest& operator=(GetScriptTrendingReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->scriptId_ == nullptr && this->startTime_ == nullptr && this->timeInterval_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetScriptTrendingReportRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetScriptTrendingReportRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline GetScriptTrendingReportRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetScriptTrendingReportRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeInterval Field Functions 
    bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
    void deleteTimeInterval() { this->timeInterval_ = nullptr;};
    inline string getTimeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, "") };
    inline GetScriptTrendingReportRequest& setTimeInterval(string timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


  protected:
    // The end time of the statistics. The parameter value must be a UNIX timestamp in milliseconds. It indicates the number of milliseconds that have elapsed since 00:00:00 UTC on January 1, 1970. The following limits apply:
    // 
    // 1. Time range: You can query data by hour for up to 7 days or by day for up to 180 days.
    // 
    // 2. Alignment with time granularity: If you query data by hour, the minutes, seconds, and milliseconds must be 0. If you query data by day, the hours, minutes, seconds, and milliseconds must be 0. If the specified timestamp is not aligned with the time granularity, the system automatically rounds it up to the next valid time.
    shared_ptr<int64_t> endTime_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The scenario ID.
    shared_ptr<string> scriptId_ {};
    // The start time of the statistics. The parameter value is a UNIX timestamp in milliseconds. It indicates the number of milliseconds that have elapsed since 00:00:00 UTC on January 1, 1970. The following limits apply:
    // 
    // 1. Valid start time: You can query data collected within the last 365 days from the current date.
    // 
    // 2. Alignment with time granularity: If you query data by hour, the minutes, seconds, and milliseconds must be 0. If you query data by day, the hours, minutes, seconds, and milliseconds must be 0.
    // 
    // 3. If the specified timestamp is not aligned with the time granularity, the system automatically rounds it up to the next valid time.
    shared_ptr<int64_t> startTime_ {};
    // The time interval.
    shared_ptr<string> timeInterval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
