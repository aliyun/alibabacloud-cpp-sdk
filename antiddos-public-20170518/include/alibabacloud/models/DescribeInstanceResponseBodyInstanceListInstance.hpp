// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYINSTANCELISTINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYINSTANCELISTINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeInstanceResponseBodyInstanceListInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBodyInstanceListInstance& obj) { 
      DARABONBA_PTR_TO_JSON(BlackholeThreshold, blackholeThreshold_);
      DARABONBA_PTR_TO_JSON(DefenseBpsThreshold, defenseBpsThreshold_);
      DARABONBA_PTR_TO_JSON(DefensePpsThreshold, defensePpsThreshold_);
      DARABONBA_PTR_TO_JSON(ElasticThreshold, elasticThreshold_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceIp, instanceIp_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(IsBgppack, isBgppack_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBodyInstanceListInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackholeThreshold, blackholeThreshold_);
      DARABONBA_PTR_FROM_JSON(DefenseBpsThreshold, defenseBpsThreshold_);
      DARABONBA_PTR_FROM_JSON(DefensePpsThreshold, defensePpsThreshold_);
      DARABONBA_PTR_FROM_JSON(ElasticThreshold, elasticThreshold_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceIp, instanceIp_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(IsBgppack, isBgppack_);
    };
    DescribeInstanceResponseBodyInstanceListInstance() = default ;
    DescribeInstanceResponseBodyInstanceListInstance(const DescribeInstanceResponseBodyInstanceListInstance &) = default ;
    DescribeInstanceResponseBodyInstanceListInstance(DescribeInstanceResponseBodyInstanceListInstance &&) = default ;
    DescribeInstanceResponseBodyInstanceListInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBodyInstanceListInstance() = default ;
    DescribeInstanceResponseBodyInstanceListInstance& operator=(const DescribeInstanceResponseBodyInstanceListInstance &) = default ;
    DescribeInstanceResponseBodyInstanceListInstance& operator=(DescribeInstanceResponseBodyInstanceListInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blackholeThreshold_ != nullptr
        && this->defenseBpsThreshold_ != nullptr && this->defensePpsThreshold_ != nullptr && this->elasticThreshold_ != nullptr && this->instanceId_ != nullptr && this->instanceIp_ != nullptr
        && this->instanceName_ != nullptr && this->instanceStatus_ != nullptr && this->instanceType_ != nullptr && this->ipVersion_ != nullptr && this->isBgppack_ != nullptr; };
    // blackholeThreshold Field Functions 
    bool hasBlackholeThreshold() const { return this->blackholeThreshold_ != nullptr;};
    void deleteBlackholeThreshold() { this->blackholeThreshold_ = nullptr;};
    inline int32_t blackholeThreshold() const { DARABONBA_PTR_GET_DEFAULT(blackholeThreshold_, 0) };
    inline DescribeInstanceResponseBodyInstanceListInstance& setBlackholeThreshold(int32_t blackholeThreshold) { DARABONBA_PTR_SET_VALUE(blackholeThreshold_, blackholeThreshold) };


    // defenseBpsThreshold Field Functions 
    bool hasDefenseBpsThreshold() const { return this->defenseBpsThreshold_ != nullptr;};
    void deleteDefenseBpsThreshold() { this->defenseBpsThreshold_ = nullptr;};
    inline int32_t defenseBpsThreshold() const { DARABONBA_PTR_GET_DEFAULT(defenseBpsThreshold_, 0) };
    inline DescribeInstanceResponseBodyInstanceListInstance& setDefenseBpsThreshold(int32_t defenseBpsThreshold) { DARABONBA_PTR_SET_VALUE(defenseBpsThreshold_, defenseBpsThreshold) };


    // defensePpsThreshold Field Functions 
    bool hasDefensePpsThreshold() const { return this->defensePpsThreshold_ != nullptr;};
    void deleteDefensePpsThreshold() { this->defensePpsThreshold_ = nullptr;};
    inline int32_t defensePpsThreshold() const { DARABONBA_PTR_GET_DEFAULT(defensePpsThreshold_, 0) };
    inline DescribeInstanceResponseBodyInstanceListInstance& setDefensePpsThreshold(int32_t defensePpsThreshold) { DARABONBA_PTR_SET_VALUE(defensePpsThreshold_, defensePpsThreshold) };


    // elasticThreshold Field Functions 
    bool hasElasticThreshold() const { return this->elasticThreshold_ != nullptr;};
    void deleteElasticThreshold() { this->elasticThreshold_ = nullptr;};
    inline int32_t elasticThreshold() const { DARABONBA_PTR_GET_DEFAULT(elasticThreshold_, 0) };
    inline DescribeInstanceResponseBodyInstanceListInstance& setElasticThreshold(int32_t elasticThreshold) { DARABONBA_PTR_SET_VALUE(elasticThreshold_, elasticThreshold) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceResponseBodyInstanceListInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIp Field Functions 
    bool hasInstanceIp() const { return this->instanceIp_ != nullptr;};
    void deleteInstanceIp() { this->instanceIp_ = nullptr;};
    inline string instanceIp() const { DARABONBA_PTR_GET_DEFAULT(instanceIp_, "") };
    inline DescribeInstanceResponseBodyInstanceListInstance& setInstanceIp(string instanceIp) { DARABONBA_PTR_SET_VALUE(instanceIp_, instanceIp) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstanceResponseBodyInstanceListInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeInstanceResponseBodyInstanceListInstance& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeInstanceResponseBodyInstanceListInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeInstanceResponseBodyInstanceListInstance& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // isBgppack Field Functions 
    bool hasIsBgppack() const { return this->isBgppack_ != nullptr;};
    void deleteIsBgppack() { this->isBgppack_ = nullptr;};
    inline bool isBgppack() const { DARABONBA_PTR_GET_DEFAULT(isBgppack_, false) };
    inline DescribeInstanceResponseBodyInstanceListInstance& setIsBgppack(bool isBgppack) { DARABONBA_PTR_SET_VALUE(isBgppack_, isBgppack) };


  protected:
    // The basic protection threshold for the asset. Unit: Mbit/s.
    std::shared_ptr<int32_t> blackholeThreshold_ = nullptr;
    // The traffic scrubbing threshold for the asset. Unit: Mbit/s.
    std::shared_ptr<int32_t> defenseBpsThreshold_ = nullptr;
    // The packet scrubbing threshold for the asset. Unit: packets per second (pps).
    std::shared_ptr<int32_t> defensePpsThreshold_ = nullptr;
    // The burstable protection threshold for the asset. Unit: Mbit/s.
    std::shared_ptr<int32_t> elasticThreshold_ = nullptr;
    // The ID of the asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IP address of the asset.
    std::shared_ptr<string> instanceIp_ = nullptr;
    // The name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The DDoS mitigation status of the asset. Valid values:
    // 
    // *   **mitigating**: indicates that traffic scrubbing is triggered for the asset.
    // *   **blackholed**: indicates that blackhole filtering is triggered for the asset.
    // *   **normal**: indicates that the instance is normal.
    std::shared_ptr<string> instanceStatus_ = nullptr;
    // The type of the asset.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The IP protocol that is supported by the asset. Valid values:
    // 
    // *   **v4**: IPv4
    // *   **v6**: IPv6
    std::shared_ptr<string> ipVersion_ = nullptr;
    // Indicates whether the asset is associated with an Anti-DDoS Origin Basic instance. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> isBgppack_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
