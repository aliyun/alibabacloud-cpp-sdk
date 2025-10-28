// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONDEPLOYGROUPSDEPLOYGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONDEPLOYGROUPSDEPLOYGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(EnvFrom, envFrom_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(EnvFrom, envFrom_);
    };
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup() = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup(const GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup &) = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup(GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup &&) = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup() = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup& operator=(const GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup &) = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup& operator=(GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->components_ == nullptr
        && return this->env_ == nullptr && return this->envFrom_ == nullptr; };
    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents & components() const { DARABONBA_PTR_GET_CONST(components_, Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents) };
    inline Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents components() { DARABONBA_PTR_GET(components_, Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents) };
    inline GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup& setComponents(const Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup& setComponents(Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // envFrom Field Functions 
    bool hasEnvFrom() const { return this->envFrom_ != nullptr;};
    void deleteEnvFrom() { this->envFrom_ = nullptr;};
    inline string envFrom() const { DARABONBA_PTR_GET_DEFAULT(envFrom_, "") };
    inline GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup& setEnvFrom(string envFrom) { DARABONBA_PTR_SET_VALUE(envFrom_, envFrom) };


  protected:
    // The information about the component.
    std::shared_ptr<Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents> components_ = nullptr;
    // The environment variable. This parameter is different from the EnvList parameter. This parameter specifies the referenced configuration of the ConfigMap or Secret.
    std::shared_ptr<string> env_ = nullptr;
    // The source of the environment variable.
    std::shared_ptr<string> envFrom_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
