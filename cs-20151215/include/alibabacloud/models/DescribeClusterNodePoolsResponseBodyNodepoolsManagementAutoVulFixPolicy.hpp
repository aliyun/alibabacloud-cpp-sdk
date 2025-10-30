// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSMANAGEMENTAUTOVULFIXPOLICY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSMANAGEMENTAUTOVULFIXPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(exclude_packages, excludePackages_);
      DARABONBA_PTR_TO_JSON(restart_node, restartNode_);
      DARABONBA_PTR_TO_JSON(vul_level, vulLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(exclude_packages, excludePackages_);
      DARABONBA_PTR_FROM_JSON(restart_node, restartNode_);
      DARABONBA_PTR_FROM_JSON(vul_level, vulLevel_);
    };
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy(const DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy(DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy& operator=(const DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy& operator=(DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->excludePackages_ == nullptr
        && return this->restartNode_ == nullptr && return this->vulLevel_ == nullptr; };
    // excludePackages Field Functions 
    bool hasExcludePackages() const { return this->excludePackages_ != nullptr;};
    void deleteExcludePackages() { this->excludePackages_ = nullptr;};
    inline string excludePackages() const { DARABONBA_PTR_GET_DEFAULT(excludePackages_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy& setExcludePackages(string excludePackages) { DARABONBA_PTR_SET_VALUE(excludePackages_, excludePackages) };


    // restartNode Field Functions 
    bool hasRestartNode() const { return this->restartNode_ != nullptr;};
    void deleteRestartNode() { this->restartNode_ = nullptr;};
    inline bool restartNode() const { DARABONBA_PTR_GET_DEFAULT(restartNode_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy& setRestartNode(bool restartNode) { DARABONBA_PTR_SET_VALUE(restartNode_, restartNode) };


    // vulLevel Field Functions 
    bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
    void deleteVulLevel() { this->vulLevel_ = nullptr;};
    inline string vulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoVulFixPolicy& setVulLevel(string vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


  protected:
    std::shared_ptr<string> excludePackages_ = nullptr;
    // Specifies whether to allow node restart. This parameter takes effect only if `auto_vul_fix` is set to true. Valid values:
    // 
    // *   `true`: allows node restart.
    // *   `false`: does not allow node restart.
    std::shared_ptr<bool> restartNode_ = nullptr;
    // The severity level of CVEs that can be automatically patched. Multiple severity levels are separated by commas (,).
    // 
    // *   `asap`: high.
    // *   `later`: medium.
    // *   `nntf`: low.
    std::shared_ptr<string> vulLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
