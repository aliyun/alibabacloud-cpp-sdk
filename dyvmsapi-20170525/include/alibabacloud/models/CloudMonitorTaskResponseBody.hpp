// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDMONITORTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDMONITORTASKRESPONSEBODY_HPP_
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
  class CloudMonitorTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudMonitorTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudMonitorTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudMonitorTaskResponseBody() = default ;
    CloudMonitorTaskResponseBody(const CloudMonitorTaskResponseBody &) = default ;
    CloudMonitorTaskResponseBody(CloudMonitorTaskResponseBody &&) = default ;
    CloudMonitorTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudMonitorTaskResponseBody() = default ;
    CloudMonitorTaskResponseBody& operator=(const CloudMonitorTaskResponseBody &) = default ;
    CloudMonitorTaskResponseBody& operator=(CloudMonitorTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentInfo, agentInfo_);
        DARABONBA_PTR_TO_JSON(AgentStatisticList, agentStatisticList_);
        DARABONBA_PTR_TO_JSON(ChannelInfo, channelInfo_);
        DARABONBA_PTR_TO_JSON(RemovedAgentStatisticList, removedAgentStatisticList_);
        DARABONBA_PTR_TO_JSON(Statistic, statistic_);
        DARABONBA_PTR_TO_JSON(TodayStatistic, todayStatistic_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentInfo, agentInfo_);
        DARABONBA_PTR_FROM_JSON(AgentStatisticList, agentStatisticList_);
        DARABONBA_PTR_FROM_JSON(ChannelInfo, channelInfo_);
        DARABONBA_PTR_FROM_JSON(RemovedAgentStatisticList, removedAgentStatisticList_);
        DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
        DARABONBA_PTR_FROM_JSON(TodayStatistic, todayStatistic_);
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
      class TodayStatistic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TodayStatistic& obj) { 
          DARABONBA_PTR_TO_JSON(AgentCount, agentCount_);
          DARABONBA_PTR_TO_JSON(AnswerCount, answerCount_);
          DARABONBA_PTR_TO_JSON(CallAgentCount, callAgentCount_);
          DARABONBA_PTR_TO_JSON(CalledCount, calledCount_);
          DARABONBA_PTR_TO_JSON(CtiLinkTaskProperty, ctiLinkTaskProperty_);
          DARABONBA_PTR_TO_JSON(UncalledCount, uncalledCount_);
        };
        friend void from_json(const Darabonba::Json& j, TodayStatistic& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentCount, agentCount_);
          DARABONBA_PTR_FROM_JSON(AnswerCount, answerCount_);
          DARABONBA_PTR_FROM_JSON(CallAgentCount, callAgentCount_);
          DARABONBA_PTR_FROM_JSON(CalledCount, calledCount_);
          DARABONBA_PTR_FROM_JSON(CtiLinkTaskProperty, ctiLinkTaskProperty_);
          DARABONBA_PTR_FROM_JSON(UncalledCount, uncalledCount_);
        };
        TodayStatistic() = default ;
        TodayStatistic(const TodayStatistic &) = default ;
        TodayStatistic(TodayStatistic &&) = default ;
        TodayStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TodayStatistic() = default ;
        TodayStatistic& operator=(const TodayStatistic &) = default ;
        TodayStatistic& operator=(TodayStatistic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CtiLinkTaskProperty : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CtiLinkTaskProperty& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(OverTime, overTime_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(StatusDescription, statusDescription_);
          };
          friend void from_json(const Darabonba::Json& j, CtiLinkTaskProperty& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(OverTime, overTime_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(StatusDescription, statusDescription_);
          };
          CtiLinkTaskProperty() = default ;
          CtiLinkTaskProperty(const CtiLinkTaskProperty &) = default ;
          CtiLinkTaskProperty(CtiLinkTaskProperty &&) = default ;
          CtiLinkTaskProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CtiLinkTaskProperty() = default ;
          CtiLinkTaskProperty& operator=(const CtiLinkTaskProperty &) = default ;
          CtiLinkTaskProperty& operator=(CtiLinkTaskProperty &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->overTime_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->statusDescription_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline CtiLinkTaskProperty& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline CtiLinkTaskProperty& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // overTime Field Functions 
          bool hasOverTime() const { return this->overTime_ != nullptr;};
          void deleteOverTime() { this->overTime_ = nullptr;};
          inline string getOverTime() const { DARABONBA_PTR_GET_DEFAULT(overTime_, "") };
          inline CtiLinkTaskProperty& setOverTime(string overTime) { DARABONBA_PTR_SET_VALUE(overTime_, overTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline CtiLinkTaskProperty& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline CtiLinkTaskProperty& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // statusDescription Field Functions 
          bool hasStatusDescription() const { return this->statusDescription_ != nullptr;};
          void deleteStatusDescription() { this->statusDescription_ = nullptr;};
          inline string getStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(statusDescription_, "") };
          inline CtiLinkTaskProperty& setStatusDescription(string statusDescription) { DARABONBA_PTR_SET_VALUE(statusDescription_, statusDescription) };


        protected:
          // 外呼任务Id
          shared_ptr<int64_t> id_ {};
          // 任务名称
          shared_ptr<string> name_ {};
          // 任务结束时间
          shared_ptr<string> overTime_ {};
          // 任务开始时间
          shared_ptr<string> startTime_ {};
          // 任务状态，0.初始 1.运行中 2.暂停 3.结束
          shared_ptr<string> status_ {};
          // 任务状态描述
          shared_ptr<string> statusDescription_ {};
        };

        virtual bool empty() const override { return this->agentCount_ == nullptr
        && this->answerCount_ == nullptr && this->callAgentCount_ == nullptr && this->calledCount_ == nullptr && this->ctiLinkTaskProperty_ == nullptr && this->uncalledCount_ == nullptr; };
        // agentCount Field Functions 
        bool hasAgentCount() const { return this->agentCount_ != nullptr;};
        void deleteAgentCount() { this->agentCount_ = nullptr;};
        inline int64_t getAgentCount() const { DARABONBA_PTR_GET_DEFAULT(agentCount_, 0L) };
        inline TodayStatistic& setAgentCount(int64_t agentCount) { DARABONBA_PTR_SET_VALUE(agentCount_, agentCount) };


        // answerCount Field Functions 
        bool hasAnswerCount() const { return this->answerCount_ != nullptr;};
        void deleteAnswerCount() { this->answerCount_ = nullptr;};
        inline int64_t getAnswerCount() const { DARABONBA_PTR_GET_DEFAULT(answerCount_, 0L) };
        inline TodayStatistic& setAnswerCount(int64_t answerCount) { DARABONBA_PTR_SET_VALUE(answerCount_, answerCount) };


        // callAgentCount Field Functions 
        bool hasCallAgentCount() const { return this->callAgentCount_ != nullptr;};
        void deleteCallAgentCount() { this->callAgentCount_ = nullptr;};
        inline int64_t getCallAgentCount() const { DARABONBA_PTR_GET_DEFAULT(callAgentCount_, 0L) };
        inline TodayStatistic& setCallAgentCount(int64_t callAgentCount) { DARABONBA_PTR_SET_VALUE(callAgentCount_, callAgentCount) };


        // calledCount Field Functions 
        bool hasCalledCount() const { return this->calledCount_ != nullptr;};
        void deleteCalledCount() { this->calledCount_ = nullptr;};
        inline int64_t getCalledCount() const { DARABONBA_PTR_GET_DEFAULT(calledCount_, 0L) };
        inline TodayStatistic& setCalledCount(int64_t calledCount) { DARABONBA_PTR_SET_VALUE(calledCount_, calledCount) };


        // ctiLinkTaskProperty Field Functions 
        bool hasCtiLinkTaskProperty() const { return this->ctiLinkTaskProperty_ != nullptr;};
        void deleteCtiLinkTaskProperty() { this->ctiLinkTaskProperty_ = nullptr;};
        inline const TodayStatistic::CtiLinkTaskProperty & getCtiLinkTaskProperty() const { DARABONBA_PTR_GET_CONST(ctiLinkTaskProperty_, TodayStatistic::CtiLinkTaskProperty) };
        inline TodayStatistic::CtiLinkTaskProperty getCtiLinkTaskProperty() { DARABONBA_PTR_GET(ctiLinkTaskProperty_, TodayStatistic::CtiLinkTaskProperty) };
        inline TodayStatistic& setCtiLinkTaskProperty(const TodayStatistic::CtiLinkTaskProperty & ctiLinkTaskProperty) { DARABONBA_PTR_SET_VALUE(ctiLinkTaskProperty_, ctiLinkTaskProperty) };
        inline TodayStatistic& setCtiLinkTaskProperty(TodayStatistic::CtiLinkTaskProperty && ctiLinkTaskProperty) { DARABONBA_PTR_SET_RVALUE(ctiLinkTaskProperty_, ctiLinkTaskProperty) };


        // uncalledCount Field Functions 
        bool hasUncalledCount() const { return this->uncalledCount_ != nullptr;};
        void deleteUncalledCount() { this->uncalledCount_ = nullptr;};
        inline int64_t getUncalledCount() const { DARABONBA_PTR_GET_DEFAULT(uncalledCount_, 0L) };
        inline TodayStatistic& setUncalledCount(int64_t uncalledCount) { DARABONBA_PTR_SET_VALUE(uncalledCount_, uncalledCount) };


      protected:
        // 座席数量
        shared_ptr<int64_t> agentCount_ {};
        // 应答数量
        shared_ptr<int64_t> answerCount_ {};
        // 呼叫坐席数
        shared_ptr<int64_t> callAgentCount_ {};
        // 已呼叫数量
        shared_ptr<int64_t> calledCount_ {};
        shared_ptr<TodayStatistic::CtiLinkTaskProperty> ctiLinkTaskProperty_ {};
        // 未呼叫数量
        shared_ptr<int64_t> uncalledCount_ {};
      };

      class Statistic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Statistic& obj) { 
          DARABONBA_PTR_TO_JSON(AgentCount, agentCount_);
          DARABONBA_PTR_TO_JSON(AnswerCount, answerCount_);
          DARABONBA_PTR_TO_JSON(CallAgentCount, callAgentCount_);
          DARABONBA_PTR_TO_JSON(CalledCount, calledCount_);
          DARABONBA_PTR_TO_JSON(CtiLinkTaskProperty, ctiLinkTaskProperty_);
          DARABONBA_PTR_TO_JSON(UncalledCount, uncalledCount_);
        };
        friend void from_json(const Darabonba::Json& j, Statistic& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentCount, agentCount_);
          DARABONBA_PTR_FROM_JSON(AnswerCount, answerCount_);
          DARABONBA_PTR_FROM_JSON(CallAgentCount, callAgentCount_);
          DARABONBA_PTR_FROM_JSON(CalledCount, calledCount_);
          DARABONBA_PTR_FROM_JSON(CtiLinkTaskProperty, ctiLinkTaskProperty_);
          DARABONBA_PTR_FROM_JSON(UncalledCount, uncalledCount_);
        };
        Statistic() = default ;
        Statistic(const Statistic &) = default ;
        Statistic(Statistic &&) = default ;
        Statistic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Statistic() = default ;
        Statistic& operator=(const Statistic &) = default ;
        Statistic& operator=(Statistic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CtiLinkTaskProperty : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CtiLinkTaskProperty& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(OverTime, overTime_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(StatusDescription, statusDescription_);
          };
          friend void from_json(const Darabonba::Json& j, CtiLinkTaskProperty& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(OverTime, overTime_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(StatusDescription, statusDescription_);
          };
          CtiLinkTaskProperty() = default ;
          CtiLinkTaskProperty(const CtiLinkTaskProperty &) = default ;
          CtiLinkTaskProperty(CtiLinkTaskProperty &&) = default ;
          CtiLinkTaskProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CtiLinkTaskProperty() = default ;
          CtiLinkTaskProperty& operator=(const CtiLinkTaskProperty &) = default ;
          CtiLinkTaskProperty& operator=(CtiLinkTaskProperty &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->overTime_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->statusDescription_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline CtiLinkTaskProperty& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline CtiLinkTaskProperty& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // overTime Field Functions 
          bool hasOverTime() const { return this->overTime_ != nullptr;};
          void deleteOverTime() { this->overTime_ = nullptr;};
          inline string getOverTime() const { DARABONBA_PTR_GET_DEFAULT(overTime_, "") };
          inline CtiLinkTaskProperty& setOverTime(string overTime) { DARABONBA_PTR_SET_VALUE(overTime_, overTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline CtiLinkTaskProperty& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
          inline CtiLinkTaskProperty& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // statusDescription Field Functions 
          bool hasStatusDescription() const { return this->statusDescription_ != nullptr;};
          void deleteStatusDescription() { this->statusDescription_ = nullptr;};
          inline string getStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(statusDescription_, "") };
          inline CtiLinkTaskProperty& setStatusDescription(string statusDescription) { DARABONBA_PTR_SET_VALUE(statusDescription_, statusDescription) };


        protected:
          // 外呼任务Id
          shared_ptr<int64_t> id_ {};
          // 任务名称
          shared_ptr<string> name_ {};
          // 任务结束时间
          shared_ptr<string> overTime_ {};
          // 任务开始时间
          shared_ptr<string> startTime_ {};
          // 任务状态，0.初始 1.运行中 2.暂停 3.结束
          shared_ptr<int64_t> status_ {};
          // 任务状态描述
          shared_ptr<string> statusDescription_ {};
        };

        virtual bool empty() const override { return this->agentCount_ == nullptr
        && this->answerCount_ == nullptr && this->callAgentCount_ == nullptr && this->calledCount_ == nullptr && this->ctiLinkTaskProperty_ == nullptr && this->uncalledCount_ == nullptr; };
        // agentCount Field Functions 
        bool hasAgentCount() const { return this->agentCount_ != nullptr;};
        void deleteAgentCount() { this->agentCount_ = nullptr;};
        inline int64_t getAgentCount() const { DARABONBA_PTR_GET_DEFAULT(agentCount_, 0L) };
        inline Statistic& setAgentCount(int64_t agentCount) { DARABONBA_PTR_SET_VALUE(agentCount_, agentCount) };


        // answerCount Field Functions 
        bool hasAnswerCount() const { return this->answerCount_ != nullptr;};
        void deleteAnswerCount() { this->answerCount_ = nullptr;};
        inline int64_t getAnswerCount() const { DARABONBA_PTR_GET_DEFAULT(answerCount_, 0L) };
        inline Statistic& setAnswerCount(int64_t answerCount) { DARABONBA_PTR_SET_VALUE(answerCount_, answerCount) };


        // callAgentCount Field Functions 
        bool hasCallAgentCount() const { return this->callAgentCount_ != nullptr;};
        void deleteCallAgentCount() { this->callAgentCount_ = nullptr;};
        inline int64_t getCallAgentCount() const { DARABONBA_PTR_GET_DEFAULT(callAgentCount_, 0L) };
        inline Statistic& setCallAgentCount(int64_t callAgentCount) { DARABONBA_PTR_SET_VALUE(callAgentCount_, callAgentCount) };


        // calledCount Field Functions 
        bool hasCalledCount() const { return this->calledCount_ != nullptr;};
        void deleteCalledCount() { this->calledCount_ = nullptr;};
        inline int64_t getCalledCount() const { DARABONBA_PTR_GET_DEFAULT(calledCount_, 0L) };
        inline Statistic& setCalledCount(int64_t calledCount) { DARABONBA_PTR_SET_VALUE(calledCount_, calledCount) };


        // ctiLinkTaskProperty Field Functions 
        bool hasCtiLinkTaskProperty() const { return this->ctiLinkTaskProperty_ != nullptr;};
        void deleteCtiLinkTaskProperty() { this->ctiLinkTaskProperty_ = nullptr;};
        inline const Statistic::CtiLinkTaskProperty & getCtiLinkTaskProperty() const { DARABONBA_PTR_GET_CONST(ctiLinkTaskProperty_, Statistic::CtiLinkTaskProperty) };
        inline Statistic::CtiLinkTaskProperty getCtiLinkTaskProperty() { DARABONBA_PTR_GET(ctiLinkTaskProperty_, Statistic::CtiLinkTaskProperty) };
        inline Statistic& setCtiLinkTaskProperty(const Statistic::CtiLinkTaskProperty & ctiLinkTaskProperty) { DARABONBA_PTR_SET_VALUE(ctiLinkTaskProperty_, ctiLinkTaskProperty) };
        inline Statistic& setCtiLinkTaskProperty(Statistic::CtiLinkTaskProperty && ctiLinkTaskProperty) { DARABONBA_PTR_SET_RVALUE(ctiLinkTaskProperty_, ctiLinkTaskProperty) };


        // uncalledCount Field Functions 
        bool hasUncalledCount() const { return this->uncalledCount_ != nullptr;};
        void deleteUncalledCount() { this->uncalledCount_ = nullptr;};
        inline int64_t getUncalledCount() const { DARABONBA_PTR_GET_DEFAULT(uncalledCount_, 0L) };
        inline Statistic& setUncalledCount(int64_t uncalledCount) { DARABONBA_PTR_SET_VALUE(uncalledCount_, uncalledCount) };


      protected:
        // 座席数量
        shared_ptr<int64_t> agentCount_ {};
        // 应答数量
        shared_ptr<int64_t> answerCount_ {};
        // 呼叫坐席数
        shared_ptr<int64_t> callAgentCount_ {};
        // 已呼叫数量
        shared_ptr<int64_t> calledCount_ {};
        // 任务属性
        shared_ptr<Statistic::CtiLinkTaskProperty> ctiLinkTaskProperty_ {};
        // 未呼叫数量
        shared_ptr<int64_t> uncalledCount_ {};
      };

      class RemovedAgentStatisticList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RemovedAgentStatisticList& obj) { 
          DARABONBA_PTR_TO_JSON(AgentAvgIdleTime, agentAvgIdleTime_);
          DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
          DARABONBA_PTR_TO_JSON(AvgBridgeTime, avgBridgeTime_);
          DARABONBA_PTR_TO_JSON(BridgeCount, bridgeCount_);
          DARABONBA_PTR_TO_JSON(BridgeIn2sRate, bridgeIn2sRate_);
          DARABONBA_PTR_TO_JSON(CallLimit, callLimit_);
          DARABONBA_PTR_TO_JSON(CalledCount, calledCount_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(EnterpriseCallLimit, enterpriseCallLimit_);
          DARABONBA_PTR_TO_JSON(EnterpriseTodayAnsweredCount, enterpriseTodayAnsweredCount_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NoBridgeCount, noBridgeCount_);
          DARABONBA_PTR_TO_JSON(TodayAnsweredCount, todayAnsweredCount_);
        };
        friend void from_json(const Darabonba::Json& j, RemovedAgentStatisticList& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentAvgIdleTime, agentAvgIdleTime_);
          DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
          DARABONBA_PTR_FROM_JSON(AvgBridgeTime, avgBridgeTime_);
          DARABONBA_PTR_FROM_JSON(BridgeCount, bridgeCount_);
          DARABONBA_PTR_FROM_JSON(BridgeIn2sRate, bridgeIn2sRate_);
          DARABONBA_PTR_FROM_JSON(CallLimit, callLimit_);
          DARABONBA_PTR_FROM_JSON(CalledCount, calledCount_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(EnterpriseCallLimit, enterpriseCallLimit_);
          DARABONBA_PTR_FROM_JSON(EnterpriseTodayAnsweredCount, enterpriseTodayAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NoBridgeCount, noBridgeCount_);
          DARABONBA_PTR_FROM_JSON(TodayAnsweredCount, todayAnsweredCount_);
        };
        RemovedAgentStatisticList() = default ;
        RemovedAgentStatisticList(const RemovedAgentStatisticList &) = default ;
        RemovedAgentStatisticList(RemovedAgentStatisticList &&) = default ;
        RemovedAgentStatisticList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RemovedAgentStatisticList() = default ;
        RemovedAgentStatisticList& operator=(const RemovedAgentStatisticList &) = default ;
        RemovedAgentStatisticList& operator=(RemovedAgentStatisticList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentAvgIdleTime_ == nullptr
        && this->agentStatus_ == nullptr && this->avgBridgeTime_ == nullptr && this->bridgeCount_ == nullptr && this->bridgeIn2sRate_ == nullptr && this->callLimit_ == nullptr
        && this->calledCount_ == nullptr && this->cno_ == nullptr && this->enterpriseCallLimit_ == nullptr && this->enterpriseTodayAnsweredCount_ == nullptr && this->name_ == nullptr
        && this->noBridgeCount_ == nullptr && this->todayAnsweredCount_ == nullptr; };
        // agentAvgIdleTime Field Functions 
        bool hasAgentAvgIdleTime() const { return this->agentAvgIdleTime_ != nullptr;};
        void deleteAgentAvgIdleTime() { this->agentAvgIdleTime_ = nullptr;};
        inline int64_t getAgentAvgIdleTime() const { DARABONBA_PTR_GET_DEFAULT(agentAvgIdleTime_, 0L) };
        inline RemovedAgentStatisticList& setAgentAvgIdleTime(int64_t agentAvgIdleTime) { DARABONBA_PTR_SET_VALUE(agentAvgIdleTime_, agentAvgIdleTime) };


        // agentStatus Field Functions 
        bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
        void deleteAgentStatus() { this->agentStatus_ = nullptr;};
        inline string getAgentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
        inline RemovedAgentStatisticList& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


        // avgBridgeTime Field Functions 
        bool hasAvgBridgeTime() const { return this->avgBridgeTime_ != nullptr;};
        void deleteAvgBridgeTime() { this->avgBridgeTime_ = nullptr;};
        inline string getAvgBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(avgBridgeTime_, "") };
        inline RemovedAgentStatisticList& setAvgBridgeTime(string avgBridgeTime) { DARABONBA_PTR_SET_VALUE(avgBridgeTime_, avgBridgeTime) };


        // bridgeCount Field Functions 
        bool hasBridgeCount() const { return this->bridgeCount_ != nullptr;};
        void deleteBridgeCount() { this->bridgeCount_ = nullptr;};
        inline int64_t getBridgeCount() const { DARABONBA_PTR_GET_DEFAULT(bridgeCount_, 0L) };
        inline RemovedAgentStatisticList& setBridgeCount(int64_t bridgeCount) { DARABONBA_PTR_SET_VALUE(bridgeCount_, bridgeCount) };


        // bridgeIn2sRate Field Functions 
        bool hasBridgeIn2sRate() const { return this->bridgeIn2sRate_ != nullptr;};
        void deleteBridgeIn2sRate() { this->bridgeIn2sRate_ = nullptr;};
        inline double getBridgeIn2sRate() const { DARABONBA_PTR_GET_DEFAULT(bridgeIn2sRate_, 0.0) };
        inline RemovedAgentStatisticList& setBridgeIn2sRate(double bridgeIn2sRate) { DARABONBA_PTR_SET_VALUE(bridgeIn2sRate_, bridgeIn2sRate) };


        // callLimit Field Functions 
        bool hasCallLimit() const { return this->callLimit_ != nullptr;};
        void deleteCallLimit() { this->callLimit_ = nullptr;};
        inline int64_t getCallLimit() const { DARABONBA_PTR_GET_DEFAULT(callLimit_, 0L) };
        inline RemovedAgentStatisticList& setCallLimit(int64_t callLimit) { DARABONBA_PTR_SET_VALUE(callLimit_, callLimit) };


        // calledCount Field Functions 
        bool hasCalledCount() const { return this->calledCount_ != nullptr;};
        void deleteCalledCount() { this->calledCount_ = nullptr;};
        inline int64_t getCalledCount() const { DARABONBA_PTR_GET_DEFAULT(calledCount_, 0L) };
        inline RemovedAgentStatisticList& setCalledCount(int64_t calledCount) { DARABONBA_PTR_SET_VALUE(calledCount_, calledCount) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline RemovedAgentStatisticList& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // enterpriseCallLimit Field Functions 
        bool hasEnterpriseCallLimit() const { return this->enterpriseCallLimit_ != nullptr;};
        void deleteEnterpriseCallLimit() { this->enterpriseCallLimit_ = nullptr;};
        inline int64_t getEnterpriseCallLimit() const { DARABONBA_PTR_GET_DEFAULT(enterpriseCallLimit_, 0L) };
        inline RemovedAgentStatisticList& setEnterpriseCallLimit(int64_t enterpriseCallLimit) { DARABONBA_PTR_SET_VALUE(enterpriseCallLimit_, enterpriseCallLimit) };


        // enterpriseTodayAnsweredCount Field Functions 
        bool hasEnterpriseTodayAnsweredCount() const { return this->enterpriseTodayAnsweredCount_ != nullptr;};
        void deleteEnterpriseTodayAnsweredCount() { this->enterpriseTodayAnsweredCount_ = nullptr;};
        inline int64_t getEnterpriseTodayAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(enterpriseTodayAnsweredCount_, 0L) };
        inline RemovedAgentStatisticList& setEnterpriseTodayAnsweredCount(int64_t enterpriseTodayAnsweredCount) { DARABONBA_PTR_SET_VALUE(enterpriseTodayAnsweredCount_, enterpriseTodayAnsweredCount) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RemovedAgentStatisticList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // noBridgeCount Field Functions 
        bool hasNoBridgeCount() const { return this->noBridgeCount_ != nullptr;};
        void deleteNoBridgeCount() { this->noBridgeCount_ = nullptr;};
        inline int64_t getNoBridgeCount() const { DARABONBA_PTR_GET_DEFAULT(noBridgeCount_, 0L) };
        inline RemovedAgentStatisticList& setNoBridgeCount(int64_t noBridgeCount) { DARABONBA_PTR_SET_VALUE(noBridgeCount_, noBridgeCount) };


        // todayAnsweredCount Field Functions 
        bool hasTodayAnsweredCount() const { return this->todayAnsweredCount_ != nullptr;};
        void deleteTodayAnsweredCount() { this->todayAnsweredCount_ = nullptr;};
        inline int64_t getTodayAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(todayAnsweredCount_, 0L) };
        inline RemovedAgentStatisticList& setTodayAnsweredCount(int64_t todayAnsweredCount) { DARABONBA_PTR_SET_VALUE(todayAnsweredCount_, todayAnsweredCount) };


      protected:
        // 座席平均进线时长,空闲时长/呼叫数
        shared_ptr<int64_t> agentAvgIdleTime_ {};
        // 座席当前状态:  stateIdle(空闲)  statePause(置忙)  stateInuse(通话） stateCalling(呼叫中)  stateWrapup(整理)   为空代表该当前时间座席在该任务中没有相关状态，如：座席未被使用等
        shared_ptr<string> agentStatus_ {};
        // 座席平均通话时长，单位秒数
        shared_ptr<string> avgBridgeTime_ {};
        // 接听数
        shared_ptr<int64_t> bridgeCount_ {};
        // 座席自动应答率=(座席接通时间-开始呼叫座席时间)<=2s的通话数/座席接通数
        shared_ptr<double> bridgeIn2sRate_ {};
        // 任务级别，座席单日接听上限，-1代表未配置接听上限
        shared_ptr<int64_t> callLimit_ {};
        // 呼叫数
        shared_ptr<int64_t> calledCount_ {};
        // 座席工号
        shared_ptr<string> cno_ {};
        // 企业级别 座席单日接听上限，-1代表未配置接听上限
        shared_ptr<int64_t> enterpriseCallLimit_ {};
        // 企业级别 座席今日已接听数
        shared_ptr<int64_t> enterpriseTodayAnsweredCount_ {};
        // 座席名称
        shared_ptr<string> name_ {};
        // 座席未接听数
        shared_ptr<int64_t> noBridgeCount_ {};
        // 任务级别 座席今日已接听数
        shared_ptr<int64_t> todayAnsweredCount_ {};
      };

      class ChannelInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChannelInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AnswerCount, answerCount_);
          DARABONBA_PTR_TO_JSON(BridgedCount, bridgedCount_);
          DARABONBA_PTR_TO_JSON(ChannelCount, channelCount_);
          DARABONBA_PTR_TO_JSON(EnterpriseChannelCount, enterpriseChannelCount_);
          DARABONBA_PTR_TO_JSON(IvrCount, ivrCount_);
          DARABONBA_PTR_TO_JSON(WaitAgentCount, waitAgentCount_);
          DARABONBA_PTR_TO_JSON(WaitAnswerCount, waitAnswerCount_);
        };
        friend void from_json(const Darabonba::Json& j, ChannelInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AnswerCount, answerCount_);
          DARABONBA_PTR_FROM_JSON(BridgedCount, bridgedCount_);
          DARABONBA_PTR_FROM_JSON(ChannelCount, channelCount_);
          DARABONBA_PTR_FROM_JSON(EnterpriseChannelCount, enterpriseChannelCount_);
          DARABONBA_PTR_FROM_JSON(IvrCount, ivrCount_);
          DARABONBA_PTR_FROM_JSON(WaitAgentCount, waitAgentCount_);
          DARABONBA_PTR_FROM_JSON(WaitAnswerCount, waitAnswerCount_);
        };
        ChannelInfo() = default ;
        ChannelInfo(const ChannelInfo &) = default ;
        ChannelInfo(ChannelInfo &&) = default ;
        ChannelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChannelInfo() = default ;
        ChannelInfo& operator=(const ChannelInfo &) = default ;
        ChannelInfo& operator=(ChannelInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->answerCount_ == nullptr
        && this->bridgedCount_ == nullptr && this->channelCount_ == nullptr && this->enterpriseChannelCount_ == nullptr && this->ivrCount_ == nullptr && this->waitAgentCount_ == nullptr
        && this->waitAnswerCount_ == nullptr; };
        // answerCount Field Functions 
        bool hasAnswerCount() const { return this->answerCount_ != nullptr;};
        void deleteAnswerCount() { this->answerCount_ = nullptr;};
        inline int64_t getAnswerCount() const { DARABONBA_PTR_GET_DEFAULT(answerCount_, 0L) };
        inline ChannelInfo& setAnswerCount(int64_t answerCount) { DARABONBA_PTR_SET_VALUE(answerCount_, answerCount) };


        // bridgedCount Field Functions 
        bool hasBridgedCount() const { return this->bridgedCount_ != nullptr;};
        void deleteBridgedCount() { this->bridgedCount_ = nullptr;};
        inline int64_t getBridgedCount() const { DARABONBA_PTR_GET_DEFAULT(bridgedCount_, 0L) };
        inline ChannelInfo& setBridgedCount(int64_t bridgedCount) { DARABONBA_PTR_SET_VALUE(bridgedCount_, bridgedCount) };


        // channelCount Field Functions 
        bool hasChannelCount() const { return this->channelCount_ != nullptr;};
        void deleteChannelCount() { this->channelCount_ = nullptr;};
        inline int64_t getChannelCount() const { DARABONBA_PTR_GET_DEFAULT(channelCount_, 0L) };
        inline ChannelInfo& setChannelCount(int64_t channelCount) { DARABONBA_PTR_SET_VALUE(channelCount_, channelCount) };


        // enterpriseChannelCount Field Functions 
        bool hasEnterpriseChannelCount() const { return this->enterpriseChannelCount_ != nullptr;};
        void deleteEnterpriseChannelCount() { this->enterpriseChannelCount_ = nullptr;};
        inline int64_t getEnterpriseChannelCount() const { DARABONBA_PTR_GET_DEFAULT(enterpriseChannelCount_, 0L) };
        inline ChannelInfo& setEnterpriseChannelCount(int64_t enterpriseChannelCount) { DARABONBA_PTR_SET_VALUE(enterpriseChannelCount_, enterpriseChannelCount) };


        // ivrCount Field Functions 
        bool hasIvrCount() const { return this->ivrCount_ != nullptr;};
        void deleteIvrCount() { this->ivrCount_ = nullptr;};
        inline int64_t getIvrCount() const { DARABONBA_PTR_GET_DEFAULT(ivrCount_, 0L) };
        inline ChannelInfo& setIvrCount(int64_t ivrCount) { DARABONBA_PTR_SET_VALUE(ivrCount_, ivrCount) };


        // waitAgentCount Field Functions 
        bool hasWaitAgentCount() const { return this->waitAgentCount_ != nullptr;};
        void deleteWaitAgentCount() { this->waitAgentCount_ = nullptr;};
        inline int64_t getWaitAgentCount() const { DARABONBA_PTR_GET_DEFAULT(waitAgentCount_, 0L) };
        inline ChannelInfo& setWaitAgentCount(int64_t waitAgentCount) { DARABONBA_PTR_SET_VALUE(waitAgentCount_, waitAgentCount) };


        // waitAnswerCount Field Functions 
        bool hasWaitAnswerCount() const { return this->waitAnswerCount_ != nullptr;};
        void deleteWaitAnswerCount() { this->waitAnswerCount_ = nullptr;};
        inline int64_t getWaitAnswerCount() const { DARABONBA_PTR_GET_DEFAULT(waitAnswerCount_, 0L) };
        inline ChannelInfo& setWaitAnswerCount(int64_t waitAnswerCount) { DARABONBA_PTR_SET_VALUE(waitAnswerCount_, waitAnswerCount) };


      protected:
        // 客户接通个数
        shared_ptr<int64_t> answerCount_ {};
        // 桥接个数
        shared_ptr<int64_t> bridgedCount_ {};
        // 任务当前通道数
        shared_ptr<int64_t> channelCount_ {};
        // 企业预测外呼通道数
        shared_ptr<int64_t> enterpriseChannelCount_ {};
        // 溢出到ivr数
        shared_ptr<int64_t> ivrCount_ {};
        // 等待转座席的个数
        shared_ptr<int64_t> waitAgentCount_ {};
        // 等待客户接听的个数
        shared_ptr<int64_t> waitAnswerCount_ {};
      };

      class AgentStatisticList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentStatisticList& obj) { 
          DARABONBA_PTR_TO_JSON(AgentAvgIdleTime, agentAvgIdleTime_);
          DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
          DARABONBA_PTR_TO_JSON(AvgBridgeTime, avgBridgeTime_);
          DARABONBA_PTR_TO_JSON(BridgeCount, bridgeCount_);
          DARABONBA_PTR_TO_JSON(BridgeIn2sRate, bridgeIn2sRate_);
          DARABONBA_PTR_TO_JSON(CallLimit, callLimit_);
          DARABONBA_PTR_TO_JSON(CalledCount, calledCount_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(EnterpriseCallLimit, enterpriseCallLimit_);
          DARABONBA_PTR_TO_JSON(EnterpriseTodayAnsweredCount, enterpriseTodayAnsweredCount_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NoBridgeCount, noBridgeCount_);
          DARABONBA_PTR_TO_JSON(TodayAnsweredCount, todayAnsweredCount_);
        };
        friend void from_json(const Darabonba::Json& j, AgentStatisticList& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentAvgIdleTime, agentAvgIdleTime_);
          DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
          DARABONBA_PTR_FROM_JSON(AvgBridgeTime, avgBridgeTime_);
          DARABONBA_PTR_FROM_JSON(BridgeCount, bridgeCount_);
          DARABONBA_PTR_FROM_JSON(BridgeIn2sRate, bridgeIn2sRate_);
          DARABONBA_PTR_FROM_JSON(CallLimit, callLimit_);
          DARABONBA_PTR_FROM_JSON(CalledCount, calledCount_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(EnterpriseCallLimit, enterpriseCallLimit_);
          DARABONBA_PTR_FROM_JSON(EnterpriseTodayAnsweredCount, enterpriseTodayAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NoBridgeCount, noBridgeCount_);
          DARABONBA_PTR_FROM_JSON(TodayAnsweredCount, todayAnsweredCount_);
        };
        AgentStatisticList() = default ;
        AgentStatisticList(const AgentStatisticList &) = default ;
        AgentStatisticList(AgentStatisticList &&) = default ;
        AgentStatisticList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentStatisticList() = default ;
        AgentStatisticList& operator=(const AgentStatisticList &) = default ;
        AgentStatisticList& operator=(AgentStatisticList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentAvgIdleTime_ == nullptr
        && this->agentStatus_ == nullptr && this->avgBridgeTime_ == nullptr && this->bridgeCount_ == nullptr && this->bridgeIn2sRate_ == nullptr && this->callLimit_ == nullptr
        && this->calledCount_ == nullptr && this->cno_ == nullptr && this->enterpriseCallLimit_ == nullptr && this->enterpriseTodayAnsweredCount_ == nullptr && this->name_ == nullptr
        && this->noBridgeCount_ == nullptr && this->todayAnsweredCount_ == nullptr; };
        // agentAvgIdleTime Field Functions 
        bool hasAgentAvgIdleTime() const { return this->agentAvgIdleTime_ != nullptr;};
        void deleteAgentAvgIdleTime() { this->agentAvgIdleTime_ = nullptr;};
        inline int64_t getAgentAvgIdleTime() const { DARABONBA_PTR_GET_DEFAULT(agentAvgIdleTime_, 0L) };
        inline AgentStatisticList& setAgentAvgIdleTime(int64_t agentAvgIdleTime) { DARABONBA_PTR_SET_VALUE(agentAvgIdleTime_, agentAvgIdleTime) };


        // agentStatus Field Functions 
        bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
        void deleteAgentStatus() { this->agentStatus_ = nullptr;};
        inline string getAgentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
        inline AgentStatisticList& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


        // avgBridgeTime Field Functions 
        bool hasAvgBridgeTime() const { return this->avgBridgeTime_ != nullptr;};
        void deleteAvgBridgeTime() { this->avgBridgeTime_ = nullptr;};
        inline string getAvgBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(avgBridgeTime_, "") };
        inline AgentStatisticList& setAvgBridgeTime(string avgBridgeTime) { DARABONBA_PTR_SET_VALUE(avgBridgeTime_, avgBridgeTime) };


        // bridgeCount Field Functions 
        bool hasBridgeCount() const { return this->bridgeCount_ != nullptr;};
        void deleteBridgeCount() { this->bridgeCount_ = nullptr;};
        inline int64_t getBridgeCount() const { DARABONBA_PTR_GET_DEFAULT(bridgeCount_, 0L) };
        inline AgentStatisticList& setBridgeCount(int64_t bridgeCount) { DARABONBA_PTR_SET_VALUE(bridgeCount_, bridgeCount) };


        // bridgeIn2sRate Field Functions 
        bool hasBridgeIn2sRate() const { return this->bridgeIn2sRate_ != nullptr;};
        void deleteBridgeIn2sRate() { this->bridgeIn2sRate_ = nullptr;};
        inline double getBridgeIn2sRate() const { DARABONBA_PTR_GET_DEFAULT(bridgeIn2sRate_, 0.0) };
        inline AgentStatisticList& setBridgeIn2sRate(double bridgeIn2sRate) { DARABONBA_PTR_SET_VALUE(bridgeIn2sRate_, bridgeIn2sRate) };


        // callLimit Field Functions 
        bool hasCallLimit() const { return this->callLimit_ != nullptr;};
        void deleteCallLimit() { this->callLimit_ = nullptr;};
        inline int64_t getCallLimit() const { DARABONBA_PTR_GET_DEFAULT(callLimit_, 0L) };
        inline AgentStatisticList& setCallLimit(int64_t callLimit) { DARABONBA_PTR_SET_VALUE(callLimit_, callLimit) };


        // calledCount Field Functions 
        bool hasCalledCount() const { return this->calledCount_ != nullptr;};
        void deleteCalledCount() { this->calledCount_ = nullptr;};
        inline int64_t getCalledCount() const { DARABONBA_PTR_GET_DEFAULT(calledCount_, 0L) };
        inline AgentStatisticList& setCalledCount(int64_t calledCount) { DARABONBA_PTR_SET_VALUE(calledCount_, calledCount) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline AgentStatisticList& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // enterpriseCallLimit Field Functions 
        bool hasEnterpriseCallLimit() const { return this->enterpriseCallLimit_ != nullptr;};
        void deleteEnterpriseCallLimit() { this->enterpriseCallLimit_ = nullptr;};
        inline int64_t getEnterpriseCallLimit() const { DARABONBA_PTR_GET_DEFAULT(enterpriseCallLimit_, 0L) };
        inline AgentStatisticList& setEnterpriseCallLimit(int64_t enterpriseCallLimit) { DARABONBA_PTR_SET_VALUE(enterpriseCallLimit_, enterpriseCallLimit) };


        // enterpriseTodayAnsweredCount Field Functions 
        bool hasEnterpriseTodayAnsweredCount() const { return this->enterpriseTodayAnsweredCount_ != nullptr;};
        void deleteEnterpriseTodayAnsweredCount() { this->enterpriseTodayAnsweredCount_ = nullptr;};
        inline int64_t getEnterpriseTodayAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(enterpriseTodayAnsweredCount_, 0L) };
        inline AgentStatisticList& setEnterpriseTodayAnsweredCount(int64_t enterpriseTodayAnsweredCount) { DARABONBA_PTR_SET_VALUE(enterpriseTodayAnsweredCount_, enterpriseTodayAnsweredCount) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AgentStatisticList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // noBridgeCount Field Functions 
        bool hasNoBridgeCount() const { return this->noBridgeCount_ != nullptr;};
        void deleteNoBridgeCount() { this->noBridgeCount_ = nullptr;};
        inline int64_t getNoBridgeCount() const { DARABONBA_PTR_GET_DEFAULT(noBridgeCount_, 0L) };
        inline AgentStatisticList& setNoBridgeCount(int64_t noBridgeCount) { DARABONBA_PTR_SET_VALUE(noBridgeCount_, noBridgeCount) };


        // todayAnsweredCount Field Functions 
        bool hasTodayAnsweredCount() const { return this->todayAnsweredCount_ != nullptr;};
        void deleteTodayAnsweredCount() { this->todayAnsweredCount_ = nullptr;};
        inline int64_t getTodayAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(todayAnsweredCount_, 0L) };
        inline AgentStatisticList& setTodayAnsweredCount(int64_t todayAnsweredCount) { DARABONBA_PTR_SET_VALUE(todayAnsweredCount_, todayAnsweredCount) };


      protected:
        // 座席平均进线时长,空闲时长/呼叫数
        shared_ptr<int64_t> agentAvgIdleTime_ {};
        // 座席当前状态:  stateIdle(空闲)  statePause(置忙)  stateInuse(通话） stateCalling(呼叫中)  stateWrapup(整理)   为空代表该当前时间座席在该任务中没有相关状态，如：座席未被使用等
        shared_ptr<string> agentStatus_ {};
        // 座席平均通话时长，单位秒数
        shared_ptr<string> avgBridgeTime_ {};
        // 接听数
        shared_ptr<int64_t> bridgeCount_ {};
        // 座席自动应答率=(座席接通时间-开始呼叫座席时间)<=2s的通话数/座席接通数
        shared_ptr<double> bridgeIn2sRate_ {};
        // 任务级别，座席单日接听上限，-1代表未配置接听上限
        shared_ptr<int64_t> callLimit_ {};
        // 呼叫数
        shared_ptr<int64_t> calledCount_ {};
        // 座席工号
        shared_ptr<string> cno_ {};
        // 企业级别 座席单日接听上限，-1代表未配置接听上限
        shared_ptr<int64_t> enterpriseCallLimit_ {};
        // 企业级别 座席今日已接听数
        shared_ptr<int64_t> enterpriseTodayAnsweredCount_ {};
        // 座席名称
        shared_ptr<string> name_ {};
        // 座席未接听数
        shared_ptr<int64_t> noBridgeCount_ {};
        // 任务级别 座席今日已接听数
        shared_ptr<int64_t> todayAnsweredCount_ {};
      };

      class AgentInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableCount, availableCount_);
          DARABONBA_PTR_TO_JSON(BridgeCount, bridgeCount_);
          DARABONBA_PTR_TO_JSON(OnlineCount, onlineCount_);
          DARABONBA_PTR_TO_JSON(RingingCount, ringingCount_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_TO_JSON(WrapupCount, wrapupCount_);
        };
        friend void from_json(const Darabonba::Json& j, AgentInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableCount, availableCount_);
          DARABONBA_PTR_FROM_JSON(BridgeCount, bridgeCount_);
          DARABONBA_PTR_FROM_JSON(OnlineCount, onlineCount_);
          DARABONBA_PTR_FROM_JSON(RingingCount, ringingCount_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_FROM_JSON(WrapupCount, wrapupCount_);
        };
        AgentInfo() = default ;
        AgentInfo(const AgentInfo &) = default ;
        AgentInfo(AgentInfo &&) = default ;
        AgentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentInfo() = default ;
        AgentInfo& operator=(const AgentInfo &) = default ;
        AgentInfo& operator=(AgentInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->availableCount_ == nullptr
        && this->bridgeCount_ == nullptr && this->onlineCount_ == nullptr && this->ringingCount_ == nullptr && this->totalCount_ == nullptr && this->wrapupCount_ == nullptr; };
        // availableCount Field Functions 
        bool hasAvailableCount() const { return this->availableCount_ != nullptr;};
        void deleteAvailableCount() { this->availableCount_ = nullptr;};
        inline int64_t getAvailableCount() const { DARABONBA_PTR_GET_DEFAULT(availableCount_, 0L) };
        inline AgentInfo& setAvailableCount(int64_t availableCount) { DARABONBA_PTR_SET_VALUE(availableCount_, availableCount) };


        // bridgeCount Field Functions 
        bool hasBridgeCount() const { return this->bridgeCount_ != nullptr;};
        void deleteBridgeCount() { this->bridgeCount_ = nullptr;};
        inline int64_t getBridgeCount() const { DARABONBA_PTR_GET_DEFAULT(bridgeCount_, 0L) };
        inline AgentInfo& setBridgeCount(int64_t bridgeCount) { DARABONBA_PTR_SET_VALUE(bridgeCount_, bridgeCount) };


        // onlineCount Field Functions 
        bool hasOnlineCount() const { return this->onlineCount_ != nullptr;};
        void deleteOnlineCount() { this->onlineCount_ = nullptr;};
        inline int64_t getOnlineCount() const { DARABONBA_PTR_GET_DEFAULT(onlineCount_, 0L) };
        inline AgentInfo& setOnlineCount(int64_t onlineCount) { DARABONBA_PTR_SET_VALUE(onlineCount_, onlineCount) };


        // ringingCount Field Functions 
        bool hasRingingCount() const { return this->ringingCount_ != nullptr;};
        void deleteRingingCount() { this->ringingCount_ = nullptr;};
        inline int64_t getRingingCount() const { DARABONBA_PTR_GET_DEFAULT(ringingCount_, 0L) };
        inline AgentInfo& setRingingCount(int64_t ringingCount) { DARABONBA_PTR_SET_VALUE(ringingCount_, ringingCount) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline AgentInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


        // wrapupCount Field Functions 
        bool hasWrapupCount() const { return this->wrapupCount_ != nullptr;};
        void deleteWrapupCount() { this->wrapupCount_ = nullptr;};
        inline int64_t getWrapupCount() const { DARABONBA_PTR_GET_DEFAULT(wrapupCount_, 0L) };
        inline AgentInfo& setWrapupCount(int64_t wrapupCount) { DARABONBA_PTR_SET_VALUE(wrapupCount_, wrapupCount) };


      protected:
        // 可用座席数
        shared_ptr<int64_t> availableCount_ {};
        // 通话中的座席数
        shared_ptr<int64_t> bridgeCount_ {};
        // 当前在线座席数
        shared_ptr<int64_t> onlineCount_ {};
        // 响铃中的座席数
        shared_ptr<int64_t> ringingCount_ {};
        // 座席总数
        shared_ptr<int64_t> totalCount_ {};
        // 整理中的座席数
        shared_ptr<int64_t> wrapupCount_ {};
      };

      virtual bool empty() const override { return this->agentInfo_ == nullptr
        && this->agentStatisticList_ == nullptr && this->channelInfo_ == nullptr && this->removedAgentStatisticList_ == nullptr && this->statistic_ == nullptr && this->todayStatistic_ == nullptr; };
      // agentInfo Field Functions 
      bool hasAgentInfo() const { return this->agentInfo_ != nullptr;};
      void deleteAgentInfo() { this->agentInfo_ = nullptr;};
      inline const Data::AgentInfo & getAgentInfo() const { DARABONBA_PTR_GET_CONST(agentInfo_, Data::AgentInfo) };
      inline Data::AgentInfo getAgentInfo() { DARABONBA_PTR_GET(agentInfo_, Data::AgentInfo) };
      inline Data& setAgentInfo(const Data::AgentInfo & agentInfo) { DARABONBA_PTR_SET_VALUE(agentInfo_, agentInfo) };
      inline Data& setAgentInfo(Data::AgentInfo && agentInfo) { DARABONBA_PTR_SET_RVALUE(agentInfo_, agentInfo) };


      // agentStatisticList Field Functions 
      bool hasAgentStatisticList() const { return this->agentStatisticList_ != nullptr;};
      void deleteAgentStatisticList() { this->agentStatisticList_ = nullptr;};
      inline const vector<Data::AgentStatisticList> & getAgentStatisticList() const { DARABONBA_PTR_GET_CONST(agentStatisticList_, vector<Data::AgentStatisticList>) };
      inline vector<Data::AgentStatisticList> getAgentStatisticList() { DARABONBA_PTR_GET(agentStatisticList_, vector<Data::AgentStatisticList>) };
      inline Data& setAgentStatisticList(const vector<Data::AgentStatisticList> & agentStatisticList) { DARABONBA_PTR_SET_VALUE(agentStatisticList_, agentStatisticList) };
      inline Data& setAgentStatisticList(vector<Data::AgentStatisticList> && agentStatisticList) { DARABONBA_PTR_SET_RVALUE(agentStatisticList_, agentStatisticList) };


      // channelInfo Field Functions 
      bool hasChannelInfo() const { return this->channelInfo_ != nullptr;};
      void deleteChannelInfo() { this->channelInfo_ = nullptr;};
      inline const Data::ChannelInfo & getChannelInfo() const { DARABONBA_PTR_GET_CONST(channelInfo_, Data::ChannelInfo) };
      inline Data::ChannelInfo getChannelInfo() { DARABONBA_PTR_GET(channelInfo_, Data::ChannelInfo) };
      inline Data& setChannelInfo(const Data::ChannelInfo & channelInfo) { DARABONBA_PTR_SET_VALUE(channelInfo_, channelInfo) };
      inline Data& setChannelInfo(Data::ChannelInfo && channelInfo) { DARABONBA_PTR_SET_RVALUE(channelInfo_, channelInfo) };


      // removedAgentStatisticList Field Functions 
      bool hasRemovedAgentStatisticList() const { return this->removedAgentStatisticList_ != nullptr;};
      void deleteRemovedAgentStatisticList() { this->removedAgentStatisticList_ = nullptr;};
      inline const vector<Data::RemovedAgentStatisticList> & getRemovedAgentStatisticList() const { DARABONBA_PTR_GET_CONST(removedAgentStatisticList_, vector<Data::RemovedAgentStatisticList>) };
      inline vector<Data::RemovedAgentStatisticList> getRemovedAgentStatisticList() { DARABONBA_PTR_GET(removedAgentStatisticList_, vector<Data::RemovedAgentStatisticList>) };
      inline Data& setRemovedAgentStatisticList(const vector<Data::RemovedAgentStatisticList> & removedAgentStatisticList) { DARABONBA_PTR_SET_VALUE(removedAgentStatisticList_, removedAgentStatisticList) };
      inline Data& setRemovedAgentStatisticList(vector<Data::RemovedAgentStatisticList> && removedAgentStatisticList) { DARABONBA_PTR_SET_RVALUE(removedAgentStatisticList_, removedAgentStatisticList) };


      // statistic Field Functions 
      bool hasStatistic() const { return this->statistic_ != nullptr;};
      void deleteStatistic() { this->statistic_ = nullptr;};
      inline const Data::Statistic & getStatistic() const { DARABONBA_PTR_GET_CONST(statistic_, Data::Statistic) };
      inline Data::Statistic getStatistic() { DARABONBA_PTR_GET(statistic_, Data::Statistic) };
      inline Data& setStatistic(const Data::Statistic & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
      inline Data& setStatistic(Data::Statistic && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


      // todayStatistic Field Functions 
      bool hasTodayStatistic() const { return this->todayStatistic_ != nullptr;};
      void deleteTodayStatistic() { this->todayStatistic_ = nullptr;};
      inline const Data::TodayStatistic & getTodayStatistic() const { DARABONBA_PTR_GET_CONST(todayStatistic_, Data::TodayStatistic) };
      inline Data::TodayStatistic getTodayStatistic() { DARABONBA_PTR_GET(todayStatistic_, Data::TodayStatistic) };
      inline Data& setTodayStatistic(const Data::TodayStatistic & todayStatistic) { DARABONBA_PTR_SET_VALUE(todayStatistic_, todayStatistic) };
      inline Data& setTodayStatistic(Data::TodayStatistic && todayStatistic) { DARABONBA_PTR_SET_RVALUE(todayStatistic_, todayStatistic) };


    protected:
      // 座席状态统计
      shared_ptr<Data::AgentInfo> agentInfo_ {};
      // 座席统计详情
      shared_ptr<vector<Data::AgentStatisticList>> agentStatisticList_ {};
      // 通道监控信息
      shared_ptr<Data::ChannelInfo> channelInfo_ {};
      // 已移除座席统计详情，仅当 `includeRemovedAgents=1` 时返回
      shared_ptr<vector<Data::RemovedAgentStatisticList>> removedAgentStatisticList_ {};
      // 任务监控信息
      shared_ptr<Data::Statistic> statistic_ {};
      // 当日任务监控信息
      shared_ptr<Data::TodayStatistic> todayStatistic_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudMonitorTaskResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudMonitorTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudMonitorTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudMonitorTaskResponseBody::Data) };
    inline CloudMonitorTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudMonitorTaskResponseBody::Data) };
    inline CloudMonitorTaskResponseBody& setData(const CloudMonitorTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudMonitorTaskResponseBody& setData(CloudMonitorTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudMonitorTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudMonitorTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudMonitorTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
