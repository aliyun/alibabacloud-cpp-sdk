// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONDEPLOYGROUPSDEPLOYGROUPCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONDEPLOYGROUPSDEPLOYGROUPCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents& obj) { 
      DARABONBA_PTR_TO_JSON(Components, components_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(Components, components_);
    };
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents() = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents(const GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents &) = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents(GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents &&) = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents() = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents& operator=(const GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents &) = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents& operator=(GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->components_ == nullptr; };
    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents> & components() const { DARABONBA_PTR_GET_CONST(components_, vector<Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents>) };
    inline vector<Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents> components() { DARABONBA_PTR_GET(components_, vector<Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents>) };
    inline GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents& setComponents(const vector<Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponents& setComponents(vector<Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


  protected:
    std::shared_ptr<vector<Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents>> components_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
