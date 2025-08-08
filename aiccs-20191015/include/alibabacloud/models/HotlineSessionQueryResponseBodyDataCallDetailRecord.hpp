// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTLINESESSIONQUERYRESPONSEBODYDATACALLDETAILRECORD_HPP_
#define ALIBABACLOUD_MODELS_HOTLINESESSIONQUERYRESPONSEBODYDATACALLDETAILRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class HotlineSessionQueryResponseBodyDataCallDetailRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotlineSessionQueryResponseBodyDataCallDetailRecord& obj) { 
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
    friend void from_json(const Darabonba::Json& j, HotlineSessionQueryResponseBodyDataCallDetailRecord& obj) { 
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
    HotlineSessionQueryResponseBodyDataCallDetailRecord() = default ;
    HotlineSessionQueryResponseBodyDataCallDetailRecord(const HotlineSessionQueryResponseBodyDataCallDetailRecord &) = default ;
    HotlineSessionQueryResponseBodyDataCallDetailRecord(HotlineSessionQueryResponseBodyDataCallDetailRecord &&) = default ;
    HotlineSessionQueryResponseBodyDataCallDetailRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotlineSessionQueryResponseBodyDataCallDetailRecord() = default ;
    HotlineSessionQueryResponseBodyDataCallDetailRecord& operator=(const HotlineSessionQueryResponseBodyDataCallDetailRecord &) = default ;
    HotlineSessionQueryResponseBodyDataCallDetailRecord& operator=(HotlineSessionQueryResponseBodyDataCallDetailRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acid_ != nullptr
        && this->activeTransferId_ != nullptr && this->callContinueTime_ != nullptr && this->callResult_ != nullptr && this->callType_ != nullptr && this->calledNumber_ != nullptr
        && this->callingNumber_ != nullptr && this->createTime_ != nullptr && this->evaluationLevel_ != nullptr && this->evaluationScore_ != nullptr && this->groupId_ != nullptr
        && this->groupName_ != nullptr && this->hangUpRole_ != nullptr && this->hangUpTime_ != nullptr && this->id_ != nullptr && this->inQueueTime_ != nullptr
        && this->memberId_ != nullptr && this->memberName_ != nullptr && this->outQueueTime_ != nullptr && this->passiveTransferId_ != nullptr && this->passiveTransferIdType_ != nullptr
        && this->pickUpTime_ != nullptr && this->queueUpContinueTime_ != nullptr && this->ringContinueTime_ != nullptr && this->ringEndTime_ != nullptr && this->ringStartTime_ != nullptr
        && this->servicerId_ != nullptr && this->servicerName_ != nullptr && this->trunkCall_ != nullptr; };
    // acid Field Functions 
    bool hasAcid() const { return this->acid_ != nullptr;};
    void deleteAcid() { this->acid_ = nullptr;};
    inline string acid() const { DARABONBA_PTR_GET_DEFAULT(acid_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setAcid(string acid) { DARABONBA_PTR_SET_VALUE(acid_, acid) };


    // activeTransferId Field Functions 
    bool hasActiveTransferId() const { return this->activeTransferId_ != nullptr;};
    void deleteActiveTransferId() { this->activeTransferId_ = nullptr;};
    inline string activeTransferId() const { DARABONBA_PTR_GET_DEFAULT(activeTransferId_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setActiveTransferId(string activeTransferId) { DARABONBA_PTR_SET_VALUE(activeTransferId_, activeTransferId) };


    // callContinueTime Field Functions 
    bool hasCallContinueTime() const { return this->callContinueTime_ != nullptr;};
    void deleteCallContinueTime() { this->callContinueTime_ = nullptr;};
    inline int32_t callContinueTime() const { DARABONBA_PTR_GET_DEFAULT(callContinueTime_, 0) };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setCallContinueTime(int32_t callContinueTime) { DARABONBA_PTR_SET_VALUE(callContinueTime_, callContinueTime) };


    // callResult Field Functions 
    bool hasCallResult() const { return this->callResult_ != nullptr;};
    void deleteCallResult() { this->callResult_ = nullptr;};
    inline string callResult() const { DARABONBA_PTR_GET_DEFAULT(callResult_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setCallResult(string callResult) { DARABONBA_PTR_SET_VALUE(callResult_, callResult) };


    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline int32_t callType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0) };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setCallType(int32_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string callingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // evaluationLevel Field Functions 
    bool hasEvaluationLevel() const { return this->evaluationLevel_ != nullptr;};
    void deleteEvaluationLevel() { this->evaluationLevel_ = nullptr;};
    inline int32_t evaluationLevel() const { DARABONBA_PTR_GET_DEFAULT(evaluationLevel_, 0) };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setEvaluationLevel(int32_t evaluationLevel) { DARABONBA_PTR_SET_VALUE(evaluationLevel_, evaluationLevel) };


    // evaluationScore Field Functions 
    bool hasEvaluationScore() const { return this->evaluationScore_ != nullptr;};
    void deleteEvaluationScore() { this->evaluationScore_ = nullptr;};
    inline int32_t evaluationScore() const { DARABONBA_PTR_GET_DEFAULT(evaluationScore_, 0) };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setEvaluationScore(int32_t evaluationScore) { DARABONBA_PTR_SET_VALUE(evaluationScore_, evaluationScore) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // hangUpRole Field Functions 
    bool hasHangUpRole() const { return this->hangUpRole_ != nullptr;};
    void deleteHangUpRole() { this->hangUpRole_ = nullptr;};
    inline string hangUpRole() const { DARABONBA_PTR_GET_DEFAULT(hangUpRole_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setHangUpRole(string hangUpRole) { DARABONBA_PTR_SET_VALUE(hangUpRole_, hangUpRole) };


    // hangUpTime Field Functions 
    bool hasHangUpTime() const { return this->hangUpTime_ != nullptr;};
    void deleteHangUpTime() { this->hangUpTime_ = nullptr;};
    inline string hangUpTime() const { DARABONBA_PTR_GET_DEFAULT(hangUpTime_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setHangUpTime(string hangUpTime) { DARABONBA_PTR_SET_VALUE(hangUpTime_, hangUpTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inQueueTime Field Functions 
    bool hasInQueueTime() const { return this->inQueueTime_ != nullptr;};
    void deleteInQueueTime() { this->inQueueTime_ = nullptr;};
    inline string inQueueTime() const { DARABONBA_PTR_GET_DEFAULT(inQueueTime_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setInQueueTime(string inQueueTime) { DARABONBA_PTR_SET_VALUE(inQueueTime_, inQueueTime) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // outQueueTime Field Functions 
    bool hasOutQueueTime() const { return this->outQueueTime_ != nullptr;};
    void deleteOutQueueTime() { this->outQueueTime_ = nullptr;};
    inline string outQueueTime() const { DARABONBA_PTR_GET_DEFAULT(outQueueTime_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setOutQueueTime(string outQueueTime) { DARABONBA_PTR_SET_VALUE(outQueueTime_, outQueueTime) };


    // passiveTransferId Field Functions 
    bool hasPassiveTransferId() const { return this->passiveTransferId_ != nullptr;};
    void deletePassiveTransferId() { this->passiveTransferId_ = nullptr;};
    inline string passiveTransferId() const { DARABONBA_PTR_GET_DEFAULT(passiveTransferId_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setPassiveTransferId(string passiveTransferId) { DARABONBA_PTR_SET_VALUE(passiveTransferId_, passiveTransferId) };


    // passiveTransferIdType Field Functions 
    bool hasPassiveTransferIdType() const { return this->passiveTransferIdType_ != nullptr;};
    void deletePassiveTransferIdType() { this->passiveTransferIdType_ = nullptr;};
    inline string passiveTransferIdType() const { DARABONBA_PTR_GET_DEFAULT(passiveTransferIdType_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setPassiveTransferIdType(string passiveTransferIdType) { DARABONBA_PTR_SET_VALUE(passiveTransferIdType_, passiveTransferIdType) };


    // pickUpTime Field Functions 
    bool hasPickUpTime() const { return this->pickUpTime_ != nullptr;};
    void deletePickUpTime() { this->pickUpTime_ = nullptr;};
    inline string pickUpTime() const { DARABONBA_PTR_GET_DEFAULT(pickUpTime_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setPickUpTime(string pickUpTime) { DARABONBA_PTR_SET_VALUE(pickUpTime_, pickUpTime) };


    // queueUpContinueTime Field Functions 
    bool hasQueueUpContinueTime() const { return this->queueUpContinueTime_ != nullptr;};
    void deleteQueueUpContinueTime() { this->queueUpContinueTime_ = nullptr;};
    inline int32_t queueUpContinueTime() const { DARABONBA_PTR_GET_DEFAULT(queueUpContinueTime_, 0) };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setQueueUpContinueTime(int32_t queueUpContinueTime) { DARABONBA_PTR_SET_VALUE(queueUpContinueTime_, queueUpContinueTime) };


    // ringContinueTime Field Functions 
    bool hasRingContinueTime() const { return this->ringContinueTime_ != nullptr;};
    void deleteRingContinueTime() { this->ringContinueTime_ = nullptr;};
    inline int32_t ringContinueTime() const { DARABONBA_PTR_GET_DEFAULT(ringContinueTime_, 0) };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setRingContinueTime(int32_t ringContinueTime) { DARABONBA_PTR_SET_VALUE(ringContinueTime_, ringContinueTime) };


    // ringEndTime Field Functions 
    bool hasRingEndTime() const { return this->ringEndTime_ != nullptr;};
    void deleteRingEndTime() { this->ringEndTime_ = nullptr;};
    inline string ringEndTime() const { DARABONBA_PTR_GET_DEFAULT(ringEndTime_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setRingEndTime(string ringEndTime) { DARABONBA_PTR_SET_VALUE(ringEndTime_, ringEndTime) };


    // ringStartTime Field Functions 
    bool hasRingStartTime() const { return this->ringStartTime_ != nullptr;};
    void deleteRingStartTime() { this->ringStartTime_ = nullptr;};
    inline string ringStartTime() const { DARABONBA_PTR_GET_DEFAULT(ringStartTime_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setRingStartTime(string ringStartTime) { DARABONBA_PTR_SET_VALUE(ringStartTime_, ringStartTime) };


    // servicerId Field Functions 
    bool hasServicerId() const { return this->servicerId_ != nullptr;};
    void deleteServicerId() { this->servicerId_ = nullptr;};
    inline string servicerId() const { DARABONBA_PTR_GET_DEFAULT(servicerId_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setServicerId(string servicerId) { DARABONBA_PTR_SET_VALUE(servicerId_, servicerId) };


    // servicerName Field Functions 
    bool hasServicerName() const { return this->servicerName_ != nullptr;};
    void deleteServicerName() { this->servicerName_ = nullptr;};
    inline string servicerName() const { DARABONBA_PTR_GET_DEFAULT(servicerName_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setServicerName(string servicerName) { DARABONBA_PTR_SET_VALUE(servicerName_, servicerName) };


    // trunkCall Field Functions 
    bool hasTrunkCall() const { return this->trunkCall_ != nullptr;};
    void deleteTrunkCall() { this->trunkCall_ = nullptr;};
    inline string trunkCall() const { DARABONBA_PTR_GET_DEFAULT(trunkCall_, "") };
    inline HotlineSessionQueryResponseBodyDataCallDetailRecord& setTrunkCall(string trunkCall) { DARABONBA_PTR_SET_VALUE(trunkCall_, trunkCall) };


  protected:
    std::shared_ptr<string> acid_ = nullptr;
    std::shared_ptr<string> activeTransferId_ = nullptr;
    std::shared_ptr<int32_t> callContinueTime_ = nullptr;
    std::shared_ptr<string> callResult_ = nullptr;
    std::shared_ptr<int32_t> callType_ = nullptr;
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<string> callingNumber_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int32_t> evaluationLevel_ = nullptr;
    std::shared_ptr<int32_t> evaluationScore_ = nullptr;
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> hangUpRole_ = nullptr;
    std::shared_ptr<string> hangUpTime_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> inQueueTime_ = nullptr;
    std::shared_ptr<string> memberId_ = nullptr;
    std::shared_ptr<string> memberName_ = nullptr;
    std::shared_ptr<string> outQueueTime_ = nullptr;
    std::shared_ptr<string> passiveTransferId_ = nullptr;
    std::shared_ptr<string> passiveTransferIdType_ = nullptr;
    std::shared_ptr<string> pickUpTime_ = nullptr;
    std::shared_ptr<int32_t> queueUpContinueTime_ = nullptr;
    std::shared_ptr<int32_t> ringContinueTime_ = nullptr;
    std::shared_ptr<string> ringEndTime_ = nullptr;
    std::shared_ptr<string> ringStartTime_ = nullptr;
    std::shared_ptr<string> servicerId_ = nullptr;
    std::shared_ptr<string> servicerName_ = nullptr;
    std::shared_ptr<string> trunkCall_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
