// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPONENTINSTANCESELECTORCOMPONENTINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_COMPONENTINSTANCESELECTORCOMPONENTINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ComponentInstanceSelectorComponentInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ComponentInstanceSelectorComponentInstances& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, ComponentInstanceSelectorComponentInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    ComponentInstanceSelectorComponentInstances() = default ;
    ComponentInstanceSelectorComponentInstances(const ComponentInstanceSelectorComponentInstances &) = default ;
    ComponentInstanceSelectorComponentInstances(ComponentInstanceSelectorComponentInstances &&) = default ;
    ComponentInstanceSelectorComponentInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ComponentInstanceSelectorComponentInstances() = default ;
    ComponentInstanceSelectorComponentInstances& operator=(const ComponentInstanceSelectorComponentInstances &) = default ;
    ComponentInstanceSelectorComponentInstances& operator=(ComponentInstanceSelectorComponentInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationName_ != nullptr
        && this->componentName_ != nullptr && this->nodeId_ != nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ComponentInstanceSelectorComponentInstances& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline ComponentInstanceSelectorComponentInstances& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ComponentInstanceSelectorComponentInstances& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // 应用名称。
    std::shared_ptr<string> applicationName_ = nullptr;
    // 组件名称。
    std::shared_ptr<string> componentName_ = nullptr;
    // 节点ID。
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
