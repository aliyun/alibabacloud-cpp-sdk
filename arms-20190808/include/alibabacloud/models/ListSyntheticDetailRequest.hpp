// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNTHETICDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNTHETICDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSyntheticDetailRequestAdvancedFilters.hpp>
#include <alibabacloud/models/ListSyntheticDetailRequestExactFilters.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListSyntheticDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSyntheticDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedFilters, advancedFilters_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExactFilters, exactFilters_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SyntheticType, syntheticType_);
    };
    friend void from_json(const Darabonba::Json& j, ListSyntheticDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedFilters, advancedFilters_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExactFilters, exactFilters_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SyntheticType, syntheticType_);
    };
    ListSyntheticDetailRequest() = default ;
    ListSyntheticDetailRequest(const ListSyntheticDetailRequest &) = default ;
    ListSyntheticDetailRequest(ListSyntheticDetailRequest &&) = default ;
    ListSyntheticDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSyntheticDetailRequest() = default ;
    ListSyntheticDetailRequest& operator=(const ListSyntheticDetailRequest &) = default ;
    ListSyntheticDetailRequest& operator=(ListSyntheticDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->advancedFilters_ != nullptr
        && this->category_ != nullptr && this->detail_ != nullptr && this->endTime_ != nullptr && this->exactFilters_ != nullptr && this->filters_ != nullptr
        && this->order_ != nullptr && this->orderBy_ != nullptr && this->page_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr
        && this->startTime_ != nullptr && this->syntheticType_ != nullptr; };
    // advancedFilters Field Functions 
    bool hasAdvancedFilters() const { return this->advancedFilters_ != nullptr;};
    void deleteAdvancedFilters() { this->advancedFilters_ = nullptr;};
    inline const vector<ListSyntheticDetailRequestAdvancedFilters> & advancedFilters() const { DARABONBA_PTR_GET_CONST(advancedFilters_, vector<ListSyntheticDetailRequestAdvancedFilters>) };
    inline vector<ListSyntheticDetailRequestAdvancedFilters> advancedFilters() { DARABONBA_PTR_GET(advancedFilters_, vector<ListSyntheticDetailRequestAdvancedFilters>) };
    inline ListSyntheticDetailRequest& setAdvancedFilters(const vector<ListSyntheticDetailRequestAdvancedFilters> & advancedFilters) { DARABONBA_PTR_SET_VALUE(advancedFilters_, advancedFilters) };
    inline ListSyntheticDetailRequest& setAdvancedFilters(vector<ListSyntheticDetailRequestAdvancedFilters> && advancedFilters) { DARABONBA_PTR_SET_RVALUE(advancedFilters_, advancedFilters) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListSyntheticDetailRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline ListSyntheticDetailRequest& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListSyntheticDetailRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // exactFilters Field Functions 
    bool hasExactFilters() const { return this->exactFilters_ != nullptr;};
    void deleteExactFilters() { this->exactFilters_ = nullptr;};
    inline const vector<ListSyntheticDetailRequestExactFilters> & exactFilters() const { DARABONBA_PTR_GET_CONST(exactFilters_, vector<ListSyntheticDetailRequestExactFilters>) };
    inline vector<ListSyntheticDetailRequestExactFilters> exactFilters() { DARABONBA_PTR_GET(exactFilters_, vector<ListSyntheticDetailRequestExactFilters>) };
    inline ListSyntheticDetailRequest& setExactFilters(const vector<ListSyntheticDetailRequestExactFilters> & exactFilters) { DARABONBA_PTR_SET_VALUE(exactFilters_, exactFilters) };
    inline ListSyntheticDetailRequest& setExactFilters(vector<ListSyntheticDetailRequestExactFilters> && exactFilters) { DARABONBA_PTR_SET_RVALUE(exactFilters_, exactFilters) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const map<string, string> & filters() const { DARABONBA_PTR_GET_CONST(filters_, map<string, string>) };
    inline map<string, string> filters() { DARABONBA_PTR_GET(filters_, map<string, string>) };
    inline ListSyntheticDetailRequest& setFilters(const map<string, string> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ListSyntheticDetailRequest& setFilters(map<string, string> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListSyntheticDetailRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListSyntheticDetailRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListSyntheticDetailRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSyntheticDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSyntheticDetailRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListSyntheticDetailRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // syntheticType Field Functions 
    bool hasSyntheticType() const { return this->syntheticType_ != nullptr;};
    void deleteSyntheticType() { this->syntheticType_ = nullptr;};
    inline int32_t syntheticType() const { DARABONBA_PTR_GET_DEFAULT(syntheticType_, 0) };
    inline ListSyntheticDetailRequest& setSyntheticType(int32_t syntheticType) { DARABONBA_PTR_SET_VALUE(syntheticType_, syntheticType) };


  protected:
    // An array of filter conditions. This parameter is required.
    // 
    // *   To query the list of synthetic test results, set this parameter in the following format: [{"Key":"taskType","OpType":"in","Value":[Task type]}].
    // *   To query the result details of a synthetic monitoring task, set this parameter in the following format: [{"Key":"dataId","OpType":"eq","Value":"dataId"}]. dataId is returned when you query the list of synthetic test results.
    std::shared_ptr<vector<ListSyntheticDetailRequestAdvancedFilters>> advancedFilters_ = nullptr;
    // The type of the results. Set the value to SYNTHETIC.
    std::shared_ptr<string> category_ = nullptr;
    // The type of the list that contains the results. This parameter is required. Valid values:
    // 
    // *   ICMP_LIST
    // *   TCP_LIST
    // *   DNS_LIST
    // *   HTTP_LIST
    // *   WEBSITE_LIST
    // *   DOWNLOAD_LIST
    // *   ALL
    std::shared_ptr<string> detail_ = nullptr;
    // The timestamp of the end time of the query. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // A reserved field.
    std::shared_ptr<vector<ListSyntheticDetailRequestExactFilters>> exactFilters_ = nullptr;
    // The filter condition. This parameter is required.
    // 
    // *   To query the result of a synthetic monitoring task, set this parameter in the following format: {"taskId":"${taskId}"}.
    // *   To query the result details of a synthetic monitoring task, set this parameter in the following format: {"taskId":"${taskId}","dataId":"${dataId}"}.
    std::shared_ptr<map<string, string>> filters_ = nullptr;
    // The order in which results are sorted. Valid values:
    // 
    // - `ASC`: ascending order
    // - `DESC`: descending order
    std::shared_ptr<string> order_ = nullptr;
    // The field based on which results are sorted. Set the value to timestamp.
    std::shared_ptr<string> orderBy_ = nullptr;
    // The page number. Pages start from page 1.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the region. Set the value to cn-hangzhou.
    std::shared_ptr<string> regionId_ = nullptr;
    // The timestamp of the start time of the query. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The type of the synthetic test. Valid values: 1 and 2. 1 represents an immediate test, and 2 represents a scheduled test.
    std::shared_ptr<int32_t> syntheticType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
