// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExtendClusterRequestIpAllocationPolicy.hpp>
#include <alibabacloud/models/ExtendClusterRequestNodeGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ExtendClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtendClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_TO_JSON(IpAllocationPolicy, ipAllocationPolicy_);
      DARABONBA_PTR_TO_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_TO_JSON(VSwitchZoneId, vSwitchZoneId_);
      DARABONBA_PTR_TO_JSON(VpdSubnets, vpdSubnets_);
    };
    friend void from_json(const Darabonba::Json& j, ExtendClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_FROM_JSON(IpAllocationPolicy, ipAllocationPolicy_);
      DARABONBA_PTR_FROM_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_FROM_JSON(VSwitchZoneId, vSwitchZoneId_);
      DARABONBA_PTR_FROM_JSON(VpdSubnets, vpdSubnets_);
    };
    ExtendClusterRequest() = default ;
    ExtendClusterRequest(const ExtendClusterRequest &) = default ;
    ExtendClusterRequest(ExtendClusterRequest &&) = default ;
    ExtendClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtendClusterRequest() = default ;
    ExtendClusterRequest& operator=(const ExtendClusterRequest &) = default ;
    ExtendClusterRequest& operator=(ExtendClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->ignoreFailedNodeTasks_ == nullptr && return this->ipAllocationPolicy_ == nullptr && return this->nodeGroups_ == nullptr && return this->vSwitchZoneId_ == nullptr && return this->vpdSubnets_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ExtendClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // ignoreFailedNodeTasks Field Functions 
    bool hasIgnoreFailedNodeTasks() const { return this->ignoreFailedNodeTasks_ != nullptr;};
    void deleteIgnoreFailedNodeTasks() { this->ignoreFailedNodeTasks_ = nullptr;};
    inline bool ignoreFailedNodeTasks() const { DARABONBA_PTR_GET_DEFAULT(ignoreFailedNodeTasks_, false) };
    inline ExtendClusterRequest& setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) { DARABONBA_PTR_SET_VALUE(ignoreFailedNodeTasks_, ignoreFailedNodeTasks) };


    // ipAllocationPolicy Field Functions 
    bool hasIpAllocationPolicy() const { return this->ipAllocationPolicy_ != nullptr;};
    void deleteIpAllocationPolicy() { this->ipAllocationPolicy_ = nullptr;};
    inline const vector<ExtendClusterRequestIpAllocationPolicy> & ipAllocationPolicy() const { DARABONBA_PTR_GET_CONST(ipAllocationPolicy_, vector<ExtendClusterRequestIpAllocationPolicy>) };
    inline vector<ExtendClusterRequestIpAllocationPolicy> ipAllocationPolicy() { DARABONBA_PTR_GET(ipAllocationPolicy_, vector<ExtendClusterRequestIpAllocationPolicy>) };
    inline ExtendClusterRequest& setIpAllocationPolicy(const vector<ExtendClusterRequestIpAllocationPolicy> & ipAllocationPolicy) { DARABONBA_PTR_SET_VALUE(ipAllocationPolicy_, ipAllocationPolicy) };
    inline ExtendClusterRequest& setIpAllocationPolicy(vector<ExtendClusterRequestIpAllocationPolicy> && ipAllocationPolicy) { DARABONBA_PTR_SET_RVALUE(ipAllocationPolicy_, ipAllocationPolicy) };


    // nodeGroups Field Functions 
    bool hasNodeGroups() const { return this->nodeGroups_ != nullptr;};
    void deleteNodeGroups() { this->nodeGroups_ = nullptr;};
    inline const vector<ExtendClusterRequestNodeGroups> & nodeGroups() const { DARABONBA_PTR_GET_CONST(nodeGroups_, vector<ExtendClusterRequestNodeGroups>) };
    inline vector<ExtendClusterRequestNodeGroups> nodeGroups() { DARABONBA_PTR_GET(nodeGroups_, vector<ExtendClusterRequestNodeGroups>) };
    inline ExtendClusterRequest& setNodeGroups(const vector<ExtendClusterRequestNodeGroups> & nodeGroups) { DARABONBA_PTR_SET_VALUE(nodeGroups_, nodeGroups) };
    inline ExtendClusterRequest& setNodeGroups(vector<ExtendClusterRequestNodeGroups> && nodeGroups) { DARABONBA_PTR_SET_RVALUE(nodeGroups_, nodeGroups) };


    // vSwitchZoneId Field Functions 
    bool hasVSwitchZoneId() const { return this->vSwitchZoneId_ != nullptr;};
    void deleteVSwitchZoneId() { this->vSwitchZoneId_ = nullptr;};
    inline string vSwitchZoneId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchZoneId_, "") };
    inline ExtendClusterRequest& setVSwitchZoneId(string vSwitchZoneId) { DARABONBA_PTR_SET_VALUE(vSwitchZoneId_, vSwitchZoneId) };


    // vpdSubnets Field Functions 
    bool hasVpdSubnets() const { return this->vpdSubnets_ != nullptr;};
    void deleteVpdSubnets() { this->vpdSubnets_ = nullptr;};
    inline const vector<string> & vpdSubnets() const { DARABONBA_PTR_GET_CONST(vpdSubnets_, vector<string>) };
    inline vector<string> vpdSubnets() { DARABONBA_PTR_GET(vpdSubnets_, vector<string>) };
    inline ExtendClusterRequest& setVpdSubnets(const vector<string> & vpdSubnets) { DARABONBA_PTR_SET_VALUE(vpdSubnets_, vpdSubnets) };
    inline ExtendClusterRequest& setVpdSubnets(vector<string> && vpdSubnets) { DARABONBA_PTR_SET_RVALUE(vpdSubnets_, vpdSubnets) };


  protected:
    // Cluster ID
    std::shared_ptr<string> clusterId_ = nullptr;
    // Whether to allow skipping failed node tasks, default value is False
    std::shared_ptr<bool> ignoreFailedNodeTasks_ = nullptr;
    // IP allocation combination policy: Each policy can only choose one type, and multiple policies can be combined
    std::shared_ptr<vector<ExtendClusterRequestIpAllocationPolicy>> ipAllocationPolicy_ = nullptr;
    // Node Groups
    std::shared_ptr<vector<ExtendClusterRequestNodeGroups>> nodeGroups_ = nullptr;
    // VSwitch availability zone ID
    std::shared_ptr<string> vSwitchZoneId_ = nullptr;
    // List of cluster subnets
    std::shared_ptr<vector<string>> vpdSubnets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
