// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTRUNTIMEENDPOINTINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTRUNTIMEENDPOINTINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RoutingConfiguration.hpp>
#include <alibabacloud/models/ScalingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateAgentRuntimeEndpointInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentRuntimeEndpointInput& obj) { 
      DARABONBA_PTR_TO_JSON(agentRuntimeEndpointName, agentRuntimeEndpointName_);
      DARABONBA_PTR_TO_JSON(deleteScalingConfig, deleteScalingConfig_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(disablePublicNetworkAccess, disablePublicNetworkAccess_);
      DARABONBA_PTR_TO_JSON(routingConfiguration, routingConfiguration_);
      DARABONBA_PTR_TO_JSON(scalingConfig, scalingConfig_);
      DARABONBA_PTR_TO_JSON(targetVersion, targetVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentRuntimeEndpointInput& obj) { 
      DARABONBA_PTR_FROM_JSON(agentRuntimeEndpointName, agentRuntimeEndpointName_);
      DARABONBA_PTR_FROM_JSON(deleteScalingConfig, deleteScalingConfig_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(disablePublicNetworkAccess, disablePublicNetworkAccess_);
      DARABONBA_PTR_FROM_JSON(routingConfiguration, routingConfiguration_);
      DARABONBA_PTR_FROM_JSON(scalingConfig, scalingConfig_);
      DARABONBA_PTR_FROM_JSON(targetVersion, targetVersion_);
    };
    UpdateAgentRuntimeEndpointInput() = default ;
    UpdateAgentRuntimeEndpointInput(const UpdateAgentRuntimeEndpointInput &) = default ;
    UpdateAgentRuntimeEndpointInput(UpdateAgentRuntimeEndpointInput &&) = default ;
    UpdateAgentRuntimeEndpointInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentRuntimeEndpointInput() = default ;
    UpdateAgentRuntimeEndpointInput& operator=(const UpdateAgentRuntimeEndpointInput &) = default ;
    UpdateAgentRuntimeEndpointInput& operator=(UpdateAgentRuntimeEndpointInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentRuntimeEndpointName_ == nullptr
        && this->deleteScalingConfig_ == nullptr && this->description_ == nullptr && this->disablePublicNetworkAccess_ == nullptr && this->routingConfiguration_ == nullptr && this->scalingConfig_ == nullptr
        && this->targetVersion_ == nullptr; };
    // agentRuntimeEndpointName Field Functions 
    bool hasAgentRuntimeEndpointName() const { return this->agentRuntimeEndpointName_ != nullptr;};
    void deleteAgentRuntimeEndpointName() { this->agentRuntimeEndpointName_ = nullptr;};
    inline string getAgentRuntimeEndpointName() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeEndpointName_, "") };
    inline UpdateAgentRuntimeEndpointInput& setAgentRuntimeEndpointName(string agentRuntimeEndpointName) { DARABONBA_PTR_SET_VALUE(agentRuntimeEndpointName_, agentRuntimeEndpointName) };


    // deleteScalingConfig Field Functions 
    bool hasDeleteScalingConfig() const { return this->deleteScalingConfig_ != nullptr;};
    void deleteDeleteScalingConfig() { this->deleteScalingConfig_ = nullptr;};
    inline bool getDeleteScalingConfig() const { DARABONBA_PTR_GET_DEFAULT(deleteScalingConfig_, false) };
    inline UpdateAgentRuntimeEndpointInput& setDeleteScalingConfig(bool deleteScalingConfig) { DARABONBA_PTR_SET_VALUE(deleteScalingConfig_, deleteScalingConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAgentRuntimeEndpointInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disablePublicNetworkAccess Field Functions 
    bool hasDisablePublicNetworkAccess() const { return this->disablePublicNetworkAccess_ != nullptr;};
    void deleteDisablePublicNetworkAccess() { this->disablePublicNetworkAccess_ = nullptr;};
    inline bool getDisablePublicNetworkAccess() const { DARABONBA_PTR_GET_DEFAULT(disablePublicNetworkAccess_, false) };
    inline UpdateAgentRuntimeEndpointInput& setDisablePublicNetworkAccess(bool disablePublicNetworkAccess) { DARABONBA_PTR_SET_VALUE(disablePublicNetworkAccess_, disablePublicNetworkAccess) };


    // routingConfiguration Field Functions 
    bool hasRoutingConfiguration() const { return this->routingConfiguration_ != nullptr;};
    void deleteRoutingConfiguration() { this->routingConfiguration_ = nullptr;};
    inline const RoutingConfiguration & getRoutingConfiguration() const { DARABONBA_PTR_GET_CONST(routingConfiguration_, RoutingConfiguration) };
    inline RoutingConfiguration getRoutingConfiguration() { DARABONBA_PTR_GET(routingConfiguration_, RoutingConfiguration) };
    inline UpdateAgentRuntimeEndpointInput& setRoutingConfiguration(const RoutingConfiguration & routingConfiguration) { DARABONBA_PTR_SET_VALUE(routingConfiguration_, routingConfiguration) };
    inline UpdateAgentRuntimeEndpointInput& setRoutingConfiguration(RoutingConfiguration && routingConfiguration) { DARABONBA_PTR_SET_RVALUE(routingConfiguration_, routingConfiguration) };


    // scalingConfig Field Functions 
    bool hasScalingConfig() const { return this->scalingConfig_ != nullptr;};
    void deleteScalingConfig() { this->scalingConfig_ = nullptr;};
    inline const ScalingConfig & getScalingConfig() const { DARABONBA_PTR_GET_CONST(scalingConfig_, ScalingConfig) };
    inline ScalingConfig getScalingConfig() { DARABONBA_PTR_GET(scalingConfig_, ScalingConfig) };
    inline UpdateAgentRuntimeEndpointInput& setScalingConfig(const ScalingConfig & scalingConfig) { DARABONBA_PTR_SET_VALUE(scalingConfig_, scalingConfig) };
    inline UpdateAgentRuntimeEndpointInput& setScalingConfig(ScalingConfig && scalingConfig) { DARABONBA_PTR_SET_RVALUE(scalingConfig_, scalingConfig) };


    // targetVersion Field Functions 
    bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
    void deleteTargetVersion() { this->targetVersion_ = nullptr;};
    inline string getTargetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
    inline UpdateAgentRuntimeEndpointInput& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


  protected:
    shared_ptr<string> agentRuntimeEndpointName_ {};
    // 为 true 时删除该端点的弹性配置
    shared_ptr<bool> deleteScalingConfig_ {};
    shared_ptr<string> description_ {};
    // 是否禁用该端点的公网访问
    shared_ptr<bool> disablePublicNetworkAccess_ {};
    // 智能体运行时端点的路由配置，支持多版本权重分配
    shared_ptr<RoutingConfiguration> routingConfiguration_ {};
    // 端点的弹性伸缩配置，包括最小实例数和定时扩容策略（复用 ScalingConfig）
    shared_ptr<ScalingConfig> scalingConfig_ {};
    // 智能体运行时的目标版本
    shared_ptr<string> targetVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
