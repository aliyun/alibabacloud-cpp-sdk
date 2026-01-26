// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNTHETICDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNTHETICDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ExactFilters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExactFilters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(OpType, opType_);
        DARABONBA_ANY_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ExactFilters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(OpType, opType_);
        DARABONBA_ANY_FROM_JSON(Value, value_);
      };
      ExactFilters() = default ;
      ExactFilters(const ExactFilters &) = default ;
      ExactFilters(ExactFilters &&) = default ;
      ExactFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExactFilters() = default ;
      ExactFilters& operator=(const ExactFilters &) = default ;
      ExactFilters& operator=(ExactFilters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->opType_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline ExactFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // opType Field Functions 
      bool hasOpType() const { return this->opType_ != nullptr;};
      void deleteOpType() { this->opType_ = nullptr;};
      inline string getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
      inline ExactFilters& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline       const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
      Darabonba::Json & getValue() { DARABONBA_GET(value_) };
      inline ExactFilters& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
      inline ExactFilters& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


    protected:
      // A reserved field.
      shared_ptr<string> key_ {};
      // A reserved field.
      shared_ptr<string> opType_ {};
      // A reserved field.
      Darabonba::Json value_ {};
    };

    class AdvancedFilters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvancedFilters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(OpType, opType_);
        DARABONBA_ANY_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, AdvancedFilters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(OpType, opType_);
        DARABONBA_ANY_FROM_JSON(Value, value_);
      };
      AdvancedFilters() = default ;
      AdvancedFilters(const AdvancedFilters &) = default ;
      AdvancedFilters(AdvancedFilters &&) = default ;
      AdvancedFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdvancedFilters() = default ;
      AdvancedFilters& operator=(const AdvancedFilters &) = default ;
      AdvancedFilters& operator=(AdvancedFilters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->opType_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline AdvancedFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // opType Field Functions 
      bool hasOpType() const { return this->opType_ != nullptr;};
      void deleteOpType() { this->opType_ = nullptr;};
      inline string getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
      inline AdvancedFilters& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline       const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
      Darabonba::Json & getValue() { DARABONBA_GET(value_) };
      inline AdvancedFilters& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
      inline AdvancedFilters& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


    protected:
      // The filter condition. The taskType and dataId fields are supported.
      // 
      // *   To query the list of synthetic test results, set the key to taskType.
      // *   To query the result details of a synthetic monitoring task, set the key to dataId.
      shared_ptr<string> key_ {};
      // The type of the filter condition. Valid values: eq and in. eq: equal to. in: include.
      shared_ptr<string> opType_ {};
      // The value of the filter condition. The type of the task. Valid values: 1: ICMP 2: TCP 3: DNS 4: HTTP 5: website speed measurement 6: file download
      Darabonba::Json value_ {};
    };

    virtual bool empty() const override { return this->advancedFilters_ == nullptr
        && this->category_ == nullptr && this->detail_ == nullptr && this->endTime_ == nullptr && this->exactFilters_ == nullptr && this->filters_ == nullptr
        && this->order_ == nullptr && this->orderBy_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->startTime_ == nullptr && this->syntheticType_ == nullptr; };
    // advancedFilters Field Functions 
    bool hasAdvancedFilters() const { return this->advancedFilters_ != nullptr;};
    void deleteAdvancedFilters() { this->advancedFilters_ = nullptr;};
    inline const vector<ListSyntheticDetailRequest::AdvancedFilters> & getAdvancedFilters() const { DARABONBA_PTR_GET_CONST(advancedFilters_, vector<ListSyntheticDetailRequest::AdvancedFilters>) };
    inline vector<ListSyntheticDetailRequest::AdvancedFilters> getAdvancedFilters() { DARABONBA_PTR_GET(advancedFilters_, vector<ListSyntheticDetailRequest::AdvancedFilters>) };
    inline ListSyntheticDetailRequest& setAdvancedFilters(const vector<ListSyntheticDetailRequest::AdvancedFilters> & advancedFilters) { DARABONBA_PTR_SET_VALUE(advancedFilters_, advancedFilters) };
    inline ListSyntheticDetailRequest& setAdvancedFilters(vector<ListSyntheticDetailRequest::AdvancedFilters> && advancedFilters) { DARABONBA_PTR_SET_RVALUE(advancedFilters_, advancedFilters) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListSyntheticDetailRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline ListSyntheticDetailRequest& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListSyntheticDetailRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // exactFilters Field Functions 
    bool hasExactFilters() const { return this->exactFilters_ != nullptr;};
    void deleteExactFilters() { this->exactFilters_ = nullptr;};
    inline const vector<ListSyntheticDetailRequest::ExactFilters> & getExactFilters() const { DARABONBA_PTR_GET_CONST(exactFilters_, vector<ListSyntheticDetailRequest::ExactFilters>) };
    inline vector<ListSyntheticDetailRequest::ExactFilters> getExactFilters() { DARABONBA_PTR_GET(exactFilters_, vector<ListSyntheticDetailRequest::ExactFilters>) };
    inline ListSyntheticDetailRequest& setExactFilters(const vector<ListSyntheticDetailRequest::ExactFilters> & exactFilters) { DARABONBA_PTR_SET_VALUE(exactFilters_, exactFilters) };
    inline ListSyntheticDetailRequest& setExactFilters(vector<ListSyntheticDetailRequest::ExactFilters> && exactFilters) { DARABONBA_PTR_SET_RVALUE(exactFilters_, exactFilters) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const map<string, string> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, map<string, string>) };
    inline map<string, string> getFilters() { DARABONBA_PTR_GET(filters_, map<string, string>) };
    inline ListSyntheticDetailRequest& setFilters(const map<string, string> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ListSyntheticDetailRequest& setFilters(map<string, string> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListSyntheticDetailRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListSyntheticDetailRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListSyntheticDetailRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSyntheticDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSyntheticDetailRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListSyntheticDetailRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // syntheticType Field Functions 
    bool hasSyntheticType() const { return this->syntheticType_ != nullptr;};
    void deleteSyntheticType() { this->syntheticType_ = nullptr;};
    inline int32_t getSyntheticType() const { DARABONBA_PTR_GET_DEFAULT(syntheticType_, 0) };
    inline ListSyntheticDetailRequest& setSyntheticType(int32_t syntheticType) { DARABONBA_PTR_SET_VALUE(syntheticType_, syntheticType) };


  protected:
    // An array of filter conditions. This parameter is required.
    // 
    // *   To query the list of synthetic test results, set this parameter in the following format: [{"Key":"taskType","OpType":"in","Value":[Task type]}].
    // *   To query the result details of a synthetic monitoring task, set this parameter in the following format: [{"Key":"dataId","OpType":"eq","Value":"dataId"}]. dataId is returned when you query the list of synthetic test results.
    shared_ptr<vector<ListSyntheticDetailRequest::AdvancedFilters>> advancedFilters_ {};
    // The type of the results. Set the value to SYNTHETIC.
    shared_ptr<string> category_ {};
    // The type of the list that contains the results. This parameter is required. Valid values:
    // 
    // *   ICMP_LIST
    // *   TCP_LIST
    // *   DNS_LIST
    // *   HTTP_LIST
    // *   WEBSITE_LIST
    // *   DOWNLOAD_LIST
    // *   ALL
    shared_ptr<string> detail_ {};
    // The timestamp of the end time of the query. Unit: milliseconds.
    shared_ptr<int64_t> endTime_ {};
    // A reserved field.
    shared_ptr<vector<ListSyntheticDetailRequest::ExactFilters>> exactFilters_ {};
    // The filter condition. This parameter is required.
    // 
    // *   To query the result of a synthetic monitoring task, set this parameter in the following format: {"taskId":"${taskId}"}.
    // *   To query the result details of a synthetic monitoring task, set this parameter in the following format: {"taskId":"${taskId}","dataId":"${dataId}"}.
    shared_ptr<map<string, string>> filters_ {};
    // The order in which results are sorted. Valid values:
    // 
    // - `ASC`: ascending order
    // - `DESC`: descending order
    shared_ptr<string> order_ {};
    // The field based on which results are sorted. Set the value to timestamp.
    shared_ptr<string> orderBy_ {};
    // The page number. Pages start from page 1.
    shared_ptr<int32_t> page_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the region. Set the value to cn-hangzhou.
    shared_ptr<string> regionId_ {};
    // The timestamp of the start time of the query. Unit: milliseconds.
    shared_ptr<int64_t> startTime_ {};
    // The type of the synthetic test. Valid values: 1 and 2. 1 represents an immediate test, and 2 represents a scheduled test.
    shared_ptr<int32_t> syntheticType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
