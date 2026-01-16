// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERADDONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERADDONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyClusterAddonShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterAddonShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Addon, addonShrink_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterAddonShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Addon, addonShrink_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
    };
    ModifyClusterAddonShrinkRequest() = default ;
    ModifyClusterAddonShrinkRequest(const ModifyClusterAddonShrinkRequest &) = default ;
    ModifyClusterAddonShrinkRequest(ModifyClusterAddonShrinkRequest &&) = default ;
    ModifyClusterAddonShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterAddonShrinkRequest() = default ;
    ModifyClusterAddonShrinkRequest& operator=(const ModifyClusterAddonShrinkRequest &) = default ;
    ModifyClusterAddonShrinkRequest& operator=(ModifyClusterAddonShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonShrink_ == nullptr
        && this->clusterId_ == nullptr && this->componentName_ == nullptr; };
    // addonShrink Field Functions 
    bool hasAddonShrink() const { return this->addonShrink_ != nullptr;};
    void deleteAddonShrink() { this->addonShrink_ = nullptr;};
    inline string getAddonShrink() const { DARABONBA_PTR_GET_DEFAULT(addonShrink_, "") };
    inline ModifyClusterAddonShrinkRequest& setAddonShrink(string addonShrink) { DARABONBA_PTR_SET_VALUE(addonShrink_, addonShrink) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyClusterAddonShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline ModifyClusterAddonShrinkRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


  protected:
    shared_ptr<string> addonShrink_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> componentName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
