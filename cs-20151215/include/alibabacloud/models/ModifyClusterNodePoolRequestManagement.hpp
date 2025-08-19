// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTMANAGEMENT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTMANAGEMENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyClusterNodePoolRequestManagementAutoRepairPolicy.hpp>
#include <alibabacloud/models/ModifyClusterNodePoolRequestManagementAutoUpgradePolicy.hpp>
#include <alibabacloud/models/ModifyClusterNodePoolRequestManagementAutoVulFixPolicy.hpp>
#include <alibabacloud/models/ModifyClusterNodePoolRequestManagementUpgradeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterNodePoolRequestManagement : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterNodePoolRequestManagement& obj) { 
      DARABONBA_PTR_TO_JSON(auto_repair, autoRepair_);
      DARABONBA_PTR_TO_JSON(auto_repair_policy, autoRepairPolicy_);
      DARABONBA_PTR_TO_JSON(auto_upgrade, autoUpgrade_);
      DARABONBA_PTR_TO_JSON(auto_upgrade_policy, autoUpgradePolicy_);
      DARABONBA_PTR_TO_JSON(auto_vul_fix, autoVulFix_);
      DARABONBA_PTR_TO_JSON(auto_vul_fix_policy, autoVulFixPolicy_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(upgrade_config, upgradeConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterNodePoolRequestManagement& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_repair, autoRepair_);
      DARABONBA_PTR_FROM_JSON(auto_repair_policy, autoRepairPolicy_);
      DARABONBA_PTR_FROM_JSON(auto_upgrade, autoUpgrade_);
      DARABONBA_PTR_FROM_JSON(auto_upgrade_policy, autoUpgradePolicy_);
      DARABONBA_PTR_FROM_JSON(auto_vul_fix, autoVulFix_);
      DARABONBA_PTR_FROM_JSON(auto_vul_fix_policy, autoVulFixPolicy_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(upgrade_config, upgradeConfig_);
    };
    ModifyClusterNodePoolRequestManagement() = default ;
    ModifyClusterNodePoolRequestManagement(const ModifyClusterNodePoolRequestManagement &) = default ;
    ModifyClusterNodePoolRequestManagement(ModifyClusterNodePoolRequestManagement &&) = default ;
    ModifyClusterNodePoolRequestManagement(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterNodePoolRequestManagement() = default ;
    ModifyClusterNodePoolRequestManagement& operator=(const ModifyClusterNodePoolRequestManagement &) = default ;
    ModifyClusterNodePoolRequestManagement& operator=(ModifyClusterNodePoolRequestManagement &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRepair_ != nullptr
        && this->autoRepairPolicy_ != nullptr && this->autoUpgrade_ != nullptr && this->autoUpgradePolicy_ != nullptr && this->autoVulFix_ != nullptr && this->autoVulFixPolicy_ != nullptr
        && this->enable_ != nullptr && this->upgradeConfig_ != nullptr; };
    // autoRepair Field Functions 
    bool hasAutoRepair() const { return this->autoRepair_ != nullptr;};
    void deleteAutoRepair() { this->autoRepair_ = nullptr;};
    inline bool autoRepair() const { DARABONBA_PTR_GET_DEFAULT(autoRepair_, false) };
    inline ModifyClusterNodePoolRequestManagement& setAutoRepair(bool autoRepair) { DARABONBA_PTR_SET_VALUE(autoRepair_, autoRepair) };


    // autoRepairPolicy Field Functions 
    bool hasAutoRepairPolicy() const { return this->autoRepairPolicy_ != nullptr;};
    void deleteAutoRepairPolicy() { this->autoRepairPolicy_ = nullptr;};
    inline const Models::ModifyClusterNodePoolRequestManagementAutoRepairPolicy & autoRepairPolicy() const { DARABONBA_PTR_GET_CONST(autoRepairPolicy_, Models::ModifyClusterNodePoolRequestManagementAutoRepairPolicy) };
    inline Models::ModifyClusterNodePoolRequestManagementAutoRepairPolicy autoRepairPolicy() { DARABONBA_PTR_GET(autoRepairPolicy_, Models::ModifyClusterNodePoolRequestManagementAutoRepairPolicy) };
    inline ModifyClusterNodePoolRequestManagement& setAutoRepairPolicy(const Models::ModifyClusterNodePoolRequestManagementAutoRepairPolicy & autoRepairPolicy) { DARABONBA_PTR_SET_VALUE(autoRepairPolicy_, autoRepairPolicy) };
    inline ModifyClusterNodePoolRequestManagement& setAutoRepairPolicy(Models::ModifyClusterNodePoolRequestManagementAutoRepairPolicy && autoRepairPolicy) { DARABONBA_PTR_SET_RVALUE(autoRepairPolicy_, autoRepairPolicy) };


    // autoUpgrade Field Functions 
    bool hasAutoUpgrade() const { return this->autoUpgrade_ != nullptr;};
    void deleteAutoUpgrade() { this->autoUpgrade_ = nullptr;};
    inline bool autoUpgrade() const { DARABONBA_PTR_GET_DEFAULT(autoUpgrade_, false) };
    inline ModifyClusterNodePoolRequestManagement& setAutoUpgrade(bool autoUpgrade) { DARABONBA_PTR_SET_VALUE(autoUpgrade_, autoUpgrade) };


    // autoUpgradePolicy Field Functions 
    bool hasAutoUpgradePolicy() const { return this->autoUpgradePolicy_ != nullptr;};
    void deleteAutoUpgradePolicy() { this->autoUpgradePolicy_ = nullptr;};
    inline const Models::ModifyClusterNodePoolRequestManagementAutoUpgradePolicy & autoUpgradePolicy() const { DARABONBA_PTR_GET_CONST(autoUpgradePolicy_, Models::ModifyClusterNodePoolRequestManagementAutoUpgradePolicy) };
    inline Models::ModifyClusterNodePoolRequestManagementAutoUpgradePolicy autoUpgradePolicy() { DARABONBA_PTR_GET(autoUpgradePolicy_, Models::ModifyClusterNodePoolRequestManagementAutoUpgradePolicy) };
    inline ModifyClusterNodePoolRequestManagement& setAutoUpgradePolicy(const Models::ModifyClusterNodePoolRequestManagementAutoUpgradePolicy & autoUpgradePolicy) { DARABONBA_PTR_SET_VALUE(autoUpgradePolicy_, autoUpgradePolicy) };
    inline ModifyClusterNodePoolRequestManagement& setAutoUpgradePolicy(Models::ModifyClusterNodePoolRequestManagementAutoUpgradePolicy && autoUpgradePolicy) { DARABONBA_PTR_SET_RVALUE(autoUpgradePolicy_, autoUpgradePolicy) };


    // autoVulFix Field Functions 
    bool hasAutoVulFix() const { return this->autoVulFix_ != nullptr;};
    void deleteAutoVulFix() { this->autoVulFix_ = nullptr;};
    inline bool autoVulFix() const { DARABONBA_PTR_GET_DEFAULT(autoVulFix_, false) };
    inline ModifyClusterNodePoolRequestManagement& setAutoVulFix(bool autoVulFix) { DARABONBA_PTR_SET_VALUE(autoVulFix_, autoVulFix) };


    // autoVulFixPolicy Field Functions 
    bool hasAutoVulFixPolicy() const { return this->autoVulFixPolicy_ != nullptr;};
    void deleteAutoVulFixPolicy() { this->autoVulFixPolicy_ = nullptr;};
    inline const Models::ModifyClusterNodePoolRequestManagementAutoVulFixPolicy & autoVulFixPolicy() const { DARABONBA_PTR_GET_CONST(autoVulFixPolicy_, Models::ModifyClusterNodePoolRequestManagementAutoVulFixPolicy) };
    inline Models::ModifyClusterNodePoolRequestManagementAutoVulFixPolicy autoVulFixPolicy() { DARABONBA_PTR_GET(autoVulFixPolicy_, Models::ModifyClusterNodePoolRequestManagementAutoVulFixPolicy) };
    inline ModifyClusterNodePoolRequestManagement& setAutoVulFixPolicy(const Models::ModifyClusterNodePoolRequestManagementAutoVulFixPolicy & autoVulFixPolicy) { DARABONBA_PTR_SET_VALUE(autoVulFixPolicy_, autoVulFixPolicy) };
    inline ModifyClusterNodePoolRequestManagement& setAutoVulFixPolicy(Models::ModifyClusterNodePoolRequestManagementAutoVulFixPolicy && autoVulFixPolicy) { DARABONBA_PTR_SET_RVALUE(autoVulFixPolicy_, autoVulFixPolicy) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ModifyClusterNodePoolRequestManagement& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // upgradeConfig Field Functions 
    bool hasUpgradeConfig() const { return this->upgradeConfig_ != nullptr;};
    void deleteUpgradeConfig() { this->upgradeConfig_ = nullptr;};
    inline const Models::ModifyClusterNodePoolRequestManagementUpgradeConfig & upgradeConfig() const { DARABONBA_PTR_GET_CONST(upgradeConfig_, Models::ModifyClusterNodePoolRequestManagementUpgradeConfig) };
    inline Models::ModifyClusterNodePoolRequestManagementUpgradeConfig upgradeConfig() { DARABONBA_PTR_GET(upgradeConfig_, Models::ModifyClusterNodePoolRequestManagementUpgradeConfig) };
    inline ModifyClusterNodePoolRequestManagement& setUpgradeConfig(const Models::ModifyClusterNodePoolRequestManagementUpgradeConfig & upgradeConfig) { DARABONBA_PTR_SET_VALUE(upgradeConfig_, upgradeConfig) };
    inline ModifyClusterNodePoolRequestManagement& setUpgradeConfig(Models::ModifyClusterNodePoolRequestManagementUpgradeConfig && upgradeConfig) { DARABONBA_PTR_SET_RVALUE(upgradeConfig_, upgradeConfig) };


  protected:
    // Specifies whether to enable auto node repair. This parameter takes effect only if `enable` is set to true. Valid values:
    // 
    // *   `true`: enables auto repair.
    // *   `false`: disables auto repair.
    // 
    // Default value: `true`.
    std::shared_ptr<bool> autoRepair_ = nullptr;
    // The auto node repair policy.
    std::shared_ptr<Models::ModifyClusterNodePoolRequestManagementAutoRepairPolicy> autoRepairPolicy_ = nullptr;
    // Specifies whether to enable auto upgrade. Valid values:
    // 
    // *   `true`: enables auto upgrade.
    // *   `false`: disables auto upgrade.
    std::shared_ptr<bool> autoUpgrade_ = nullptr;
    // The auto upgrade policy.
    std::shared_ptr<Models::ModifyClusterNodePoolRequestManagementAutoUpgradePolicy> autoUpgradePolicy_ = nullptr;
    // Specifies whether ACK is allowed to automatically patch CVE vulnerabilities. Valid values:
    // 
    // *   `true`: enables auto CVE patching.
    // *   `true`: disables auto CVE patching.
    std::shared_ptr<bool> autoVulFix_ = nullptr;
    // The auto CVE patching policy.
    std::shared_ptr<Models::ModifyClusterNodePoolRequestManagementAutoVulFixPolicy> autoVulFixPolicy_ = nullptr;
    // Specifies whether to enable the managed node pool feature. Valid values:
    // 
    // *   `true`: enables the managed node pool feature.
    // *   `false`: disables the managed node pool feature. Other parameters in this section take effect only when `enable=true` is specified.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> enable_ = nullptr;
    // This parameter is deprecated. Use the preceding `auto_upgrade` parameter instead.
    // 
    // The configurations of auto upgrade. The configurations take effect only when `enable` is set to true.
    std::shared_ptr<Models::ModifyClusterNodePoolRequestManagementUpgradeConfig> upgradeConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
