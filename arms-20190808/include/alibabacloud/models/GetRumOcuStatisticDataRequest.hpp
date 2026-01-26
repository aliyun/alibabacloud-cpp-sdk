// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMOCUSTATISTICDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRUMOCUSTATISTICDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumOcuStatisticDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumOcuStatisticDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumOcuStatisticDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetRumOcuStatisticDataRequest() = default ;
    GetRumOcuStatisticDataRequest(const GetRumOcuStatisticDataRequest &) = default ;
    GetRumOcuStatisticDataRequest(GetRumOcuStatisticDataRequest &&) = default ;
    GetRumOcuStatisticDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumOcuStatisticDataRequest() = default ;
    GetRumOcuStatisticDataRequest& operator=(const GetRumOcuStatisticDataRequest &) = default ;
    GetRumOcuStatisticDataRequest& operator=(GetRumOcuStatisticDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(OpType, opType_);
        DARABONBA_ANY_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(OpType, opType_);
        DARABONBA_ANY_FROM_JSON(Value, value_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
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
      inline Filter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // opType Field Functions 
      bool hasOpType() const { return this->opType_ != nullptr;};
      void deleteOpType() { this->opType_ = nullptr;};
      inline string getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
      inline Filter& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline       const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
      Darabonba::Json & getValue() { DARABONBA_GET(value_) };
      inline Filter& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
      inline Filter& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


    protected:
      // The key of the filter condition. Three types of filter conditions are provided:
      // 
      // *   Application name: pid (Note that the application name is displayed, but the application ID is actually specified)
      // *   Application type: siteType
      // *   Data type: dataType
      shared_ptr<string> key_ {};
      // The type of the operator. Valid value: in.
      shared_ptr<string> opType_ {};
      // The value of the filter condition. The value is a JSON array of strings.
      Darabonba::Json value_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->filter_ == nullptr && this->group_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->queryType_ == nullptr
        && this->regionId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetRumOcuStatisticDataRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<GetRumOcuStatisticDataRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<GetRumOcuStatisticDataRequest::Filter>) };
    inline vector<GetRumOcuStatisticDataRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<GetRumOcuStatisticDataRequest::Filter>) };
    inline GetRumOcuStatisticDataRequest& setFilter(const vector<GetRumOcuStatisticDataRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetRumOcuStatisticDataRequest& setFilter(vector<GetRumOcuStatisticDataRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const vector<string> & getGroup() const { DARABONBA_PTR_GET_CONST(group_, vector<string>) };
    inline vector<string> getGroup() { DARABONBA_PTR_GET(group_, vector<string>) };
    inline GetRumOcuStatisticDataRequest& setGroup(const vector<string> & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline GetRumOcuStatisticDataRequest& setGroup(vector<string> && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetRumOcuStatisticDataRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetRumOcuStatisticDataRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline GetRumOcuStatisticDataRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetRumOcuStatisticDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetRumOcuStatisticDataRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The filter condition. Three types of filter conditions are provided:
    // 
    // *   Application name: pid (Note that the application name is displayed, but the application ID is actually specified)
    // *   Application type: siteType
    // *   Data type: dataType
    shared_ptr<vector<GetRumOcuStatisticDataRequest::Filter>> filter_ {};
    // The grouping fields. Valid values:
    // 
    // *   siteType: The total number of OCUs is grouped by application type.
    // *   dataType: The total number of OCUs is grouped by data type.
    // *   pid: The total number of OCUs is grouped by application ID.
    // *   appName: The total number of OCUs is grouped by application name.
    // *   startTime: The total number of OCUs is grouped by start time.
    shared_ptr<vector<string>> group_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> page_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The type of the query. To query non-time series data, set the value to INSTANT. To query time series data, set the value to TIME_SERIES.
    shared_ptr<string> queryType_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The beginning of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
