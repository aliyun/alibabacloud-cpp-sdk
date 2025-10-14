// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMINSTANCECONFIGFULLINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMINSTANCECONFIGFULLINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmInstanceConfigFullInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmInstanceConfigFullInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddressPoolLbStrategy, addressPoolLbStrategy_);
      DARABONBA_PTR_TO_JSON(AddressPools, addressPools_);
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(AvailableStatus, availableStatus_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
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
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmInstanceConfigFullInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressPoolLbStrategy, addressPoolLbStrategy_);
      DARABONBA_PTR_FROM_JSON(AddressPools, addressPools_);
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(AvailableStatus, availableStatus_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    DescribeCloudGtmInstanceConfigFullInfoResponseBody() = default ;
    DescribeCloudGtmInstanceConfigFullInfoResponseBody(const DescribeCloudGtmInstanceConfigFullInfoResponseBody &) = default ;
    DescribeCloudGtmInstanceConfigFullInfoResponseBody(DescribeCloudGtmInstanceConfigFullInfoResponseBody &&) = default ;
    DescribeCloudGtmInstanceConfigFullInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmInstanceConfigFullInfoResponseBody() = default ;
    DescribeCloudGtmInstanceConfigFullInfoResponseBody& operator=(const DescribeCloudGtmInstanceConfigFullInfoResponseBody &) = default ;
    DescribeCloudGtmInstanceConfigFullInfoResponseBody& operator=(DescribeCloudGtmInstanceConfigFullInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressPoolLbStrategy_ == nullptr
        && return this->addressPools_ == nullptr && return this->alertConfig_ == nullptr && return this->alertGroup_ == nullptr && return this->availableStatus_ == nullptr && return this->commodityCode_ == nullptr
        && return this->configId_ == nullptr && return this->createTime_ == nullptr && return this->createTimestamp_ == nullptr && return this->enableStatus_ == nullptr && return this->healthStatus_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->remark_ == nullptr && return this->requestId_ == nullptr && return this->scheduleDomainName_ == nullptr
        && return this->scheduleHostname_ == nullptr && return this->scheduleRrType_ == nullptr && return this->scheduleZoneMode_ == nullptr && return this->scheduleZoneName_ == nullptr && return this->sequenceLbStrategyMode_ == nullptr
        && return this->ttl_ == nullptr && return this->updateTime_ == nullptr && return this->updateTimestamp_ == nullptr && return this->versionCode_ == nullptr; };
    // addressPoolLbStrategy Field Functions 
    bool hasAddressPoolLbStrategy() const { return this->addressPoolLbStrategy_ != nullptr;};
    void deleteAddressPoolLbStrategy() { this->addressPoolLbStrategy_ = nullptr;};
    inline string addressPoolLbStrategy() const { DARABONBA_PTR_GET_DEFAULT(addressPoolLbStrategy_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setAddressPoolLbStrategy(string addressPoolLbStrategy) { DARABONBA_PTR_SET_VALUE(addressPoolLbStrategy_, addressPoolLbStrategy) };


    // addressPools Field Functions 
    bool hasAddressPools() const { return this->addressPools_ != nullptr;};
    void deleteAddressPools() { this->addressPools_ = nullptr;};
    inline const DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPools & addressPools() const { DARABONBA_PTR_GET_CONST(addressPools_, DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPools) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPools addressPools() { DARABONBA_PTR_GET(addressPools_, DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPools) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setAddressPools(const DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPools & addressPools) { DARABONBA_PTR_SET_VALUE(addressPools_, addressPools) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setAddressPools(DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPools && addressPools) { DARABONBA_PTR_SET_RVALUE(addressPools_, addressPools) };


    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline string alertConfig() const { DARABONBA_PTR_GET_DEFAULT(alertConfig_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setAlertConfig(string alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline string alertGroup() const { DARABONBA_PTR_GET_DEFAULT(alertGroup_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setAlertGroup(string alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };


    // availableStatus Field Functions 
    bool hasAvailableStatus() const { return this->availableStatus_ != nullptr;};
    void deleteAvailableStatus() { this->availableStatus_ = nullptr;};
    inline string availableStatus() const { DARABONBA_PTR_GET_DEFAULT(availableStatus_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setAvailableStatus(string availableStatus) { DARABONBA_PTR_SET_VALUE(availableStatus_, availableStatus) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleDomainName Field Functions 
    bool hasScheduleDomainName() const { return this->scheduleDomainName_ != nullptr;};
    void deleteScheduleDomainName() { this->scheduleDomainName_ = nullptr;};
    inline string scheduleDomainName() const { DARABONBA_PTR_GET_DEFAULT(scheduleDomainName_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setScheduleDomainName(string scheduleDomainName) { DARABONBA_PTR_SET_VALUE(scheduleDomainName_, scheduleDomainName) };


    // scheduleHostname Field Functions 
    bool hasScheduleHostname() const { return this->scheduleHostname_ != nullptr;};
    void deleteScheduleHostname() { this->scheduleHostname_ = nullptr;};
    inline string scheduleHostname() const { DARABONBA_PTR_GET_DEFAULT(scheduleHostname_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setScheduleHostname(string scheduleHostname) { DARABONBA_PTR_SET_VALUE(scheduleHostname_, scheduleHostname) };


    // scheduleRrType Field Functions 
    bool hasScheduleRrType() const { return this->scheduleRrType_ != nullptr;};
    void deleteScheduleRrType() { this->scheduleRrType_ = nullptr;};
    inline string scheduleRrType() const { DARABONBA_PTR_GET_DEFAULT(scheduleRrType_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setScheduleRrType(string scheduleRrType) { DARABONBA_PTR_SET_VALUE(scheduleRrType_, scheduleRrType) };


    // scheduleZoneMode Field Functions 
    bool hasScheduleZoneMode() const { return this->scheduleZoneMode_ != nullptr;};
    void deleteScheduleZoneMode() { this->scheduleZoneMode_ = nullptr;};
    inline string scheduleZoneMode() const { DARABONBA_PTR_GET_DEFAULT(scheduleZoneMode_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setScheduleZoneMode(string scheduleZoneMode) { DARABONBA_PTR_SET_VALUE(scheduleZoneMode_, scheduleZoneMode) };


    // scheduleZoneName Field Functions 
    bool hasScheduleZoneName() const { return this->scheduleZoneName_ != nullptr;};
    void deleteScheduleZoneName() { this->scheduleZoneName_ = nullptr;};
    inline string scheduleZoneName() const { DARABONBA_PTR_GET_DEFAULT(scheduleZoneName_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setScheduleZoneName(string scheduleZoneName) { DARABONBA_PTR_SET_VALUE(scheduleZoneName_, scheduleZoneName) };


    // sequenceLbStrategyMode Field Functions 
    bool hasSequenceLbStrategyMode() const { return this->sequenceLbStrategyMode_ != nullptr;};
    void deleteSequenceLbStrategyMode() { this->sequenceLbStrategyMode_ = nullptr;};
    inline string sequenceLbStrategyMode() const { DARABONBA_PTR_GET_DEFAULT(sequenceLbStrategyMode_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setSequenceLbStrategyMode(string sequenceLbStrategyMode) { DARABONBA_PTR_SET_VALUE(sequenceLbStrategyMode_, sequenceLbStrategyMode) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    // The policy for load balancing between address pools. Valid values:
    // 
    // *   round_robin: All address pools are returned for DNS requests from any source. All address pools are sorted in round-robin mode each time they are returned.
    // *   sequence: The address pool with the smallest sequence number is preferentially returned for DNS requests from any source. The sequence number indicates the priority for returning the address pool. A smaller sequence number indicates a higher priority. If the address pool with the smallest sequence number is unavailable, the address pool with the second smallest sequence number is returned.
    // *   weight: You can set a different weight value for each address pool. This way, address pools are returned based on the weight values.
    // *   source_nearest: GTM returns different addresses based on the sources of DNS requests. This way, users can access nearby addresses.
    std::shared_ptr<string> addressPoolLbStrategy_ = nullptr;
    // The address pools.
    std::shared_ptr<DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPools> addressPools_ = nullptr;
    // Alert notification configuration.
    std::shared_ptr<string> alertConfig_ = nullptr;
    // Alert notification group.
    std::shared_ptr<string> alertGroup_ = nullptr;
    // The availability state of the access domain name. Valid values:
    // 
    // *   available: If the access domain name is **enabled** and the health state of the access domain name is **Normal**, the access domain name is deemed **available**.
    // *   unavailable: If the access domain name is **disabled** or the health state of the access domain name is **Abnormal**, the access domain name is deemed **unavailable**.
    std::shared_ptr<string> availableStatus_ = nullptr;
    // The commodity code. Valid values:
    // 
    // *   dns_gtm_public_cn: the commodity code on the China site (aliyun.com)
    // *   dns_gtm_public_intl: the commodity code on the international site (alibabacloud.com)
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The configuration ID of the access domain name. Two configuration IDs exist when the access domain name is bound to the same GTM instance but an A record and an AAAA record are configured for the access domain name. The configuration ID uniquely identifies a configuration.
    std::shared_ptr<string> configId_ = nullptr;
    // Instance creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // Instance creation time (timestamp).
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The enabling state of the access domain name. Valid values:
    // 
    // *   enable: The access domain name is enabled and the intelligent scheduling policy of the corresponding GTM instance takes effect.
    // *   disable: The access domain name is disabled and the intelligent scheduling policy of the corresponding GTM instance does not take effect.
    std::shared_ptr<string> enableStatus_ = nullptr;
    // The health state of the access domain name. Valid values:
    // 
    // *   ok: The health state of the access domain name is Normal and all address pools that are referenced by the access domain name are available.
    // *   ok_alert: The health state of the access domain name is Warning and some of the address pools that are referenced by the access domain name are unavailable. In this case, the available address pools are normally used for DNS resolution, but the unavailable address pools cannot be used for DNS resolution.
    // *   exceptional: The health state of the access domain name is Abnormal and all address pools that are referenced by the access domain name are unavailable. In this case, addresses in the non-empty address pool with the smallest sequence number are preferentially used for fallback resolution. This returns DNS results for clients as much as possible.
    std::shared_ptr<string> healthStatus_ = nullptr;
    // The ID of the GTM 3.0 instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Schedule instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Remarks of the configuration of domain instance.
    std::shared_ptr<string> remark_ = nullptr;
    // Unique request identification code.
    std::shared_ptr<string> requestId_ = nullptr;
    // The GTM access domain name. The value of this parameter is composed of the value of ScheduleHostname and the value of ScheduleZoneName.
    std::shared_ptr<string> scheduleDomainName_ = nullptr;
    // Host name of the domain accessed by GTM.
    std::shared_ptr<string> scheduleHostname_ = nullptr;
    // DNS record types for the ScheduleDomainName:
    // - A: IPv4 address
    // - AAAA: IPv6 address
    // - CNAME: Domain name
    std::shared_ptr<string> scheduleRrType_ = nullptr;
    // The allocation mode of the access domain name. Valid values:
    // 
    // *   custom: custom allocation. You must specify a custom hostname and associate the hostname with a zone or subzone within the account to which the GTM instance belongs to generate an access domain name.
    // *   sys_assign: The system assigns an access domain name by default. This mode is no longer supported. Do not choose this mode.
    std::shared_ptr<string> scheduleZoneMode_ = nullptr;
    // The zone (such as example.com) or subzone (such as a.example.com) associated with the GTM access domain name. In most cases, the zone or subzone is hosted in Authoritative DNS Resolution of the Alibaba Cloud DNS console within the account to which the GTM instance belongs.
    std::shared_ptr<string> scheduleZoneName_ = nullptr;
    // The mode used if the address pool with the smallest sequence number is recovered. This parameter is required when AddressPoolLbStrategy is set to sequence. Valid values:
    // 
    // *   preemptive: The address pool with the smallest sequence number is preferentially used if this address pool is recovered.
    // *   non_preemptive: The current address pool is still used even if the address pool with the smallest sequence number is recovered.
    std::shared_ptr<string> sequenceLbStrategyMode_ = nullptr;
    // Global TTL (in seconds), the TTL value for resolving the access domain to addresses in the address pool, which affects the caching time of DNS records in the ISP\\"s LocalDNS. Custom TTL values are supported.
    std::shared_ptr<int32_t> ttl_ = nullptr;
    // Last modified time.
    std::shared_ptr<string> updateTime_ = nullptr;
    // Last modified time (timestamp).
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
    // Global Traffic Management version 3.0 instances:
    // - standard: Standard Edition
    // - ultimate: Ultimate Edition
    std::shared_ptr<string> versionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
