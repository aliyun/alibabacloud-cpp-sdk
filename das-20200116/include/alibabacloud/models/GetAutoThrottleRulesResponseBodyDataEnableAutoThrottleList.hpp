// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOTHROTTLERULESRESPONSEBODYDATAENABLEAUTOTHROTTLELIST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOTHROTTLERULESRESPONSEBODYDATAENABLEAUTOTHROTTLELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalDuration, abnormalDuration_);
      DARABONBA_PTR_TO_JSON(ActiveSessions, activeSessions_);
      DARABONBA_PTR_TO_JSON(AllowThrottleEndTime, allowThrottleEndTime_);
      DARABONBA_PTR_TO_JSON(AllowThrottleStartTime, allowThrottleStartTime_);
      DARABONBA_PTR_TO_JSON(AutoKillSession, autoKillSession_);
      DARABONBA_PTR_TO_JSON(CpuSessionRelation, cpuSessionRelation_);
      DARABONBA_PTR_TO_JSON(CpuUsage, cpuUsage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxThrottleTime, maxThrottleTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Visible, visible_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalDuration, abnormalDuration_);
      DARABONBA_PTR_FROM_JSON(ActiveSessions, activeSessions_);
      DARABONBA_PTR_FROM_JSON(AllowThrottleEndTime, allowThrottleEndTime_);
      DARABONBA_PTR_FROM_JSON(AllowThrottleStartTime, allowThrottleStartTime_);
      DARABONBA_PTR_FROM_JSON(AutoKillSession, autoKillSession_);
      DARABONBA_PTR_FROM_JSON(CpuSessionRelation, cpuSessionRelation_);
      DARABONBA_PTR_FROM_JSON(CpuUsage, cpuUsage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxThrottleTime, maxThrottleTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Visible, visible_);
    };
    GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList() = default ;
    GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList(const GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList &) = default ;
    GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList(GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList &&) = default ;
    GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList() = default ;
    GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList& operator=(const GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList &) = default ;
    GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList& operator=(GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalDuration_ == nullptr
        && return this->activeSessions_ == nullptr && return this->allowThrottleEndTime_ == nullptr && return this->allowThrottleStartTime_ == nullptr && return this->autoKillSession_ == nullptr && return this->cpuSessionRelation_ == nullptr
        && return this->cpuUsage_ == nullptr && return this->instanceId_ == nullptr && return this->maxThrottleTime_ == nullptr && return this->userId_ == nullptr && return this->visible_ == nullptr; };
    // abnormalDuration Field Functions 
    bool hasAbnormalDuration() const { return this->abnormalDuration_ != nullptr;};
    void deleteAbnormalDuration() { this->abnormalDuration_ = nullptr;};
    inline double abnormalDuration() const { DARABONBA_PTR_GET_DEFAULT(abnormalDuration_, 0.0) };
    inline GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList& setAbnormalDuration(double abnormalDuration) { DARABONBA_PTR_SET_VALUE(abnormalDuration_, abnormalDuration) };


    // activeSessions Field Functions 
    bool hasActiveSessions() const { return this->activeSessions_ != nullptr;};
    void deleteActiveSessions() { this->activeSessions_ = nullptr;};
    inline int64_t activeSessions() const { DARABONBA_PTR_GET_DEFAULT(activeSessions_, 0L) };
    inline GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList& setActiveSessions(int64_t activeSessions) { DARABONBA_PTR_SET_VALUE(activeSessions_, activeSessions) };


    // allowThrottleEndTime Field Functions 
    bool hasAllowThrottleEndTime() const { return this->allowThrottleEndTime_ != nullptr;};
    void deleteAllowThrottleEndTime() { this->allowThrottleEndTime_ = nullptr;};
    inline string allowThrottleEndTime() const { DARABONBA_PTR_GET_DEFAULT(allowThrottleEndTime_, "") };
    inline GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList& setAllowThrottleEndTime(string allowThrottleEndTime) { DARABONBA_PTR_SET_VALUE(allowThrottleEndTime_, allowThrottleEndTime) };


    // allowThrottleStartTime Field Functions 
    bool hasAllowThrottleStartTime() const { return this->allowThrottleStartTime_ != nullptr;};
    void deleteAllowThrottleStartTime() { this->allowThrottleStartTime_ = nullptr;};
    inline string allowThrottleStartTime() const { DARABONBA_PTR_GET_DEFAULT(allowThrottleStartTime_, "") };
    inline GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList& setAllowThrottleStartTime(string allowThrottleStartTime) { DARABONBA_PTR_SET_VALUE(allowThrottleStartTime_, allowThrottleStartTime) };


    // autoKillSession Field Functions 
    bool hasAutoKillSession() const { return this->autoKillSession_ != nullptr;};
    void deleteAutoKillSession() { this->autoKillSession_ = nullptr;};
    inline bool autoKillSession() const { DARABONBA_PTR_GET_DEFAULT(autoKillSession_, false) };
    inline GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList& setAutoKillSession(bool autoKillSession) { DARABONBA_PTR_SET_VALUE(autoKillSession_, autoKillSession) };


    // cpuSessionRelation Field Functions 
    bool hasCpuSessionRelation() const { return this->cpuSessionRelation_ != nullptr;};
    void deleteCpuSessionRelation() { this->cpuSessionRelation_ = nullptr;};
    inline string cpuSessionRelation() const { DARABONBA_PTR_GET_DEFAULT(cpuSessionRelation_, "") };
    inline GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList& setCpuSessionRelation(string cpuSessionRelation) { DARABONBA_PTR_SET_VALUE(cpuSessionRelation_, cpuSessionRelation) };


    // cpuUsage Field Functions 
    bool hasCpuUsage() const { return this->cpuUsage_ != nullptr;};
    void deleteCpuUsage() { this->cpuUsage_ = nullptr;};
    inline double cpuUsage() const { DARABONBA_PTR_GET_DEFAULT(cpuUsage_, 0.0) };
    inline GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList& setCpuUsage(double cpuUsage) { DARABONBA_PTR_SET_VALUE(cpuUsage_, cpuUsage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxThrottleTime Field Functions 
    bool hasMaxThrottleTime() const { return this->maxThrottleTime_ != nullptr;};
    void deleteMaxThrottleTime() { this->maxThrottleTime_ = nullptr;};
    inline double maxThrottleTime() const { DARABONBA_PTR_GET_DEFAULT(maxThrottleTime_, 0.0) };
    inline GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList& setMaxThrottleTime(double maxThrottleTime) { DARABONBA_PTR_SET_VALUE(maxThrottleTime_, maxThrottleTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // visible Field Functions 
    bool hasVisible() const { return this->visible_ != nullptr;};
    void deleteVisible() { this->visible_ = nullptr;};
    inline bool visible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
    inline GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


  protected:
    // The maximum period of time during which an exception occurs when automatic SQL throttling is triggered. Unit: minutes.
    std::shared_ptr<double> abnormalDuration_ = nullptr;
    // The maximum number of active sessions.
    std::shared_ptr<int64_t> activeSessions_ = nullptr;
    // The end time of the throttling window. The value of this parameter is in UTC.
    std::shared_ptr<string> allowThrottleEndTime_ = nullptr;
    // The start time of the throttling window. The value of this parameter is in UTC.
    std::shared_ptr<string> allowThrottleStartTime_ = nullptr;
    // Indicates whether abnormal SQL statements in execution are terminated at a time. Valid values:
    // 
    // > Abnormal SQL statements use the same template as the SQL statements that need to be throttled.
    // 
    // * **true**
    // * **false**
    std::shared_ptr<bool> autoKillSession_ = nullptr;
    // The logical relationship between the CPU utilization threshold and the maximum number of active sessions. Valid values:
    // 
    // * **AND**
    // * **OR**
    std::shared_ptr<string> cpuSessionRelation_ = nullptr;
    // The CPU utilization threshold.
    std::shared_ptr<double> cpuUsage_ = nullptr;
    // The database instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The maximum throttling duration. Unit: minutes.
    std::shared_ptr<double> maxThrottleTime_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to create the database instance.
    std::shared_ptr<string> userId_ = nullptr;
    // Indicates whether the automatic SQL throttling feature is enabled. Valid values:
    // 
    // * **true**
    // * **false**
    std::shared_ptr<bool> visible_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
