// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCLOUDGTMINSTANCESRESPONSEBODYINSTANCESINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCLOUDGTMINSTANCESRESPONSEBODYINSTANCESINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchCloudGtmInstancesResponseBodyInstancesInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCloudGtmInstancesResponseBodyInstancesInstance& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SearchCloudGtmInstancesResponseBodyInstancesInstance& obj) { 
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
    SearchCloudGtmInstancesResponseBodyInstancesInstance() = default ;
    SearchCloudGtmInstancesResponseBodyInstancesInstance(const SearchCloudGtmInstancesResponseBodyInstancesInstance &) = default ;
    SearchCloudGtmInstancesResponseBodyInstancesInstance(SearchCloudGtmInstancesResponseBodyInstancesInstance &&) = default ;
    SearchCloudGtmInstancesResponseBodyInstancesInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCloudGtmInstancesResponseBodyInstancesInstance() = default ;
    SearchCloudGtmInstancesResponseBodyInstancesInstance& operator=(const SearchCloudGtmInstancesResponseBodyInstancesInstance &) = default ;
    SearchCloudGtmInstancesResponseBodyInstancesInstance& operator=(SearchCloudGtmInstancesResponseBodyInstancesInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->createTime_ != nullptr && this->createTimestamp_ != nullptr && this->expireTime_ != nullptr && this->expireTimestamp_ != nullptr && this->instanceId_ != nullptr
        && this->instanceName_ != nullptr && this->monitorTaskQuota_ != nullptr && this->monthlyEmailUsed_ != nullptr && this->monthlySmsQuota_ != nullptr && this->monthlySmsUsed_ != nullptr
        && this->monthlyWebhookUsed_ != nullptr && this->scheduleDomainName_ != nullptr && this->updateTime_ != nullptr && this->updateTimestamp_ != nullptr && this->versionCode_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline SearchCloudGtmInstancesResponseBodyInstancesInstance& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline SearchCloudGtmInstancesResponseBodyInstancesInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline SearchCloudGtmInstancesResponseBodyInstancesInstance& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline SearchCloudGtmInstancesResponseBodyInstancesInstance& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expireTimestamp Field Functions 
    bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
    void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
    inline string expireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, "") };
    inline SearchCloudGtmInstancesResponseBodyInstancesInstance& setExpireTimestamp(string expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SearchCloudGtmInstancesResponseBodyInstancesInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline SearchCloudGtmInstancesResponseBodyInstancesInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // monitorTaskQuota Field Functions 
    bool hasMonitorTaskQuota() const { return this->monitorTaskQuota_ != nullptr;};
    void deleteMonitorTaskQuota() { this->monitorTaskQuota_ = nullptr;};
    inline int32_t monitorTaskQuota() const { DARABONBA_PTR_GET_DEFAULT(monitorTaskQuota_, 0) };
    inline SearchCloudGtmInstancesResponseBodyInstancesInstance& setMonitorTaskQuota(int32_t monitorTaskQuota) { DARABONBA_PTR_SET_VALUE(monitorTaskQuota_, monitorTaskQuota) };


    // monthlyEmailUsed Field Functions 
    bool hasMonthlyEmailUsed() const { return this->monthlyEmailUsed_ != nullptr;};
    void deleteMonthlyEmailUsed() { this->monthlyEmailUsed_ = nullptr;};
    inline int32_t monthlyEmailUsed() const { DARABONBA_PTR_GET_DEFAULT(monthlyEmailUsed_, 0) };
    inline SearchCloudGtmInstancesResponseBodyInstancesInstance& setMonthlyEmailUsed(int32_t monthlyEmailUsed) { DARABONBA_PTR_SET_VALUE(monthlyEmailUsed_, monthlyEmailUsed) };


    // monthlySmsQuota Field Functions 
    bool hasMonthlySmsQuota() const { return this->monthlySmsQuota_ != nullptr;};
    void deleteMonthlySmsQuota() { this->monthlySmsQuota_ = nullptr;};
    inline int32_t monthlySmsQuota() const { DARABONBA_PTR_GET_DEFAULT(monthlySmsQuota_, 0) };
    inline SearchCloudGtmInstancesResponseBodyInstancesInstance& setMonthlySmsQuota(int32_t monthlySmsQuota) { DARABONBA_PTR_SET_VALUE(monthlySmsQuota_, monthlySmsQuota) };


    // monthlySmsUsed Field Functions 
    bool hasMonthlySmsUsed() const { return this->monthlySmsUsed_ != nullptr;};
    void deleteMonthlySmsUsed() { this->monthlySmsUsed_ = nullptr;};
    inline int32_t monthlySmsUsed() const { DARABONBA_PTR_GET_DEFAULT(monthlySmsUsed_, 0) };
    inline SearchCloudGtmInstancesResponseBodyInstancesInstance& setMonthlySmsUsed(int32_t monthlySmsUsed) { DARABONBA_PTR_SET_VALUE(monthlySmsUsed_, monthlySmsUsed) };


    // monthlyWebhookUsed Field Functions 
    bool hasMonthlyWebhookUsed() const { return this->monthlyWebhookUsed_ != nullptr;};
    void deleteMonthlyWebhookUsed() { this->monthlyWebhookUsed_ = nullptr;};
    inline int32_t monthlyWebhookUsed() const { DARABONBA_PTR_GET_DEFAULT(monthlyWebhookUsed_, 0) };
    inline SearchCloudGtmInstancesResponseBodyInstancesInstance& setMonthlyWebhookUsed(int32_t monthlyWebhookUsed) { DARABONBA_PTR_SET_VALUE(monthlyWebhookUsed_, monthlyWebhookUsed) };


    // scheduleDomainName Field Functions 
    bool hasScheduleDomainName() const { return this->scheduleDomainName_ != nullptr;};
    void deleteScheduleDomainName() { this->scheduleDomainName_ = nullptr;};
    inline string scheduleDomainName() const { DARABONBA_PTR_GET_DEFAULT(scheduleDomainName_, "") };
    inline SearchCloudGtmInstancesResponseBodyInstancesInstance& setScheduleDomainName(string scheduleDomainName) { DARABONBA_PTR_SET_VALUE(scheduleDomainName_, scheduleDomainName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline SearchCloudGtmInstancesResponseBodyInstancesInstance& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline SearchCloudGtmInstancesResponseBodyInstancesInstance& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline SearchCloudGtmInstancesResponseBodyInstancesInstance& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
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
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // Instance expiration time (timestamp).
    std::shared_ptr<string> expireTimestamp_ = nullptr;
    // The ID of the GTM 3.0 instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Schedule instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Monitor probe task quota.
    std::shared_ptr<int32_t> monitorTaskQuota_ = nullptr;
    // Monthly email sending volume.
    std::shared_ptr<int32_t> monthlyEmailUsed_ = nullptr;
    // SMS quota, only supported on the China site. International site does not support SMS.
    std::shared_ptr<int32_t> monthlySmsQuota_ = nullptr;
    // Monthly SMS sending volume, only supported by the China site as international sites do not support SMS.
    std::shared_ptr<int32_t> monthlySmsUsed_ = nullptr;
    // Monthly webhook dispatch volume.
    std::shared_ptr<int32_t> monthlyWebhookUsed_ = nullptr;
    // The access domain name, which consists of a hostname and a zone or a subzone.
    std::shared_ptr<string> scheduleDomainName_ = nullptr;
    // The last modified time of the instance.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The last modified time of the instance (timestamp).
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
    // Global Traffic Management version 3.0 instance types:
    // - standard: Standard Edition
    // - ultimate: Ultimate Edition
    std::shared_ptr<string> versionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
