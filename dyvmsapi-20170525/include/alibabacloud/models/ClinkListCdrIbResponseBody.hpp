// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKLISTCDRIBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKLISTCDRIBRESPONSEBODY_HPP_
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
  class ClinkListCdrIbResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkListCdrIbResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkListCdrIbResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkListCdrIbResponseBody() = default ;
    ClinkListCdrIbResponseBody(const ClinkListCdrIbResponseBody &) = default ;
    ClinkListCdrIbResponseBody(ClinkListCdrIbResponseBody &&) = default ;
    ClinkListCdrIbResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkListCdrIbResponseBody() = default ;
    ClinkListCdrIbResponseBody& operator=(const ClinkListCdrIbResponseBody &) = default ;
    ClinkListCdrIbResponseBody& operator=(ClinkListCdrIbResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CdrIb, cdrIb_);
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ScrollId, scrollId_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CdrIb, cdrIb_);
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
      class CdrIb : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CdrIb& obj) { 
          DARABONBA_PTR_TO_JSON(AgentAnswerInTime, agentAnswerInTime_);
          DARABONBA_PTR_TO_JSON(BindType, bindType_);
          DARABONBA_PTR_TO_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_TO_JSON(BridgeTime, bridgeTime_);
          DARABONBA_PTR_TO_JSON(BusinessIds, businessIds_);
          DARABONBA_PTR_TO_JSON(CallId, callId_);
          DARABONBA_PTR_TO_JSON(CustomerCity, customerCity_);
          DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_TO_JSON(CustomerNumberEncrypt, customerNumberEncrypt_);
          DARABONBA_PTR_TO_JSON(CustomerProvince, customerProvince_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Evaluation, evaluation_);
          DARABONBA_PTR_TO_JSON(FirstCallCname, firstCallCname_);
          DARABONBA_PTR_TO_JSON(FirstCallCno, firstCallCno_);
          DARABONBA_PTR_TO_JSON(FirstCallNumber, firstCallNumber_);
          DARABONBA_PTR_TO_JSON(FirstCallQname, firstCallQname_);
          DARABONBA_PTR_TO_JSON(FirstCallQno, firstCallQno_);
          DARABONBA_PTR_TO_JSON(FirstJoinQueueTime, firstJoinQueueTime_);
          DARABONBA_PTR_TO_JSON(FirstLeaveQueueTime, firstLeaveQueueTime_);
          DARABONBA_PTR_TO_JSON(FirstQueueDuration, firstQueueDuration_);
          DARABONBA_PTR_TO_JSON(Hotline, hotline_);
          DARABONBA_PTR_TO_JSON(HotlineName, hotlineName_);
          DARABONBA_PTR_TO_JSON(InvestigationKeys, investigationKeys_);
          DARABONBA_PTR_TO_JSON(IvrName, ivrName_);
          DARABONBA_PTR_TO_JSON(MainUniqueId, mainUniqueId_);
          DARABONBA_PTR_TO_JSON(MarkData, markData_);
          DARABONBA_PTR_TO_JSON(OnHookSource, onHookSource_);
          DARABONBA_PTR_TO_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_TO_JSON(RtcUid, rtcUid_);
          DARABONBA_PTR_TO_JSON(SayVoiceDuration, sayVoiceDuration_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusResult, statusResult_);
          DARABONBA_PTR_TO_JSON(StatusRobot, statusRobot_);
          DARABONBA_PTR_TO_JSON(TagNames, tagNames_);
          DARABONBA_PTR_TO_JSON(TicketIds, ticketIds_);
          DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_TO_JSON(UserField, userField_);
          DARABONBA_PTR_TO_JSON(WebrtcCallId, webrtcCallId_);
          DARABONBA_PTR_TO_JSON(Xnumber, xnumber_);
        };
        friend void from_json(const Darabonba::Json& j, CdrIb& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentAnswerInTime, agentAnswerInTime_);
          DARABONBA_PTR_FROM_JSON(BindType, bindType_);
          DARABONBA_PTR_FROM_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_FROM_JSON(BridgeTime, bridgeTime_);
          DARABONBA_PTR_FROM_JSON(BusinessIds, businessIds_);
          DARABONBA_PTR_FROM_JSON(CallId, callId_);
          DARABONBA_PTR_FROM_JSON(CustomerCity, customerCity_);
          DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_FROM_JSON(CustomerNumberEncrypt, customerNumberEncrypt_);
          DARABONBA_PTR_FROM_JSON(CustomerProvince, customerProvince_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Evaluation, evaluation_);
          DARABONBA_PTR_FROM_JSON(FirstCallCname, firstCallCname_);
          DARABONBA_PTR_FROM_JSON(FirstCallCno, firstCallCno_);
          DARABONBA_PTR_FROM_JSON(FirstCallNumber, firstCallNumber_);
          DARABONBA_PTR_FROM_JSON(FirstCallQname, firstCallQname_);
          DARABONBA_PTR_FROM_JSON(FirstCallQno, firstCallQno_);
          DARABONBA_PTR_FROM_JSON(FirstJoinQueueTime, firstJoinQueueTime_);
          DARABONBA_PTR_FROM_JSON(FirstLeaveQueueTime, firstLeaveQueueTime_);
          DARABONBA_PTR_FROM_JSON(FirstQueueDuration, firstQueueDuration_);
          DARABONBA_PTR_FROM_JSON(Hotline, hotline_);
          DARABONBA_PTR_FROM_JSON(HotlineName, hotlineName_);
          DARABONBA_PTR_FROM_JSON(InvestigationKeys, investigationKeys_);
          DARABONBA_PTR_FROM_JSON(IvrName, ivrName_);
          DARABONBA_PTR_FROM_JSON(MainUniqueId, mainUniqueId_);
          DARABONBA_PTR_FROM_JSON(MarkData, markData_);
          DARABONBA_PTR_FROM_JSON(OnHookSource, onHookSource_);
          DARABONBA_PTR_FROM_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_FROM_JSON(RtcUid, rtcUid_);
          DARABONBA_PTR_FROM_JSON(SayVoiceDuration, sayVoiceDuration_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusResult, statusResult_);
          DARABONBA_PTR_FROM_JSON(StatusRobot, statusRobot_);
          DARABONBA_PTR_FROM_JSON(TagNames, tagNames_);
          DARABONBA_PTR_FROM_JSON(TicketIds, ticketIds_);
          DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_FROM_JSON(UserField, userField_);
          DARABONBA_PTR_FROM_JSON(WebrtcCallId, webrtcCallId_);
          DARABONBA_PTR_FROM_JSON(Xnumber, xnumber_);
        };
        CdrIb() = default ;
        CdrIb(const CdrIb &) = default ;
        CdrIb(CdrIb &&) = default ;
        CdrIb(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CdrIb() = default ;
        CdrIb& operator=(const CdrIb &) = default ;
        CdrIb& operator=(CdrIb &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentAnswerInTime_ == nullptr
        && this->bindType_ == nullptr && this->bridgeDuration_ == nullptr && this->bridgeTime_ == nullptr && this->businessIds_ == nullptr && this->callId_ == nullptr
        && this->customerCity_ == nullptr && this->customerNumber_ == nullptr && this->customerNumberEncrypt_ == nullptr && this->customerProvince_ == nullptr && this->endTime_ == nullptr
        && this->evaluation_ == nullptr && this->firstCallCname_ == nullptr && this->firstCallCno_ == nullptr && this->firstCallNumber_ == nullptr && this->firstCallQname_ == nullptr
        && this->firstCallQno_ == nullptr && this->firstJoinQueueTime_ == nullptr && this->firstLeaveQueueTime_ == nullptr && this->firstQueueDuration_ == nullptr && this->hotline_ == nullptr
        && this->hotlineName_ == nullptr && this->investigationKeys_ == nullptr && this->ivrName_ == nullptr && this->mainUniqueId_ == nullptr && this->markData_ == nullptr
        && this->onHookSource_ == nullptr && this->recordFile_ == nullptr && this->rtcUid_ == nullptr && this->sayVoiceDuration_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->statusResult_ == nullptr && this->statusRobot_ == nullptr && this->tagNames_ == nullptr && this->ticketIds_ == nullptr
        && this->totalDuration_ == nullptr && this->userField_ == nullptr && this->webrtcCallId_ == nullptr && this->xnumber_ == nullptr; };
        // agentAnswerInTime Field Functions 
        bool hasAgentAnswerInTime() const { return this->agentAnswerInTime_ != nullptr;};
        void deleteAgentAnswerInTime() { this->agentAnswerInTime_ = nullptr;};
        inline string getAgentAnswerInTime() const { DARABONBA_PTR_GET_DEFAULT(agentAnswerInTime_, "") };
        inline CdrIb& setAgentAnswerInTime(string agentAnswerInTime) { DARABONBA_PTR_SET_VALUE(agentAnswerInTime_, agentAnswerInTime) };


        // bindType Field Functions 
        bool hasBindType() const { return this->bindType_ != nullptr;};
        void deleteBindType() { this->bindType_ = nullptr;};
        inline int64_t getBindType() const { DARABONBA_PTR_GET_DEFAULT(bindType_, 0L) };
        inline CdrIb& setBindType(int64_t bindType) { DARABONBA_PTR_SET_VALUE(bindType_, bindType) };


        // bridgeDuration Field Functions 
        bool hasBridgeDuration() const { return this->bridgeDuration_ != nullptr;};
        void deleteBridgeDuration() { this->bridgeDuration_ = nullptr;};
        inline int64_t getBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(bridgeDuration_, 0L) };
        inline CdrIb& setBridgeDuration(int64_t bridgeDuration) { DARABONBA_PTR_SET_VALUE(bridgeDuration_, bridgeDuration) };


        // bridgeTime Field Functions 
        bool hasBridgeTime() const { return this->bridgeTime_ != nullptr;};
        void deleteBridgeTime() { this->bridgeTime_ = nullptr;};
        inline int64_t getBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(bridgeTime_, 0L) };
        inline CdrIb& setBridgeTime(int64_t bridgeTime) { DARABONBA_PTR_SET_VALUE(bridgeTime_, bridgeTime) };


        // businessIds Field Functions 
        bool hasBusinessIds() const { return this->businessIds_ != nullptr;};
        void deleteBusinessIds() { this->businessIds_ = nullptr;};
        inline const vector<string> & getBusinessIds() const { DARABONBA_PTR_GET_CONST(businessIds_, vector<string>) };
        inline vector<string> getBusinessIds() { DARABONBA_PTR_GET(businessIds_, vector<string>) };
        inline CdrIb& setBusinessIds(const vector<string> & businessIds) { DARABONBA_PTR_SET_VALUE(businessIds_, businessIds) };
        inline CdrIb& setBusinessIds(vector<string> && businessIds) { DARABONBA_PTR_SET_RVALUE(businessIds_, businessIds) };


        // callId Field Functions 
        bool hasCallId() const { return this->callId_ != nullptr;};
        void deleteCallId() { this->callId_ = nullptr;};
        inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
        inline CdrIb& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


        // customerCity Field Functions 
        bool hasCustomerCity() const { return this->customerCity_ != nullptr;};
        void deleteCustomerCity() { this->customerCity_ = nullptr;};
        inline string getCustomerCity() const { DARABONBA_PTR_GET_DEFAULT(customerCity_, "") };
        inline CdrIb& setCustomerCity(string customerCity) { DARABONBA_PTR_SET_VALUE(customerCity_, customerCity) };


        // customerNumber Field Functions 
        bool hasCustomerNumber() const { return this->customerNumber_ != nullptr;};
        void deleteCustomerNumber() { this->customerNumber_ = nullptr;};
        inline string getCustomerNumber() const { DARABONBA_PTR_GET_DEFAULT(customerNumber_, "") };
        inline CdrIb& setCustomerNumber(string customerNumber) { DARABONBA_PTR_SET_VALUE(customerNumber_, customerNumber) };


        // customerNumberEncrypt Field Functions 
        bool hasCustomerNumberEncrypt() const { return this->customerNumberEncrypt_ != nullptr;};
        void deleteCustomerNumberEncrypt() { this->customerNumberEncrypt_ = nullptr;};
        inline string getCustomerNumberEncrypt() const { DARABONBA_PTR_GET_DEFAULT(customerNumberEncrypt_, "") };
        inline CdrIb& setCustomerNumberEncrypt(string customerNumberEncrypt) { DARABONBA_PTR_SET_VALUE(customerNumberEncrypt_, customerNumberEncrypt) };


        // customerProvince Field Functions 
        bool hasCustomerProvince() const { return this->customerProvince_ != nullptr;};
        void deleteCustomerProvince() { this->customerProvince_ = nullptr;};
        inline string getCustomerProvince() const { DARABONBA_PTR_GET_DEFAULT(customerProvince_, "") };
        inline CdrIb& setCustomerProvince(string customerProvince) { DARABONBA_PTR_SET_VALUE(customerProvince_, customerProvince) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline CdrIb& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // evaluation Field Functions 
        bool hasEvaluation() const { return this->evaluation_ != nullptr;};
        void deleteEvaluation() { this->evaluation_ = nullptr;};
        inline string getEvaluation() const { DARABONBA_PTR_GET_DEFAULT(evaluation_, "") };
        inline CdrIb& setEvaluation(string evaluation) { DARABONBA_PTR_SET_VALUE(evaluation_, evaluation) };


        // firstCallCname Field Functions 
        bool hasFirstCallCname() const { return this->firstCallCname_ != nullptr;};
        void deleteFirstCallCname() { this->firstCallCname_ = nullptr;};
        inline string getFirstCallCname() const { DARABONBA_PTR_GET_DEFAULT(firstCallCname_, "") };
        inline CdrIb& setFirstCallCname(string firstCallCname) { DARABONBA_PTR_SET_VALUE(firstCallCname_, firstCallCname) };


        // firstCallCno Field Functions 
        bool hasFirstCallCno() const { return this->firstCallCno_ != nullptr;};
        void deleteFirstCallCno() { this->firstCallCno_ = nullptr;};
        inline string getFirstCallCno() const { DARABONBA_PTR_GET_DEFAULT(firstCallCno_, "") };
        inline CdrIb& setFirstCallCno(string firstCallCno) { DARABONBA_PTR_SET_VALUE(firstCallCno_, firstCallCno) };


        // firstCallNumber Field Functions 
        bool hasFirstCallNumber() const { return this->firstCallNumber_ != nullptr;};
        void deleteFirstCallNumber() { this->firstCallNumber_ = nullptr;};
        inline string getFirstCallNumber() const { DARABONBA_PTR_GET_DEFAULT(firstCallNumber_, "") };
        inline CdrIb& setFirstCallNumber(string firstCallNumber) { DARABONBA_PTR_SET_VALUE(firstCallNumber_, firstCallNumber) };


        // firstCallQname Field Functions 
        bool hasFirstCallQname() const { return this->firstCallQname_ != nullptr;};
        void deleteFirstCallQname() { this->firstCallQname_ = nullptr;};
        inline string getFirstCallQname() const { DARABONBA_PTR_GET_DEFAULT(firstCallQname_, "") };
        inline CdrIb& setFirstCallQname(string firstCallQname) { DARABONBA_PTR_SET_VALUE(firstCallQname_, firstCallQname) };


        // firstCallQno Field Functions 
        bool hasFirstCallQno() const { return this->firstCallQno_ != nullptr;};
        void deleteFirstCallQno() { this->firstCallQno_ = nullptr;};
        inline string getFirstCallQno() const { DARABONBA_PTR_GET_DEFAULT(firstCallQno_, "") };
        inline CdrIb& setFirstCallQno(string firstCallQno) { DARABONBA_PTR_SET_VALUE(firstCallQno_, firstCallQno) };


        // firstJoinQueueTime Field Functions 
        bool hasFirstJoinQueueTime() const { return this->firstJoinQueueTime_ != nullptr;};
        void deleteFirstJoinQueueTime() { this->firstJoinQueueTime_ = nullptr;};
        inline int64_t getFirstJoinQueueTime() const { DARABONBA_PTR_GET_DEFAULT(firstJoinQueueTime_, 0L) };
        inline CdrIb& setFirstJoinQueueTime(int64_t firstJoinQueueTime) { DARABONBA_PTR_SET_VALUE(firstJoinQueueTime_, firstJoinQueueTime) };


        // firstLeaveQueueTime Field Functions 
        bool hasFirstLeaveQueueTime() const { return this->firstLeaveQueueTime_ != nullptr;};
        void deleteFirstLeaveQueueTime() { this->firstLeaveQueueTime_ = nullptr;};
        inline int64_t getFirstLeaveQueueTime() const { DARABONBA_PTR_GET_DEFAULT(firstLeaveQueueTime_, 0L) };
        inline CdrIb& setFirstLeaveQueueTime(int64_t firstLeaveQueueTime) { DARABONBA_PTR_SET_VALUE(firstLeaveQueueTime_, firstLeaveQueueTime) };


        // firstQueueDuration Field Functions 
        bool hasFirstQueueDuration() const { return this->firstQueueDuration_ != nullptr;};
        void deleteFirstQueueDuration() { this->firstQueueDuration_ = nullptr;};
        inline int64_t getFirstQueueDuration() const { DARABONBA_PTR_GET_DEFAULT(firstQueueDuration_, 0L) };
        inline CdrIb& setFirstQueueDuration(int64_t firstQueueDuration) { DARABONBA_PTR_SET_VALUE(firstQueueDuration_, firstQueueDuration) };


        // hotline Field Functions 
        bool hasHotline() const { return this->hotline_ != nullptr;};
        void deleteHotline() { this->hotline_ = nullptr;};
        inline string getHotline() const { DARABONBA_PTR_GET_DEFAULT(hotline_, "") };
        inline CdrIb& setHotline(string hotline) { DARABONBA_PTR_SET_VALUE(hotline_, hotline) };


        // hotlineName Field Functions 
        bool hasHotlineName() const { return this->hotlineName_ != nullptr;};
        void deleteHotlineName() { this->hotlineName_ = nullptr;};
        inline string getHotlineName() const { DARABONBA_PTR_GET_DEFAULT(hotlineName_, "") };
        inline CdrIb& setHotlineName(string hotlineName) { DARABONBA_PTR_SET_VALUE(hotlineName_, hotlineName) };


        // investigationKeys Field Functions 
        bool hasInvestigationKeys() const { return this->investigationKeys_ != nullptr;};
        void deleteInvestigationKeys() { this->investigationKeys_ = nullptr;};
        inline int64_t getInvestigationKeys() const { DARABONBA_PTR_GET_DEFAULT(investigationKeys_, 0L) };
        inline CdrIb& setInvestigationKeys(int64_t investigationKeys) { DARABONBA_PTR_SET_VALUE(investigationKeys_, investigationKeys) };


        // ivrName Field Functions 
        bool hasIvrName() const { return this->ivrName_ != nullptr;};
        void deleteIvrName() { this->ivrName_ = nullptr;};
        inline string getIvrName() const { DARABONBA_PTR_GET_DEFAULT(ivrName_, "") };
        inline CdrIb& setIvrName(string ivrName) { DARABONBA_PTR_SET_VALUE(ivrName_, ivrName) };


        // mainUniqueId Field Functions 
        bool hasMainUniqueId() const { return this->mainUniqueId_ != nullptr;};
        void deleteMainUniqueId() { this->mainUniqueId_ = nullptr;};
        inline string getMainUniqueId() const { DARABONBA_PTR_GET_DEFAULT(mainUniqueId_, "") };
        inline CdrIb& setMainUniqueId(string mainUniqueId) { DARABONBA_PTR_SET_VALUE(mainUniqueId_, mainUniqueId) };


        // markData Field Functions 
        bool hasMarkData() const { return this->markData_ != nullptr;};
        void deleteMarkData() { this->markData_ = nullptr;};
        inline string getMarkData() const { DARABONBA_PTR_GET_DEFAULT(markData_, "") };
        inline CdrIb& setMarkData(string markData) { DARABONBA_PTR_SET_VALUE(markData_, markData) };


        // onHookSource Field Functions 
        bool hasOnHookSource() const { return this->onHookSource_ != nullptr;};
        void deleteOnHookSource() { this->onHookSource_ = nullptr;};
        inline string getOnHookSource() const { DARABONBA_PTR_GET_DEFAULT(onHookSource_, "") };
        inline CdrIb& setOnHookSource(string onHookSource) { DARABONBA_PTR_SET_VALUE(onHookSource_, onHookSource) };


        // recordFile Field Functions 
        bool hasRecordFile() const { return this->recordFile_ != nullptr;};
        void deleteRecordFile() { this->recordFile_ = nullptr;};
        inline string getRecordFile() const { DARABONBA_PTR_GET_DEFAULT(recordFile_, "") };
        inline CdrIb& setRecordFile(string recordFile) { DARABONBA_PTR_SET_VALUE(recordFile_, recordFile) };


        // rtcUid Field Functions 
        bool hasRtcUid() const { return this->rtcUid_ != nullptr;};
        void deleteRtcUid() { this->rtcUid_ = nullptr;};
        inline string getRtcUid() const { DARABONBA_PTR_GET_DEFAULT(rtcUid_, "") };
        inline CdrIb& setRtcUid(string rtcUid) { DARABONBA_PTR_SET_VALUE(rtcUid_, rtcUid) };


        // sayVoiceDuration Field Functions 
        bool hasSayVoiceDuration() const { return this->sayVoiceDuration_ != nullptr;};
        void deleteSayVoiceDuration() { this->sayVoiceDuration_ = nullptr;};
        inline int64_t getSayVoiceDuration() const { DARABONBA_PTR_GET_DEFAULT(sayVoiceDuration_, 0L) };
        inline CdrIb& setSayVoiceDuration(int64_t sayVoiceDuration) { DARABONBA_PTR_SET_VALUE(sayVoiceDuration_, sayVoiceDuration) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline CdrIb& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CdrIb& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusResult Field Functions 
        bool hasStatusResult() const { return this->statusResult_ != nullptr;};
        void deleteStatusResult() { this->statusResult_ = nullptr;};
        inline string getStatusResult() const { DARABONBA_PTR_GET_DEFAULT(statusResult_, "") };
        inline CdrIb& setStatusResult(string statusResult) { DARABONBA_PTR_SET_VALUE(statusResult_, statusResult) };


        // statusRobot Field Functions 
        bool hasStatusRobot() const { return this->statusRobot_ != nullptr;};
        void deleteStatusRobot() { this->statusRobot_ = nullptr;};
        inline string getStatusRobot() const { DARABONBA_PTR_GET_DEFAULT(statusRobot_, "") };
        inline CdrIb& setStatusRobot(string statusRobot) { DARABONBA_PTR_SET_VALUE(statusRobot_, statusRobot) };


        // tagNames Field Functions 
        bool hasTagNames() const { return this->tagNames_ != nullptr;};
        void deleteTagNames() { this->tagNames_ = nullptr;};
        inline const vector<string> & getTagNames() const { DARABONBA_PTR_GET_CONST(tagNames_, vector<string>) };
        inline vector<string> getTagNames() { DARABONBA_PTR_GET(tagNames_, vector<string>) };
        inline CdrIb& setTagNames(const vector<string> & tagNames) { DARABONBA_PTR_SET_VALUE(tagNames_, tagNames) };
        inline CdrIb& setTagNames(vector<string> && tagNames) { DARABONBA_PTR_SET_RVALUE(tagNames_, tagNames) };


        // ticketIds Field Functions 
        bool hasTicketIds() const { return this->ticketIds_ != nullptr;};
        void deleteTicketIds() { this->ticketIds_ = nullptr;};
        inline const vector<string> & getTicketIds() const { DARABONBA_PTR_GET_CONST(ticketIds_, vector<string>) };
        inline vector<string> getTicketIds() { DARABONBA_PTR_GET(ticketIds_, vector<string>) };
        inline CdrIb& setTicketIds(const vector<string> & ticketIds) { DARABONBA_PTR_SET_VALUE(ticketIds_, ticketIds) };
        inline CdrIb& setTicketIds(vector<string> && ticketIds) { DARABONBA_PTR_SET_RVALUE(ticketIds_, ticketIds) };


        // totalDuration Field Functions 
        bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
        void deleteTotalDuration() { this->totalDuration_ = nullptr;};
        inline int64_t getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
        inline CdrIb& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


        // userField Field Functions 
        bool hasUserField() const { return this->userField_ != nullptr;};
        void deleteUserField() { this->userField_ = nullptr;};
        inline string getUserField() const { DARABONBA_PTR_GET_DEFAULT(userField_, "") };
        inline CdrIb& setUserField(string userField) { DARABONBA_PTR_SET_VALUE(userField_, userField) };


        // webrtcCallId Field Functions 
        bool hasWebrtcCallId() const { return this->webrtcCallId_ != nullptr;};
        void deleteWebrtcCallId() { this->webrtcCallId_ = nullptr;};
        inline string getWebrtcCallId() const { DARABONBA_PTR_GET_DEFAULT(webrtcCallId_, "") };
        inline CdrIb& setWebrtcCallId(string webrtcCallId) { DARABONBA_PTR_SET_VALUE(webrtcCallId_, webrtcCallId) };


        // xnumber Field Functions 
        bool hasXnumber() const { return this->xnumber_ != nullptr;};
        void deleteXnumber() { this->xnumber_ = nullptr;};
        inline string getXnumber() const { DARABONBA_PTR_GET_DEFAULT(xnumber_, "") };
        inline CdrIb& setXnumber(string xnumber) { DARABONBA_PTR_SET_VALUE(xnumber_, xnumber) };


      protected:
        // 首次及时应答
        shared_ptr<string> agentAnswerInTime_ {};
        // 接听设备
        shared_ptr<int64_t> bindType_ {};
        // 通话时长
        shared_ptr<int64_t> bridgeDuration_ {};
        // 首次接听时间
        shared_ptr<int64_t> bridgeTime_ {};
        // 业务记录ID
        shared_ptr<vector<string>> businessIds_ {};
        // CallID
        shared_ptr<string> callId_ {};
        // 客户号码城市
        shared_ptr<string> customerCity_ {};
        // 客户号码
        shared_ptr<string> customerNumber_ {};
        // 客户号码加密串
        shared_ptr<string> customerNumberEncrypt_ {};
        // 客户号码省份
        shared_ptr<string> customerProvince_ {};
        // 结束时间
        shared_ptr<int64_t> endTime_ {};
        // 是否邀评
        shared_ptr<string> evaluation_ {};
        // 首呼座席姓名
        shared_ptr<string> firstCallCname_ {};
        // 首呼座席工号
        shared_ptr<string> firstCallCno_ {};
        // 首呼座席电话
        shared_ptr<string> firstCallNumber_ {};
        // 首呼队列名称
        shared_ptr<string> firstCallQname_ {};
        // 首呼队列号
        shared_ptr<string> firstCallQno_ {};
        // 首次进入队列时间
        shared_ptr<int64_t> firstJoinQueueTime_ {};
        // 首次离开队列时间
        shared_ptr<int64_t> firstLeaveQueueTime_ {};
        // 首呼队列排队时长
        shared_ptr<int64_t> firstQueueDuration_ {};
        // 热线号码
        shared_ptr<string> hotline_ {};
        // 热线别名
        shared_ptr<string> hotlineName_ {};
        // 满意度评价
        shared_ptr<int64_t> investigationKeys_ {};
        // IVR名称
        shared_ptr<string> ivrName_ {};
        // 通话ID
        shared_ptr<string> mainUniqueId_ {};
        // 备注
        shared_ptr<string> markData_ {};
        // 挂断方
        shared_ptr<string> onHookSource_ {};
        // 录音文件
        shared_ptr<string> recordFile_ {};
        // rtcUid
        shared_ptr<string> rtcUid_ {};
        // 语音播报时长
        shared_ptr<int64_t> sayVoiceDuration_ {};
        // 开始时间
        shared_ptr<int64_t> startTime_ {};
        // 接听状态
        shared_ptr<string> status_ {};
        // 呼叫结果
        shared_ptr<string> statusResult_ {};
        // 机器人接听状态
        shared_ptr<string> statusRobot_ {};
        // 通话标签
        shared_ptr<vector<string>> tagNames_ {};
        // 工单ID
        shared_ptr<vector<string>> ticketIds_ {};
        // 总时长
        shared_ptr<int64_t> totalDuration_ {};
        // 自定义字段
        shared_ptr<string> userField_ {};
        // WebRTCCallID
        shared_ptr<string> webrtcCallId_ {};
        // 虚拟号码
        shared_ptr<string> xnumber_ {};
      };

      virtual bool empty() const override { return this->cdrIb_ == nullptr
        && this->clinkRequestId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->scrollId_ == nullptr && this->totalCount_ == nullptr; };
      // cdrIb Field Functions 
      bool hasCdrIb() const { return this->cdrIb_ != nullptr;};
      void deleteCdrIb() { this->cdrIb_ = nullptr;};
      inline const vector<Data::CdrIb> & getCdrIb() const { DARABONBA_PTR_GET_CONST(cdrIb_, vector<Data::CdrIb>) };
      inline vector<Data::CdrIb> getCdrIb() { DARABONBA_PTR_GET(cdrIb_, vector<Data::CdrIb>) };
      inline Data& setCdrIb(const vector<Data::CdrIb> & cdrIb) { DARABONBA_PTR_SET_VALUE(cdrIb_, cdrIb) };
      inline Data& setCdrIb(vector<Data::CdrIb> && cdrIb) { DARABONBA_PTR_SET_RVALUE(cdrIb_, cdrIb) };


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
      // [客户来电记录列表] #客户来电记录列表
      shared_ptr<vector<Data::CdrIb>> cdrIb_ {};
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
    inline ClinkListCdrIbResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkListCdrIbResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkListCdrIbResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkListCdrIbResponseBody::Data) };
    inline ClinkListCdrIbResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkListCdrIbResponseBody::Data) };
    inline ClinkListCdrIbResponseBody& setData(const ClinkListCdrIbResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkListCdrIbResponseBody& setData(ClinkListCdrIbResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkListCdrIbResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkListCdrIbResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkListCdrIbResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
