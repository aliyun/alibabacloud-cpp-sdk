// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDnsGtmInstanceResponseBodyConfig.hpp>
#include <alibabacloud/models/DescribeDnsGtmInstanceResponseBodyUsedQuota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExpireTimestamp, expireTimestamp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SmsQuota, smsQuota_);
      DARABONBA_PTR_TO_JSON(TaskQuota, taskQuota_);
      DARABONBA_PTR_TO_JSON(UsedQuota, usedQuota_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTimestamp, expireTimestamp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SmsQuota, smsQuota_);
      DARABONBA_PTR_FROM_JSON(TaskQuota, taskQuota_);
      DARABONBA_PTR_FROM_JSON(UsedQuota, usedQuota_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
    };
    DescribeDnsGtmInstanceResponseBody() = default ;
    DescribeDnsGtmInstanceResponseBody(const DescribeDnsGtmInstanceResponseBody &) = default ;
    DescribeDnsGtmInstanceResponseBody(DescribeDnsGtmInstanceResponseBody &&) = default ;
    DescribeDnsGtmInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstanceResponseBody() = default ;
    DescribeDnsGtmInstanceResponseBody& operator=(const DescribeDnsGtmInstanceResponseBody &) = default ;
    DescribeDnsGtmInstanceResponseBody& operator=(DescribeDnsGtmInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->createTime_ == nullptr && return this->createTimestamp_ == nullptr && return this->expireTime_ == nullptr && return this->expireTimestamp_ == nullptr && return this->instanceId_ == nullptr
        && return this->paymentType_ == nullptr && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->smsQuota_ == nullptr && return this->taskQuota_ == nullptr
        && return this->usedQuota_ == nullptr && return this->versionCode_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const DescribeDnsGtmInstanceResponseBodyConfig & config() const { DARABONBA_PTR_GET_CONST(config_, DescribeDnsGtmInstanceResponseBodyConfig) };
    inline DescribeDnsGtmInstanceResponseBodyConfig config() { DARABONBA_PTR_GET(config_, DescribeDnsGtmInstanceResponseBodyConfig) };
    inline DescribeDnsGtmInstanceResponseBody& setConfig(const DescribeDnsGtmInstanceResponseBodyConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribeDnsGtmInstanceResponseBody& setConfig(DescribeDnsGtmInstanceResponseBodyConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDnsGtmInstanceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeDnsGtmInstanceResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDnsGtmInstanceResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expireTimestamp Field Functions 
    bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
    void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
    inline int64_t expireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
    inline DescribeDnsGtmInstanceResponseBody& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDnsGtmInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline DescribeDnsGtmInstanceResponseBody& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDnsGtmInstanceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // smsQuota Field Functions 
    bool hasSmsQuota() const { return this->smsQuota_ != nullptr;};
    void deleteSmsQuota() { this->smsQuota_ = nullptr;};
    inline int32_t smsQuota() const { DARABONBA_PTR_GET_DEFAULT(smsQuota_, 0) };
    inline DescribeDnsGtmInstanceResponseBody& setSmsQuota(int32_t smsQuota) { DARABONBA_PTR_SET_VALUE(smsQuota_, smsQuota) };


    // taskQuota Field Functions 
    bool hasTaskQuota() const { return this->taskQuota_ != nullptr;};
    void deleteTaskQuota() { this->taskQuota_ = nullptr;};
    inline int32_t taskQuota() const { DARABONBA_PTR_GET_DEFAULT(taskQuota_, 0) };
    inline DescribeDnsGtmInstanceResponseBody& setTaskQuota(int32_t taskQuota) { DARABONBA_PTR_SET_VALUE(taskQuota_, taskQuota) };


    // usedQuota Field Functions 
    bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
    void deleteUsedQuota() { this->usedQuota_ = nullptr;};
    inline const DescribeDnsGtmInstanceResponseBodyUsedQuota & usedQuota() const { DARABONBA_PTR_GET_CONST(usedQuota_, DescribeDnsGtmInstanceResponseBodyUsedQuota) };
    inline DescribeDnsGtmInstanceResponseBodyUsedQuota usedQuota() { DARABONBA_PTR_GET(usedQuota_, DescribeDnsGtmInstanceResponseBodyUsedQuota) };
    inline DescribeDnsGtmInstanceResponseBody& setUsedQuota(const DescribeDnsGtmInstanceResponseBodyUsedQuota & usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };
    inline DescribeDnsGtmInstanceResponseBody& setUsedQuota(DescribeDnsGtmInstanceResponseBodyUsedQuota && usedQuota) { DARABONBA_PTR_SET_RVALUE(usedQuota_, usedQuota) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline DescribeDnsGtmInstanceResponseBody& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    // The configurations of the instance.
    std::shared_ptr<DescribeDnsGtmInstanceResponseBodyConfig> config_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The UNIX timestamp that indicates when the instance was created.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The time when the instance expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The UNIX timestamp that indicates when the instance expires.
    std::shared_ptr<int64_t> expireTimestamp_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The billing method. Valid value:
    // 
    // *   Subscription: You can pay in advance for the use of resources.
    std::shared_ptr<string> paymentType_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The total number of SMS notifications.
    std::shared_ptr<int32_t> smsQuota_ = nullptr;
    // The total number of detection tasks.
    std::shared_ptr<int32_t> taskQuota_ = nullptr;
    // The used quota.
    std::shared_ptr<DescribeDnsGtmInstanceResponseBodyUsedQuota> usedQuota_ = nullptr;
    // The version of the instance.
    std::shared_ptr<string> versionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
