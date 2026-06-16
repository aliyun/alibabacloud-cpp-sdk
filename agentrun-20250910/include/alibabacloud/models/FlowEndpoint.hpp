// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLOWENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_FLOWENDPOINT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlowEndpointRoutingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class FlowEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlowEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(disablePublicNetworkAccess, disablePublicNetworkAccess_);
      DARABONBA_PTR_TO_JSON(flowEndpointArn, flowEndpointArn_);
      DARABONBA_PTR_TO_JSON(flowEndpointId, flowEndpointId_);
      DARABONBA_PTR_TO_JSON(flowEndpointName, flowEndpointName_);
      DARABONBA_PTR_TO_JSON(flowId, flowId_);
      DARABONBA_PTR_TO_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_TO_JSON(routingConfiguration, routingConfiguration_);
      DARABONBA_PTR_TO_JSON(targetVersion, targetVersion_);
    };
    friend void from_json(const Darabonba::Json& j, FlowEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(disablePublicNetworkAccess, disablePublicNetworkAccess_);
      DARABONBA_PTR_FROM_JSON(flowEndpointArn, flowEndpointArn_);
      DARABONBA_PTR_FROM_JSON(flowEndpointId, flowEndpointId_);
      DARABONBA_PTR_FROM_JSON(flowEndpointName, flowEndpointName_);
      DARABONBA_PTR_FROM_JSON(flowId, flowId_);
      DARABONBA_PTR_FROM_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_FROM_JSON(routingConfiguration, routingConfiguration_);
      DARABONBA_PTR_FROM_JSON(targetVersion, targetVersion_);
    };
    FlowEndpoint() = default ;
    FlowEndpoint(const FlowEndpoint &) = default ;
    FlowEndpoint(FlowEndpoint &&) = default ;
    FlowEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlowEndpoint() = default ;
    FlowEndpoint& operator=(const FlowEndpoint &) = default ;
    FlowEndpoint& operator=(FlowEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->description_ == nullptr && this->disablePublicNetworkAccess_ == nullptr && this->flowEndpointArn_ == nullptr && this->flowEndpointId_ == nullptr && this->flowEndpointName_ == nullptr
        && this->flowId_ == nullptr && this->lastUpdatedAt_ == nullptr && this->routingConfiguration_ == nullptr && this->targetVersion_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline FlowEndpoint& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline FlowEndpoint& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disablePublicNetworkAccess Field Functions 
    bool hasDisablePublicNetworkAccess() const { return this->disablePublicNetworkAccess_ != nullptr;};
    void deleteDisablePublicNetworkAccess() { this->disablePublicNetworkAccess_ = nullptr;};
    inline bool getDisablePublicNetworkAccess() const { DARABONBA_PTR_GET_DEFAULT(disablePublicNetworkAccess_, false) };
    inline FlowEndpoint& setDisablePublicNetworkAccess(bool disablePublicNetworkAccess) { DARABONBA_PTR_SET_VALUE(disablePublicNetworkAccess_, disablePublicNetworkAccess) };


    // flowEndpointArn Field Functions 
    bool hasFlowEndpointArn() const { return this->flowEndpointArn_ != nullptr;};
    void deleteFlowEndpointArn() { this->flowEndpointArn_ = nullptr;};
    inline string getFlowEndpointArn() const { DARABONBA_PTR_GET_DEFAULT(flowEndpointArn_, "") };
    inline FlowEndpoint& setFlowEndpointArn(string flowEndpointArn) { DARABONBA_PTR_SET_VALUE(flowEndpointArn_, flowEndpointArn) };


    // flowEndpointId Field Functions 
    bool hasFlowEndpointId() const { return this->flowEndpointId_ != nullptr;};
    void deleteFlowEndpointId() { this->flowEndpointId_ = nullptr;};
    inline string getFlowEndpointId() const { DARABONBA_PTR_GET_DEFAULT(flowEndpointId_, "") };
    inline FlowEndpoint& setFlowEndpointId(string flowEndpointId) { DARABONBA_PTR_SET_VALUE(flowEndpointId_, flowEndpointId) };


    // flowEndpointName Field Functions 
    bool hasFlowEndpointName() const { return this->flowEndpointName_ != nullptr;};
    void deleteFlowEndpointName() { this->flowEndpointName_ = nullptr;};
    inline string getFlowEndpointName() const { DARABONBA_PTR_GET_DEFAULT(flowEndpointName_, "") };
    inline FlowEndpoint& setFlowEndpointName(string flowEndpointName) { DARABONBA_PTR_SET_VALUE(flowEndpointName_, flowEndpointName) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline FlowEndpoint& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // lastUpdatedAt Field Functions 
    bool hasLastUpdatedAt() const { return this->lastUpdatedAt_ != nullptr;};
    void deleteLastUpdatedAt() { this->lastUpdatedAt_ = nullptr;};
    inline string getLastUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedAt_, "") };
    inline FlowEndpoint& setLastUpdatedAt(string lastUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastUpdatedAt_, lastUpdatedAt) };


    // routingConfiguration Field Functions 
    bool hasRoutingConfiguration() const { return this->routingConfiguration_ != nullptr;};
    void deleteRoutingConfiguration() { this->routingConfiguration_ = nullptr;};
    inline const vector<FlowEndpointRoutingConfig> & getRoutingConfiguration() const { DARABONBA_PTR_GET_CONST(routingConfiguration_, vector<FlowEndpointRoutingConfig>) };
    inline vector<FlowEndpointRoutingConfig> getRoutingConfiguration() { DARABONBA_PTR_GET(routingConfiguration_, vector<FlowEndpointRoutingConfig>) };
    inline FlowEndpoint& setRoutingConfiguration(const vector<FlowEndpointRoutingConfig> & routingConfiguration) { DARABONBA_PTR_SET_VALUE(routingConfiguration_, routingConfiguration) };
    inline FlowEndpoint& setRoutingConfiguration(vector<FlowEndpointRoutingConfig> && routingConfiguration) { DARABONBA_PTR_SET_RVALUE(routingConfiguration_, routingConfiguration) };


    // targetVersion Field Functions 
    bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
    void deleteTargetVersion() { this->targetVersion_ = nullptr;};
    inline string getTargetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
    inline FlowEndpoint& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


  protected:
    // The creation timestamp for the flow endpoint, in ISO 8601 format.
    shared_ptr<string> createdAt_ {};
    // The description of the flow endpoint.
    shared_ptr<string> description_ {};
    // Set to true to disable public network access for this endpoint.
    shared_ptr<bool> disablePublicNetworkAccess_ {};
    // The Alibaba Cloud Resource Name (ARN) of the flow endpoint.
    shared_ptr<string> flowEndpointArn_ {};
    // The unique identifier of the flow endpoint.
    shared_ptr<string> flowEndpointId_ {};
    // The name of the flow endpoint.
    shared_ptr<string> flowEndpointName_ {};
    // The unique identifier of the flow.
    shared_ptr<string> flowId_ {};
    // The last update timestamp for the flow endpoint, in ISO 8601 format.
    shared_ptr<string> lastUpdatedAt_ {};
    // The routing configuration that distributes traffic to different versions of the flow.
    shared_ptr<vector<FlowEndpointRoutingConfig>> routingConfiguration_ {};
    // The flow version targeted by the endpoint.
    shared_ptr<string> targetVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
