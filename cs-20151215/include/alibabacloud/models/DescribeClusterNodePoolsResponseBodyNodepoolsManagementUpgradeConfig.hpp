// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSMANAGEMENTUPGRADECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSMANAGEMENTUPGRADECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(auto_upgrade, autoUpgrade_);
      DARABONBA_PTR_TO_JSON(max_unavailable, maxUnavailable_);
      DARABONBA_PTR_TO_JSON(surge, surge_);
      DARABONBA_PTR_TO_JSON(surge_percentage, surgePercentage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_upgrade, autoUpgrade_);
      DARABONBA_PTR_FROM_JSON(max_unavailable, maxUnavailable_);
      DARABONBA_PTR_FROM_JSON(surge, surge_);
      DARABONBA_PTR_FROM_JSON(surge_percentage, surgePercentage_);
    };
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig(const DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig(DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig& operator=(const DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig& operator=(DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig &&) = default ;
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
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig& setAutoUpgrade(bool autoUpgrade) { DARABONBA_PTR_SET_VALUE(autoUpgrade_, autoUpgrade) };


    // maxUnavailable Field Functions 
    bool hasMaxUnavailable() const { return this->maxUnavailable_ != nullptr;};
    void deleteMaxUnavailable() { this->maxUnavailable_ = nullptr;};
    inline int64_t maxUnavailable() const { DARABONBA_PTR_GET_DEFAULT(maxUnavailable_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig& setMaxUnavailable(int64_t maxUnavailable) { DARABONBA_PTR_SET_VALUE(maxUnavailable_, maxUnavailable) };


    // surge Field Functions 
    bool hasSurge() const { return this->surge_ != nullptr;};
    void deleteSurge() { this->surge_ = nullptr;};
    inline int64_t surge() const { DARABONBA_PTR_GET_DEFAULT(surge_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig& setSurge(int64_t surge) { DARABONBA_PTR_SET_VALUE(surge_, surge) };


    // surgePercentage Field Functions 
    bool hasSurgePercentage() const { return this->surgePercentage_ != nullptr;};
    void deleteSurgePercentage() { this->surgePercentage_ = nullptr;};
    inline int64_t surgePercentage() const { DARABONBA_PTR_GET_DEFAULT(surgePercentage_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig& setSurgePercentage(int64_t surgePercentage) { DARABONBA_PTR_SET_VALUE(surgePercentage_, surgePercentage) };


  protected:
    // Specifies whether to enable auto update. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> autoUpgrade_ = nullptr;
    // The maximum number of unavailable nodes. Valid values: 1 to 1000.
    // 
    // Default value: 1
    std::shared_ptr<int64_t> maxUnavailable_ = nullptr;
    // The number of nodes that are temporarily added to the node pool during an auto update. You must specify this parameter or `surge_percentage`.
    std::shared_ptr<int64_t> surge_ = nullptr;
    // The percentage of additional nodes to the total nodes in the node pool. You must specify this parameter or the `surge` parameter.
    // 
    // The number of additional nodes = The percentage of additional nodes × The number of nodes in the node pool. For example, if the percentage of additional nodes is 50% and the number of nodes in the node pool is 6, the number of additional nodes is 3.
    std::shared_ptr<int64_t> surgePercentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
