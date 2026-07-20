// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECONTROLEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECONTROLEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetResourceControlEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceControlEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceControlEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetResourceControlEventResponseBody() = default ;
    GetResourceControlEventResponseBody(const GetResourceControlEventResponseBody &) = default ;
    GetResourceControlEventResponseBody(GetResourceControlEventResponseBody &&) = default ;
    GetResourceControlEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceControlEventResponseBody() = default ;
    GetResourceControlEventResponseBody& operator=(const GetResourceControlEventResponseBody &) = default ;
    GetResourceControlEventResponseBody& operator=(GetResourceControlEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApplyRecordList, applyRecordList_);
        DARABONBA_PTR_TO_JSON(AssistantTip, assistantTip_);
        DARABONBA_PTR_TO_JSON(BlockIp, blockIp_);
        DARABONBA_PTR_TO_JSON(Direction, direction_);
        DARABONBA_PTR_TO_JSON(DstIp, dstIp_);
        DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(EventImpact, eventImpact_);
        DARABONBA_PTR_TO_JSON(LeakName, leakName_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(PunishReason, punishReason_);
        DARABONBA_PTR_TO_JSON(SnapshotUrl, snapshotUrl_);
        DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
        DARABONBA_PTR_TO_JSON(SrcPort, srcPort_);
        DARABONBA_PTR_TO_JSON(Tip, tip_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplyRecordList, applyRecordList_);
        DARABONBA_PTR_FROM_JSON(AssistantTip, assistantTip_);
        DARABONBA_PTR_FROM_JSON(BlockIp, blockIp_);
        DARABONBA_PTR_FROM_JSON(Direction, direction_);
        DARABONBA_PTR_FROM_JSON(DstIp, dstIp_);
        DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(EventImpact, eventImpact_);
        DARABONBA_PTR_FROM_JSON(LeakName, leakName_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(PunishReason, punishReason_);
        DARABONBA_PTR_FROM_JSON(SnapshotUrl, snapshotUrl_);
        DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
        DARABONBA_PTR_FROM_JSON(SrcPort, srcPort_);
        DARABONBA_PTR_FROM_JSON(Tip, tip_);
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
      class ApplyRecordList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplyRecordList& obj) { 
          DARABONBA_PTR_TO_JSON(ApprovalReason, approvalReason_);
          DARABONBA_PTR_TO_JSON(EventTimeRecord, eventTimeRecord_);
          DARABONBA_PTR_TO_JSON(RejectReason, rejectReason_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ApplyRecordList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApprovalReason, approvalReason_);
          DARABONBA_PTR_FROM_JSON(EventTimeRecord, eventTimeRecord_);
          DARABONBA_PTR_FROM_JSON(RejectReason, rejectReason_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ApplyRecordList() = default ;
        ApplyRecordList(const ApplyRecordList &) = default ;
        ApplyRecordList(ApplyRecordList &&) = default ;
        ApplyRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplyRecordList() = default ;
        ApplyRecordList& operator=(const ApplyRecordList &) = default ;
        ApplyRecordList& operator=(ApplyRecordList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EventTimeRecord : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EventTimeRecord& obj) { 
            DARABONBA_PTR_TO_JSON(AlertEndTime, alertEndTime_);
            DARABONBA_PTR_TO_JSON(AlertStartTime, alertStartTime_);
            DARABONBA_PTR_TO_JSON(AntiPunishTime, antiPunishTime_);
            DARABONBA_PTR_TO_JSON(ApplyTime, applyTime_);
            DARABONBA_PTR_TO_JSON(IgnoreAlertTime, ignoreAlertTime_);
            DARABONBA_PTR_TO_JSON(InstanceCloseTime, instanceCloseTime_);
            DARABONBA_PTR_TO_JSON(InstanceScanTime, instanceScanTime_);
            DARABONBA_PTR_TO_JSON(LastCheckTime, lastCheckTime_);
            DARABONBA_PTR_TO_JSON(MiningAlertProcessTime, miningAlertProcessTime_);
            DARABONBA_PTR_TO_JSON(PreCloseTime, preCloseTime_);
            DARABONBA_PTR_TO_JSON(ProcessTime, processTime_);
            DARABONBA_PTR_TO_JSON(PunishEndTime, punishEndTime_);
            DARABONBA_PTR_TO_JSON(PunishStartTime, punishStartTime_);
            DARABONBA_PTR_TO_JSON(RejectTime, rejectTime_);
            DARABONBA_PTR_TO_JSON(RemoveTime, removeTime_);
            DARABONBA_PTR_TO_JSON(RiskCheckSuccessTime, riskCheckSuccessTime_);
          };
          friend void from_json(const Darabonba::Json& j, EventTimeRecord& obj) { 
            DARABONBA_PTR_FROM_JSON(AlertEndTime, alertEndTime_);
            DARABONBA_PTR_FROM_JSON(AlertStartTime, alertStartTime_);
            DARABONBA_PTR_FROM_JSON(AntiPunishTime, antiPunishTime_);
            DARABONBA_PTR_FROM_JSON(ApplyTime, applyTime_);
            DARABONBA_PTR_FROM_JSON(IgnoreAlertTime, ignoreAlertTime_);
            DARABONBA_PTR_FROM_JSON(InstanceCloseTime, instanceCloseTime_);
            DARABONBA_PTR_FROM_JSON(InstanceScanTime, instanceScanTime_);
            DARABONBA_PTR_FROM_JSON(LastCheckTime, lastCheckTime_);
            DARABONBA_PTR_FROM_JSON(MiningAlertProcessTime, miningAlertProcessTime_);
            DARABONBA_PTR_FROM_JSON(PreCloseTime, preCloseTime_);
            DARABONBA_PTR_FROM_JSON(ProcessTime, processTime_);
            DARABONBA_PTR_FROM_JSON(PunishEndTime, punishEndTime_);
            DARABONBA_PTR_FROM_JSON(PunishStartTime, punishStartTime_);
            DARABONBA_PTR_FROM_JSON(RejectTime, rejectTime_);
            DARABONBA_PTR_FROM_JSON(RemoveTime, removeTime_);
            DARABONBA_PTR_FROM_JSON(RiskCheckSuccessTime, riskCheckSuccessTime_);
          };
          EventTimeRecord() = default ;
          EventTimeRecord(const EventTimeRecord &) = default ;
          EventTimeRecord(EventTimeRecord &&) = default ;
          EventTimeRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EventTimeRecord() = default ;
          EventTimeRecord& operator=(const EventTimeRecord &) = default ;
          EventTimeRecord& operator=(EventTimeRecord &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->alertEndTime_ == nullptr
        && this->alertStartTime_ == nullptr && this->antiPunishTime_ == nullptr && this->applyTime_ == nullptr && this->ignoreAlertTime_ == nullptr && this->instanceCloseTime_ == nullptr
        && this->instanceScanTime_ == nullptr && this->lastCheckTime_ == nullptr && this->miningAlertProcessTime_ == nullptr && this->preCloseTime_ == nullptr && this->processTime_ == nullptr
        && this->punishEndTime_ == nullptr && this->punishStartTime_ == nullptr && this->rejectTime_ == nullptr && this->removeTime_ == nullptr && this->riskCheckSuccessTime_ == nullptr; };
          // alertEndTime Field Functions 
          bool hasAlertEndTime() const { return this->alertEndTime_ != nullptr;};
          void deleteAlertEndTime() { this->alertEndTime_ = nullptr;};
          inline string getAlertEndTime() const { DARABONBA_PTR_GET_DEFAULT(alertEndTime_, "") };
          inline EventTimeRecord& setAlertEndTime(string alertEndTime) { DARABONBA_PTR_SET_VALUE(alertEndTime_, alertEndTime) };


          // alertStartTime Field Functions 
          bool hasAlertStartTime() const { return this->alertStartTime_ != nullptr;};
          void deleteAlertStartTime() { this->alertStartTime_ = nullptr;};
          inline string getAlertStartTime() const { DARABONBA_PTR_GET_DEFAULT(alertStartTime_, "") };
          inline EventTimeRecord& setAlertStartTime(string alertStartTime) { DARABONBA_PTR_SET_VALUE(alertStartTime_, alertStartTime) };


          // antiPunishTime Field Functions 
          bool hasAntiPunishTime() const { return this->antiPunishTime_ != nullptr;};
          void deleteAntiPunishTime() { this->antiPunishTime_ = nullptr;};
          inline string getAntiPunishTime() const { DARABONBA_PTR_GET_DEFAULT(antiPunishTime_, "") };
          inline EventTimeRecord& setAntiPunishTime(string antiPunishTime) { DARABONBA_PTR_SET_VALUE(antiPunishTime_, antiPunishTime) };


          // applyTime Field Functions 
          bool hasApplyTime() const { return this->applyTime_ != nullptr;};
          void deleteApplyTime() { this->applyTime_ = nullptr;};
          inline string getApplyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, "") };
          inline EventTimeRecord& setApplyTime(string applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


          // ignoreAlertTime Field Functions 
          bool hasIgnoreAlertTime() const { return this->ignoreAlertTime_ != nullptr;};
          void deleteIgnoreAlertTime() { this->ignoreAlertTime_ = nullptr;};
          inline string getIgnoreAlertTime() const { DARABONBA_PTR_GET_DEFAULT(ignoreAlertTime_, "") };
          inline EventTimeRecord& setIgnoreAlertTime(string ignoreAlertTime) { DARABONBA_PTR_SET_VALUE(ignoreAlertTime_, ignoreAlertTime) };


          // instanceCloseTime Field Functions 
          bool hasInstanceCloseTime() const { return this->instanceCloseTime_ != nullptr;};
          void deleteInstanceCloseTime() { this->instanceCloseTime_ = nullptr;};
          inline string getInstanceCloseTime() const { DARABONBA_PTR_GET_DEFAULT(instanceCloseTime_, "") };
          inline EventTimeRecord& setInstanceCloseTime(string instanceCloseTime) { DARABONBA_PTR_SET_VALUE(instanceCloseTime_, instanceCloseTime) };


          // instanceScanTime Field Functions 
          bool hasInstanceScanTime() const { return this->instanceScanTime_ != nullptr;};
          void deleteInstanceScanTime() { this->instanceScanTime_ = nullptr;};
          inline string getInstanceScanTime() const { DARABONBA_PTR_GET_DEFAULT(instanceScanTime_, "") };
          inline EventTimeRecord& setInstanceScanTime(string instanceScanTime) { DARABONBA_PTR_SET_VALUE(instanceScanTime_, instanceScanTime) };


          // lastCheckTime Field Functions 
          bool hasLastCheckTime() const { return this->lastCheckTime_ != nullptr;};
          void deleteLastCheckTime() { this->lastCheckTime_ = nullptr;};
          inline string getLastCheckTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckTime_, "") };
          inline EventTimeRecord& setLastCheckTime(string lastCheckTime) { DARABONBA_PTR_SET_VALUE(lastCheckTime_, lastCheckTime) };


          // miningAlertProcessTime Field Functions 
          bool hasMiningAlertProcessTime() const { return this->miningAlertProcessTime_ != nullptr;};
          void deleteMiningAlertProcessTime() { this->miningAlertProcessTime_ = nullptr;};
          inline string getMiningAlertProcessTime() const { DARABONBA_PTR_GET_DEFAULT(miningAlertProcessTime_, "") };
          inline EventTimeRecord& setMiningAlertProcessTime(string miningAlertProcessTime) { DARABONBA_PTR_SET_VALUE(miningAlertProcessTime_, miningAlertProcessTime) };


          // preCloseTime Field Functions 
          bool hasPreCloseTime() const { return this->preCloseTime_ != nullptr;};
          void deletePreCloseTime() { this->preCloseTime_ = nullptr;};
          inline string getPreCloseTime() const { DARABONBA_PTR_GET_DEFAULT(preCloseTime_, "") };
          inline EventTimeRecord& setPreCloseTime(string preCloseTime) { DARABONBA_PTR_SET_VALUE(preCloseTime_, preCloseTime) };


          // processTime Field Functions 
          bool hasProcessTime() const { return this->processTime_ != nullptr;};
          void deleteProcessTime() { this->processTime_ = nullptr;};
          inline string getProcessTime() const { DARABONBA_PTR_GET_DEFAULT(processTime_, "") };
          inline EventTimeRecord& setProcessTime(string processTime) { DARABONBA_PTR_SET_VALUE(processTime_, processTime) };


          // punishEndTime Field Functions 
          bool hasPunishEndTime() const { return this->punishEndTime_ != nullptr;};
          void deletePunishEndTime() { this->punishEndTime_ = nullptr;};
          inline string getPunishEndTime() const { DARABONBA_PTR_GET_DEFAULT(punishEndTime_, "") };
          inline EventTimeRecord& setPunishEndTime(string punishEndTime) { DARABONBA_PTR_SET_VALUE(punishEndTime_, punishEndTime) };


          // punishStartTime Field Functions 
          bool hasPunishStartTime() const { return this->punishStartTime_ != nullptr;};
          void deletePunishStartTime() { this->punishStartTime_ = nullptr;};
          inline string getPunishStartTime() const { DARABONBA_PTR_GET_DEFAULT(punishStartTime_, "") };
          inline EventTimeRecord& setPunishStartTime(string punishStartTime) { DARABONBA_PTR_SET_VALUE(punishStartTime_, punishStartTime) };


          // rejectTime Field Functions 
          bool hasRejectTime() const { return this->rejectTime_ != nullptr;};
          void deleteRejectTime() { this->rejectTime_ = nullptr;};
          inline string getRejectTime() const { DARABONBA_PTR_GET_DEFAULT(rejectTime_, "") };
          inline EventTimeRecord& setRejectTime(string rejectTime) { DARABONBA_PTR_SET_VALUE(rejectTime_, rejectTime) };


          // removeTime Field Functions 
          bool hasRemoveTime() const { return this->removeTime_ != nullptr;};
          void deleteRemoveTime() { this->removeTime_ = nullptr;};
          inline string getRemoveTime() const { DARABONBA_PTR_GET_DEFAULT(removeTime_, "") };
          inline EventTimeRecord& setRemoveTime(string removeTime) { DARABONBA_PTR_SET_VALUE(removeTime_, removeTime) };


          // riskCheckSuccessTime Field Functions 
          bool hasRiskCheckSuccessTime() const { return this->riskCheckSuccessTime_ != nullptr;};
          void deleteRiskCheckSuccessTime() { this->riskCheckSuccessTime_ = nullptr;};
          inline string getRiskCheckSuccessTime() const { DARABONBA_PTR_GET_DEFAULT(riskCheckSuccessTime_, "") };
          inline EventTimeRecord& setRiskCheckSuccessTime(string riskCheckSuccessTime) { DARABONBA_PTR_SET_VALUE(riskCheckSuccessTime_, riskCheckSuccessTime) };


        protected:
          shared_ptr<string> alertEndTime_ {};
          shared_ptr<string> alertStartTime_ {};
          shared_ptr<string> antiPunishTime_ {};
          shared_ptr<string> applyTime_ {};
          shared_ptr<string> ignoreAlertTime_ {};
          shared_ptr<string> instanceCloseTime_ {};
          shared_ptr<string> instanceScanTime_ {};
          shared_ptr<string> lastCheckTime_ {};
          shared_ptr<string> miningAlertProcessTime_ {};
          shared_ptr<string> preCloseTime_ {};
          shared_ptr<string> processTime_ {};
          shared_ptr<string> punishEndTime_ {};
          shared_ptr<string> punishStartTime_ {};
          shared_ptr<string> rejectTime_ {};
          shared_ptr<string> removeTime_ {};
          shared_ptr<string> riskCheckSuccessTime_ {};
        };

        virtual bool empty() const override { return this->approvalReason_ == nullptr
        && this->eventTimeRecord_ == nullptr && this->rejectReason_ == nullptr && this->remark_ == nullptr && this->status_ == nullptr; };
        // approvalReason Field Functions 
        bool hasApprovalReason() const { return this->approvalReason_ != nullptr;};
        void deleteApprovalReason() { this->approvalReason_ = nullptr;};
        inline string getApprovalReason() const { DARABONBA_PTR_GET_DEFAULT(approvalReason_, "") };
        inline ApplyRecordList& setApprovalReason(string approvalReason) { DARABONBA_PTR_SET_VALUE(approvalReason_, approvalReason) };


        // eventTimeRecord Field Functions 
        bool hasEventTimeRecord() const { return this->eventTimeRecord_ != nullptr;};
        void deleteEventTimeRecord() { this->eventTimeRecord_ = nullptr;};
        inline const ApplyRecordList::EventTimeRecord & getEventTimeRecord() const { DARABONBA_PTR_GET_CONST(eventTimeRecord_, ApplyRecordList::EventTimeRecord) };
        inline ApplyRecordList::EventTimeRecord getEventTimeRecord() { DARABONBA_PTR_GET(eventTimeRecord_, ApplyRecordList::EventTimeRecord) };
        inline ApplyRecordList& setEventTimeRecord(const ApplyRecordList::EventTimeRecord & eventTimeRecord) { DARABONBA_PTR_SET_VALUE(eventTimeRecord_, eventTimeRecord) };
        inline ApplyRecordList& setEventTimeRecord(ApplyRecordList::EventTimeRecord && eventTimeRecord) { DARABONBA_PTR_SET_RVALUE(eventTimeRecord_, eventTimeRecord) };


        // rejectReason Field Functions 
        bool hasRejectReason() const { return this->rejectReason_ != nullptr;};
        void deleteRejectReason() { this->rejectReason_ = nullptr;};
        inline string getRejectReason() const { DARABONBA_PTR_GET_DEFAULT(rejectReason_, "") };
        inline ApplyRecordList& setRejectReason(string rejectReason) { DARABONBA_PTR_SET_VALUE(rejectReason_, rejectReason) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline ApplyRecordList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ApplyRecordList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> approvalReason_ {};
        shared_ptr<ApplyRecordList::EventTimeRecord> eventTimeRecord_ {};
        shared_ptr<string> rejectReason_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->applyRecordList_ == nullptr
        && this->assistantTip_ == nullptr && this->blockIp_ == nullptr && this->direction_ == nullptr && this->dstIp_ == nullptr && this->dstPort_ == nullptr
        && this->eventId_ == nullptr && this->eventImpact_ == nullptr && this->leakName_ == nullptr && this->protocol_ == nullptr && this->punishReason_ == nullptr
        && this->snapshotUrl_ == nullptr && this->srcIp_ == nullptr && this->srcPort_ == nullptr && this->tip_ == nullptr; };
      // applyRecordList Field Functions 
      bool hasApplyRecordList() const { return this->applyRecordList_ != nullptr;};
      void deleteApplyRecordList() { this->applyRecordList_ = nullptr;};
      inline const vector<Data::ApplyRecordList> & getApplyRecordList() const { DARABONBA_PTR_GET_CONST(applyRecordList_, vector<Data::ApplyRecordList>) };
      inline vector<Data::ApplyRecordList> getApplyRecordList() { DARABONBA_PTR_GET(applyRecordList_, vector<Data::ApplyRecordList>) };
      inline Data& setApplyRecordList(const vector<Data::ApplyRecordList> & applyRecordList) { DARABONBA_PTR_SET_VALUE(applyRecordList_, applyRecordList) };
      inline Data& setApplyRecordList(vector<Data::ApplyRecordList> && applyRecordList) { DARABONBA_PTR_SET_RVALUE(applyRecordList_, applyRecordList) };


      // assistantTip Field Functions 
      bool hasAssistantTip() const { return this->assistantTip_ != nullptr;};
      void deleteAssistantTip() { this->assistantTip_ = nullptr;};
      inline string getAssistantTip() const { DARABONBA_PTR_GET_DEFAULT(assistantTip_, "") };
      inline Data& setAssistantTip(string assistantTip) { DARABONBA_PTR_SET_VALUE(assistantTip_, assistantTip) };


      // blockIp Field Functions 
      bool hasBlockIp() const { return this->blockIp_ != nullptr;};
      void deleteBlockIp() { this->blockIp_ = nullptr;};
      inline string getBlockIp() const { DARABONBA_PTR_GET_DEFAULT(blockIp_, "") };
      inline Data& setBlockIp(string blockIp) { DARABONBA_PTR_SET_VALUE(blockIp_, blockIp) };


      // direction Field Functions 
      bool hasDirection() const { return this->direction_ != nullptr;};
      void deleteDirection() { this->direction_ = nullptr;};
      inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
      inline Data& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


      // dstIp Field Functions 
      bool hasDstIp() const { return this->dstIp_ != nullptr;};
      void deleteDstIp() { this->dstIp_ = nullptr;};
      inline string getDstIp() const { DARABONBA_PTR_GET_DEFAULT(dstIp_, "") };
      inline Data& setDstIp(string dstIp) { DARABONBA_PTR_SET_VALUE(dstIp_, dstIp) };


      // dstPort Field Functions 
      bool hasDstPort() const { return this->dstPort_ != nullptr;};
      void deleteDstPort() { this->dstPort_ = nullptr;};
      inline string getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, "") };
      inline Data& setDstPort(string dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline Data& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventImpact Field Functions 
      bool hasEventImpact() const { return this->eventImpact_ != nullptr;};
      void deleteEventImpact() { this->eventImpact_ = nullptr;};
      inline string getEventImpact() const { DARABONBA_PTR_GET_DEFAULT(eventImpact_, "") };
      inline Data& setEventImpact(string eventImpact) { DARABONBA_PTR_SET_VALUE(eventImpact_, eventImpact) };


      // leakName Field Functions 
      bool hasLeakName() const { return this->leakName_ != nullptr;};
      void deleteLeakName() { this->leakName_ = nullptr;};
      inline string getLeakName() const { DARABONBA_PTR_GET_DEFAULT(leakName_, "") };
      inline Data& setLeakName(string leakName) { DARABONBA_PTR_SET_VALUE(leakName_, leakName) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // punishReason Field Functions 
      bool hasPunishReason() const { return this->punishReason_ != nullptr;};
      void deletePunishReason() { this->punishReason_ = nullptr;};
      inline string getPunishReason() const { DARABONBA_PTR_GET_DEFAULT(punishReason_, "") };
      inline Data& setPunishReason(string punishReason) { DARABONBA_PTR_SET_VALUE(punishReason_, punishReason) };


      // snapshotUrl Field Functions 
      bool hasSnapshotUrl() const { return this->snapshotUrl_ != nullptr;};
      void deleteSnapshotUrl() { this->snapshotUrl_ = nullptr;};
      inline string getSnapshotUrl() const { DARABONBA_PTR_GET_DEFAULT(snapshotUrl_, "") };
      inline Data& setSnapshotUrl(string snapshotUrl) { DARABONBA_PTR_SET_VALUE(snapshotUrl_, snapshotUrl) };


      // srcIp Field Functions 
      bool hasSrcIp() const { return this->srcIp_ != nullptr;};
      void deleteSrcIp() { this->srcIp_ = nullptr;};
      inline string getSrcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
      inline Data& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


      // srcPort Field Functions 
      bool hasSrcPort() const { return this->srcPort_ != nullptr;};
      void deleteSrcPort() { this->srcPort_ = nullptr;};
      inline string getSrcPort() const { DARABONBA_PTR_GET_DEFAULT(srcPort_, "") };
      inline Data& setSrcPort(string srcPort) { DARABONBA_PTR_SET_VALUE(srcPort_, srcPort) };


      // tip Field Functions 
      bool hasTip() const { return this->tip_ != nullptr;};
      void deleteTip() { this->tip_ = nullptr;};
      inline string getTip() const { DARABONBA_PTR_GET_DEFAULT(tip_, "") };
      inline Data& setTip(string tip) { DARABONBA_PTR_SET_VALUE(tip_, tip) };


    protected:
      shared_ptr<vector<Data::ApplyRecordList>> applyRecordList_ {};
      shared_ptr<string> assistantTip_ {};
      shared_ptr<string> blockIp_ {};
      shared_ptr<string> direction_ {};
      shared_ptr<string> dstIp_ {};
      shared_ptr<string> dstPort_ {};
      shared_ptr<string> eventId_ {};
      shared_ptr<string> eventImpact_ {};
      shared_ptr<string> leakName_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<string> punishReason_ {};
      shared_ptr<string> snapshotUrl_ {};
      shared_ptr<string> srcIp_ {};
      shared_ptr<string> srcPort_ {};
      shared_ptr<string> tip_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetResourceControlEventResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetResourceControlEventResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetResourceControlEventResponseBody::Data) };
    inline GetResourceControlEventResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetResourceControlEventResponseBody::Data) };
    inline GetResourceControlEventResponseBody& setData(const GetResourceControlEventResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetResourceControlEventResponseBody& setData(GetResourceControlEventResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetResourceControlEventResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceControlEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetResourceControlEventResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetResourceControlEventResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
