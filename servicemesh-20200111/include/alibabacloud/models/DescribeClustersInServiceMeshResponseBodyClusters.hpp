// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSINSERVICEMESHRESPONSEBODYCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSINSERVICEMESHRESPONSEBODYCLUSTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards.hpp>
#include <alibabacloud/models/DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeClustersInServiceMeshResponseBodyClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersInServiceMeshResponseBodyClusters& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLogDashboards, accessLogDashboards_);
      DARABONBA_PTR_TO_JSON(ClusterDomain, clusterDomain_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(GuestClusterConfig, guestClusterConfig_);
      DARABONBA_PTR_TO_JSON(LogtailInstalledState, logtailInstalledState_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SgId, sgId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersInServiceMeshResponseBodyClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLogDashboards, accessLogDashboards_);
      DARABONBA_PTR_FROM_JSON(ClusterDomain, clusterDomain_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(GuestClusterConfig, guestClusterConfig_);
      DARABONBA_PTR_FROM_JSON(LogtailInstalledState, logtailInstalledState_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SgId, sgId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeClustersInServiceMeshResponseBodyClusters() = default ;
    DescribeClustersInServiceMeshResponseBodyClusters(const DescribeClustersInServiceMeshResponseBodyClusters &) = default ;
    DescribeClustersInServiceMeshResponseBodyClusters(DescribeClustersInServiceMeshResponseBodyClusters &&) = default ;
    DescribeClustersInServiceMeshResponseBodyClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersInServiceMeshResponseBodyClusters() = default ;
    DescribeClustersInServiceMeshResponseBodyClusters& operator=(const DescribeClustersInServiceMeshResponseBodyClusters &) = default ;
    DescribeClustersInServiceMeshResponseBodyClusters& operator=(DescribeClustersInServiceMeshResponseBodyClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLogDashboards_ == nullptr
        && return this->clusterDomain_ == nullptr && return this->clusterId_ == nullptr && return this->clusterType_ == nullptr && return this->creationTime_ == nullptr && return this->errorMessage_ == nullptr
        && return this->guestClusterConfig_ == nullptr && return this->logtailInstalledState_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr && return this->sgId_ == nullptr
        && return this->state_ == nullptr && return this->updateTime_ == nullptr && return this->version_ == nullptr && return this->vpcId_ == nullptr; };
    // accessLogDashboards Field Functions 
    bool hasAccessLogDashboards() const { return this->accessLogDashboards_ != nullptr;};
    void deleteAccessLogDashboards() { this->accessLogDashboards_ = nullptr;};
    inline const vector<Models::DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards> & accessLogDashboards() const { DARABONBA_PTR_GET_CONST(accessLogDashboards_, vector<Models::DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards>) };
    inline vector<Models::DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards> accessLogDashboards() { DARABONBA_PTR_GET(accessLogDashboards_, vector<Models::DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards>) };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setAccessLogDashboards(const vector<Models::DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards> & accessLogDashboards) { DARABONBA_PTR_SET_VALUE(accessLogDashboards_, accessLogDashboards) };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setAccessLogDashboards(vector<Models::DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards> && accessLogDashboards) { DARABONBA_PTR_SET_RVALUE(accessLogDashboards_, accessLogDashboards) };


    // clusterDomain Field Functions 
    bool hasClusterDomain() const { return this->clusterDomain_ != nullptr;};
    void deleteClusterDomain() { this->clusterDomain_ = nullptr;};
    inline string clusterDomain() const { DARABONBA_PTR_GET_DEFAULT(clusterDomain_, "") };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setClusterDomain(string clusterDomain) { DARABONBA_PTR_SET_VALUE(clusterDomain_, clusterDomain) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // guestClusterConfig Field Functions 
    bool hasGuestClusterConfig() const { return this->guestClusterConfig_ != nullptr;};
    void deleteGuestClusterConfig() { this->guestClusterConfig_ = nullptr;};
    inline const Models::DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig & guestClusterConfig() const { DARABONBA_PTR_GET_CONST(guestClusterConfig_, Models::DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig) };
    inline Models::DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig guestClusterConfig() { DARABONBA_PTR_GET(guestClusterConfig_, Models::DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig) };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setGuestClusterConfig(const Models::DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig & guestClusterConfig) { DARABONBA_PTR_SET_VALUE(guestClusterConfig_, guestClusterConfig) };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setGuestClusterConfig(Models::DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig && guestClusterConfig) { DARABONBA_PTR_SET_RVALUE(guestClusterConfig_, guestClusterConfig) };


    // logtailInstalledState Field Functions 
    bool hasLogtailInstalledState() const { return this->logtailInstalledState_ != nullptr;};
    void deleteLogtailInstalledState() { this->logtailInstalledState_ = nullptr;};
    inline string logtailInstalledState() const { DARABONBA_PTR_GET_DEFAULT(logtailInstalledState_, "") };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setLogtailInstalledState(string logtailInstalledState) { DARABONBA_PTR_SET_VALUE(logtailInstalledState_, logtailInstalledState) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sgId Field Functions 
    bool hasSgId() const { return this->sgId_ != nullptr;};
    void deleteSgId() { this->sgId_ = nullptr;};
    inline string sgId() const { DARABONBA_PTR_GET_DEFAULT(sgId_, "") };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setSgId(string sgId) { DARABONBA_PTR_SET_VALUE(sgId_, sgId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeClustersInServiceMeshResponseBodyClusters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The configurations of access log collection.
    std::shared_ptr<vector<Models::DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards>> accessLogDashboards_ = nullptr;
    // The domain name of the cluster.
    std::shared_ptr<string> clusterDomain_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The type of the cluster.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The time when the cluster was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<Models::DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig> guestClusterConfig_ = nullptr;
    // Indicates whether the Logtail component is installed in the cluster. Valid values:
    // 
    // *   `logtail_installed`: The Logtail component is installed.
    // 
    // \\-`logtail_uninstalled`: The Logtail component is not installed.
    // 
    // *   `logtail_state_get_error`: The Logtail component failed to be installed.
    std::shared_ptr<string> logtailInstalledState_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region in which the cluster resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> sgId_ = nullptr;
    // The status of the cluster.
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
