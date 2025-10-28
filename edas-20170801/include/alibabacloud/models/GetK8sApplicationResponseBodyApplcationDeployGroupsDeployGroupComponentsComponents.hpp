// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONDEPLOYGROUPSDEPLOYGROUPCOMPONENTSCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONDEPLOYGROUPSDEPLOYGROUPCOMPONENTSCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(ComponentKey, componentKey_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(ComponentKey, componentKey_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents() = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents(const GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents &) = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents(GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents &&) = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents() = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents& operator=(const GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents &) = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents& operator=(GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentId_ == nullptr
        && return this->componentKey_ == nullptr && return this->type_ == nullptr; };
    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline string componentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
    inline GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // componentKey Field Functions 
    bool hasComponentKey() const { return this->componentKey_ != nullptr;};
    void deleteComponentKey() { this->componentKey_ = nullptr;};
    inline string componentKey() const { DARABONBA_PTR_GET_DEFAULT(componentKey_, "") };
    inline GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents& setComponentKey(string componentKey) { DARABONBA_PTR_SET_VALUE(componentKey_, componentKey) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroupComponentsComponents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The component ID.
    std::shared_ptr<string> componentId_ = nullptr;
    // The keyword that is included in the component name.
    std::shared_ptr<string> componentKey_ = nullptr;
    // The component type. Valid values:
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
