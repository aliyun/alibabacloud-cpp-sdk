// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHCLUSTERSRESPONSEBODYCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHCLUSTERSRESPONSEBODYCLUSTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshClustersResponseBodyClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshClustersResponseBodyClusters& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterDomain, clusterDomain_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ForbiddenFlag, forbiddenFlag_);
      DARABONBA_PTR_TO_JSON(ForbiddenInfo, forbiddenInfo_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(SgId, sgId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshClustersResponseBodyClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterDomain, clusterDomain_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ForbiddenFlag, forbiddenFlag_);
      DARABONBA_PTR_FROM_JSON(ForbiddenInfo, forbiddenInfo_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(SgId, sgId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeServiceMeshClustersResponseBodyClusters() = default ;
    DescribeServiceMeshClustersResponseBodyClusters(const DescribeServiceMeshClustersResponseBodyClusters &) = default ;
    DescribeServiceMeshClustersResponseBodyClusters(DescribeServiceMeshClustersResponseBodyClusters &&) = default ;
    DescribeServiceMeshClustersResponseBodyClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshClustersResponseBodyClusters() = default ;
    DescribeServiceMeshClustersResponseBodyClusters& operator=(const DescribeServiceMeshClustersResponseBodyClusters &) = default ;
    DescribeServiceMeshClustersResponseBodyClusters& operator=(DescribeServiceMeshClustersResponseBodyClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterDomain_ == nullptr
        && return this->clusterId_ == nullptr && return this->clusterType_ == nullptr && return this->creationTime_ == nullptr && return this->errorMessage_ == nullptr && return this->forbiddenFlag_ == nullptr
        && return this->forbiddenInfo_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr && return this->serviceMeshId_ == nullptr && return this->sgId_ == nullptr
        && return this->state_ == nullptr && return this->updateTime_ == nullptr && return this->version_ == nullptr && return this->vpcId_ == nullptr; };
    // clusterDomain Field Functions 
    bool hasClusterDomain() const { return this->clusterDomain_ != nullptr;};
    void deleteClusterDomain() { this->clusterDomain_ = nullptr;};
    inline string clusterDomain() const { DARABONBA_PTR_GET_DEFAULT(clusterDomain_, "") };
    inline DescribeServiceMeshClustersResponseBodyClusters& setClusterDomain(string clusterDomain) { DARABONBA_PTR_SET_VALUE(clusterDomain_, clusterDomain) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeServiceMeshClustersResponseBodyClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeServiceMeshClustersResponseBodyClusters& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeServiceMeshClustersResponseBodyClusters& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeServiceMeshClustersResponseBodyClusters& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // forbiddenFlag Field Functions 
    bool hasForbiddenFlag() const { return this->forbiddenFlag_ != nullptr;};
    void deleteForbiddenFlag() { this->forbiddenFlag_ = nullptr;};
    inline int64_t forbiddenFlag() const { DARABONBA_PTR_GET_DEFAULT(forbiddenFlag_, 0L) };
    inline DescribeServiceMeshClustersResponseBodyClusters& setForbiddenFlag(int64_t forbiddenFlag) { DARABONBA_PTR_SET_VALUE(forbiddenFlag_, forbiddenFlag) };


    // forbiddenInfo Field Functions 
    bool hasForbiddenInfo() const { return this->forbiddenInfo_ != nullptr;};
    void deleteForbiddenInfo() { this->forbiddenInfo_ = nullptr;};
    inline string forbiddenInfo() const { DARABONBA_PTR_GET_DEFAULT(forbiddenInfo_, "") };
    inline DescribeServiceMeshClustersResponseBodyClusters& setForbiddenInfo(string forbiddenInfo) { DARABONBA_PTR_SET_VALUE(forbiddenInfo_, forbiddenInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeServiceMeshClustersResponseBodyClusters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeServiceMeshClustersResponseBodyClusters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DescribeServiceMeshClustersResponseBodyClusters& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // sgId Field Functions 
    bool hasSgId() const { return this->sgId_ != nullptr;};
    void deleteSgId() { this->sgId_ = nullptr;};
    inline string sgId() const { DARABONBA_PTR_GET_DEFAULT(sgId_, "") };
    inline DescribeServiceMeshClustersResponseBodyClusters& setSgId(string sgId) { DARABONBA_PTR_SET_VALUE(sgId_, sgId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeServiceMeshClustersResponseBodyClusters& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeServiceMeshClustersResponseBodyClusters& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeServiceMeshClustersResponseBodyClusters& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeServiceMeshClustersResponseBodyClusters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The domain name of the cluster.
    std::shared_ptr<string> clusterDomain_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The cluster type.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The time when the cluster was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The error message about the cluster.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // Indicates that the cluster is available or the reason why the cluster cannot be added to the ASM instance. Valid values:
    // 
    // *   `0`: The cluster can be added to the ASM instance.
    // *   `1`: The cluster cannot be added to the ASM instance because you do not have administrator permissions on the cluster.
    // *   `2`: The cluster cannot be added to the ASM instance because the cluster and the ASM instance reside in different VPCs between which no private connections are built.
    // *   `3`: The CIDR block of the cluster conflicts with that of the ASM instance.
    // *   `4`: The cluster has a namespace that is named istio-system.
    std::shared_ptr<int64_t> forbiddenFlag_ = nullptr;
    // The reason why the cluster on the data plane cannot be added to the ASM instance. The value is a JSON string in the following format:
    // 
    //     [
    //       {
    //         "cluster": "cdd55bd6e054b4c6ca18ec02614******",
    //         "object": "Pod",
    //         "cidr": "172.16.0.0/24"
    //       },
    //       {
    //         "cluster": "cfa37fdf7cb1641e1976f8293ac******",
    //         "object": "Pod",
    //         "cidr": "172.16.0.0/24"
    //       }
    //     ]
    // 
    // In the preceding example, the CIDR block `172.16.0.0/24` of the pod in the `cdd55bd6e054b4c6ca18ec02614******` cluster conflicts with the CIDR block `172.16.0.0/24` of the pod in the `cfa37fdf7cb1641e1976f8293ac******` cluster.
    // 
    // Valid values of the `object` parameter:
    // 
    // *   `Pod`
    // *   `Service`
    // *   `VSwitch`
    // *   `VPC`
    // *   `VPC CIDR`
    std::shared_ptr<string> forbiddenInfo_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region in which the cluster resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ASM instance ID.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> sgId_ = nullptr;
    // The state of the cluster. Valid values:
    // 
    // *   `running`: The cluster is running.
    // *   `starting`: The cluster is starting.
    // *   `stopping`: The cluster is being stopped.
    // *   `stopped`: The cluster is stopped.
    // *   `failed`: The cluster fails to be run.
    std::shared_ptr<string> state_ = nullptr;
    // The time when the cluster was last modified.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The version number of the cluster.
    std::shared_ptr<string> version_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
