// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWENDPOINTINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWENDPOINTINPUT_HPP_
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
  class CreateFlowEndpointInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowEndpointInput& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(flowEndpointName, flowEndpointName_);
      DARABONBA_PTR_TO_JSON(routingConfiguration, routingConfiguration_);
      DARABONBA_PTR_TO_JSON(targetVersion, targetVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowEndpointInput& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(flowEndpointName, flowEndpointName_);
      DARABONBA_PTR_FROM_JSON(routingConfiguration, routingConfiguration_);
      DARABONBA_PTR_FROM_JSON(targetVersion, targetVersion_);
    };
    CreateFlowEndpointInput() = default ;
    CreateFlowEndpointInput(const CreateFlowEndpointInput &) = default ;
    CreateFlowEndpointInput(CreateFlowEndpointInput &&) = default ;
    CreateFlowEndpointInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowEndpointInput() = default ;
    CreateFlowEndpointInput& operator=(const CreateFlowEndpointInput &) = default ;
    CreateFlowEndpointInput& operator=(CreateFlowEndpointInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->flowEndpointName_ == nullptr && this->routingConfiguration_ == nullptr && this->targetVersion_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFlowEndpointInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flowEndpointName Field Functions 
    bool hasFlowEndpointName() const { return this->flowEndpointName_ != nullptr;};
    void deleteFlowEndpointName() { this->flowEndpointName_ = nullptr;};
    inline string getFlowEndpointName() const { DARABONBA_PTR_GET_DEFAULT(flowEndpointName_, "") };
    inline CreateFlowEndpointInput& setFlowEndpointName(string flowEndpointName) { DARABONBA_PTR_SET_VALUE(flowEndpointName_, flowEndpointName) };


    // routingConfiguration Field Functions 
    bool hasRoutingConfiguration() const { return this->routingConfiguration_ != nullptr;};
    void deleteRoutingConfiguration() { this->routingConfiguration_ = nullptr;};
    inline const vector<FlowEndpointRoutingConfig> & getRoutingConfiguration() const { DARABONBA_PTR_GET_CONST(routingConfiguration_, vector<FlowEndpointRoutingConfig>) };
    inline vector<FlowEndpointRoutingConfig> getRoutingConfiguration() { DARABONBA_PTR_GET(routingConfiguration_, vector<FlowEndpointRoutingConfig>) };
    inline CreateFlowEndpointInput& setRoutingConfiguration(const vector<FlowEndpointRoutingConfig> & routingConfiguration) { DARABONBA_PTR_SET_VALUE(routingConfiguration_, routingConfiguration) };
    inline CreateFlowEndpointInput& setRoutingConfiguration(vector<FlowEndpointRoutingConfig> && routingConfiguration) { DARABONBA_PTR_SET_RVALUE(routingConfiguration_, routingConfiguration) };


    // targetVersion Field Functions 
    bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
    void deleteTargetVersion() { this->targetVersion_ = nullptr;};
    inline string getTargetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
    inline CreateFlowEndpointInput& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


  protected:
    // 工作流端点的描述信息
    shared_ptr<string> description_ {};
    // 工作流端点的唯一标识名称
    // 
    // This parameter is required.
    shared_ptr<string> flowEndpointName_ {};
    // 工作流端点的版本路由配置，用于流量分配
    shared_ptr<vector<FlowEndpointRoutingConfig>> routingConfiguration_ {};
    // 工作流端点指向的目标版本号
    shared_ptr<string> targetVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
