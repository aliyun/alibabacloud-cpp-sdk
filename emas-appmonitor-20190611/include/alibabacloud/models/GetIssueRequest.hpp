// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETISSUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETISSUEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetIssueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIssueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(BizModule, bizModule_);
      DARABONBA_PTR_TO_JSON(DigestHash, digestHash_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, GetIssueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(BizModule, bizModule_);
      DARABONBA_PTR_FROM_JSON(DigestHash, digestHash_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
    };
    GetIssueRequest() = default ;
    GetIssueRequest(const GetIssueRequest &) = default ;
    GetIssueRequest(GetIssueRequest &&) = default ;
    GetIssueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIssueRequest() = default ;
    GetIssueRequest& operator=(const GetIssueRequest &) = default ;
    GetIssueRequest& operator=(GetIssueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeRange : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeRange& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Granularity, granularity_);
        DARABONBA_PTR_TO_JSON(GranularityUnit, granularityUnit_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, TimeRange& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
        DARABONBA_PTR_FROM_JSON(GranularityUnit, granularityUnit_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      TimeRange() = default ;
      TimeRange(const TimeRange &) = default ;
      TimeRange(TimeRange &&) = default ;
      TimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeRange() = default ;
      TimeRange& operator=(const TimeRange &) = default ;
      TimeRange& operator=(TimeRange &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->granularity_ == nullptr && this->granularityUnit_ == nullptr && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline TimeRange& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // granularity Field Functions 
      bool hasGranularity() const { return this->granularity_ != nullptr;};
      void deleteGranularity() { this->granularity_ = nullptr;};
      inline int32_t getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, 0) };
      inline TimeRange& setGranularity(int32_t granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


      // granularityUnit Field Functions 
      bool hasGranularityUnit() const { return this->granularityUnit_ != nullptr;};
      void deleteGranularityUnit() { this->granularityUnit_ = nullptr;};
      inline string getGranularityUnit() const { DARABONBA_PTR_GET_DEFAULT(granularityUnit_, "") };
      inline TimeRange& setGranularityUnit(string granularityUnit) { DARABONBA_PTR_SET_VALUE(granularityUnit_, granularityUnit) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline TimeRange& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<int32_t> granularity_ {};
      shared_ptr<string> granularityUnit_ {};
      shared_ptr<int64_t> startTime_ {};
    };

    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(SubFilters, subFilters_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(SubFilters, subFilters_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
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
        && this->operator_ == nullptr && this->subFilters_ == nullptr && this->values_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline Filter& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // subFilters Field Functions 
      bool hasSubFilters() const { return this->subFilters_ != nullptr;};
      void deleteSubFilters() { this->subFilters_ = nullptr;};
      inline const vector<string> & getSubFilters() const { DARABONBA_PTR_GET_CONST(subFilters_, vector<string>) };
      inline vector<string> getSubFilters() { DARABONBA_PTR_GET(subFilters_, vector<string>) };
      inline Filter& setSubFilters(const vector<string> & subFilters) { DARABONBA_PTR_SET_VALUE(subFilters_, subFilters) };
      inline Filter& setSubFilters(vector<string> && subFilters) { DARABONBA_PTR_SET_RVALUE(subFilters_, subFilters) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<Darabonba::Json> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getValues() { DARABONBA_PTR_GET(values_, vector<Darabonba::Json>) };
      inline Filter& setValues(const vector<Darabonba::Json> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline Filter& setValues(vector<Darabonba::Json> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> operator_ {};
      shared_ptr<vector<string>> subFilters_ {};
      shared_ptr<vector<Darabonba::Json>> values_ {};
    };

    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->bizModule_ == nullptr && this->digestHash_ == nullptr && this->filter_ == nullptr && this->os_ == nullptr && this->timeRange_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline GetIssueRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // bizModule Field Functions 
    bool hasBizModule() const { return this->bizModule_ != nullptr;};
    void deleteBizModule() { this->bizModule_ = nullptr;};
    inline string getBizModule() const { DARABONBA_PTR_GET_DEFAULT(bizModule_, "") };
    inline GetIssueRequest& setBizModule(string bizModule) { DARABONBA_PTR_SET_VALUE(bizModule_, bizModule) };


    // digestHash Field Functions 
    bool hasDigestHash() const { return this->digestHash_ != nullptr;};
    void deleteDigestHash() { this->digestHash_ = nullptr;};
    inline string getDigestHash() const { DARABONBA_PTR_GET_DEFAULT(digestHash_, "") };
    inline GetIssueRequest& setDigestHash(string digestHash) { DARABONBA_PTR_SET_VALUE(digestHash_, digestHash) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const GetIssueRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, GetIssueRequest::Filter) };
    inline GetIssueRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, GetIssueRequest::Filter) };
    inline GetIssueRequest& setFilter(const GetIssueRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetIssueRequest& setFilter(GetIssueRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline GetIssueRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline const GetIssueRequest::TimeRange & getTimeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, GetIssueRequest::TimeRange) };
    inline GetIssueRequest::TimeRange getTimeRange() { DARABONBA_PTR_GET(timeRange_, GetIssueRequest::TimeRange) };
    inline GetIssueRequest& setTimeRange(const GetIssueRequest::TimeRange & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
    inline GetIssueRequest& setTimeRange(GetIssueRequest::TimeRange && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


  protected:
    // AppKey
    // 
    // This parameter is required.
    shared_ptr<int64_t> appKey_ {};
    // This parameter is required.
    shared_ptr<string> bizModule_ {};
    shared_ptr<string> digestHash_ {};
    shared_ptr<GetIssueRequest::Filter> filter_ {};
    // This parameter is required.
    shared_ptr<string> os_ {};
    // This parameter is required.
    shared_ptr<GetIssueRequest::TimeRange> timeRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
