// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSITESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSITESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListSitesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSitesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sites, sites_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSitesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sites, sites_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSitesResponseBody() = default ;
    ListSitesResponseBody(const ListSitesResponseBody &) = default ;
    ListSitesResponseBody(ListSitesResponseBody &&) = default ;
    ListSitesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSitesResponseBody() = default ;
    ListSitesResponseBody& operator=(const ListSitesResponseBody &) = default ;
    ListSitesResponseBody& operator=(ListSitesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Sites : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sites& obj) { 
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
        DARABONBA_PTR_TO_JSON(VerifyCode, verifyCode_);
        DARABONBA_PTR_TO_JSON(VisitTime, visitTime_);
      };
      friend void from_json(const Darabonba::Json& j, Sites& obj) { 
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
        DARABONBA_PTR_FROM_JSON(VerifyCode, verifyCode_);
        DARABONBA_PTR_FROM_JSON(VisitTime, visitTime_);
      };
      Sites() = default ;
      Sites(const Sites &) = default ;
      Sites(Sites &&) = default ;
      Sites(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sites() = default ;
      Sites& operator=(const Sites &) = default ;
      Sites& operator=(Sites &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->cnameZone_ == nullptr && this->coverage_ == nullptr && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->nameServerList_ == nullptr
        && this->offlineReason_ == nullptr && this->planName_ == nullptr && this->planSpecName_ == nullptr && this->resourceGroupId_ == nullptr && this->siteId_ == nullptr
        && this->siteName_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->updateTime_ == nullptr && this->verifyCode_ == nullptr
        && this->visitTime_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline Sites& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // cnameZone Field Functions 
      bool hasCnameZone() const { return this->cnameZone_ != nullptr;};
      void deleteCnameZone() { this->cnameZone_ = nullptr;};
      inline string getCnameZone() const { DARABONBA_PTR_GET_DEFAULT(cnameZone_, "") };
      inline Sites& setCnameZone(string cnameZone) { DARABONBA_PTR_SET_VALUE(cnameZone_, cnameZone) };


      // coverage Field Functions 
      bool hasCoverage() const { return this->coverage_ != nullptr;};
      void deleteCoverage() { this->coverage_ = nullptr;};
      inline string getCoverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
      inline Sites& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Sites& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Sites& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // nameServerList Field Functions 
      bool hasNameServerList() const { return this->nameServerList_ != nullptr;};
      void deleteNameServerList() { this->nameServerList_ = nullptr;};
      inline string getNameServerList() const { DARABONBA_PTR_GET_DEFAULT(nameServerList_, "") };
      inline Sites& setNameServerList(string nameServerList) { DARABONBA_PTR_SET_VALUE(nameServerList_, nameServerList) };


      // offlineReason Field Functions 
      bool hasOfflineReason() const { return this->offlineReason_ != nullptr;};
      void deleteOfflineReason() { this->offlineReason_ = nullptr;};
      inline string getOfflineReason() const { DARABONBA_PTR_GET_DEFAULT(offlineReason_, "") };
      inline Sites& setOfflineReason(string offlineReason) { DARABONBA_PTR_SET_VALUE(offlineReason_, offlineReason) };


      // planName Field Functions 
      bool hasPlanName() const { return this->planName_ != nullptr;};
      void deletePlanName() { this->planName_ = nullptr;};
      inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
      inline Sites& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


      // planSpecName Field Functions 
      bool hasPlanSpecName() const { return this->planSpecName_ != nullptr;};
      void deletePlanSpecName() { this->planSpecName_ = nullptr;};
      inline string getPlanSpecName() const { DARABONBA_PTR_GET_DEFAULT(planSpecName_, "") };
      inline Sites& setPlanSpecName(string planSpecName) { DARABONBA_PTR_SET_VALUE(planSpecName_, planSpecName) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Sites& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
      inline Sites& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


      // siteName Field Functions 
      bool hasSiteName() const { return this->siteName_ != nullptr;};
      void deleteSiteName() { this->siteName_ = nullptr;};
      inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
      inline Sites& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Sites& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline Sites& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline Sites& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Sites& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // verifyCode Field Functions 
      bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
      void deleteVerifyCode() { this->verifyCode_ = nullptr;};
      inline string getVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
      inline Sites& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


      // visitTime Field Functions 
      bool hasVisitTime() const { return this->visitTime_ != nullptr;};
      void deleteVisitTime() { this->visitTime_ = nullptr;};
      inline string getVisitTime() const { DARABONBA_PTR_GET_DEFAULT(visitTime_, "") };
      inline Sites& setVisitTime(string visitTime) { DARABONBA_PTR_SET_VALUE(visitTime_, visitTime) };


    protected:
      // The DNS setup for the website. Valid values:
      // 
      // *   **NS**
      // *   **CNAME**
      shared_ptr<string> accessType_ {};
      // The CNAME of the website domain. If you use CNAME setup when you add your website to ESA, the value is the CNAME that you configured then.
      shared_ptr<string> cnameZone_ {};
      // The service location for the website. Valid values:
      // 
      // *   **domestic**: the Chinese mainland
      // *   **global**: global
      // *   **overseas**: outside the Chinese mainland
      shared_ptr<string> coverage_ {};
      // The time when the website was added. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The ID of the plan associated with the website.
      shared_ptr<string> instanceId_ {};
      // The nameservers assigned to the website domain, which are separated by commas (,).
      shared_ptr<string> nameServerList_ {};
      shared_ptr<string> offlineReason_ {};
      // The plan name.
      shared_ptr<string> planName_ {};
      // The plan associated with the website.
      shared_ptr<string> planSpecName_ {};
      // The ID of the resource group.
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
      // The time when the website was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
      // The code that is used to verify the website domain ownership. As part of the verification TXT record, this parameter is returned for websites that use CNAME setup.
      shared_ptr<string> verifyCode_ {};
      // The website visit time is represented in the ISO 8601 date format using UTC time, formatted as yyyy-MM-ddTHH:mm:ssZ.
      shared_ptr<string> visitTime_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->sites_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSitesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSitesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSitesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sites Field Functions 
    bool hasSites() const { return this->sites_ != nullptr;};
    void deleteSites() { this->sites_ = nullptr;};
    inline const vector<ListSitesResponseBody::Sites> & getSites() const { DARABONBA_PTR_GET_CONST(sites_, vector<ListSitesResponseBody::Sites>) };
    inline vector<ListSitesResponseBody::Sites> getSites() { DARABONBA_PTR_GET(sites_, vector<ListSitesResponseBody::Sites>) };
    inline ListSitesResponseBody& setSites(const vector<ListSitesResponseBody::Sites> & sites) { DARABONBA_PTR_SET_VALUE(sites_, sites) };
    inline ListSitesResponseBody& setSites(vector<ListSitesResponseBody::Sites> && sites) { DARABONBA_PTR_SET_RVALUE(sites_, sites) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSitesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of websites per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried websites.
    shared_ptr<vector<ListSitesResponseBody::Sites>> sites_ {};
    // The total number of websites.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
