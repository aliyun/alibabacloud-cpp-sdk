// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYMANAGEMENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYMANAGEMENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyManagementAutoRepairPolicy.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyManagementAutoVulFixPolicy.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyManagementUpgradeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolDetailResponseBodyManagement : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolDetailResponseBodyManagement& obj) { 
      DARABONBA_PTR_TO_JSON(auto_repair, autoRepair_);
      DARABONBA_PTR_TO_JSON(auto_repair_policy, autoRepairPolicy_);
      DARABONBA_PTR_TO_JSON(auto_upgrade, autoUpgrade_);
      DARABONBA_PTR_TO_JSON(auto_upgrade_policy, autoUpgradePolicy_);
      DARABONBA_PTR_TO_JSON(auto_vul_fix, autoVulFix_);
      DARABONBA_PTR_TO_JSON(auto_vul_fix_policy, autoVulFixPolicy_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(upgrade_config, upgradeConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolDetailResponseBodyManagement& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_repair, autoRepair_);
      DARABONBA_PTR_FROM_JSON(auto_repair_policy, autoRepairPolicy_);
      DARABONBA_PTR_FROM_JSON(auto_upgrade, autoUpgrade_);
      DARABONBA_PTR_FROM_JSON(auto_upgrade_policy, autoUpgradePolicy_);
      DARABONBA_PTR_FROM_JSON(auto_vul_fix, autoVulFix_);
      DARABONBA_PTR_FROM_JSON(auto_vul_fix_policy, autoVulFixPolicy_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(upgrade_config, upgradeConfig_);
    };
    DescribeClusterNodePoolDetailResponseBodyManagement() = default ;
    DescribeClusterNodePoolDetailResponseBodyManagement(const DescribeClusterNodePoolDetailResponseBodyManagement &) = default ;
    DescribeClusterNodePoolDetailResponseBodyManagement(DescribeClusterNodePoolDetailResponseBodyManagement &&) = default ;
    DescribeClusterNodePoolDetailResponseBodyManagement(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolDetailResponseBodyManagement() = default ;
    DescribeClusterNodePoolDetailResponseBodyManagement& operator=(const DescribeClusterNodePoolDetailResponseBodyManagement &) = default ;
    DescribeClusterNodePoolDetailResponseBodyManagement& operator=(DescribeClusterNodePoolDetailResponseBodyManagement &&) = default ;
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
    inline DescribeClusterNodePoolDetailResponseBodyManagement& setAutoRepair(bool autoRepair) { DARABONBA_PTR_SET_VALUE(autoRepair_, autoRepair) };


    // autoRepairPolicy Field Functions 
    bool hasAutoRepairPolicy() const { return this->autoRepairPolicy_ != nullptr;};
    void deleteAutoRepairPolicy() { this->autoRepairPolicy_ = nullptr;};
    inline const Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoRepairPolicy & autoRepairPolicy() const { DARABONBA_PTR_GET_CONST(autoRepairPolicy_, Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoRepairPolicy) };
    inline Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoRepairPolicy autoRepairPolicy() { DARABONBA_PTR_GET(autoRepairPolicy_, Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoRepairPolicy) };
    inline DescribeClusterNodePoolDetailResponseBodyManagement& setAutoRepairPolicy(const Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoRepairPolicy & autoRepairPolicy) { DARABONBA_PTR_SET_VALUE(autoRepairPolicy_, autoRepairPolicy) };
    inline DescribeClusterNodePoolDetailResponseBodyManagement& setAutoRepairPolicy(Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoRepairPolicy && autoRepairPolicy) { DARABONBA_PTR_SET_RVALUE(autoRepairPolicy_, autoRepairPolicy) };


    // autoUpgrade Field Functions 
    bool hasAutoUpgrade() const { return this->autoUpgrade_ != nullptr;};
    void deleteAutoUpgrade() { this->autoUpgrade_ = nullptr;};
    inline bool autoUpgrade() const { DARABONBA_PTR_GET_DEFAULT(autoUpgrade_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyManagement& setAutoUpgrade(bool autoUpgrade) { DARABONBA_PTR_SET_VALUE(autoUpgrade_, autoUpgrade) };


    // autoUpgradePolicy Field Functions 
    bool hasAutoUpgradePolicy() const { return this->autoUpgradePolicy_ != nullptr;};
    void deleteAutoUpgradePolicy() { this->autoUpgradePolicy_ = nullptr;};
    inline const Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy & autoUpgradePolicy() const { DARABONBA_PTR_GET_CONST(autoUpgradePolicy_, Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy) };
    inline Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy autoUpgradePolicy() { DARABONBA_PTR_GET(autoUpgradePolicy_, Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy) };
    inline DescribeClusterNodePoolDetailResponseBodyManagement& setAutoUpgradePolicy(const Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy & autoUpgradePolicy) { DARABONBA_PTR_SET_VALUE(autoUpgradePolicy_, autoUpgradePolicy) };
    inline DescribeClusterNodePoolDetailResponseBodyManagement& setAutoUpgradePolicy(Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy && autoUpgradePolicy) { DARABONBA_PTR_SET_RVALUE(autoUpgradePolicy_, autoUpgradePolicy) };


    // autoVulFix Field Functions 
    bool hasAutoVulFix() const { return this->autoVulFix_ != nullptr;};
    void deleteAutoVulFix() { this->autoVulFix_ = nullptr;};
    inline bool autoVulFix() const { DARABONBA_PTR_GET_DEFAULT(autoVulFix_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyManagement& setAutoVulFix(bool autoVulFix) { DARABONBA_PTR_SET_VALUE(autoVulFix_, autoVulFix) };


    // autoVulFixPolicy Field Functions 
    bool hasAutoVulFixPolicy() const { return this->autoVulFixPolicy_ != nullptr;};
    void deleteAutoVulFixPolicy() { this->autoVulFixPolicy_ = nullptr;};
    inline const Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoVulFixPolicy & autoVulFixPolicy() const { DARABONBA_PTR_GET_CONST(autoVulFixPolicy_, Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoVulFixPolicy) };
    inline Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoVulFixPolicy autoVulFixPolicy() { DARABONBA_PTR_GET(autoVulFixPolicy_, Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoVulFixPolicy) };
    inline DescribeClusterNodePoolDetailResponseBodyManagement& setAutoVulFixPolicy(const Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoVulFixPolicy & autoVulFixPolicy) { DARABONBA_PTR_SET_VALUE(autoVulFixPolicy_, autoVulFixPolicy) };
    inline DescribeClusterNodePoolDetailResponseBodyManagement& setAutoVulFixPolicy(Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoVulFixPolicy && autoVulFixPolicy) { DARABONBA_PTR_SET_RVALUE(autoVulFixPolicy_, autoVulFixPolicy) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyManagement& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // upgradeConfig Field Functions 
    bool hasUpgradeConfig() const { return this->upgradeConfig_ != nullptr;};
    void deleteUpgradeConfig() { this->upgradeConfig_ = nullptr;};
    inline const Models::DescribeClusterNodePoolDetailResponseBodyManagementUpgradeConfig & upgradeConfig() const { DARABONBA_PTR_GET_CONST(upgradeConfig_, Models::DescribeClusterNodePoolDetailResponseBodyManagementUpgradeConfig) };
    inline Models::DescribeClusterNodePoolDetailResponseBodyManagementUpgradeConfig upgradeConfig() { DARABONBA_PTR_GET(upgradeConfig_, Models::DescribeClusterNodePoolDetailResponseBodyManagementUpgradeConfig) };
    inline DescribeClusterNodePoolDetailResponseBodyManagement& setUpgradeConfig(const Models::DescribeClusterNodePoolDetailResponseBodyManagementUpgradeConfig & upgradeConfig) { DARABONBA_PTR_SET_VALUE(upgradeConfig_, upgradeConfig) };
    inline DescribeClusterNodePoolDetailResponseBodyManagement& setUpgradeConfig(Models::DescribeClusterNodePoolDetailResponseBodyManagementUpgradeConfig && upgradeConfig) { DARABONBA_PTR_SET_RVALUE(upgradeConfig_, upgradeConfig) };


  protected:
    // Indicates whether auto repair is enabled. This parameter takes effect only when `enable=true` is specified. Valid values:
    // 
    // *   `true`: Auto repair is enabled.
    // *   `false`: Auto repair is disabled.
    std::shared_ptr<bool> autoRepair_ = nullptr;
    // Automatic repair node policy.
    std::shared_ptr<Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoRepairPolicy> autoRepairPolicy_ = nullptr;
    // Whether to automatically upgrade.
    std::shared_ptr<bool> autoUpgrade_ = nullptr;
    // Automatic upgrade policy.
    std::shared_ptr<Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy> autoUpgradePolicy_ = nullptr;
    // Whether to automatically fix CVEs.
    std::shared_ptr<bool> autoVulFix_ = nullptr;
    // Automatically repair CVE policies.
    std::shared_ptr<Models::DescribeClusterNodePoolDetailResponseBodyManagementAutoVulFixPolicy> autoVulFixPolicy_ = nullptr;
    // Indicates whether the managed node pool feature is enabled. Valid values:
    // 
    // *   `true`: The managed node pool feature is enabled.
    // *   `false`: The managed node pool feature is disabled. Other parameters in this section take effect only when `enable=true` is specified.
    std::shared_ptr<bool> enable_ = nullptr;
    // The configuration of auto update. The configuration takes effect only when `enable=true` is specified.
    std::shared_ptr<Models::DescribeClusterNodePoolDetailResponseBodyManagementUpgradeConfig> upgradeConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
