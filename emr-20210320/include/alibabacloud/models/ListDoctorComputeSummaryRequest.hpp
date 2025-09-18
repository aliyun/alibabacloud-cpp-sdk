// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORCOMPUTESUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORCOMPUTESUMMARYREQUEST_HPP_
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
  class ListDoctorComputeSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorComputeSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ComponentTypes, componentTypes_);
      DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorComputeSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ComponentTypes, componentTypes_);
      DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListDoctorComputeSummaryRequest() = default ;
    ListDoctorComputeSummaryRequest(const ListDoctorComputeSummaryRequest &) = default ;
    ListDoctorComputeSummaryRequest(ListDoctorComputeSummaryRequest &&) = default ;
    ListDoctorComputeSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorComputeSummaryRequest() = default ;
    ListDoctorComputeSummaryRequest& operator=(const ListDoctorComputeSummaryRequest &) = default ;
    ListDoctorComputeSummaryRequest& operator=(ListDoctorComputeSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->componentTypes_ != nullptr && this->dateTime_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->orderBy_ != nullptr
        && this->orderType_ != nullptr && this->regionId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListDoctorComputeSummaryRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // componentTypes Field Functions 
    bool hasComponentTypes() const { return this->componentTypes_ != nullptr;};
    void deleteComponentTypes() { this->componentTypes_ = nullptr;};
    inline const vector<string> & componentTypes() const { DARABONBA_PTR_GET_CONST(componentTypes_, vector<string>) };
    inline vector<string> componentTypes() { DARABONBA_PTR_GET(componentTypes_, vector<string>) };
    inline ListDoctorComputeSummaryRequest& setComponentTypes(const vector<string> & componentTypes) { DARABONBA_PTR_SET_VALUE(componentTypes_, componentTypes) };
    inline ListDoctorComputeSummaryRequest& setComponentTypes(vector<string> && componentTypes) { DARABONBA_PTR_SET_RVALUE(componentTypes_, componentTypes) };


    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string dateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline ListDoctorComputeSummaryRequest& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDoctorComputeSummaryRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDoctorComputeSummaryRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListDoctorComputeSummaryRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListDoctorComputeSummaryRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDoctorComputeSummaryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The resource types, which are used to filter query results. Valid values:
    // 
    // *   engine: filters results by engine.
    // *   queue: filters results by queue.
    // *   cluster: displays the results at the cluster level.
    // 
    // If you do not specify this parameter, the information at the cluster level is displayed by default. Currently, only one resource type is supported. If you specify multiple resource types, the first resource type is used by default.
    std::shared_ptr<vector<string>> componentTypes_ = nullptr;
    // Specify the date in the ISO 8601 standard. For example, 2023-01-01 represents January 1, 2023.
    // 
    // This parameter is required.
    std::shared_ptr<string> dateTime_ = nullptr;
    // The maximum number of entries to return on each page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The basis on which you want to sort the query results. Valid values:
    // 
    // 1.  vcoreSeconds: the total CPU consumption over time in seconds.
    // 2.  memSeconds: the total memory consumption over time in seconds.
    // 3.  vcoreUtilization: the average CPU utilization. The meaning is the same as the %CPU parameter in the output of the top command in Linux.
    // 4.  memUtilization: the average memory usage.
    // 5.  vcoreSecondsDayGrowthRatio: the day-to-day growth rate of the total CPU consumption over time in seconds.
    // 6.  memSecondsDayGrowthRatio: the day-to-day growth rate of the total memory consumption over time in seconds.
    // 7.  readSize: the total amount of data read from the file system.
    // 8.  writeSize: the total amount of data written to the file system.
    // 9.  healthyJobCount: the total number of healthy jobs.
    // 10. subHealthyJobCount: the total number of sub-healthy jobs.
    // 11. unhealthyJobCount: the total number of unhealthy jobs.
    // 12. needAttentionJobCount: the total number of jobs that require attention.
    // 13. score: the score for jobs.
    // 14. scoreDayGrowthRatio: the day-to-day growth rate of the score for jobs.
    std::shared_ptr<string> orderBy_ = nullptr;
    // The order in which you want to sort the query results. Valid values:
    // 
    // *   ASC: in ascending order.
    // *   DESC: in descending order.
    std::shared_ptr<string> orderType_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
