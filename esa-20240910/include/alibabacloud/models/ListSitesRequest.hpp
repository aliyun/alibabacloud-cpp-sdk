// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSITESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSITESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSitesRequestTagFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListSitesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSitesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(Coverage, coverage_);
      DARABONBA_PTR_TO_JSON(OnlyEnterprise, onlyEnterprise_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlanSubscribeType, planSubscribeType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      DARABONBA_PTR_TO_JSON(SiteSearchType, siteSearchType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagFilter, tagFilter_);
    };
    friend void from_json(const Darabonba::Json& j, ListSitesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(Coverage, coverage_);
      DARABONBA_PTR_FROM_JSON(OnlyEnterprise, onlyEnterprise_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlanSubscribeType, planSubscribeType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      DARABONBA_PTR_FROM_JSON(SiteSearchType, siteSearchType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagFilter, tagFilter_);
    };
    ListSitesRequest() = default ;
    ListSitesRequest(const ListSitesRequest &) = default ;
    ListSitesRequest(ListSitesRequest &&) = default ;
    ListSitesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSitesRequest() = default ;
    ListSitesRequest& operator=(const ListSitesRequest &) = default ;
    ListSitesRequest& operator=(ListSitesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessType_ == nullptr
        && return this->coverage_ == nullptr && return this->onlyEnterprise_ == nullptr && return this->orderBy_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->planSubscribeType_ == nullptr && return this->resourceGroupId_ == nullptr && return this->siteName_ == nullptr && return this->siteSearchType_ == nullptr && return this->status_ == nullptr
        && return this->tagFilter_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline ListSitesRequest& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // coverage Field Functions 
    bool hasCoverage() const { return this->coverage_ != nullptr;};
    void deleteCoverage() { this->coverage_ = nullptr;};
    inline string coverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
    inline ListSitesRequest& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


    // onlyEnterprise Field Functions 
    bool hasOnlyEnterprise() const { return this->onlyEnterprise_ != nullptr;};
    void deleteOnlyEnterprise() { this->onlyEnterprise_ = nullptr;};
    inline bool onlyEnterprise() const { DARABONBA_PTR_GET_DEFAULT(onlyEnterprise_, false) };
    inline ListSitesRequest& setOnlyEnterprise(bool onlyEnterprise) { DARABONBA_PTR_SET_VALUE(onlyEnterprise_, onlyEnterprise) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListSitesRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSitesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSitesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // planSubscribeType Field Functions 
    bool hasPlanSubscribeType() const { return this->planSubscribeType_ != nullptr;};
    void deletePlanSubscribeType() { this->planSubscribeType_ = nullptr;};
    inline string planSubscribeType() const { DARABONBA_PTR_GET_DEFAULT(planSubscribeType_, "") };
    inline ListSitesRequest& setPlanSubscribeType(string planSubscribeType) { DARABONBA_PTR_SET_VALUE(planSubscribeType_, planSubscribeType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListSitesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string siteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline ListSitesRequest& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // siteSearchType Field Functions 
    bool hasSiteSearchType() const { return this->siteSearchType_ != nullptr;};
    void deleteSiteSearchType() { this->siteSearchType_ = nullptr;};
    inline string siteSearchType() const { DARABONBA_PTR_GET_DEFAULT(siteSearchType_, "") };
    inline ListSitesRequest& setSiteSearchType(string siteSearchType) { DARABONBA_PTR_SET_VALUE(siteSearchType_, siteSearchType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSitesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagFilter Field Functions 
    bool hasTagFilter() const { return this->tagFilter_ != nullptr;};
    void deleteTagFilter() { this->tagFilter_ = nullptr;};
    inline const vector<ListSitesRequestTagFilter> & tagFilter() const { DARABONBA_PTR_GET_CONST(tagFilter_, vector<ListSitesRequestTagFilter>) };
    inline vector<ListSitesRequestTagFilter> tagFilter() { DARABONBA_PTR_GET(tagFilter_, vector<ListSitesRequestTagFilter>) };
    inline ListSitesRequest& setTagFilter(const vector<ListSitesRequestTagFilter> & tagFilter) { DARABONBA_PTR_SET_VALUE(tagFilter_, tagFilter) };
    inline ListSitesRequest& setTagFilter(vector<ListSitesRequestTagFilter> && tagFilter) { DARABONBA_PTR_SET_RVALUE(tagFilter_, tagFilter) };


  protected:
    // The DNS setup. Valid values:
    // 
    // *   **NS**
    // *   **CNAME**
    std::shared_ptr<string> accessType_ = nullptr;
    // The service location. Valid values:
    // 
    // *   **domestic**: the Chinese mainland
    // *   **global**: global
    // *   **overseas**: outside the Chinese mainland
    std::shared_ptr<string> coverage_ = nullptr;
    // Specifies whether to query only websites on Enterprise plans. Valid values: **true and false**.
    std::shared_ptr<bool> onlyEnterprise_ = nullptr;
    // Sorting field. By default, it sorts by creation time, supporting the following options:
    // - gmtCreate: website creation time
    // - visitTime: website visit time
    std::shared_ptr<string> orderBy_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: **500**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The plan type. Valid values:
    // 
    // *   **basicplan**: Entrance
    // *   **standardplan**: Pro
    // *   **advancedplan**: Premium
    // *   **enterpriseplan**: Enterprise
    std::shared_ptr<string> planSubscribeType_ = nullptr;
    // The ID of the resource group. This parameter specifies a filter condition for the query.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The website name. This parameter specifies a filter condition for the query.
    std::shared_ptr<string> siteName_ = nullptr;
    // The match mode to search for the website name. Default value: exact. Valid values:
    // 
    // *   **prefix**: match by prefix.
    // *   **suffix**: match by suffix.
    // *   **exact**: exact match.
    // *   **fuzzy**: fuzzy match.
    std::shared_ptr<string> siteSearchType_ = nullptr;
    // The website status. This parameter specifies a filter condition for the query.
    std::shared_ptr<string> status_ = nullptr;
    // The tag filtering rule.
    std::shared_ptr<vector<ListSitesRequestTagFilter>> tagFilter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
