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
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> scriptId_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<string> timeInterval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
