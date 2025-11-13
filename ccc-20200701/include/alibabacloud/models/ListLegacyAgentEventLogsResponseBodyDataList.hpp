// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLEGACYAGENTEVENTLOGSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLEGACYAGENTEVENTLOGSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListLegacyAgentEventLogsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLegacyAgentEventLogsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AgentDropCall, agentDropCall_);
      DARABONBA_PTR_TO_JSON(AgentNo, agentNo_);
      DARABONBA_PTR_TO_JSON(CallDir, callDir_);
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(CallMode, callMode_);
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(CalleeId, calleeId_);
      DARABONBA_PTR_TO_JSON(CallerId, callerId_);
      DARABONBA_PTR_TO_JSON(ConnId, connId_);
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(GroupNo, groupNo_);
      DARABONBA_PTR_TO_JSON(OutboundScenario, outboundScenario_);
      DARABONBA_PTR_TO_JSON(PhoneNo, phoneNo_);
      DARABONBA_PTR_TO_JSON(StatisticDate, statisticDate_);
      DARABONBA_PTR_TO_JSON(TargetRequest, targetRequest_);
      DARABONBA_PTR_TO_JSON(TargetSelect, targetSelect_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TransferNumber, transferNumber_);
    };
    friend void from_json(const Darabonba::Json& j, ListLegacyAgentEventLogsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentDropCall, agentDropCall_);
      DARABONBA_PTR_FROM_JSON(AgentNo, agentNo_);
      DARABONBA_PTR_FROM_JSON(CallDir, callDir_);
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(CallMode, callMode_);
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(CalleeId, calleeId_);
      DARABONBA_PTR_FROM_JSON(CallerId, callerId_);
      DARABONBA_PTR_FROM_JSON(ConnId, connId_);
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(GroupNo, groupNo_);
      DARABONBA_PTR_FROM_JSON(OutboundScenario, outboundScenario_);
      DARABONBA_PTR_FROM_JSON(PhoneNo, phoneNo_);
      DARABONBA_PTR_FROM_JSON(StatisticDate, statisticDate_);
      DARABONBA_PTR_FROM_JSON(TargetRequest, targetRequest_);
      DARABONBA_PTR_FROM_JSON(TargetSelect, targetSelect_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TransferNumber, transferNumber_);
    };
    ListLegacyAgentEventLogsResponseBodyDataList() = default ;
    ListLegacyAgentEventLogsResponseBodyDataList(const ListLegacyAgentEventLogsResponseBodyDataList &) = default ;
    ListLegacyAgentEventLogsResponseBodyDataList(ListLegacyAgentEventLogsResponseBodyDataList &&) = default ;
    ListLegacyAgentEventLogsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLegacyAgentEventLogsResponseBodyDataList() = default ;
    ListLegacyAgentEventLogsResponseBodyDataList& operator=(const ListLegacyAgentEventLogsResponseBodyDataList &) = default ;
    ListLegacyAgentEventLogsResponseBodyDataList& operator=(ListLegacyAgentEventLogsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentDropCall_ == nullptr
        && return this->agentNo_ == nullptr && return this->callDir_ == nullptr && return this->callId_ == nullptr && return this->callMode_ == nullptr && return this->callType_ == nullptr
        && return this->calleeId_ == nullptr && return this->callerId_ == nullptr && return this->connId_ == nullptr && return this->event_ == nullptr && return this->groupNo_ == nullptr
        && return this->outboundScenario_ == nullptr && return this->phoneNo_ == nullptr && return this->statisticDate_ == nullptr && return this->targetRequest_ == nullptr && return this->targetSelect_ == nullptr
        && return this->tenantId_ == nullptr && return this->transferNumber_ == nullptr; };
    // agentDropCall Field Functions 
    bool hasAgentDropCall() const { return this->agentDropCall_ != nullptr;};
    void deleteAgentDropCall() { this->agentDropCall_ = nullptr;};
    inline string agentDropCall() const { DARABONBA_PTR_GET_DEFAULT(agentDropCall_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setAgentDropCall(string agentDropCall) { DARABONBA_PTR_SET_VALUE(agentDropCall_, agentDropCall) };


    // agentNo Field Functions 
    bool hasAgentNo() const { return this->agentNo_ != nullptr;};
    void deleteAgentNo() { this->agentNo_ = nullptr;};
    inline string agentNo() const { DARABONBA_PTR_GET_DEFAULT(agentNo_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setAgentNo(string agentNo) { DARABONBA_PTR_SET_VALUE(agentNo_, agentNo) };


    // callDir Field Functions 
    bool hasCallDir() const { return this->callDir_ != nullptr;};
    void deleteCallDir() { this->callDir_ = nullptr;};
    inline string callDir() const { DARABONBA_PTR_GET_DEFAULT(callDir_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setCallDir(string callDir) { DARABONBA_PTR_SET_VALUE(callDir_, callDir) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // callMode Field Functions 
    bool hasCallMode() const { return this->callMode_ != nullptr;};
    void deleteCallMode() { this->callMode_ = nullptr;};
    inline string callMode() const { DARABONBA_PTR_GET_DEFAULT(callMode_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setCallMode(string callMode) { DARABONBA_PTR_SET_VALUE(callMode_, callMode) };


    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline string callType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // calleeId Field Functions 
    bool hasCalleeId() const { return this->calleeId_ != nullptr;};
    void deleteCalleeId() { this->calleeId_ = nullptr;};
    inline string calleeId() const { DARABONBA_PTR_GET_DEFAULT(calleeId_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setCalleeId(string calleeId) { DARABONBA_PTR_SET_VALUE(calleeId_, calleeId) };


    // callerId Field Functions 
    bool hasCallerId() const { return this->callerId_ != nullptr;};
    void deleteCallerId() { this->callerId_ = nullptr;};
    inline string callerId() const { DARABONBA_PTR_GET_DEFAULT(callerId_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setCallerId(string callerId) { DARABONBA_PTR_SET_VALUE(callerId_, callerId) };


    // connId Field Functions 
    bool hasConnId() const { return this->connId_ != nullptr;};
    void deleteConnId() { this->connId_ = nullptr;};
    inline string connId() const { DARABONBA_PTR_GET_DEFAULT(connId_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setConnId(string connId) { DARABONBA_PTR_SET_VALUE(connId_, connId) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // groupNo Field Functions 
    bool hasGroupNo() const { return this->groupNo_ != nullptr;};
    void deleteGroupNo() { this->groupNo_ = nullptr;};
    inline string groupNo() const { DARABONBA_PTR_GET_DEFAULT(groupNo_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setGroupNo(string groupNo) { DARABONBA_PTR_SET_VALUE(groupNo_, groupNo) };


    // outboundScenario Field Functions 
    bool hasOutboundScenario() const { return this->outboundScenario_ != nullptr;};
    void deleteOutboundScenario() { this->outboundScenario_ = nullptr;};
    inline bool outboundScenario() const { DARABONBA_PTR_GET_DEFAULT(outboundScenario_, false) };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setOutboundScenario(bool outboundScenario) { DARABONBA_PTR_SET_VALUE(outboundScenario_, outboundScenario) };


    // phoneNo Field Functions 
    bool hasPhoneNo() const { return this->phoneNo_ != nullptr;};
    void deletePhoneNo() { this->phoneNo_ = nullptr;};
    inline string phoneNo() const { DARABONBA_PTR_GET_DEFAULT(phoneNo_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setPhoneNo(string phoneNo) { DARABONBA_PTR_SET_VALUE(phoneNo_, phoneNo) };


    // statisticDate Field Functions 
    bool hasStatisticDate() const { return this->statisticDate_ != nullptr;};
    void deleteStatisticDate() { this->statisticDate_ = nullptr;};
    inline string statisticDate() const { DARABONBA_PTR_GET_DEFAULT(statisticDate_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setStatisticDate(string statisticDate) { DARABONBA_PTR_SET_VALUE(statisticDate_, statisticDate) };


    // targetRequest Field Functions 
    bool hasTargetRequest() const { return this->targetRequest_ != nullptr;};
    void deleteTargetRequest() { this->targetRequest_ = nullptr;};
    inline string targetRequest() const { DARABONBA_PTR_GET_DEFAULT(targetRequest_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setTargetRequest(string targetRequest) { DARABONBA_PTR_SET_VALUE(targetRequest_, targetRequest) };


    // targetSelect Field Functions 
    bool hasTargetSelect() const { return this->targetSelect_ != nullptr;};
    void deleteTargetSelect() { this->targetSelect_ = nullptr;};
    inline string targetSelect() const { DARABONBA_PTR_GET_DEFAULT(targetSelect_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setTargetSelect(string targetSelect) { DARABONBA_PTR_SET_VALUE(targetSelect_, targetSelect) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // transferNumber Field Functions 
    bool hasTransferNumber() const { return this->transferNumber_ != nullptr;};
    void deleteTransferNumber() { this->transferNumber_ = nullptr;};
    inline string transferNumber() const { DARABONBA_PTR_GET_DEFAULT(transferNumber_, "") };
    inline ListLegacyAgentEventLogsResponseBodyDataList& setTransferNumber(string transferNumber) { DARABONBA_PTR_SET_VALUE(transferNumber_, transferNumber) };


  protected:
    std::shared_ptr<string> agentDropCall_ = nullptr;
    std::shared_ptr<string> agentNo_ = nullptr;
    std::shared_ptr<string> callDir_ = nullptr;
    std::shared_ptr<string> callId_ = nullptr;
    std::shared_ptr<string> callMode_ = nullptr;
    std::shared_ptr<string> callType_ = nullptr;
    std::shared_ptr<string> calleeId_ = nullptr;
    std::shared_ptr<string> callerId_ = nullptr;
    std::shared_ptr<string> connId_ = nullptr;
    std::shared_ptr<string> event_ = nullptr;
    std::shared_ptr<string> groupNo_ = nullptr;
    std::shared_ptr<bool> outboundScenario_ = nullptr;
    std::shared_ptr<string> phoneNo_ = nullptr;
    std::shared_ptr<string> statisticDate_ = nullptr;
    std::shared_ptr<string> targetRequest_ = nullptr;
    std::shared_ptr<string> targetSelect_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> transferNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
