// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMINSTANCESRESPONSEBODYINSTANCESINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMINSTANCESRESPONSEBODYINSTANCESINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmInstancesResponseBodyInstancesInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmInstancesResponseBodyInstancesInstance& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExpireTimestamp, expireTimestamp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(MonitorTaskQuota, monitorTaskQuota_);
      DARABONBA_PTR_TO_JSON(MonthlyEmailUsed, monthlyEmailUsed_);
      DARABONBA_PTR_TO_JSON(MonthlySmsQuota, monthlySmsQuota_);
      DARABONBA_PTR_TO_JSON(MonthlySmsUsed, monthlySmsUsed_);
      DARABONBA_PTR_TO_JSON(MonthlyWebhookUsed, monthlyWebhookUsed_);
      DARABONBA_PTR_TO_JSON(ScheduleDomainName, scheduleDomainName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmInstancesResponseBodyInstancesInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTimestamp, expireTimestamp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(MonitorTaskQuota, monitorTaskQuota_);
      DARABONBA_PTR_FROM_JSON(MonthlyEmailUsed, monthlyEmailUsed_);
      DARABONBA_PTR_FROM_JSON(MonthlySmsQuota, monthlySmsQuota_);
      DARABONBA_PTR_FROM_JSON(MonthlySmsUsed, monthlySmsUsed_);
      DARABONBA_PTR_FROM_JSON(MonthlyWebhookUsed, monthlyWebhookUsed_);
      DARABONBA_PTR_FROM_JSON(ScheduleDomainName, scheduleDomainName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
    };
    ListCloudGtmInstancesResponseBodyInstancesInstance() = default ;
    ListCloudGtmInstancesResponseBodyInstancesInstance(const ListCloudGtmInstancesResponseBodyInstancesInstance &) = default ;
    ListCloudGtmInstancesResponseBodyInstancesInstance(ListCloudGtmInstancesResponseBodyInstancesInstance &&) = default ;
    ListCloudGtmInstancesResponseBodyInstancesInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmInstancesResponseBodyInstancesInstance() = default ;
    ListCloudGtmInstancesResponseBodyInstancesInstance& operator=(const ListCloudGtmInstancesResponseBodyInstancesInstance &) = default ;
    ListCloudGtmInstancesResponseBodyInstancesInstance& operator=(ListCloudGtmInstancesResponseBodyInstancesInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && return this->commodityCode_ == nullptr && return this->createTime_ == nullptr && return this->createTimestamp_ == nullptr && return this->expireTime_ == nullptr && return this->expireTimestamp_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->monitorTaskQuota_ == nullptr && return this->monthlyEmailUsed_ == nullptr && return this->monthlySmsQuota_ == nullptr
        && return this->monthlySmsUsed_ == nullptr && return this->monthlyWebhookUsed_ == nullptr && return this->scheduleDomainName_ == nullptr && return this->updateTime_ == nullptr && return this->updateTimestamp_ == nullptr
        && return this->versionCode_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expireTimestamp Field Functions 
    bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
    void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
    inline int64_t expireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // monitorTaskQuota Field Functions 
    bool hasMonitorTaskQuota() const { return this->monitorTaskQuota_ != nullptr;};
    void deleteMonitorTaskQuota() { this->monitorTaskQuota_ = nullptr;};
    inline int32_t monitorTaskQuota() const { DARABONBA_PTR_GET_DEFAULT(monitorTaskQuota_, 0) };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setMonitorTaskQuota(int32_t monitorTaskQuota) { DARABONBA_PTR_SET_VALUE(monitorTaskQuota_, monitorTaskQuota) };


    // monthlyEmailUsed Field Functions 
    bool hasMonthlyEmailUsed() const { return this->monthlyEmailUsed_ != nullptr;};
    void deleteMonthlyEmailUsed() { this->monthlyEmailUsed_ = nullptr;};
    inline int32_t monthlyEmailUsed() const { DARABONBA_PTR_GET_DEFAULT(monthlyEmailUsed_, 0) };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setMonthlyEmailUsed(int32_t monthlyEmailUsed) { DARABONBA_PTR_SET_VALUE(monthlyEmailUsed_, monthlyEmailUsed) };


    // monthlySmsQuota Field Functions 
    bool hasMonthlySmsQuota() const { return this->monthlySmsQuota_ != nullptr;};
    void deleteMonthlySmsQuota() { this->monthlySmsQuota_ = nullptr;};
    inline int32_t monthlySmsQuota() const { DARABONBA_PTR_GET_DEFAULT(monthlySmsQuota_, 0) };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setMonthlySmsQuota(int32_t monthlySmsQuota) { DARABONBA_PTR_SET_VALUE(monthlySmsQuota_, monthlySmsQuota) };


    // monthlySmsUsed Field Functions 
    bool hasMonthlySmsUsed() const { return this->monthlySmsUsed_ != nullptr;};
    void deleteMonthlySmsUsed() { this->monthlySmsUsed_ = nullptr;};
    inline int32_t monthlySmsUsed() const { DARABONBA_PTR_GET_DEFAULT(monthlySmsUsed_, 0) };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setMonthlySmsUsed(int32_t monthlySmsUsed) { DARABONBA_PTR_SET_VALUE(monthlySmsUsed_, monthlySmsUsed) };


    // monthlyWebhookUsed Field Functions 
    bool hasMonthlyWebhookUsed() const { return this->monthlyWebhookUsed_ != nullptr;};
    void deleteMonthlyWebhookUsed() { this->monthlyWebhookUsed_ = nullptr;};
    inline int32_t monthlyWebhookUsed() const { DARABONBA_PTR_GET_DEFAULT(monthlyWebhookUsed_, 0) };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setMonthlyWebhookUsed(int32_t monthlyWebhookUsed) { DARABONBA_PTR_SET_VALUE(monthlyWebhookUsed_, monthlyWebhookUsed) };


    // scheduleDomainName Field Functions 
    bool hasScheduleDomainName() const { return this->scheduleDomainName_ != nullptr;};
    void deleteScheduleDomainName() { this->scheduleDomainName_ = nullptr;};
    inline string scheduleDomainName() const { DARABONBA_PTR_GET_DEFAULT(scheduleDomainName_, "") };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setScheduleDomainName(string scheduleDomainName) { DARABONBA_PTR_SET_VALUE(scheduleDomainName_, scheduleDomainName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline ListCloudGtmInstancesResponseBodyInstancesInstance& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    std::shared_ptr<string> chargeType_ = nullptr;
    // The commodity code. Valid values:
    // 
    // *   dns_gtm_public_cn: commodity code on the China site (aliyun.com)
    // *   dns_gtm_public_intl: commodity code on the international site (alibabacloud.com)
    std::shared_ptr<string> commodityCode_ = nullptr;
    // Instance creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // Instance creation time (timestamp).
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // Instance expiration time.
    std::shared_ptr<string> expireTime_ = nullptr;
    // Instance expiration time (timestamp).
    std::shared_ptr<int64_t> expireTimestamp_ = nullptr;
    // The ID of the GTM instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Monitor probe task quota.
    std::shared_ptr<int32_t> monitorTaskQuota_ = nullptr;
    // Monthly email sending volume.
    std::shared_ptr<int32_t> monthlyEmailUsed_ = nullptr;
    // SMS quota, only supported on the China site as international sites do not support SMS.
    std::shared_ptr<int32_t> monthlySmsQuota_ = nullptr;
    // Monthly SMS sending volume, only supported by the China site as international sites do not support SMS.
    std::shared_ptr<int32_t> monthlySmsUsed_ = nullptr;
    // Monthly webhook send volume.
    std::shared_ptr<int32_t> monthlyWebhookUsed_ = nullptr;
    // The access domain name, which consists of a hostname and a zone or a subzone.
    std::shared_ptr<string> scheduleDomainName_ = nullptr;
    // The last time the instance was modified.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The last modification time of the instance (timestamp).
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
    // GTM instance version:
    // - standard: Standard Edition
    // - ultimate: Ultimate Edition
    std::shared_ptr<string> versionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
