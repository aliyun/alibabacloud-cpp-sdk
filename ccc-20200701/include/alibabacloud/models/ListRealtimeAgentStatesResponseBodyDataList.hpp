// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREALTIMEAGENTSTATESRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTREALTIMEAGENTSTATESRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListRealtimeAgentStatesResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRealtimeAgentStatesResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(BreakCode, breakCode_);
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(CounterParty, counterParty_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(OutboundScenario, outboundScenario_);
      DARABONBA_PTR_TO_JSON(SkillGroupIdList, skillGroupIdList_);
      DARABONBA_PTR_TO_JSON(SkillGroupNameList, skillGroupNameList_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StateCode, stateCode_);
      DARABONBA_PTR_TO_JSON(StateTime, stateTime_);
      DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
    };
    friend void from_json(const Darabonba::Json& j, ListRealtimeAgentStatesResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(BreakCode, breakCode_);
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(CounterParty, counterParty_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(OutboundScenario, outboundScenario_);
      DARABONBA_PTR_FROM_JSON(SkillGroupIdList, skillGroupIdList_);
      DARABONBA_PTR_FROM_JSON(SkillGroupNameList, skillGroupNameList_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StateCode, stateCode_);
      DARABONBA_PTR_FROM_JSON(StateTime, stateTime_);
      DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
    };
    ListRealtimeAgentStatesResponseBodyDataList() = default ;
    ListRealtimeAgentStatesResponseBodyDataList(const ListRealtimeAgentStatesResponseBodyDataList &) = default ;
    ListRealtimeAgentStatesResponseBodyDataList(ListRealtimeAgentStatesResponseBodyDataList &&) = default ;
    ListRealtimeAgentStatesResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRealtimeAgentStatesResponseBodyDataList() = default ;
    ListRealtimeAgentStatesResponseBodyDataList& operator=(const ListRealtimeAgentStatesResponseBodyDataList &) = default ;
    ListRealtimeAgentStatesResponseBodyDataList& operator=(ListRealtimeAgentStatesResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentId_ != nullptr
        && this->agentName_ != nullptr && this->breakCode_ != nullptr && this->callType_ != nullptr && this->counterParty_ != nullptr && this->duration_ != nullptr
        && this->extension_ != nullptr && this->instanceId_ != nullptr && this->mobile_ != nullptr && this->outboundScenario_ != nullptr && this->skillGroupIdList_ != nullptr
        && this->skillGroupNameList_ != nullptr && this->state_ != nullptr && this->stateCode_ != nullptr && this->stateTime_ != nullptr && this->workMode_ != nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListRealtimeAgentStatesResponseBodyDataList& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline ListRealtimeAgentStatesResponseBodyDataList& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // breakCode Field Functions 
    bool hasBreakCode() const { return this->breakCode_ != nullptr;};
    void deleteBreakCode() { this->breakCode_ = nullptr;};
    inline string breakCode() const { DARABONBA_PTR_GET_DEFAULT(breakCode_, "") };
    inline ListRealtimeAgentStatesResponseBodyDataList& setBreakCode(string breakCode) { DARABONBA_PTR_SET_VALUE(breakCode_, breakCode) };


    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline string callType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
    inline ListRealtimeAgentStatesResponseBodyDataList& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // counterParty Field Functions 
    bool hasCounterParty() const { return this->counterParty_ != nullptr;};
    void deleteCounterParty() { this->counterParty_ = nullptr;};
    inline string counterParty() const { DARABONBA_PTR_GET_DEFAULT(counterParty_, "") };
    inline ListRealtimeAgentStatesResponseBodyDataList& setCounterParty(string counterParty) { DARABONBA_PTR_SET_VALUE(counterParty_, counterParty) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline ListRealtimeAgentStatesResponseBodyDataList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline ListRealtimeAgentStatesResponseBodyDataList& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListRealtimeAgentStatesResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline ListRealtimeAgentStatesResponseBodyDataList& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // outboundScenario Field Functions 
    bool hasOutboundScenario() const { return this->outboundScenario_ != nullptr;};
    void deleteOutboundScenario() { this->outboundScenario_ = nullptr;};
    inline bool outboundScenario() const { DARABONBA_PTR_GET_DEFAULT(outboundScenario_, false) };
    inline ListRealtimeAgentStatesResponseBodyDataList& setOutboundScenario(bool outboundScenario) { DARABONBA_PTR_SET_VALUE(outboundScenario_, outboundScenario) };


    // skillGroupIdList Field Functions 
    bool hasSkillGroupIdList() const { return this->skillGroupIdList_ != nullptr;};
    void deleteSkillGroupIdList() { this->skillGroupIdList_ = nullptr;};
    inline const vector<string> & skillGroupIdList() const { DARABONBA_PTR_GET_CONST(skillGroupIdList_, vector<string>) };
    inline vector<string> skillGroupIdList() { DARABONBA_PTR_GET(skillGroupIdList_, vector<string>) };
    inline ListRealtimeAgentStatesResponseBodyDataList& setSkillGroupIdList(const vector<string> & skillGroupIdList) { DARABONBA_PTR_SET_VALUE(skillGroupIdList_, skillGroupIdList) };
    inline ListRealtimeAgentStatesResponseBodyDataList& setSkillGroupIdList(vector<string> && skillGroupIdList) { DARABONBA_PTR_SET_RVALUE(skillGroupIdList_, skillGroupIdList) };


    // skillGroupNameList Field Functions 
    bool hasSkillGroupNameList() const { return this->skillGroupNameList_ != nullptr;};
    void deleteSkillGroupNameList() { this->skillGroupNameList_ = nullptr;};
    inline const vector<string> & skillGroupNameList() const { DARABONBA_PTR_GET_CONST(skillGroupNameList_, vector<string>) };
    inline vector<string> skillGroupNameList() { DARABONBA_PTR_GET(skillGroupNameList_, vector<string>) };
    inline ListRealtimeAgentStatesResponseBodyDataList& setSkillGroupNameList(const vector<string> & skillGroupNameList) { DARABONBA_PTR_SET_VALUE(skillGroupNameList_, skillGroupNameList) };
    inline ListRealtimeAgentStatesResponseBodyDataList& setSkillGroupNameList(vector<string> && skillGroupNameList) { DARABONBA_PTR_SET_RVALUE(skillGroupNameList_, skillGroupNameList) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListRealtimeAgentStatesResponseBodyDataList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // stateCode Field Functions 
    bool hasStateCode() const { return this->stateCode_ != nullptr;};
    void deleteStateCode() { this->stateCode_ = nullptr;};
    inline string stateCode() const { DARABONBA_PTR_GET_DEFAULT(stateCode_, "") };
    inline ListRealtimeAgentStatesResponseBodyDataList& setStateCode(string stateCode) { DARABONBA_PTR_SET_VALUE(stateCode_, stateCode) };


    // stateTime Field Functions 
    bool hasStateTime() const { return this->stateTime_ != nullptr;};
    void deleteStateTime() { this->stateTime_ = nullptr;};
    inline int64_t stateTime() const { DARABONBA_PTR_GET_DEFAULT(stateTime_, 0L) };
    inline ListRealtimeAgentStatesResponseBodyDataList& setStateTime(int64_t stateTime) { DARABONBA_PTR_SET_VALUE(stateTime_, stateTime) };


    // workMode Field Functions 
    bool hasWorkMode() const { return this->workMode_ != nullptr;};
    void deleteWorkMode() { this->workMode_ = nullptr;};
    inline string workMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
    inline ListRealtimeAgentStatesResponseBodyDataList& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    std::shared_ptr<string> breakCode_ = nullptr;
    std::shared_ptr<string> callType_ = nullptr;
    std::shared_ptr<string> counterParty_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<bool> outboundScenario_ = nullptr;
    std::shared_ptr<vector<string>> skillGroupIdList_ = nullptr;
    std::shared_ptr<vector<string>> skillGroupNameList_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> stateCode_ = nullptr;
    std::shared_ptr<int64_t> stateTime_ = nullptr;
    std::shared_ptr<string> workMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
