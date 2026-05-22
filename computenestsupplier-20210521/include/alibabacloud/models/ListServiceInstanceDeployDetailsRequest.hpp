// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEDEPLOYDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEDEPLOYDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Filter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
      inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
      inline Filter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline Filter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      // Filter Value Names (Equivalent to SQL\\"s WHERE Clause)
      // 
      // Available Options:
      // 
      // - UserId
      // - ServiceId
      // - ServiceVersion
      // - ServiceInstanceId
      // - DeploySucceeded (Accepts True or False and case-insensitive)
      // - ErrorType
      // - ErrorCode
      shared_ptr<string> name_ {};
      // A value of the filter condition.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->cycleTimeZone_ == nullptr
        && this->cycleType_ == nullptr && this->dimension_ == nullptr && this->endTime_ == nullptr && this->filter_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr; };
    // cycleTimeZone Field Functions 
    bool hasCycleTimeZone() const { return this->cycleTimeZone_ != nullptr;};
    void deleteCycleTimeZone() { this->cycleTimeZone_ = nullptr;};
    inline string getCycleTimeZone() const { DARABONBA_PTR_GET_DEFAULT(cycleTimeZone_, "") };
    inline ListServiceInstanceDeployDetailsRequest& setCycleTimeZone(string cycleTimeZone) { DARABONBA_PTR_SET_VALUE(cycleTimeZone_, cycleTimeZone) };


    // cycleType Field Functions 
    bool hasCycleType() const { return this->cycleType_ != nullptr;};
    void deleteCycleType() { this->cycleType_ = nullptr;};
    inline string getCycleType() const { DARABONBA_PTR_GET_DEFAULT(cycleType_, "") };
    inline ListServiceInstanceDeployDetailsRequest& setCycleType(string cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline const vector<string> & getDimension() const { DARABONBA_PTR_GET_CONST(dimension_, vector<string>) };
    inline vector<string> getDimension() { DARABONBA_PTR_GET(dimension_, vector<string>) };
    inline ListServiceInstanceDeployDetailsRequest& setDimension(const vector<string> & dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };
    inline ListServiceInstanceDeployDetailsRequest& setDimension(vector<string> && dimension) { DARABONBA_PTR_SET_RVALUE(dimension_, dimension) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListServiceInstanceDeployDetailsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListServiceInstanceDeployDetailsRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListServiceInstanceDeployDetailsRequest::Filter>) };
    inline vector<ListServiceInstanceDeployDetailsRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<ListServiceInstanceDeployDetailsRequest::Filter>) };
    inline ListServiceInstanceDeployDetailsRequest& setFilter(const vector<ListServiceInstanceDeployDetailsRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListServiceInstanceDeployDetailsRequest& setFilter(vector<ListServiceInstanceDeployDetailsRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstanceDeployDetailsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstanceDeployDetailsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListServiceInstanceDeployDetailsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListServiceInstanceDeployDetailsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time zone.
    // 
    // Reference Format: "+08:00"
    // 
    // Valid Range: "-12:59" to "+13:00"
    shared_ptr<string> cycleTimeZone_ {};
    // Determines the time period over which data is aggregated. If no aggregation dimension is specified, the query defaults to providing detailed, unaggregated results.
    // 
    // Optional Values:
    // 
    // - Year
    // - Month
    // - Day
    // - All
    shared_ptr<string> cycleType_ {};
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
    shared_ptr<vector<string>> dimension_ {};
    // The end of the time range to query. The end time must be later than the start time. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> endTime_ {};
    // The filter.
    shared_ptr<vector<ListServiceInstanceDeployDetailsRequest::Filter>> filter_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time must be in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
