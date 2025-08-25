// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIVRTRACKINGDETAILSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTIVRTRACKINGDETAILSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListIvrTrackingDetailsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIvrTrackingDetailsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Callee, callee_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ChannelVariables, channelVariables_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(EnterTime, enterTime_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(Instance, instance_);
      DARABONBA_PTR_TO_JSON(LeaveTime, leaveTime_);
      DARABONBA_PTR_TO_JSON(NodeExitCode, nodeExitCode_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_ANY_TO_JSON(NodeProperties, nodeProperties_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_ANY_TO_JSON(NodeVariables, nodeVariables_);
    };
    friend void from_json(const Darabonba::Json& j, ListIvrTrackingDetailsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Callee, callee_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ChannelVariables, channelVariables_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(EnterTime, enterTime_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
      DARABONBA_PTR_FROM_JSON(LeaveTime, leaveTime_);
      DARABONBA_PTR_FROM_JSON(NodeExitCode, nodeExitCode_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_ANY_FROM_JSON(NodeProperties, nodeProperties_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_ANY_FROM_JSON(NodeVariables, nodeVariables_);
    };
    ListIvrTrackingDetailsResponseBodyDataList() = default ;
    ListIvrTrackingDetailsResponseBodyDataList(const ListIvrTrackingDetailsResponseBodyDataList &) = default ;
    ListIvrTrackingDetailsResponseBodyDataList(ListIvrTrackingDetailsResponseBodyDataList &&) = default ;
    ListIvrTrackingDetailsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIvrTrackingDetailsResponseBodyDataList() = default ;
    ListIvrTrackingDetailsResponseBodyDataList& operator=(const ListIvrTrackingDetailsResponseBodyDataList &) = default ;
    ListIvrTrackingDetailsResponseBodyDataList& operator=(ListIvrTrackingDetailsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callee_ != nullptr
        && this->caller_ != nullptr && this->channelId_ != nullptr && this->channelVariables_ != nullptr && this->contactId_ != nullptr && this->enterTime_ != nullptr
        && this->flowId_ != nullptr && this->flowName_ != nullptr && this->instance_ != nullptr && this->leaveTime_ != nullptr && this->nodeExitCode_ != nullptr
        && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->nodeProperties_ != nullptr && this->nodeType_ != nullptr && this->nodeVariables_ != nullptr; };
    // callee Field Functions 
    bool hasCallee() const { return this->callee_ != nullptr;};
    void deleteCallee() { this->callee_ = nullptr;};
    inline string callee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
    inline ListIvrTrackingDetailsResponseBodyDataList& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string caller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline ListIvrTrackingDetailsResponseBodyDataList& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline ListIvrTrackingDetailsResponseBodyDataList& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // channelVariables Field Functions 
    bool hasChannelVariables() const { return this->channelVariables_ != nullptr;};
    void deleteChannelVariables() { this->channelVariables_ = nullptr;};
    inline string channelVariables() const { DARABONBA_PTR_GET_DEFAULT(channelVariables_, "") };
    inline ListIvrTrackingDetailsResponseBodyDataList& setChannelVariables(string channelVariables) { DARABONBA_PTR_SET_VALUE(channelVariables_, channelVariables) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline ListIvrTrackingDetailsResponseBodyDataList& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // enterTime Field Functions 
    bool hasEnterTime() const { return this->enterTime_ != nullptr;};
    void deleteEnterTime() { this->enterTime_ = nullptr;};
    inline int64_t enterTime() const { DARABONBA_PTR_GET_DEFAULT(enterTime_, 0L) };
    inline ListIvrTrackingDetailsResponseBodyDataList& setEnterTime(int64_t enterTime) { DARABONBA_PTR_SET_VALUE(enterTime_, enterTime) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline ListIvrTrackingDetailsResponseBodyDataList& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline ListIvrTrackingDetailsResponseBodyDataList& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline ListIvrTrackingDetailsResponseBodyDataList& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // leaveTime Field Functions 
    bool hasLeaveTime() const { return this->leaveTime_ != nullptr;};
    void deleteLeaveTime() { this->leaveTime_ = nullptr;};
    inline int64_t leaveTime() const { DARABONBA_PTR_GET_DEFAULT(leaveTime_, 0L) };
    inline ListIvrTrackingDetailsResponseBodyDataList& setLeaveTime(int64_t leaveTime) { DARABONBA_PTR_SET_VALUE(leaveTime_, leaveTime) };


    // nodeExitCode Field Functions 
    bool hasNodeExitCode() const { return this->nodeExitCode_ != nullptr;};
    void deleteNodeExitCode() { this->nodeExitCode_ = nullptr;};
    inline string nodeExitCode() const { DARABONBA_PTR_GET_DEFAULT(nodeExitCode_, "") };
    inline ListIvrTrackingDetailsResponseBodyDataList& setNodeExitCode(string nodeExitCode) { DARABONBA_PTR_SET_VALUE(nodeExitCode_, nodeExitCode) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListIvrTrackingDetailsResponseBodyDataList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListIvrTrackingDetailsResponseBodyDataList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeProperties Field Functions 
    bool hasNodeProperties() const { return this->nodeProperties_ != nullptr;};
    void deleteNodeProperties() { this->nodeProperties_ = nullptr;};
    inline     const Darabonba::Json & nodeProperties() const { DARABONBA_GET(nodeProperties_) };
    Darabonba::Json & nodeProperties() { DARABONBA_GET(nodeProperties_) };
    inline ListIvrTrackingDetailsResponseBodyDataList& setNodeProperties(const Darabonba::Json & nodeProperties) { DARABONBA_SET_VALUE(nodeProperties_, nodeProperties) };
    inline ListIvrTrackingDetailsResponseBodyDataList& setNodeProperties(Darabonba::Json & nodeProperties) { DARABONBA_SET_RVALUE(nodeProperties_, nodeProperties) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ListIvrTrackingDetailsResponseBodyDataList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // nodeVariables Field Functions 
    bool hasNodeVariables() const { return this->nodeVariables_ != nullptr;};
    void deleteNodeVariables() { this->nodeVariables_ = nullptr;};
    inline     const Darabonba::Json & nodeVariables() const { DARABONBA_GET(nodeVariables_) };
    Darabonba::Json & nodeVariables() { DARABONBA_GET(nodeVariables_) };
    inline ListIvrTrackingDetailsResponseBodyDataList& setNodeVariables(const Darabonba::Json & nodeVariables) { DARABONBA_SET_VALUE(nodeVariables_, nodeVariables) };
    inline ListIvrTrackingDetailsResponseBodyDataList& setNodeVariables(Darabonba::Json & nodeVariables) { DARABONBA_SET_RVALUE(nodeVariables_, nodeVariables) };


  protected:
    std::shared_ptr<string> callee_ = nullptr;
    std::shared_ptr<string> caller_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> channelVariables_ = nullptr;
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<int64_t> enterTime_ = nullptr;
    std::shared_ptr<string> flowId_ = nullptr;
    std::shared_ptr<string> flowName_ = nullptr;
    std::shared_ptr<string> instance_ = nullptr;
    std::shared_ptr<int64_t> leaveTime_ = nullptr;
    std::shared_ptr<string> nodeExitCode_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    Darabonba::Json nodeProperties_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    Darabonba::Json nodeVariables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
