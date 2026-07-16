// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOVERSITERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOVERSITERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class RecoverSiteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecoverSiteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(CnameZone, cnameZone_);
      DARABONBA_PTR_TO_JSON(Coverage, coverage_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NameServerList, nameServerList_);
      DARABONBA_PTR_TO_JSON(OfflineReason, offlineReason_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VerifyCode, verifyCode_);
    };
    friend void from_json(const Darabonba::Json& j, RecoverSiteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(CnameZone, cnameZone_);
      DARABONBA_PTR_FROM_JSON(Coverage, coverage_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NameServerList, nameServerList_);
      DARABONBA_PTR_FROM_JSON(OfflineReason, offlineReason_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VerifyCode, verifyCode_);
    };
    RecoverSiteResponseBody() = default ;
    RecoverSiteResponseBody(const RecoverSiteResponseBody &) = default ;
    RecoverSiteResponseBody(RecoverSiteResponseBody &&) = default ;
    RecoverSiteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecoverSiteResponseBody() = default ;
    RecoverSiteResponseBody& operator=(const RecoverSiteResponseBody &) = default ;
    RecoverSiteResponseBody& operator=(RecoverSiteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessType_ == nullptr
        && this->cnameZone_ == nullptr && this->coverage_ == nullptr && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->nameServerList_ == nullptr
        && this->offlineReason_ == nullptr && this->planName_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->siteId_ == nullptr
        && this->siteName_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr && this->verifyCode_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline RecoverSiteResponseBody& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // cnameZone Field Functions 
    bool hasCnameZone() const { return this->cnameZone_ != nullptr;};
    void deleteCnameZone() { this->cnameZone_ = nullptr;};
    inline string getCnameZone() const { DARABONBA_PTR_GET_DEFAULT(cnameZone_, "") };
    inline RecoverSiteResponseBody& setCnameZone(string cnameZone) { DARABONBA_PTR_SET_VALUE(cnameZone_, cnameZone) };


    // coverage Field Functions 
    bool hasCoverage() const { return this->coverage_ != nullptr;};
    void deleteCoverage() { this->coverage_ = nullptr;};
    inline string getCoverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
    inline RecoverSiteResponseBody& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline RecoverSiteResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RecoverSiteResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nameServerList Field Functions 
    bool hasNameServerList() const { return this->nameServerList_ != nullptr;};
    void deleteNameServerList() { this->nameServerList_ = nullptr;};
    inline string getNameServerList() const { DARABONBA_PTR_GET_DEFAULT(nameServerList_, "") };
    inline RecoverSiteResponseBody& setNameServerList(string nameServerList) { DARABONBA_PTR_SET_VALUE(nameServerList_, nameServerList) };


    // offlineReason Field Functions 
    bool hasOfflineReason() const { return this->offlineReason_ != nullptr;};
    void deleteOfflineReason() { this->offlineReason_ = nullptr;};
    inline string getOfflineReason() const { DARABONBA_PTR_GET_DEFAULT(offlineReason_, "") };
    inline RecoverSiteResponseBody& setOfflineReason(string offlineReason) { DARABONBA_PTR_SET_VALUE(offlineReason_, offlineReason) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline RecoverSiteResponseBody& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecoverSiteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline RecoverSiteResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline RecoverSiteResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline RecoverSiteResponseBody& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RecoverSiteResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline RecoverSiteResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // verifyCode Field Functions 
    bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
    void deleteVerifyCode() { this->verifyCode_ = nullptr;};
    inline string getVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
    inline RecoverSiteResponseBody& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


  protected:
    // The access type. Valid values:
    // 
    // - **NS**: access through NS hosting.
    // 
    // - **CNAME**: access through CNAME.
    shared_ptr<string> accessType_ {};
    // The CNAME suffix of the site. For sites accessed through CNAME, this is the suffix that needs to be configured for the CNAME record.
    shared_ptr<string> cnameZone_ {};
    // The acceleration region of the site. Valid values:
    // - **domestic**: the Chinese mainland only.
    // - **global**: global.
    // - **overseas**: global (excluding the Chinese mainland).
    shared_ptr<string> coverage_ {};
    // The creation time.
    shared_ptr<string> createTime_ {};
    // The plan instance ID.
    shared_ptr<string> instanceId_ {};
    // The list of name servers assigned to the site, separated by commas (,). When the site is accessed through NS, this field contains values. You need to change the DNS servers of the site to these name servers. Then you can verify site ownership and activate the site.
    shared_ptr<string> nameServerList_ {};
    // The reason why the site was disabled. Valid values:
    // 
    // - **expiration_ arrears**: the subscription plan expired or the account has an overdue payment.
    // - **internally_disabled**: disabled by the system internally.
    // - **missing_icp**: the domain name lacks an ICP filing.
    // - **content_violation**: content violation.
    // - **proactively_disabled**: you proactively disabled the site or the site was disabled due to the usage cap you configured.
    shared_ptr<string> offlineReason_ {};
    // The plan name.
    shared_ptr<string> planName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The site ID.
    shared_ptr<int64_t> siteId_ {};
    // The site name.
    shared_ptr<string> siteName_ {};
    // The site status. Valid values:
    // 
    // - **pending**: the site is pending configuration.
    // - **active**: the site is activated.
    // - **offline**: the site is offline.
    // - **moved**: the site has been superseded.
    shared_ptr<string> status_ {};
    // The modification time.
    shared_ptr<string> updateTime_ {};
    // The site ownership verification code. When the site is accessed through CNAME, this is the TXT verification code that needs to be configured.
    shared_ptr<string> verifyCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
