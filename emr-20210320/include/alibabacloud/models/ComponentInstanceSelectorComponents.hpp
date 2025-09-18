// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPONENTINSTANCESELECTORCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_COMPONENTINSTANCESELECTORCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ComponentInstanceSelectorComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ComponentInstanceSelectorComponents& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
    };
    friend void from_json(const Darabonba::Json& j, ComponentInstanceSelectorComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
    };
    ComponentInstanceSelectorComponents() = default ;
    ComponentInstanceSelectorComponents(const ComponentInstanceSelectorComponents &) = default ;
    ComponentInstanceSelectorComponents(ComponentInstanceSelectorComponents &&) = default ;
    ComponentInstanceSelectorComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ComponentInstanceSelectorComponents() = default ;
    ComponentInstanceSelectorComponents& operator=(const ComponentInstanceSelectorComponents &) = default ;
    ComponentInstanceSelectorComponents& operator=(ComponentInstanceSelectorComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationName_ != nullptr
        && this->componentName_ != nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ComponentInstanceSelectorComponents& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline ComponentInstanceSelectorComponents& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


  protected:
    // 应用名称。
    std::shared_ptr<string> applicationName_ = nullptr;
    // 组件名称。
    std::shared_ptr<string> componentName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
