// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTMANAGEMENTAUTOVULFIXPOLICY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTMANAGEMENTAUTOVULFIXPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterNodePoolRequestManagementAutoVulFixPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterNodePoolRequestManagementAutoVulFixPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(exclude_packages, excludePackages_);
      DARABONBA_PTR_TO_JSON(restart_node, restartNode_);
      DARABONBA_PTR_TO_JSON(vul_level, vulLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterNodePoolRequestManagementAutoVulFixPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(exclude_packages, excludePackages_);
      DARABONBA_PTR_FROM_JSON(restart_node, restartNode_);
      DARABONBA_PTR_FROM_JSON(vul_level, vulLevel_);
    };
    ModifyClusterNodePoolRequestManagementAutoVulFixPolicy() = default ;
    ModifyClusterNodePoolRequestManagementAutoVulFixPolicy(const ModifyClusterNodePoolRequestManagementAutoVulFixPolicy &) = default ;
    ModifyClusterNodePoolRequestManagementAutoVulFixPolicy(ModifyClusterNodePoolRequestManagementAutoVulFixPolicy &&) = default ;
    ModifyClusterNodePoolRequestManagementAutoVulFixPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterNodePoolRequestManagementAutoVulFixPolicy() = default ;
    ModifyClusterNodePoolRequestManagementAutoVulFixPolicy& operator=(const ModifyClusterNodePoolRequestManagementAutoVulFixPolicy &) = default ;
    ModifyClusterNodePoolRequestManagementAutoVulFixPolicy& operator=(ModifyClusterNodePoolRequestManagementAutoVulFixPolicy &&) = default ;
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
    inline ModifyClusterNodePoolRequestManagementAutoVulFixPolicy& setExcludePackages(string excludePackages) { DARABONBA_PTR_SET_VALUE(excludePackages_, excludePackages) };


    // restartNode Field Functions 
    bool hasRestartNode() const { return this->restartNode_ != nullptr;};
    void deleteRestartNode() { this->restartNode_ = nullptr;};
    inline bool restartNode() const { DARABONBA_PTR_GET_DEFAULT(restartNode_, false) };
    inline ModifyClusterNodePoolRequestManagementAutoVulFixPolicy& setRestartNode(bool restartNode) { DARABONBA_PTR_SET_VALUE(restartNode_, restartNode) };


    // vulLevel Field Functions 
    bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
    void deleteVulLevel() { this->vulLevel_ = nullptr;};
    inline string vulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, "") };
    inline ModifyClusterNodePoolRequestManagementAutoVulFixPolicy& setVulLevel(string vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


  protected:
    std::shared_ptr<string> excludePackages_ = nullptr;
    // Specifies whether ACK is allowed to automatically restart nodes after repairing the nodes. Valid values:
    // 
    // *   `true`: yes.
    // *   `false`: no.
    std::shared_ptr<bool> restartNode_ = nullptr;
    // The severity levels of CVEs that can be automatically patched. Separate multiple levels with commas (,). Example: `asap,later`. Valid values:
    // 
    // *   `asap`: high.
    // *   `later`: medium.
    // *   `nntf`: low.
    // 
    // If `auto_vul_fix=true` is specified, the default value is `asap`.
    std::shared_ptr<string> vulLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
