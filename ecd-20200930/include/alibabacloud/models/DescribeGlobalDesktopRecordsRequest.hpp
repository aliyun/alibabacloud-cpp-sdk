// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPRECORDSREQUEST_HPP_
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
  class DescribeGlobalDesktopRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDesktopRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(DesktopStatusList, desktopStatusList_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(ExcludeDesktopStatusList, excludeDesktopStatusList_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDesktopRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(DesktopStatusList, desktopStatusList_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(ExcludeDesktopStatusList, excludeDesktopStatusList_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
    };
    DescribeGlobalDesktopRecordsRequest() = default ;
    DescribeGlobalDesktopRecordsRequest(const DescribeGlobalDesktopRecordsRequest &) = default ;
    DescribeGlobalDesktopRecordsRequest(DescribeGlobalDesktopRecordsRequest &&) = default ;
    DescribeGlobalDesktopRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDesktopRecordsRequest() = default ;
    DescribeGlobalDesktopRecordsRequest& operator=(const DescribeGlobalDesktopRecordsRequest &) = default ;
    DescribeGlobalDesktopRecordsRequest& operator=(DescribeGlobalDesktopRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->desktopName_ == nullptr && this->desktopStatusList_ == nullptr && this->desktopType_ == nullptr && this->endTime_ == nullptr && this->endUserId_ == nullptr
        && this->excludeDesktopStatusList_ == nullptr && this->officeSiteId_ == nullptr && this->orderBy_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->scope_ == nullptr && this->sortType_ == nullptr && this->startTime_ == nullptr
        && this->subPayType_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & getDesktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> getDesktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline DescribeGlobalDesktopRecordsRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline DescribeGlobalDesktopRecordsRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeGlobalDesktopRecordsRequest& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // desktopStatusList Field Functions 
    bool hasDesktopStatusList() const { return this->desktopStatusList_ != nullptr;};
    void deleteDesktopStatusList() { this->desktopStatusList_ = nullptr;};
    inline const vector<string> & getDesktopStatusList() const { DARABONBA_PTR_GET_CONST(desktopStatusList_, vector<string>) };
    inline vector<string> getDesktopStatusList() { DARABONBA_PTR_GET(desktopStatusList_, vector<string>) };
    inline DescribeGlobalDesktopRecordsRequest& setDesktopStatusList(const vector<string> & desktopStatusList) { DARABONBA_PTR_SET_VALUE(desktopStatusList_, desktopStatusList) };
    inline DescribeGlobalDesktopRecordsRequest& setDesktopStatusList(vector<string> && desktopStatusList) { DARABONBA_PTR_SET_RVALUE(desktopStatusList_, desktopStatusList) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline DescribeGlobalDesktopRecordsRequest& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeGlobalDesktopRecordsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeGlobalDesktopRecordsRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // excludeDesktopStatusList Field Functions 
    bool hasExcludeDesktopStatusList() const { return this->excludeDesktopStatusList_ != nullptr;};
    void deleteExcludeDesktopStatusList() { this->excludeDesktopStatusList_ = nullptr;};
    inline const vector<string> & getExcludeDesktopStatusList() const { DARABONBA_PTR_GET_CONST(excludeDesktopStatusList_, vector<string>) };
    inline vector<string> getExcludeDesktopStatusList() { DARABONBA_PTR_GET(excludeDesktopStatusList_, vector<string>) };
    inline DescribeGlobalDesktopRecordsRequest& setExcludeDesktopStatusList(const vector<string> & excludeDesktopStatusList) { DARABONBA_PTR_SET_VALUE(excludeDesktopStatusList_, excludeDesktopStatusList) };
    inline DescribeGlobalDesktopRecordsRequest& setExcludeDesktopStatusList(vector<string> && excludeDesktopStatusList) { DARABONBA_PTR_SET_RVALUE(excludeDesktopStatusList_, excludeDesktopStatusList) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeGlobalDesktopRecordsRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DescribeGlobalDesktopRecordsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGlobalDesktopRecordsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGlobalDesktopRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGlobalDesktopRecordsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeGlobalDesktopRecordsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeGlobalDesktopRecordsRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline string getSortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, "") };
    inline DescribeGlobalDesktopRecordsRequest& setSortType(string sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeGlobalDesktopRecordsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subPayType Field Functions 
    bool hasSubPayType() const { return this->subPayType_ != nullptr;};
    void deleteSubPayType() { this->subPayType_ = nullptr;};
    inline string getSubPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
    inline DescribeGlobalDesktopRecordsRequest& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


  protected:
    // The cloud computer IDs. You can specify 1 to 100 office network IDs.
    shared_ptr<vector<string>> desktopId_ {};
    // The name of the cloud computer.
    shared_ptr<string> desktopName_ {};
    shared_ptr<vector<string>> desktopStatusList_ {};
    // The cloud computer type. You can call the [DescribeDesktopTypes](https://help.aliyun.com/document_detail/188882.html) operation to query the IDs of the specifications supported by the cloud computer.
    shared_ptr<string> desktopType_ {};
    // The end time. The interval between the start time and end time can be up to 30 days. Supported formats:
    // 
    // *   Format: YYYY-MM-DDThh:mm:ssZ.
    shared_ptr<string> endTime_ {};
    // The end user ID.
    shared_ptr<string> endUserId_ {};
    shared_ptr<vector<string>> excludeDesktopStatusList_ {};
    // The office network IDs.
    shared_ptr<string> officeSiteId_ {};
    // The sorting field. If this parameter is not provided, results are sorted by creation time in descending order. Valid values:
    // 
    // *   uptime: indicates that the cloud computers are sorted by startup duration.
    shared_ptr<string> orderBy_ {};
    // The page number of the current page.\\
    // Default value: 1
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Valid values: 1 to 100.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    // 
    // *   China (Shanghai)
    // *   Singapore
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The query range. This parameter is empty by default. Optional values are:
    // 
    // *   ADVANCED: indicates that statistics such as the connection duration are queried.
    shared_ptr<string> scope_ {};
    // The sorting method. Default value: ascending. Valid value:
    // 
    // *   Asc: ascending order
    // *   Desc: descending.
    shared_ptr<string> sortType_ {};
    // The start time. Supported formats:
    // 
    // *   Format: YYYY-MM-DDThh:mm:ssZ.
    shared_ptr<string> startTime_ {};
    // The way to purchase cloud computers. Valid values:
    // 
    // *   prePaid: The monthly purchase is unlimited.
    // *   postPaid: pay-as-you-go
    // *   monthPackage: monthly duration.
    shared_ptr<string> subPayType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
