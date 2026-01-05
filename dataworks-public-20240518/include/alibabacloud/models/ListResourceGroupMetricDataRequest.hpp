// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPMETRICDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPMETRICDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListResourceGroupMetricDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupMetricDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupMetricDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListResourceGroupMetricDataRequest() = default ;
    ListResourceGroupMetricDataRequest(const ListResourceGroupMetricDataRequest &) = default ;
    ListResourceGroupMetricDataRequest(ListResourceGroupMetricDataRequest &&) = default ;
    ListResourceGroupMetricDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupMetricDataRequest() = default ;
    ListResourceGroupMetricDataRequest& operator=(const ListResourceGroupMetricDataRequest &) = default ;
    ListResourceGroupMetricDataRequest& operator=(ListResourceGroupMetricDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->length_ == nullptr && this->metricName_ == nullptr && this->nextToken_ == nullptr && this->period_ == nullptr
        && this->resourceGroupId_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline ListResourceGroupMetricDataRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListResourceGroupMetricDataRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline ListResourceGroupMetricDataRequest& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ListResourceGroupMetricDataRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceGroupMetricDataRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline ListResourceGroupMetricDataRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListResourceGroupMetricDataRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The start time.
    // 
    // Supported format: Unix timestamp in milliseconds (the number of milliseconds that have elapsed since January 1, 1970).
    // 
    // The interval between BeginTime and EndTime must be less than or equal to 31 days.
    // 
    // Default: The current time minus 2 hours, expressed as a millisecond Unix timestamp.
    shared_ptr<int64_t> beginTime_ {};
    // The end time.
    // 
    // Supported format: Unix timestamp in milliseconds (the number of milliseconds that have elapsed since January 1, 1970).
    // 
    // The interval between BeginTime and EndTime must be less than or equal to 31 days.
    // 
    // Default: The current time, expressed as a millisecond Unix timestamp.
    shared_ptr<int64_t> endTime_ {};
    // The number of records to display on each page for paginated queries.
    // 
    // >  The maximum value of Length for a single request is 1440.
    shared_ptr<int32_t> length_ {};
    // The metric name. Valid values:
    // 
    // *   CUSpec: Maximum CU capacity of the resource group, in CUs.
    // *   CUUsage: CU usage of the resource group, in CUs.
    // *   CUUtilization: CU utilization of the resource group, in %.
    // *   SlotSpec: Maximum number of concurrent slots for resource group scheduling, in slots.
    // *   SlotUsage: Used concurrency for resource group scheduling, in slots.
    // *   SchedulerCUMaxSpec: Maximum CU quota for data computing, in CUs.
    // *   SchedulerCUUsage: CU usage for data computing, in CUs.
    // *   SchedulerCUMinSpec: Minimum guaranteed CUs for data computing, in CUs.
    // *   DataIntegrationCUMaxSpec: Maximum CU quota for Data Integration, in CUs.
    // *   DataIntegrationCUUsage: CU usage for Data Integration, in CUs.
    // *   DataIntegrationCUMinSpec: Minimum guaranteed CUs for Data Integration, in CUs.
    // *   DataServiceCUMaxSpec: Maximum CU quota for DataService Studio, in CUs.
    // *   DataServiceCUUsage: CU usage for DataService Studio, in CUs.
    // *   DataServiceCUMinSpec: Minimum guaranteed CUs for DataService Studio, in CUs.
    // *   ServerIdeCUMaxSpec: Maximum CU quota for personal development environment, in CUs.
    // *   ServerIdeCUUsage: CU usage for personal development environment, in CUs.
    // *   ServerIdeCUMinSpec: Minimum guaranteed CUs for personal development environment, in CUs.
    // 
    // This parameter is required.
    shared_ptr<string> metricName_ {};
    // The pagination cursor.
    // 
    // >  If this parameter is not set, the first page of data is retrieved. If a value is returned for this parameter, it indicates that there is a next page. You can use the returned NextToken as a parameter to request the next page of data until it returns Null, which means all data has been retrieved.
    shared_ptr<string> nextToken_ {};
    // The statistical period for monitoring data.
    // 
    // Value: A multiple of 60.
    // 
    // Unit: Seconds.
    // 
    // Default: 60.
    shared_ptr<string> period_ {};
    // The unique identifier for the general-purpose resource group.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
