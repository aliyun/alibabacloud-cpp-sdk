// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTRUNTIMEENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_AGENTRUNTIMEENDPOINT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RoutingConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class AgentRuntimeEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentRuntimeEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(agentRuntimeEndpointArn, agentRuntimeEndpointArn_);
      DARABONBA_PTR_TO_JSON(agentRuntimeEndpointId, agentRuntimeEndpointId_);
      DARABONBA_PTR_TO_JSON(agentRuntimeEndpointName, agentRuntimeEndpointName_);
      DARABONBA_PTR_TO_JSON(agentRuntimeId, agentRuntimeId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(endpointPublicUrl, endpointPublicUrl_);
      DARABONBA_PTR_TO_JSON(routingConfiguration, routingConfiguration_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(targetVersion, targetVersion_);
    };
    friend void from_json(const Darabonba::Json& j, AgentRuntimeEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(agentRuntimeEndpointArn, agentRuntimeEndpointArn_);
      DARABONBA_PTR_FROM_JSON(agentRuntimeEndpointId, agentRuntimeEndpointId_);
      DARABONBA_PTR_FROM_JSON(agentRuntimeEndpointName, agentRuntimeEndpointName_);
      DARABONBA_PTR_FROM_JSON(agentRuntimeId, agentRuntimeId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(endpointPublicUrl, endpointPublicUrl_);
      DARABONBA_PTR_FROM_JSON(routingConfiguration, routingConfiguration_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(targetVersion, targetVersion_);
    };
    AgentRuntimeEndpoint() = default ;
    AgentRuntimeEndpoint(const AgentRuntimeEndpoint &) = default ;
    AgentRuntimeEndpoint(AgentRuntimeEndpoint &&) = default ;
    AgentRuntimeEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentRuntimeEndpoint() = default ;
    AgentRuntimeEndpoint& operator=(const AgentRuntimeEndpoint &) = default ;
    AgentRuntimeEndpoint& operator=(AgentRuntimeEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentRuntimeEndpointArn_ == nullptr
        && this->agentRuntimeEndpointId_ == nullptr && this->agentRuntimeEndpointName_ == nullptr && this->agentRuntimeId_ == nullptr && this->description_ == nullptr && this->endpointPublicUrl_ == nullptr
        && this->routingConfiguration_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr && this->targetVersion_ == nullptr; };
    // agentRuntimeEndpointArn Field Functions 
    bool hasAgentRuntimeEndpointArn() const { return this->agentRuntimeEndpointArn_ != nullptr;};
    void deleteAgentRuntimeEndpointArn() { this->agentRuntimeEndpointArn_ = nullptr;};
    inline string getAgentRuntimeEndpointArn() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeEndpointArn_, "") };
    inline AgentRuntimeEndpoint& setAgentRuntimeEndpointArn(string agentRuntimeEndpointArn) { DARABONBA_PTR_SET_VALUE(agentRuntimeEndpointArn_, agentRuntimeEndpointArn) };


    // agentRuntimeEndpointId Field Functions 
    bool hasAgentRuntimeEndpointId() const { return this->agentRuntimeEndpointId_ != nullptr;};
    void deleteAgentRuntimeEndpointId() { this->agentRuntimeEndpointId_ = nullptr;};
    inline string getAgentRuntimeEndpointId() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeEndpointId_, "") };
    inline AgentRuntimeEndpoint& setAgentRuntimeEndpointId(string agentRuntimeEndpointId) { DARABONBA_PTR_SET_VALUE(agentRuntimeEndpointId_, agentRuntimeEndpointId) };


    // agentRuntimeEndpointName Field Functions 
    bool hasAgentRuntimeEndpointName() const { return this->agentRuntimeEndpointName_ != nullptr;};
    void deleteAgentRuntimeEndpointName() { this->agentRuntimeEndpointName_ = nullptr;};
    inline string getAgentRuntimeEndpointName() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeEndpointName_, "") };
    inline AgentRuntimeEndpoint& setAgentRuntimeEndpointName(string agentRuntimeEndpointName) { DARABONBA_PTR_SET_VALUE(agentRuntimeEndpointName_, agentRuntimeEndpointName) };


    // agentRuntimeId Field Functions 
    bool hasAgentRuntimeId() const { return this->agentRuntimeId_ != nullptr;};
    void deleteAgentRuntimeId() { this->agentRuntimeId_ = nullptr;};
    inline string getAgentRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeId_, "") };
    inline AgentRuntimeEndpoint& setAgentRuntimeId(string agentRuntimeId) { DARABONBA_PTR_SET_VALUE(agentRuntimeId_, agentRuntimeId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AgentRuntimeEndpoint& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpointPublicUrl Field Functions 
    bool hasEndpointPublicUrl() const { return this->endpointPublicUrl_ != nullptr;};
    void deleteEndpointPublicUrl() { this->endpointPublicUrl_ = nullptr;};
    inline string getEndpointPublicUrl() const { DARABONBA_PTR_GET_DEFAULT(endpointPublicUrl_, "") };
    inline AgentRuntimeEndpoint& setEndpointPublicUrl(string endpointPublicUrl) { DARABONBA_PTR_SET_VALUE(endpointPublicUrl_, endpointPublicUrl) };


    // routingConfiguration Field Functions 
    bool hasRoutingConfiguration() const { return this->routingConfiguration_ != nullptr;};
    void deleteRoutingConfiguration() { this->routingConfiguration_ = nullptr;};
    inline const RoutingConfiguration & getRoutingConfiguration() const { DARABONBA_PTR_GET_CONST(routingConfiguration_, RoutingConfiguration) };
    inline RoutingConfiguration getRoutingConfiguration() { DARABONBA_PTR_GET(routingConfiguration_, RoutingConfiguration) };
    inline AgentRuntimeEndpoint& setRoutingConfiguration(const RoutingConfiguration & routingConfiguration) { DARABONBA_PTR_SET_VALUE(routingConfiguration_, routingConfiguration) };
    inline AgentRuntimeEndpoint& setRoutingConfiguration(RoutingConfiguration && routingConfiguration) { DARABONBA_PTR_SET_RVALUE(routingConfiguration_, routingConfiguration) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AgentRuntimeEndpoint& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline AgentRuntimeEndpoint& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // targetVersion Field Functions 
    bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
    void deleteTargetVersion() { this->targetVersion_ = nullptr;};
    inline string getTargetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
    inline AgentRuntimeEndpoint& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


  protected:
    shared_ptr<string> agentRuntimeEndpointArn_ {};
    shared_ptr<string> agentRuntimeEndpointId_ {};
    shared_ptr<string> agentRuntimeEndpointName_ {};
    shared_ptr<string> agentRuntimeId_ {};
    shared_ptr<string> description_ {};
    // 智能体运行时端点的公网访问地址
    shared_ptr<string> endpointPublicUrl_ {};
    // 智能体运行时端点的路由配置，支持多版本权重分配
    shared_ptr<RoutingConfiguration> routingConfiguration_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> statusReason_ {};
    shared_ptr<string> targetVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
