// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESPONSEBODYRESOURCEQUOTA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESPONSEBODYRESOURCEQUOTA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaApi.hpp>
#include <alibabacloud/models/DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor.hpp>
#include <alibabacloud/models/DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota.hpp>
#include <alibabacloud/models/DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEventMonitor.hpp>
#include <alibabacloud/models/DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaLogMonitor.hpp>
#include <alibabacloud/models/DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaPhone.hpp>
#include <alibabacloud/models/DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSMS.hpp>
#include <alibabacloud/models/DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser.hpp>
#include <alibabacloud/models/DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorEcsProbe.hpp>
#include <alibabacloud/models/DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorMobile.hpp>
#include <alibabacloud/models/DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe.hpp>
#include <alibabacloud/models/DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& obj) { 
      DARABONBA_PTR_TO_JSON(Api, api_);
      DARABONBA_PTR_TO_JSON(CustomMonitor, customMonitor_);
      DARABONBA_PTR_TO_JSON(EnterpriseQuota, enterpriseQuota_);
      DARABONBA_PTR_TO_JSON(EventMonitor, eventMonitor_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogMonitor, logMonitor_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(SMS, SMS_);
      DARABONBA_PTR_TO_JSON(SiteMonitorBrowser, siteMonitorBrowser_);
      DARABONBA_PTR_TO_JSON(SiteMonitorEcsProbe, siteMonitorEcsProbe_);
      DARABONBA_PTR_TO_JSON(SiteMonitorMobile, siteMonitorMobile_);
      DARABONBA_PTR_TO_JSON(SiteMonitorOperatorProbe, siteMonitorOperatorProbe_);
      DARABONBA_PTR_TO_JSON(SiteMonitorTask, siteMonitorTask_);
      DARABONBA_PTR_TO_JSON(SuitInfo, suitInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& obj) { 
      DARABONBA_PTR_FROM_JSON(Api, api_);
      DARABONBA_PTR_FROM_JSON(CustomMonitor, customMonitor_);
      DARABONBA_PTR_FROM_JSON(EnterpriseQuota, enterpriseQuota_);
      DARABONBA_PTR_FROM_JSON(EventMonitor, eventMonitor_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogMonitor, logMonitor_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(SMS, SMS_);
      DARABONBA_PTR_FROM_JSON(SiteMonitorBrowser, siteMonitorBrowser_);
      DARABONBA_PTR_FROM_JSON(SiteMonitorEcsProbe, siteMonitorEcsProbe_);
      DARABONBA_PTR_FROM_JSON(SiteMonitorMobile, siteMonitorMobile_);
      DARABONBA_PTR_FROM_JSON(SiteMonitorOperatorProbe, siteMonitorOperatorProbe_);
      DARABONBA_PTR_FROM_JSON(SiteMonitorTask, siteMonitorTask_);
      DARABONBA_PTR_FROM_JSON(SuitInfo, suitInfo_);
    };
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota() = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota(const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota &) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota(DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota &&) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota() = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& operator=(const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota &) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& operator=(DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->api_ != nullptr
        && this->customMonitor_ != nullptr && this->enterpriseQuota_ != nullptr && this->eventMonitor_ != nullptr && this->expireTime_ != nullptr && this->instanceId_ != nullptr
        && this->logMonitor_ != nullptr && this->phone_ != nullptr && this->SMS_ != nullptr && this->siteMonitorBrowser_ != nullptr && this->siteMonitorEcsProbe_ != nullptr
        && this->siteMonitorMobile_ != nullptr && this->siteMonitorOperatorProbe_ != nullptr && this->siteMonitorTask_ != nullptr && this->suitInfo_ != nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaApi & api() const { DARABONBA_PTR_GET_CONST(api_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaApi) };
    inline Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaApi api() { DARABONBA_PTR_GET(api_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaApi) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setApi(const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaApi & api) { DARABONBA_PTR_SET_VALUE(api_, api) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setApi(Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaApi && api) { DARABONBA_PTR_SET_RVALUE(api_, api) };


    // customMonitor Field Functions 
    bool hasCustomMonitor() const { return this->customMonitor_ != nullptr;};
    void deleteCustomMonitor() { this->customMonitor_ = nullptr;};
    inline const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor & customMonitor() const { DARABONBA_PTR_GET_CONST(customMonitor_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor) };
    inline Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor customMonitor() { DARABONBA_PTR_GET(customMonitor_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setCustomMonitor(const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor & customMonitor) { DARABONBA_PTR_SET_VALUE(customMonitor_, customMonitor) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setCustomMonitor(Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor && customMonitor) { DARABONBA_PTR_SET_RVALUE(customMonitor_, customMonitor) };


    // enterpriseQuota Field Functions 
    bool hasEnterpriseQuota() const { return this->enterpriseQuota_ != nullptr;};
    void deleteEnterpriseQuota() { this->enterpriseQuota_ = nullptr;};
    inline const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota & enterpriseQuota() const { DARABONBA_PTR_GET_CONST(enterpriseQuota_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota) };
    inline Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota enterpriseQuota() { DARABONBA_PTR_GET(enterpriseQuota_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setEnterpriseQuota(const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota & enterpriseQuota) { DARABONBA_PTR_SET_VALUE(enterpriseQuota_, enterpriseQuota) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setEnterpriseQuota(Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota && enterpriseQuota) { DARABONBA_PTR_SET_RVALUE(enterpriseQuota_, enterpriseQuota) };


    // eventMonitor Field Functions 
    bool hasEventMonitor() const { return this->eventMonitor_ != nullptr;};
    void deleteEventMonitor() { this->eventMonitor_ = nullptr;};
    inline const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEventMonitor & eventMonitor() const { DARABONBA_PTR_GET_CONST(eventMonitor_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEventMonitor) };
    inline Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEventMonitor eventMonitor() { DARABONBA_PTR_GET(eventMonitor_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEventMonitor) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setEventMonitor(const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEventMonitor & eventMonitor) { DARABONBA_PTR_SET_VALUE(eventMonitor_, eventMonitor) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setEventMonitor(Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEventMonitor && eventMonitor) { DARABONBA_PTR_SET_RVALUE(eventMonitor_, eventMonitor) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logMonitor Field Functions 
    bool hasLogMonitor() const { return this->logMonitor_ != nullptr;};
    void deleteLogMonitor() { this->logMonitor_ = nullptr;};
    inline const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaLogMonitor & logMonitor() const { DARABONBA_PTR_GET_CONST(logMonitor_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaLogMonitor) };
    inline Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaLogMonitor logMonitor() { DARABONBA_PTR_GET(logMonitor_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaLogMonitor) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setLogMonitor(const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaLogMonitor & logMonitor) { DARABONBA_PTR_SET_VALUE(logMonitor_, logMonitor) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setLogMonitor(Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaLogMonitor && logMonitor) { DARABONBA_PTR_SET_RVALUE(logMonitor_, logMonitor) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaPhone & phone() const { DARABONBA_PTR_GET_CONST(phone_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaPhone) };
    inline Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaPhone phone() { DARABONBA_PTR_GET(phone_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaPhone) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setPhone(const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaPhone & phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setPhone(Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaPhone && phone) { DARABONBA_PTR_SET_RVALUE(phone_, phone) };


    // SMS Field Functions 
    bool hasSMS() const { return this->SMS_ != nullptr;};
    void deleteSMS() { this->SMS_ = nullptr;};
    inline const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSMS & SMS() const { DARABONBA_PTR_GET_CONST(SMS_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSMS) };
    inline Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSMS SMS() { DARABONBA_PTR_GET(SMS_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSMS) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setSMS(const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSMS & SMS) { DARABONBA_PTR_SET_VALUE(SMS_, SMS) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setSMS(Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSMS && SMS) { DARABONBA_PTR_SET_RVALUE(SMS_, SMS) };


    // siteMonitorBrowser Field Functions 
    bool hasSiteMonitorBrowser() const { return this->siteMonitorBrowser_ != nullptr;};
    void deleteSiteMonitorBrowser() { this->siteMonitorBrowser_ = nullptr;};
    inline const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser & siteMonitorBrowser() const { DARABONBA_PTR_GET_CONST(siteMonitorBrowser_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser) };
    inline Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser siteMonitorBrowser() { DARABONBA_PTR_GET(siteMonitorBrowser_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setSiteMonitorBrowser(const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser & siteMonitorBrowser) { DARABONBA_PTR_SET_VALUE(siteMonitorBrowser_, siteMonitorBrowser) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setSiteMonitorBrowser(Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser && siteMonitorBrowser) { DARABONBA_PTR_SET_RVALUE(siteMonitorBrowser_, siteMonitorBrowser) };


    // siteMonitorEcsProbe Field Functions 
    bool hasSiteMonitorEcsProbe() const { return this->siteMonitorEcsProbe_ != nullptr;};
    void deleteSiteMonitorEcsProbe() { this->siteMonitorEcsProbe_ = nullptr;};
    inline const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorEcsProbe & siteMonitorEcsProbe() const { DARABONBA_PTR_GET_CONST(siteMonitorEcsProbe_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorEcsProbe) };
    inline Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorEcsProbe siteMonitorEcsProbe() { DARABONBA_PTR_GET(siteMonitorEcsProbe_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorEcsProbe) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setSiteMonitorEcsProbe(const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorEcsProbe & siteMonitorEcsProbe) { DARABONBA_PTR_SET_VALUE(siteMonitorEcsProbe_, siteMonitorEcsProbe) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setSiteMonitorEcsProbe(Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorEcsProbe && siteMonitorEcsProbe) { DARABONBA_PTR_SET_RVALUE(siteMonitorEcsProbe_, siteMonitorEcsProbe) };


    // siteMonitorMobile Field Functions 
    bool hasSiteMonitorMobile() const { return this->siteMonitorMobile_ != nullptr;};
    void deleteSiteMonitorMobile() { this->siteMonitorMobile_ = nullptr;};
    inline const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorMobile & siteMonitorMobile() const { DARABONBA_PTR_GET_CONST(siteMonitorMobile_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorMobile) };
    inline Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorMobile siteMonitorMobile() { DARABONBA_PTR_GET(siteMonitorMobile_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorMobile) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setSiteMonitorMobile(const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorMobile & siteMonitorMobile) { DARABONBA_PTR_SET_VALUE(siteMonitorMobile_, siteMonitorMobile) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setSiteMonitorMobile(Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorMobile && siteMonitorMobile) { DARABONBA_PTR_SET_RVALUE(siteMonitorMobile_, siteMonitorMobile) };


    // siteMonitorOperatorProbe Field Functions 
    bool hasSiteMonitorOperatorProbe() const { return this->siteMonitorOperatorProbe_ != nullptr;};
    void deleteSiteMonitorOperatorProbe() { this->siteMonitorOperatorProbe_ = nullptr;};
    inline const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe & siteMonitorOperatorProbe() const { DARABONBA_PTR_GET_CONST(siteMonitorOperatorProbe_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe) };
    inline Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe siteMonitorOperatorProbe() { DARABONBA_PTR_GET(siteMonitorOperatorProbe_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setSiteMonitorOperatorProbe(const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe & siteMonitorOperatorProbe) { DARABONBA_PTR_SET_VALUE(siteMonitorOperatorProbe_, siteMonitorOperatorProbe) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setSiteMonitorOperatorProbe(Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe && siteMonitorOperatorProbe) { DARABONBA_PTR_SET_RVALUE(siteMonitorOperatorProbe_, siteMonitorOperatorProbe) };


    // siteMonitorTask Field Functions 
    bool hasSiteMonitorTask() const { return this->siteMonitorTask_ != nullptr;};
    void deleteSiteMonitorTask() { this->siteMonitorTask_ = nullptr;};
    inline const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorTask & siteMonitorTask() const { DARABONBA_PTR_GET_CONST(siteMonitorTask_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorTask) };
    inline Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorTask siteMonitorTask() { DARABONBA_PTR_GET(siteMonitorTask_, Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorTask) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setSiteMonitorTask(const Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorTask & siteMonitorTask) { DARABONBA_PTR_SET_VALUE(siteMonitorTask_, siteMonitorTask) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setSiteMonitorTask(Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorTask && siteMonitorTask) { DARABONBA_PTR_SET_RVALUE(siteMonitorTask_, siteMonitorTask) };


    // suitInfo Field Functions 
    bool hasSuitInfo() const { return this->suitInfo_ != nullptr;};
    void deleteSuitInfo() { this->suitInfo_ = nullptr;};
    inline string suitInfo() const { DARABONBA_PTR_GET_DEFAULT(suitInfo_, "") };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota& setSuitInfo(string suitInfo) { DARABONBA_PTR_SET_VALUE(suitInfo_, suitInfo) };


  protected:
    // The details about the quota of API calls.
    std::shared_ptr<Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaApi> api_ = nullptr;
    // The details about the quota for custom monitoring.
    std::shared_ptr<Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor> customMonitor_ = nullptr;
    // The details about the quota of Hybrid Cloud Monitoring.
    std::shared_ptr<Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota> enterpriseQuota_ = nullptr;
    // The details about the quota for event monitoring.
    std::shared_ptr<Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEventMonitor> eventMonitor_ = nullptr;
    // The time when the resource plan expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The ID of the resource plan.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The details about the quota for log monitoring.
    std::shared_ptr<Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaLogMonitor> logMonitor_ = nullptr;
    // The details about the quota of alert phone calls.
    std::shared_ptr<Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaPhone> phone_ = nullptr;
    // The details about the quota of alert text messages.
    std::shared_ptr<Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSMS> SMS_ = nullptr;
    // The quota of browser detection tasks.
    std::shared_ptr<Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser> siteMonitorBrowser_ = nullptr;
    // The details about the quota of ECS detection points for site monitoring.
    std::shared_ptr<Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorEcsProbe> siteMonitorEcsProbe_ = nullptr;
    // The quota of mobile detection tasks.
    std::shared_ptr<Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorMobile> siteMonitorMobile_ = nullptr;
    // The details about the quota of carrier detection points for site monitoring.
    std::shared_ptr<Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe> siteMonitorOperatorProbe_ = nullptr;
    // The quota of site monitoring tasks.
    std::shared_ptr<Models::DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorTask> siteMonitorTask_ = nullptr;
    // The current edition of CloudMonitor. Valid values:
    // 
    // *   free: Free Edition
    // *   pro: Pro Edition
    // *   cms_post: pay-as-you-go
    std::shared_ptr<string> suitInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
