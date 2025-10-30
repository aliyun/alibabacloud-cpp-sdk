// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTMANAGEMENT_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTMANAGEMENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestManagementAutoRepairPolicy.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestManagementAutoUpgradePolicy.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestManagementAutoVulFixPolicy.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestManagementUpgradeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterNodePoolRequestManagement : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterNodePoolRequestManagement& obj) { 
      DARABONBA_PTR_TO_JSON(auto_repair, autoRepair_);
      DARABONBA_PTR_TO_JSON(auto_repair_policy, autoRepairPolicy_);
      DARABONBA_PTR_TO_JSON(auto_upgrade, autoUpgrade_);
      DARABONBA_PTR_TO_JSON(auto_upgrade_policy, autoUpgradePolicy_);
      DARABONBA_PTR_TO_JSON(auto_vul_fix, autoVulFix_);
      DARABONBA_PTR_TO_JSON(auto_vul_fix_policy, autoVulFixPolicy_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(upgrade_config, upgradeConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterNodePoolRequestManagement& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_repair, autoRepair_);
      DARABONBA_PTR_FROM_JSON(auto_repair_policy, autoRepairPolicy_);
      DARABONBA_PTR_FROM_JSON(auto_upgrade, autoUpgrade_);
      DARABONBA_PTR_FROM_JSON(auto_upgrade_policy, autoUpgradePolicy_);
      DARABONBA_PTR_FROM_JSON(auto_vul_fix, autoVulFix_);
      DARABONBA_PTR_FROM_JSON(auto_vul_fix_policy, autoVulFixPolicy_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(upgrade_config, upgradeConfig_);
    };
    CreateClusterNodePoolRequestManagement() = default ;
    CreateClusterNodePoolRequestManagement(const CreateClusterNodePoolRequestManagement &) = default ;
    CreateClusterNodePoolRequestManagement(CreateClusterNodePoolRequestManagement &&) = default ;
    CreateClusterNodePoolRequestManagement(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterNodePoolRequestManagement() = default ;
    CreateClusterNodePoolRequestManagement& operator=(const CreateClusterNodePoolRequestManagement &) = default ;
    CreateClusterNodePoolRequestManagement& operator=(CreateClusterNodePoolRequestManagement &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRepair_ == nullptr
        && return this->autoRepairPolicy_ == nullptr && return this->autoUpgrade_ == nullptr && return this->autoUpgradePolicy_ == nullptr && return this->autoVulFix_ == nullptr && return this->autoVulFixPolicy_ == nullptr
        && return this->enable_ == nullptr && return this->upgradeConfig_ == nullptr; };
    // autoRepair Field Functions 
    bool hasAutoRepair() const { return this->autoRepair_ != nullptr;};
    void deleteAutoRepair() { this->autoRepair_ = nullptr;};
    inline bool autoRepair() const { DARABONBA_PTR_GET_DEFAULT(autoRepair_, false) };
    inline CreateClusterNodePoolRequestManagement& setAutoRepair(bool autoRepair) { DARABONBA_PTR_SET_VALUE(autoRepair_, autoRepair) };


    // autoRepairPolicy Field Functions 
    bool hasAutoRepairPolicy() const { return this->autoRepairPolicy_ != nullptr;};
    void deleteAutoRepairPolicy() { this->autoRepairPolicy_ = nullptr;};
    inline const Models::CreateClusterNodePoolRequestManagementAutoRepairPolicy & autoRepairPolicy() const { DARABONBA_PTR_GET_CONST(autoRepairPolicy_, Models::CreateClusterNodePoolRequestManagementAutoRepairPolicy) };
    inline Models::CreateClusterNodePoolRequestManagementAutoRepairPolicy autoRepairPolicy() { DARABONBA_PTR_GET(autoRepairPolicy_, Models::CreateClusterNodePoolRequestManagementAutoRepairPolicy) };
    inline CreateClusterNodePoolRequestManagement& setAutoRepairPolicy(const Models::CreateClusterNodePoolRequestManagementAutoRepairPolicy & autoRepairPolicy) { DARABONBA_PTR_SET_VALUE(autoRepairPolicy_, autoRepairPolicy) };
    inline CreateClusterNodePoolRequestManagement& setAutoRepairPolicy(Models::CreateClusterNodePoolRequestManagementAutoRepairPolicy && autoRepairPolicy) { DARABONBA_PTR_SET_RVALUE(autoRepairPolicy_, autoRepairPolicy) };


    // autoUpgrade Field Functions 
    bool hasAutoUpgrade() const { return this->autoUpgrade_ != nullptr;};
    void deleteAutoUpgrade() { this->autoUpgrade_ = nullptr;};
    inline bool autoUpgrade() const { DARABONBA_PTR_GET_DEFAULT(autoUpgrade_, false) };
    inline CreateClusterNodePoolRequestManagement& setAutoUpgrade(bool autoUpgrade) { DARABONBA_PTR_SET_VALUE(autoUpgrade_, autoUpgrade) };


    // autoUpgradePolicy Field Functions 
    bool hasAutoUpgradePolicy() const { return this->autoUpgradePolicy_ != nullptr;};
    void deleteAutoUpgradePolicy() { this->autoUpgradePolicy_ = nullptr;};
    inline const Models::CreateClusterNodePoolRequestManagementAutoUpgradePolicy & autoUpgradePolicy() const { DARABONBA_PTR_GET_CONST(autoUpgradePolicy_, Models::CreateClusterNodePoolRequestManagementAutoUpgradePolicy) };
    inline Models::CreateClusterNodePoolRequestManagementAutoUpgradePolicy autoUpgradePolicy() { DARABONBA_PTR_GET(autoUpgradePolicy_, Models::CreateClusterNodePoolRequestManagementAutoUpgradePolicy) };
    inline CreateClusterNodePoolRequestManagement& setAutoUpgradePolicy(const Models::CreateClusterNodePoolRequestManagementAutoUpgradePolicy & autoUpgradePolicy) { DARABONBA_PTR_SET_VALUE(autoUpgradePolicy_, autoUpgradePolicy) };
    inline CreateClusterNodePoolRequestManagement& setAutoUpgradePolicy(Models::CreateClusterNodePoolRequestManagementAutoUpgradePolicy && autoUpgradePolicy) { DARABONBA_PTR_SET_RVALUE(autoUpgradePolicy_, autoUpgradePolicy) };


    // autoVulFix Field Functions 
    bool hasAutoVulFix() const { return this->autoVulFix_ != nullptr;};
    void deleteAutoVulFix() { this->autoVulFix_ = nullptr;};
    inline bool autoVulFix() const { DARABONBA_PTR_GET_DEFAULT(autoVulFix_, false) };
    inline CreateClusterNodePoolRequestManagement& setAutoVulFix(bool autoVulFix) { DARABONBA_PTR_SET_VALUE(autoVulFix_, autoVulFix) };


    // autoVulFixPolicy Field Functions 
    bool hasAutoVulFixPolicy() const { return this->autoVulFixPolicy_ != nullptr;};
    void deleteAutoVulFixPolicy() { this->autoVulFixPolicy_ = nullptr;};
    inline const Models::CreateClusterNodePoolRequestManagementAutoVulFixPolicy & autoVulFixPolicy() const { DARABONBA_PTR_GET_CONST(autoVulFixPolicy_, Models::CreateClusterNodePoolRequestManagementAutoVulFixPolicy) };
    inline Models::CreateClusterNodePoolRequestManagementAutoVulFixPolicy autoVulFixPolicy() { DARABONBA_PTR_GET(autoVulFixPolicy_, Models::CreateClusterNodePoolRequestManagementAutoVulFixPolicy) };
    inline CreateClusterNodePoolRequestManagement& setAutoVulFixPolicy(const Models::CreateClusterNodePoolRequestManagementAutoVulFixPolicy & autoVulFixPolicy) { DARABONBA_PTR_SET_VALUE(autoVulFixPolicy_, autoVulFixPolicy) };
    inline CreateClusterNodePoolRequestManagement& setAutoVulFixPolicy(Models::CreateClusterNodePoolRequestManagementAutoVulFixPolicy && autoVulFixPolicy) { DARABONBA_PTR_SET_RVALUE(autoVulFixPolicy_, autoVulFixPolicy) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateClusterNodePoolRequestManagement& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // upgradeConfig Field Functions 
    bool hasUpgradeConfig() const { return this->upgradeConfig_ != nullptr;};
    void deleteUpgradeConfig() { this->upgradeConfig_ = nullptr;};
    inline const Models::CreateClusterNodePoolRequestManagementUpgradeConfig & upgradeConfig() const { DARABONBA_PTR_GET_CONST(upgradeConfig_, Models::CreateClusterNodePoolRequestManagementUpgradeConfig) };
    inline Models::CreateClusterNodePoolRequestManagementUpgradeConfig upgradeConfig() { DARABONBA_PTR_GET(upgradeConfig_, Models::CreateClusterNodePoolRequestManagementUpgradeConfig) };
    inline CreateClusterNodePoolRequestManagement& setUpgradeConfig(const Models::CreateClusterNodePoolRequestManagementUpgradeConfig & upgradeConfig) { DARABONBA_PTR_SET_VALUE(upgradeConfig_, upgradeConfig) };
    inline CreateClusterNodePoolRequestManagement& setUpgradeConfig(Models::CreateClusterNodePoolRequestManagementUpgradeConfig && upgradeConfig) { DARABONBA_PTR_SET_RVALUE(upgradeConfig_, upgradeConfig) };


  protected:
    // Specifies whether to enable auto node repair. This parameter takes effect only when `enable` is set to true.
    // 
    // *   `true`: enables auto node repair.
    // *   `false`: disables auto node repair.
    // 
    // If `enable` is set to true, the default value of this parameter is `true`. If `enable` is set to false, the default value of this parameter is `false`.
    std::shared_ptr<bool> autoRepair_ = nullptr;
    // The auto node repair policy.
    std::shared_ptr<Models::CreateClusterNodePoolRequestManagementAutoRepairPolicy> autoRepairPolicy_ = nullptr;
    // Specifies whether to enable auto node upgrade. This parameter takes effect only when `enable` is set to true.
    // 
    // *   `true`: enables auto node upgrade.
    // *   `false`: disables auto node upgrade.
    // 
    // If `enable` is set to true, the default value of this parameter is `true`. If `enable` is set to false, the default value of this parameter is `false`.
    std::shared_ptr<bool> autoUpgrade_ = nullptr;
    // The auto node upgrade policy.
    std::shared_ptr<Models::CreateClusterNodePoolRequestManagementAutoUpgradePolicy> autoUpgradePolicy_ = nullptr;
    // Specifies whether to enable auto Common Vulnerabilities and Exposures (CVE) patching. This parameter takes effect only when `enable` is set to true.
    // 
    // *   `true`: enables auto CVE patching.
    // *   `false`: disables auto CVE patching.
    // 
    // If `enable` is set to true, the default value of this parameter is `true`. If `enable` is set to false, the default value of this parameter is `false`.
    std::shared_ptr<bool> autoVulFix_ = nullptr;
    // The auto CVE patching policy.
    std::shared_ptr<Models::CreateClusterNodePoolRequestManagementAutoVulFixPolicy> autoVulFixPolicy_ = nullptr;
    // Specifies whether to enable the managed node pool feature. Valid values:
    // 
    // *   `true`: enables the managed node pool feature.
    // *   `false`: disables the managed node pool feature. Other parameters in this section take effect only when enable is set to true.
    // 
    // Default value: false.
    std::shared_ptr<bool> enable_ = nullptr;
    // The configurations of auto upgrade. The configurations take effect only when `enable` is set to true.
    std::shared_ptr<Models::CreateClusterNodePoolRequestManagementUpgradeConfig> upgradeConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
