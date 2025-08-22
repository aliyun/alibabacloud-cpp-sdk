// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchTracesRequestExclusionFilters.hpp>
#include <alibabacloud/models/SearchTracesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchTracesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTracesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExclusionFilters, exclusionFilters_);
      DARABONBA_PTR_TO_JSON(MinDuration, minDuration_);
      DARABONBA_PTR_TO_JSON(OperationName, operationName_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Reverse, reverse_);
      DARABONBA_PTR_TO_JSON(ServiceIp, serviceIp_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTracesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExclusionFilters, exclusionFilters_);
      DARABONBA_PTR_FROM_JSON(MinDuration, minDuration_);
      DARABONBA_PTR_FROM_JSON(OperationName, operationName_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Reverse, reverse_);
      DARABONBA_PTR_FROM_JSON(ServiceIp, serviceIp_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    SearchTracesRequest() = default ;
    SearchTracesRequest(const SearchTracesRequest &) = default ;
    SearchTracesRequest(SearchTracesRequest &&) = default ;
    SearchTracesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTracesRequest() = default ;
    SearchTracesRequest& operator=(const SearchTracesRequest &) = default ;
    SearchTracesRequest& operator=(SearchTracesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->exclusionFilters_ != nullptr && this->minDuration_ != nullptr && this->operationName_ != nullptr && this->pid_ != nullptr && this->regionId_ != nullptr
        && this->reverse_ != nullptr && this->serviceIp_ != nullptr && this->serviceName_ != nullptr && this->startTime_ != nullptr && this->tag_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline SearchTracesRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // exclusionFilters Field Functions 
    bool hasExclusionFilters() const { return this->exclusionFilters_ != nullptr;};
    void deleteExclusionFilters() { this->exclusionFilters_ = nullptr;};
    inline const vector<SearchTracesRequestExclusionFilters> & exclusionFilters() const { DARABONBA_PTR_GET_CONST(exclusionFilters_, vector<SearchTracesRequestExclusionFilters>) };
    inline vector<SearchTracesRequestExclusionFilters> exclusionFilters() { DARABONBA_PTR_GET(exclusionFilters_, vector<SearchTracesRequestExclusionFilters>) };
    inline SearchTracesRequest& setExclusionFilters(const vector<SearchTracesRequestExclusionFilters> & exclusionFilters) { DARABONBA_PTR_SET_VALUE(exclusionFilters_, exclusionFilters) };
    inline SearchTracesRequest& setExclusionFilters(vector<SearchTracesRequestExclusionFilters> && exclusionFilters) { DARABONBA_PTR_SET_RVALUE(exclusionFilters_, exclusionFilters) };


    // minDuration Field Functions 
    bool hasMinDuration() const { return this->minDuration_ != nullptr;};
    void deleteMinDuration() { this->minDuration_ = nullptr;};
    inline int64_t minDuration() const { DARABONBA_PTR_GET_DEFAULT(minDuration_, 0L) };
    inline SearchTracesRequest& setMinDuration(int64_t minDuration) { DARABONBA_PTR_SET_VALUE(minDuration_, minDuration) };


    // operationName Field Functions 
    bool hasOperationName() const { return this->operationName_ != nullptr;};
    void deleteOperationName() { this->operationName_ = nullptr;};
    inline string operationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
    inline SearchTracesRequest& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline SearchTracesRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchTracesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reverse Field Functions 
    bool hasReverse() const { return this->reverse_ != nullptr;};
    void deleteReverse() { this->reverse_ = nullptr;};
    inline bool reverse() const { DARABONBA_PTR_GET_DEFAULT(reverse_, false) };
    inline SearchTracesRequest& setReverse(bool reverse) { DARABONBA_PTR_SET_VALUE(reverse_, reverse) };


    // serviceIp Field Functions 
    bool hasServiceIp() const { return this->serviceIp_ != nullptr;};
    void deleteServiceIp() { this->serviceIp_ = nullptr;};
    inline string serviceIp() const { DARABONBA_PTR_GET_DEFAULT(serviceIp_, "") };
    inline SearchTracesRequest& setServiceIp(string serviceIp) { DARABONBA_PTR_SET_VALUE(serviceIp_, serviceIp) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline SearchTracesRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SearchTracesRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<SearchTracesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<SearchTracesRequestTag>) };
    inline vector<SearchTracesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<SearchTracesRequestTag>) };
    inline SearchTracesRequest& setTag(const vector<SearchTracesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline SearchTracesRequest& setTag(vector<SearchTracesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The end of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The filter conditions.
    std::shared_ptr<vector<SearchTracesRequestExclusionFilters>> exclusionFilters_ = nullptr;
    // The minimum amount of time consumed by traces. Unit: milliseconds.
    std::shared_ptr<int64_t> minDuration_ = nullptr;
    // The name of the traced span.
    std::shared_ptr<string> operationName_ = nullptr;
    // The application ID.
    std::shared_ptr<string> pid_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to sort the query results in chronological order or reverse chronological order. Default value: `false`.
    // 
    // *   `true`: sorts the query results in reverse chronological order.
    // *   `false`: sorts the query results in chronological order.
    std::shared_ptr<bool> reverse_ = nullptr;
    // The IP address of the host where the application resides.
    std::shared_ptr<string> serviceIp_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The beginning of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<SearchTracesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
