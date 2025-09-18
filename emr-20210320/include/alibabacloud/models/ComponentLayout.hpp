// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPONENTLAYOUT_HPP_
#define ALIBABACLOUD_MODELS_COMPONENTLAYOUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ComponentLayoutNodeSelector.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ComponentLayout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ComponentLayout& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(NodeSelector, nodeSelector_);
    };
    friend void from_json(const Darabonba::Json& j, ComponentLayout& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(NodeSelector, nodeSelector_);
    };
    ComponentLayout() = default ;
    ComponentLayout(const ComponentLayout &) = default ;
    ComponentLayout(ComponentLayout &&) = default ;
    ComponentLayout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ComponentLayout() = default ;
    ComponentLayout& operator=(const ComponentLayout &) = default ;
    ComponentLayout& operator=(ComponentLayout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationName_ != nullptr
        && this->componentName_ != nullptr && this->nodeSelector_ != nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ComponentLayout& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline ComponentLayout& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // nodeSelector Field Functions 
    bool hasNodeSelector() const { return this->nodeSelector_ != nullptr;};
    void deleteNodeSelector() { this->nodeSelector_ = nullptr;};
    inline const ComponentLayoutNodeSelector & nodeSelector() const { DARABONBA_PTR_GET_CONST(nodeSelector_, ComponentLayoutNodeSelector) };
    inline ComponentLayoutNodeSelector nodeSelector() { DARABONBA_PTR_GET(nodeSelector_, ComponentLayoutNodeSelector) };
    inline ComponentLayout& setNodeSelector(const ComponentLayoutNodeSelector & nodeSelector) { DARABONBA_PTR_SET_VALUE(nodeSelector_, nodeSelector) };
    inline ComponentLayout& setNodeSelector(ComponentLayoutNodeSelector && nodeSelector) { DARABONBA_PTR_SET_RVALUE(nodeSelector_, nodeSelector) };


  protected:
    // 应用名称。
    std::shared_ptr<string> applicationName_ = nullptr;
    // 组件名称。
    std::shared_ptr<string> componentName_ = nullptr;
    // 节点选择器。
    std::shared_ptr<ComponentLayoutNodeSelector> nodeSelector_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
