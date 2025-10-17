// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterResponseBodyComponents.hpp>
#include <alibabacloud/models/DescribeClusterResponseBodyNetworks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(ComputingIpVersion, computingIpVersion_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_TO_JSON(Networks, networks_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(NodeGroupCount, nodeGroupCount_);
      DARABONBA_PTR_TO_JSON(OpenEniJumboFrame, openEniJumboFrame_);
      DARABONBA_PTR_TO_JSON(OperatingState, operatingState_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(ComputingIpVersion, computingIpVersion_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_FROM_JSON(Networks, networks_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeGroupCount, nodeGroupCount_);
      DARABONBA_PTR_FROM_JSON(OpenEniJumboFrame, openEniJumboFrame_);
      DARABONBA_PTR_FROM_JSON(OperatingState, operatingState_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeClusterResponseBody() = default ;
    DescribeClusterResponseBody(const DescribeClusterResponseBody &) = default ;
    DescribeClusterResponseBody(DescribeClusterResponseBody &&) = default ;
    DescribeClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResponseBody() = default ;
    DescribeClusterResponseBody& operator=(const DescribeClusterResponseBody &) = default ;
    DescribeClusterResponseBody& operator=(DescribeClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterDescription_ == nullptr
        && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr && return this->clusterType_ == nullptr && return this->components_ == nullptr && return this->computingIpVersion_ == nullptr
        && return this->createTime_ == nullptr && return this->hpnZone_ == nullptr && return this->networks_ == nullptr && return this->nodeCount_ == nullptr && return this->nodeGroupCount_ == nullptr
        && return this->openEniJumboFrame_ == nullptr && return this->operatingState_ == nullptr && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->securityGroupId_ == nullptr
        && return this->taskId_ == nullptr && return this->updateTime_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // clusterDescription Field Functions 
    bool hasClusterDescription() const { return this->clusterDescription_ != nullptr;};
    void deleteClusterDescription() { this->clusterDescription_ = nullptr;};
    inline string clusterDescription() const { DARABONBA_PTR_GET_DEFAULT(clusterDescription_, "") };
    inline DescribeClusterResponseBody& setClusterDescription(string clusterDescription) { DARABONBA_PTR_SET_VALUE(clusterDescription_, clusterDescription) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClusterResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeClusterResponseBody& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeClusterResponseBody& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<DescribeClusterResponseBodyComponents> & components() const { DARABONBA_PTR_GET_CONST(components_, vector<DescribeClusterResponseBodyComponents>) };
    inline vector<DescribeClusterResponseBodyComponents> components() { DARABONBA_PTR_GET(components_, vector<DescribeClusterResponseBodyComponents>) };
    inline DescribeClusterResponseBody& setComponents(const vector<DescribeClusterResponseBodyComponents> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline DescribeClusterResponseBody& setComponents(vector<DescribeClusterResponseBodyComponents> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // computingIpVersion Field Functions 
    bool hasComputingIpVersion() const { return this->computingIpVersion_ != nullptr;};
    void deleteComputingIpVersion() { this->computingIpVersion_ = nullptr;};
    inline string computingIpVersion() const { DARABONBA_PTR_GET_DEFAULT(computingIpVersion_, "") };
    inline DescribeClusterResponseBody& setComputingIpVersion(string computingIpVersion) { DARABONBA_PTR_SET_VALUE(computingIpVersion_, computingIpVersion) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeClusterResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // hpnZone Field Functions 
    bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
    void deleteHpnZone() { this->hpnZone_ = nullptr;};
    inline string hpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
    inline DescribeClusterResponseBody& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


    // networks Field Functions 
    bool hasNetworks() const { return this->networks_ != nullptr;};
    void deleteNetworks() { this->networks_ = nullptr;};
    inline const DescribeClusterResponseBodyNetworks & networks() const { DARABONBA_PTR_GET_CONST(networks_, DescribeClusterResponseBodyNetworks) };
    inline DescribeClusterResponseBodyNetworks networks() { DARABONBA_PTR_GET(networks_, DescribeClusterResponseBodyNetworks) };
    inline DescribeClusterResponseBody& setNetworks(const DescribeClusterResponseBodyNetworks & networks) { DARABONBA_PTR_SET_VALUE(networks_, networks) };
    inline DescribeClusterResponseBody& setNetworks(DescribeClusterResponseBodyNetworks && networks) { DARABONBA_PTR_SET_RVALUE(networks_, networks) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int64_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0L) };
    inline DescribeClusterResponseBody& setNodeCount(int64_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeGroupCount Field Functions 
    bool hasNodeGroupCount() const { return this->nodeGroupCount_ != nullptr;};
    void deleteNodeGroupCount() { this->nodeGroupCount_ = nullptr;};
    inline int64_t nodeGroupCount() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupCount_, 0L) };
    inline DescribeClusterResponseBody& setNodeGroupCount(int64_t nodeGroupCount) { DARABONBA_PTR_SET_VALUE(nodeGroupCount_, nodeGroupCount) };


    // openEniJumboFrame Field Functions 
    bool hasOpenEniJumboFrame() const { return this->openEniJumboFrame_ != nullptr;};
    void deleteOpenEniJumboFrame() { this->openEniJumboFrame_ = nullptr;};
    inline string openEniJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(openEniJumboFrame_, "") };
    inline DescribeClusterResponseBody& setOpenEniJumboFrame(string openEniJumboFrame) { DARABONBA_PTR_SET_VALUE(openEniJumboFrame_, openEniJumboFrame) };


    // operatingState Field Functions 
    bool hasOperatingState() const { return this->operatingState_ != nullptr;};
    void deleteOperatingState() { this->operatingState_ = nullptr;};
    inline string operatingState() const { DARABONBA_PTR_GET_DEFAULT(operatingState_, "") };
    inline DescribeClusterResponseBody& setOperatingState(string operatingState) { DARABONBA_PTR_SET_VALUE(operatingState_, operatingState) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeClusterResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeClusterResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeClusterResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeClusterResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeClusterResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeClusterResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The cluster description.
    std::shared_ptr<string> clusterDescription_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The cluster type.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The component information.
    std::shared_ptr<vector<DescribeClusterResponseBodyComponents>> components_ = nullptr;
    // The IP type of the computing network.
    std::shared_ptr<string> computingIpVersion_ = nullptr;
    // The creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // The cluster number.
    std::shared_ptr<string> hpnZone_ = nullptr;
    // The network information.
    std::shared_ptr<DescribeClusterResponseBodyNetworks> networks_ = nullptr;
    // The number of nodes.
    std::shared_ptr<int64_t> nodeCount_ = nullptr;
    // The number of node groups.
    std::shared_ptr<int64_t> nodeGroupCount_ = nullptr;
    // The status of Jumbo Frames for the elastic network interface (ENI).
    std::shared_ptr<string> openEniJumboFrame_ = nullptr;
    // The cluster status.
    std::shared_ptr<string> operatingState_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The job ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The update time.
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
