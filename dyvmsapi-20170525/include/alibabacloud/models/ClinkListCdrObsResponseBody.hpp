// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKLISTCDROBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKLISTCDROBSRESPONSEBODY_HPP_
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
  class ClinkListCdrObsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkListCdrObsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkListCdrObsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkListCdrObsResponseBody() = default ;
    ClinkListCdrObsResponseBody(const ClinkListCdrObsResponseBody &) = default ;
    ClinkListCdrObsResponseBody(ClinkListCdrObsResponseBody &&) = default ;
    ClinkListCdrObsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkListCdrObsResponseBody() = default ;
    ClinkListCdrObsResponseBody& operator=(const ClinkListCdrObsResponseBody &) = default ;
    ClinkListCdrObsResponseBody& operator=(ClinkListCdrObsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CdrObs, cdrObs_);
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CdrObs, cdrObs_);
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      class CdrObs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CdrObs& obj) { 
          DARABONBA_PTR_TO_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_TO_JSON(BridgeTime, bridgeTime_);
          DARABONBA_PTR_TO_JSON(CallId, callId_);
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(ClientName, clientName_);
          DARABONBA_PTR_TO_JSON(ClientNumber, clientNumber_);
          DARABONBA_PTR_TO_JSON(ClientRingingTime, clientRingingTime_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(CustomerCity, customerCity_);
          DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_TO_JSON(CustomerNumberEncrypt, customerNumberEncrypt_);
          DARABONBA_PTR_TO_JSON(CustomerProvince, customerProvince_);
          DARABONBA_PTR_TO_JSON(CustomerRingingTime, customerRingingTime_);
          DARABONBA_PTR_TO_JSON(EndReason, endReason_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Evaluation, evaluation_);
          DARABONBA_PTR_TO_JSON(Hotline, hotline_);
          DARABONBA_PTR_TO_JSON(IvrName, ivrName_);
          DARABONBA_PTR_TO_JSON(Mark, mark_);
          DARABONBA_PTR_TO_JSON(MarkData, markData_);
          DARABONBA_PTR_TO_JSON(Qname, qname_);
          DARABONBA_PTR_TO_JSON(Qno, qno_);
          DARABONBA_PTR_TO_JSON(QueueAnswerInTime, queueAnswerInTime_);
          DARABONBA_PTR_TO_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_TO_JSON(SipCause, sipCause_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_TO_JSON(TagNames, tagNames_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
          DARABONBA_PTR_TO_JSON(Xnumber, xnumber_);
        };
        friend void from_json(const Darabonba::Json& j, CdrObs& obj) { 
          DARABONBA_PTR_FROM_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_FROM_JSON(BridgeTime, bridgeTime_);
          DARABONBA_PTR_FROM_JSON(CallId, callId_);
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
          DARABONBA_PTR_FROM_JSON(ClientNumber, clientNumber_);
          DARABONBA_PTR_FROM_JSON(ClientRingingTime, clientRingingTime_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(CustomerCity, customerCity_);
          DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_FROM_JSON(CustomerNumberEncrypt, customerNumberEncrypt_);
          DARABONBA_PTR_FROM_JSON(CustomerProvince, customerProvince_);
          DARABONBA_PTR_FROM_JSON(CustomerRingingTime, customerRingingTime_);
          DARABONBA_PTR_FROM_JSON(EndReason, endReason_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Evaluation, evaluation_);
          DARABONBA_PTR_FROM_JSON(Hotline, hotline_);
          DARABONBA_PTR_FROM_JSON(IvrName, ivrName_);
          DARABONBA_PTR_FROM_JSON(Mark, mark_);
          DARABONBA_PTR_FROM_JSON(MarkData, markData_);
          DARABONBA_PTR_FROM_JSON(Qname, qname_);
          DARABONBA_PTR_FROM_JSON(Qno, qno_);
          DARABONBA_PTR_FROM_JSON(QueueAnswerInTime, queueAnswerInTime_);
          DARABONBA_PTR_FROM_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_FROM_JSON(SipCause, sipCause_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_FROM_JSON(TagNames, tagNames_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
          DARABONBA_PTR_FROM_JSON(Xnumber, xnumber_);
        };
        CdrObs() = default ;
        CdrObs(const CdrObs &) = default ;
        CdrObs(CdrObs &&) = default ;
        CdrObs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CdrObs() = default ;
        CdrObs& operator=(const CdrObs &) = default ;
        CdrObs& operator=(CdrObs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bridgeDuration_ == nullptr
        && this->bridgeTime_ == nullptr && this->callId_ == nullptr && this->callType_ == nullptr && this->clientName_ == nullptr && this->clientNumber_ == nullptr
        && this->clientRingingTime_ == nullptr && this->cno_ == nullptr && this->customerCity_ == nullptr && this->customerNumber_ == nullptr && this->customerNumberEncrypt_ == nullptr
        && this->customerProvince_ == nullptr && this->customerRingingTime_ == nullptr && this->endReason_ == nullptr && this->endTime_ == nullptr && this->evaluation_ == nullptr
        && this->hotline_ == nullptr && this->ivrName_ == nullptr && this->mark_ == nullptr && this->markData_ == nullptr && this->qname_ == nullptr
        && this->qno_ == nullptr && this->queueAnswerInTime_ == nullptr && this->recordFile_ == nullptr && this->sipCause_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->statusCode_ == nullptr && this->tagNames_ == nullptr && this->tags_ == nullptr && this->totalDuration_ == nullptr
        && this->uniqueId_ == nullptr && this->xnumber_ == nullptr; };
        // bridgeDuration Field Functions 
        bool hasBridgeDuration() const { return this->bridgeDuration_ != nullptr;};
        void deleteBridgeDuration() { this->bridgeDuration_ = nullptr;};
        inline int64_t getBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(bridgeDuration_, 0L) };
        inline CdrObs& setBridgeDuration(int64_t bridgeDuration) { DARABONBA_PTR_SET_VALUE(bridgeDuration_, bridgeDuration) };


        // bridgeTime Field Functions 
        bool hasBridgeTime() const { return this->bridgeTime_ != nullptr;};
        void deleteBridgeTime() { this->bridgeTime_ = nullptr;};
        inline int64_t getBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(bridgeTime_, 0L) };
        inline CdrObs& setBridgeTime(int64_t bridgeTime) { DARABONBA_PTR_SET_VALUE(bridgeTime_, bridgeTime) };


        // callId Field Functions 
        bool hasCallId() const { return this->callId_ != nullptr;};
        void deleteCallId() { this->callId_ = nullptr;};
        inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
        inline CdrObs& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline string getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
        inline CdrObs& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // clientName Field Functions 
        bool hasClientName() const { return this->clientName_ != nullptr;};
        void deleteClientName() { this->clientName_ = nullptr;};
        inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
        inline CdrObs& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


        // clientNumber Field Functions 
        bool hasClientNumber() const { return this->clientNumber_ != nullptr;};
        void deleteClientNumber() { this->clientNumber_ = nullptr;};
        inline string getClientNumber() const { DARABONBA_PTR_GET_DEFAULT(clientNumber_, "") };
        inline CdrObs& setClientNumber(string clientNumber) { DARABONBA_PTR_SET_VALUE(clientNumber_, clientNumber) };


        // clientRingingTime Field Functions 
        bool hasClientRingingTime() const { return this->clientRingingTime_ != nullptr;};
        void deleteClientRingingTime() { this->clientRingingTime_ = nullptr;};
        inline int64_t getClientRingingTime() const { DARABONBA_PTR_GET_DEFAULT(clientRingingTime_, 0L) };
        inline CdrObs& setClientRingingTime(int64_t clientRingingTime) { DARABONBA_PTR_SET_VALUE(clientRingingTime_, clientRingingTime) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline CdrObs& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // customerCity Field Functions 
        bool hasCustomerCity() const { return this->customerCity_ != nullptr;};
        void deleteCustomerCity() { this->customerCity_ = nullptr;};
        inline string getCustomerCity() const { DARABONBA_PTR_GET_DEFAULT(customerCity_, "") };
        inline CdrObs& setCustomerCity(string customerCity) { DARABONBA_PTR_SET_VALUE(customerCity_, customerCity) };


        // customerNumber Field Functions 
        bool hasCustomerNumber() const { return this->customerNumber_ != nullptr;};
        void deleteCustomerNumber() { this->customerNumber_ = nullptr;};
        inline string getCustomerNumber() const { DARABONBA_PTR_GET_DEFAULT(customerNumber_, "") };
        inline CdrObs& setCustomerNumber(string customerNumber) { DARABONBA_PTR_SET_VALUE(customerNumber_, customerNumber) };


        // customerNumberEncrypt Field Functions 
        bool hasCustomerNumberEncrypt() const { return this->customerNumberEncrypt_ != nullptr;};
        void deleteCustomerNumberEncrypt() { this->customerNumberEncrypt_ = nullptr;};
        inline string getCustomerNumberEncrypt() const { DARABONBA_PTR_GET_DEFAULT(customerNumberEncrypt_, "") };
        inline CdrObs& setCustomerNumberEncrypt(string customerNumberEncrypt) { DARABONBA_PTR_SET_VALUE(customerNumberEncrypt_, customerNumberEncrypt) };


        // customerProvince Field Functions 
        bool hasCustomerProvince() const { return this->customerProvince_ != nullptr;};
        void deleteCustomerProvince() { this->customerProvince_ = nullptr;};
        inline string getCustomerProvince() const { DARABONBA_PTR_GET_DEFAULT(customerProvince_, "") };
        inline CdrObs& setCustomerProvince(string customerProvince) { DARABONBA_PTR_SET_VALUE(customerProvince_, customerProvince) };


        // customerRingingTime Field Functions 
        bool hasCustomerRingingTime() const { return this->customerRingingTime_ != nullptr;};
        void deleteCustomerRingingTime() { this->customerRingingTime_ = nullptr;};
        inline int64_t getCustomerRingingTime() const { DARABONBA_PTR_GET_DEFAULT(customerRingingTime_, 0L) };
        inline CdrObs& setCustomerRingingTime(int64_t customerRingingTime) { DARABONBA_PTR_SET_VALUE(customerRingingTime_, customerRingingTime) };


        // endReason Field Functions 
        bool hasEndReason() const { return this->endReason_ != nullptr;};
        void deleteEndReason() { this->endReason_ = nullptr;};
        inline string getEndReason() const { DARABONBA_PTR_GET_DEFAULT(endReason_, "") };
        inline CdrObs& setEndReason(string endReason) { DARABONBA_PTR_SET_VALUE(endReason_, endReason) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline CdrObs& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // evaluation Field Functions 
        bool hasEvaluation() const { return this->evaluation_ != nullptr;};
        void deleteEvaluation() { this->evaluation_ = nullptr;};
        inline int64_t getEvaluation() const { DARABONBA_PTR_GET_DEFAULT(evaluation_, 0L) };
        inline CdrObs& setEvaluation(int64_t evaluation) { DARABONBA_PTR_SET_VALUE(evaluation_, evaluation) };


        // hotline Field Functions 
        bool hasHotline() const { return this->hotline_ != nullptr;};
        void deleteHotline() { this->hotline_ = nullptr;};
        inline string getHotline() const { DARABONBA_PTR_GET_DEFAULT(hotline_, "") };
        inline CdrObs& setHotline(string hotline) { DARABONBA_PTR_SET_VALUE(hotline_, hotline) };


        // ivrName Field Functions 
        bool hasIvrName() const { return this->ivrName_ != nullptr;};
        void deleteIvrName() { this->ivrName_ = nullptr;};
        inline string getIvrName() const { DARABONBA_PTR_GET_DEFAULT(ivrName_, "") };
        inline CdrObs& setIvrName(string ivrName) { DARABONBA_PTR_SET_VALUE(ivrName_, ivrName) };


        // mark Field Functions 
        bool hasMark() const { return this->mark_ != nullptr;};
        void deleteMark() { this->mark_ = nullptr;};
        inline int64_t getMark() const { DARABONBA_PTR_GET_DEFAULT(mark_, 0L) };
        inline CdrObs& setMark(int64_t mark) { DARABONBA_PTR_SET_VALUE(mark_, mark) };


        // markData Field Functions 
        bool hasMarkData() const { return this->markData_ != nullptr;};
        void deleteMarkData() { this->markData_ = nullptr;};
        inline string getMarkData() const { DARABONBA_PTR_GET_DEFAULT(markData_, "") };
        inline CdrObs& setMarkData(string markData) { DARABONBA_PTR_SET_VALUE(markData_, markData) };


        // qname Field Functions 
        bool hasQname() const { return this->qname_ != nullptr;};
        void deleteQname() { this->qname_ = nullptr;};
        inline string getQname() const { DARABONBA_PTR_GET_DEFAULT(qname_, "") };
        inline CdrObs& setQname(string qname) { DARABONBA_PTR_SET_VALUE(qname_, qname) };


        // qno Field Functions 
        bool hasQno() const { return this->qno_ != nullptr;};
        void deleteQno() { this->qno_ = nullptr;};
        inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
        inline CdrObs& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


        // queueAnswerInTime Field Functions 
        bool hasQueueAnswerInTime() const { return this->queueAnswerInTime_ != nullptr;};
        void deleteQueueAnswerInTime() { this->queueAnswerInTime_ = nullptr;};
        inline int64_t getQueueAnswerInTime() const { DARABONBA_PTR_GET_DEFAULT(queueAnswerInTime_, 0L) };
        inline CdrObs& setQueueAnswerInTime(int64_t queueAnswerInTime) { DARABONBA_PTR_SET_VALUE(queueAnswerInTime_, queueAnswerInTime) };


        // recordFile Field Functions 
        bool hasRecordFile() const { return this->recordFile_ != nullptr;};
        void deleteRecordFile() { this->recordFile_ = nullptr;};
        inline string getRecordFile() const { DARABONBA_PTR_GET_DEFAULT(recordFile_, "") };
        inline CdrObs& setRecordFile(string recordFile) { DARABONBA_PTR_SET_VALUE(recordFile_, recordFile) };


        // sipCause Field Functions 
        bool hasSipCause() const { return this->sipCause_ != nullptr;};
        void deleteSipCause() { this->sipCause_ = nullptr;};
        inline string getSipCause() const { DARABONBA_PTR_GET_DEFAULT(sipCause_, "") };
        inline CdrObs& setSipCause(string sipCause) { DARABONBA_PTR_SET_VALUE(sipCause_, sipCause) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline CdrObs& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CdrObs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusCode Field Functions 
        bool hasStatusCode() const { return this->statusCode_ != nullptr;};
        void deleteStatusCode() { this->statusCode_ = nullptr;};
        inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
        inline CdrObs& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


        // tagNames Field Functions 
        bool hasTagNames() const { return this->tagNames_ != nullptr;};
        void deleteTagNames() { this->tagNames_ = nullptr;};
        inline const vector<string> & getTagNames() const { DARABONBA_PTR_GET_CONST(tagNames_, vector<string>) };
        inline vector<string> getTagNames() { DARABONBA_PTR_GET(tagNames_, vector<string>) };
        inline CdrObs& setTagNames(const vector<string> & tagNames) { DARABONBA_PTR_SET_VALUE(tagNames_, tagNames) };
        inline CdrObs& setTagNames(vector<string> && tagNames) { DARABONBA_PTR_SET_RVALUE(tagNames_, tagNames) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline CdrObs& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline CdrObs& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // totalDuration Field Functions 
        bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
        void deleteTotalDuration() { this->totalDuration_ = nullptr;};
        inline int64_t getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
        inline CdrObs& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


        // uniqueId Field Functions 
        bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
        void deleteUniqueId() { this->uniqueId_ = nullptr;};
        inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
        inline CdrObs& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


        // xnumber Field Functions 
        bool hasXnumber() const { return this->xnumber_ != nullptr;};
        void deleteXnumber() { this->xnumber_ = nullptr;};
        inline string getXnumber() const { DARABONBA_PTR_GET_DEFAULT(xnumber_, "") };
        inline CdrObs& setXnumber(string xnumber) { DARABONBA_PTR_SET_VALUE(xnumber_, xnumber) };


      protected:
        // 接通时长
        shared_ptr<int64_t> bridgeDuration_ {};
        // 接通时间
        shared_ptr<int64_t> bridgeTime_ {};
        // 通话记录ID
        shared_ptr<string> callId_ {};
        // 外呼类型，预览外呼、预测外呼、直接外呼
        shared_ptr<string> callType_ {};
        // 座席名称
        shared_ptr<string> clientName_ {};
        // 座席电话
        shared_ptr<string> clientNumber_ {};
        // 座席响铃时间
        shared_ptr<int64_t> clientRingingTime_ {};
        // 座席号
        shared_ptr<string> cno_ {};
        // 客户城市
        shared_ptr<string> customerCity_ {};
        // 客户号码，带区号
        shared_ptr<string> customerNumber_ {};
        // 客户号码加密串
        shared_ptr<string> customerNumberEncrypt_ {};
        // 客户省份
        shared_ptr<string> customerProvince_ {};
        // 客户响铃时间
        shared_ptr<int64_t> customerRingingTime_ {};
        // 挂机方
        shared_ptr<string> endReason_ {};
        // 结束时间
        shared_ptr<int64_t> endTime_ {};
        // 是否邀评
        shared_ptr<int64_t> evaluation_ {};
        // 热线号码
        shared_ptr<string> hotline_ {};
        // IVR名称
        shared_ptr<string> ivrName_ {};
        // 标记
        shared_ptr<int64_t> mark_ {};
        // 备注
        shared_ptr<string> markData_ {};
        // 来电队列名称
        shared_ptr<string> qname_ {};
        // 来电队列号
        shared_ptr<string> qno_ {};
        // 队列及时应答
        shared_ptr<int64_t> queueAnswerInTime_ {};
        // 录音文件名
        shared_ptr<string> recordFile_ {};
        // 呼叫结果
        shared_ptr<string> sipCause_ {};
        // 开始时间
        shared_ptr<int64_t> startTime_ {};
        // 接听状态
        shared_ptr<string> status_ {};
        // 接听状态映射
        shared_ptr<string> statusCode_ {};
        // 展示通话标签详情,当请求参数fields中包含tagNames时返回
        shared_ptr<vector<string>> tagNames_ {};
        // 标签
        shared_ptr<vector<string>> tags_ {};
        // 总时长
        shared_ptr<int64_t> totalDuration_ {};
        // 通话记录唯一标识
        shared_ptr<string> uniqueId_ {};
        // 虚拟号码
        shared_ptr<string> xnumber_ {};
      };

      virtual bool empty() const override { return this->cdrObs_ == nullptr
        && this->clinkRequestId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // cdrObs Field Functions 
      bool hasCdrObs() const { return this->cdrObs_ != nullptr;};
      void deleteCdrObs() { this->cdrObs_ = nullptr;};
      inline const vector<Data::CdrObs> & getCdrObs() const { DARABONBA_PTR_GET_CONST(cdrObs_, vector<Data::CdrObs>) };
      inline vector<Data::CdrObs> getCdrObs() { DARABONBA_PTR_GET(cdrObs_, vector<Data::CdrObs>) };
      inline Data& setCdrObs(const vector<Data::CdrObs> & cdrObs) { DARABONBA_PTR_SET_VALUE(cdrObs_, cdrObs) };
      inline Data& setCdrObs(vector<Data::CdrObs> && cdrObs) { DARABONBA_PTR_SET_RVALUE(cdrObs_, cdrObs) };


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


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // [外呼通话记录列表] #外呼通话记录列表
      shared_ptr<vector<Data::CdrObs>> cdrObs_ {};
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
      // 当前页码
      shared_ptr<int64_t> pageNumber_ {};
      // 一页展示条数
      shared_ptr<int64_t> pageSize_ {};
      // 总条数
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkListCdrObsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkListCdrObsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkListCdrObsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkListCdrObsResponseBody::Data) };
    inline ClinkListCdrObsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkListCdrObsResponseBody::Data) };
    inline ClinkListCdrObsResponseBody& setData(const ClinkListCdrObsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkListCdrObsResponseBody& setData(ClinkListCdrObsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkListCdrObsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkListCdrObsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkListCdrObsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
