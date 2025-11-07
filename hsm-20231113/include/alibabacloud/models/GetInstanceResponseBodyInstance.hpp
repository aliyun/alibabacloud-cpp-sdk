// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class GetInstanceResponseBodyInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyInstance& obj) { 
      DARABONBA_PTR_TO_JSON(Certification, certification_);
      DARABONBA_PTR_TO_JSON(CertificationUrl, certificationUrl_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(IsTrial, isTrial_);
      DARABONBA_PTR_TO_JSON(Master, master_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PqcEnabled, pqcEnabled_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantIsolationType, tenantIsolationType_);
      DARABONBA_PTR_TO_JSON(TpsEnabled, tpsEnabled_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(Certification, certification_);
      DARABONBA_PTR_FROM_JSON(CertificationUrl, certificationUrl_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(IsTrial, isTrial_);
      DARABONBA_PTR_FROM_JSON(Master, master_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PqcEnabled, pqcEnabled_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantIsolationType, tenantIsolationType_);
      DARABONBA_PTR_FROM_JSON(TpsEnabled, tpsEnabled_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetInstanceResponseBodyInstance() = default ;
    GetInstanceResponseBodyInstance(const GetInstanceResponseBodyInstance &) = default ;
    GetInstanceResponseBodyInstance(GetInstanceResponseBodyInstance &&) = default ;
    GetInstanceResponseBodyInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyInstance() = default ;
    GetInstanceResponseBodyInstance& operator=(const GetInstanceResponseBodyInstance &) = default ;
    GetInstanceResponseBodyInstance& operator=(GetInstanceResponseBodyInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certification_ == nullptr
        && return this->certificationUrl_ == nullptr && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr && return this->createTime_ == nullptr && return this->deviceType_ == nullptr
        && return this->expireTime_ == nullptr && return this->instanceId_ == nullptr && return this->ip_ == nullptr && return this->isTrial_ == nullptr && return this->master_ == nullptr
        && return this->orderId_ == nullptr && return this->pqcEnabled_ == nullptr && return this->regionId_ == nullptr && return this->remark_ == nullptr && return this->status_ == nullptr
        && return this->tenantIsolationType_ == nullptr && return this->tpsEnabled_ == nullptr && return this->vSwitchId_ == nullptr && return this->vendor_ == nullptr && return this->vpcId_ == nullptr
        && return this->whitelist_ == nullptr && return this->zoneId_ == nullptr; };
    // certification Field Functions 
    bool hasCertification() const { return this->certification_ != nullptr;};
    void deleteCertification() { this->certification_ = nullptr;};
    inline string certification() const { DARABONBA_PTR_GET_DEFAULT(certification_, "") };
    inline GetInstanceResponseBodyInstance& setCertification(string certification) { DARABONBA_PTR_SET_VALUE(certification_, certification) };


    // certificationUrl Field Functions 
    bool hasCertificationUrl() const { return this->certificationUrl_ != nullptr;};
    void deleteCertificationUrl() { this->certificationUrl_ = nullptr;};
    inline string certificationUrl() const { DARABONBA_PTR_GET_DEFAULT(certificationUrl_, "") };
    inline GetInstanceResponseBodyInstance& setCertificationUrl(string certificationUrl) { DARABONBA_PTR_SET_VALUE(certificationUrl_, certificationUrl) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetInstanceResponseBodyInstance& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GetInstanceResponseBodyInstance& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetInstanceResponseBodyInstance& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline GetInstanceResponseBodyInstance& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline GetInstanceResponseBodyInstance& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceResponseBodyInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetInstanceResponseBodyInstance& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // isTrial Field Functions 
    bool hasIsTrial() const { return this->isTrial_ != nullptr;};
    void deleteIsTrial() { this->isTrial_ = nullptr;};
    inline bool isTrial() const { DARABONBA_PTR_GET_DEFAULT(isTrial_, false) };
    inline GetInstanceResponseBodyInstance& setIsTrial(bool isTrial) { DARABONBA_PTR_SET_VALUE(isTrial_, isTrial) };


    // master Field Functions 
    bool hasMaster() const { return this->master_ != nullptr;};
    void deleteMaster() { this->master_ = nullptr;};
    inline bool master() const { DARABONBA_PTR_GET_DEFAULT(master_, false) };
    inline GetInstanceResponseBodyInstance& setMaster(bool master) { DARABONBA_PTR_SET_VALUE(master_, master) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline GetInstanceResponseBodyInstance& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // pqcEnabled Field Functions 
    bool hasPqcEnabled() const { return this->pqcEnabled_ != nullptr;};
    void deletePqcEnabled() { this->pqcEnabled_ = nullptr;};
    inline int32_t pqcEnabled() const { DARABONBA_PTR_GET_DEFAULT(pqcEnabled_, 0) };
    inline GetInstanceResponseBodyInstance& setPqcEnabled(int32_t pqcEnabled) { DARABONBA_PTR_SET_VALUE(pqcEnabled_, pqcEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInstanceResponseBodyInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetInstanceResponseBodyInstance& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceResponseBodyInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantIsolationType Field Functions 
    bool hasTenantIsolationType() const { return this->tenantIsolationType_ != nullptr;};
    void deleteTenantIsolationType() { this->tenantIsolationType_ = nullptr;};
    inline string tenantIsolationType() const { DARABONBA_PTR_GET_DEFAULT(tenantIsolationType_, "") };
    inline GetInstanceResponseBodyInstance& setTenantIsolationType(string tenantIsolationType) { DARABONBA_PTR_SET_VALUE(tenantIsolationType_, tenantIsolationType) };


    // tpsEnabled Field Functions 
    bool hasTpsEnabled() const { return this->tpsEnabled_ != nullptr;};
    void deleteTpsEnabled() { this->tpsEnabled_ = nullptr;};
    inline int32_t tpsEnabled() const { DARABONBA_PTR_GET_DEFAULT(tpsEnabled_, 0) };
    inline GetInstanceResponseBodyInstance& setTpsEnabled(int32_t tpsEnabled) { DARABONBA_PTR_SET_VALUE(tpsEnabled_, tpsEnabled) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetInstanceResponseBodyInstance& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline GetInstanceResponseBodyInstance& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetInstanceResponseBodyInstance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline string whitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, "") };
    inline GetInstanceResponseBodyInstance& setWhitelist(string whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetInstanceResponseBodyInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> certification_ = nullptr;
    std::shared_ptr<string> certificationUrl_ = nullptr;
    // The ID of the cluster to which the HSM belongs.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The time when the HSM was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The type of the device.
    std::shared_ptr<string> deviceType_ = nullptr;
    // The time when the HSM expired.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The ID of the HSM.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IP address of the HSM in the VPC.
    std::shared_ptr<string> ip_ = nullptr;
    // Indicates whether the HSM is for trial use. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isTrial_ = nullptr;
    // Indicates whether the HSM is a master HSM. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> master_ = nullptr;
    // The ID of the order.
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<int32_t> pqcEnabled_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The description of the HSM.
    std::shared_ptr<string> remark_ = nullptr;
    // The status of the HSM. Valid values:
    // 
    // *   PENDING: The HSM is disabled.
    // *   ACTIVE: The HSM is enabled.
    // *   EXPIRED: The HSM expired.
    // *   INVALID: The HSM is invalid.
    // *   FAILURE: The HSM failed to be created.
    // *   RESET: The HSM is being reset.
    // *   PAUSED: The HSM is paused.
    // *   MODIFYING: The HSM is being modified.
    std::shared_ptr<string> status_ = nullptr;
    // The type of HSMs that is classified based on resource isolation. Valid values: 
    // - vsm: Virtual security modules (VSMs)
    // - hostedHsm: Dedicated HSMs.
    std::shared_ptr<string> tenantIsolationType_ = nullptr;
    std::shared_ptr<int32_t> tpsEnabled_ = nullptr;
    // The ID of the vSwitch that is configured for the HSM.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The information about the vendor.
    std::shared_ptr<string> vendor_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the HSM belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The IP addresses in the whitelist.
    std::shared_ptr<string> whitelist_ = nullptr;
    // The ID of the zone.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
