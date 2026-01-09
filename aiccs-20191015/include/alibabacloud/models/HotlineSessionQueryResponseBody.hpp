// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTLINESESSIONQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTLINESESSIONQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class HotlineSessionQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotlineSessionQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, HotlineSessionQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    HotlineSessionQueryResponseBody() = default ;
    HotlineSessionQueryResponseBody(const HotlineSessionQueryResponseBody &) = default ;
    HotlineSessionQueryResponseBody(HotlineSessionQueryResponseBody &&) = default ;
    HotlineSessionQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotlineSessionQueryResponseBody() = default ;
    HotlineSessionQueryResponseBody& operator=(const HotlineSessionQueryResponseBody &) = default ;
    HotlineSessionQueryResponseBody& operator=(HotlineSessionQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CallDetailRecord, callDetailRecord_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CallDetailRecord, callDetailRecord_);
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
      class CallDetailRecord : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CallDetailRecord& obj) { 
          DARABONBA_PTR_TO_JSON(Acid, acid_);
          DARABONBA_PTR_TO_JSON(ActiveTransferId, activeTransferId_);
          DARABONBA_PTR_TO_JSON(CallContinueTime, callContinueTime_);
          DARABONBA_PTR_TO_JSON(CallResult, callResult_);
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
          DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EvaluationLevel, evaluationLevel_);
          DARABONBA_PTR_TO_JSON(EvaluationScore, evaluationScore_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(HangUpRole, hangUpRole_);
          DARABONBA_PTR_TO_JSON(HangUpTime, hangUpTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(InQueueTime, inQueueTime_);
          DARABONBA_PTR_TO_JSON(MemberId, memberId_);
          DARABONBA_PTR_TO_JSON(MemberName, memberName_);
          DARABONBA_PTR_TO_JSON(OutQueueTime, outQueueTime_);
          DARABONBA_PTR_TO_JSON(PassiveTransferId, passiveTransferId_);
          DARABONBA_PTR_TO_JSON(PassiveTransferIdType, passiveTransferIdType_);
          DARABONBA_PTR_TO_JSON(PickUpTime, pickUpTime_);
          DARABONBA_PTR_TO_JSON(QueueUpContinueTime, queueUpContinueTime_);
          DARABONBA_PTR_TO_JSON(RingContinueTime, ringContinueTime_);
          DARABONBA_PTR_TO_JSON(RingEndTime, ringEndTime_);
          DARABONBA_PTR_TO_JSON(RingStartTime, ringStartTime_);
          DARABONBA_PTR_TO_JSON(ServicerId, servicerId_);
          DARABONBA_PTR_TO_JSON(ServicerName, servicerName_);
          DARABONBA_PTR_TO_JSON(TrunkCall, trunkCall_);
        };
        friend void from_json(const Darabonba::Json& j, CallDetailRecord& obj) { 
          DARABONBA_PTR_FROM_JSON(Acid, acid_);
          DARABONBA_PTR_FROM_JSON(ActiveTransferId, activeTransferId_);
          DARABONBA_PTR_FROM_JSON(CallContinueTime, callContinueTime_);
          DARABONBA_PTR_FROM_JSON(CallResult, callResult_);
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
          DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EvaluationLevel, evaluationLevel_);
          DARABONBA_PTR_FROM_JSON(EvaluationScore, evaluationScore_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(HangUpRole, hangUpRole_);
          DARABONBA_PTR_FROM_JSON(HangUpTime, hangUpTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(InQueueTime, inQueueTime_);
          DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
          DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
          DARABONBA_PTR_FROM_JSON(OutQueueTime, outQueueTime_);
          DARABONBA_PTR_FROM_JSON(PassiveTransferId, passiveTransferId_);
          DARABONBA_PTR_FROM_JSON(PassiveTransferIdType, passiveTransferIdType_);
          DARABONBA_PTR_FROM_JSON(PickUpTime, pickUpTime_);
          DARABONBA_PTR_FROM_JSON(QueueUpContinueTime, queueUpContinueTime_);
          DARABONBA_PTR_FROM_JSON(RingContinueTime, ringContinueTime_);
          DARABONBA_PTR_FROM_JSON(RingEndTime, ringEndTime_);
          DARABONBA_PTR_FROM_JSON(RingStartTime, ringStartTime_);
          DARABONBA_PTR_FROM_JSON(ServicerId, servicerId_);
          DARABONBA_PTR_FROM_JSON(ServicerName, servicerName_);
          DARABONBA_PTR_FROM_JSON(TrunkCall, trunkCall_);
        };
        CallDetailRecord() = default ;
        CallDetailRecord(const CallDetailRecord &) = default ;
        CallDetailRecord(CallDetailRecord &&) = default ;
        CallDetailRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CallDetailRecord() = default ;
        CallDetailRecord& operator=(const CallDetailRecord &) = default ;
        CallDetailRecord& operator=(CallDetailRecord &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->acid_ == nullptr
        && this->activeTransferId_ == nullptr && this->callContinueTime_ == nullptr && this->callResult_ == nullptr && this->callType_ == nullptr && this->calledNumber_ == nullptr
        && this->callingNumber_ == nullptr && this->createTime_ == nullptr && this->evaluationLevel_ == nullptr && this->evaluationScore_ == nullptr && this->groupId_ == nullptr
        && this->groupName_ == nullptr && this->hangUpRole_ == nullptr && this->hangUpTime_ == nullptr && this->id_ == nullptr && this->inQueueTime_ == nullptr
        && this->memberId_ == nullptr && this->memberName_ == nullptr && this->outQueueTime_ == nullptr && this->passiveTransferId_ == nullptr && this->passiveTransferIdType_ == nullptr
        && this->pickUpTime_ == nullptr && this->queueUpContinueTime_ == nullptr && this->ringContinueTime_ == nullptr && this->ringEndTime_ == nullptr && this->ringStartTime_ == nullptr
        && this->servicerId_ == nullptr && this->servicerName_ == nullptr && this->trunkCall_ == nullptr; };
        // acid Field Functions 
        bool hasAcid() const { return this->acid_ != nullptr;};
        void deleteAcid() { this->acid_ = nullptr;};
        inline string getAcid() const { DARABONBA_PTR_GET_DEFAULT(acid_, "") };
        inline CallDetailRecord& setAcid(string acid) { DARABONBA_PTR_SET_VALUE(acid_, acid) };


        // activeTransferId Field Functions 
        bool hasActiveTransferId() const { return this->activeTransferId_ != nullptr;};
        void deleteActiveTransferId() { this->activeTransferId_ = nullptr;};
        inline string getActiveTransferId() const { DARABONBA_PTR_GET_DEFAULT(activeTransferId_, "") };
        inline CallDetailRecord& setActiveTransferId(string activeTransferId) { DARABONBA_PTR_SET_VALUE(activeTransferId_, activeTransferId) };


        // callContinueTime Field Functions 
        bool hasCallContinueTime() const { return this->callContinueTime_ != nullptr;};
        void deleteCallContinueTime() { this->callContinueTime_ = nullptr;};
        inline int32_t getCallContinueTime() const { DARABONBA_PTR_GET_DEFAULT(callContinueTime_, 0) };
        inline CallDetailRecord& setCallContinueTime(int32_t callContinueTime) { DARABONBA_PTR_SET_VALUE(callContinueTime_, callContinueTime) };


        // callResult Field Functions 
        bool hasCallResult() const { return this->callResult_ != nullptr;};
        void deleteCallResult() { this->callResult_ = nullptr;};
        inline string getCallResult() const { DARABONBA_PTR_GET_DEFAULT(callResult_, "") };
        inline CallDetailRecord& setCallResult(string callResult) { DARABONBA_PTR_SET_VALUE(callResult_, callResult) };


        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline int32_t getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0) };
        inline CallDetailRecord& setCallType(int32_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // calledNumber Field Functions 
        bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
        void deleteCalledNumber() { this->calledNumber_ = nullptr;};
        inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
        inline CallDetailRecord& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


        // callingNumber Field Functions 
        bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
        void deleteCallingNumber() { this->callingNumber_ = nullptr;};
        inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
        inline CallDetailRecord& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline CallDetailRecord& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // evaluationLevel Field Functions 
        bool hasEvaluationLevel() const { return this->evaluationLevel_ != nullptr;};
        void deleteEvaluationLevel() { this->evaluationLevel_ = nullptr;};
        inline int32_t getEvaluationLevel() const { DARABONBA_PTR_GET_DEFAULT(evaluationLevel_, 0) };
        inline CallDetailRecord& setEvaluationLevel(int32_t evaluationLevel) { DARABONBA_PTR_SET_VALUE(evaluationLevel_, evaluationLevel) };


        // evaluationScore Field Functions 
        bool hasEvaluationScore() const { return this->evaluationScore_ != nullptr;};
        void deleteEvaluationScore() { this->evaluationScore_ = nullptr;};
        inline int32_t getEvaluationScore() const { DARABONBA_PTR_GET_DEFAULT(evaluationScore_, 0) };
        inline CallDetailRecord& setEvaluationScore(int32_t evaluationScore) { DARABONBA_PTR_SET_VALUE(evaluationScore_, evaluationScore) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
        inline CallDetailRecord& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline CallDetailRecord& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // hangUpRole Field Functions 
        bool hasHangUpRole() const { return this->hangUpRole_ != nullptr;};
        void deleteHangUpRole() { this->hangUpRole_ = nullptr;};
        inline string getHangUpRole() const { DARABONBA_PTR_GET_DEFAULT(hangUpRole_, "") };
        inline CallDetailRecord& setHangUpRole(string hangUpRole) { DARABONBA_PTR_SET_VALUE(hangUpRole_, hangUpRole) };


        // hangUpTime Field Functions 
        bool hasHangUpTime() const { return this->hangUpTime_ != nullptr;};
        void deleteHangUpTime() { this->hangUpTime_ = nullptr;};
        inline string getHangUpTime() const { DARABONBA_PTR_GET_DEFAULT(hangUpTime_, "") };
        inline CallDetailRecord& setHangUpTime(string hangUpTime) { DARABONBA_PTR_SET_VALUE(hangUpTime_, hangUpTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline CallDetailRecord& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inQueueTime Field Functions 
        bool hasInQueueTime() const { return this->inQueueTime_ != nullptr;};
        void deleteInQueueTime() { this->inQueueTime_ = nullptr;};
        inline string getInQueueTime() const { DARABONBA_PTR_GET_DEFAULT(inQueueTime_, "") };
        inline CallDetailRecord& setInQueueTime(string inQueueTime) { DARABONBA_PTR_SET_VALUE(inQueueTime_, inQueueTime) };


        // memberId Field Functions 
        bool hasMemberId() const { return this->memberId_ != nullptr;};
        void deleteMemberId() { this->memberId_ = nullptr;};
        inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
        inline CallDetailRecord& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


        // memberName Field Functions 
        bool hasMemberName() const { return this->memberName_ != nullptr;};
        void deleteMemberName() { this->memberName_ = nullptr;};
        inline string getMemberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
        inline CallDetailRecord& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


        // outQueueTime Field Functions 
        bool hasOutQueueTime() const { return this->outQueueTime_ != nullptr;};
        void deleteOutQueueTime() { this->outQueueTime_ = nullptr;};
        inline string getOutQueueTime() const { DARABONBA_PTR_GET_DEFAULT(outQueueTime_, "") };
        inline CallDetailRecord& setOutQueueTime(string outQueueTime) { DARABONBA_PTR_SET_VALUE(outQueueTime_, outQueueTime) };


        // passiveTransferId Field Functions 
        bool hasPassiveTransferId() const { return this->passiveTransferId_ != nullptr;};
        void deletePassiveTransferId() { this->passiveTransferId_ = nullptr;};
        inline string getPassiveTransferId() const { DARABONBA_PTR_GET_DEFAULT(passiveTransferId_, "") };
        inline CallDetailRecord& setPassiveTransferId(string passiveTransferId) { DARABONBA_PTR_SET_VALUE(passiveTransferId_, passiveTransferId) };


        // passiveTransferIdType Field Functions 
        bool hasPassiveTransferIdType() const { return this->passiveTransferIdType_ != nullptr;};
        void deletePassiveTransferIdType() { this->passiveTransferIdType_ = nullptr;};
        inline string getPassiveTransferIdType() const { DARABONBA_PTR_GET_DEFAULT(passiveTransferIdType_, "") };
        inline CallDetailRecord& setPassiveTransferIdType(string passiveTransferIdType) { DARABONBA_PTR_SET_VALUE(passiveTransferIdType_, passiveTransferIdType) };


        // pickUpTime Field Functions 
        bool hasPickUpTime() const { return this->pickUpTime_ != nullptr;};
        void deletePickUpTime() { this->pickUpTime_ = nullptr;};
        inline string getPickUpTime() const { DARABONBA_PTR_GET_DEFAULT(pickUpTime_, "") };
        inline CallDetailRecord& setPickUpTime(string pickUpTime) { DARABONBA_PTR_SET_VALUE(pickUpTime_, pickUpTime) };


        // queueUpContinueTime Field Functions 
        bool hasQueueUpContinueTime() const { return this->queueUpContinueTime_ != nullptr;};
        void deleteQueueUpContinueTime() { this->queueUpContinueTime_ = nullptr;};
        inline int32_t getQueueUpContinueTime() const { DARABONBA_PTR_GET_DEFAULT(queueUpContinueTime_, 0) };
        inline CallDetailRecord& setQueueUpContinueTime(int32_t queueUpContinueTime) { DARABONBA_PTR_SET_VALUE(queueUpContinueTime_, queueUpContinueTime) };


        // ringContinueTime Field Functions 
        bool hasRingContinueTime() const { return this->ringContinueTime_ != nullptr;};
        void deleteRingContinueTime() { this->ringContinueTime_ = nullptr;};
        inline int32_t getRingContinueTime() const { DARABONBA_PTR_GET_DEFAULT(ringContinueTime_, 0) };
        inline CallDetailRecord& setRingContinueTime(int32_t ringContinueTime) { DARABONBA_PTR_SET_VALUE(ringContinueTime_, ringContinueTime) };


        // ringEndTime Field Functions 
        bool hasRingEndTime() const { return this->ringEndTime_ != nullptr;};
        void deleteRingEndTime() { this->ringEndTime_ = nullptr;};
        inline string getRingEndTime() const { DARABONBA_PTR_GET_DEFAULT(ringEndTime_, "") };
        inline CallDetailRecord& setRingEndTime(string ringEndTime) { DARABONBA_PTR_SET_VALUE(ringEndTime_, ringEndTime) };


        // ringStartTime Field Functions 
        bool hasRingStartTime() const { return this->ringStartTime_ != nullptr;};
        void deleteRingStartTime() { this->ringStartTime_ = nullptr;};
        inline string getRingStartTime() const { DARABONBA_PTR_GET_DEFAULT(ringStartTime_, "") };
        inline CallDetailRecord& setRingStartTime(string ringStartTime) { DARABONBA_PTR_SET_VALUE(ringStartTime_, ringStartTime) };


        // servicerId Field Functions 
        bool hasServicerId() const { return this->servicerId_ != nullptr;};
        void deleteServicerId() { this->servicerId_ = nullptr;};
        inline string getServicerId() const { DARABONBA_PTR_GET_DEFAULT(servicerId_, "") };
        inline CallDetailRecord& setServicerId(string servicerId) { DARABONBA_PTR_SET_VALUE(servicerId_, servicerId) };


        // servicerName Field Functions 
        bool hasServicerName() const { return this->servicerName_ != nullptr;};
        void deleteServicerName() { this->servicerName_ = nullptr;};
        inline string getServicerName() const { DARABONBA_PTR_GET_DEFAULT(servicerName_, "") };
        inline CallDetailRecord& setServicerName(string servicerName) { DARABONBA_PTR_SET_VALUE(servicerName_, servicerName) };


        // trunkCall Field Functions 
        bool hasTrunkCall() const { return this->trunkCall_ != nullptr;};
        void deleteTrunkCall() { this->trunkCall_ = nullptr;};
        inline string getTrunkCall() const { DARABONBA_PTR_GET_DEFAULT(trunkCall_, "") };
        inline CallDetailRecord& setTrunkCall(string trunkCall) { DARABONBA_PTR_SET_VALUE(trunkCall_, trunkCall) };


      protected:
        shared_ptr<string> acid_ {};
        shared_ptr<string> activeTransferId_ {};
        shared_ptr<int32_t> callContinueTime_ {};
        shared_ptr<string> callResult_ {};
        shared_ptr<int32_t> callType_ {};
        shared_ptr<string> calledNumber_ {};
        shared_ptr<string> callingNumber_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<int32_t> evaluationLevel_ {};
        shared_ptr<int32_t> evaluationScore_ {};
        shared_ptr<int64_t> groupId_ {};
        shared_ptr<string> groupName_ {};
        shared_ptr<string> hangUpRole_ {};
        shared_ptr<string> hangUpTime_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> inQueueTime_ {};
        shared_ptr<string> memberId_ {};
        shared_ptr<string> memberName_ {};
        shared_ptr<string> outQueueTime_ {};
        shared_ptr<string> passiveTransferId_ {};
        shared_ptr<string> passiveTransferIdType_ {};
        shared_ptr<string> pickUpTime_ {};
        shared_ptr<int32_t> queueUpContinueTime_ {};
        shared_ptr<int32_t> ringContinueTime_ {};
        shared_ptr<string> ringEndTime_ {};
        shared_ptr<string> ringStartTime_ {};
        shared_ptr<string> servicerId_ {};
        shared_ptr<string> servicerName_ {};
        shared_ptr<string> trunkCall_ {};
      };

      virtual bool empty() const override { return this->callDetailRecord_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // callDetailRecord Field Functions 
      bool hasCallDetailRecord() const { return this->callDetailRecord_ != nullptr;};
      void deleteCallDetailRecord() { this->callDetailRecord_ = nullptr;};
      inline const vector<Data::CallDetailRecord> & getCallDetailRecord() const { DARABONBA_PTR_GET_CONST(callDetailRecord_, vector<Data::CallDetailRecord>) };
      inline vector<Data::CallDetailRecord> getCallDetailRecord() { DARABONBA_PTR_GET(callDetailRecord_, vector<Data::CallDetailRecord>) };
      inline Data& setCallDetailRecord(const vector<Data::CallDetailRecord> & callDetailRecord) { DARABONBA_PTR_SET_VALUE(callDetailRecord_, callDetailRecord) };
      inline Data& setCallDetailRecord(vector<Data::CallDetailRecord> && callDetailRecord) { DARABONBA_PTR_SET_RVALUE(callDetailRecord_, callDetailRecord) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::CallDetailRecord>> callDetailRecord_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotlineSessionQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const HotlineSessionQueryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, HotlineSessionQueryResponseBody::Data) };
    inline HotlineSessionQueryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, HotlineSessionQueryResponseBody::Data) };
    inline HotlineSessionQueryResponseBody& setData(const HotlineSessionQueryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline HotlineSessionQueryResponseBody& setData(HotlineSessionQueryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotlineSessionQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotlineSessionQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotlineSessionQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<HotlineSessionQueryResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
