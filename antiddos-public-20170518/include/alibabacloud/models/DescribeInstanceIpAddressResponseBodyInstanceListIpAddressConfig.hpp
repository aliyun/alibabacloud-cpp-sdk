// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIPADDRESSRESPONSEBODYINSTANCELISTIPADDRESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIPADDRESSRESPONSEBODYINSTANCELISTIPADDRESSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BlackholeThreshold, blackholeThreshold_);
      DARABONBA_PTR_TO_JSON(DefenseBpsThreshold, defenseBpsThreshold_);
      DARABONBA_PTR_TO_JSON(DefensePpsThreshold, defensePpsThreshold_);
      DARABONBA_PTR_TO_JSON(ElasticThreshold, elasticThreshold_);
      DARABONBA_PTR_TO_JSON(InstanceIp, instanceIp_);
      DARABONBA_PTR_TO_JSON(IpStatus, ipStatus_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(IsBgppack, isBgppack_);
      DARABONBA_PTR_TO_JSON(IsFullProtection, isFullProtection_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackholeThreshold, blackholeThreshold_);
      DARABONBA_PTR_FROM_JSON(DefenseBpsThreshold, defenseBpsThreshold_);
      DARABONBA_PTR_FROM_JSON(DefensePpsThreshold, defensePpsThreshold_);
      DARABONBA_PTR_FROM_JSON(ElasticThreshold, elasticThreshold_);
      DARABONBA_PTR_FROM_JSON(InstanceIp, instanceIp_);
      DARABONBA_PTR_FROM_JSON(IpStatus, ipStatus_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(IsBgppack, isBgppack_);
      DARABONBA_PTR_FROM_JSON(IsFullProtection, isFullProtection_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig() = default ;
    DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig(const DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig &) = default ;
    DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig(DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig &&) = default ;
    DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig() = default ;
    DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig& operator=(const DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig &) = default ;
    DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig& operator=(DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blackholeThreshold_ != nullptr
        && this->defenseBpsThreshold_ != nullptr && this->defensePpsThreshold_ != nullptr && this->elasticThreshold_ != nullptr && this->instanceIp_ != nullptr && this->ipStatus_ != nullptr
        && this->ipVersion_ != nullptr && this->isBgppack_ != nullptr && this->isFullProtection_ != nullptr && this->regionId_ != nullptr; };
    // blackholeThreshold Field Functions 
    bool hasBlackholeThreshold() const { return this->blackholeThreshold_ != nullptr;};
    void deleteBlackholeThreshold() { this->blackholeThreshold_ = nullptr;};
    inline int32_t blackholeThreshold() const { DARABONBA_PTR_GET_DEFAULT(blackholeThreshold_, 0) };
    inline DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig& setBlackholeThreshold(int32_t blackholeThreshold) { DARABONBA_PTR_SET_VALUE(blackholeThreshold_, blackholeThreshold) };


    // defenseBpsThreshold Field Functions 
    bool hasDefenseBpsThreshold() const { return this->defenseBpsThreshold_ != nullptr;};
    void deleteDefenseBpsThreshold() { this->defenseBpsThreshold_ = nullptr;};
    inline int32_t defenseBpsThreshold() const { DARABONBA_PTR_GET_DEFAULT(defenseBpsThreshold_, 0) };
    inline DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig& setDefenseBpsThreshold(int32_t defenseBpsThreshold) { DARABONBA_PTR_SET_VALUE(defenseBpsThreshold_, defenseBpsThreshold) };


    // defensePpsThreshold Field Functions 
    bool hasDefensePpsThreshold() const { return this->defensePpsThreshold_ != nullptr;};
    void deleteDefensePpsThreshold() { this->defensePpsThreshold_ = nullptr;};
    inline int32_t defensePpsThreshold() const { DARABONBA_PTR_GET_DEFAULT(defensePpsThreshold_, 0) };
    inline DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig& setDefensePpsThreshold(int32_t defensePpsThreshold) { DARABONBA_PTR_SET_VALUE(defensePpsThreshold_, defensePpsThreshold) };


    // elasticThreshold Field Functions 
    bool hasElasticThreshold() const { return this->elasticThreshold_ != nullptr;};
    void deleteElasticThreshold() { this->elasticThreshold_ = nullptr;};
    inline int32_t elasticThreshold() const { DARABONBA_PTR_GET_DEFAULT(elasticThreshold_, 0) };
    inline DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig& setElasticThreshold(int32_t elasticThreshold) { DARABONBA_PTR_SET_VALUE(elasticThreshold_, elasticThreshold) };


    // instanceIp Field Functions 
    bool hasInstanceIp() const { return this->instanceIp_ != nullptr;};
    void deleteInstanceIp() { this->instanceIp_ = nullptr;};
    inline string instanceIp() const { DARABONBA_PTR_GET_DEFAULT(instanceIp_, "") };
    inline DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig& setInstanceIp(string instanceIp) { DARABONBA_PTR_SET_VALUE(instanceIp_, instanceIp) };


    // ipStatus Field Functions 
    bool hasIpStatus() const { return this->ipStatus_ != nullptr;};
    void deleteIpStatus() { this->ipStatus_ = nullptr;};
    inline string ipStatus() const { DARABONBA_PTR_GET_DEFAULT(ipStatus_, "") };
    inline DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig& setIpStatus(string ipStatus) { DARABONBA_PTR_SET_VALUE(ipStatus_, ipStatus) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // isBgppack Field Functions 
    bool hasIsBgppack() const { return this->isBgppack_ != nullptr;};
    void deleteIsBgppack() { this->isBgppack_ = nullptr;};
    inline bool isBgppack() const { DARABONBA_PTR_GET_DEFAULT(isBgppack_, false) };
    inline DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig& setIsBgppack(bool isBgppack) { DARABONBA_PTR_SET_VALUE(isBgppack_, isBgppack) };


    // isFullProtection Field Functions 
    bool hasIsFullProtection() const { return this->isFullProtection_ != nullptr;};
    void deleteIsFullProtection() { this->isFullProtection_ = nullptr;};
    inline int32_t isFullProtection() const { DARABONBA_PTR_GET_DEFAULT(isFullProtection_, 0) };
    inline DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig& setIsFullProtection(int32_t isFullProtection) { DARABONBA_PTR_SET_VALUE(isFullProtection_, isFullProtection) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The basic protection threshold for the asset. Unit: Mbit/s.
    std::shared_ptr<int32_t> blackholeThreshold_ = nullptr;
    // The traffic scrubbing threshold for the asset measured in Mbit/s. Unit: Mbit/s.
    std::shared_ptr<int32_t> defenseBpsThreshold_ = nullptr;
    // The traffic scrubbing threshold for the asset measured in packets per second (PPS). Unit: PPS.
    std::shared_ptr<int32_t> defensePpsThreshold_ = nullptr;
    // The burstable protection threshold for the asset. Unit: Mbit/s.
    std::shared_ptr<int32_t> elasticThreshold_ = nullptr;
    // The IP address of the asset.
    std::shared_ptr<string> instanceIp_ = nullptr;
    // The DDoS mitigation status of the asset. Valid values:
    // 
    // *   **mitigating**: indicates that traffic scrubbing is in progress.
    // *   **blackholed**: indicates that blackhole filtering is triggered for the asset.
    // *   **normal**: indicates that no DDoS attacks are launched against the asset.
    std::shared_ptr<string> ipStatus_ = nullptr;
    // The IP version of the IP address. Valid values:
    // 
    // *   **v4**: IPv4.
    // *   **v6**: IPv6.
    std::shared_ptr<string> ipVersion_ = nullptr;
    // Indicates whether the asset is added to the instance. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isBgppack_ = nullptr;
    // Indicates whether best-effort protection is enabled for the asset. Valid values:
    // 
    // *   **0**: no.
    // *   **1**: yes.
    std::shared_ptr<int32_t> isFullProtection_ = nullptr;
    // The region code of the asset.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
