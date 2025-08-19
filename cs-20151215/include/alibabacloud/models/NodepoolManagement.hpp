// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEPOOLMANAGEMENT_HPP_
#define ALIBABACLOUD_MODELS_NODEPOOLMANAGEMENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NodepoolManagementAutoRepairPolicy.hpp>
#include <alibabacloud/models/NodepoolManagementAutoUpgradePolicy.hpp>
#include <alibabacloud/models/NodepoolManagementAutoVulFixPolicy.hpp>
#include <alibabacloud/models/NodepoolManagementUpgradeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class NodepoolManagement : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodepoolManagement& obj) { 
      DARABONBA_PTR_TO_JSON(auto_repair, autoRepair_);
      DARABONBA_PTR_TO_JSON(auto_repair_policy, autoRepairPolicy_);
      DARABONBA_PTR_TO_JSON(auto_upgrade, autoUpgrade_);
      DARABONBA_PTR_TO_JSON(auto_upgrade_policy, autoUpgradePolicy_);
      DARABONBA_PTR_TO_JSON(auto_vul_fix, autoVulFix_);
      DARABONBA_PTR_TO_JSON(auto_vul_fix_policy, autoVulFixPolicy_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(upgrade_config, upgradeConfig_);
    };
    friend void from_json(const Darabonba::Json& j, NodepoolManagement& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_repair, autoRepair_);
      DARABONBA_PTR_FROM_JSON(auto_repair_policy, autoRepairPolicy_);
      DARABONBA_PTR_FROM_JSON(auto_upgrade, autoUpgrade_);
      DARABONBA_PTR_FROM_JSON(auto_upgrade_policy, autoUpgradePolicy_);
      DARABONBA_PTR_FROM_JSON(auto_vul_fix, autoVulFix_);
      DARABONBA_PTR_FROM_JSON(auto_vul_fix_policy, autoVulFixPolicy_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(upgrade_config, upgradeConfig_);
    };
    NodepoolManagement() = default ;
    NodepoolManagement(const NodepoolManagement &) = default ;
    NodepoolManagement(NodepoolManagement &&) = default ;
    NodepoolManagement(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodepoolManagement() = default ;
    NodepoolManagement& operator=(const NodepoolManagement &) = default ;
    NodepoolManagement& operator=(NodepoolManagement &&) = default ;
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
    inline NodepoolManagement& setAutoRepair(bool autoRepair) { DARABONBA_PTR_SET_VALUE(autoRepair_, autoRepair) };


    // autoRepairPolicy Field Functions 
    bool hasAutoRepairPolicy() const { return this->autoRepairPolicy_ != nullptr;};
    void deleteAutoRepairPolicy() { this->autoRepairPolicy_ = nullptr;};
    inline const Models::NodepoolManagementAutoRepairPolicy & autoRepairPolicy() const { DARABONBA_PTR_GET_CONST(autoRepairPolicy_, Models::NodepoolManagementAutoRepairPolicy) };
    inline Models::NodepoolManagementAutoRepairPolicy autoRepairPolicy() { DARABONBA_PTR_GET(autoRepairPolicy_, Models::NodepoolManagementAutoRepairPolicy) };
    inline NodepoolManagement& setAutoRepairPolicy(const Models::NodepoolManagementAutoRepairPolicy & autoRepairPolicy) { DARABONBA_PTR_SET_VALUE(autoRepairPolicy_, autoRepairPolicy) };
    inline NodepoolManagement& setAutoRepairPolicy(Models::NodepoolManagementAutoRepairPolicy && autoRepairPolicy) { DARABONBA_PTR_SET_RVALUE(autoRepairPolicy_, autoRepairPolicy) };


    // autoUpgrade Field Functions 
    bool hasAutoUpgrade() const { return this->autoUpgrade_ != nullptr;};
    void deleteAutoUpgrade() { this->autoUpgrade_ = nullptr;};
    inline bool autoUpgrade() const { DARABONBA_PTR_GET_DEFAULT(autoUpgrade_, false) };
    inline NodepoolManagement& setAutoUpgrade(bool autoUpgrade) { DARABONBA_PTR_SET_VALUE(autoUpgrade_, autoUpgrade) };


    // autoUpgradePolicy Field Functions 
    bool hasAutoUpgradePolicy() const { return this->autoUpgradePolicy_ != nullptr;};
    void deleteAutoUpgradePolicy() { this->autoUpgradePolicy_ = nullptr;};
    inline const Models::NodepoolManagementAutoUpgradePolicy & autoUpgradePolicy() const { DARABONBA_PTR_GET_CONST(autoUpgradePolicy_, Models::NodepoolManagementAutoUpgradePolicy) };
    inline Models::NodepoolManagementAutoUpgradePolicy autoUpgradePolicy() { DARABONBA_PTR_GET(autoUpgradePolicy_, Models::NodepoolManagementAutoUpgradePolicy) };
    inline NodepoolManagement& setAutoUpgradePolicy(const Models::NodepoolManagementAutoUpgradePolicy & autoUpgradePolicy) { DARABONBA_PTR_SET_VALUE(autoUpgradePolicy_, autoUpgradePolicy) };
    inline NodepoolManagement& setAutoUpgradePolicy(Models::NodepoolManagementAutoUpgradePolicy && autoUpgradePolicy) { DARABONBA_PTR_SET_RVALUE(autoUpgradePolicy_, autoUpgradePolicy) };


    // autoVulFix Field Functions 
    bool hasAutoVulFix() const { return this->autoVulFix_ != nullptr;};
    void deleteAutoVulFix() { this->autoVulFix_ = nullptr;};
    inline bool autoVulFix() const { DARABONBA_PTR_GET_DEFAULT(autoVulFix_, false) };
    inline NodepoolManagement& setAutoVulFix(bool autoVulFix) { DARABONBA_PTR_SET_VALUE(autoVulFix_, autoVulFix) };


    // autoVulFixPolicy Field Functions 
    bool hasAutoVulFixPolicy() const { return this->autoVulFixPolicy_ != nullptr;};
    void deleteAutoVulFixPolicy() { this->autoVulFixPolicy_ = nullptr;};
    inline const Models::NodepoolManagementAutoVulFixPolicy & autoVulFixPolicy() const { DARABONBA_PTR_GET_CONST(autoVulFixPolicy_, Models::NodepoolManagementAutoVulFixPolicy) };
    inline Models::NodepoolManagementAutoVulFixPolicy autoVulFixPolicy() { DARABONBA_PTR_GET(autoVulFixPolicy_, Models::NodepoolManagementAutoVulFixPolicy) };
    inline NodepoolManagement& setAutoVulFixPolicy(const Models::NodepoolManagementAutoVulFixPolicy & autoVulFixPolicy) { DARABONBA_PTR_SET_VALUE(autoVulFixPolicy_, autoVulFixPolicy) };
    inline NodepoolManagement& setAutoVulFixPolicy(Models::NodepoolManagementAutoVulFixPolicy && autoVulFixPolicy) { DARABONBA_PTR_SET_RVALUE(autoVulFixPolicy_, autoVulFixPolicy) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline NodepoolManagement& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // upgradeConfig Field Functions 
    bool hasUpgradeConfig() const { return this->upgradeConfig_ != nullptr;};
    void deleteUpgradeConfig() { this->upgradeConfig_ = nullptr;};
    inline const Models::NodepoolManagementUpgradeConfig & upgradeConfig() const { DARABONBA_PTR_GET_CONST(upgradeConfig_, Models::NodepoolManagementUpgradeConfig) };
    inline Models::NodepoolManagementUpgradeConfig upgradeConfig() { DARABONBA_PTR_GET(upgradeConfig_, Models::NodepoolManagementUpgradeConfig) };
    inline NodepoolManagement& setUpgradeConfig(const Models::NodepoolManagementUpgradeConfig & upgradeConfig) { DARABONBA_PTR_SET_VALUE(upgradeConfig_, upgradeConfig) };
    inline NodepoolManagement& setUpgradeConfig(Models::NodepoolManagementUpgradeConfig && upgradeConfig) { DARABONBA_PTR_SET_RVALUE(upgradeConfig_, upgradeConfig) };


  protected:
    std::shared_ptr<bool> autoRepair_ = nullptr;
    std::shared_ptr<Models::NodepoolManagementAutoRepairPolicy> autoRepairPolicy_ = nullptr;
    std::shared_ptr<bool> autoUpgrade_ = nullptr;
    std::shared_ptr<Models::NodepoolManagementAutoUpgradePolicy> autoUpgradePolicy_ = nullptr;
    std::shared_ptr<bool> autoVulFix_ = nullptr;
    std::shared_ptr<Models::NodepoolManagementAutoVulFixPolicy> autoVulFixPolicy_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<Models::NodepoolManagementUpgradeConfig> upgradeConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
