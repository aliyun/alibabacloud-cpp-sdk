// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORAPPLICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORAPPLICATIONSREQUEST_HPP_
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
  class ListDoctorApplicationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorApplicationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(Queues, queues_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Types, types_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorApplicationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(Queues, queues_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Types, types_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListDoctorApplicationsRequest() = default ;
    ListDoctorApplicationsRequest(const ListDoctorApplicationsRequest &) = default ;
    ListDoctorApplicationsRequest(ListDoctorApplicationsRequest &&) = default ;
    ListDoctorApplicationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorApplicationsRequest() = default ;
    ListDoctorApplicationsRequest& operator=(const ListDoctorApplicationsRequest &) = default ;
    ListDoctorApplicationsRequest& operator=(ListDoctorApplicationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIds_ == nullptr
        && this->clusterId_ == nullptr && this->dateTime_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->orderBy_ == nullptr
        && this->orderType_ == nullptr && this->queues_ == nullptr && this->regionId_ == nullptr && this->types_ == nullptr && this->users_ == nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline const vector<string> & getAppIds() const { DARABONBA_PTR_GET_CONST(appIds_, vector<string>) };
    inline vector<string> getAppIds() { DARABONBA_PTR_GET(appIds_, vector<string>) };
    inline ListDoctorApplicationsRequest& setAppIds(const vector<string> & appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };
    inline ListDoctorApplicationsRequest& setAppIds(vector<string> && appIds) { DARABONBA_PTR_SET_RVALUE(appIds_, appIds) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListDoctorApplicationsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline ListDoctorApplicationsRequest& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDoctorApplicationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDoctorApplicationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListDoctorApplicationsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListDoctorApplicationsRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // queues Field Functions 
    bool hasQueues() const { return this->queues_ != nullptr;};
    void deleteQueues() { this->queues_ = nullptr;};
    inline const vector<string> & getQueues() const { DARABONBA_PTR_GET_CONST(queues_, vector<string>) };
    inline vector<string> getQueues() { DARABONBA_PTR_GET(queues_, vector<string>) };
    inline ListDoctorApplicationsRequest& setQueues(const vector<string> & queues) { DARABONBA_PTR_SET_VALUE(queues_, queues) };
    inline ListDoctorApplicationsRequest& setQueues(vector<string> && queues) { DARABONBA_PTR_SET_RVALUE(queues_, queues) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDoctorApplicationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<string> & getTypes() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
    inline vector<string> getTypes() { DARABONBA_PTR_GET(types_, vector<string>) };
    inline ListDoctorApplicationsRequest& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline ListDoctorApplicationsRequest& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> getUsers() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline ListDoctorApplicationsRequest& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListDoctorApplicationsRequest& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The IDs of jobs that are submitted to YARN.
    shared_ptr<vector<string>> appIds_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // Specify the date in the ISO 8601 standard. For example, 2023-01-01 represents January 1, 2023.
    // 
    // This parameter is required.
    shared_ptr<string> dateTime_ {};
    // The maximum number of entries to return on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The field that you use to sort the query results. Valid values:
    // 
    // 1. startTime: the time when the job starts
    // 
    // 2. endTime: the time when the job ends
    // 
    // 3. vcoreUtilization: the vCPU utilization of the job
    // 
    // 4. memUtilization: the memory usage of the job
    // 
    // 5. vcoreSeconds: the aggregated number of vCPUs that are allocated to the job multiplied by the number of seconds the job has been running
    // 
    // 6. memSeconds: the aggregated amount of memory that is allocated to the job multiplied by the number of seconds the job has been running
    // 
    // 7. score: the score of the job
    shared_ptr<string> orderBy_ {};
    // The order in which you want to sort the query results. Valid values:
    // 
    // - ASC: the ascending order
    // 
    // - DESC: the descending order
    shared_ptr<string> orderType_ {};
    // The YARN queues to which the jobs are submitted.
    shared_ptr<vector<string>> queues_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The YARN engines to which the jobs are submitted.
    shared_ptr<vector<string>> types_ {};
    // The users who submit the jobs.
    shared_ptr<vector<string>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
