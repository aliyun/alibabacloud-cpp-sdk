// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMINSTANCECONFIGSRESPONSEBODYINSTANCECONFIGSINSTANCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMINSTANCECONFIGSRESPONSEBODYINSTANCECONFIGSINSTANCECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AddressPoolLbStrategy, addressPoolLbStrategy_);
      DARABONBA_PTR_TO_JSON(AddressPools, addressPools_);
      DARABONBA_PTR_TO_JSON(AvailableStatus, availableStatus_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ScheduleDomainName, scheduleDomainName_);
      DARABONBA_PTR_TO_JSON(ScheduleHostname, scheduleHostname_);
      DARABONBA_PTR_TO_JSON(ScheduleRrType, scheduleRrType_);
      DARABONBA_PTR_TO_JSON(ScheduleZoneMode, scheduleZoneMode_);
      DARABONBA_PTR_TO_JSON(ScheduleZoneName, scheduleZoneName_);
      DARABONBA_PTR_TO_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressPoolLbStrategy, addressPoolLbStrategy_);
      DARABONBA_PTR_FROM_JSON(AddressPools, addressPools_);
      DARABONBA_PTR_FROM_JSON(AvailableStatus, availableStatus_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ScheduleDomainName, scheduleDomainName_);
      DARABONBA_PTR_FROM_JSON(ScheduleHostname, scheduleHostname_);
      DARABONBA_PTR_FROM_JSON(ScheduleRrType, scheduleRrType_);
      DARABONBA_PTR_FROM_JSON(ScheduleZoneMode, scheduleZoneMode_);
      DARABONBA_PTR_FROM_JSON(ScheduleZoneName, scheduleZoneName_);
      DARABONBA_PTR_FROM_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
    };
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig() = default ;
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig(const ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig &) = default ;
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig(ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig &&) = default ;
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig() = default ;
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& operator=(const ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig &) = default ;
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& operator=(ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressPoolLbStrategy_ != nullptr
        && this->addressPools_ != nullptr && this->availableStatus_ != nullptr && this->commodityCode_ != nullptr && this->configId_ != nullptr && this->createTime_ != nullptr
        && this->createTimestamp_ != nullptr && this->enableStatus_ != nullptr && this->healthStatus_ != nullptr && this->instanceId_ != nullptr && this->remark_ != nullptr
        && this->scheduleDomainName_ != nullptr && this->scheduleHostname_ != nullptr && this->scheduleRrType_ != nullptr && this->scheduleZoneMode_ != nullptr && this->scheduleZoneName_ != nullptr
        && this->sequenceLbStrategyMode_ != nullptr && this->ttl_ != nullptr && this->updateTime_ != nullptr && this->updateTimestamp_ != nullptr && this->versionCode_ != nullptr; };
    // addressPoolLbStrategy Field Functions 
    bool hasAddressPoolLbStrategy() const { return this->addressPoolLbStrategy_ != nullptr;};
    void deleteAddressPoolLbStrategy() { this->addressPoolLbStrategy_ = nullptr;};
    inline string addressPoolLbStrategy() const { DARABONBA_PTR_GET_DEFAULT(addressPoolLbStrategy_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setAddressPoolLbStrategy(string addressPoolLbStrategy) { DARABONBA_PTR_SET_VALUE(addressPoolLbStrategy_, addressPoolLbStrategy) };


    // addressPools Field Functions 
    bool hasAddressPools() const { return this->addressPools_ != nullptr;};
    void deleteAddressPools() { this->addressPools_ = nullptr;};
    inline const Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools & addressPools() const { DARABONBA_PTR_GET_CONST(addressPools_, Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools) };
    inline Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools addressPools() { DARABONBA_PTR_GET(addressPools_, Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools) };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setAddressPools(const Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools & addressPools) { DARABONBA_PTR_SET_VALUE(addressPools_, addressPools) };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setAddressPools(Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools && addressPools) { DARABONBA_PTR_SET_RVALUE(addressPools_, addressPools) };


    // availableStatus Field Functions 
    bool hasAvailableStatus() const { return this->availableStatus_ != nullptr;};
    void deleteAvailableStatus() { this->availableStatus_ = nullptr;};
    inline string availableStatus() const { DARABONBA_PTR_GET_DEFAULT(availableStatus_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setAvailableStatus(string availableStatus) { DARABONBA_PTR_SET_VALUE(availableStatus_, availableStatus) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // scheduleDomainName Field Functions 
    bool hasScheduleDomainName() const { return this->scheduleDomainName_ != nullptr;};
    void deleteScheduleDomainName() { this->scheduleDomainName_ = nullptr;};
    inline string scheduleDomainName() const { DARABONBA_PTR_GET_DEFAULT(scheduleDomainName_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setScheduleDomainName(string scheduleDomainName) { DARABONBA_PTR_SET_VALUE(scheduleDomainName_, scheduleDomainName) };


    // scheduleHostname Field Functions 
    bool hasScheduleHostname() const { return this->scheduleHostname_ != nullptr;};
    void deleteScheduleHostname() { this->scheduleHostname_ = nullptr;};
    inline string scheduleHostname() const { DARABONBA_PTR_GET_DEFAULT(scheduleHostname_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setScheduleHostname(string scheduleHostname) { DARABONBA_PTR_SET_VALUE(scheduleHostname_, scheduleHostname) };


    // scheduleRrType Field Functions 
    bool hasScheduleRrType() const { return this->scheduleRrType_ != nullptr;};
    void deleteScheduleRrType() { this->scheduleRrType_ = nullptr;};
    inline string scheduleRrType() const { DARABONBA_PTR_GET_DEFAULT(scheduleRrType_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setScheduleRrType(string scheduleRrType) { DARABONBA_PTR_SET_VALUE(scheduleRrType_, scheduleRrType) };


    // scheduleZoneMode Field Functions 
    bool hasScheduleZoneMode() const { return this->scheduleZoneMode_ != nullptr;};
    void deleteScheduleZoneMode() { this->scheduleZoneMode_ = nullptr;};
    inline string scheduleZoneMode() const { DARABONBA_PTR_GET_DEFAULT(scheduleZoneMode_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setScheduleZoneMode(string scheduleZoneMode) { DARABONBA_PTR_SET_VALUE(scheduleZoneMode_, scheduleZoneMode) };


    // scheduleZoneName Field Functions 
    bool hasScheduleZoneName() const { return this->scheduleZoneName_ != nullptr;};
    void deleteScheduleZoneName() { this->scheduleZoneName_ = nullptr;};
    inline string scheduleZoneName() const { DARABONBA_PTR_GET_DEFAULT(scheduleZoneName_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setScheduleZoneName(string scheduleZoneName) { DARABONBA_PTR_SET_VALUE(scheduleZoneName_, scheduleZoneName) };


    // sequenceLbStrategyMode Field Functions 
    bool hasSequenceLbStrategyMode() const { return this->sequenceLbStrategyMode_ != nullptr;};
    void deleteSequenceLbStrategyMode() { this->sequenceLbStrategyMode_ = nullptr;};
    inline string sequenceLbStrategyMode() const { DARABONBA_PTR_GET_DEFAULT(sequenceLbStrategyMode_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setSequenceLbStrategyMode(string sequenceLbStrategyMode) { DARABONBA_PTR_SET_VALUE(sequenceLbStrategyMode_, sequenceLbStrategyMode) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    // The policy for load balancing between address pools. Valid values:
    // 
    // *   round_robin: All address pools are returned for DNS requests from any source. All address pools are sorted in round-robin mode each time they are returned.
    // *   sequence: The address pool with the smallest sequence number is preferentially returned for DNS requests from any source. The sequence number indicates the priority for returning the address pool. A smaller sequence number indicates a higher priority. If the address pool with the smallest sequence number is unavailable, the address pool with the second smallest sequence number is returned.
    // *   weight: You can set a different weight value for each address pool. This way, address pools are returned based on the weight values.
    // *   source_nearest: GTM returns different address pools based on the sources of DNS requests. This way, users can access nearby addresses.
    std::shared_ptr<string> addressPoolLbStrategy_ = nullptr;
    // The address pools.
    std::shared_ptr<Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools> addressPools_ = nullptr;
    // The availability state of the access domain name. Valid values:
    // 
    // *   available: If the access domain name is **enabled** and the health state of the access domain name is **Normal**, the access domain name is deemed **Available**.
    // *   unavailable: If the access domain name is **disabled** or the health state of the access domain name is **Abnormal**, the access domain name is deemed **Unavailable**.
    std::shared_ptr<string> availableStatus_ = nullptr;
    // The commodity code. Valid values:
    // 
    // *   dns_gtm_public_cn: the commodity code on the China site (aliyun.com)
    // *   dns_gtm_public_intl: the commodity code on the international site (alibabacloud.com)
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The configuration ID of the access domain name. Two configuration IDs exist when the access domain name is bound to the same GTM instance but an A record and an AAAA record are configured for the access domain name. The configuration ID uniquely identifies a configuration.
    std::shared_ptr<string> configId_ = nullptr;
    // Instance configuration creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // Instance creation time (timestamp).
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The enabling state of the access domain name. Valid values:
    // 
    // *   enable: The access domain name is enabled and the intelligent scheduling policy of the GTM instance takes effect.
    // *   disable: The access domain name is disabled and the intelligent scheduling policy of the GTM instance does not take effect.
    std::shared_ptr<string> enableStatus_ = nullptr;
    // The health state of the access domain name. Valid values:
    // 
    // *   ok: The health state of the access domain name is Normal and all address pools that are referenced by the access domain name are available.
    // *   ok_alert: The health state of the access domain name is Warning and some of the address pools that are referenced by the access domain name are unavailable. In this case, available address pools are normally used for DNS resolution, but unavailable address pools cannot be used for DNS resolution.
    // *   exceptional: The health state of the access domain name is Abnormal and all address pools that are referenced by the access domain name are unavailable. In this case, addresses in the non-empty address pool with the smallest sequence number are preferentially used for fallback resolution. This returns DNS results for clients as much as possible.
    std::shared_ptr<string> healthStatus_ = nullptr;
    // The ID of the GTM 3.0 instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Remarks on the configuration of domain instance.
    std::shared_ptr<string> remark_ = nullptr;
    // The GTM access domain name. The value of this parameter is composed of the value of ScheduleHostname and the value of ScheduleZoneName.
    std::shared_ptr<string> scheduleDomainName_ = nullptr;
    // Host record of the domain accessed by GTM.
    std::shared_ptr<string> scheduleHostname_ = nullptr;
    // DNS record types for the scheduling domain:
    // - A: IPv4 address
    // - AAAA: IPv6 address
    // - CNAME: Domain name
    std::shared_ptr<string> scheduleRrType_ = nullptr;
    // The allocation mode of the access domain name. Valid values:
    // 
    // *   custom: custom allocation. You must specify a custom hostname and associate the hostname with a zone within the account to which the GTM instance belongs to generate an access domain name.
    // *   sys_assign: system allocation. This mode is not supported. Do not set ScheduleZoneMode to sys_assign.
    std::shared_ptr<string> scheduleZoneMode_ = nullptr;
    // The zone (such as example.com) or subzone (such as a.example.com) of the GTM access domain name. In most cases, the zone or subzone is hosted in Authoritative DNS Resolution of the Alibaba Cloud DNS console within the account to which the GTM instance belongs.
    std::shared_ptr<string> scheduleZoneName_ = nullptr;
    // The mode used if the address pool with the smallest sequence number is recovered. This parameter is required when AddressPoolLbStrategy is set to sequence. Valid values:
    // 
    // *   preemptive: The address pool with the smallest sequence number is preferentially used if this address pool is recovered.
    // *   non_preemptive: The current address pool is still used even if the address pool with the smallest sequence number is recovered.
    std::shared_ptr<string> sequenceLbStrategyMode_ = nullptr;
    // Global TTL (in seconds), the TTL value for domain resolution to addresses in the address pool, affecting the caching time of DNS records in the ISP\\"s LocalDNS. Supports custom TTL values.
    std::shared_ptr<int32_t> ttl_ = nullptr;
    // The last modified time of the instance configuration.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The last modification time of the instance configuration (timestamp).
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
    // The edition of the GTM 3.0 instance. Valid values:
    // 
    // *   standard: Standard Edition
    // *   ultimate: Ultimate Edition
    std::shared_ptr<string> versionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
