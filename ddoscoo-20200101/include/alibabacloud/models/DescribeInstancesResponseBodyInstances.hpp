// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DebtStatus, debtStatus_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(IpMode, ipMode_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(IsFirstOpenBw, isFirstOpenBw_);
      DARABONBA_PTR_TO_JSON(IsFirstOpenQps, isFirstOpenQps_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DebtStatus, debtStatus_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(IpMode, ipMode_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(IsFirstOpenBw, isFirstOpenBw_);
      DARABONBA_PTR_FROM_JSON(IsFirstOpenQps, isFirstOpenQps_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeInstancesResponseBodyInstances() = default ;
    DescribeInstancesResponseBodyInstances(const DescribeInstancesResponseBodyInstances &) = default ;
    DescribeInstancesResponseBodyInstances(DescribeInstancesResponseBodyInstances &&) = default ;
    DescribeInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstances() = default ;
    DescribeInstancesResponseBodyInstances& operator=(const DescribeInstancesResponseBodyInstances &) = default ;
    DescribeInstancesResponseBodyInstances& operator=(DescribeInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->debtStatus_ != nullptr && this->edition_ != nullptr && this->enabled_ != nullptr && this->expireTime_ != nullptr && this->instanceId_ != nullptr
        && this->ip_ != nullptr && this->ipMode_ != nullptr && this->ipVersion_ != nullptr && this->isFirstOpenBw_ != nullptr && this->isFirstOpenQps_ != nullptr
        && this->remark_ != nullptr && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeInstancesResponseBodyInstances& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // debtStatus Field Functions 
    bool hasDebtStatus() const { return this->debtStatus_ != nullptr;};
    void deleteDebtStatus() { this->debtStatus_ = nullptr;};
    inline int32_t debtStatus() const { DARABONBA_PTR_GET_DEFAULT(debtStatus_, 0) };
    inline DescribeInstancesResponseBodyInstances& setDebtStatus(int32_t debtStatus) { DARABONBA_PTR_SET_VALUE(debtStatus_, debtStatus) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline int32_t edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, 0) };
    inline DescribeInstancesResponseBodyInstances& setEdition(int32_t edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline int32_t enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, 0) };
    inline DescribeInstancesResponseBodyInstances& setEnabled(int32_t enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline DescribeInstancesResponseBodyInstances& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstancesResponseBodyInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeInstancesResponseBodyInstances& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // ipMode Field Functions 
    bool hasIpMode() const { return this->ipMode_ != nullptr;};
    void deleteIpMode() { this->ipMode_ = nullptr;};
    inline string ipMode() const { DARABONBA_PTR_GET_DEFAULT(ipMode_, "") };
    inline DescribeInstancesResponseBodyInstances& setIpMode(string ipMode) { DARABONBA_PTR_SET_VALUE(ipMode_, ipMode) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeInstancesResponseBodyInstances& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // isFirstOpenBw Field Functions 
    bool hasIsFirstOpenBw() const { return this->isFirstOpenBw_ != nullptr;};
    void deleteIsFirstOpenBw() { this->isFirstOpenBw_ = nullptr;};
    inline int64_t isFirstOpenBw() const { DARABONBA_PTR_GET_DEFAULT(isFirstOpenBw_, 0L) };
    inline DescribeInstancesResponseBodyInstances& setIsFirstOpenBw(int64_t isFirstOpenBw) { DARABONBA_PTR_SET_VALUE(isFirstOpenBw_, isFirstOpenBw) };


    // isFirstOpenQps Field Functions 
    bool hasIsFirstOpenQps() const { return this->isFirstOpenQps_ != nullptr;};
    void deleteIsFirstOpenQps() { this->isFirstOpenQps_ = nullptr;};
    inline int64_t isFirstOpenQps() const { DARABONBA_PTR_GET_DEFAULT(isFirstOpenQps_, 0L) };
    inline DescribeInstancesResponseBodyInstances& setIsFirstOpenQps(int64_t isFirstOpenQps) { DARABONBA_PTR_SET_VALUE(isFirstOpenQps_, isFirstOpenQps) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeInstancesResponseBodyInstances& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeInstancesResponseBodyInstances& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the instance was created. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The overdue status of the instance. The value is fixed as **0**, which indicates that your Alibaba Cloud account does not have overdue payments. The instance supports only the subscription billing method.
    std::shared_ptr<int32_t> debtStatus_ = nullptr;
    // The mitigation plan of the instance. Valid values:
    // 
    // *   **0**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Insurance mitigation plan
    // *   **1**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Unlimited mitigation plan
    // *   **2**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Chinese Mainland Acceleration (CMA) mitigation plan
    // *   **9**: Anti-DDoS Proxy (Chinese Mainland) instance of the Profession mitigation plan
    std::shared_ptr<int32_t> edition_ = nullptr;
    // The traffic forwarding status of the instance. Valid values:
    // 
    // *   **0**: The instance no longer forwards service traffic.
    // *   **1**: The instance forwards service traffic as expected.
    std::shared_ptr<int32_t> enabled_ = nullptr;
    // The time when the instance expires. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IP address of the instance.
    std::shared_ptr<string> ip_ = nullptr;
    // The IP address-based forwarding mode of the instance. Valid values:
    // 
    // *   **fnat**: Requests from IPv4 addresses are forwarded to origin servers that use IPv4 addresses and requests from IPv6 addresses are forwarded to origin servers that use IPv6 addresses.
    // *   **v6tov4**: All requests are forwarded to origin servers that use IPv4 addresses.
    std::shared_ptr<string> ipMode_ = nullptr;
    // The IP version of the instance. Valid values:
    // 
    // *   **Ipv4**
    // *   **Ipv6**
    std::shared_ptr<string> ipVersion_ = nullptr;
    // Indicates whether the metering method of the 95th percentile burstable clean bandwidth is enabled for the instance. Valid values:
    // 
    // *   0: no
    // *   1: yes
    std::shared_ptr<int64_t> isFirstOpenBw_ = nullptr;
    // Indicates whether the metering method of the 95th percentile burstable QPS is enabled for the instance. Valid values:
    // 
    // *   0: no
    // *   1: yes
    std::shared_ptr<int64_t> isFirstOpenQps_ = nullptr;
    // The remarks of the instance.
    std::shared_ptr<string> remark_ = nullptr;
    // The status of the instance. Valid values:
    // 
    // *   **1**: normal
    // *   **2**: expired
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
