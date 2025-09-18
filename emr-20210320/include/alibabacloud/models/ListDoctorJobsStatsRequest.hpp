// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORJOBSSTATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORJOBSSTATSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorJobsStatsRequestEndRange.hpp>
#include <vector>
#include <alibabacloud/models/ListDoctorJobsStatsRequestStartRange.hpp>
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
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->endRange_ != nullptr && this->groupBy_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->orderBy_ != nullptr
        && this->orderType_ != nullptr && this->regionId_ != nullptr && this->startRange_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListDoctorJobsStatsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // endRange Field Functions 
    bool hasEndRange() const { return this->endRange_ != nullptr;};
    void deleteEndRange() { this->endRange_ = nullptr;};
    inline const ListDoctorJobsStatsRequestEndRange & endRange() const { DARABONBA_PTR_GET_CONST(endRange_, ListDoctorJobsStatsRequestEndRange) };
    inline ListDoctorJobsStatsRequestEndRange endRange() { DARABONBA_PTR_GET(endRange_, ListDoctorJobsStatsRequestEndRange) };
    inline ListDoctorJobsStatsRequest& setEndRange(const ListDoctorJobsStatsRequestEndRange & endRange) { DARABONBA_PTR_SET_VALUE(endRange_, endRange) };
    inline ListDoctorJobsStatsRequest& setEndRange(ListDoctorJobsStatsRequestEndRange && endRange) { DARABONBA_PTR_SET_RVALUE(endRange_, endRange) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline const vector<string> & groupBy() const { DARABONBA_PTR_GET_CONST(groupBy_, vector<string>) };
    inline vector<string> groupBy() { DARABONBA_PTR_GET(groupBy_, vector<string>) };
    inline ListDoctorJobsStatsRequest& setGroupBy(const vector<string> & groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };
    inline ListDoctorJobsStatsRequest& setGroupBy(vector<string> && groupBy) { DARABONBA_PTR_SET_RVALUE(groupBy_, groupBy) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDoctorJobsStatsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDoctorJobsStatsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListDoctorJobsStatsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListDoctorJobsStatsRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDoctorJobsStatsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startRange Field Functions 
    bool hasStartRange() const { return this->startRange_ != nullptr;};
    void deleteStartRange() { this->startRange_ = nullptr;};
    inline const ListDoctorJobsStatsRequestStartRange & startRange() const { DARABONBA_PTR_GET_CONST(startRange_, ListDoctorJobsStatsRequestStartRange) };
    inline ListDoctorJobsStatsRequestStartRange startRange() { DARABONBA_PTR_GET(startRange_, ListDoctorJobsStatsRequestStartRange) };
    inline ListDoctorJobsStatsRequest& setStartRange(const ListDoctorJobsStatsRequestStartRange & startRange) { DARABONBA_PTR_SET_VALUE(startRange_, startRange) };
    inline ListDoctorJobsStatsRequest& setStartRange(ListDoctorJobsStatsRequestStartRange && startRange) { DARABONBA_PTR_SET_RVALUE(startRange_, startRange) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The range of end time. You can filter jobs whose end time falls within the specified time range.
    std::shared_ptr<ListDoctorJobsStatsRequestEndRange> endRange_ = nullptr;
    // The fields that are used for grouping data.
    // 
    // Currently, only the first value is used for grouping data. Combinations of multiple values will be supported in the future.
    std::shared_ptr<vector<string>> groupBy_ = nullptr;
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
    // *   ASC: in ascending order
    // *   DESC: in descending order
    std::shared_ptr<string> orderType_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The range of start time. You can filter jobs whose start time falls within the specified time range.
    std::shared_ptr<ListDoctorJobsStatsRequestStartRange> startRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
