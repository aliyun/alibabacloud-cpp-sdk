// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULDESKTOPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULDESKTOPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeVulDesktopsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulDesktopsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CveId, cveId_);
      DARABONBA_PTR_TO_JSON(DesktopIdList, desktopIdList_);
      DARABONBA_PTR_TO_JSON(IncludeFixResult, includeFixResult_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OnlyCurrentMonthFixAttempted, onlyCurrentMonthFixAttempted_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PatchId, patchId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SearchRegionId, searchRegionId_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(VulLevel, vulLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulDesktopsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CveId, cveId_);
      DARABONBA_PTR_FROM_JSON(DesktopIdList, desktopIdList_);
      DARABONBA_PTR_FROM_JSON(IncludeFixResult, includeFixResult_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OnlyCurrentMonthFixAttempted, onlyCurrentMonthFixAttempted_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PatchId, patchId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SearchRegionId, searchRegionId_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(VulLevel, vulLevel_);
    };
    DescribeVulDesktopsRequest() = default ;
    DescribeVulDesktopsRequest(const DescribeVulDesktopsRequest &) = default ;
    DescribeVulDesktopsRequest(DescribeVulDesktopsRequest &&) = default ;
    DescribeVulDesktopsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulDesktopsRequest() = default ;
    DescribeVulDesktopsRequest& operator=(const DescribeVulDesktopsRequest &) = default ;
    DescribeVulDesktopsRequest& operator=(DescribeVulDesktopsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cveId_ == nullptr
        && this->desktopIdList_ == nullptr && this->includeFixResult_ == nullptr && this->language_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->onlyCurrentMonthFixAttempted_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->patchId_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->searchRegionId_ == nullptr && this->statusList_ == nullptr && this->vulLevel_ == nullptr; };
    // cveId Field Functions 
    bool hasCveId() const { return this->cveId_ != nullptr;};
    void deleteCveId() { this->cveId_ = nullptr;};
    inline string getCveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
    inline DescribeVulDesktopsRequest& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


    // desktopIdList Field Functions 
    bool hasDesktopIdList() const { return this->desktopIdList_ != nullptr;};
    void deleteDesktopIdList() { this->desktopIdList_ = nullptr;};
    inline const vector<string> & getDesktopIdList() const { DARABONBA_PTR_GET_CONST(desktopIdList_, vector<string>) };
    inline vector<string> getDesktopIdList() { DARABONBA_PTR_GET(desktopIdList_, vector<string>) };
    inline DescribeVulDesktopsRequest& setDesktopIdList(const vector<string> & desktopIdList) { DARABONBA_PTR_SET_VALUE(desktopIdList_, desktopIdList) };
    inline DescribeVulDesktopsRequest& setDesktopIdList(vector<string> && desktopIdList) { DARABONBA_PTR_SET_RVALUE(desktopIdList_, desktopIdList) };


    // includeFixResult Field Functions 
    bool hasIncludeFixResult() const { return this->includeFixResult_ != nullptr;};
    void deleteIncludeFixResult() { this->includeFixResult_ = nullptr;};
    inline bool getIncludeFixResult() const { DARABONBA_PTR_GET_DEFAULT(includeFixResult_, false) };
    inline DescribeVulDesktopsRequest& setIncludeFixResult(bool includeFixResult) { DARABONBA_PTR_SET_VALUE(includeFixResult_, includeFixResult) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeVulDesktopsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeVulDesktopsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeVulDesktopsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // onlyCurrentMonthFixAttempted Field Functions 
    bool hasOnlyCurrentMonthFixAttempted() const { return this->onlyCurrentMonthFixAttempted_ != nullptr;};
    void deleteOnlyCurrentMonthFixAttempted() { this->onlyCurrentMonthFixAttempted_ = nullptr;};
    inline bool getOnlyCurrentMonthFixAttempted() const { DARABONBA_PTR_GET_DEFAULT(onlyCurrentMonthFixAttempted_, false) };
    inline DescribeVulDesktopsRequest& setOnlyCurrentMonthFixAttempted(bool onlyCurrentMonthFixAttempted) { DARABONBA_PTR_SET_VALUE(onlyCurrentMonthFixAttempted_, onlyCurrentMonthFixAttempted) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVulDesktopsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVulDesktopsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // patchId Field Functions 
    bool hasPatchId() const { return this->patchId_ != nullptr;};
    void deletePatchId() { this->patchId_ = nullptr;};
    inline string getPatchId() const { DARABONBA_PTR_GET_DEFAULT(patchId_, "") };
    inline DescribeVulDesktopsRequest& setPatchId(string patchId) { DARABONBA_PTR_SET_VALUE(patchId_, patchId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVulDesktopsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeVulDesktopsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // searchRegionId Field Functions 
    bool hasSearchRegionId() const { return this->searchRegionId_ != nullptr;};
    void deleteSearchRegionId() { this->searchRegionId_ = nullptr;};
    inline string getSearchRegionId() const { DARABONBA_PTR_GET_DEFAULT(searchRegionId_, "") };
    inline DescribeVulDesktopsRequest& setSearchRegionId(string searchRegionId) { DARABONBA_PTR_SET_VALUE(searchRegionId_, searchRegionId) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline DescribeVulDesktopsRequest& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline DescribeVulDesktopsRequest& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // vulLevel Field Functions 
    bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
    void deleteVulLevel() { this->vulLevel_ = nullptr;};
    inline string getVulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, "") };
    inline DescribeVulDesktopsRequest& setVulLevel(string vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


  protected:
    // The CVE ID.
    shared_ptr<string> cveId_ {};
    // The list of cloud computer IDs.
    shared_ptr<vector<string>> desktopIdList_ {};
    // Specifies whether to include patch update results.
    shared_ptr<bool> includeFixResult_ {};
    // The language type of the returned information.
    shared_ptr<string> language_ {};
    // The number of entries per page in a paged query.
    // 
    // Maximum value: 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page.
    shared_ptr<string> nextToken_ {};
    // Specifies whether to include only cloud computers on which fix tasks were executed in the current month.
    shared_ptr<bool> onlyCurrentMonthFixAttempted_ {};
    // The page number of the current page in a paged query.
    shared_ptr<int32_t> pageNumber_ {};
    // The page number of the current page in a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The patch ID.
    shared_ptr<string> patchId_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by WUYING Workspace.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The region ID used to filter cloud computer information for a specific region.
    shared_ptr<string> searchRegionId_ {};
    // The list of vulnerability status details.
    shared_ptr<vector<string>> statusList_ {};
    // The security level of the intrusion prevention event. Valid values:
    // 
    // - **low**: Low risk.
    // - **medium**: Medium risk.
    // - **critical**: High risk.
    // 
    // > If you do not set this parameter, vulnerabilities of all security levels are queried.
    shared_ptr<string> vulLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
