// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTOTHROTTLERULESASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTOTHROTTLERULESASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class UpdateAutoThrottleRulesAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAutoThrottleRulesAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalDuration, abnormalDuration_);
      DARABONBA_PTR_TO_JSON(ActiveSessions, activeSessions_);
      DARABONBA_PTR_TO_JSON(AllowThrottleEndTime, allowThrottleEndTime_);
      DARABONBA_PTR_TO_JSON(AllowThrottleStartTime, allowThrottleStartTime_);
      DARABONBA_PTR_TO_JSON(AutoKillSession, autoKillSession_);
      DARABONBA_PTR_TO_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_TO_JSON(CpuSessionRelation, cpuSessionRelation_);
      DARABONBA_PTR_TO_JSON(CpuUsage, cpuUsage_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(MaxThrottleTime, maxThrottleTime_);
      DARABONBA_PTR_TO_JSON(ResultId, resultId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAutoThrottleRulesAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalDuration, abnormalDuration_);
      DARABONBA_PTR_FROM_JSON(ActiveSessions, activeSessions_);
      DARABONBA_PTR_FROM_JSON(AllowThrottleEndTime, allowThrottleEndTime_);
      DARABONBA_PTR_FROM_JSON(AllowThrottleStartTime, allowThrottleStartTime_);
      DARABONBA_PTR_FROM_JSON(AutoKillSession, autoKillSession_);
      DARABONBA_PTR_FROM_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_FROM_JSON(CpuSessionRelation, cpuSessionRelation_);
      DARABONBA_PTR_FROM_JSON(CpuUsage, cpuUsage_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(MaxThrottleTime, maxThrottleTime_);
      DARABONBA_PTR_FROM_JSON(ResultId, resultId_);
    };
    UpdateAutoThrottleRulesAsyncRequest() = default ;
    UpdateAutoThrottleRulesAsyncRequest(const UpdateAutoThrottleRulesAsyncRequest &) = default ;
    UpdateAutoThrottleRulesAsyncRequest(UpdateAutoThrottleRulesAsyncRequest &&) = default ;
    UpdateAutoThrottleRulesAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAutoThrottleRulesAsyncRequest() = default ;
    UpdateAutoThrottleRulesAsyncRequest& operator=(const UpdateAutoThrottleRulesAsyncRequest &) = default ;
    UpdateAutoThrottleRulesAsyncRequest& operator=(UpdateAutoThrottleRulesAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abnormalDuration_ != nullptr
        && this->activeSessions_ != nullptr && this->allowThrottleEndTime_ != nullptr && this->allowThrottleStartTime_ != nullptr && this->autoKillSession_ != nullptr && this->consoleContext_ != nullptr
        && this->cpuSessionRelation_ != nullptr && this->cpuUsage_ != nullptr && this->instanceIds_ != nullptr && this->maxThrottleTime_ != nullptr && this->resultId_ != nullptr; };
    // abnormalDuration Field Functions 
    bool hasAbnormalDuration() const { return this->abnormalDuration_ != nullptr;};
    void deleteAbnormalDuration() { this->abnormalDuration_ = nullptr;};
    inline double abnormalDuration() const { DARABONBA_PTR_GET_DEFAULT(abnormalDuration_, 0.0) };
    inline UpdateAutoThrottleRulesAsyncRequest& setAbnormalDuration(double abnormalDuration) { DARABONBA_PTR_SET_VALUE(abnormalDuration_, abnormalDuration) };


    // activeSessions Field Functions 
    bool hasActiveSessions() const { return this->activeSessions_ != nullptr;};
    void deleteActiveSessions() { this->activeSessions_ = nullptr;};
    inline int64_t activeSessions() const { DARABONBA_PTR_GET_DEFAULT(activeSessions_, 0L) };
    inline UpdateAutoThrottleRulesAsyncRequest& setActiveSessions(int64_t activeSessions) { DARABONBA_PTR_SET_VALUE(activeSessions_, activeSessions) };


    // allowThrottleEndTime Field Functions 
    bool hasAllowThrottleEndTime() const { return this->allowThrottleEndTime_ != nullptr;};
    void deleteAllowThrottleEndTime() { this->allowThrottleEndTime_ = nullptr;};
    inline string allowThrottleEndTime() const { DARABONBA_PTR_GET_DEFAULT(allowThrottleEndTime_, "") };
    inline UpdateAutoThrottleRulesAsyncRequest& setAllowThrottleEndTime(string allowThrottleEndTime) { DARABONBA_PTR_SET_VALUE(allowThrottleEndTime_, allowThrottleEndTime) };


    // allowThrottleStartTime Field Functions 
    bool hasAllowThrottleStartTime() const { return this->allowThrottleStartTime_ != nullptr;};
    void deleteAllowThrottleStartTime() { this->allowThrottleStartTime_ = nullptr;};
    inline string allowThrottleStartTime() const { DARABONBA_PTR_GET_DEFAULT(allowThrottleStartTime_, "") };
    inline UpdateAutoThrottleRulesAsyncRequest& setAllowThrottleStartTime(string allowThrottleStartTime) { DARABONBA_PTR_SET_VALUE(allowThrottleStartTime_, allowThrottleStartTime) };


    // autoKillSession Field Functions 
    bool hasAutoKillSession() const { return this->autoKillSession_ != nullptr;};
    void deleteAutoKillSession() { this->autoKillSession_ = nullptr;};
    inline bool autoKillSession() const { DARABONBA_PTR_GET_DEFAULT(autoKillSession_, false) };
    inline UpdateAutoThrottleRulesAsyncRequest& setAutoKillSession(bool autoKillSession) { DARABONBA_PTR_SET_VALUE(autoKillSession_, autoKillSession) };


    // consoleContext Field Functions 
    bool hasConsoleContext() const { return this->consoleContext_ != nullptr;};
    void deleteConsoleContext() { this->consoleContext_ = nullptr;};
    inline string consoleContext() const { DARABONBA_PTR_GET_DEFAULT(consoleContext_, "") };
    inline UpdateAutoThrottleRulesAsyncRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // cpuSessionRelation Field Functions 
    bool hasCpuSessionRelation() const { return this->cpuSessionRelation_ != nullptr;};
    void deleteCpuSessionRelation() { this->cpuSessionRelation_ = nullptr;};
    inline string cpuSessionRelation() const { DARABONBA_PTR_GET_DEFAULT(cpuSessionRelation_, "") };
    inline UpdateAutoThrottleRulesAsyncRequest& setCpuSessionRelation(string cpuSessionRelation) { DARABONBA_PTR_SET_VALUE(cpuSessionRelation_, cpuSessionRelation) };


    // cpuUsage Field Functions 
    bool hasCpuUsage() const { return this->cpuUsage_ != nullptr;};
    void deleteCpuUsage() { this->cpuUsage_ = nullptr;};
    inline double cpuUsage() const { DARABONBA_PTR_GET_DEFAULT(cpuUsage_, 0.0) };
    inline UpdateAutoThrottleRulesAsyncRequest& setCpuUsage(double cpuUsage) { DARABONBA_PTR_SET_VALUE(cpuUsage_, cpuUsage) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string instanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline UpdateAutoThrottleRulesAsyncRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // maxThrottleTime Field Functions 
    bool hasMaxThrottleTime() const { return this->maxThrottleTime_ != nullptr;};
    void deleteMaxThrottleTime() { this->maxThrottleTime_ = nullptr;};
    inline double maxThrottleTime() const { DARABONBA_PTR_GET_DEFAULT(maxThrottleTime_, 0.0) };
    inline UpdateAutoThrottleRulesAsyncRequest& setMaxThrottleTime(double maxThrottleTime) { DARABONBA_PTR_SET_VALUE(maxThrottleTime_, maxThrottleTime) };


    // resultId Field Functions 
    bool hasResultId() const { return this->resultId_ != nullptr;};
    void deleteResultId() { this->resultId_ = nullptr;};
    inline string resultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
    inline UpdateAutoThrottleRulesAsyncRequest& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


  protected:
    // The duration threshold for triggering automatic SQL throttling. Set this parameter to an integer that is greater than or equal to 2. Unit: minutes.
    // 
    // This parameter is required.
    std::shared_ptr<double> abnormalDuration_ = nullptr;
    // The threshold for the number of active sessions.
    // 
    // *   If this parameter and CpuUsage are in the **OR** relationship, set this parameter to an integer that is greater than or equal to 16.
    // *   If this parameter and CpuUsage are in the **AND** relationship, set this parameter to an integer that is greater than or equal to 2.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> activeSessions_ = nullptr;
    // The end time of the throttling window. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> allowThrottleEndTime_ = nullptr;
    // The start time of the throttling window. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> allowThrottleStartTime_ = nullptr;
    // Specifies whether to terminate abnormal SQL statements in execution at the same time. Valid values:
    // 
    // >  Abnormal SQL statements use the same template as the SQL statements to be throttled.
    // 
    // *   **true**
    // *   **false**
    // 
    // This parameter is required.
    std::shared_ptr<bool> autoKillSession_ = nullptr;
    // The reserved parameter.
    std::shared_ptr<string> consoleContext_ = nullptr;
    // The logical relationship between the CPU utilization threshold and the maximum number of active sessions. Valid values:
    // 
    // *   **AND**
    // *   **OR**
    // 
    // This parameter is required.
    std::shared_ptr<string> cpuSessionRelation_ = nullptr;
    // The threshold for CPU utilization. Valid values: 70% to 100%.
    // 
    // This parameter is required.
    std::shared_ptr<double> cpuUsage_ = nullptr;
    // The database instance IDs.
    // 
    // >  Set this parameter to a JSON array that consists of multiple instance IDs. Separate instance IDs with commas (,). Example: `[\\"Instance ID1\\", \\"Instance ID2\\"]`.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceIds_ = nullptr;
    // The maximum throttling duration. Set this parameter to a positive integer. Unit: minutes.
    // 
    // This parameter is required.
    std::shared_ptr<double> maxThrottleTime_ = nullptr;
    // The ID of the asynchronous request.
    // 
    // >  You can leave this parameter empty when you call the operation to initiate the request for the first time, and use the value of this parameter contained in the response to the first request for subsequent requests.
    std::shared_ptr<string> resultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
