// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSITERESPONSEBODYSITEMODEL_HPP_
#define ALIBABACLOUD_MODELS_GETSITERESPONSEBODYSITEMODEL_HPP_
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
  class GetSiteResponseBodySiteModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSiteResponseBodySiteModel& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetSiteResponseBodySiteModel& obj) { 
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
    GetSiteResponseBodySiteModel() = default ;
    GetSiteResponseBodySiteModel(const GetSiteResponseBodySiteModel &) = default ;
    GetSiteResponseBodySiteModel(GetSiteResponseBodySiteModel &&) = default ;
    GetSiteResponseBodySiteModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSiteResponseBodySiteModel() = default ;
    GetSiteResponseBodySiteModel& operator=(const GetSiteResponseBodySiteModel &) = default ;
    GetSiteResponseBodySiteModel& operator=(GetSiteResponseBodySiteModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessType_ == nullptr
        && return this->cnameZone_ == nullptr && return this->coverage_ == nullptr && return this->createTime_ == nullptr && return this->instanceId_ == nullptr && return this->nameServerList_ == nullptr
        && return this->offlineReason_ == nullptr && return this->planName_ == nullptr && return this->planSpecName_ == nullptr && return this->resourceGroupId_ == nullptr && return this->siteId_ == nullptr
        && return this->siteName_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr && return this->updateTime_ == nullptr && return this->vanityNSList_ == nullptr
        && return this->verifyCode_ == nullptr && return this->versionManagement_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline GetSiteResponseBodySiteModel& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // cnameZone Field Functions 
    bool hasCnameZone() const { return this->cnameZone_ != nullptr;};
    void deleteCnameZone() { this->cnameZone_ = nullptr;};
    inline string cnameZone() const { DARABONBA_PTR_GET_DEFAULT(cnameZone_, "") };
    inline GetSiteResponseBodySiteModel& setCnameZone(string cnameZone) { DARABONBA_PTR_SET_VALUE(cnameZone_, cnameZone) };


    // coverage Field Functions 
    bool hasCoverage() const { return this->coverage_ != nullptr;};
    void deleteCoverage() { this->coverage_ = nullptr;};
    inline string coverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
    inline GetSiteResponseBodySiteModel& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetSiteResponseBodySiteModel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSiteResponseBodySiteModel& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nameServerList Field Functions 
    bool hasNameServerList() const { return this->nameServerList_ != nullptr;};
    void deleteNameServerList() { this->nameServerList_ = nullptr;};
    inline string nameServerList() const { DARABONBA_PTR_GET_DEFAULT(nameServerList_, "") };
    inline GetSiteResponseBodySiteModel& setNameServerList(string nameServerList) { DARABONBA_PTR_SET_VALUE(nameServerList_, nameServerList) };


    // offlineReason Field Functions 
    bool hasOfflineReason() const { return this->offlineReason_ != nullptr;};
    void deleteOfflineReason() { this->offlineReason_ = nullptr;};
    inline string offlineReason() const { DARABONBA_PTR_GET_DEFAULT(offlineReason_, "") };
    inline GetSiteResponseBodySiteModel& setOfflineReason(string offlineReason) { DARABONBA_PTR_SET_VALUE(offlineReason_, offlineReason) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline GetSiteResponseBodySiteModel& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // planSpecName Field Functions 
    bool hasPlanSpecName() const { return this->planSpecName_ != nullptr;};
    void deletePlanSpecName() { this->planSpecName_ = nullptr;};
    inline string planSpecName() const { DARABONBA_PTR_GET_DEFAULT(planSpecName_, "") };
    inline GetSiteResponseBodySiteModel& setPlanSpecName(string planSpecName) { DARABONBA_PTR_SET_VALUE(planSpecName_, planSpecName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetSiteResponseBodySiteModel& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetSiteResponseBodySiteModel& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string siteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline GetSiteResponseBodySiteModel& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSiteResponseBodySiteModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline GetSiteResponseBodySiteModel& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline GetSiteResponseBodySiteModel& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetSiteResponseBodySiteModel& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vanityNSList Field Functions 
    bool hasVanityNSList() const { return this->vanityNSList_ != nullptr;};
    void deleteVanityNSList() { this->vanityNSList_ = nullptr;};
    inline const map<string, string> & vanityNSList() const { DARABONBA_PTR_GET_CONST(vanityNSList_, map<string, string>) };
    inline map<string, string> vanityNSList() { DARABONBA_PTR_GET(vanityNSList_, map<string, string>) };
    inline GetSiteResponseBodySiteModel& setVanityNSList(const map<string, string> & vanityNSList) { DARABONBA_PTR_SET_VALUE(vanityNSList_, vanityNSList) };
    inline GetSiteResponseBodySiteModel& setVanityNSList(map<string, string> && vanityNSList) { DARABONBA_PTR_SET_RVALUE(vanityNSList_, vanityNSList) };


    // verifyCode Field Functions 
    bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
    void deleteVerifyCode() { this->verifyCode_ = nullptr;};
    inline string verifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
    inline GetSiteResponseBodySiteModel& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


    // versionManagement Field Functions 
    bool hasVersionManagement() const { return this->versionManagement_ != nullptr;};
    void deleteVersionManagement() { this->versionManagement_ = nullptr;};
    inline bool versionManagement() const { DARABONBA_PTR_GET_DEFAULT(versionManagement_, false) };
    inline GetSiteResponseBodySiteModel& setVersionManagement(bool versionManagement) { DARABONBA_PTR_SET_VALUE(versionManagement_, versionManagement) };


  protected:
    // The DNS setup option for the website. Valid values:
    // 
    // *   **NS**
    // *   **CNAME**
    std::shared_ptr<string> accessType_ = nullptr;
    // The CNAME of the website domain. If you use CNAME setup when you add your website to ESA, the value is the CNAME that you configured then.
    std::shared_ptr<string> cnameZone_ = nullptr;
    // The service location. Valid values:
    // 
    // *   **domestic**: the Chinese mainland.
    // *   **global**: global.
    // *   **overseas**: outside the Chinese mainland.
    std::shared_ptr<string> coverage_ = nullptr;
    // The time when the WEBsite was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format and is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The plan ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The nameservers assigned to the website domain. They are separated by commas (,).
    std::shared_ptr<string> nameServerList_ = nullptr;
    std::shared_ptr<string> offlineReason_ = nullptr;
    // The plan name.
    std::shared_ptr<string> planName_ = nullptr;
    // The specification of the plan associated with the website.
    std::shared_ptr<string> planSpecName_ = nullptr;
    // The ID of your Alibaba Cloud resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The website name.
    std::shared_ptr<string> siteName_ = nullptr;
    // The website status. Valid values:
    // 
    // *   **pending**: The website is to be configured.
    // *   **active**: The website is active.
    // *   **offline**: The website is suspended.
    // *   **moved**: The website has been added and verified by another Alibaba Cloud account.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the website.
    Darabonba::Json tags_ = nullptr;
    // The time when the WEBsite was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format and is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The information about custom nameservers of the website domain. The key is a custom nameserver name, and the value is the IP address of the custom nameserver. Multiple IP addresses are separated by commas (,).
    std::shared_ptr<map<string, string>> vanityNSList_ = nullptr;
    // The code that is used to verify the website domain ownership. As part of the verification TXT record, this parameter is returned for websites that use CNAME setup.
    std::shared_ptr<string> verifyCode_ = nullptr;
    // The status of version management. If true is returned, version management is enabled for the website.
    std::shared_ptr<bool> versionManagement_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
