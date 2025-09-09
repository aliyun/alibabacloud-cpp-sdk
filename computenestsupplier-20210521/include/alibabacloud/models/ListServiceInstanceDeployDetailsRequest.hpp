// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEDEPLOYDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEDEPLOYDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceInstanceDeployDetailsRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceInstanceDeployDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceDeployDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CycleTimeZone, cycleTimeZone_);
      DARABONBA_PTR_TO_JSON(CycleType, cycleType_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceDeployDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleTimeZone, cycleTimeZone_);
      DARABONBA_PTR_FROM_JSON(CycleType, cycleType_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListServiceInstanceDeployDetailsRequest() = default ;
    ListServiceInstanceDeployDetailsRequest(const ListServiceInstanceDeployDetailsRequest &) = default ;
    ListServiceInstanceDeployDetailsRequest(ListServiceInstanceDeployDetailsRequest &&) = default ;
    ListServiceInstanceDeployDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceDeployDetailsRequest() = default ;
    ListServiceInstanceDeployDetailsRequest& operator=(const ListServiceInstanceDeployDetailsRequest &) = default ;
    ListServiceInstanceDeployDetailsRequest& operator=(ListServiceInstanceDeployDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cycleTimeZone_ != nullptr
        && this->cycleType_ != nullptr && this->dimension_ != nullptr && this->endTime_ != nullptr && this->filter_ != nullptr && this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->regionId_ != nullptr && this->startTime_ != nullptr; };
    // cycleTimeZone Field Functions 
    bool hasCycleTimeZone() const { return this->cycleTimeZone_ != nullptr;};
    void deleteCycleTimeZone() { this->cycleTimeZone_ = nullptr;};
    inline string cycleTimeZone() const { DARABONBA_PTR_GET_DEFAULT(cycleTimeZone_, "") };
    inline ListServiceInstanceDeployDetailsRequest& setCycleTimeZone(string cycleTimeZone) { DARABONBA_PTR_SET_VALUE(cycleTimeZone_, cycleTimeZone) };


    // cycleType Field Functions 
    bool hasCycleType() const { return this->cycleType_ != nullptr;};
    void deleteCycleType() { this->cycleType_ = nullptr;};
    inline string cycleType() const { DARABONBA_PTR_GET_DEFAULT(cycleType_, "") };
    inline ListServiceInstanceDeployDetailsRequest& setCycleType(string cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline const vector<string> & dimension() const { DARABONBA_PTR_GET_CONST(dimension_, vector<string>) };
    inline vector<string> dimension() { DARABONBA_PTR_GET(dimension_, vector<string>) };
    inline ListServiceInstanceDeployDetailsRequest& setDimension(const vector<string> & dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };
    inline ListServiceInstanceDeployDetailsRequest& setDimension(vector<string> && dimension) { DARABONBA_PTR_SET_RVALUE(dimension_, dimension) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListServiceInstanceDeployDetailsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListServiceInstanceDeployDetailsRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListServiceInstanceDeployDetailsRequestFilter>) };
    inline vector<ListServiceInstanceDeployDetailsRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<ListServiceInstanceDeployDetailsRequestFilter>) };
    inline ListServiceInstanceDeployDetailsRequest& setFilter(const vector<ListServiceInstanceDeployDetailsRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListServiceInstanceDeployDetailsRequest& setFilter(vector<ListServiceInstanceDeployDetailsRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstanceDeployDetailsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstanceDeployDetailsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListServiceInstanceDeployDetailsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListServiceInstanceDeployDetailsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time zone.
    // 
    // Reference Format: "+08:00"
    // 
    // Valid Range: "-12:59" to "+13:00"
    std::shared_ptr<string> cycleTimeZone_ = nullptr;
    // Determines the time period over which data is aggregated. If no aggregation dimension is specified, the query defaults to providing detailed, unaggregated results.
    // 
    // Optional Values:
    // 
    // - Year
    // - Month
    // - Day
    // - All
    std::shared_ptr<string> cycleType_ = nullptr;
    // The dimension names. (Equivalent to SQL\\"s GROUP BY Clause)
    // Optional Values:
    // 
    // - UserId
    // - ServiceId
    // - ServiceVersion
    // - ServiceInstanceId
    // - DeploySucceeded
    // - ErrorType
    // - ErrorCode
    std::shared_ptr<vector<string>> dimension_ = nullptr;
    // The end of the time range to query. The end time must be later than the start time. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The filter.
    std::shared_ptr<vector<ListServiceInstanceDeployDetailsRequestFilter>> filter_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
