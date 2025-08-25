// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLEGACYAGENTSTATUSLOGSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLEGACYAGENTSTATUSLOGSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListLegacyAgentStatusLogsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLegacyAgentStatusLogsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AgentDropCall, agentDropCall_);
      DARABONBA_PTR_TO_JSON(AgentNo, agentNo_);
      DARABONBA_PTR_TO_JSON(AliHangupCause, aliHangupCause_);
      DARABONBA_PTR_TO_JSON(CallDir, callDir_);
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(CalleeId, calleeId_);
      DARABONBA_PTR_TO_JSON(CallerId, callerId_);
      DARABONBA_PTR_TO_JSON(ConnId, connId_);
      DARABONBA_PTR_TO_JSON(Extend1, extend1_);
      DARABONBA_PTR_TO_JSON(Extend2, extend2_);
      DARABONBA_PTR_TO_JSON(Extend3, extend3_);
      DARABONBA_PTR_TO_JSON(Extend4, extend4_);
      DARABONBA_PTR_TO_JSON(GroupNo, groupNo_);
      DARABONBA_PTR_TO_JSON(MonitedAgentNo, monitedAgentNo_);
      DARABONBA_PTR_TO_JSON(MonitedAgentPhoneNo, monitedAgentPhoneNo_);
      DARABONBA_PTR_TO_JSON(OutboundScenario, outboundScenario_);
      DARABONBA_PTR_TO_JSON(PhoneNo, phoneNo_);
      DARABONBA_PTR_TO_JSON(StatisticDate, statisticDate_);
      DARABONBA_PTR_TO_JSON(StatisticTime, statisticTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetRequest, targetRequest_);
      DARABONBA_PTR_TO_JSON(TargetSelect, targetSelect_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TransferNo, transferNo_);
      DARABONBA_PTR_TO_JSON(TransferNumber, transferNumber_);
    };
    friend void from_json(const Darabonba::Json& j, ListLegacyAgentStatusLogsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentDropCall, agentDropCall_);
      DARABONBA_PTR_FROM_JSON(AgentNo, agentNo_);
      DARABONBA_PTR_FROM_JSON(AliHangupCause, aliHangupCause_);
      DARABONBA_PTR_FROM_JSON(CallDir, callDir_);
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(CalleeId, calleeId_);
      DARABONBA_PTR_FROM_JSON(CallerId, callerId_);
      DARABONBA_PTR_FROM_JSON(ConnId, connId_);
      DARABONBA_PTR_FROM_JSON(Extend1, extend1_);
      DARABONBA_PTR_FROM_JSON(Extend2, extend2_);
      DARABONBA_PTR_FROM_JSON(Extend3, extend3_);
      DARABONBA_PTR_FROM_JSON(Extend4, extend4_);
      DARABONBA_PTR_FROM_JSON(GroupNo, groupNo_);
      DARABONBA_PTR_FROM_JSON(MonitedAgentNo, monitedAgentNo_);
      DARABONBA_PTR_FROM_JSON(MonitedAgentPhoneNo, monitedAgentPhoneNo_);
      DARABONBA_PTR_FROM_JSON(OutboundScenario, outboundScenario_);
      DARABONBA_PTR_FROM_JSON(PhoneNo, phoneNo_);
      DARABONBA_PTR_FROM_JSON(StatisticDate, statisticDate_);
      DARABONBA_PTR_FROM_JSON(StatisticTime, statisticTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetRequest, targetRequest_);
      DARABONBA_PTR_FROM_JSON(TargetSelect, targetSelect_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TransferNo, transferNo_);
      DARABONBA_PTR_FROM_JSON(TransferNumber, transferNumber_);
    };
    ListLegacyAgentStatusLogsResponseBodyDataList() = default ;
    ListLegacyAgentStatusLogsResponseBodyDataList(const ListLegacyAgentStatusLogsResponseBodyDataList &) = default ;
    ListLegacyAgentStatusLogsResponseBodyDataList(ListLegacyAgentStatusLogsResponseBodyDataList &&) = default ;
    ListLegacyAgentStatusLogsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLegacyAgentStatusLogsResponseBodyDataList() = default ;
    ListLegacyAgentStatusLogsResponseBodyDataList& operator=(const ListLegacyAgentStatusLogsResponseBodyDataList &) = default ;
    ListLegacyAgentStatusLogsResponseBodyDataList& operator=(ListLegacyAgentStatusLogsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentDropCall_ != nullptr
        && this->agentNo_ != nullptr && this->aliHangupCause_ != nullptr && this->callDir_ != nullptr && this->callId_ != nullptr && this->callType_ != nullptr
        && this->calleeId_ != nullptr && this->callerId_ != nullptr && this->connId_ != nullptr && this->extend1_ != nullptr && this->extend2_ != nullptr
        && this->extend3_ != nullptr && this->extend4_ != nullptr && this->groupNo_ != nullptr && this->monitedAgentNo_ != nullptr && this->monitedAgentPhoneNo_ != nullptr
        && this->outboundScenario_ != nullptr && this->phoneNo_ != nullptr && this->statisticDate_ != nullptr && this->statisticTime_ != nullptr && this->status_ != nullptr
        && this->targetRequest_ != nullptr && this->targetSelect_ != nullptr && this->tenantId_ != nullptr && this->transferNo_ != nullptr && this->transferNumber_ != nullptr; };
    // agentDropCall Field Functions 
    bool hasAgentDropCall() const { return this->agentDropCall_ != nullptr;};
    void deleteAgentDropCall() { this->agentDropCall_ = nullptr;};
    inline string agentDropCall() const { DARABONBA_PTR_GET_DEFAULT(agentDropCall_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setAgentDropCall(string agentDropCall) { DARABONBA_PTR_SET_VALUE(agentDropCall_, agentDropCall) };


    // agentNo Field Functions 
    bool hasAgentNo() const { return this->agentNo_ != nullptr;};
    void deleteAgentNo() { this->agentNo_ = nullptr;};
    inline string agentNo() const { DARABONBA_PTR_GET_DEFAULT(agentNo_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setAgentNo(string agentNo) { DARABONBA_PTR_SET_VALUE(agentNo_, agentNo) };


    // aliHangupCause Field Functions 
    bool hasAliHangupCause() const { return this->aliHangupCause_ != nullptr;};
    void deleteAliHangupCause() { this->aliHangupCause_ = nullptr;};
    inline string aliHangupCause() const { DARABONBA_PTR_GET_DEFAULT(aliHangupCause_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setAliHangupCause(string aliHangupCause) { DARABONBA_PTR_SET_VALUE(aliHangupCause_, aliHangupCause) };


    // callDir Field Functions 
    bool hasCallDir() const { return this->callDir_ != nullptr;};
    void deleteCallDir() { this->callDir_ = nullptr;};
    inline string callDir() const { DARABONBA_PTR_GET_DEFAULT(callDir_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setCallDir(string callDir) { DARABONBA_PTR_SET_VALUE(callDir_, callDir) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline string callType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // calleeId Field Functions 
    bool hasCalleeId() const { return this->calleeId_ != nullptr;};
    void deleteCalleeId() { this->calleeId_ = nullptr;};
    inline string calleeId() const { DARABONBA_PTR_GET_DEFAULT(calleeId_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setCalleeId(string calleeId) { DARABONBA_PTR_SET_VALUE(calleeId_, calleeId) };


    // callerId Field Functions 
    bool hasCallerId() const { return this->callerId_ != nullptr;};
    void deleteCallerId() { this->callerId_ = nullptr;};
    inline string callerId() const { DARABONBA_PTR_GET_DEFAULT(callerId_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setCallerId(string callerId) { DARABONBA_PTR_SET_VALUE(callerId_, callerId) };


    // connId Field Functions 
    bool hasConnId() const { return this->connId_ != nullptr;};
    void deleteConnId() { this->connId_ = nullptr;};
    inline string connId() const { DARABONBA_PTR_GET_DEFAULT(connId_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setConnId(string connId) { DARABONBA_PTR_SET_VALUE(connId_, connId) };


    // extend1 Field Functions 
    bool hasExtend1() const { return this->extend1_ != nullptr;};
    void deleteExtend1() { this->extend1_ = nullptr;};
    inline string extend1() const { DARABONBA_PTR_GET_DEFAULT(extend1_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setExtend1(string extend1) { DARABONBA_PTR_SET_VALUE(extend1_, extend1) };


    // extend2 Field Functions 
    bool hasExtend2() const { return this->extend2_ != nullptr;};
    void deleteExtend2() { this->extend2_ = nullptr;};
    inline string extend2() const { DARABONBA_PTR_GET_DEFAULT(extend2_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setExtend2(string extend2) { DARABONBA_PTR_SET_VALUE(extend2_, extend2) };


    // extend3 Field Functions 
    bool hasExtend3() const { return this->extend3_ != nullptr;};
    void deleteExtend3() { this->extend3_ = nullptr;};
    inline string extend3() const { DARABONBA_PTR_GET_DEFAULT(extend3_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setExtend3(string extend3) { DARABONBA_PTR_SET_VALUE(extend3_, extend3) };


    // extend4 Field Functions 
    bool hasExtend4() const { return this->extend4_ != nullptr;};
    void deleteExtend4() { this->extend4_ = nullptr;};
    inline string extend4() const { DARABONBA_PTR_GET_DEFAULT(extend4_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setExtend4(string extend4) { DARABONBA_PTR_SET_VALUE(extend4_, extend4) };


    // groupNo Field Functions 
    bool hasGroupNo() const { return this->groupNo_ != nullptr;};
    void deleteGroupNo() { this->groupNo_ = nullptr;};
    inline string groupNo() const { DARABONBA_PTR_GET_DEFAULT(groupNo_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setGroupNo(string groupNo) { DARABONBA_PTR_SET_VALUE(groupNo_, groupNo) };


    // monitedAgentNo Field Functions 
    bool hasMonitedAgentNo() const { return this->monitedAgentNo_ != nullptr;};
    void deleteMonitedAgentNo() { this->monitedAgentNo_ = nullptr;};
    inline string monitedAgentNo() const { DARABONBA_PTR_GET_DEFAULT(monitedAgentNo_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setMonitedAgentNo(string monitedAgentNo) { DARABONBA_PTR_SET_VALUE(monitedAgentNo_, monitedAgentNo) };


    // monitedAgentPhoneNo Field Functions 
    bool hasMonitedAgentPhoneNo() const { return this->monitedAgentPhoneNo_ != nullptr;};
    void deleteMonitedAgentPhoneNo() { this->monitedAgentPhoneNo_ = nullptr;};
    inline string monitedAgentPhoneNo() const { DARABONBA_PTR_GET_DEFAULT(monitedAgentPhoneNo_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setMonitedAgentPhoneNo(string monitedAgentPhoneNo) { DARABONBA_PTR_SET_VALUE(monitedAgentPhoneNo_, monitedAgentPhoneNo) };


    // outboundScenario Field Functions 
    bool hasOutboundScenario() const { return this->outboundScenario_ != nullptr;};
    void deleteOutboundScenario() { this->outboundScenario_ = nullptr;};
    inline bool outboundScenario() const { DARABONBA_PTR_GET_DEFAULT(outboundScenario_, false) };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setOutboundScenario(bool outboundScenario) { DARABONBA_PTR_SET_VALUE(outboundScenario_, outboundScenario) };


    // phoneNo Field Functions 
    bool hasPhoneNo() const { return this->phoneNo_ != nullptr;};
    void deletePhoneNo() { this->phoneNo_ = nullptr;};
    inline string phoneNo() const { DARABONBA_PTR_GET_DEFAULT(phoneNo_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setPhoneNo(string phoneNo) { DARABONBA_PTR_SET_VALUE(phoneNo_, phoneNo) };


    // statisticDate Field Functions 
    bool hasStatisticDate() const { return this->statisticDate_ != nullptr;};
    void deleteStatisticDate() { this->statisticDate_ = nullptr;};
    inline string statisticDate() const { DARABONBA_PTR_GET_DEFAULT(statisticDate_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setStatisticDate(string statisticDate) { DARABONBA_PTR_SET_VALUE(statisticDate_, statisticDate) };


    // statisticTime Field Functions 
    bool hasStatisticTime() const { return this->statisticTime_ != nullptr;};
    void deleteStatisticTime() { this->statisticTime_ = nullptr;};
    inline int32_t statisticTime() const { DARABONBA_PTR_GET_DEFAULT(statisticTime_, 0) };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setStatisticTime(int32_t statisticTime) { DARABONBA_PTR_SET_VALUE(statisticTime_, statisticTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetRequest Field Functions 
    bool hasTargetRequest() const { return this->targetRequest_ != nullptr;};
    void deleteTargetRequest() { this->targetRequest_ = nullptr;};
    inline string targetRequest() const { DARABONBA_PTR_GET_DEFAULT(targetRequest_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setTargetRequest(string targetRequest) { DARABONBA_PTR_SET_VALUE(targetRequest_, targetRequest) };


    // targetSelect Field Functions 
    bool hasTargetSelect() const { return this->targetSelect_ != nullptr;};
    void deleteTargetSelect() { this->targetSelect_ = nullptr;};
    inline string targetSelect() const { DARABONBA_PTR_GET_DEFAULT(targetSelect_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setTargetSelect(string targetSelect) { DARABONBA_PTR_SET_VALUE(targetSelect_, targetSelect) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // transferNo Field Functions 
    bool hasTransferNo() const { return this->transferNo_ != nullptr;};
    void deleteTransferNo() { this->transferNo_ = nullptr;};
    inline string transferNo() const { DARABONBA_PTR_GET_DEFAULT(transferNo_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setTransferNo(string transferNo) { DARABONBA_PTR_SET_VALUE(transferNo_, transferNo) };


    // transferNumber Field Functions 
    bool hasTransferNumber() const { return this->transferNumber_ != nullptr;};
    void deleteTransferNumber() { this->transferNumber_ = nullptr;};
    inline string transferNumber() const { DARABONBA_PTR_GET_DEFAULT(transferNumber_, "") };
    inline ListLegacyAgentStatusLogsResponseBodyDataList& setTransferNumber(string transferNumber) { DARABONBA_PTR_SET_VALUE(transferNumber_, transferNumber) };


  protected:
    std::shared_ptr<string> agentDropCall_ = nullptr;
    std::shared_ptr<string> agentNo_ = nullptr;
    std::shared_ptr<string> aliHangupCause_ = nullptr;
    std::shared_ptr<string> callDir_ = nullptr;
    std::shared_ptr<string> callId_ = nullptr;
    std::shared_ptr<string> callType_ = nullptr;
    std::shared_ptr<string> calleeId_ = nullptr;
    std::shared_ptr<string> callerId_ = nullptr;
    std::shared_ptr<string> connId_ = nullptr;
    std::shared_ptr<string> extend1_ = nullptr;
    std::shared_ptr<string> extend2_ = nullptr;
    std::shared_ptr<string> extend3_ = nullptr;
    std::shared_ptr<string> extend4_ = nullptr;
    std::shared_ptr<string> groupNo_ = nullptr;
    std::shared_ptr<string> monitedAgentNo_ = nullptr;
    std::shared_ptr<string> monitedAgentPhoneNo_ = nullptr;
    std::shared_ptr<bool> outboundScenario_ = nullptr;
    std::shared_ptr<string> phoneNo_ = nullptr;
    std::shared_ptr<string> statisticDate_ = nullptr;
    std::shared_ptr<int32_t> statisticTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> targetRequest_ = nullptr;
    std::shared_ptr<string> targetSelect_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> transferNo_ = nullptr;
    std::shared_ptr<string> transferNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
