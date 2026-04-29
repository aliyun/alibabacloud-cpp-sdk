// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDAGENTMONITORSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDAGENTMONITORSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudAgentMonitorStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudAgentMonitorStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudAgentMonitorStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudAgentMonitorStatisticsResponseBody() = default ;
    CloudAgentMonitorStatisticsResponseBody(const CloudAgentMonitorStatisticsResponseBody &) = default ;
    CloudAgentMonitorStatisticsResponseBody(CloudAgentMonitorStatisticsResponseBody &&) = default ;
    CloudAgentMonitorStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudAgentMonitorStatisticsResponseBody() = default ;
    CloudAgentMonitorStatisticsResponseBody& operator=(const CloudAgentMonitorStatisticsResponseBody &) = default ;
    CloudAgentMonitorStatisticsResponseBody& operator=(CloudAgentMonitorStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentStatistics, agentStatistics_);
        DARABONBA_PTR_TO_JSON(Date, date_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentStatistics, agentStatistics_);
        DARABONBA_PTR_FROM_JSON(Date, date_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class AgentStatistics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentStatistics& obj) { 
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(CurrentState, currentState_);
          DARABONBA_PTR_TO_JSON(Gno, gno_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(Idle_count, idleCount_);
          DARABONBA_PTR_TO_JSON(Idle_time, idleTime_);
          DARABONBA_PTR_TO_JSON(Max_idle_time, maxIdleTime_);
          DARABONBA_PTR_TO_JSON(Max_ob_bridge_time, maxObBridgeTime_);
          DARABONBA_PTR_TO_JSON(Max_ob_calling_time, maxObCallingTime_);
          DARABONBA_PTR_TO_JSON(Max_ob_wrapup_time, maxObWrapupTime_);
          DARABONBA_PTR_TO_JSON(Min_idle_time, minIdleTime_);
          DARABONBA_PTR_TO_JSON(Min_ob_bridge_time, minObBridgeTime_);
          DARABONBA_PTR_TO_JSON(Min_ob_calling_time, minObCallingTime_);
          DARABONBA_PTR_TO_JSON(Min_ob_wrapup_time, minObWrapupTime_);
          DARABONBA_PTR_TO_JSON(Ob_bridge_count, obBridgeCount_);
          DARABONBA_PTR_TO_JSON(Ob_bridge_time, obBridgeTime_);
          DARABONBA_PTR_TO_JSON(Ob_calling_count, obCallingCount_);
          DARABONBA_PTR_TO_JSON(Ob_calling_time, obCallingTime_);
          DARABONBA_PTR_TO_JSON(Ob_wrapup_count, obWrapupCount_);
          DARABONBA_PTR_TO_JSON(Ob_wrapup_time, obWrapupTime_);
          DARABONBA_PTR_TO_JSON(Preview_ob_agent_answered_count, previewObAgentAnsweredCount_);
          DARABONBA_PTR_TO_JSON(Preview_ob_both_answered_count, previewObBothAnsweredCount_);
          DARABONBA_PTR_TO_JSON(Preview_ob_max_bridge_time, previewObMaxBridgeTime_);
          DARABONBA_PTR_TO_JSON(Preview_ob_min_bridge_time, previewObMinBridgeTime_);
          DARABONBA_PTR_TO_JSON(Preview_ob_total_bridge_time, previewObTotalBridgeTime_);
          DARABONBA_PTR_TO_JSON(Preview_ob_total_count, previewObTotalCount_);
          DARABONBA_PTR_TO_JSON(Preview_ob_valid_calls, previewObValidCalls_);
          DARABONBA_PTR_TO_JSON(Preview_ob_valid_total_bridge_time, previewObValidTotalBridgeTime_);
          DARABONBA_PTR_TO_JSON(QueueName, queueName_);
        };
        friend void from_json(const Darabonba::Json& j, AgentStatistics& obj) { 
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(CurrentState, currentState_);
          DARABONBA_PTR_FROM_JSON(Gno, gno_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(Idle_count, idleCount_);
          DARABONBA_PTR_FROM_JSON(Idle_time, idleTime_);
          DARABONBA_PTR_FROM_JSON(Max_idle_time, maxIdleTime_);
          DARABONBA_PTR_FROM_JSON(Max_ob_bridge_time, maxObBridgeTime_);
          DARABONBA_PTR_FROM_JSON(Max_ob_calling_time, maxObCallingTime_);
          DARABONBA_PTR_FROM_JSON(Max_ob_wrapup_time, maxObWrapupTime_);
          DARABONBA_PTR_FROM_JSON(Min_idle_time, minIdleTime_);
          DARABONBA_PTR_FROM_JSON(Min_ob_bridge_time, minObBridgeTime_);
          DARABONBA_PTR_FROM_JSON(Min_ob_calling_time, minObCallingTime_);
          DARABONBA_PTR_FROM_JSON(Min_ob_wrapup_time, minObWrapupTime_);
          DARABONBA_PTR_FROM_JSON(Ob_bridge_count, obBridgeCount_);
          DARABONBA_PTR_FROM_JSON(Ob_bridge_time, obBridgeTime_);
          DARABONBA_PTR_FROM_JSON(Ob_calling_count, obCallingCount_);
          DARABONBA_PTR_FROM_JSON(Ob_calling_time, obCallingTime_);
          DARABONBA_PTR_FROM_JSON(Ob_wrapup_count, obWrapupCount_);
          DARABONBA_PTR_FROM_JSON(Ob_wrapup_time, obWrapupTime_);
          DARABONBA_PTR_FROM_JSON(Preview_ob_agent_answered_count, previewObAgentAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(Preview_ob_both_answered_count, previewObBothAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(Preview_ob_max_bridge_time, previewObMaxBridgeTime_);
          DARABONBA_PTR_FROM_JSON(Preview_ob_min_bridge_time, previewObMinBridgeTime_);
          DARABONBA_PTR_FROM_JSON(Preview_ob_total_bridge_time, previewObTotalBridgeTime_);
          DARABONBA_PTR_FROM_JSON(Preview_ob_total_count, previewObTotalCount_);
          DARABONBA_PTR_FROM_JSON(Preview_ob_valid_calls, previewObValidCalls_);
          DARABONBA_PTR_FROM_JSON(Preview_ob_valid_total_bridge_time, previewObValidTotalBridgeTime_);
          DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
        };
        AgentStatistics() = default ;
        AgentStatistics(const AgentStatistics &) = default ;
        AgentStatistics(AgentStatistics &&) = default ;
        AgentStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentStatistics() = default ;
        AgentStatistics& operator=(const AgentStatistics &) = default ;
        AgentStatistics& operator=(AgentStatistics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cno_ == nullptr
        && this->currentState_ == nullptr && this->gno_ == nullptr && this->groupName_ == nullptr && this->idleCount_ == nullptr && this->idleTime_ == nullptr
        && this->maxIdleTime_ == nullptr && this->maxObBridgeTime_ == nullptr && this->maxObCallingTime_ == nullptr && this->maxObWrapupTime_ == nullptr && this->minIdleTime_ == nullptr
        && this->minObBridgeTime_ == nullptr && this->minObCallingTime_ == nullptr && this->minObWrapupTime_ == nullptr && this->obBridgeCount_ == nullptr && this->obBridgeTime_ == nullptr
        && this->obCallingCount_ == nullptr && this->obCallingTime_ == nullptr && this->obWrapupCount_ == nullptr && this->obWrapupTime_ == nullptr && this->previewObAgentAnsweredCount_ == nullptr
        && this->previewObBothAnsweredCount_ == nullptr && this->previewObMaxBridgeTime_ == nullptr && this->previewObMinBridgeTime_ == nullptr && this->previewObTotalBridgeTime_ == nullptr && this->previewObTotalCount_ == nullptr
        && this->previewObValidCalls_ == nullptr && this->previewObValidTotalBridgeTime_ == nullptr && this->queueName_ == nullptr; };
        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline AgentStatistics& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // currentState Field Functions 
        bool hasCurrentState() const { return this->currentState_ != nullptr;};
        void deleteCurrentState() { this->currentState_ = nullptr;};
        inline string getCurrentState() const { DARABONBA_PTR_GET_DEFAULT(currentState_, "") };
        inline AgentStatistics& setCurrentState(string currentState) { DARABONBA_PTR_SET_VALUE(currentState_, currentState) };


        // gno Field Functions 
        bool hasGno() const { return this->gno_ != nullptr;};
        void deleteGno() { this->gno_ = nullptr;};
        inline string getGno() const { DARABONBA_PTR_GET_DEFAULT(gno_, "") };
        inline AgentStatistics& setGno(string gno) { DARABONBA_PTR_SET_VALUE(gno_, gno) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline AgentStatistics& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // idleCount Field Functions 
        bool hasIdleCount() const { return this->idleCount_ != nullptr;};
        void deleteIdleCount() { this->idleCount_ = nullptr;};
        inline string getIdleCount() const { DARABONBA_PTR_GET_DEFAULT(idleCount_, "") };
        inline AgentStatistics& setIdleCount(string idleCount) { DARABONBA_PTR_SET_VALUE(idleCount_, idleCount) };


        // idleTime Field Functions 
        bool hasIdleTime() const { return this->idleTime_ != nullptr;};
        void deleteIdleTime() { this->idleTime_ = nullptr;};
        inline string getIdleTime() const { DARABONBA_PTR_GET_DEFAULT(idleTime_, "") };
        inline AgentStatistics& setIdleTime(string idleTime) { DARABONBA_PTR_SET_VALUE(idleTime_, idleTime) };


        // maxIdleTime Field Functions 
        bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
        void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
        inline string getMaxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, "") };
        inline AgentStatistics& setMaxIdleTime(string maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


        // maxObBridgeTime Field Functions 
        bool hasMaxObBridgeTime() const { return this->maxObBridgeTime_ != nullptr;};
        void deleteMaxObBridgeTime() { this->maxObBridgeTime_ = nullptr;};
        inline string getMaxObBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(maxObBridgeTime_, "") };
        inline AgentStatistics& setMaxObBridgeTime(string maxObBridgeTime) { DARABONBA_PTR_SET_VALUE(maxObBridgeTime_, maxObBridgeTime) };


        // maxObCallingTime Field Functions 
        bool hasMaxObCallingTime() const { return this->maxObCallingTime_ != nullptr;};
        void deleteMaxObCallingTime() { this->maxObCallingTime_ = nullptr;};
        inline string getMaxObCallingTime() const { DARABONBA_PTR_GET_DEFAULT(maxObCallingTime_, "") };
        inline AgentStatistics& setMaxObCallingTime(string maxObCallingTime) { DARABONBA_PTR_SET_VALUE(maxObCallingTime_, maxObCallingTime) };


        // maxObWrapupTime Field Functions 
        bool hasMaxObWrapupTime() const { return this->maxObWrapupTime_ != nullptr;};
        void deleteMaxObWrapupTime() { this->maxObWrapupTime_ = nullptr;};
        inline string getMaxObWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(maxObWrapupTime_, "") };
        inline AgentStatistics& setMaxObWrapupTime(string maxObWrapupTime) { DARABONBA_PTR_SET_VALUE(maxObWrapupTime_, maxObWrapupTime) };


        // minIdleTime Field Functions 
        bool hasMinIdleTime() const { return this->minIdleTime_ != nullptr;};
        void deleteMinIdleTime() { this->minIdleTime_ = nullptr;};
        inline string getMinIdleTime() const { DARABONBA_PTR_GET_DEFAULT(minIdleTime_, "") };
        inline AgentStatistics& setMinIdleTime(string minIdleTime) { DARABONBA_PTR_SET_VALUE(minIdleTime_, minIdleTime) };


        // minObBridgeTime Field Functions 
        bool hasMinObBridgeTime() const { return this->minObBridgeTime_ != nullptr;};
        void deleteMinObBridgeTime() { this->minObBridgeTime_ = nullptr;};
        inline string getMinObBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(minObBridgeTime_, "") };
        inline AgentStatistics& setMinObBridgeTime(string minObBridgeTime) { DARABONBA_PTR_SET_VALUE(minObBridgeTime_, minObBridgeTime) };


        // minObCallingTime Field Functions 
        bool hasMinObCallingTime() const { return this->minObCallingTime_ != nullptr;};
        void deleteMinObCallingTime() { this->minObCallingTime_ = nullptr;};
        inline string getMinObCallingTime() const { DARABONBA_PTR_GET_DEFAULT(minObCallingTime_, "") };
        inline AgentStatistics& setMinObCallingTime(string minObCallingTime) { DARABONBA_PTR_SET_VALUE(minObCallingTime_, minObCallingTime) };


        // minObWrapupTime Field Functions 
        bool hasMinObWrapupTime() const { return this->minObWrapupTime_ != nullptr;};
        void deleteMinObWrapupTime() { this->minObWrapupTime_ = nullptr;};
        inline string getMinObWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(minObWrapupTime_, "") };
        inline AgentStatistics& setMinObWrapupTime(string minObWrapupTime) { DARABONBA_PTR_SET_VALUE(minObWrapupTime_, minObWrapupTime) };


        // obBridgeCount Field Functions 
        bool hasObBridgeCount() const { return this->obBridgeCount_ != nullptr;};
        void deleteObBridgeCount() { this->obBridgeCount_ = nullptr;};
        inline string getObBridgeCount() const { DARABONBA_PTR_GET_DEFAULT(obBridgeCount_, "") };
        inline AgentStatistics& setObBridgeCount(string obBridgeCount) { DARABONBA_PTR_SET_VALUE(obBridgeCount_, obBridgeCount) };


        // obBridgeTime Field Functions 
        bool hasObBridgeTime() const { return this->obBridgeTime_ != nullptr;};
        void deleteObBridgeTime() { this->obBridgeTime_ = nullptr;};
        inline string getObBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(obBridgeTime_, "") };
        inline AgentStatistics& setObBridgeTime(string obBridgeTime) { DARABONBA_PTR_SET_VALUE(obBridgeTime_, obBridgeTime) };


        // obCallingCount Field Functions 
        bool hasObCallingCount() const { return this->obCallingCount_ != nullptr;};
        void deleteObCallingCount() { this->obCallingCount_ = nullptr;};
        inline string getObCallingCount() const { DARABONBA_PTR_GET_DEFAULT(obCallingCount_, "") };
        inline AgentStatistics& setObCallingCount(string obCallingCount) { DARABONBA_PTR_SET_VALUE(obCallingCount_, obCallingCount) };


        // obCallingTime Field Functions 
        bool hasObCallingTime() const { return this->obCallingTime_ != nullptr;};
        void deleteObCallingTime() { this->obCallingTime_ = nullptr;};
        inline string getObCallingTime() const { DARABONBA_PTR_GET_DEFAULT(obCallingTime_, "") };
        inline AgentStatistics& setObCallingTime(string obCallingTime) { DARABONBA_PTR_SET_VALUE(obCallingTime_, obCallingTime) };


        // obWrapupCount Field Functions 
        bool hasObWrapupCount() const { return this->obWrapupCount_ != nullptr;};
        void deleteObWrapupCount() { this->obWrapupCount_ = nullptr;};
        inline string getObWrapupCount() const { DARABONBA_PTR_GET_DEFAULT(obWrapupCount_, "") };
        inline AgentStatistics& setObWrapupCount(string obWrapupCount) { DARABONBA_PTR_SET_VALUE(obWrapupCount_, obWrapupCount) };


        // obWrapupTime Field Functions 
        bool hasObWrapupTime() const { return this->obWrapupTime_ != nullptr;};
        void deleteObWrapupTime() { this->obWrapupTime_ = nullptr;};
        inline string getObWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(obWrapupTime_, "") };
        inline AgentStatistics& setObWrapupTime(string obWrapupTime) { DARABONBA_PTR_SET_VALUE(obWrapupTime_, obWrapupTime) };


        // previewObAgentAnsweredCount Field Functions 
        bool hasPreviewObAgentAnsweredCount() const { return this->previewObAgentAnsweredCount_ != nullptr;};
        void deletePreviewObAgentAnsweredCount() { this->previewObAgentAnsweredCount_ = nullptr;};
        inline string getPreviewObAgentAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(previewObAgentAnsweredCount_, "") };
        inline AgentStatistics& setPreviewObAgentAnsweredCount(string previewObAgentAnsweredCount) { DARABONBA_PTR_SET_VALUE(previewObAgentAnsweredCount_, previewObAgentAnsweredCount) };


        // previewObBothAnsweredCount Field Functions 
        bool hasPreviewObBothAnsweredCount() const { return this->previewObBothAnsweredCount_ != nullptr;};
        void deletePreviewObBothAnsweredCount() { this->previewObBothAnsweredCount_ = nullptr;};
        inline string getPreviewObBothAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(previewObBothAnsweredCount_, "") };
        inline AgentStatistics& setPreviewObBothAnsweredCount(string previewObBothAnsweredCount) { DARABONBA_PTR_SET_VALUE(previewObBothAnsweredCount_, previewObBothAnsweredCount) };


        // previewObMaxBridgeTime Field Functions 
        bool hasPreviewObMaxBridgeTime() const { return this->previewObMaxBridgeTime_ != nullptr;};
        void deletePreviewObMaxBridgeTime() { this->previewObMaxBridgeTime_ = nullptr;};
        inline string getPreviewObMaxBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(previewObMaxBridgeTime_, "") };
        inline AgentStatistics& setPreviewObMaxBridgeTime(string previewObMaxBridgeTime) { DARABONBA_PTR_SET_VALUE(previewObMaxBridgeTime_, previewObMaxBridgeTime) };


        // previewObMinBridgeTime Field Functions 
        bool hasPreviewObMinBridgeTime() const { return this->previewObMinBridgeTime_ != nullptr;};
        void deletePreviewObMinBridgeTime() { this->previewObMinBridgeTime_ = nullptr;};
        inline string getPreviewObMinBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(previewObMinBridgeTime_, "") };
        inline AgentStatistics& setPreviewObMinBridgeTime(string previewObMinBridgeTime) { DARABONBA_PTR_SET_VALUE(previewObMinBridgeTime_, previewObMinBridgeTime) };


        // previewObTotalBridgeTime Field Functions 
        bool hasPreviewObTotalBridgeTime() const { return this->previewObTotalBridgeTime_ != nullptr;};
        void deletePreviewObTotalBridgeTime() { this->previewObTotalBridgeTime_ = nullptr;};
        inline string getPreviewObTotalBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(previewObTotalBridgeTime_, "") };
        inline AgentStatistics& setPreviewObTotalBridgeTime(string previewObTotalBridgeTime) { DARABONBA_PTR_SET_VALUE(previewObTotalBridgeTime_, previewObTotalBridgeTime) };


        // previewObTotalCount Field Functions 
        bool hasPreviewObTotalCount() const { return this->previewObTotalCount_ != nullptr;};
        void deletePreviewObTotalCount() { this->previewObTotalCount_ = nullptr;};
        inline string getPreviewObTotalCount() const { DARABONBA_PTR_GET_DEFAULT(previewObTotalCount_, "") };
        inline AgentStatistics& setPreviewObTotalCount(string previewObTotalCount) { DARABONBA_PTR_SET_VALUE(previewObTotalCount_, previewObTotalCount) };


        // previewObValidCalls Field Functions 
        bool hasPreviewObValidCalls() const { return this->previewObValidCalls_ != nullptr;};
        void deletePreviewObValidCalls() { this->previewObValidCalls_ = nullptr;};
        inline string getPreviewObValidCalls() const { DARABONBA_PTR_GET_DEFAULT(previewObValidCalls_, "") };
        inline AgentStatistics& setPreviewObValidCalls(string previewObValidCalls) { DARABONBA_PTR_SET_VALUE(previewObValidCalls_, previewObValidCalls) };


        // previewObValidTotalBridgeTime Field Functions 
        bool hasPreviewObValidTotalBridgeTime() const { return this->previewObValidTotalBridgeTime_ != nullptr;};
        void deletePreviewObValidTotalBridgeTime() { this->previewObValidTotalBridgeTime_ = nullptr;};
        inline string getPreviewObValidTotalBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(previewObValidTotalBridgeTime_, "") };
        inline AgentStatistics& setPreviewObValidTotalBridgeTime(string previewObValidTotalBridgeTime) { DARABONBA_PTR_SET_VALUE(previewObValidTotalBridgeTime_, previewObValidTotalBridgeTime) };


        // queueName Field Functions 
        bool hasQueueName() const { return this->queueName_ != nullptr;};
        void deleteQueueName() { this->queueName_ = nullptr;};
        inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
        inline AgentStatistics& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      protected:
        // 座席工号
        shared_ptr<string> cno_ {};
        // status: 代表座席状态，状态每个值对应的含义: stateIdle: 置闲; statePause: 置忙; stateCalling: 呼叫中; stateInuse: 通话中; stateWrapup: 整理, loginTime: 代表座席登录时间, startTime: 代表开始通话的时间
        shared_ptr<string> currentState_ {};
        // 外呼组编号
        shared_ptr<string> gno_ {};
        // 外呼组名称
        shared_ptr<string> groupName_ {};
        // 总空闲次数
        shared_ptr<string> idleCount_ {};
        // 总空闲时长
        shared_ptr<string> idleTime_ {};
        // 最大空闲时长
        shared_ptr<string> maxIdleTime_ {};
        // 外呼通话最大时长
        shared_ptr<string> maxObBridgeTime_ {};
        // 外呼呼叫最大时长
        shared_ptr<string> maxObCallingTime_ {};
        // 外呼整理最大时长
        shared_ptr<string> maxObWrapupTime_ {};
        // 最小空闲时长
        shared_ptr<string> minIdleTime_ {};
        // 外呼通话最小时长
        shared_ptr<string> minObBridgeTime_ {};
        // 外呼呼叫最小时长
        shared_ptr<string> minObCallingTime_ {};
        // 外呼整理最小时长
        shared_ptr<string> minObWrapupTime_ {};
        // 总外呼通话次数
        shared_ptr<string> obBridgeCount_ {};
        // 外呼通话时长
        shared_ptr<string> obBridgeTime_ {};
        // 总外呼呼叫次数
        shared_ptr<string> obCallingCount_ {};
        // 外呼呼叫时长
        shared_ptr<string> obCallingTime_ {};
        // 总外呼整理次数
        shared_ptr<string> obWrapupCount_ {};
        // 外呼整理时长
        shared_ptr<string> obWrapupTime_ {};
        // 预览外呼座席接听数
        shared_ptr<string> previewObAgentAnsweredCount_ {};
        shared_ptr<string> previewObBothAnsweredCount_ {};
        // 双方接听最大通话时长
        shared_ptr<string> previewObMaxBridgeTime_ {};
        // 双方接听最小通话时长
        shared_ptr<string> previewObMinBridgeTime_ {};
        // 双方接听总通话时长
        shared_ptr<string> previewObTotalBridgeTime_ {};
        // 预览外呼数
        shared_ptr<string> previewObTotalCount_ {};
        // 预览外呼有效通话次数
        shared_ptr<string> previewObValidCalls_ {};
        // 预览外呼有效通话总时长
        shared_ptr<string> previewObValidTotalBridgeTime_ {};
        // 队列名
        shared_ptr<string> queueName_ {};
      };

      virtual bool empty() const override { return this->agentStatistics_ == nullptr
        && this->date_ == nullptr && this->total_ == nullptr; };
      // agentStatistics Field Functions 
      bool hasAgentStatistics() const { return this->agentStatistics_ != nullptr;};
      void deleteAgentStatistics() { this->agentStatistics_ = nullptr;};
      inline const vector<Data::AgentStatistics> & getAgentStatistics() const { DARABONBA_PTR_GET_CONST(agentStatistics_, vector<Data::AgentStatistics>) };
      inline vector<Data::AgentStatistics> getAgentStatistics() { DARABONBA_PTR_GET(agentStatistics_, vector<Data::AgentStatistics>) };
      inline Data& setAgentStatistics(const vector<Data::AgentStatistics> & agentStatistics) { DARABONBA_PTR_SET_VALUE(agentStatistics_, agentStatistics) };
      inline Data& setAgentStatistics(vector<Data::AgentStatistics> && agentStatistics) { DARABONBA_PTR_SET_RVALUE(agentStatistics_, agentStatistics) };


      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
      inline Data& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
      inline Data& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // 座席统计项数组
      shared_ptr<vector<Data::AgentStatistics>> agentStatistics_ {};
      // 日期，格式为：yyyy-MM-dd
      shared_ptr<string> date_ {};
      // 总计
      shared_ptr<string> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudAgentMonitorStatisticsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudAgentMonitorStatisticsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudAgentMonitorStatisticsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudAgentMonitorStatisticsResponseBody::Data) };
    inline CloudAgentMonitorStatisticsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudAgentMonitorStatisticsResponseBody::Data) };
    inline CloudAgentMonitorStatisticsResponseBody& setData(const CloudAgentMonitorStatisticsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudAgentMonitorStatisticsResponseBody& setData(CloudAgentMonitorStatisticsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudAgentMonitorStatisticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudAgentMonitorStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudAgentMonitorStatisticsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
