// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENTLAYOUT_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENTLAYOUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NodeSelector.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class DeploymentLayout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploymentLayout& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(NodeSelector, nodeSelector_);
    };
    friend void from_json(const Darabonba::Json& j, DeploymentLayout& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(NodeSelector, nodeSelector_);
    };
    DeploymentLayout() = default ;
    DeploymentLayout(const DeploymentLayout &) = default ;
    DeploymentLayout(DeploymentLayout &&) = default ;
    DeploymentLayout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploymentLayout() = default ;
    DeploymentLayout& operator=(const DeploymentLayout &) = default ;
    DeploymentLayout& operator=(DeploymentLayout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && return this->componentName_ == nullptr && return this->nodeSelector_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline DeploymentLayout& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline DeploymentLayout& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // nodeSelector Field Functions 
    bool hasNodeSelector() const { return this->nodeSelector_ != nullptr;};
    void deleteNodeSelector() { this->nodeSelector_ = nullptr;};
    inline const NodeSelector & nodeSelector() const { DARABONBA_PTR_GET_CONST(nodeSelector_, NodeSelector) };
    inline NodeSelector nodeSelector() { DARABONBA_PTR_GET(nodeSelector_, NodeSelector) };
    inline DeploymentLayout& setNodeSelector(const NodeSelector & nodeSelector) { DARABONBA_PTR_SET_VALUE(nodeSelector_, nodeSelector) };
    inline DeploymentLayout& setNodeSelector(NodeSelector && nodeSelector) { DARABONBA_PTR_SET_RVALUE(nodeSelector_, nodeSelector) };


  protected:
    std::shared_ptr<string> applicationName_ = nullptr;
    std::shared_ptr<string> componentName_ = nullptr;
    std::shared_ptr<NodeSelector> nodeSelector_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
