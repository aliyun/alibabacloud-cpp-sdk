// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKLISTCDRIBAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKLISTCDRIBAGENTRESPONSEBODY_HPP_
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
  class ClinkListCdrIbAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkListCdrIbAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkListCdrIbAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkListCdrIbAgentResponseBody() = default ;
    ClinkListCdrIbAgentResponseBody(const ClinkListCdrIbAgentResponseBody &) = default ;
    ClinkListCdrIbAgentResponseBody(ClinkListCdrIbAgentResponseBody &&) = default ;
    ClinkListCdrIbAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkListCdrIbAgentResponseBody() = default ;
    ClinkListCdrIbAgentResponseBody& operator=(const ClinkListCdrIbAgentResponseBody &) = default ;
    ClinkListCdrIbAgentResponseBody& operator=(ClinkListCdrIbAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CdrIbAgent, cdrIbAgent_);
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ScrollId, scrollId_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CdrIbAgent, cdrIbAgent_);
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ScrollId, scrollId_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class CdrIbAgent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CdrIbAgent& obj) { 
          DARABONBA_PTR_TO_JSON(AgentAnswerInTime, agentAnswerInTime_);
          DARABONBA_PTR_TO_JSON(AnswerTime, answerTime_);
          DARABONBA_PTR_TO_JSON(BindType, bindType_);
          DARABONBA_PTR_TO_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_TO_JSON(BridgeStatus, bridgeStatus_);
          DARABONBA_PTR_TO_JSON(BridgeStatusDetail, bridgeStatusDetail_);
          DARABONBA_PTR_TO_JSON(CallId, callId_);
          DARABONBA_PTR_TO_JSON(ClientName, clientName_);
          DARABONBA_PTR_TO_JSON(ClientNumber, clientNumber_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(CustomerCity, customerCity_);
          DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_TO_JSON(CustomerNumberEncrypt, customerNumberEncrypt_);
          DARABONBA_PTR_TO_JSON(CustomerProvince, customerProvince_);
          DARABONBA_PTR_TO_JSON(DetailCallType, detailCallType_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Hotline, hotline_);
          DARABONBA_PTR_TO_JSON(HotlineName, hotlineName_);
          DARABONBA_PTR_TO_JSON(IbRingingDuration, ibRingingDuration_);
          DARABONBA_PTR_TO_JSON(MainUniqueId, mainUniqueId_);
          DARABONBA_PTR_TO_JSON(OffhookTime, offhookTime_);
          DARABONBA_PTR_TO_JSON(OnHookSource, onHookSource_);
          DARABONBA_PTR_TO_JSON(Qname, qname_);
          DARABONBA_PTR_TO_JSON(Qno, qno_);
          DARABONBA_PTR_TO_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_TO_JSON(Remember, remember_);
          DARABONBA_PTR_TO_JSON(RingTime, ringTime_);
          DARABONBA_PTR_TO_JSON(SayVoiceDuration, sayVoiceDuration_);
          DARABONBA_PTR_TO_JSON(SipCauseDesc, sipCauseDesc_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
          DARABONBA_PTR_TO_JSON(WebrtcCallId, webrtcCallId_);
        };
        friend void from_json(const Darabonba::Json& j, CdrIbAgent& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentAnswerInTime, agentAnswerInTime_);
          DARABONBA_PTR_FROM_JSON(AnswerTime, answerTime_);
          DARABONBA_PTR_FROM_JSON(BindType, bindType_);
          DARABONBA_PTR_FROM_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_FROM_JSON(BridgeStatus, bridgeStatus_);
          DARABONBA_PTR_FROM_JSON(BridgeStatusDetail, bridgeStatusDetail_);
          DARABONBA_PTR_FROM_JSON(CallId, callId_);
          DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
          DARABONBA_PTR_FROM_JSON(ClientNumber, clientNumber_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(CustomerCity, customerCity_);
          DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_FROM_JSON(CustomerNumberEncrypt, customerNumberEncrypt_);
          DARABONBA_PTR_FROM_JSON(CustomerProvince, customerProvince_);
          DARABONBA_PTR_FROM_JSON(DetailCallType, detailCallType_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Hotline, hotline_);
          DARABONBA_PTR_FROM_JSON(HotlineName, hotlineName_);
          DARABONBA_PTR_FROM_JSON(IbRingingDuration, ibRingingDuration_);
          DARABONBA_PTR_FROM_JSON(MainUniqueId, mainUniqueId_);
          DARABONBA_PTR_FROM_JSON(OffhookTime, offhookTime_);
          DARABONBA_PTR_FROM_JSON(OnHookSource, onHookSource_);
          DARABONBA_PTR_FROM_JSON(Qname, qname_);
          DARABONBA_PTR_FROM_JSON(Qno, qno_);
          DARABONBA_PTR_FROM_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_FROM_JSON(Remember, remember_);
          DARABONBA_PTR_FROM_JSON(RingTime, ringTime_);
          DARABONBA_PTR_FROM_JSON(SayVoiceDuration, sayVoiceDuration_);
          DARABONBA_PTR_FROM_JSON(SipCauseDesc, sipCauseDesc_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
          DARABONBA_PTR_FROM_JSON(WebrtcCallId, webrtcCallId_);
        };
        CdrIbAgent() = default ;
        CdrIbAgent(const CdrIbAgent &) = default ;
        CdrIbAgent(CdrIbAgent &&) = default ;
        CdrIbAgent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CdrIbAgent() = default ;
        CdrIbAgent& operator=(const CdrIbAgent &) = default ;
        CdrIbAgent& operator=(CdrIbAgent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentAnswerInTime_ == nullptr
        && this->answerTime_ == nullptr && this->bindType_ == nullptr && this->bridgeDuration_ == nullptr && this->bridgeStatus_ == nullptr && this->bridgeStatusDetail_ == nullptr
        && this->callId_ == nullptr && this->clientName_ == nullptr && this->clientNumber_ == nullptr && this->cno_ == nullptr && this->customerCity_ == nullptr
        && this->customerNumber_ == nullptr && this->customerNumberEncrypt_ == nullptr && this->customerProvince_ == nullptr && this->detailCallType_ == nullptr && this->endTime_ == nullptr
        && this->hotline_ == nullptr && this->hotlineName_ == nullptr && this->ibRingingDuration_ == nullptr && this->mainUniqueId_ == nullptr && this->offhookTime_ == nullptr
        && this->onHookSource_ == nullptr && this->qname_ == nullptr && this->qno_ == nullptr && this->recordFile_ == nullptr && this->remember_ == nullptr
        && this->ringTime_ == nullptr && this->sayVoiceDuration_ == nullptr && this->sipCauseDesc_ == nullptr && this->startTime_ == nullptr && this->uniqueId_ == nullptr
        && this->webrtcCallId_ == nullptr; };
        // agentAnswerInTime Field Functions 
        bool hasAgentAnswerInTime() const { return this->agentAnswerInTime_ != nullptr;};
        void deleteAgentAnswerInTime() { this->agentAnswerInTime_ = nullptr;};
        inline int64_t getAgentAnswerInTime() const { DARABONBA_PTR_GET_DEFAULT(agentAnswerInTime_, 0L) };
        inline CdrIbAgent& setAgentAnswerInTime(int64_t agentAnswerInTime) { DARABONBA_PTR_SET_VALUE(agentAnswerInTime_, agentAnswerInTime) };


        // answerTime Field Functions 
        bool hasAnswerTime() const { return this->answerTime_ != nullptr;};
        void deleteAnswerTime() { this->answerTime_ = nullptr;};
        inline int64_t getAnswerTime() const { DARABONBA_PTR_GET_DEFAULT(answerTime_, 0L) };
        inline CdrIbAgent& setAnswerTime(int64_t answerTime) { DARABONBA_PTR_SET_VALUE(answerTime_, answerTime) };


        // bindType Field Functions 
        bool hasBindType() const { return this->bindType_ != nullptr;};
        void deleteBindType() { this->bindType_ = nullptr;};
        inline int64_t getBindType() const { DARABONBA_PTR_GET_DEFAULT(bindType_, 0L) };
        inline CdrIbAgent& setBindType(int64_t bindType) { DARABONBA_PTR_SET_VALUE(bindType_, bindType) };


        // bridgeDuration Field Functions 
        bool hasBridgeDuration() const { return this->bridgeDuration_ != nullptr;};
        void deleteBridgeDuration() { this->bridgeDuration_ = nullptr;};
        inline int64_t getBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(bridgeDuration_, 0L) };
        inline CdrIbAgent& setBridgeDuration(int64_t bridgeDuration) { DARABONBA_PTR_SET_VALUE(bridgeDuration_, bridgeDuration) };


        // bridgeStatus Field Functions 
        bool hasBridgeStatus() const { return this->bridgeStatus_ != nullptr;};
        void deleteBridgeStatus() { this->bridgeStatus_ = nullptr;};
        inline string getBridgeStatus() const { DARABONBA_PTR_GET_DEFAULT(bridgeStatus_, "") };
        inline CdrIbAgent& setBridgeStatus(string bridgeStatus) { DARABONBA_PTR_SET_VALUE(bridgeStatus_, bridgeStatus) };


        // bridgeStatusDetail Field Functions 
        bool hasBridgeStatusDetail() const { return this->bridgeStatusDetail_ != nullptr;};
        void deleteBridgeStatusDetail() { this->bridgeStatusDetail_ = nullptr;};
        inline string getBridgeStatusDetail() const { DARABONBA_PTR_GET_DEFAULT(bridgeStatusDetail_, "") };
        inline CdrIbAgent& setBridgeStatusDetail(string bridgeStatusDetail) { DARABONBA_PTR_SET_VALUE(bridgeStatusDetail_, bridgeStatusDetail) };


        // callId Field Functions 
        bool hasCallId() const { return this->callId_ != nullptr;};
        void deleteCallId() { this->callId_ = nullptr;};
        inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
        inline CdrIbAgent& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


        // clientName Field Functions 
        bool hasClientName() const { return this->clientName_ != nullptr;};
        void deleteClientName() { this->clientName_ = nullptr;};
        inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
        inline CdrIbAgent& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


        // clientNumber Field Functions 
        bool hasClientNumber() const { return this->clientNumber_ != nullptr;};
        void deleteClientNumber() { this->clientNumber_ = nullptr;};
        inline string getClientNumber() const { DARABONBA_PTR_GET_DEFAULT(clientNumber_, "") };
        inline CdrIbAgent& setClientNumber(string clientNumber) { DARABONBA_PTR_SET_VALUE(clientNumber_, clientNumber) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline CdrIbAgent& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // customerCity Field Functions 
        bool hasCustomerCity() const { return this->customerCity_ != nullptr;};
        void deleteCustomerCity() { this->customerCity_ = nullptr;};
        inline string getCustomerCity() const { DARABONBA_PTR_GET_DEFAULT(customerCity_, "") };
        inline CdrIbAgent& setCustomerCity(string customerCity) { DARABONBA_PTR_SET_VALUE(customerCity_, customerCity) };


        // customerNumber Field Functions 
        bool hasCustomerNumber() const { return this->customerNumber_ != nullptr;};
        void deleteCustomerNumber() { this->customerNumber_ = nullptr;};
        inline string getCustomerNumber() const { DARABONBA_PTR_GET_DEFAULT(customerNumber_, "") };
        inline CdrIbAgent& setCustomerNumber(string customerNumber) { DARABONBA_PTR_SET_VALUE(customerNumber_, customerNumber) };


        // customerNumberEncrypt Field Functions 
        bool hasCustomerNumberEncrypt() const { return this->customerNumberEncrypt_ != nullptr;};
        void deleteCustomerNumberEncrypt() { this->customerNumberEncrypt_ = nullptr;};
        inline string getCustomerNumberEncrypt() const { DARABONBA_PTR_GET_DEFAULT(customerNumberEncrypt_, "") };
        inline CdrIbAgent& setCustomerNumberEncrypt(string customerNumberEncrypt) { DARABONBA_PTR_SET_VALUE(customerNumberEncrypt_, customerNumberEncrypt) };


        // customerProvince Field Functions 
        bool hasCustomerProvince() const { return this->customerProvince_ != nullptr;};
        void deleteCustomerProvince() { this->customerProvince_ = nullptr;};
        inline string getCustomerProvince() const { DARABONBA_PTR_GET_DEFAULT(customerProvince_, "") };
        inline CdrIbAgent& setCustomerProvince(string customerProvince) { DARABONBA_PTR_SET_VALUE(customerProvince_, customerProvince) };


        // detailCallType Field Functions 
        bool hasDetailCallType() const { return this->detailCallType_ != nullptr;};
        void deleteDetailCallType() { this->detailCallType_ = nullptr;};
        inline string getDetailCallType() const { DARABONBA_PTR_GET_DEFAULT(detailCallType_, "") };
        inline CdrIbAgent& setDetailCallType(string detailCallType) { DARABONBA_PTR_SET_VALUE(detailCallType_, detailCallType) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline CdrIbAgent& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // hotline Field Functions 
        bool hasHotline() const { return this->hotline_ != nullptr;};
        void deleteHotline() { this->hotline_ = nullptr;};
        inline string getHotline() const { DARABONBA_PTR_GET_DEFAULT(hotline_, "") };
        inline CdrIbAgent& setHotline(string hotline) { DARABONBA_PTR_SET_VALUE(hotline_, hotline) };


        // hotlineName Field Functions 
        bool hasHotlineName() const { return this->hotlineName_ != nullptr;};
        void deleteHotlineName() { this->hotlineName_ = nullptr;};
        inline string getHotlineName() const { DARABONBA_PTR_GET_DEFAULT(hotlineName_, "") };
        inline CdrIbAgent& setHotlineName(string hotlineName) { DARABONBA_PTR_SET_VALUE(hotlineName_, hotlineName) };


        // ibRingingDuration Field Functions 
        bool hasIbRingingDuration() const { return this->ibRingingDuration_ != nullptr;};
        void deleteIbRingingDuration() { this->ibRingingDuration_ = nullptr;};
        inline int64_t getIbRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(ibRingingDuration_, 0L) };
        inline CdrIbAgent& setIbRingingDuration(int64_t ibRingingDuration) { DARABONBA_PTR_SET_VALUE(ibRingingDuration_, ibRingingDuration) };


        // mainUniqueId Field Functions 
        bool hasMainUniqueId() const { return this->mainUniqueId_ != nullptr;};
        void deleteMainUniqueId() { this->mainUniqueId_ = nullptr;};
        inline string getMainUniqueId() const { DARABONBA_PTR_GET_DEFAULT(mainUniqueId_, "") };
        inline CdrIbAgent& setMainUniqueId(string mainUniqueId) { DARABONBA_PTR_SET_VALUE(mainUniqueId_, mainUniqueId) };


        // offhookTime Field Functions 
        bool hasOffhookTime() const { return this->offhookTime_ != nullptr;};
        void deleteOffhookTime() { this->offhookTime_ = nullptr;};
        inline int64_t getOffhookTime() const { DARABONBA_PTR_GET_DEFAULT(offhookTime_, 0L) };
        inline CdrIbAgent& setOffhookTime(int64_t offhookTime) { DARABONBA_PTR_SET_VALUE(offhookTime_, offhookTime) };


        // onHookSource Field Functions 
        bool hasOnHookSource() const { return this->onHookSource_ != nullptr;};
        void deleteOnHookSource() { this->onHookSource_ = nullptr;};
        inline string getOnHookSource() const { DARABONBA_PTR_GET_DEFAULT(onHookSource_, "") };
        inline CdrIbAgent& setOnHookSource(string onHookSource) { DARABONBA_PTR_SET_VALUE(onHookSource_, onHookSource) };


        // qname Field Functions 
        bool hasQname() const { return this->qname_ != nullptr;};
        void deleteQname() { this->qname_ = nullptr;};
        inline string getQname() const { DARABONBA_PTR_GET_DEFAULT(qname_, "") };
        inline CdrIbAgent& setQname(string qname) { DARABONBA_PTR_SET_VALUE(qname_, qname) };


        // qno Field Functions 
        bool hasQno() const { return this->qno_ != nullptr;};
        void deleteQno() { this->qno_ = nullptr;};
        inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
        inline CdrIbAgent& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


        // recordFile Field Functions 
        bool hasRecordFile() const { return this->recordFile_ != nullptr;};
        void deleteRecordFile() { this->recordFile_ = nullptr;};
        inline string getRecordFile() const { DARABONBA_PTR_GET_DEFAULT(recordFile_, "") };
        inline CdrIbAgent& setRecordFile(string recordFile) { DARABONBA_PTR_SET_VALUE(recordFile_, recordFile) };


        // remember Field Functions 
        bool hasRemember() const { return this->remember_ != nullptr;};
        void deleteRemember() { this->remember_ = nullptr;};
        inline string getRemember() const { DARABONBA_PTR_GET_DEFAULT(remember_, "") };
        inline CdrIbAgent& setRemember(string remember) { DARABONBA_PTR_SET_VALUE(remember_, remember) };


        // ringTime Field Functions 
        bool hasRingTime() const { return this->ringTime_ != nullptr;};
        void deleteRingTime() { this->ringTime_ = nullptr;};
        inline int64_t getRingTime() const { DARABONBA_PTR_GET_DEFAULT(ringTime_, 0L) };
        inline CdrIbAgent& setRingTime(int64_t ringTime) { DARABONBA_PTR_SET_VALUE(ringTime_, ringTime) };


        // sayVoiceDuration Field Functions 
        bool hasSayVoiceDuration() const { return this->sayVoiceDuration_ != nullptr;};
        void deleteSayVoiceDuration() { this->sayVoiceDuration_ = nullptr;};
        inline int64_t getSayVoiceDuration() const { DARABONBA_PTR_GET_DEFAULT(sayVoiceDuration_, 0L) };
        inline CdrIbAgent& setSayVoiceDuration(int64_t sayVoiceDuration) { DARABONBA_PTR_SET_VALUE(sayVoiceDuration_, sayVoiceDuration) };


        // sipCauseDesc Field Functions 
        bool hasSipCauseDesc() const { return this->sipCauseDesc_ != nullptr;};
        void deleteSipCauseDesc() { this->sipCauseDesc_ = nullptr;};
        inline string getSipCauseDesc() const { DARABONBA_PTR_GET_DEFAULT(sipCauseDesc_, "") };
        inline CdrIbAgent& setSipCauseDesc(string sipCauseDesc) { DARABONBA_PTR_SET_VALUE(sipCauseDesc_, sipCauseDesc) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline CdrIbAgent& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // uniqueId Field Functions 
        bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
        void deleteUniqueId() { this->uniqueId_ = nullptr;};
        inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
        inline CdrIbAgent& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


        // webrtcCallId Field Functions 
        bool hasWebrtcCallId() const { return this->webrtcCallId_ != nullptr;};
        void deleteWebrtcCallId() { this->webrtcCallId_ = nullptr;};
        inline string getWebrtcCallId() const { DARABONBA_PTR_GET_DEFAULT(webrtcCallId_, "") };
        inline CdrIbAgent& setWebrtcCallId(string webrtcCallId) { DARABONBA_PTR_SET_VALUE(webrtcCallId_, webrtcCallId) };


      protected:
        // 及时应答
        shared_ptr<int64_t> agentAnswerInTime_ {};
        // 接听时间
        shared_ptr<int64_t> answerTime_ {};
        // 接听设备
        shared_ptr<int64_t> bindType_ {};
        // 通话时长
        shared_ptr<int64_t> bridgeDuration_ {};
        // 接听状态
        shared_ptr<string> bridgeStatus_ {};
        // 呼叫结果
        shared_ptr<string> bridgeStatusDetail_ {};
        // CallID
        shared_ptr<string> callId_ {};
        // 座席名称
        shared_ptr<string> clientName_ {};
        // 座席电话
        shared_ptr<string> clientNumber_ {};
        // 座席号
        shared_ptr<string> cno_ {};
        // 客户号码城市
        shared_ptr<string> customerCity_ {};
        // 客户号码，带区号
        shared_ptr<string> customerNumber_ {};
        // 客户号码加密串
        shared_ptr<string> customerNumberEncrypt_ {};
        // 客户号码省份
        shared_ptr<string> customerProvince_ {};
        // 呼叫类型
        shared_ptr<string> detailCallType_ {};
        // 结束时间
        shared_ptr<int64_t> endTime_ {};
        // 热线号码
        shared_ptr<string> hotline_ {};
        // 热线别名
        shared_ptr<string> hotlineName_ {};
        // 振铃时长
        shared_ptr<int64_t> ibRingingDuration_ {};
        // 通话ID
        shared_ptr<string> mainUniqueId_ {};
        // 座席接起时间
        shared_ptr<int64_t> offhookTime_ {};
        // 挂断方
        shared_ptr<string> onHookSource_ {};
        // 来电队列名称
        shared_ptr<string> qname_ {};
        // 来电队列号
        shared_ptr<string> qno_ {};
        // 录音文件名
        shared_ptr<string> recordFile_ {};
        // 主叫记忆。obRemember: 外呼主叫记忆，ibRemember: 来电主叫记忆
        shared_ptr<string> remember_ {};
        // 振铃时间
        shared_ptr<int64_t> ringTime_ {};
        // 语音播报时长
        shared_ptr<int64_t> sayVoiceDuration_ {};
        // 呼叫情况
        shared_ptr<string> sipCauseDesc_ {};
        // 开始时间
        shared_ptr<int64_t> startTime_ {};
        // 唯一标识
        shared_ptr<string> uniqueId_ {};
        // WebRTCCallID
        shared_ptr<string> webrtcCallId_ {};
      };

      virtual bool empty() const override { return this->cdrIbAgent_ == nullptr
        && this->clinkRequestId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->scrollId_ == nullptr && this->totalCount_ == nullptr; };
      // cdrIbAgent Field Functions 
      bool hasCdrIbAgent() const { return this->cdrIbAgent_ != nullptr;};
      void deleteCdrIbAgent() { this->cdrIbAgent_ = nullptr;};
      inline const vector<Data::CdrIbAgent> & getCdrIbAgent() const { DARABONBA_PTR_GET_CONST(cdrIbAgent_, vector<Data::CdrIbAgent>) };
      inline vector<Data::CdrIbAgent> getCdrIbAgent() { DARABONBA_PTR_GET(cdrIbAgent_, vector<Data::CdrIbAgent>) };
      inline Data& setCdrIbAgent(const vector<Data::CdrIbAgent> & cdrIbAgent) { DARABONBA_PTR_SET_VALUE(cdrIbAgent_, cdrIbAgent) };
      inline Data& setCdrIbAgent(vector<Data::CdrIbAgent> && cdrIbAgent) { DARABONBA_PTR_SET_RVALUE(cdrIbAgent_, cdrIbAgent) };


      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // scrollId Field Functions 
      bool hasScrollId() const { return this->scrollId_ != nullptr;};
      void deleteScrollId() { this->scrollId_ = nullptr;};
      inline string getScrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
      inline Data& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // [座席接听记录列表] #座席接听记录列表
      shared_ptr<vector<Data::CdrIbAgent>> cdrIbAgent_ {};
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
      // 当前页码
      shared_ptr<int64_t> pageNumber_ {};
      // 一页展示条数
      shared_ptr<int64_t> pageSize_ {};
      // 滚动查询ID
      shared_ptr<string> scrollId_ {};
      // 总条数
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkListCdrIbAgentResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkListCdrIbAgentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkListCdrIbAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkListCdrIbAgentResponseBody::Data) };
    inline ClinkListCdrIbAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkListCdrIbAgentResponseBody::Data) };
    inline ClinkListCdrIbAgentResponseBody& setData(const ClinkListCdrIbAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkListCdrIbAgentResponseBody& setData(ClinkListCdrIbAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkListCdrIbAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkListCdrIbAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkListCdrIbAgentResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
