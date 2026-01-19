// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSITERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSITERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetSiteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSiteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteModel, siteModel_);
    };
    friend void from_json(const Darabonba::Json& j, GetSiteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteModel, siteModel_);
    };
    GetSiteResponseBody() = default ;
    GetSiteResponseBody(const GetSiteResponseBody &) = default ;
    GetSiteResponseBody(GetSiteResponseBody &&) = default ;
    GetSiteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSiteResponseBody() = default ;
    GetSiteResponseBody& operator=(const GetSiteResponseBody &) = default ;
    GetSiteResponseBody& operator=(GetSiteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SiteModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SiteModel& obj) { 
        DARABONBA_PTR_TO_JSON(AccessType, accessType_);
        DARABONBA_PTR_TO_JSON(CnameZone, cnameZone_);
        DARABONBA_PTR_TO_JSON(Coverage, coverage_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(NameServerList, nameServerList_);
        DARABONBA_PTR_TO_JSON(OfflineReason, offlineReason_);
        DARABONBA_PTR_TO_JSON(PlanName, planName_);
        DARABONBA_PTR_TO_JSON(PlanSpecName, planSpecName_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SiteId, siteId_);
        DARABONBA_PTR_TO_JSON(SiteName, siteName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_ANY_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VanityNSList, vanityNSList_);
        DARABONBA_PTR_TO_JSON(VerifyCode, verifyCode_);
        DARABONBA_PTR_TO_JSON(VersionManagement, versionManagement_);
      };
      friend void from_json(const Darabonba::Json& j, SiteModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
        DARABONBA_PTR_FROM_JSON(CnameZone, cnameZone_);
        DARABONBA_PTR_FROM_JSON(Coverage, coverage_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(NameServerList, nameServerList_);
        DARABONBA_PTR_FROM_JSON(OfflineReason, offlineReason_);
        DARABONBA_PTR_FROM_JSON(PlanName, planName_);
        DARABONBA_PTR_FROM_JSON(PlanSpecName, planSpecName_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
        DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_ANY_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VanityNSList, vanityNSList_);
        DARABONBA_PTR_FROM_JSON(VerifyCode, verifyCode_);
        DARABONBA_PTR_FROM_JSON(VersionManagement, versionManagement_);
      };
      SiteModel() = default ;
      SiteModel(const SiteModel &) = default ;
      SiteModel(SiteModel &&) = default ;
      SiteModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SiteModel() = default ;
      SiteModel& operator=(const SiteModel &) = default ;
      SiteModel& operator=(SiteModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->cnameZone_ == nullptr && this->coverage_ == nullptr && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->nameServerList_ == nullptr
        && this->offlineReason_ == nullptr && this->planName_ == nullptr && this->planSpecName_ == nullptr && this->resourceGroupId_ == nullptr && this->siteId_ == nullptr
        && this->siteName_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->updateTime_ == nullptr && this->vanityNSList_ == nullptr
        && this->verifyCode_ == nullptr && this->versionManagement_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline SiteModel& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // cnameZone Field Functions 
      bool hasCnameZone() const { return this->cnameZone_ != nullptr;};
      void deleteCnameZone() { this->cnameZone_ = nullptr;};
      inline string getCnameZone() const { DARABONBA_PTR_GET_DEFAULT(cnameZone_, "") };
      inline SiteModel& setCnameZone(string cnameZone) { DARABONBA_PTR_SET_VALUE(cnameZone_, cnameZone) };


      // coverage Field Functions 
      bool hasCoverage() const { return this->coverage_ != nullptr;};
      void deleteCoverage() { this->coverage_ = nullptr;};
      inline string getCoverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
      inline SiteModel& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SiteModel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline SiteModel& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // nameServerList Field Functions 
      bool hasNameServerList() const { return this->nameServerList_ != nullptr;};
      void deleteNameServerList() { this->nameServerList_ = nullptr;};
      inline string getNameServerList() const { DARABONBA_PTR_GET_DEFAULT(nameServerList_, "") };
      inline SiteModel& setNameServerList(string nameServerList) { DARABONBA_PTR_SET_VALUE(nameServerList_, nameServerList) };


      // offlineReason Field Functions 
      bool hasOfflineReason() const { return this->offlineReason_ != nullptr;};
      void deleteOfflineReason() { this->offlineReason_ = nullptr;};
      inline string getOfflineReason() const { DARABONBA_PTR_GET_DEFAULT(offlineReason_, "") };
      inline SiteModel& setOfflineReason(string offlineReason) { DARABONBA_PTR_SET_VALUE(offlineReason_, offlineReason) };


      // planName Field Functions 
      bool hasPlanName() const { return this->planName_ != nullptr;};
      void deletePlanName() { this->planName_ = nullptr;};
      inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
      inline SiteModel& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


      // planSpecName Field Functions 
      bool hasPlanSpecName() const { return this->planSpecName_ != nullptr;};
      void deletePlanSpecName() { this->planSpecName_ = nullptr;};
      inline string getPlanSpecName() const { DARABONBA_PTR_GET_DEFAULT(planSpecName_, "") };
      inline SiteModel& setPlanSpecName(string planSpecName) { DARABONBA_PTR_SET_VALUE(planSpecName_, planSpecName) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline SiteModel& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
      inline SiteModel& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


      // siteName Field Functions 
      bool hasSiteName() const { return this->siteName_ != nullptr;};
      void deleteSiteName() { this->siteName_ = nullptr;};
      inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
      inline SiteModel& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SiteModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline SiteModel& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline SiteModel& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline SiteModel& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // vanityNSList Field Functions 
      bool hasVanityNSList() const { return this->vanityNSList_ != nullptr;};
      void deleteVanityNSList() { this->vanityNSList_ = nullptr;};
      inline const map<string, string> & getVanityNSList() const { DARABONBA_PTR_GET_CONST(vanityNSList_, map<string, string>) };
      inline map<string, string> getVanityNSList() { DARABONBA_PTR_GET(vanityNSList_, map<string, string>) };
      inline SiteModel& setVanityNSList(const map<string, string> & vanityNSList) { DARABONBA_PTR_SET_VALUE(vanityNSList_, vanityNSList) };
      inline SiteModel& setVanityNSList(map<string, string> && vanityNSList) { DARABONBA_PTR_SET_RVALUE(vanityNSList_, vanityNSList) };


      // verifyCode Field Functions 
      bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
      void deleteVerifyCode() { this->verifyCode_ = nullptr;};
      inline string getVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
      inline SiteModel& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


      // versionManagement Field Functions 
      bool hasVersionManagement() const { return this->versionManagement_ != nullptr;};
      void deleteVersionManagement() { this->versionManagement_ = nullptr;};
      inline bool getVersionManagement() const { DARABONBA_PTR_GET_DEFAULT(versionManagement_, false) };
      inline SiteModel& setVersionManagement(bool versionManagement) { DARABONBA_PTR_SET_VALUE(versionManagement_, versionManagement) };


    protected:
      // The DNS setup option for the website. Valid values:
      // 
      // *   **NS**
      // *   **CNAME**
      shared_ptr<string> accessType_ {};
      // The CNAME of the website domain. If you use CNAME setup when you add your website to ESA, the value is the CNAME that you configured then.
      shared_ptr<string> cnameZone_ {};
      // The service location. Valid values:
      // 
      // *   **domestic**: the Chinese mainland.
      // *   **global**: global.
      // *   **overseas**: outside the Chinese mainland.
      shared_ptr<string> coverage_ {};
      // The time when the WEBsite was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format and is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The plan ID.
      shared_ptr<string> instanceId_ {};
      // The nameservers assigned to the website domain. They are separated by commas (,).
      shared_ptr<string> nameServerList_ {};
      shared_ptr<string> offlineReason_ {};
      // The plan name.
      shared_ptr<string> planName_ {};
      // The specification of the plan associated with the website.
      shared_ptr<string> planSpecName_ {};
      // The ID of your Alibaba Cloud resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The website ID.
      shared_ptr<int64_t> siteId_ {};
      // The website name.
      shared_ptr<string> siteName_ {};
      // The website status. Valid values:
      // 
      // *   **pending**: The website is to be configured.
      // *   **active**: The website is active.
      // *   **offline**: The website is suspended.
      // *   **moved**: The website has been added and verified by another Alibaba Cloud account.
      shared_ptr<string> status_ {};
      // The tags of the website.
      Darabonba::Json tags_ {};
      // The time when the WEBsite was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format and is displayed in UTC.
      shared_ptr<string> updateTime_ {};
      // The information about custom nameservers of the website domain. The key is a custom nameserver name, and the value is the IP address of the custom nameserver. Multiple IP addresses are separated by commas (,).
      shared_ptr<map<string, string>> vanityNSList_ {};
      // The code that is used to verify the website domain ownership. As part of the verification TXT record, this parameter is returned for websites that use CNAME setup.
      shared_ptr<string> verifyCode_ {};
      // The status of version management. If true is returned, version management is enabled for the website.
      shared_ptr<bool> versionManagement_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->siteModel_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSiteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteModel Field Functions 
    bool hasSiteModel() const { return this->siteModel_ != nullptr;};
    void deleteSiteModel() { this->siteModel_ = nullptr;};
    inline const GetSiteResponseBody::SiteModel & getSiteModel() const { DARABONBA_PTR_GET_CONST(siteModel_, GetSiteResponseBody::SiteModel) };
    inline GetSiteResponseBody::SiteModel getSiteModel() { DARABONBA_PTR_GET(siteModel_, GetSiteResponseBody::SiteModel) };
    inline GetSiteResponseBody& setSiteModel(const GetSiteResponseBody::SiteModel & siteModel) { DARABONBA_PTR_SET_VALUE(siteModel_, siteModel) };
    inline GetSiteResponseBody& setSiteModel(GetSiteResponseBody::SiteModel && siteModel) { DARABONBA_PTR_SET_RVALUE(siteModel_, siteModel) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried website information.
    shared_ptr<GetSiteResponseBody::SiteModel> siteModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
