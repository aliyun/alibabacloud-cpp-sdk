// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTRUNTIMEENDPOINTINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTRUNTIMEENDPOINTINPUT_HPP_
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
  class CreateAgentRuntimeEndpointInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentRuntimeEndpointInput& obj) { 
      DARABONBA_PTR_TO_JSON(agentRuntimeEndpointName, agentRuntimeEndpointName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(routingConfiguration, routingConfiguration_);
      DARABONBA_PTR_TO_JSON(targetVersion, targetVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentRuntimeEndpointInput& obj) { 
      DARABONBA_PTR_FROM_JSON(agentRuntimeEndpointName, agentRuntimeEndpointName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(routingConfiguration, routingConfiguration_);
      DARABONBA_PTR_FROM_JSON(targetVersion, targetVersion_);
    };
    CreateAgentRuntimeEndpointInput() = default ;
    CreateAgentRuntimeEndpointInput(const CreateAgentRuntimeEndpointInput &) = default ;
    CreateAgentRuntimeEndpointInput(CreateAgentRuntimeEndpointInput &&) = default ;
    CreateAgentRuntimeEndpointInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentRuntimeEndpointInput() = default ;
    CreateAgentRuntimeEndpointInput& operator=(const CreateAgentRuntimeEndpointInput &) = default ;
    CreateAgentRuntimeEndpointInput& operator=(CreateAgentRuntimeEndpointInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentRuntimeEndpointName_ == nullptr
        && return this->description_ == nullptr && return this->routingConfiguration_ == nullptr && return this->targetVersion_ == nullptr; };
    // agentRuntimeEndpointName Field Functions 
    bool hasAgentRuntimeEndpointName() const { return this->agentRuntimeEndpointName_ != nullptr;};
    void deleteAgentRuntimeEndpointName() { this->agentRuntimeEndpointName_ = nullptr;};
    inline string agentRuntimeEndpointName() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeEndpointName_, "") };
    inline CreateAgentRuntimeEndpointInput& setAgentRuntimeEndpointName(string agentRuntimeEndpointName) { DARABONBA_PTR_SET_VALUE(agentRuntimeEndpointName_, agentRuntimeEndpointName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAgentRuntimeEndpointInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // routingConfiguration Field Functions 
    bool hasRoutingConfiguration() const { return this->routingConfiguration_ != nullptr;};
    void deleteRoutingConfiguration() { this->routingConfiguration_ = nullptr;};
    inline const RoutingConfiguration & routingConfiguration() const { DARABONBA_PTR_GET_CONST(routingConfiguration_, RoutingConfiguration) };
    inline RoutingConfiguration routingConfiguration() { DARABONBA_PTR_GET(routingConfiguration_, RoutingConfiguration) };
    inline CreateAgentRuntimeEndpointInput& setRoutingConfiguration(const RoutingConfiguration & routingConfiguration) { DARABONBA_PTR_SET_VALUE(routingConfiguration_, routingConfiguration) };
    inline CreateAgentRuntimeEndpointInput& setRoutingConfiguration(RoutingConfiguration && routingConfiguration) { DARABONBA_PTR_SET_RVALUE(routingConfiguration_, routingConfiguration) };


    // targetVersion Field Functions 
    bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
    void deleteTargetVersion() { this->targetVersion_ = nullptr;};
    inline string targetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
    inline CreateAgentRuntimeEndpointInput& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


  protected:
    std::shared_ptr<string> agentRuntimeEndpointName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // 智能体运行时端点的路由配置，支持多版本权重分配
    std::shared_ptr<RoutingConfiguration> routingConfiguration_ = nullptr;
    // 智能体运行时的目标版本
    std::shared_ptr<string> targetVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
