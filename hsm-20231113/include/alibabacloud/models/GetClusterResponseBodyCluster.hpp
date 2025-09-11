// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYCLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetClusterResponseBodyClusterInstances.hpp>
#include <alibabacloud/models/GetClusterResponseBodyClusterZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class GetClusterResponseBodyCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterResponseBodyCluster& obj) { 
      DARABONBA_PTR_TO_JSON(CertManaged, certManaged_);
      DARABONBA_PTR_TO_JSON(ClusterCertificate, clusterCertificate_);
      DARABONBA_PTR_TO_JSON(ClusterCsr, clusterCsr_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterOwnerCertificate, clusterOwnerCertificate_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(EntityCertExpireTime, entityCertExpireTime_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterResponseBodyCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(CertManaged, certManaged_);
      DARABONBA_PTR_FROM_JSON(ClusterCertificate, clusterCertificate_);
      DARABONBA_PTR_FROM_JSON(ClusterCsr, clusterCsr_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterOwnerCertificate, clusterOwnerCertificate_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(EntityCertExpireTime, entityCertExpireTime_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    GetClusterResponseBodyCluster() = default ;
    GetClusterResponseBodyCluster(const GetClusterResponseBodyCluster &) = default ;
    GetClusterResponseBodyCluster(GetClusterResponseBodyCluster &&) = default ;
    GetClusterResponseBodyCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterResponseBodyCluster() = default ;
    GetClusterResponseBodyCluster& operator=(const GetClusterResponseBodyCluster &) = default ;
    GetClusterResponseBodyCluster& operator=(GetClusterResponseBodyCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certManaged_ != nullptr
        && this->clusterCertificate_ != nullptr && this->clusterCsr_ != nullptr && this->clusterId_ != nullptr && this->clusterMode_ != nullptr && this->clusterName_ != nullptr
        && this->clusterOwnerCertificate_ != nullptr && this->createTime_ != nullptr && this->deviceType_ != nullptr && this->entityCertExpireTime_ != nullptr && this->instances_ != nullptr
        && this->regionId_ != nullptr && this->size_ != nullptr && this->status_ != nullptr && this->vpcId_ != nullptr && this->whitelist_ != nullptr
        && this->zones_ != nullptr; };
    // certManaged Field Functions 
    bool hasCertManaged() const { return this->certManaged_ != nullptr;};
    void deleteCertManaged() { this->certManaged_ = nullptr;};
    inline bool certManaged() const { DARABONBA_PTR_GET_DEFAULT(certManaged_, false) };
    inline GetClusterResponseBodyCluster& setCertManaged(bool certManaged) { DARABONBA_PTR_SET_VALUE(certManaged_, certManaged) };


    // clusterCertificate Field Functions 
    bool hasClusterCertificate() const { return this->clusterCertificate_ != nullptr;};
    void deleteClusterCertificate() { this->clusterCertificate_ = nullptr;};
    inline string clusterCertificate() const { DARABONBA_PTR_GET_DEFAULT(clusterCertificate_, "") };
    inline GetClusterResponseBodyCluster& setClusterCertificate(string clusterCertificate) { DARABONBA_PTR_SET_VALUE(clusterCertificate_, clusterCertificate) };


    // clusterCsr Field Functions 
    bool hasClusterCsr() const { return this->clusterCsr_ != nullptr;};
    void deleteClusterCsr() { this->clusterCsr_ = nullptr;};
    inline string clusterCsr() const { DARABONBA_PTR_GET_DEFAULT(clusterCsr_, "") };
    inline GetClusterResponseBodyCluster& setClusterCsr(string clusterCsr) { DARABONBA_PTR_SET_VALUE(clusterCsr_, clusterCsr) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetClusterResponseBodyCluster& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterMode Field Functions 
    bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
    void deleteClusterMode() { this->clusterMode_ = nullptr;};
    inline int32_t clusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, 0) };
    inline GetClusterResponseBodyCluster& setClusterMode(int32_t clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GetClusterResponseBodyCluster& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterOwnerCertificate Field Functions 
    bool hasClusterOwnerCertificate() const { return this->clusterOwnerCertificate_ != nullptr;};
    void deleteClusterOwnerCertificate() { this->clusterOwnerCertificate_ = nullptr;};
    inline string clusterOwnerCertificate() const { DARABONBA_PTR_GET_DEFAULT(clusterOwnerCertificate_, "") };
    inline GetClusterResponseBodyCluster& setClusterOwnerCertificate(string clusterOwnerCertificate) { DARABONBA_PTR_SET_VALUE(clusterOwnerCertificate_, clusterOwnerCertificate) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetClusterResponseBodyCluster& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline GetClusterResponseBodyCluster& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // entityCertExpireTime Field Functions 
    bool hasEntityCertExpireTime() const { return this->entityCertExpireTime_ != nullptr;};
    void deleteEntityCertExpireTime() { this->entityCertExpireTime_ = nullptr;};
    inline string entityCertExpireTime() const { DARABONBA_PTR_GET_DEFAULT(entityCertExpireTime_, "") };
    inline GetClusterResponseBodyCluster& setEntityCertExpireTime(string entityCertExpireTime) { DARABONBA_PTR_SET_VALUE(entityCertExpireTime_, entityCertExpireTime) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<Models::GetClusterResponseBodyClusterInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Models::GetClusterResponseBodyClusterInstances>) };
    inline vector<Models::GetClusterResponseBodyClusterInstances> instances() { DARABONBA_PTR_GET(instances_, vector<Models::GetClusterResponseBodyClusterInstances>) };
    inline GetClusterResponseBodyCluster& setInstances(const vector<Models::GetClusterResponseBodyClusterInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline GetClusterResponseBodyCluster& setInstances(vector<Models::GetClusterResponseBodyClusterInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetClusterResponseBodyCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetClusterResponseBodyCluster& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetClusterResponseBodyCluster& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetClusterResponseBodyCluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline string whitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, "") };
    inline GetClusterResponseBodyCluster& setWhitelist(string whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<Models::GetClusterResponseBodyClusterZones> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<Models::GetClusterResponseBodyClusterZones>) };
    inline vector<Models::GetClusterResponseBodyClusterZones> zones() { DARABONBA_PTR_GET(zones_, vector<Models::GetClusterResponseBodyClusterZones>) };
    inline GetClusterResponseBodyCluster& setZones(const vector<Models::GetClusterResponseBodyClusterZones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline GetClusterResponseBodyCluster& setZones(vector<Models::GetClusterResponseBodyClusterZones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    std::shared_ptr<bool> certManaged_ = nullptr;
    // The cluster certificate.
    std::shared_ptr<string> clusterCertificate_ = nullptr;
    // The certificate signing request (CSR) file of the cluster.
    std::shared_ptr<string> clusterCsr_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The cluster mode.
    // 
    // 2: automatically synchronizes the cluster.
    std::shared_ptr<int32_t> clusterMode_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The self-signed certificate of the cluster.
    std::shared_ptr<string> clusterOwnerCertificate_ = nullptr;
    // The time when the cluster was created. Unit: milliseconds. The value is a UNIX timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The type of the device.
    std::shared_ptr<string> deviceType_ = nullptr;
    std::shared_ptr<string> entityCertExpireTime_ = nullptr;
    // The HSMs in the cluster.
    std::shared_ptr<vector<Models::GetClusterResponseBodyClusterInstances>> instances_ = nullptr;
    // The ID of the region in which the cluster resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of hardware security modules (HSMs) in the cluster.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   NEW: The cluster is not initialized.
    // *   INITIALIZED: The cluster is initialized.
    // *   DELETED: The cluster is deleted.
    // *   SYNCHRONIZING: The cluster is being synchronized.
    // *   TO_DELETE: The cluster is pending deletion.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the cluster belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The IP address whitelist of the cluster.
    std::shared_ptr<string> whitelist_ = nullptr;
    // The information about the zones in which the cluster is deployed.
    std::shared_ptr<vector<Models::GetClusterResponseBodyClusterZones>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
