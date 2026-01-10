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
      DARABONBA_PTR_TO_JSON(methods, methods_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, PathConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(agentRuntimeEndpointName, agentRuntimeEndpointName_);
      DARABONBA_PTR_FROM_JSON(methods, methods_);
      DARABONBA_PTR_FROM_JSON(path, path_);
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
        && this->methods_ == nullptr && this->path_ == nullptr && this->resourceName_ == nullptr && this->resourceType_ == nullptr; };
    // agentRuntimeEndpointName Field Functions 
    bool hasAgentRuntimeEndpointName() const { return this->agentRuntimeEndpointName_ != nullptr;};
    void deleteAgentRuntimeEndpointName() { this->agentRuntimeEndpointName_ = nullptr;};
    inline string getAgentRuntimeEndpointName() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeEndpointName_, "") };
    inline PathConfig& setAgentRuntimeEndpointName(string agentRuntimeEndpointName) { DARABONBA_PTR_SET_VALUE(agentRuntimeEndpointName_, agentRuntimeEndpointName) };


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
    // agent runtime 版本（仅当 resourceType 为 runtime 时有效）
    shared_ptr<string> agentRuntimeEndpointName_ {};
    // 支持的方法有：HEAD, GET, POST, PUT, DELETE, PATCH, OPTIONS
    shared_ptr<vector<string>> methods_ {};
    // 此条路由规则对应的请求路径。
    shared_ptr<string> path_ {};
    // 资源名称
    shared_ptr<string> resourceName_ {};
    // 资源类型（和凭证关联资源类型一致）
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
