// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPONENTINSTANCESELECTOR_HPP_
#define ALIBABACLOUD_MODELS_COMPONENTINSTANCESELECTOR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ComponentInstanceSelectorComponentInstances.hpp>
#include <alibabacloud/models/ComponentInstanceSelectorComponents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ComponentInstanceSelector : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ComponentInstanceSelector& obj) { 
      DARABONBA_PTR_TO_JSON(ActionScope, actionScope_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ComponentInstances, componentInstances_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(RunActionScope, runActionScope_);
    };
    friend void from_json(const Darabonba::Json& j, ComponentInstanceSelector& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionScope, actionScope_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ComponentInstances, componentInstances_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(RunActionScope, runActionScope_);
    };
    ComponentInstanceSelector() = default ;
    ComponentInstanceSelector(const ComponentInstanceSelector &) = default ;
    ComponentInstanceSelector(ComponentInstanceSelector &&) = default ;
    ComponentInstanceSelector(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ComponentInstanceSelector() = default ;
    ComponentInstanceSelector& operator=(const ComponentInstanceSelector &) = default ;
    ComponentInstanceSelector& operator=(ComponentInstanceSelector &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionScope_ != nullptr
        && this->applicationName_ != nullptr && this->componentInstances_ != nullptr && this->components_ != nullptr && this->runActionScope_ != nullptr; };
    // actionScope Field Functions 
    bool hasActionScope() const { return this->actionScope_ != nullptr;};
    void deleteActionScope() { this->actionScope_ = nullptr;};
    inline string actionScope() const { DARABONBA_PTR_GET_DEFAULT(actionScope_, "") };
    inline ComponentInstanceSelector& setActionScope(string actionScope) { DARABONBA_PTR_SET_VALUE(actionScope_, actionScope) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ComponentInstanceSelector& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // componentInstances Field Functions 
    bool hasComponentInstances() const { return this->componentInstances_ != nullptr;};
    void deleteComponentInstances() { this->componentInstances_ = nullptr;};
    inline const vector<ComponentInstanceSelectorComponentInstances> & componentInstances() const { DARABONBA_PTR_GET_CONST(componentInstances_, vector<ComponentInstanceSelectorComponentInstances>) };
    inline vector<ComponentInstanceSelectorComponentInstances> componentInstances() { DARABONBA_PTR_GET(componentInstances_, vector<ComponentInstanceSelectorComponentInstances>) };
    inline ComponentInstanceSelector& setComponentInstances(const vector<ComponentInstanceSelectorComponentInstances> & componentInstances) { DARABONBA_PTR_SET_VALUE(componentInstances_, componentInstances) };
    inline ComponentInstanceSelector& setComponentInstances(vector<ComponentInstanceSelectorComponentInstances> && componentInstances) { DARABONBA_PTR_SET_RVALUE(componentInstances_, componentInstances) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<ComponentInstanceSelectorComponents> & components() const { DARABONBA_PTR_GET_CONST(components_, vector<ComponentInstanceSelectorComponents>) };
    inline vector<ComponentInstanceSelectorComponents> components() { DARABONBA_PTR_GET(components_, vector<ComponentInstanceSelectorComponents>) };
    inline ComponentInstanceSelector& setComponents(const vector<ComponentInstanceSelectorComponents> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline ComponentInstanceSelector& setComponents(vector<ComponentInstanceSelectorComponents> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // runActionScope Field Functions 
    bool hasRunActionScope() const { return this->runActionScope_ != nullptr;};
    void deleteRunActionScope() { this->runActionScope_ = nullptr;};
    inline string runActionScope() const { DARABONBA_PTR_GET_DEFAULT(runActionScope_, "") };
    inline ComponentInstanceSelector& setRunActionScope(string runActionScope) { DARABONBA_PTR_SET_VALUE(runActionScope_, runActionScope) };


  protected:
    std::shared_ptr<string> actionScope_ = nullptr;
    // 应用名称。
    std::shared_ptr<string> applicationName_ = nullptr;
    // 组件实例列表。actionScope为COPONENT_INSTANCE时使用。
    std::shared_ptr<vector<ComponentInstanceSelectorComponentInstances>> componentInstances_ = nullptr;
    // 组件列表。
    // actionScope为COPONENT时使用。
    std::shared_ptr<vector<ComponentInstanceSelectorComponents>> components_ = nullptr;
    // 动作执行范围。取值范围：
    // - APPLICATION：应用级别。
    // - COMPONENT：组件级别。
    // - COMPONENT_INSTANCE：组件实例级别。
    // 
    // This parameter is required.
    std::shared_ptr<string> runActionScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
