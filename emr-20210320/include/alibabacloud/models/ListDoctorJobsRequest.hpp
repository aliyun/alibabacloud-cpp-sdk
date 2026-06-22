// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORJOBSREQUEST_HPP_
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
  class ListDoctorJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(EndRange, endRange_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(Queues, queues_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartRange, startRange_);
      DARABONBA_PTR_TO_JSON(Types, types_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(EndRange, endRange_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(Queues, queues_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartRange, startRange_);
      DARABONBA_PTR_FROM_JSON(Types, types_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListDoctorJobsRequest() = default ;
    ListDoctorJobsRequest(const ListDoctorJobsRequest &) = default ;
    ListDoctorJobsRequest(ListDoctorJobsRequest &&) = default ;
    ListDoctorJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorJobsRequest() = default ;
    ListDoctorJobsRequest& operator=(const ListDoctorJobsRequest &) = default ;
    ListDoctorJobsRequest& operator=(ListDoctorJobsRequest &&) = default ;
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
      // The end of the time range during which jobs ended. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The beginning of the time range during which jobs ended. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->appIds_ == nullptr
        && this->clusterId_ == nullptr && this->endRange_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->orderBy_ == nullptr
        && this->orderType_ == nullptr && this->queues_ == nullptr && this->regionId_ == nullptr && this->startRange_ == nullptr && this->types_ == nullptr
        && this->users_ == nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline const vector<string> & getAppIds() const { DARABONBA_PTR_GET_CONST(appIds_, vector<string>) };
    inline vector<string> getAppIds() { DARABONBA_PTR_GET(appIds_, vector<string>) };
    inline ListDoctorJobsRequest& setAppIds(const vector<string> & appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };
    inline ListDoctorJobsRequest& setAppIds(vector<string> && appIds) { DARABONBA_PTR_SET_RVALUE(appIds_, appIds) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListDoctorJobsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // endRange Field Functions 
    bool hasEndRange() const { return this->endRange_ != nullptr;};
    void deleteEndRange() { this->endRange_ = nullptr;};
    inline const ListDoctorJobsRequest::EndRange & getEndRange() const { DARABONBA_PTR_GET_CONST(endRange_, ListDoctorJobsRequest::EndRange) };
    inline ListDoctorJobsRequest::EndRange getEndRange() { DARABONBA_PTR_GET(endRange_, ListDoctorJobsRequest::EndRange) };
    inline ListDoctorJobsRequest& setEndRange(const ListDoctorJobsRequest::EndRange & endRange) { DARABONBA_PTR_SET_VALUE(endRange_, endRange) };
    inline ListDoctorJobsRequest& setEndRange(ListDoctorJobsRequest::EndRange && endRange) { DARABONBA_PTR_SET_RVALUE(endRange_, endRange) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDoctorJobsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDoctorJobsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListDoctorJobsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListDoctorJobsRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // queues Field Functions 
    bool hasQueues() const { return this->queues_ != nullptr;};
    void deleteQueues() { this->queues_ = nullptr;};
    inline const vector<string> & getQueues() const { DARABONBA_PTR_GET_CONST(queues_, vector<string>) };
    inline vector<string> getQueues() { DARABONBA_PTR_GET(queues_, vector<string>) };
    inline ListDoctorJobsRequest& setQueues(const vector<string> & queues) { DARABONBA_PTR_SET_VALUE(queues_, queues) };
    inline ListDoctorJobsRequest& setQueues(vector<string> && queues) { DARABONBA_PTR_SET_RVALUE(queues_, queues) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDoctorJobsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startRange Field Functions 
    bool hasStartRange() const { return this->startRange_ != nullptr;};
    void deleteStartRange() { this->startRange_ = nullptr;};
    inline const ListDoctorJobsRequest::StartRange & getStartRange() const { DARABONBA_PTR_GET_CONST(startRange_, ListDoctorJobsRequest::StartRange) };
    inline ListDoctorJobsRequest::StartRange getStartRange() { DARABONBA_PTR_GET(startRange_, ListDoctorJobsRequest::StartRange) };
    inline ListDoctorJobsRequest& setStartRange(const ListDoctorJobsRequest::StartRange & startRange) { DARABONBA_PTR_SET_VALUE(startRange_, startRange) };
    inline ListDoctorJobsRequest& setStartRange(ListDoctorJobsRequest::StartRange && startRange) { DARABONBA_PTR_SET_RVALUE(startRange_, startRange) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<string> & getTypes() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
    inline vector<string> getTypes() { DARABONBA_PTR_GET(types_, vector<string>) };
    inline ListDoctorJobsRequest& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline ListDoctorJobsRequest& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> getUsers() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline ListDoctorJobsRequest& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListDoctorJobsRequest& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The IDs of the jobs that are submitted to YARN.
    shared_ptr<vector<string>> appIds_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The range of end time. You can filter jobs whose end time falls within the specified time range.
    shared_ptr<ListDoctorJobsRequest::EndRange> endRange_ {};
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
    // *   ASC: the ascending order
    // *   DESC: the descending order
    shared_ptr<string> orderType_ {};
    // The YARN queues to which the jobs are submitted.
    shared_ptr<vector<string>> queues_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The range of start time. You can filter jobs whose start time falls within the specified time range.
    shared_ptr<ListDoctorJobsRequest::StartRange> startRange_ {};
    // The YARN engines to which the jobs are submitted.
    shared_ptr<vector<string>> types_ {};
    // The users who submit the jobs.
    shared_ptr<vector<string>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
