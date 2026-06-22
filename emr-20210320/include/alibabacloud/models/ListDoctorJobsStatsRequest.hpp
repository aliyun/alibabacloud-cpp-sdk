// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORJOBSSTATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORJOBSSTATSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorJobsStatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorJobsStatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(EndRange, endRange_);
      DARABONBA_PTR_TO_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartRange, startRange_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorJobsStatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(EndRange, endRange_);
      DARABONBA_PTR_FROM_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartRange, startRange_);
    };
    ListDoctorJobsStatsRequest() = default ;
    ListDoctorJobsStatsRequest(const ListDoctorJobsStatsRequest &) = default ;
    ListDoctorJobsStatsRequest(ListDoctorJobsStatsRequest &&) = default ;
    ListDoctorJobsStatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorJobsStatsRequest() = default ;
    ListDoctorJobsStatsRequest& operator=(const ListDoctorJobsStatsRequest &) = default ;
    ListDoctorJobsStatsRequest& operator=(ListDoctorJobsStatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StartRange : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StartRange& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, StartRange& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      StartRange() = default ;
      StartRange(const StartRange &) = default ;
      StartRange(StartRange &&) = default ;
      StartRange(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StartRange() = default ;
      StartRange& operator=(const StartRange &) = default ;
      StartRange& operator=(StartRange &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline StartRange& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline StartRange& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The end of the time range during which jobs were submitted. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The beginning of the time range during which jobs were submitted. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
    };

    class EndRange : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndRange& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, EndRange& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      EndRange() = default ;
      EndRange(const EndRange &) = default ;
      EndRange(EndRange &&) = default ;
      EndRange(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndRange() = default ;
      EndRange& operator=(const EndRange &) = default ;
      EndRange& operator=(EndRange &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline EndRange& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline EndRange& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The end of the time range during which jobs ended. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> endTime_ {};
      // The beginning of the time range during which jobs ended. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->endRange_ == nullptr && this->groupBy_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->orderBy_ == nullptr
        && this->orderType_ == nullptr && this->regionId_ == nullptr && this->startRange_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListDoctorJobsStatsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // endRange Field Functions 
    bool hasEndRange() const { return this->endRange_ != nullptr;};
    void deleteEndRange() { this->endRange_ = nullptr;};
    inline const ListDoctorJobsStatsRequest::EndRange & getEndRange() const { DARABONBA_PTR_GET_CONST(endRange_, ListDoctorJobsStatsRequest::EndRange) };
    inline ListDoctorJobsStatsRequest::EndRange getEndRange() { DARABONBA_PTR_GET(endRange_, ListDoctorJobsStatsRequest::EndRange) };
    inline ListDoctorJobsStatsRequest& setEndRange(const ListDoctorJobsStatsRequest::EndRange & endRange) { DARABONBA_PTR_SET_VALUE(endRange_, endRange) };
    inline ListDoctorJobsStatsRequest& setEndRange(ListDoctorJobsStatsRequest::EndRange && endRange) { DARABONBA_PTR_SET_RVALUE(endRange_, endRange) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline const vector<string> & getGroupBy() const { DARABONBA_PTR_GET_CONST(groupBy_, vector<string>) };
    inline vector<string> getGroupBy() { DARABONBA_PTR_GET(groupBy_, vector<string>) };
    inline ListDoctorJobsStatsRequest& setGroupBy(const vector<string> & groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };
    inline ListDoctorJobsStatsRequest& setGroupBy(vector<string> && groupBy) { DARABONBA_PTR_SET_RVALUE(groupBy_, groupBy) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDoctorJobsStatsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDoctorJobsStatsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListDoctorJobsStatsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListDoctorJobsStatsRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDoctorJobsStatsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startRange Field Functions 
    bool hasStartRange() const { return this->startRange_ != nullptr;};
    void deleteStartRange() { this->startRange_ = nullptr;};
    inline const ListDoctorJobsStatsRequest::StartRange & getStartRange() const { DARABONBA_PTR_GET_CONST(startRange_, ListDoctorJobsStatsRequest::StartRange) };
    inline ListDoctorJobsStatsRequest::StartRange getStartRange() { DARABONBA_PTR_GET(startRange_, ListDoctorJobsStatsRequest::StartRange) };
    inline ListDoctorJobsStatsRequest& setStartRange(const ListDoctorJobsStatsRequest::StartRange & startRange) { DARABONBA_PTR_SET_VALUE(startRange_, startRange) };
    inline ListDoctorJobsStatsRequest& setStartRange(ListDoctorJobsStatsRequest::StartRange && startRange) { DARABONBA_PTR_SET_RVALUE(startRange_, startRange) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The range of end time. You can filter jobs whose end time falls within the specified time range.
    shared_ptr<ListDoctorJobsStatsRequest::EndRange> endRange_ {};
    // The fields that are used for grouping data.
    // 
    // Currently, only the first value is used for grouping data. Combinations of multiple values will be supported in the future.
    shared_ptr<vector<string>> groupBy_ {};
    // The maximum number of entries to return on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The field that you use to sort the query results. Valid values:
    // 
    // *   vcoreSeconds: the aggregated number of vCPUs that are allocated to the job multiplied by the number of seconds the job has been running
    // *   memSeconds: the aggregated amount of memory that is allocated to the job multiplied by the number of seconds the job has been running
    shared_ptr<string> orderBy_ {};
    // The order in which you want to sort the query results. Valid values:
    // 
    // *   ASC: in ascending order
    // *   DESC: in descending order
    shared_ptr<string> orderType_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The range of start time. You can filter jobs whose start time falls within the specified time range.
    shared_ptr<ListDoctorJobsStatsRequest::StartRange> startRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
