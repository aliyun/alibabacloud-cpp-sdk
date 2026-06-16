// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PATHCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class PathConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PathConfig& obj) { 
      DARABONBA_PTR_TO_JSON(agentRuntimeEndpointName, agentRuntimeEndpointName_);
      DARABONBA_PTR_TO_JSON(compatibleProtocol, compatibleProtocol_);
      DARABONBA_PTR_TO_JSON(flowEndpointName, flowEndpointName_);
      DARABONBA_PTR_TO_JSON(methods, methods_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(removeBasePathOnForward, removeBasePathOnForward_);
      DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, PathConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(agentRuntimeEndpointName, agentRuntimeEndpointName_);
      DARABONBA_PTR_FROM_JSON(compatibleProtocol, compatibleProtocol_);
      DARABONBA_PTR_FROM_JSON(flowEndpointName, flowEndpointName_);
      DARABONBA_PTR_FROM_JSON(methods, methods_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(removeBasePathOnForward, removeBasePathOnForward_);
      DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    PathConfig() = default ;
    PathConfig(const PathConfig &) = default ;
    PathConfig(PathConfig &&) = default ;
    PathConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PathConfig() = default ;
    PathConfig& operator=(const PathConfig &) = default ;
    PathConfig& operator=(PathConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentRuntimeEndpointName_ == nullptr
        && this->compatibleProtocol_ == nullptr && this->flowEndpointName_ == nullptr && this->methods_ == nullptr && this->path_ == nullptr && this->removeBasePathOnForward_ == nullptr
        && this->resourceName_ == nullptr && this->resourceType_ == nullptr; };
    // agentRuntimeEndpointName Field Functions 
    bool hasAgentRuntimeEndpointName() const { return this->agentRuntimeEndpointName_ != nullptr;};
    void deleteAgentRuntimeEndpointName() { this->agentRuntimeEndpointName_ = nullptr;};
    inline string getAgentRuntimeEndpointName() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeEndpointName_, "") };
    inline PathConfig& setAgentRuntimeEndpointName(string agentRuntimeEndpointName) { DARABONBA_PTR_SET_VALUE(agentRuntimeEndpointName_, agentRuntimeEndpointName) };


    // compatibleProtocol Field Functions 
    bool hasCompatibleProtocol() const { return this->compatibleProtocol_ != nullptr;};
    void deleteCompatibleProtocol() { this->compatibleProtocol_ = nullptr;};
    inline string getCompatibleProtocol() const { DARABONBA_PTR_GET_DEFAULT(compatibleProtocol_, "") };
    inline PathConfig& setCompatibleProtocol(string compatibleProtocol) { DARABONBA_PTR_SET_VALUE(compatibleProtocol_, compatibleProtocol) };


    // flowEndpointName Field Functions 
    bool hasFlowEndpointName() const { return this->flowEndpointName_ != nullptr;};
    void deleteFlowEndpointName() { this->flowEndpointName_ = nullptr;};
    inline string getFlowEndpointName() const { DARABONBA_PTR_GET_DEFAULT(flowEndpointName_, "") };
    inline PathConfig& setFlowEndpointName(string flowEndpointName) { DARABONBA_PTR_SET_VALUE(flowEndpointName_, flowEndpointName) };


    // methods Field Functions 
    bool hasMethods() const { return this->methods_ != nullptr;};
    void deleteMethods() { this->methods_ = nullptr;};
    inline const vector<string> & getMethods() const { DARABONBA_PTR_GET_CONST(methods_, vector<string>) };
    inline vector<string> getMethods() { DARABONBA_PTR_GET(methods_, vector<string>) };
    inline PathConfig& setMethods(const vector<string> & methods) { DARABONBA_PTR_SET_VALUE(methods_, methods) };
    inline PathConfig& setMethods(vector<string> && methods) { DARABONBA_PTR_SET_RVALUE(methods_, methods) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline PathConfig& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // removeBasePathOnForward Field Functions 
    bool hasRemoveBasePathOnForward() const { return this->removeBasePathOnForward_ != nullptr;};
    void deleteRemoveBasePathOnForward() { this->removeBasePathOnForward_ = nullptr;};
    inline bool getRemoveBasePathOnForward() const { DARABONBA_PTR_GET_DEFAULT(removeBasePathOnForward_, false) };
    inline PathConfig& setRemoveBasePathOnForward(bool removeBasePathOnForward) { DARABONBA_PTR_SET_VALUE(removeBasePathOnForward_, removeBasePathOnForward) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline PathConfig& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline PathConfig& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The agent runtime version. This parameter takes effect only when `resourceType` is `runtime`.
    shared_ptr<string> agentRuntimeEndpointName_ {};
    // The compatible protocol, used to convert the backend response format. This parameter is required only when `resourceType` is `flow`. Valid values: `native` indicates an FnF native call; `openai`, `dify-workflow`, and `dify-chatflow` map to their corresponding compatible APIs.
    shared_ptr<string> compatibleProtocol_ {};
    // The Flow version/alias. This parameter takes effect only when `resourceType` is `flow`. Default value: `Default`.
    shared_ptr<string> flowEndpointName_ {};
    // Supported methods: HEAD, GET, POST, PUT, DELETE, PATCH, and OPTIONS.
    shared_ptr<vector<string>> methods_ {};
    // The path for this routing rule.
    shared_ptr<string> path_ {};
    shared_ptr<bool> removeBasePathOnForward_ {};
    // The resource name.
    shared_ptr<string> resourceName_ {};
    // The resource type. This type must match the one associated with the credential.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
