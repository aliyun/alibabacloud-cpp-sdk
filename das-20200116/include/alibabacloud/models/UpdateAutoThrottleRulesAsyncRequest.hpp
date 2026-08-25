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
    virtual bool empty() const override { return this->abnormalDuration_ == nullptr
        && this->activeSessions_ == nullptr && this->allowThrottleEndTime_ == nullptr && this->allowThrottleStartTime_ == nullptr && this->autoKillSession_ == nullptr && this->consoleContext_ == nullptr
        && this->cpuSessionRelation_ == nullptr && this->cpuUsage_ == nullptr && this->instanceIds_ == nullptr && this->maxThrottleTime_ == nullptr && this->resultId_ == nullptr; };
    // abnormalDuration Field Functions 
    bool hasAbnormalDuration() const { return this->abnormalDuration_ != nullptr;};
    void deleteAbnormalDuration() { this->abnormalDuration_ = nullptr;};
    inline double getAbnormalDuration() const { DARABONBA_PTR_GET_DEFAULT(abnormalDuration_, 0.0) };
    inline UpdateAutoThrottleRulesAsyncRequest& setAbnormalDuration(double abnormalDuration) { DARABONBA_PTR_SET_VALUE(abnormalDuration_, abnormalDuration) };


    // activeSessions Field Functions 
    bool hasActiveSessions() const { return this->activeSessions_ != nullptr;};
    void deleteActiveSessions() { this->activeSessions_ = nullptr;};
    inline int64_t getActiveSessions() const { DARABONBA_PTR_GET_DEFAULT(activeSessions_, 0L) };
    inline UpdateAutoThrottleRulesAsyncRequest& setActiveSessions(int64_t activeSessions) { DARABONBA_PTR_SET_VALUE(activeSessions_, activeSessions) };


    // allowThrottleEndTime Field Functions 
    bool hasAllowThrottleEndTime() const { return this->allowThrottleEndTime_ != nullptr;};
    void deleteAllowThrottleEndTime() { this->allowThrottleEndTime_ = nullptr;};
    inline string getAllowThrottleEndTime() const { DARABONBA_PTR_GET_DEFAULT(allowThrottleEndTime_, "") };
    inline UpdateAutoThrottleRulesAsyncRequest& setAllowThrottleEndTime(string allowThrottleEndTime) { DARABONBA_PTR_SET_VALUE(allowThrottleEndTime_, allowThrottleEndTime) };


    // allowThrottleStartTime Field Functions 
    bool hasAllowThrottleStartTime() const { return this->allowThrottleStartTime_ != nullptr;};
    void deleteAllowThrottleStartTime() { this->allowThrottleStartTime_ = nullptr;};
    inline string getAllowThrottleStartTime() const { DARABONBA_PTR_GET_DEFAULT(allowThrottleStartTime_, "") };
    inline UpdateAutoThrottleRulesAsyncRequest& setAllowThrottleStartTime(string allowThrottleStartTime) { DARABONBA_PTR_SET_VALUE(allowThrottleStartTime_, allowThrottleStartTime) };


    // autoKillSession Field Functions 
    bool hasAutoKillSession() const { return this->autoKillSession_ != nullptr;};
    void deleteAutoKillSession() { this->autoKillSession_ = nullptr;};
    inline bool getAutoKillSession() const { DARABONBA_PTR_GET_DEFAULT(autoKillSession_, false) };
    inline UpdateAutoThrottleRulesAsyncRequest& setAutoKillSession(bool autoKillSession) { DARABONBA_PTR_SET_VALUE(autoKillSession_, autoKillSession) };


    // consoleContext Field Functions 
    bool hasConsoleContext() const { return this->consoleContext_ != nullptr;};
    void deleteConsoleContext() { this->consoleContext_ = nullptr;};
    inline string getConsoleContext() const { DARABONBA_PTR_GET_DEFAULT(consoleContext_, "") };
    inline UpdateAutoThrottleRulesAsyncRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // cpuSessionRelation Field Functions 
    bool hasCpuSessionRelation() const { return this->cpuSessionRelation_ != nullptr;};
    void deleteCpuSessionRelation() { this->cpuSessionRelation_ = nullptr;};
    inline string getCpuSessionRelation() const { DARABONBA_PTR_GET_DEFAULT(cpuSessionRelation_, "") };
    inline UpdateAutoThrottleRulesAsyncRequest& setCpuSessionRelation(string cpuSessionRelation) { DARABONBA_PTR_SET_VALUE(cpuSessionRelation_, cpuSessionRelation) };


    // cpuUsage Field Functions 
    bool hasCpuUsage() const { return this->cpuUsage_ != nullptr;};
    void deleteCpuUsage() { this->cpuUsage_ = nullptr;};
    inline double getCpuUsage() const { DARABONBA_PTR_GET_DEFAULT(cpuUsage_, 0.0) };
    inline UpdateAutoThrottleRulesAsyncRequest& setCpuUsage(double cpuUsage) { DARABONBA_PTR_SET_VALUE(cpuUsage_, cpuUsage) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline UpdateAutoThrottleRulesAsyncRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // maxThrottleTime Field Functions 
    bool hasMaxThrottleTime() const { return this->maxThrottleTime_ != nullptr;};
    void deleteMaxThrottleTime() { this->maxThrottleTime_ = nullptr;};
    inline double getMaxThrottleTime() const { DARABONBA_PTR_GET_DEFAULT(maxThrottleTime_, 0.0) };
    inline UpdateAutoThrottleRulesAsyncRequest& setMaxThrottleTime(double maxThrottleTime) { DARABONBA_PTR_SET_VALUE(maxThrottleTime_, maxThrottleTime) };


    // resultId Field Functions 
    bool hasResultId() const { return this->resultId_ != nullptr;};
    void deleteResultId() { this->resultId_ = nullptr;};
    inline string getResultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
    inline UpdateAutoThrottleRulesAsyncRequest& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


  protected:
    // The duration threshold of the anomaly that triggers automatic SQL throttling. The value must be a positive integer greater than or equal to 2. Unit: minutes.
    // 
    // This parameter is required.
    shared_ptr<double> abnormalDuration_ {};
    // The active sessions threshold.	
    // 
    // - If the relationship with the CPU utilization threshold is **OR**, the value must be greater than or equal to 16.
    // - If the relationship with the CPU utilization threshold is **AND**, the value must be greater than or equal to 2.
    // 
    // This parameter is required.
    shared_ptr<int64_t> activeSessions_ {};
    // The end time of the throttling time window (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> allowThrottleEndTime_ {};
    // The start time of the throttling time window (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> allowThrottleStartTime_ {};
    // Specifies whether to simultaneously kill abnormal SQL statements that are being executed.
    // > Abnormal SQL statements are those that match the SQL templates to be throttled.
    // 
    // Valid values:
    // - **true**: Yes.
    // - **false**: No.
    // 
    // This parameter is required.
    shared_ptr<bool> autoKillSession_ {};
    // A reserved parameter.
    shared_ptr<string> consoleContext_ {};
    // The logical relationship between the CPU utilization threshold and the active sessions threshold. Valid values:
    // - **AND**: both conditions must be met.
    // - **OR**: either condition must be met.
    // 
    // This parameter is required.
    shared_ptr<string> cpuSessionRelation_ {};
    // The CPU utilization threshold. Valid values: 70% to 100%.
    // 
    // This parameter is required.
    shared_ptr<double> cpuUsage_ {};
    // The database instance IDs.
    // 
    // > The data format is JSONArray, such as `[\\"Instance ID 1\\",\\"Instance ID 2\\"]`. Separate instance IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> instanceIds_ {};
    // The maximum throttling duration. The value must be a positive integer. Unit: minutes.
    // 
    // This parameter is required.
    shared_ptr<double> maxThrottleTime_ {};
    // The ID of the asynchronous request.
    // > An asynchronous call does not immediately return complete results. First, call this operation to obtain the **ResultId**. Then, use the returned **ResultId** to initiate the call again until **isFinish** is **true**, at which point the complete results are returned. This means that you must call this operation at least twice to obtain complete data.
    shared_ptr<string> resultId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
