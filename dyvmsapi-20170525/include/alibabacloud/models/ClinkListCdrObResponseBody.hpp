// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKLISTCDROBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKLISTCDROBRESPONSEBODY_HPP_
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
  class ClinkListCdrObResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkListCdrObResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkListCdrObResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkListCdrObResponseBody() = default ;
    ClinkListCdrObResponseBody(const ClinkListCdrObResponseBody &) = default ;
    ClinkListCdrObResponseBody(ClinkListCdrObResponseBody &&) = default ;
    ClinkListCdrObResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkListCdrObResponseBody() = default ;
    ClinkListCdrObResponseBody& operator=(const ClinkListCdrObResponseBody &) = default ;
    ClinkListCdrObResponseBody& operator=(ClinkListCdrObResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CdrOb, cdrOb_);
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ScrollId, scrollId_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CdrOb, cdrOb_);
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
      class CdrOb : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CdrOb& obj) { 
          DARABONBA_PTR_TO_JSON(AsrRecord, asrRecord_);
          DARABONBA_PTR_TO_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_TO_JSON(BridgeTime, bridgeTime_);
          DARABONBA_PTR_TO_JSON(BusinessIds, businessIds_);
          DARABONBA_PTR_TO_JSON(CallId, callId_);
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(CallTypeKey, callTypeKey_);
          DARABONBA_PTR_TO_JSON(CalleeRingingDuration, calleeRingingDuration_);
          DARABONBA_PTR_TO_JSON(CalleeRingingTime, calleeRingingTime_);
          DARABONBA_PTR_TO_JSON(ClientName, clientName_);
          DARABONBA_PTR_TO_JSON(ClientNumber, clientNumber_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(CustomerArea, customerArea_);
          DARABONBA_PTR_TO_JSON(CustomerAreaCode, customerAreaCode_);
          DARABONBA_PTR_TO_JSON(CustomerCity, customerCity_);
          DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_TO_JSON(CustomerNumberEncrypt, customerNumberEncrypt_);
          DARABONBA_PTR_TO_JSON(CustomerPostCode, customerPostCode_);
          DARABONBA_PTR_TO_JSON(CustomerProvince, customerProvince_);
          DARABONBA_PTR_TO_JSON(CustomerVip, customerVip_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(Evaluation, evaluation_);
          DARABONBA_PTR_TO_JSON(ExistBusiness, existBusiness_);
          DARABONBA_PTR_TO_JSON(ExistCustomer, existCustomer_);
          DARABONBA_PTR_TO_JSON(ExistTicket, existTicket_);
          DARABONBA_PTR_TO_JSON(InvestigationKeys, investigationKeys_);
          DARABONBA_PTR_TO_JSON(LeftClid, leftClid_);
          DARABONBA_PTR_TO_JSON(LeftClidArea, leftClidArea_);
          DARABONBA_PTR_TO_JSON(LeftClidCity, leftClidCity_);
          DARABONBA_PTR_TO_JSON(LeftClidProvince, leftClidProvince_);
          DARABONBA_PTR_TO_JSON(MainUniqueId, mainUniqueId_);
          DARABONBA_PTR_TO_JSON(MarkData, markData_);
          DARABONBA_PTR_TO_JSON(ObSipCause, obSipCause_);
          DARABONBA_PTR_TO_JSON(ObSipCauseRaw, obSipCauseRaw_);
          DARABONBA_PTR_TO_JSON(ObWaitDuration, obWaitDuration_);
          DARABONBA_PTR_TO_JSON(OnHookSource, onHookSource_);
          DARABONBA_PTR_TO_JSON(PreRingWaitDuration, preRingWaitDuration_);
          DARABONBA_PTR_TO_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_TO_JSON(RequestUniqueId, requestUniqueId_);
          DARABONBA_PTR_TO_JSON(RtcUid, rtcUid_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
          DARABONBA_PTR_TO_JSON(TagNames, tagNames_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskInventoryId, taskInventoryId_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          DARABONBA_PTR_TO_JSON(TicketIds, ticketIds_);
          DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_TO_JSON(TrunkGroupKey, trunkGroupKey_);
          DARABONBA_PTR_TO_JSON(UpTime, upTime_);
          DARABONBA_PTR_TO_JSON(WebrtcCallId, webrtcCallId_);
          DARABONBA_PTR_TO_JSON(Xnumber, xnumber_);
          DARABONBA_PTR_TO_JSON(XnumberArea, xnumberArea_);
          DARABONBA_PTR_TO_JSON(XnumberCity, xnumberCity_);
          DARABONBA_PTR_TO_JSON(XnumberProvince, xnumberProvince_);
        };
        friend void from_json(const Darabonba::Json& j, CdrOb& obj) { 
          DARABONBA_PTR_FROM_JSON(AsrRecord, asrRecord_);
          DARABONBA_PTR_FROM_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_FROM_JSON(BridgeTime, bridgeTime_);
          DARABONBA_PTR_FROM_JSON(BusinessIds, businessIds_);
          DARABONBA_PTR_FROM_JSON(CallId, callId_);
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(CallTypeKey, callTypeKey_);
          DARABONBA_PTR_FROM_JSON(CalleeRingingDuration, calleeRingingDuration_);
          DARABONBA_PTR_FROM_JSON(CalleeRingingTime, calleeRingingTime_);
          DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
          DARABONBA_PTR_FROM_JSON(ClientNumber, clientNumber_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(CustomerArea, customerArea_);
          DARABONBA_PTR_FROM_JSON(CustomerAreaCode, customerAreaCode_);
          DARABONBA_PTR_FROM_JSON(CustomerCity, customerCity_);
          DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_FROM_JSON(CustomerNumberEncrypt, customerNumberEncrypt_);
          DARABONBA_PTR_FROM_JSON(CustomerPostCode, customerPostCode_);
          DARABONBA_PTR_FROM_JSON(CustomerProvince, customerProvince_);
          DARABONBA_PTR_FROM_JSON(CustomerVip, customerVip_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(Evaluation, evaluation_);
          DARABONBA_PTR_FROM_JSON(ExistBusiness, existBusiness_);
          DARABONBA_PTR_FROM_JSON(ExistCustomer, existCustomer_);
          DARABONBA_PTR_FROM_JSON(ExistTicket, existTicket_);
          DARABONBA_PTR_FROM_JSON(InvestigationKeys, investigationKeys_);
          DARABONBA_PTR_FROM_JSON(LeftClid, leftClid_);
          DARABONBA_PTR_FROM_JSON(LeftClidArea, leftClidArea_);
          DARABONBA_PTR_FROM_JSON(LeftClidCity, leftClidCity_);
          DARABONBA_PTR_FROM_JSON(LeftClidProvince, leftClidProvince_);
          DARABONBA_PTR_FROM_JSON(MainUniqueId, mainUniqueId_);
          DARABONBA_PTR_FROM_JSON(MarkData, markData_);
          DARABONBA_PTR_FROM_JSON(ObSipCause, obSipCause_);
          DARABONBA_PTR_FROM_JSON(ObSipCauseRaw, obSipCauseRaw_);
          DARABONBA_PTR_FROM_JSON(ObWaitDuration, obWaitDuration_);
          DARABONBA_PTR_FROM_JSON(OnHookSource, onHookSource_);
          DARABONBA_PTR_FROM_JSON(PreRingWaitDuration, preRingWaitDuration_);
          DARABONBA_PTR_FROM_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_FROM_JSON(RequestUniqueId, requestUniqueId_);
          DARABONBA_PTR_FROM_JSON(RtcUid, rtcUid_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
          DARABONBA_PTR_FROM_JSON(TagNames, tagNames_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskInventoryId, taskInventoryId_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
          DARABONBA_PTR_FROM_JSON(TicketIds, ticketIds_);
          DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_FROM_JSON(TrunkGroupKey, trunkGroupKey_);
          DARABONBA_PTR_FROM_JSON(UpTime, upTime_);
          DARABONBA_PTR_FROM_JSON(WebrtcCallId, webrtcCallId_);
          DARABONBA_PTR_FROM_JSON(Xnumber, xnumber_);
          DARABONBA_PTR_FROM_JSON(XnumberArea, xnumberArea_);
          DARABONBA_PTR_FROM_JSON(XnumberCity, xnumberCity_);
          DARABONBA_PTR_FROM_JSON(XnumberProvince, xnumberProvince_);
        };
        CdrOb() = default ;
        CdrOb(const CdrOb &) = default ;
        CdrOb(CdrOb &&) = default ;
        CdrOb(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CdrOb() = default ;
        CdrOb& operator=(const CdrOb &) = default ;
        CdrOb& operator=(CdrOb &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->asrRecord_ == nullptr
        && this->bridgeDuration_ == nullptr && this->bridgeTime_ == nullptr && this->businessIds_ == nullptr && this->callId_ == nullptr && this->callType_ == nullptr
        && this->callTypeKey_ == nullptr && this->calleeRingingDuration_ == nullptr && this->calleeRingingTime_ == nullptr && this->clientName_ == nullptr && this->clientNumber_ == nullptr
        && this->cno_ == nullptr && this->customerArea_ == nullptr && this->customerAreaCode_ == nullptr && this->customerCity_ == nullptr && this->customerNumber_ == nullptr
        && this->customerNumberEncrypt_ == nullptr && this->customerPostCode_ == nullptr && this->customerProvince_ == nullptr && this->customerVip_ == nullptr && this->endTime_ == nullptr
        && this->enterpriseId_ == nullptr && this->evaluation_ == nullptr && this->existBusiness_ == nullptr && this->existCustomer_ == nullptr && this->existTicket_ == nullptr
        && this->investigationKeys_ == nullptr && this->leftClid_ == nullptr && this->leftClidArea_ == nullptr && this->leftClidCity_ == nullptr && this->leftClidProvince_ == nullptr
        && this->mainUniqueId_ == nullptr && this->markData_ == nullptr && this->obSipCause_ == nullptr && this->obSipCauseRaw_ == nullptr && this->obWaitDuration_ == nullptr
        && this->onHookSource_ == nullptr && this->preRingWaitDuration_ == nullptr && this->recordFile_ == nullptr && this->requestUniqueId_ == nullptr && this->rtcUid_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->statusDesc_ == nullptr && this->tagNames_ == nullptr && this->taskId_ == nullptr
        && this->taskInventoryId_ == nullptr && this->taskName_ == nullptr && this->ticketIds_ == nullptr && this->totalDuration_ == nullptr && this->trunkGroupKey_ == nullptr
        && this->upTime_ == nullptr && this->webrtcCallId_ == nullptr && this->xnumber_ == nullptr && this->xnumberArea_ == nullptr && this->xnumberCity_ == nullptr
        && this->xnumberProvince_ == nullptr; };
        // asrRecord Field Functions 
        bool hasAsrRecord() const { return this->asrRecord_ != nullptr;};
        void deleteAsrRecord() { this->asrRecord_ = nullptr;};
        inline int64_t getAsrRecord() const { DARABONBA_PTR_GET_DEFAULT(asrRecord_, 0L) };
        inline CdrOb& setAsrRecord(int64_t asrRecord) { DARABONBA_PTR_SET_VALUE(asrRecord_, asrRecord) };


        // bridgeDuration Field Functions 
        bool hasBridgeDuration() const { return this->bridgeDuration_ != nullptr;};
        void deleteBridgeDuration() { this->bridgeDuration_ = nullptr;};
        inline int64_t getBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(bridgeDuration_, 0L) };
        inline CdrOb& setBridgeDuration(int64_t bridgeDuration) { DARABONBA_PTR_SET_VALUE(bridgeDuration_, bridgeDuration) };


        // bridgeTime Field Functions 
        bool hasBridgeTime() const { return this->bridgeTime_ != nullptr;};
        void deleteBridgeTime() { this->bridgeTime_ = nullptr;};
        inline int64_t getBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(bridgeTime_, 0L) };
        inline CdrOb& setBridgeTime(int64_t bridgeTime) { DARABONBA_PTR_SET_VALUE(bridgeTime_, bridgeTime) };


        // businessIds Field Functions 
        bool hasBusinessIds() const { return this->businessIds_ != nullptr;};
        void deleteBusinessIds() { this->businessIds_ = nullptr;};
        inline const vector<int64_t> & getBusinessIds() const { DARABONBA_PTR_GET_CONST(businessIds_, vector<int64_t>) };
        inline vector<int64_t> getBusinessIds() { DARABONBA_PTR_GET(businessIds_, vector<int64_t>) };
        inline CdrOb& setBusinessIds(const vector<int64_t> & businessIds) { DARABONBA_PTR_SET_VALUE(businessIds_, businessIds) };
        inline CdrOb& setBusinessIds(vector<int64_t> && businessIds) { DARABONBA_PTR_SET_RVALUE(businessIds_, businessIds) };


        // callId Field Functions 
        bool hasCallId() const { return this->callId_ != nullptr;};
        void deleteCallId() { this->callId_ = nullptr;};
        inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
        inline CdrOb& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline string getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
        inline CdrOb& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // callTypeKey Field Functions 
        bool hasCallTypeKey() const { return this->callTypeKey_ != nullptr;};
        void deleteCallTypeKey() { this->callTypeKey_ = nullptr;};
        inline int64_t getCallTypeKey() const { DARABONBA_PTR_GET_DEFAULT(callTypeKey_, 0L) };
        inline CdrOb& setCallTypeKey(int64_t callTypeKey) { DARABONBA_PTR_SET_VALUE(callTypeKey_, callTypeKey) };


        // calleeRingingDuration Field Functions 
        bool hasCalleeRingingDuration() const { return this->calleeRingingDuration_ != nullptr;};
        void deleteCalleeRingingDuration() { this->calleeRingingDuration_ = nullptr;};
        inline int64_t getCalleeRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(calleeRingingDuration_, 0L) };
        inline CdrOb& setCalleeRingingDuration(int64_t calleeRingingDuration) { DARABONBA_PTR_SET_VALUE(calleeRingingDuration_, calleeRingingDuration) };


        // calleeRingingTime Field Functions 
        bool hasCalleeRingingTime() const { return this->calleeRingingTime_ != nullptr;};
        void deleteCalleeRingingTime() { this->calleeRingingTime_ = nullptr;};
        inline int64_t getCalleeRingingTime() const { DARABONBA_PTR_GET_DEFAULT(calleeRingingTime_, 0L) };
        inline CdrOb& setCalleeRingingTime(int64_t calleeRingingTime) { DARABONBA_PTR_SET_VALUE(calleeRingingTime_, calleeRingingTime) };


        // clientName Field Functions 
        bool hasClientName() const { return this->clientName_ != nullptr;};
        void deleteClientName() { this->clientName_ = nullptr;};
        inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
        inline CdrOb& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


        // clientNumber Field Functions 
        bool hasClientNumber() const { return this->clientNumber_ != nullptr;};
        void deleteClientNumber() { this->clientNumber_ = nullptr;};
        inline string getClientNumber() const { DARABONBA_PTR_GET_DEFAULT(clientNumber_, "") };
        inline CdrOb& setClientNumber(string clientNumber) { DARABONBA_PTR_SET_VALUE(clientNumber_, clientNumber) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline CdrOb& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // customerArea Field Functions 
        bool hasCustomerArea() const { return this->customerArea_ != nullptr;};
        void deleteCustomerArea() { this->customerArea_ = nullptr;};
        inline string getCustomerArea() const { DARABONBA_PTR_GET_DEFAULT(customerArea_, "") };
        inline CdrOb& setCustomerArea(string customerArea) { DARABONBA_PTR_SET_VALUE(customerArea_, customerArea) };


        // customerAreaCode Field Functions 
        bool hasCustomerAreaCode() const { return this->customerAreaCode_ != nullptr;};
        void deleteCustomerAreaCode() { this->customerAreaCode_ = nullptr;};
        inline string getCustomerAreaCode() const { DARABONBA_PTR_GET_DEFAULT(customerAreaCode_, "") };
        inline CdrOb& setCustomerAreaCode(string customerAreaCode) { DARABONBA_PTR_SET_VALUE(customerAreaCode_, customerAreaCode) };


        // customerCity Field Functions 
        bool hasCustomerCity() const { return this->customerCity_ != nullptr;};
        void deleteCustomerCity() { this->customerCity_ = nullptr;};
        inline string getCustomerCity() const { DARABONBA_PTR_GET_DEFAULT(customerCity_, "") };
        inline CdrOb& setCustomerCity(string customerCity) { DARABONBA_PTR_SET_VALUE(customerCity_, customerCity) };


        // customerNumber Field Functions 
        bool hasCustomerNumber() const { return this->customerNumber_ != nullptr;};
        void deleteCustomerNumber() { this->customerNumber_ = nullptr;};
        inline string getCustomerNumber() const { DARABONBA_PTR_GET_DEFAULT(customerNumber_, "") };
        inline CdrOb& setCustomerNumber(string customerNumber) { DARABONBA_PTR_SET_VALUE(customerNumber_, customerNumber) };


        // customerNumberEncrypt Field Functions 
        bool hasCustomerNumberEncrypt() const { return this->customerNumberEncrypt_ != nullptr;};
        void deleteCustomerNumberEncrypt() { this->customerNumberEncrypt_ = nullptr;};
        inline string getCustomerNumberEncrypt() const { DARABONBA_PTR_GET_DEFAULT(customerNumberEncrypt_, "") };
        inline CdrOb& setCustomerNumberEncrypt(string customerNumberEncrypt) { DARABONBA_PTR_SET_VALUE(customerNumberEncrypt_, customerNumberEncrypt) };


        // customerPostCode Field Functions 
        bool hasCustomerPostCode() const { return this->customerPostCode_ != nullptr;};
        void deleteCustomerPostCode() { this->customerPostCode_ = nullptr;};
        inline string getCustomerPostCode() const { DARABONBA_PTR_GET_DEFAULT(customerPostCode_, "") };
        inline CdrOb& setCustomerPostCode(string customerPostCode) { DARABONBA_PTR_SET_VALUE(customerPostCode_, customerPostCode) };


        // customerProvince Field Functions 
        bool hasCustomerProvince() const { return this->customerProvince_ != nullptr;};
        void deleteCustomerProvince() { this->customerProvince_ = nullptr;};
        inline string getCustomerProvince() const { DARABONBA_PTR_GET_DEFAULT(customerProvince_, "") };
        inline CdrOb& setCustomerProvince(string customerProvince) { DARABONBA_PTR_SET_VALUE(customerProvince_, customerProvince) };


        // customerVip Field Functions 
        bool hasCustomerVip() const { return this->customerVip_ != nullptr;};
        void deleteCustomerVip() { this->customerVip_ = nullptr;};
        inline int64_t getCustomerVip() const { DARABONBA_PTR_GET_DEFAULT(customerVip_, 0L) };
        inline CdrOb& setCustomerVip(int64_t customerVip) { DARABONBA_PTR_SET_VALUE(customerVip_, customerVip) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline CdrOb& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
        inline CdrOb& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // evaluation Field Functions 
        bool hasEvaluation() const { return this->evaluation_ != nullptr;};
        void deleteEvaluation() { this->evaluation_ = nullptr;};
        inline string getEvaluation() const { DARABONBA_PTR_GET_DEFAULT(evaluation_, "") };
        inline CdrOb& setEvaluation(string evaluation) { DARABONBA_PTR_SET_VALUE(evaluation_, evaluation) };


        // existBusiness Field Functions 
        bool hasExistBusiness() const { return this->existBusiness_ != nullptr;};
        void deleteExistBusiness() { this->existBusiness_ = nullptr;};
        inline int64_t getExistBusiness() const { DARABONBA_PTR_GET_DEFAULT(existBusiness_, 0L) };
        inline CdrOb& setExistBusiness(int64_t existBusiness) { DARABONBA_PTR_SET_VALUE(existBusiness_, existBusiness) };


        // existCustomer Field Functions 
        bool hasExistCustomer() const { return this->existCustomer_ != nullptr;};
        void deleteExistCustomer() { this->existCustomer_ = nullptr;};
        inline bool getExistCustomer() const { DARABONBA_PTR_GET_DEFAULT(existCustomer_, false) };
        inline CdrOb& setExistCustomer(bool existCustomer) { DARABONBA_PTR_SET_VALUE(existCustomer_, existCustomer) };


        // existTicket Field Functions 
        bool hasExistTicket() const { return this->existTicket_ != nullptr;};
        void deleteExistTicket() { this->existTicket_ = nullptr;};
        inline int64_t getExistTicket() const { DARABONBA_PTR_GET_DEFAULT(existTicket_, 0L) };
        inline CdrOb& setExistTicket(int64_t existTicket) { DARABONBA_PTR_SET_VALUE(existTicket_, existTicket) };


        // investigationKeys Field Functions 
        bool hasInvestigationKeys() const { return this->investigationKeys_ != nullptr;};
        void deleteInvestigationKeys() { this->investigationKeys_ = nullptr;};
        inline int64_t getInvestigationKeys() const { DARABONBA_PTR_GET_DEFAULT(investigationKeys_, 0L) };
        inline CdrOb& setInvestigationKeys(int64_t investigationKeys) { DARABONBA_PTR_SET_VALUE(investigationKeys_, investigationKeys) };


        // leftClid Field Functions 
        bool hasLeftClid() const { return this->leftClid_ != nullptr;};
        void deleteLeftClid() { this->leftClid_ = nullptr;};
        inline string getLeftClid() const { DARABONBA_PTR_GET_DEFAULT(leftClid_, "") };
        inline CdrOb& setLeftClid(string leftClid) { DARABONBA_PTR_SET_VALUE(leftClid_, leftClid) };


        // leftClidArea Field Functions 
        bool hasLeftClidArea() const { return this->leftClidArea_ != nullptr;};
        void deleteLeftClidArea() { this->leftClidArea_ = nullptr;};
        inline string getLeftClidArea() const { DARABONBA_PTR_GET_DEFAULT(leftClidArea_, "") };
        inline CdrOb& setLeftClidArea(string leftClidArea) { DARABONBA_PTR_SET_VALUE(leftClidArea_, leftClidArea) };


        // leftClidCity Field Functions 
        bool hasLeftClidCity() const { return this->leftClidCity_ != nullptr;};
        void deleteLeftClidCity() { this->leftClidCity_ = nullptr;};
        inline string getLeftClidCity() const { DARABONBA_PTR_GET_DEFAULT(leftClidCity_, "") };
        inline CdrOb& setLeftClidCity(string leftClidCity) { DARABONBA_PTR_SET_VALUE(leftClidCity_, leftClidCity) };


        // leftClidProvince Field Functions 
        bool hasLeftClidProvince() const { return this->leftClidProvince_ != nullptr;};
        void deleteLeftClidProvince() { this->leftClidProvince_ = nullptr;};
        inline string getLeftClidProvince() const { DARABONBA_PTR_GET_DEFAULT(leftClidProvince_, "") };
        inline CdrOb& setLeftClidProvince(string leftClidProvince) { DARABONBA_PTR_SET_VALUE(leftClidProvince_, leftClidProvince) };


        // mainUniqueId Field Functions 
        bool hasMainUniqueId() const { return this->mainUniqueId_ != nullptr;};
        void deleteMainUniqueId() { this->mainUniqueId_ = nullptr;};
        inline string getMainUniqueId() const { DARABONBA_PTR_GET_DEFAULT(mainUniqueId_, "") };
        inline CdrOb& setMainUniqueId(string mainUniqueId) { DARABONBA_PTR_SET_VALUE(mainUniqueId_, mainUniqueId) };


        // markData Field Functions 
        bool hasMarkData() const { return this->markData_ != nullptr;};
        void deleteMarkData() { this->markData_ = nullptr;};
        inline string getMarkData() const { DARABONBA_PTR_GET_DEFAULT(markData_, "") };
        inline CdrOb& setMarkData(string markData) { DARABONBA_PTR_SET_VALUE(markData_, markData) };


        // obSipCause Field Functions 
        bool hasObSipCause() const { return this->obSipCause_ != nullptr;};
        void deleteObSipCause() { this->obSipCause_ = nullptr;};
        inline string getObSipCause() const { DARABONBA_PTR_GET_DEFAULT(obSipCause_, "") };
        inline CdrOb& setObSipCause(string obSipCause) { DARABONBA_PTR_SET_VALUE(obSipCause_, obSipCause) };


        // obSipCauseRaw Field Functions 
        bool hasObSipCauseRaw() const { return this->obSipCauseRaw_ != nullptr;};
        void deleteObSipCauseRaw() { this->obSipCauseRaw_ = nullptr;};
        inline string getObSipCauseRaw() const { DARABONBA_PTR_GET_DEFAULT(obSipCauseRaw_, "") };
        inline CdrOb& setObSipCauseRaw(string obSipCauseRaw) { DARABONBA_PTR_SET_VALUE(obSipCauseRaw_, obSipCauseRaw) };


        // obWaitDuration Field Functions 
        bool hasObWaitDuration() const { return this->obWaitDuration_ != nullptr;};
        void deleteObWaitDuration() { this->obWaitDuration_ = nullptr;};
        inline int64_t getObWaitDuration() const { DARABONBA_PTR_GET_DEFAULT(obWaitDuration_, 0L) };
        inline CdrOb& setObWaitDuration(int64_t obWaitDuration) { DARABONBA_PTR_SET_VALUE(obWaitDuration_, obWaitDuration) };


        // onHookSource Field Functions 
        bool hasOnHookSource() const { return this->onHookSource_ != nullptr;};
        void deleteOnHookSource() { this->onHookSource_ = nullptr;};
        inline string getOnHookSource() const { DARABONBA_PTR_GET_DEFAULT(onHookSource_, "") };
        inline CdrOb& setOnHookSource(string onHookSource) { DARABONBA_PTR_SET_VALUE(onHookSource_, onHookSource) };


        // preRingWaitDuration Field Functions 
        bool hasPreRingWaitDuration() const { return this->preRingWaitDuration_ != nullptr;};
        void deletePreRingWaitDuration() { this->preRingWaitDuration_ = nullptr;};
        inline int64_t getPreRingWaitDuration() const { DARABONBA_PTR_GET_DEFAULT(preRingWaitDuration_, 0L) };
        inline CdrOb& setPreRingWaitDuration(int64_t preRingWaitDuration) { DARABONBA_PTR_SET_VALUE(preRingWaitDuration_, preRingWaitDuration) };


        // recordFile Field Functions 
        bool hasRecordFile() const { return this->recordFile_ != nullptr;};
        void deleteRecordFile() { this->recordFile_ = nullptr;};
        inline string getRecordFile() const { DARABONBA_PTR_GET_DEFAULT(recordFile_, "") };
        inline CdrOb& setRecordFile(string recordFile) { DARABONBA_PTR_SET_VALUE(recordFile_, recordFile) };


        // requestUniqueId Field Functions 
        bool hasRequestUniqueId() const { return this->requestUniqueId_ != nullptr;};
        void deleteRequestUniqueId() { this->requestUniqueId_ = nullptr;};
        inline string getRequestUniqueId() const { DARABONBA_PTR_GET_DEFAULT(requestUniqueId_, "") };
        inline CdrOb& setRequestUniqueId(string requestUniqueId) { DARABONBA_PTR_SET_VALUE(requestUniqueId_, requestUniqueId) };


        // rtcUid Field Functions 
        bool hasRtcUid() const { return this->rtcUid_ != nullptr;};
        void deleteRtcUid() { this->rtcUid_ = nullptr;};
        inline string getRtcUid() const { DARABONBA_PTR_GET_DEFAULT(rtcUid_, "") };
        inline CdrOb& setRtcUid(string rtcUid) { DARABONBA_PTR_SET_VALUE(rtcUid_, rtcUid) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline CdrOb& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline CdrOb& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusDesc Field Functions 
        bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
        void deleteStatusDesc() { this->statusDesc_ = nullptr;};
        inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
        inline CdrOb& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


        // tagNames Field Functions 
        bool hasTagNames() const { return this->tagNames_ != nullptr;};
        void deleteTagNames() { this->tagNames_ = nullptr;};
        inline const vector<string> & getTagNames() const { DARABONBA_PTR_GET_CONST(tagNames_, vector<string>) };
        inline vector<string> getTagNames() { DARABONBA_PTR_GET(tagNames_, vector<string>) };
        inline CdrOb& setTagNames(const vector<string> & tagNames) { DARABONBA_PTR_SET_VALUE(tagNames_, tagNames) };
        inline CdrOb& setTagNames(vector<string> && tagNames) { DARABONBA_PTR_SET_RVALUE(tagNames_, tagNames) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
        inline CdrOb& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskInventoryId Field Functions 
        bool hasTaskInventoryId() const { return this->taskInventoryId_ != nullptr;};
        void deleteTaskInventoryId() { this->taskInventoryId_ = nullptr;};
        inline int64_t getTaskInventoryId() const { DARABONBA_PTR_GET_DEFAULT(taskInventoryId_, 0L) };
        inline CdrOb& setTaskInventoryId(int64_t taskInventoryId) { DARABONBA_PTR_SET_VALUE(taskInventoryId_, taskInventoryId) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline CdrOb& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        // ticketIds Field Functions 
        bool hasTicketIds() const { return this->ticketIds_ != nullptr;};
        void deleteTicketIds() { this->ticketIds_ = nullptr;};
        inline const vector<int64_t> & getTicketIds() const { DARABONBA_PTR_GET_CONST(ticketIds_, vector<int64_t>) };
        inline vector<int64_t> getTicketIds() { DARABONBA_PTR_GET(ticketIds_, vector<int64_t>) };
        inline CdrOb& setTicketIds(const vector<int64_t> & ticketIds) { DARABONBA_PTR_SET_VALUE(ticketIds_, ticketIds) };
        inline CdrOb& setTicketIds(vector<int64_t> && ticketIds) { DARABONBA_PTR_SET_RVALUE(ticketIds_, ticketIds) };


        // totalDuration Field Functions 
        bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
        void deleteTotalDuration() { this->totalDuration_ = nullptr;};
        inline int64_t getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
        inline CdrOb& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


        // trunkGroupKey Field Functions 
        bool hasTrunkGroupKey() const { return this->trunkGroupKey_ != nullptr;};
        void deleteTrunkGroupKey() { this->trunkGroupKey_ = nullptr;};
        inline string getTrunkGroupKey() const { DARABONBA_PTR_GET_DEFAULT(trunkGroupKey_, "") };
        inline CdrOb& setTrunkGroupKey(string trunkGroupKey) { DARABONBA_PTR_SET_VALUE(trunkGroupKey_, trunkGroupKey) };


        // upTime Field Functions 
        bool hasUpTime() const { return this->upTime_ != nullptr;};
        void deleteUpTime() { this->upTime_ = nullptr;};
        inline int64_t getUpTime() const { DARABONBA_PTR_GET_DEFAULT(upTime_, 0L) };
        inline CdrOb& setUpTime(int64_t upTime) { DARABONBA_PTR_SET_VALUE(upTime_, upTime) };


        // webrtcCallId Field Functions 
        bool hasWebrtcCallId() const { return this->webrtcCallId_ != nullptr;};
        void deleteWebrtcCallId() { this->webrtcCallId_ = nullptr;};
        inline string getWebrtcCallId() const { DARABONBA_PTR_GET_DEFAULT(webrtcCallId_, "") };
        inline CdrOb& setWebrtcCallId(string webrtcCallId) { DARABONBA_PTR_SET_VALUE(webrtcCallId_, webrtcCallId) };


        // xnumber Field Functions 
        bool hasXnumber() const { return this->xnumber_ != nullptr;};
        void deleteXnumber() { this->xnumber_ = nullptr;};
        inline string getXnumber() const { DARABONBA_PTR_GET_DEFAULT(xnumber_, "") };
        inline CdrOb& setXnumber(string xnumber) { DARABONBA_PTR_SET_VALUE(xnumber_, xnumber) };


        // xnumberArea Field Functions 
        bool hasXnumberArea() const { return this->xnumberArea_ != nullptr;};
        void deleteXnumberArea() { this->xnumberArea_ = nullptr;};
        inline string getXnumberArea() const { DARABONBA_PTR_GET_DEFAULT(xnumberArea_, "") };
        inline CdrOb& setXnumberArea(string xnumberArea) { DARABONBA_PTR_SET_VALUE(xnumberArea_, xnumberArea) };


        // xnumberCity Field Functions 
        bool hasXnumberCity() const { return this->xnumberCity_ != nullptr;};
        void deleteXnumberCity() { this->xnumberCity_ = nullptr;};
        inline string getXnumberCity() const { DARABONBA_PTR_GET_DEFAULT(xnumberCity_, "") };
        inline CdrOb& setXnumberCity(string xnumberCity) { DARABONBA_PTR_SET_VALUE(xnumberCity_, xnumberCity) };


        // xnumberProvince Field Functions 
        bool hasXnumberProvince() const { return this->xnumberProvince_ != nullptr;};
        void deleteXnumberProvince() { this->xnumberProvince_ = nullptr;};
        inline string getXnumberProvince() const { DARABONBA_PTR_GET_DEFAULT(xnumberProvince_, "") };
        inline CdrOb& setXnumberProvince(string xnumberProvince) { DARABONBA_PTR_SET_VALUE(xnumberProvince_, xnumberProvince) };


      protected:
        // 转写记录标识 1：存在，0：不存在
        shared_ptr<int64_t> asrRecord_ {};
        // 通话时长
        shared_ptr<int64_t> bridgeDuration_ {};
        // 客户接听时间
        shared_ptr<int64_t> bridgeTime_ {};
        // 业务记录ID
        shared_ptr<vector<int64_t>> businessIds_ {};
        // CallID
        shared_ptr<string> callId_ {};
        // 通话类型
        shared_ptr<string> callType_ {};
        // 通话类型Key值
        shared_ptr<int64_t> callTypeKey_ {};
        // 客户响铃时长
        shared_ptr<int64_t> calleeRingingDuration_ {};
        // 客户响铃时间
        shared_ptr<int64_t> calleeRingingTime_ {};
        // 座席名称
        shared_ptr<string> clientName_ {};
        // 座席电话
        shared_ptr<string> clientNumber_ {};
        // 座席工号
        shared_ptr<string> cno_ {};
        // 客户地区，省份/城市
        shared_ptr<string> customerArea_ {};
        // 客户号码区号
        shared_ptr<string> customerAreaCode_ {};
        // 客户号码城市
        shared_ptr<string> customerCity_ {};
        // 客户号码
        shared_ptr<string> customerNumber_ {};
        // 客户号码加密串
        shared_ptr<string> customerNumberEncrypt_ {};
        // 追加客户邮编
        shared_ptr<string> customerPostCode_ {};
        // 客户号码省份
        shared_ptr<string> customerProvince_ {};
        // 客户VIP标识
        shared_ptr<int64_t> customerVip_ {};
        // 结束时间
        shared_ptr<int64_t> endTime_ {};
        // 企业号
        shared_ptr<int64_t> enterpriseId_ {};
        // 是否邀评
        shared_ptr<string> evaluation_ {};
        // 是否存在业务记录
        shared_ptr<int64_t> existBusiness_ {};
        // 是否存在客户资料
        shared_ptr<bool> existCustomer_ {};
        // 是否存在工单
        shared_ptr<int64_t> existTicket_ {};
        // 满意度评价
        shared_ptr<int64_t> investigationKeys_ {};
        // 外显号码
        shared_ptr<string> leftClid_ {};
        // 外显号码归属地区，省份/城市
        shared_ptr<string> leftClidArea_ {};
        // 外显号码归属城市
        shared_ptr<string> leftClidCity_ {};
        // 外显号码归属省份
        shared_ptr<string> leftClidProvince_ {};
        // 通话ID
        shared_ptr<string> mainUniqueId_ {};
        // 备注
        shared_ptr<string> markData_ {};
        // 呼叫结果
        shared_ptr<string> obSipCause_ {};
        // 被叫状态
        shared_ptr<string> obSipCauseRaw_ {};
        // 外呼等待时长
        shared_ptr<int64_t> obWaitDuration_ {};
        // 挂断方
        shared_ptr<string> onHookSource_ {};
        // 响铃前等待时长
        shared_ptr<int64_t> preRingWaitDuration_ {};
        // 录音文件
        shared_ptr<string> recordFile_ {};
        // 通话唯一ID
        shared_ptr<string> requestUniqueId_ {};
        // RtcUid
        shared_ptr<string> rtcUid_ {};
        // 开始时间
        shared_ptr<int64_t> startTime_ {};
        // 接听状态值
        shared_ptr<int64_t> status_ {};
        // 接听状态描述
        shared_ptr<string> statusDesc_ {};
        // 通话标签
        shared_ptr<vector<string>> tagNames_ {};
        // 外呼任务id
        shared_ptr<int64_t> taskId_ {};
        // 外呼任务详情id
        shared_ptr<int64_t> taskInventoryId_ {};
        // 外呼任务名称
        shared_ptr<string> taskName_ {};
        // 工单id
        shared_ptr<vector<int64_t>> ticketIds_ {};
        // 总时长
        shared_ptr<int64_t> totalDuration_ {};
        // 中继组号
        shared_ptr<string> trunkGroupKey_ {};
        // 座席接起时间
        shared_ptr<int64_t> upTime_ {};
        // WebRTCCallID
        shared_ptr<string> webrtcCallId_ {};
        // 虚拟号码
        shared_ptr<string> xnumber_ {};
        // 虚拟号码归属地区，省份/城市
        shared_ptr<string> xnumberArea_ {};
        // 虚拟号码归属城市
        shared_ptr<string> xnumberCity_ {};
        // 虚拟号码归属省份
        shared_ptr<string> xnumberProvince_ {};
      };

      virtual bool empty() const override { return this->cdrOb_ == nullptr
        && this->clinkRequestId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->scrollId_ == nullptr && this->totalCount_ == nullptr; };
      // cdrOb Field Functions 
      bool hasCdrOb() const { return this->cdrOb_ != nullptr;};
      void deleteCdrOb() { this->cdrOb_ = nullptr;};
      inline const vector<Data::CdrOb> & getCdrOb() const { DARABONBA_PTR_GET_CONST(cdrOb_, vector<Data::CdrOb>) };
      inline vector<Data::CdrOb> getCdrOb() { DARABONBA_PTR_GET(cdrOb_, vector<Data::CdrOb>) };
      inline Data& setCdrOb(const vector<Data::CdrOb> & cdrOb) { DARABONBA_PTR_SET_VALUE(cdrOb_, cdrOb) };
      inline Data& setCdrOb(vector<Data::CdrOb> && cdrOb) { DARABONBA_PTR_SET_RVALUE(cdrOb_, cdrOb) };


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
      // [外呼记录列表] #外呼记录列表
      shared_ptr<vector<Data::CdrOb>> cdrOb_ {};
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
    inline ClinkListCdrObResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkListCdrObResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkListCdrObResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkListCdrObResponseBody::Data) };
    inline ClinkListCdrObResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkListCdrObResponseBody::Data) };
    inline ClinkListCdrObResponseBody& setData(const ClinkListCdrObResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkListCdrObResponseBody& setData(ClinkListCdrObResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkListCdrObResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkListCdrObResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkListCdrObResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
