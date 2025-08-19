// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTMANAGEMENTAUTOUPGRADEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTMANAGEMENTAUTOUPGRADEPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterNodePoolRequestManagementAutoUpgradePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterNodePoolRequestManagementAutoUpgradePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(auto_upgrade_kubelet, autoUpgradeKubelet_);
      DARABONBA_PTR_TO_JSON(auto_upgrade_os, autoUpgradeOs_);
      DARABONBA_PTR_TO_JSON(auto_upgrade_runtime, autoUpgradeRuntime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterNodePoolRequestManagementAutoUpgradePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_upgrade_kubelet, autoUpgradeKubelet_);
      DARABONBA_PTR_FROM_JSON(auto_upgrade_os, autoUpgradeOs_);
      DARABONBA_PTR_FROM_JSON(auto_upgrade_runtime, autoUpgradeRuntime_);
    };
    CreateClusterNodePoolRequestManagementAutoUpgradePolicy() = default ;
    CreateClusterNodePoolRequestManagementAutoUpgradePolicy(const CreateClusterNodePoolRequestManagementAutoUpgradePolicy &) = default ;
    CreateClusterNodePoolRequestManagementAutoUpgradePolicy(CreateClusterNodePoolRequestManagementAutoUpgradePolicy &&) = default ;
    CreateClusterNodePoolRequestManagementAutoUpgradePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterNodePoolRequestManagementAutoUpgradePolicy() = default ;
    CreateClusterNodePoolRequestManagementAutoUpgradePolicy& operator=(const CreateClusterNodePoolRequestManagementAutoUpgradePolicy &) = default ;
    CreateClusterNodePoolRequestManagementAutoUpgradePolicy& operator=(CreateClusterNodePoolRequestManagementAutoUpgradePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoUpgradeKubelet_ != nullptr
        && this->autoUpgradeOs_ != nullptr && this->autoUpgradeRuntime_ != nullptr; };
    // autoUpgradeKubelet Field Functions 
    bool hasAutoUpgradeKubelet() const { return this->autoUpgradeKubelet_ != nullptr;};
    void deleteAutoUpgradeKubelet() { this->autoUpgradeKubelet_ = nullptr;};
    inline bool autoUpgradeKubelet() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeKubelet_, false) };
    inline CreateClusterNodePoolRequestManagementAutoUpgradePolicy& setAutoUpgradeKubelet(bool autoUpgradeKubelet) { DARABONBA_PTR_SET_VALUE(autoUpgradeKubelet_, autoUpgradeKubelet) };


    // autoUpgradeOs Field Functions 
    bool hasAutoUpgradeOs() const { return this->autoUpgradeOs_ != nullptr;};
    void deleteAutoUpgradeOs() { this->autoUpgradeOs_ = nullptr;};
    inline bool autoUpgradeOs() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeOs_, false) };
    inline CreateClusterNodePoolRequestManagementAutoUpgradePolicy& setAutoUpgradeOs(bool autoUpgradeOs) { DARABONBA_PTR_SET_VALUE(autoUpgradeOs_, autoUpgradeOs) };


    // autoUpgradeRuntime Field Functions 
    bool hasAutoUpgradeRuntime() const { return this->autoUpgradeRuntime_ != nullptr;};
    void deleteAutoUpgradeRuntime() { this->autoUpgradeRuntime_ = nullptr;};
    inline bool autoUpgradeRuntime() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeRuntime_, false) };
    inline CreateClusterNodePoolRequestManagementAutoUpgradePolicy& setAutoUpgradeRuntime(bool autoUpgradeRuntime) { DARABONBA_PTR_SET_VALUE(autoUpgradeRuntime_, autoUpgradeRuntime) };


  protected:
    // Specifies whether to allow the auto upgrade of the kubelet. This parameter takes effect only when `auto_upgrade` is set to true. Valid values:
    // 
    // *   `true`: allows the auto upgrade of the kubelet.
    // *   `false`: does not allow the auto upgrade of the kubelet.
    // 
    // If `auto_upgrade` is set to true, the default value of this parameter is `true`. If `auto_upgrade` is set to false, the default value of this parameter is `false`.
    std::shared_ptr<bool> autoUpgradeKubelet_ = nullptr;
    // Specifies whether to allow the auto upgrade of the OS. This parameter takes effect only when `auto_upgrade` is set to true. Valid values:
    // 
    // *   `true`: allows the auto upgrade of the OS.
    // *   `false`: does not allow the auto upgrade of the OS.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> autoUpgradeOs_ = nullptr;
    // Specifies whether to allow the auto upgrade of the runtime. This parameter takes effect only when `auto_upgrade` is set to true. Valid values:
    // 
    // *   `true`: allows the auto upgrade of the runtime.
    // *   `false`: does not allow the auto upgrade of the runtime.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> autoUpgradeRuntime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
