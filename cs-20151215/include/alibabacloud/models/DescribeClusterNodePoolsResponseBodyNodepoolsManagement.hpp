// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSMANAGEMENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSMANAGEMENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoRepairPolicy.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolsResponseBodyNodepoolsManagement : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepoolsManagement& obj) { 
      DARABONBA_PTR_TO_JSON(auto_repair, autoRepair_);
      DARABONBA_PTR_TO_JSON(auto_repair_policy, autoRepairPolicy_);
      DARABONBA_PTR_TO_JSON(auto_upgrade, autoUpgrade_);
      DARABONBA_PTR_TO_JSON(auto_upgrade_policy, autoUpgradePolicy_);
      DARABONBA_PTR_TO_JSON(auto_vul_fix, autoVulFix_);
      DARABONBA_PTR_TO_JSON(auto_vul_fix_policy, autoVulFixPolicy_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(upgrade_config, upgradeConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepoolsManagement& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_repair, autoRepair_);
      DARABONBA_PTR_FROM_JSON(auto_repair_policy, autoRepairPolicy_);
      DARABONBA_PTR_FROM_JSON(auto_upgrade, autoUpgrade_);
      DARABONBA_PTR_FROM_JSON(auto_upgrade_policy, autoUpgradePolicy_);
      DARABONBA_PTR_FROM_JSON(auto_vul_fix, autoVulFix_);
      DARABONBA_PTR_FROM_JSON(auto_vul_fix_policy, autoVulFixPolicy_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(upgrade_config, upgradeConfig_);
    };
    DescribeClusterNodePoolsResponseBodyNodepoolsManagement() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagement(const DescribeClusterNodePoolsResponseBodyNodepoolsManagement &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagement(DescribeClusterNodePoolsResponseBodyNodepoolsManagement &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagement(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsManagement() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagement& operator=(const DescribeClusterNodePoolsResponseBodyNodepoolsManagement &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagement& operator=(DescribeClusterNodePoolsResponseBodyNodepoolsManagement &&) = default ;
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
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagement& setAutoRepair(bool autoRepair) { DARABONBA_PTR_SET_VALUE(autoRepair_, autoRepair) };


    // autoRepairPolicy Field Functions 
    bool hasAutoRepairPolicy() const { return this->autoRepairPolicy_ != nullptr;};
    void deleteAutoRepairPolicy() { this->autoRepairPolicy_ = nullptr;};
    inline const Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoRepairPolicy & autoRepairPolicy() const { DARABONBA_PTR_GET_CONST(autoRepairPolicy_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoRepairPolicy) };
    inline Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoRepairPolicy autoRepairPolicy() { DARABONBA_PTR_GET(autoRepairPolicy_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoRepairPolicy) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagement& setAutoRepairPolicy(const Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoRepairPolicy & autoRepairPolicy) { DARABONBA_PTR_SET_VALUE(autoRepairPolicy_, autoRepairPolicy) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagement& setAutoRepairPolicy(Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoRepairPolicy && autoRepairPolicy) { DARABONBA_PTR_SET_RVALUE(autoRepairPolicy_, autoRepairPolicy) };


    // autoUpgrade Field Functions 
    bool hasAutoUpgrade() const { return this->autoUpgrade_ != nullptr;};
    void deleteAutoUpgrade() { this->autoUpgrade_ = nullptr;};
    inline bool autoUpgrade() const { DARABONBA_PTR_GET_DEFAULT(autoUpgrade_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagement& setAutoUpgrade(bool autoUpgrade) { DARABONBA_PTR_SET_VALUE(autoUpgrade_, autoUpgrade) };


    // autoUpgradePolicy Field Functions 
    bool hasAutoUpgradePolicy() const { return this->autoUpgradePolicy_ != nullptr;};
    void deleteAutoUpgradePolicy() { this->autoUpgradePolicy_ = nullptr;};
    inline const Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy & autoUpgradePolicy() const { DARABONBA_PTR_GET_CONST(autoUpgradePolicy_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy) };
    inline Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy autoUpgradePolicy() { DARABONBA_PTR_GET(autoUpgradePolicy_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagement& setAutoUpgradePolicy(const Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy & autoUpgradePolicy) { DARABONBA_PTR_SET_VALUE(autoUpgradePolicy_, autoUpgradePolicy) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagement& setAutoUpgradePolicy(Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy && autoUpgradePolicy) { DARABONBA_PTR_SET_RVALUE(autoUpgradePolicy_, autoUpgradePolicy) };


    // autoVulFix Field Functions 
    bool hasAutoVulFix() const { return this->autoVulFix_ != nullptr;};
    void deleteAutoVulFix() { this->autoVulFix_ = nullptr;};
    inline bool autoVulFix() const { DARABONBA_PTR_GET_DEFAULT(autoVulFix_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagement& setAutoVulFix(bool autoVulFix) { DARABONBA_PTR_SET_VALUE(autoVulFix_, autoVulFix) };


    // autoVulFixPolicy Field Functions 
    bool hasAutoVulFixPolicy() const { return this->autoVulFixPolicy_ != nullptr;};
    void deleteAutoVulFixPolicy() { this->autoVulFixPolicy_ = nullptr;};
    inline const Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy & autoVulFixPolicy() const { DARABONBA_PTR_GET_CONST(autoVulFixPolicy_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy) };
    inline Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy autoVulFixPolicy() { DARABONBA_PTR_GET(autoVulFixPolicy_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagement& setAutoVulFixPolicy(const Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy & autoVulFixPolicy) { DARABONBA_PTR_SET_VALUE(autoVulFixPolicy_, autoVulFixPolicy) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagement& setAutoVulFixPolicy(Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy && autoVulFixPolicy) { DARABONBA_PTR_SET_RVALUE(autoVulFixPolicy_, autoVulFixPolicy) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagement& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // upgradeConfig Field Functions 
    bool hasUpgradeConfig() const { return this->upgradeConfig_ != nullptr;};
    void deleteUpgradeConfig() { this->upgradeConfig_ = nullptr;};
    inline const Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig & upgradeConfig() const { DARABONBA_PTR_GET_CONST(upgradeConfig_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig) };
    inline Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig upgradeConfig() { DARABONBA_PTR_GET(upgradeConfig_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagement& setUpgradeConfig(const Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig & upgradeConfig) { DARABONBA_PTR_SET_VALUE(upgradeConfig_, upgradeConfig) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagement& setUpgradeConfig(Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig && upgradeConfig) { DARABONBA_PTR_SET_RVALUE(upgradeConfig_, upgradeConfig) };


  protected:
    // Specifies whether to enable auto repair. This parameter takes effect only if `enable` is set to true. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> autoRepair_ = nullptr;
    // The auto node repair policy.
    std::shared_ptr<Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoRepairPolicy> autoRepairPolicy_ = nullptr;
    // Specifies whether to enable auto node upgrade. This parameter takes effect only if `enable` is set to true.
    // 
    // *   `true`: Auto update is enabled.
    // *   `false`: Auto update is disabled.
    std::shared_ptr<bool> autoUpgrade_ = nullptr;
    // The auto update policy.
    std::shared_ptr<Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy> autoUpgradePolicy_ = nullptr;
    // Indicates whether auto Common Vulnerabilities and Exposures (CVE) patching is enabled. This parameter takes effect only when `enable=true` is specified.
    // 
    // *   `true`: enables auto CVE patching.
    // *   `true`: disables auto CVE patching.
    std::shared_ptr<bool> autoVulFix_ = nullptr;
    // The auto CVE patching policy.
    std::shared_ptr<Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy> autoVulFixPolicy_ = nullptr;
    // Specifies whether to enable the managed node pool feature. Valid values:
    // 
    // *   `true`
    // *   `false`: If you set this parameter to false, other parameters of `management` do not take effect.
    std::shared_ptr<bool> enable_ = nullptr;
    // The configurations of auto update. The configurations take effect only if `enable` is set to true.
    std::shared_ptr<Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig> upgradeConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
