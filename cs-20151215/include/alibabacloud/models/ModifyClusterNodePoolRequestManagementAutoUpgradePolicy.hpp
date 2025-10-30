// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTMANAGEMENTAUTOUPGRADEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTMANAGEMENTAUTOUPGRADEPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterNodePoolRequestManagementAutoUpgradePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterNodePoolRequestManagementAutoUpgradePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(auto_upgrade_kubelet, autoUpgradeKubelet_);
      DARABONBA_PTR_TO_JSON(auto_upgrade_os, autoUpgradeOs_);
      DARABONBA_PTR_TO_JSON(auto_upgrade_runtime, autoUpgradeRuntime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterNodePoolRequestManagementAutoUpgradePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_upgrade_kubelet, autoUpgradeKubelet_);
      DARABONBA_PTR_FROM_JSON(auto_upgrade_os, autoUpgradeOs_);
      DARABONBA_PTR_FROM_JSON(auto_upgrade_runtime, autoUpgradeRuntime_);
    };
    ModifyClusterNodePoolRequestManagementAutoUpgradePolicy() = default ;
    ModifyClusterNodePoolRequestManagementAutoUpgradePolicy(const ModifyClusterNodePoolRequestManagementAutoUpgradePolicy &) = default ;
    ModifyClusterNodePoolRequestManagementAutoUpgradePolicy(ModifyClusterNodePoolRequestManagementAutoUpgradePolicy &&) = default ;
    ModifyClusterNodePoolRequestManagementAutoUpgradePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterNodePoolRequestManagementAutoUpgradePolicy() = default ;
    ModifyClusterNodePoolRequestManagementAutoUpgradePolicy& operator=(const ModifyClusterNodePoolRequestManagementAutoUpgradePolicy &) = default ;
    ModifyClusterNodePoolRequestManagementAutoUpgradePolicy& operator=(ModifyClusterNodePoolRequestManagementAutoUpgradePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoUpgradeKubelet_ == nullptr
        && return this->autoUpgradeOs_ == nullptr && return this->autoUpgradeRuntime_ == nullptr; };
    // autoUpgradeKubelet Field Functions 
    bool hasAutoUpgradeKubelet() const { return this->autoUpgradeKubelet_ != nullptr;};
    void deleteAutoUpgradeKubelet() { this->autoUpgradeKubelet_ = nullptr;};
    inline bool autoUpgradeKubelet() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeKubelet_, false) };
    inline ModifyClusterNodePoolRequestManagementAutoUpgradePolicy& setAutoUpgradeKubelet(bool autoUpgradeKubelet) { DARABONBA_PTR_SET_VALUE(autoUpgradeKubelet_, autoUpgradeKubelet) };


    // autoUpgradeOs Field Functions 
    bool hasAutoUpgradeOs() const { return this->autoUpgradeOs_ != nullptr;};
    void deleteAutoUpgradeOs() { this->autoUpgradeOs_ = nullptr;};
    inline bool autoUpgradeOs() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeOs_, false) };
    inline ModifyClusterNodePoolRequestManagementAutoUpgradePolicy& setAutoUpgradeOs(bool autoUpgradeOs) { DARABONBA_PTR_SET_VALUE(autoUpgradeOs_, autoUpgradeOs) };


    // autoUpgradeRuntime Field Functions 
    bool hasAutoUpgradeRuntime() const { return this->autoUpgradeRuntime_ != nullptr;};
    void deleteAutoUpgradeRuntime() { this->autoUpgradeRuntime_ = nullptr;};
    inline bool autoUpgradeRuntime() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeRuntime_, false) };
    inline ModifyClusterNodePoolRequestManagementAutoUpgradePolicy& setAutoUpgradeRuntime(bool autoUpgradeRuntime) { DARABONBA_PTR_SET_VALUE(autoUpgradeRuntime_, autoUpgradeRuntime) };


  protected:
    // Specifies whether ACK is allowed to automatically upgrade the kubelet. Valid values:
    // 
    // *   `true`: yes.
    // *   `false`: no.
    std::shared_ptr<bool> autoUpgradeKubelet_ = nullptr;
    // Specifies whether ACK is allowed to automatically upgrade the operating system. This parameter takes effect only when you specify `auto_upgrade=true`. Valid values:
    // 
    // *   `true`: yes.
    // *   `false`: no.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> autoUpgradeOs_ = nullptr;
    // Specifies whether ACK is allowed to automatically upgrade the runtime. This parameter takes effect only when you specify `auto_upgrade=true`. Valid values:
    // 
    // *   `true`: yes.
    // *   `false`: no.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> autoUpgradeRuntime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
