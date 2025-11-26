// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDoctorJobsRequestEndRange.hpp>
#include <alibabacloud/models/ListDoctorJobsRequestStartRange.hpp>
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
    virtual bool empty() const override { return this->appIds_ == nullptr
        && return this->clusterId_ == nullptr && return this->endRange_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->orderBy_ == nullptr
        && return this->orderType_ == nullptr && return this->queues_ == nullptr && return this->regionId_ == nullptr && return this->startRange_ == nullptr && return this->types_ == nullptr
        && return this->users_ == nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline const vector<string> & appIds() const { DARABONBA_PTR_GET_CONST(appIds_, vector<string>) };
    inline vector<string> appIds() { DARABONBA_PTR_GET(appIds_, vector<string>) };
    inline ListDoctorJobsRequest& setAppIds(const vector<string> & appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };
    inline ListDoctorJobsRequest& setAppIds(vector<string> && appIds) { DARABONBA_PTR_SET_RVALUE(appIds_, appIds) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListDoctorJobsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // endRange Field Functions 
    bool hasEndRange() const { return this->endRange_ != nullptr;};
    void deleteEndRange() { this->endRange_ = nullptr;};
    inline const ListDoctorJobsRequestEndRange & endRange() const { DARABONBA_PTR_GET_CONST(endRange_, ListDoctorJobsRequestEndRange) };
    inline ListDoctorJobsRequestEndRange endRange() { DARABONBA_PTR_GET(endRange_, ListDoctorJobsRequestEndRange) };
    inline ListDoctorJobsRequest& setEndRange(const ListDoctorJobsRequestEndRange & endRange) { DARABONBA_PTR_SET_VALUE(endRange_, endRange) };
    inline ListDoctorJobsRequest& setEndRange(ListDoctorJobsRequestEndRange && endRange) { DARABONBA_PTR_SET_RVALUE(endRange_, endRange) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDoctorJobsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDoctorJobsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListDoctorJobsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListDoctorJobsRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // queues Field Functions 
    bool hasQueues() const { return this->queues_ != nullptr;};
    void deleteQueues() { this->queues_ = nullptr;};
    inline const vector<string> & queues() const { DARABONBA_PTR_GET_CONST(queues_, vector<string>) };
    inline vector<string> queues() { DARABONBA_PTR_GET(queues_, vector<string>) };
    inline ListDoctorJobsRequest& setQueues(const vector<string> & queues) { DARABONBA_PTR_SET_VALUE(queues_, queues) };
    inline ListDoctorJobsRequest& setQueues(vector<string> && queues) { DARABONBA_PTR_SET_RVALUE(queues_, queues) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDoctorJobsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startRange Field Functions 
    bool hasStartRange() const { return this->startRange_ != nullptr;};
    void deleteStartRange() { this->startRange_ = nullptr;};
    inline const ListDoctorJobsRequestStartRange & startRange() const { DARABONBA_PTR_GET_CONST(startRange_, ListDoctorJobsRequestStartRange) };
    inline ListDoctorJobsRequestStartRange startRange() { DARABONBA_PTR_GET(startRange_, ListDoctorJobsRequestStartRange) };
    inline ListDoctorJobsRequest& setStartRange(const ListDoctorJobsRequestStartRange & startRange) { DARABONBA_PTR_SET_VALUE(startRange_, startRange) };
    inline ListDoctorJobsRequest& setStartRange(ListDoctorJobsRequestStartRange && startRange) { DARABONBA_PTR_SET_RVALUE(startRange_, startRange) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<string> & types() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
    inline vector<string> types() { DARABONBA_PTR_GET(types_, vector<string>) };
    inline ListDoctorJobsRequest& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline ListDoctorJobsRequest& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> users() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline ListDoctorJobsRequest& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListDoctorJobsRequest& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The IDs of the jobs that are submitted to YARN.
    std::shared_ptr<vector<string>> appIds_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The range of end time. You can filter jobs whose end time falls within the specified time range.
    std::shared_ptr<ListDoctorJobsRequestEndRange> endRange_ = nullptr;
    // The maximum number of entries to return on each page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The field that you use to sort the query results. Valid values:
    // 
    // *   vcoreSeconds: the aggregated number of vCPUs that are allocated to the job multiplied by the number of seconds the job has been running
    // *   memSeconds: the aggregated amount of memory that is allocated to the job multiplied by the number of seconds the job has been running
    std::shared_ptr<string> orderBy_ = nullptr;
    // The order in which you want to sort the query results. Valid values:
    // 
    // *   ASC: the ascending order
    // *   DESC: the descending order
    std::shared_ptr<string> orderType_ = nullptr;
    // The YARN queues to which the jobs are submitted.
    std::shared_ptr<vector<string>> queues_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The range of start time. You can filter jobs whose start time falls within the specified time range.
    std::shared_ptr<ListDoctorJobsRequestStartRange> startRange_ = nullptr;
    // The YARN engines to which the jobs are submitted.
    std::shared_ptr<vector<string>> types_ = nullptr;
    // The users who submit the jobs.
    std::shared_ptr<vector<string>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
