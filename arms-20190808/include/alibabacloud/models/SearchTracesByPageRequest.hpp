// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACESBYPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACESBYPAGEREQUEST_HPP_
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
  class SearchTracesByPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTracesByPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExclusionFilters, exclusionFilters_);
      DARABONBA_PTR_TO_JSON(IsError, isError_);
      DARABONBA_PTR_TO_JSON(MinDuration, minDuration_);
      DARABONBA_PTR_TO_JSON(OperationName, operationName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Reverse, reverse_);
      DARABONBA_PTR_TO_JSON(ServiceIp, serviceIp_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTracesByPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExclusionFilters, exclusionFilters_);
      DARABONBA_PTR_FROM_JSON(IsError, isError_);
      DARABONBA_PTR_FROM_JSON(MinDuration, minDuration_);
      DARABONBA_PTR_FROM_JSON(OperationName, operationName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Reverse, reverse_);
      DARABONBA_PTR_FROM_JSON(ServiceIp, serviceIp_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    SearchTracesByPageRequest() = default ;
    SearchTracesByPageRequest(const SearchTracesByPageRequest &) = default ;
    SearchTracesByPageRequest(SearchTracesByPageRequest &&) = default ;
    SearchTracesByPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTracesByPageRequest() = default ;
    SearchTracesByPageRequest& operator=(const SearchTracesByPageRequest &) = default ;
    SearchTracesByPageRequest& operator=(SearchTracesByPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag. The following system preset fields are provided:
      // 
      // *   traceId: the ID of the trace.
      // *   serverApp: the name of the server application.
      // *   clientApp: the name of the client application.
      // *   service: the name of the interface.
      // *   rpc: the type of the call.
      // *   msOfSpan: the duration exceeds a specific value.
      // *   clientIp: the IP address of the client.
      // *   serverIp: the IP address of the server.
      // *   isError: specifies whether the call is abnormal.
      shared_ptr<string> key_ {};
      // The value of the tag.
      shared_ptr<string> value_ {};
    };

    class ExclusionFilters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExclusionFilters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ExclusionFilters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ExclusionFilters() = default ;
      ExclusionFilters(const ExclusionFilters &) = default ;
      ExclusionFilters(ExclusionFilters &&) = default ;
      ExclusionFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExclusionFilters() = default ;
      ExclusionFilters& operator=(const ExclusionFilters &) = default ;
      ExclusionFilters& operator=(ExclusionFilters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline ExclusionFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ExclusionFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key that is used to filter the query results.
      shared_ptr<string> key_ {};
      // The value of the key that is used to filter the query results.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->exclusionFilters_ == nullptr && this->isError_ == nullptr && this->minDuration_ == nullptr && this->operationName_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->pid_ == nullptr && this->regionId_ == nullptr && this->reverse_ == nullptr && this->serviceIp_ == nullptr
        && this->serviceName_ == nullptr && this->startTime_ == nullptr && this->tags_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline SearchTracesByPageRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // exclusionFilters Field Functions 
    bool hasExclusionFilters() const { return this->exclusionFilters_ != nullptr;};
    void deleteExclusionFilters() { this->exclusionFilters_ = nullptr;};
    inline const vector<SearchTracesByPageRequest::ExclusionFilters> & getExclusionFilters() const { DARABONBA_PTR_GET_CONST(exclusionFilters_, vector<SearchTracesByPageRequest::ExclusionFilters>) };
    inline vector<SearchTracesByPageRequest::ExclusionFilters> getExclusionFilters() { DARABONBA_PTR_GET(exclusionFilters_, vector<SearchTracesByPageRequest::ExclusionFilters>) };
    inline SearchTracesByPageRequest& setExclusionFilters(const vector<SearchTracesByPageRequest::ExclusionFilters> & exclusionFilters) { DARABONBA_PTR_SET_VALUE(exclusionFilters_, exclusionFilters) };
    inline SearchTracesByPageRequest& setExclusionFilters(vector<SearchTracesByPageRequest::ExclusionFilters> && exclusionFilters) { DARABONBA_PTR_SET_RVALUE(exclusionFilters_, exclusionFilters) };


    // isError Field Functions 
    bool hasIsError() const { return this->isError_ != nullptr;};
    void deleteIsError() { this->isError_ = nullptr;};
    inline bool getIsError() const { DARABONBA_PTR_GET_DEFAULT(isError_, false) };
    inline SearchTracesByPageRequest& setIsError(bool isError) { DARABONBA_PTR_SET_VALUE(isError_, isError) };


    // minDuration Field Functions 
    bool hasMinDuration() const { return this->minDuration_ != nullptr;};
    void deleteMinDuration() { this->minDuration_ = nullptr;};
    inline int64_t getMinDuration() const { DARABONBA_PTR_GET_DEFAULT(minDuration_, 0L) };
    inline SearchTracesByPageRequest& setMinDuration(int64_t minDuration) { DARABONBA_PTR_SET_VALUE(minDuration_, minDuration) };


    // operationName Field Functions 
    bool hasOperationName() const { return this->operationName_ != nullptr;};
    void deleteOperationName() { this->operationName_ = nullptr;};
    inline string getOperationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
    inline SearchTracesByPageRequest& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchTracesByPageRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchTracesByPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline SearchTracesByPageRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchTracesByPageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reverse Field Functions 
    bool hasReverse() const { return this->reverse_ != nullptr;};
    void deleteReverse() { this->reverse_ = nullptr;};
    inline bool getReverse() const { DARABONBA_PTR_GET_DEFAULT(reverse_, false) };
    inline SearchTracesByPageRequest& setReverse(bool reverse) { DARABONBA_PTR_SET_VALUE(reverse_, reverse) };


    // serviceIp Field Functions 
    bool hasServiceIp() const { return this->serviceIp_ != nullptr;};
    void deleteServiceIp() { this->serviceIp_ = nullptr;};
    inline string getServiceIp() const { DARABONBA_PTR_GET_DEFAULT(serviceIp_, "") };
    inline SearchTracesByPageRequest& setServiceIp(string serviceIp) { DARABONBA_PTR_SET_VALUE(serviceIp_, serviceIp) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline SearchTracesByPageRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SearchTracesByPageRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<SearchTracesByPageRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<SearchTracesByPageRequest::Tags>) };
    inline vector<SearchTracesByPageRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<SearchTracesByPageRequest::Tags>) };
    inline SearchTracesByPageRequest& setTags(const vector<SearchTracesByPageRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline SearchTracesByPageRequest& setTags(vector<SearchTracesByPageRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The end of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The filter conditions.
    shared_ptr<vector<SearchTracesByPageRequest::ExclusionFilters>> exclusionFilters_ {};
    // Specifies whether to include the traces of abnormal calls.
    // 
    // *   `true`: No
    // *   `false` (default): Yes
    shared_ptr<bool> isError_ {};
    // The minimum amount of time consumed by traces. Unit: milliseconds.
    shared_ptr<int64_t> minDuration_ {};
    // The name of the traced span.
    shared_ptr<string> operationName_ {};
    // The number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The application ID.
    shared_ptr<string> pid_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Specifies whether to sort the query results in chronological order or reverse chronological order. Default value: `false`.
    // 
    // *   `true`: sorts the query results in reverse chronological order.
    // *   `false`: sorts the query results in chronological order.
    shared_ptr<bool> reverse_ {};
    // The IP address of the host where the application resides.
    shared_ptr<string> serviceIp_ {};
    // The name of the application.
    shared_ptr<string> serviceName_ {};
    // The beginning of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The list of tags.
    shared_ptr<vector<SearchTracesByPageRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
