// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTMANAGEMENTUPGRADECONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTMANAGEMENTUPGRADECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterNodePoolRequestManagementUpgradeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterNodePoolRequestManagementUpgradeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(auto_upgrade, autoUpgrade_);
      DARABONBA_PTR_TO_JSON(max_unavailable, maxUnavailable_);
      DARABONBA_PTR_TO_JSON(surge, surge_);
      DARABONBA_PTR_TO_JSON(surge_percentage, surgePercentage_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterNodePoolRequestManagementUpgradeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_upgrade, autoUpgrade_);
      DARABONBA_PTR_FROM_JSON(max_unavailable, maxUnavailable_);
      DARABONBA_PTR_FROM_JSON(surge, surge_);
      DARABONBA_PTR_FROM_JSON(surge_percentage, surgePercentage_);
    };
    ModifyClusterNodePoolRequestManagementUpgradeConfig() = default ;
    ModifyClusterNodePoolRequestManagementUpgradeConfig(const ModifyClusterNodePoolRequestManagementUpgradeConfig &) = default ;
    ModifyClusterNodePoolRequestManagementUpgradeConfig(ModifyClusterNodePoolRequestManagementUpgradeConfig &&) = default ;
    ModifyClusterNodePoolRequestManagementUpgradeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterNodePoolRequestManagementUpgradeConfig() = default ;
    ModifyClusterNodePoolRequestManagementUpgradeConfig& operator=(const ModifyClusterNodePoolRequestManagementUpgradeConfig &) = default ;
    ModifyClusterNodePoolRequestManagementUpgradeConfig& operator=(ModifyClusterNodePoolRequestManagementUpgradeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoUpgrade_ != nullptr
        && this->maxUnavailable_ != nullptr && this->surge_ != nullptr && this->surgePercentage_ != nullptr; };
    // autoUpgrade Field Functions 
    bool hasAutoUpgrade() const { return this->autoUpgrade_ != nullptr;};
    void deleteAutoUpgrade() { this->autoUpgrade_ = nullptr;};
    inline bool autoUpgrade() const { DARABONBA_PTR_GET_DEFAULT(autoUpgrade_, false) };
    inline ModifyClusterNodePoolRequestManagementUpgradeConfig& setAutoUpgrade(bool autoUpgrade) { DARABONBA_PTR_SET_VALUE(autoUpgrade_, autoUpgrade) };


    // maxUnavailable Field Functions 
    bool hasMaxUnavailable() const { return this->maxUnavailable_ != nullptr;};
    void deleteMaxUnavailable() { this->maxUnavailable_ = nullptr;};
    inline int64_t maxUnavailable() const { DARABONBA_PTR_GET_DEFAULT(maxUnavailable_, 0L) };
    inline ModifyClusterNodePoolRequestManagementUpgradeConfig& setMaxUnavailable(int64_t maxUnavailable) { DARABONBA_PTR_SET_VALUE(maxUnavailable_, maxUnavailable) };


    // surge Field Functions 
    bool hasSurge() const { return this->surge_ != nullptr;};
    void deleteSurge() { this->surge_ = nullptr;};
    inline int64_t surge() const { DARABONBA_PTR_GET_DEFAULT(surge_, 0L) };
    inline ModifyClusterNodePoolRequestManagementUpgradeConfig& setSurge(int64_t surge) { DARABONBA_PTR_SET_VALUE(surge_, surge) };


    // surgePercentage Field Functions 
    bool hasSurgePercentage() const { return this->surgePercentage_ != nullptr;};
    void deleteSurgePercentage() { this->surgePercentage_ = nullptr;};
    inline int64_t surgePercentage() const { DARABONBA_PTR_GET_DEFAULT(surgePercentage_, 0L) };
    inline ModifyClusterNodePoolRequestManagementUpgradeConfig& setSurgePercentage(int64_t surgePercentage) { DARABONBA_PTR_SET_VALUE(surgePercentage_, surgePercentage) };


  protected:
    // This parameter is deprecated. Use the preceding `auto_upgrade` parameter instead.
    // 
    // Specifies whether to enable auto upgrade. Valid values:
    // 
    // *   true: enables auto upgrade.
    // *   false: disables auto upgrade.
    // 
    // Default value: `true`.
    std::shared_ptr<bool> autoUpgrade_ = nullptr;
    // The maximum number of nodes that can be in the Unavailable state.
    // 
    // Valid values: 1 to 1000.
    // 
    // Default value: 1.
    std::shared_ptr<int64_t> maxUnavailable_ = nullptr;
    // The number of additional nodes that are temporarily added to the node pool during an auto upgrade. Specify this parameter or `surge_percentage`.
    // 
    // A node is unavailable during an upgrade. Additional nodes are used to temporarily host the workloads of nodes that are being upgraded.
    // 
    // >  We recommend that you specify a value that does not exceed the current number of nodes in the node pool.
    std::shared_ptr<int64_t> surge_ = nullptr;
    // The percentage of additional nodes in the node pool. Specify this parameter or the `surge` parameter is specified.
    // 
    // The number of additional nodes = The percentage of additional nodes × The number of nodes in the node pool. For example, if the percentage of additional nodes is 50% and the number of nodes in the node pool is 6, the number of additional nodes is 3.
    std::shared_ptr<int64_t> surgePercentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
