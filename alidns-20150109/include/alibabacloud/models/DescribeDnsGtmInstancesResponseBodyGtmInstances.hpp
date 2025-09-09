// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCESRESPONSEBODYGTMINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCESRESPONSEBODYGTMINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig.hpp>
#include <alibabacloud/models/DescribeDnsGtmInstancesResponseBodyGtmInstancesUsedQuota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstancesResponseBodyGtmInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstancesResponseBodyGtmInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExpireTimestamp, expireTimestamp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SmsQuota, smsQuota_);
      DARABONBA_PTR_TO_JSON(TaskQuota, taskQuota_);
      DARABONBA_PTR_TO_JSON(UsedQuota, usedQuota_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstancesResponseBodyGtmInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTimestamp, expireTimestamp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SmsQuota, smsQuota_);
      DARABONBA_PTR_FROM_JSON(TaskQuota, taskQuota_);
      DARABONBA_PTR_FROM_JSON(UsedQuota, usedQuota_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
    };
    DescribeDnsGtmInstancesResponseBodyGtmInstances() = default ;
    DescribeDnsGtmInstancesResponseBodyGtmInstances(const DescribeDnsGtmInstancesResponseBodyGtmInstances &) = default ;
    DescribeDnsGtmInstancesResponseBodyGtmInstances(DescribeDnsGtmInstancesResponseBodyGtmInstances &&) = default ;
    DescribeDnsGtmInstancesResponseBodyGtmInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstancesResponseBodyGtmInstances() = default ;
    DescribeDnsGtmInstancesResponseBodyGtmInstances& operator=(const DescribeDnsGtmInstancesResponseBodyGtmInstances &) = default ;
    DescribeDnsGtmInstancesResponseBodyGtmInstances& operator=(DescribeDnsGtmInstancesResponseBodyGtmInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->createTime_ != nullptr && this->createTimestamp_ != nullptr && this->expireTime_ != nullptr && this->expireTimestamp_ != nullptr && this->instanceId_ != nullptr
        && this->paymentType_ != nullptr && this->resourceGroupId_ != nullptr && this->smsQuota_ != nullptr && this->taskQuota_ != nullptr && this->usedQuota_ != nullptr
        && this->versionCode_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig) };
    inline Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig config() { DARABONBA_PTR_GET(config_, Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig) };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstances& setConfig(const Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstances& setConfig(Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstances& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstances& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expireTimestamp Field Functions 
    bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
    void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
    inline int64_t expireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstances& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstances& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // smsQuota Field Functions 
    bool hasSmsQuota() const { return this->smsQuota_ != nullptr;};
    void deleteSmsQuota() { this->smsQuota_ = nullptr;};
    inline int32_t smsQuota() const { DARABONBA_PTR_GET_DEFAULT(smsQuota_, 0) };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstances& setSmsQuota(int32_t smsQuota) { DARABONBA_PTR_SET_VALUE(smsQuota_, smsQuota) };


    // taskQuota Field Functions 
    bool hasTaskQuota() const { return this->taskQuota_ != nullptr;};
    void deleteTaskQuota() { this->taskQuota_ = nullptr;};
    inline int32_t taskQuota() const { DARABONBA_PTR_GET_DEFAULT(taskQuota_, 0) };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstances& setTaskQuota(int32_t taskQuota) { DARABONBA_PTR_SET_VALUE(taskQuota_, taskQuota) };


    // usedQuota Field Functions 
    bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
    void deleteUsedQuota() { this->usedQuota_ = nullptr;};
    inline const Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesUsedQuota & usedQuota() const { DARABONBA_PTR_GET_CONST(usedQuota_, Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesUsedQuota) };
    inline Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesUsedQuota usedQuota() { DARABONBA_PTR_GET(usedQuota_, Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesUsedQuota) };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstances& setUsedQuota(const Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesUsedQuota & usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstances& setUsedQuota(Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesUsedQuota && usedQuota) { DARABONBA_PTR_SET_RVALUE(usedQuota_, usedQuota) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstances& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    // The configurations of the instance.
    std::shared_ptr<Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig> config_ = nullptr;
    // The time when the instance was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the instance was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The time when the instance expires. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The time when the instance expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> expireTimestamp_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The billing method of the GTM instance. Valid value:
    // 
    // *   Subscription.
    std::shared_ptr<string> paymentType_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The total number of Short Message Service (SMS) notifications.
    std::shared_ptr<int32_t> smsQuota_ = nullptr;
    // The total number of detection tasks.
    std::shared_ptr<int32_t> taskQuota_ = nullptr;
    // The used quota.
    std::shared_ptr<Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesUsedQuota> usedQuota_ = nullptr;
    // The version of the instance.
    std::shared_ptr<string> versionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
