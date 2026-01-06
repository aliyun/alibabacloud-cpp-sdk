// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOTHROTTLERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOTHROTTLERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAutoThrottleRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoThrottleRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoThrottleRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAutoThrottleRulesResponseBody() = default ;
    GetAutoThrottleRulesResponseBody(const GetAutoThrottleRulesResponseBody &) = default ;
    GetAutoThrottleRulesResponseBody(GetAutoThrottleRulesResponseBody &&) = default ;
    GetAutoThrottleRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoThrottleRulesResponseBody() = default ;
    GetAutoThrottleRulesResponseBody& operator=(const GetAutoThrottleRulesResponseBody &) = default ;
    GetAutoThrottleRulesResponseBody& operator=(GetAutoThrottleRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EnableAutoThrottleCount, enableAutoThrottleCount_);
        DARABONBA_PTR_TO_JSON(EnableAutoThrottleList, enableAutoThrottleList_);
        DARABONBA_PTR_TO_JSON(NeverEnableAutoThrottleOrReleasedInstanceCount, neverEnableAutoThrottleOrReleasedInstanceCount_);
        DARABONBA_PTR_TO_JSON(NeverEnableAutoThrottleOrReleasedInstanceIdList, neverEnableAutoThrottleOrReleasedInstanceIdList_);
        DARABONBA_PTR_TO_JSON(TotalAutoThrottleRulesCount, totalAutoThrottleRulesCount_);
        DARABONBA_PTR_TO_JSON(TurnOffAutoThrottleCount, turnOffAutoThrottleCount_);
        DARABONBA_PTR_TO_JSON(TurnOffAutoThrottleList, turnOffAutoThrottleList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableAutoThrottleCount, enableAutoThrottleCount_);
        DARABONBA_PTR_FROM_JSON(EnableAutoThrottleList, enableAutoThrottleList_);
        DARABONBA_PTR_FROM_JSON(NeverEnableAutoThrottleOrReleasedInstanceCount, neverEnableAutoThrottleOrReleasedInstanceCount_);
        DARABONBA_PTR_FROM_JSON(NeverEnableAutoThrottleOrReleasedInstanceIdList, neverEnableAutoThrottleOrReleasedInstanceIdList_);
        DARABONBA_PTR_FROM_JSON(TotalAutoThrottleRulesCount, totalAutoThrottleRulesCount_);
        DARABONBA_PTR_FROM_JSON(TurnOffAutoThrottleCount, turnOffAutoThrottleCount_);
        DARABONBA_PTR_FROM_JSON(TurnOffAutoThrottleList, turnOffAutoThrottleList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TurnOffAutoThrottleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TurnOffAutoThrottleList& obj) { 
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
        friend void from_json(const Darabonba::Json& j, TurnOffAutoThrottleList& obj) { 
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
        TurnOffAutoThrottleList() = default ;
        TurnOffAutoThrottleList(const TurnOffAutoThrottleList &) = default ;
        TurnOffAutoThrottleList(TurnOffAutoThrottleList &&) = default ;
        TurnOffAutoThrottleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TurnOffAutoThrottleList() = default ;
        TurnOffAutoThrottleList& operator=(const TurnOffAutoThrottleList &) = default ;
        TurnOffAutoThrottleList& operator=(TurnOffAutoThrottleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->abnormalDuration_ == nullptr
        && this->activeSessions_ == nullptr && this->allowThrottleEndTime_ == nullptr && this->allowThrottleStartTime_ == nullptr && this->autoKillSession_ == nullptr && this->cpuSessionRelation_ == nullptr
        && this->cpuUsage_ == nullptr && this->instanceId_ == nullptr && this->maxThrottleTime_ == nullptr && this->userId_ == nullptr && this->visible_ == nullptr; };
        // abnormalDuration Field Functions 
        bool hasAbnormalDuration() const { return this->abnormalDuration_ != nullptr;};
        void deleteAbnormalDuration() { this->abnormalDuration_ = nullptr;};
        inline double getAbnormalDuration() const { DARABONBA_PTR_GET_DEFAULT(abnormalDuration_, 0.0) };
        inline TurnOffAutoThrottleList& setAbnormalDuration(double abnormalDuration) { DARABONBA_PTR_SET_VALUE(abnormalDuration_, abnormalDuration) };


        // activeSessions Field Functions 
        bool hasActiveSessions() const { return this->activeSessions_ != nullptr;};
        void deleteActiveSessions() { this->activeSessions_ = nullptr;};
        inline int64_t getActiveSessions() const { DARABONBA_PTR_GET_DEFAULT(activeSessions_, 0L) };
        inline TurnOffAutoThrottleList& setActiveSessions(int64_t activeSessions) { DARABONBA_PTR_SET_VALUE(activeSessions_, activeSessions) };


        // allowThrottleEndTime Field Functions 
        bool hasAllowThrottleEndTime() const { return this->allowThrottleEndTime_ != nullptr;};
        void deleteAllowThrottleEndTime() { this->allowThrottleEndTime_ = nullptr;};
        inline string getAllowThrottleEndTime() const { DARABONBA_PTR_GET_DEFAULT(allowThrottleEndTime_, "") };
        inline TurnOffAutoThrottleList& setAllowThrottleEndTime(string allowThrottleEndTime) { DARABONBA_PTR_SET_VALUE(allowThrottleEndTime_, allowThrottleEndTime) };


        // allowThrottleStartTime Field Functions 
        bool hasAllowThrottleStartTime() const { return this->allowThrottleStartTime_ != nullptr;};
        void deleteAllowThrottleStartTime() { this->allowThrottleStartTime_ = nullptr;};
        inline string getAllowThrottleStartTime() const { DARABONBA_PTR_GET_DEFAULT(allowThrottleStartTime_, "") };
        inline TurnOffAutoThrottleList& setAllowThrottleStartTime(string allowThrottleStartTime) { DARABONBA_PTR_SET_VALUE(allowThrottleStartTime_, allowThrottleStartTime) };


        // autoKillSession Field Functions 
        bool hasAutoKillSession() const { return this->autoKillSession_ != nullptr;};
        void deleteAutoKillSession() { this->autoKillSession_ = nullptr;};
        inline bool getAutoKillSession() const { DARABONBA_PTR_GET_DEFAULT(autoKillSession_, false) };
        inline TurnOffAutoThrottleList& setAutoKillSession(bool autoKillSession) { DARABONBA_PTR_SET_VALUE(autoKillSession_, autoKillSession) };


        // cpuSessionRelation Field Functions 
        bool hasCpuSessionRelation() const { return this->cpuSessionRelation_ != nullptr;};
        void deleteCpuSessionRelation() { this->cpuSessionRelation_ = nullptr;};
        inline string getCpuSessionRelation() const { DARABONBA_PTR_GET_DEFAULT(cpuSessionRelation_, "") };
        inline TurnOffAutoThrottleList& setCpuSessionRelation(string cpuSessionRelation) { DARABONBA_PTR_SET_VALUE(cpuSessionRelation_, cpuSessionRelation) };


        // cpuUsage Field Functions 
        bool hasCpuUsage() const { return this->cpuUsage_ != nullptr;};
        void deleteCpuUsage() { this->cpuUsage_ = nullptr;};
        inline double getCpuUsage() const { DARABONBA_PTR_GET_DEFAULT(cpuUsage_, 0.0) };
        inline TurnOffAutoThrottleList& setCpuUsage(double cpuUsage) { DARABONBA_PTR_SET_VALUE(cpuUsage_, cpuUsage) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline TurnOffAutoThrottleList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // maxThrottleTime Field Functions 
        bool hasMaxThrottleTime() const { return this->maxThrottleTime_ != nullptr;};
        void deleteMaxThrottleTime() { this->maxThrottleTime_ = nullptr;};
        inline double getMaxThrottleTime() const { DARABONBA_PTR_GET_DEFAULT(maxThrottleTime_, 0.0) };
        inline TurnOffAutoThrottleList& setMaxThrottleTime(double maxThrottleTime) { DARABONBA_PTR_SET_VALUE(maxThrottleTime_, maxThrottleTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline TurnOffAutoThrottleList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // visible Field Functions 
        bool hasVisible() const { return this->visible_ != nullptr;};
        void deleteVisible() { this->visible_ = nullptr;};
        inline bool getVisible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
        inline TurnOffAutoThrottleList& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


      protected:
        // The maximum period of time during which the automatic SQL throttling feature is triggered. Unit: minutes.
        shared_ptr<double> abnormalDuration_ {};
        // The maximum number of active sessions.
        shared_ptr<int64_t> activeSessions_ {};
        // The end time of the throttling window. The value of this parameter is in UTC.
        shared_ptr<string> allowThrottleEndTime_ {};
        // The start time of the throttling window. The value of this parameter is in UTC.
        shared_ptr<string> allowThrottleStartTime_ {};
        // Indicates whether abnormal SQL statements in execution are terminated at a time. Valid values:
        // 
        // > Abnormal SQL statements use the same template as the SQL statements that need to be throttled.
        // 
        // * **true**
        // * **false**
        shared_ptr<bool> autoKillSession_ {};
        // The logical relationship between the CPU utilization threshold and the maximum number of active sessions. Valid values:
        // 
        // * **AND**
        // * **OR**
        shared_ptr<string> cpuSessionRelation_ {};
        // The CPU utilization threshold.
        shared_ptr<double> cpuUsage_ {};
        // The database instance ID.
        shared_ptr<string> instanceId_ {};
        // The maximum throttling duration. Unit: minutes.
        shared_ptr<double> maxThrottleTime_ {};
        // The ID of the Alibaba Cloud account that is used to create the database instance.
        shared_ptr<string> userId_ {};
        // Indicates whether the automatic SQL throttling feature is enabled. Valid values:
        // 
        // * **true**
        // * **false**
        shared_ptr<bool> visible_ {};
      };

      class EnableAutoThrottleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnableAutoThrottleList& obj) { 
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
        friend void from_json(const Darabonba::Json& j, EnableAutoThrottleList& obj) { 
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
        EnableAutoThrottleList() = default ;
        EnableAutoThrottleList(const EnableAutoThrottleList &) = default ;
        EnableAutoThrottleList(EnableAutoThrottleList &&) = default ;
        EnableAutoThrottleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnableAutoThrottleList() = default ;
        EnableAutoThrottleList& operator=(const EnableAutoThrottleList &) = default ;
        EnableAutoThrottleList& operator=(EnableAutoThrottleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->abnormalDuration_ == nullptr
        && this->activeSessions_ == nullptr && this->allowThrottleEndTime_ == nullptr && this->allowThrottleStartTime_ == nullptr && this->autoKillSession_ == nullptr && this->cpuSessionRelation_ == nullptr
        && this->cpuUsage_ == nullptr && this->instanceId_ == nullptr && this->maxThrottleTime_ == nullptr && this->userId_ == nullptr && this->visible_ == nullptr; };
        // abnormalDuration Field Functions 
        bool hasAbnormalDuration() const { return this->abnormalDuration_ != nullptr;};
        void deleteAbnormalDuration() { this->abnormalDuration_ = nullptr;};
        inline double getAbnormalDuration() const { DARABONBA_PTR_GET_DEFAULT(abnormalDuration_, 0.0) };
        inline EnableAutoThrottleList& setAbnormalDuration(double abnormalDuration) { DARABONBA_PTR_SET_VALUE(abnormalDuration_, abnormalDuration) };


        // activeSessions Field Functions 
        bool hasActiveSessions() const { return this->activeSessions_ != nullptr;};
        void deleteActiveSessions() { this->activeSessions_ = nullptr;};
        inline int64_t getActiveSessions() const { DARABONBA_PTR_GET_DEFAULT(activeSessions_, 0L) };
        inline EnableAutoThrottleList& setActiveSessions(int64_t activeSessions) { DARABONBA_PTR_SET_VALUE(activeSessions_, activeSessions) };


        // allowThrottleEndTime Field Functions 
        bool hasAllowThrottleEndTime() const { return this->allowThrottleEndTime_ != nullptr;};
        void deleteAllowThrottleEndTime() { this->allowThrottleEndTime_ = nullptr;};
        inline string getAllowThrottleEndTime() const { DARABONBA_PTR_GET_DEFAULT(allowThrottleEndTime_, "") };
        inline EnableAutoThrottleList& setAllowThrottleEndTime(string allowThrottleEndTime) { DARABONBA_PTR_SET_VALUE(allowThrottleEndTime_, allowThrottleEndTime) };


        // allowThrottleStartTime Field Functions 
        bool hasAllowThrottleStartTime() const { return this->allowThrottleStartTime_ != nullptr;};
        void deleteAllowThrottleStartTime() { this->allowThrottleStartTime_ = nullptr;};
        inline string getAllowThrottleStartTime() const { DARABONBA_PTR_GET_DEFAULT(allowThrottleStartTime_, "") };
        inline EnableAutoThrottleList& setAllowThrottleStartTime(string allowThrottleStartTime) { DARABONBA_PTR_SET_VALUE(allowThrottleStartTime_, allowThrottleStartTime) };


        // autoKillSession Field Functions 
        bool hasAutoKillSession() const { return this->autoKillSession_ != nullptr;};
        void deleteAutoKillSession() { this->autoKillSession_ = nullptr;};
        inline bool getAutoKillSession() const { DARABONBA_PTR_GET_DEFAULT(autoKillSession_, false) };
        inline EnableAutoThrottleList& setAutoKillSession(bool autoKillSession) { DARABONBA_PTR_SET_VALUE(autoKillSession_, autoKillSession) };


        // cpuSessionRelation Field Functions 
        bool hasCpuSessionRelation() const { return this->cpuSessionRelation_ != nullptr;};
        void deleteCpuSessionRelation() { this->cpuSessionRelation_ = nullptr;};
        inline string getCpuSessionRelation() const { DARABONBA_PTR_GET_DEFAULT(cpuSessionRelation_, "") };
        inline EnableAutoThrottleList& setCpuSessionRelation(string cpuSessionRelation) { DARABONBA_PTR_SET_VALUE(cpuSessionRelation_, cpuSessionRelation) };


        // cpuUsage Field Functions 
        bool hasCpuUsage() const { return this->cpuUsage_ != nullptr;};
        void deleteCpuUsage() { this->cpuUsage_ = nullptr;};
        inline double getCpuUsage() const { DARABONBA_PTR_GET_DEFAULT(cpuUsage_, 0.0) };
        inline EnableAutoThrottleList& setCpuUsage(double cpuUsage) { DARABONBA_PTR_SET_VALUE(cpuUsage_, cpuUsage) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline EnableAutoThrottleList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // maxThrottleTime Field Functions 
        bool hasMaxThrottleTime() const { return this->maxThrottleTime_ != nullptr;};
        void deleteMaxThrottleTime() { this->maxThrottleTime_ = nullptr;};
        inline double getMaxThrottleTime() const { DARABONBA_PTR_GET_DEFAULT(maxThrottleTime_, 0.0) };
        inline EnableAutoThrottleList& setMaxThrottleTime(double maxThrottleTime) { DARABONBA_PTR_SET_VALUE(maxThrottleTime_, maxThrottleTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline EnableAutoThrottleList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // visible Field Functions 
        bool hasVisible() const { return this->visible_ != nullptr;};
        void deleteVisible() { this->visible_ = nullptr;};
        inline bool getVisible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
        inline EnableAutoThrottleList& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


      protected:
        // The maximum period of time during which an exception occurs when automatic SQL throttling is triggered. Unit: minutes.
        shared_ptr<double> abnormalDuration_ {};
        // The maximum number of active sessions.
        shared_ptr<int64_t> activeSessions_ {};
        // The end time of the throttling window. The value of this parameter is in UTC.
        shared_ptr<string> allowThrottleEndTime_ {};
        // The start time of the throttling window. The value of this parameter is in UTC.
        shared_ptr<string> allowThrottleStartTime_ {};
        // Indicates whether abnormal SQL statements in execution are terminated at a time. Valid values:
        // 
        // > Abnormal SQL statements use the same template as the SQL statements that need to be throttled.
        // 
        // * **true**
        // * **false**
        shared_ptr<bool> autoKillSession_ {};
        // The logical relationship between the CPU utilization threshold and the maximum number of active sessions. Valid values:
        // 
        // * **AND**
        // * **OR**
        shared_ptr<string> cpuSessionRelation_ {};
        // The CPU utilization threshold.
        shared_ptr<double> cpuUsage_ {};
        // The database instance ID.
        shared_ptr<string> instanceId_ {};
        // The maximum throttling duration. Unit: minutes.
        shared_ptr<double> maxThrottleTime_ {};
        // The ID of the Alibaba Cloud account that is used to create the database instance.
        shared_ptr<string> userId_ {};
        // Indicates whether the automatic SQL throttling feature is enabled. Valid values:
        // 
        // * **true**
        // * **false**
        shared_ptr<bool> visible_ {};
      };

      virtual bool empty() const override { return this->enableAutoThrottleCount_ == nullptr
        && this->enableAutoThrottleList_ == nullptr && this->neverEnableAutoThrottleOrReleasedInstanceCount_ == nullptr && this->neverEnableAutoThrottleOrReleasedInstanceIdList_ == nullptr && this->totalAutoThrottleRulesCount_ == nullptr && this->turnOffAutoThrottleCount_ == nullptr
        && this->turnOffAutoThrottleList_ == nullptr; };
      // enableAutoThrottleCount Field Functions 
      bool hasEnableAutoThrottleCount() const { return this->enableAutoThrottleCount_ != nullptr;};
      void deleteEnableAutoThrottleCount() { this->enableAutoThrottleCount_ = nullptr;};
      inline int64_t getEnableAutoThrottleCount() const { DARABONBA_PTR_GET_DEFAULT(enableAutoThrottleCount_, 0L) };
      inline Data& setEnableAutoThrottleCount(int64_t enableAutoThrottleCount) { DARABONBA_PTR_SET_VALUE(enableAutoThrottleCount_, enableAutoThrottleCount) };


      // enableAutoThrottleList Field Functions 
      bool hasEnableAutoThrottleList() const { return this->enableAutoThrottleList_ != nullptr;};
      void deleteEnableAutoThrottleList() { this->enableAutoThrottleList_ = nullptr;};
      inline const vector<Data::EnableAutoThrottleList> & getEnableAutoThrottleList() const { DARABONBA_PTR_GET_CONST(enableAutoThrottleList_, vector<Data::EnableAutoThrottleList>) };
      inline vector<Data::EnableAutoThrottleList> getEnableAutoThrottleList() { DARABONBA_PTR_GET(enableAutoThrottleList_, vector<Data::EnableAutoThrottleList>) };
      inline Data& setEnableAutoThrottleList(const vector<Data::EnableAutoThrottleList> & enableAutoThrottleList) { DARABONBA_PTR_SET_VALUE(enableAutoThrottleList_, enableAutoThrottleList) };
      inline Data& setEnableAutoThrottleList(vector<Data::EnableAutoThrottleList> && enableAutoThrottleList) { DARABONBA_PTR_SET_RVALUE(enableAutoThrottleList_, enableAutoThrottleList) };


      // neverEnableAutoThrottleOrReleasedInstanceCount Field Functions 
      bool hasNeverEnableAutoThrottleOrReleasedInstanceCount() const { return this->neverEnableAutoThrottleOrReleasedInstanceCount_ != nullptr;};
      void deleteNeverEnableAutoThrottleOrReleasedInstanceCount() { this->neverEnableAutoThrottleOrReleasedInstanceCount_ = nullptr;};
      inline int64_t getNeverEnableAutoThrottleOrReleasedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(neverEnableAutoThrottleOrReleasedInstanceCount_, 0L) };
      inline Data& setNeverEnableAutoThrottleOrReleasedInstanceCount(int64_t neverEnableAutoThrottleOrReleasedInstanceCount) { DARABONBA_PTR_SET_VALUE(neverEnableAutoThrottleOrReleasedInstanceCount_, neverEnableAutoThrottleOrReleasedInstanceCount) };


      // neverEnableAutoThrottleOrReleasedInstanceIdList Field Functions 
      bool hasNeverEnableAutoThrottleOrReleasedInstanceIdList() const { return this->neverEnableAutoThrottleOrReleasedInstanceIdList_ != nullptr;};
      void deleteNeverEnableAutoThrottleOrReleasedInstanceIdList() { this->neverEnableAutoThrottleOrReleasedInstanceIdList_ = nullptr;};
      inline const vector<string> & getNeverEnableAutoThrottleOrReleasedInstanceIdList() const { DARABONBA_PTR_GET_CONST(neverEnableAutoThrottleOrReleasedInstanceIdList_, vector<string>) };
      inline vector<string> getNeverEnableAutoThrottleOrReleasedInstanceIdList() { DARABONBA_PTR_GET(neverEnableAutoThrottleOrReleasedInstanceIdList_, vector<string>) };
      inline Data& setNeverEnableAutoThrottleOrReleasedInstanceIdList(const vector<string> & neverEnableAutoThrottleOrReleasedInstanceIdList) { DARABONBA_PTR_SET_VALUE(neverEnableAutoThrottleOrReleasedInstanceIdList_, neverEnableAutoThrottleOrReleasedInstanceIdList) };
      inline Data& setNeverEnableAutoThrottleOrReleasedInstanceIdList(vector<string> && neverEnableAutoThrottleOrReleasedInstanceIdList) { DARABONBA_PTR_SET_RVALUE(neverEnableAutoThrottleOrReleasedInstanceIdList_, neverEnableAutoThrottleOrReleasedInstanceIdList) };


      // totalAutoThrottleRulesCount Field Functions 
      bool hasTotalAutoThrottleRulesCount() const { return this->totalAutoThrottleRulesCount_ != nullptr;};
      void deleteTotalAutoThrottleRulesCount() { this->totalAutoThrottleRulesCount_ = nullptr;};
      inline int64_t getTotalAutoThrottleRulesCount() const { DARABONBA_PTR_GET_DEFAULT(totalAutoThrottleRulesCount_, 0L) };
      inline Data& setTotalAutoThrottleRulesCount(int64_t totalAutoThrottleRulesCount) { DARABONBA_PTR_SET_VALUE(totalAutoThrottleRulesCount_, totalAutoThrottleRulesCount) };


      // turnOffAutoThrottleCount Field Functions 
      bool hasTurnOffAutoThrottleCount() const { return this->turnOffAutoThrottleCount_ != nullptr;};
      void deleteTurnOffAutoThrottleCount() { this->turnOffAutoThrottleCount_ = nullptr;};
      inline int64_t getTurnOffAutoThrottleCount() const { DARABONBA_PTR_GET_DEFAULT(turnOffAutoThrottleCount_, 0L) };
      inline Data& setTurnOffAutoThrottleCount(int64_t turnOffAutoThrottleCount) { DARABONBA_PTR_SET_VALUE(turnOffAutoThrottleCount_, turnOffAutoThrottleCount) };


      // turnOffAutoThrottleList Field Functions 
      bool hasTurnOffAutoThrottleList() const { return this->turnOffAutoThrottleList_ != nullptr;};
      void deleteTurnOffAutoThrottleList() { this->turnOffAutoThrottleList_ = nullptr;};
      inline const vector<Data::TurnOffAutoThrottleList> & getTurnOffAutoThrottleList() const { DARABONBA_PTR_GET_CONST(turnOffAutoThrottleList_, vector<Data::TurnOffAutoThrottleList>) };
      inline vector<Data::TurnOffAutoThrottleList> getTurnOffAutoThrottleList() { DARABONBA_PTR_GET(turnOffAutoThrottleList_, vector<Data::TurnOffAutoThrottleList>) };
      inline Data& setTurnOffAutoThrottleList(const vector<Data::TurnOffAutoThrottleList> & turnOffAutoThrottleList) { DARABONBA_PTR_SET_VALUE(turnOffAutoThrottleList_, turnOffAutoThrottleList) };
      inline Data& setTurnOffAutoThrottleList(vector<Data::TurnOffAutoThrottleList> && turnOffAutoThrottleList) { DARABONBA_PTR_SET_RVALUE(turnOffAutoThrottleList_, turnOffAutoThrottleList) };


    protected:
      // The number of database instances for which the automatic SQL throttling feature is currently enabled.
      shared_ptr<int64_t> enableAutoThrottleCount_ {};
      // The database instances for which the automatic SQL throttling feature is currently enabled.
      shared_ptr<vector<Data::EnableAutoThrottleList>> enableAutoThrottleList_ {};
      // The number of database instances that do not exist or for which the automatic SQL throttling feature has never been enabled.
      // 
      // >  If a database instance does not exist, the instance has been released or the specified instance ID is invalid.
      shared_ptr<int64_t> neverEnableAutoThrottleOrReleasedInstanceCount_ {};
      // The number of database instances that do not exist or for which the automatic SQL throttling feature has never been enabled.
      // 
      // >  If a database instance does not exist, the instance has been released or the specified instance ID is invalid.
      shared_ptr<vector<string>> neverEnableAutoThrottleOrReleasedInstanceIdList_ {};
      // The number of databases for which the automatic SQL throttling feature has been enabled.
      shared_ptr<int64_t> totalAutoThrottleRulesCount_ {};
      // The number of database instances for which the automatic SQL throttling feature was once enabled but is currently disabled.
      shared_ptr<int64_t> turnOffAutoThrottleCount_ {};
      // The database instances for which the automatic SQL throttling feature was once enabled but is currently disabled.
      shared_ptr<vector<Data::TurnOffAutoThrottleList>> turnOffAutoThrottleList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetAutoThrottleRulesResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAutoThrottleRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAutoThrottleRulesResponseBody::Data) };
    inline GetAutoThrottleRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAutoThrottleRulesResponseBody::Data) };
    inline GetAutoThrottleRulesResponseBody& setData(const GetAutoThrottleRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAutoThrottleRulesResponseBody& setData(GetAutoThrottleRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAutoThrottleRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAutoThrottleRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAutoThrottleRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int64_t> code_ {};
    // The returned data.
    shared_ptr<GetAutoThrottleRulesResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message that contains information such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
