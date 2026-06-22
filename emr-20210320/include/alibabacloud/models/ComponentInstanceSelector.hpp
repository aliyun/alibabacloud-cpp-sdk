// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPONENTINSTANCESELECTOR_HPP_
#define ALIBABACLOUD_MODELS_COMPONENTINSTANCESELECTOR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      };
      Components() = default ;
      Components(const Components &) = default ;
      Components(Components &&) = default ;
      Components(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Components() = default ;
      Components& operator=(const Components &) = default ;
      Components& operator=(Components &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->componentName_ == nullptr; };
      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline Components& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // componentName Field Functions 
      bool hasComponentName() const { return this->componentName_ != nullptr;};
      void deleteComponentName() { this->componentName_ = nullptr;};
      inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
      inline Components& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    protected:
      // The application name.
      shared_ptr<string> applicationName_ {};
      // The component name.
      shared_ptr<string> componentName_ {};
    };

    class ComponentInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComponentInstances& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      };
      friend void from_json(const Darabonba::Json& j, ComponentInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      };
      ComponentInstances() = default ;
      ComponentInstances(const ComponentInstances &) = default ;
      ComponentInstances(ComponentInstances &&) = default ;
      ComponentInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComponentInstances() = default ;
      ComponentInstances& operator=(const ComponentInstances &) = default ;
      ComponentInstances& operator=(ComponentInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->componentName_ == nullptr && this->nodeId_ == nullptr; };
      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline ComponentInstances& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // componentName Field Functions 
      bool hasComponentName() const { return this->componentName_ != nullptr;};
      void deleteComponentName() { this->componentName_ = nullptr;};
      inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
      inline ComponentInstances& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline ComponentInstances& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    protected:
      // The application name.
      shared_ptr<string> applicationName_ {};
      // The component name.
      shared_ptr<string> componentName_ {};
      // The node ID.
      shared_ptr<string> nodeId_ {};
    };

    virtual bool empty() const override { return this->actionScope_ == nullptr
        && this->applicationName_ == nullptr && this->componentInstances_ == nullptr && this->components_ == nullptr && this->runActionScope_ == nullptr; };
    // actionScope Field Functions 
    bool hasActionScope() const { return this->actionScope_ != nullptr;};
    void deleteActionScope() { this->actionScope_ = nullptr;};
    inline string getActionScope() const { DARABONBA_PTR_GET_DEFAULT(actionScope_, "") };
    inline ComponentInstanceSelector& setActionScope(string actionScope) { DARABONBA_PTR_SET_VALUE(actionScope_, actionScope) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ComponentInstanceSelector& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // componentInstances Field Functions 
    bool hasComponentInstances() const { return this->componentInstances_ != nullptr;};
    void deleteComponentInstances() { this->componentInstances_ = nullptr;};
    inline const vector<ComponentInstanceSelector::ComponentInstances> & getComponentInstances() const { DARABONBA_PTR_GET_CONST(componentInstances_, vector<ComponentInstanceSelector::ComponentInstances>) };
    inline vector<ComponentInstanceSelector::ComponentInstances> getComponentInstances() { DARABONBA_PTR_GET(componentInstances_, vector<ComponentInstanceSelector::ComponentInstances>) };
    inline ComponentInstanceSelector& setComponentInstances(const vector<ComponentInstanceSelector::ComponentInstances> & componentInstances) { DARABONBA_PTR_SET_VALUE(componentInstances_, componentInstances) };
    inline ComponentInstanceSelector& setComponentInstances(vector<ComponentInstanceSelector::ComponentInstances> && componentInstances) { DARABONBA_PTR_SET_RVALUE(componentInstances_, componentInstances) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<ComponentInstanceSelector::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<ComponentInstanceSelector::Components>) };
    inline vector<ComponentInstanceSelector::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<ComponentInstanceSelector::Components>) };
    inline ComponentInstanceSelector& setComponents(const vector<ComponentInstanceSelector::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline ComponentInstanceSelector& setComponents(vector<ComponentInstanceSelector::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // runActionScope Field Functions 
    bool hasRunActionScope() const { return this->runActionScope_ != nullptr;};
    void deleteRunActionScope() { this->runActionScope_ = nullptr;};
    inline string getRunActionScope() const { DARABONBA_PTR_GET_DEFAULT(runActionScope_, "") };
    inline ComponentInstanceSelector& setRunActionScope(string runActionScope) { DARABONBA_PTR_SET_VALUE(runActionScope_, runActionScope) };


  protected:
    // The action scope. Valid values:
    // 
    // - APPLICATION: The application level.
    // 
    // - COMPONENT: The component level.
    // 
    // - COMPONENT_INSTANCE: The component instance level.
    shared_ptr<string> actionScope_ {};
    // The application name.
    shared_ptr<string> applicationName_ {};
    // A list of component instances. This parameter is used when `RunActionScope` is set to `COMPONENT_INSTANCE`.
    shared_ptr<vector<ComponentInstanceSelector::ComponentInstances>> componentInstances_ {};
    // A list of components. This parameter is used when `RunActionScope` is set to `COMPONENT`.
    shared_ptr<vector<ComponentInstanceSelector::Components>> components_ {};
    // The action scope. Valid values:
    // 
    // - APPLICATION: The application level.
    // 
    // - COMPONENT: The component level.
    // 
    // - COMPONENT_INSTANCE: The component instance level.
    // 
    // This parameter is required.
    shared_ptr<string> runActionScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
