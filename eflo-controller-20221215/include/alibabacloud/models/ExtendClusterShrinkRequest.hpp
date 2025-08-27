// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTENDCLUSTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXTENDCLUSTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ExtendClusterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtendClusterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_TO_JSON(IpAllocationPolicy, ipAllocationPolicyShrink_);
      DARABONBA_PTR_TO_JSON(NodeGroups, nodeGroupsShrink_);
      DARABONBA_PTR_TO_JSON(VSwitchZoneId, vSwitchZoneId_);
      DARABONBA_PTR_TO_JSON(VpdSubnets, vpdSubnetsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ExtendClusterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_FROM_JSON(IpAllocationPolicy, ipAllocationPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(NodeGroups, nodeGroupsShrink_);
      DARABONBA_PTR_FROM_JSON(VSwitchZoneId, vSwitchZoneId_);
      DARABONBA_PTR_FROM_JSON(VpdSubnets, vpdSubnetsShrink_);
    };
    ExtendClusterShrinkRequest() = default ;
    ExtendClusterShrinkRequest(const ExtendClusterShrinkRequest &) = default ;
    ExtendClusterShrinkRequest(ExtendClusterShrinkRequest &&) = default ;
    ExtendClusterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtendClusterShrinkRequest() = default ;
    ExtendClusterShrinkRequest& operator=(const ExtendClusterShrinkRequest &) = default ;
    ExtendClusterShrinkRequest& operator=(ExtendClusterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->ignoreFailedNodeTasks_ != nullptr && this->ipAllocationPolicyShrink_ != nullptr && this->nodeGroupsShrink_ != nullptr && this->vSwitchZoneId_ != nullptr && this->vpdSubnetsShrink_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ExtendClusterShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // ignoreFailedNodeTasks Field Functions 
    bool hasIgnoreFailedNodeTasks() const { return this->ignoreFailedNodeTasks_ != nullptr;};
    void deleteIgnoreFailedNodeTasks() { this->ignoreFailedNodeTasks_ = nullptr;};
    inline bool ignoreFailedNodeTasks() const { DARABONBA_PTR_GET_DEFAULT(ignoreFailedNodeTasks_, false) };
    inline ExtendClusterShrinkRequest& setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) { DARABONBA_PTR_SET_VALUE(ignoreFailedNodeTasks_, ignoreFailedNodeTasks) };


    // ipAllocationPolicyShrink Field Functions 
    bool hasIpAllocationPolicyShrink() const { return this->ipAllocationPolicyShrink_ != nullptr;};
    void deleteIpAllocationPolicyShrink() { this->ipAllocationPolicyShrink_ = nullptr;};
    inline string ipAllocationPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(ipAllocationPolicyShrink_, "") };
    inline ExtendClusterShrinkRequest& setIpAllocationPolicyShrink(string ipAllocationPolicyShrink) { DARABONBA_PTR_SET_VALUE(ipAllocationPolicyShrink_, ipAllocationPolicyShrink) };


    // nodeGroupsShrink Field Functions 
    bool hasNodeGroupsShrink() const { return this->nodeGroupsShrink_ != nullptr;};
    void deleteNodeGroupsShrink() { this->nodeGroupsShrink_ = nullptr;};
    inline string nodeGroupsShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupsShrink_, "") };
    inline ExtendClusterShrinkRequest& setNodeGroupsShrink(string nodeGroupsShrink) { DARABONBA_PTR_SET_VALUE(nodeGroupsShrink_, nodeGroupsShrink) };


    // vSwitchZoneId Field Functions 
    bool hasVSwitchZoneId() const { return this->vSwitchZoneId_ != nullptr;};
    void deleteVSwitchZoneId() { this->vSwitchZoneId_ = nullptr;};
    inline string vSwitchZoneId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchZoneId_, "") };
    inline ExtendClusterShrinkRequest& setVSwitchZoneId(string vSwitchZoneId) { DARABONBA_PTR_SET_VALUE(vSwitchZoneId_, vSwitchZoneId) };


    // vpdSubnetsShrink Field Functions 
    bool hasVpdSubnetsShrink() const { return this->vpdSubnetsShrink_ != nullptr;};
    void deleteVpdSubnetsShrink() { this->vpdSubnetsShrink_ = nullptr;};
    inline string vpdSubnetsShrink() const { DARABONBA_PTR_GET_DEFAULT(vpdSubnetsShrink_, "") };
    inline ExtendClusterShrinkRequest& setVpdSubnetsShrink(string vpdSubnetsShrink) { DARABONBA_PTR_SET_VALUE(vpdSubnetsShrink_, vpdSubnetsShrink) };


  protected:
    // Cluster ID
    std::shared_ptr<string> clusterId_ = nullptr;
    // Whether to allow skipping failed node tasks, default value is False
    std::shared_ptr<bool> ignoreFailedNodeTasks_ = nullptr;
    // IP allocation combination policy: Each policy can only choose one type, and multiple policies can be combined
    std::shared_ptr<string> ipAllocationPolicyShrink_ = nullptr;
    // Node Groups
    std::shared_ptr<string> nodeGroupsShrink_ = nullptr;
    // VSwitch availability zone ID
    std::shared_ptr<string> vSwitchZoneId_ = nullptr;
    // List of cluster subnets
    std::shared_ptr<string> vpdSubnetsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
