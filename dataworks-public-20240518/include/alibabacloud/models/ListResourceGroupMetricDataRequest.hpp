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
        && return this->endTime_ == nullptr && return this->length_ == nullptr && return this->metricName_ == nullptr && return this->nextToken_ == nullptr && return this->period_ == nullptr
        && return this->resourceGroupId_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline ListResourceGroupMetricDataRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListResourceGroupMetricDataRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t length() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline ListResourceGroupMetricDataRequest& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ListResourceGroupMetricDataRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceGroupMetricDataRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline ListResourceGroupMetricDataRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListResourceGroupMetricDataRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // Start Time
    // 
    // Supported format:
    // 
    // *   Unix timestamp, representing the number of milliseconds that have elapsed since January 1, 1970.
    // 
    // The interval between BeginTime and EndTime must be 31 days or less.
    // 
    // Default: The current time minus 2 hours, expressed as a millisecond Unix timestamp.
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    // End Time
    // 
    // Supported format:
    // 
    // *   Unix timestamp, representing the number of milliseconds that have elapsed since January 1, 1970.
    // 
    // The interval between BeginTime and EndTime must be 31 days or less.
    // 
    // Default: The current time, expressed as a millisecond Unix timestamp.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int32_t> length_ = nullptr;
    // The metric name. Available metrics include:
    // 
    // *   CUSpec: Maximum CU capacity of the resource group, in CUs.
    // *   CUUsage: CU usage of the resource group, in CUs.
    // *   CUUtilization: CU utilization of the resource group, in %.
    // *   SlotSpec: Maximum concurrency for resource group scheduling, in slots.
    // *   SlotUsage: Used concurrency for resource group scheduling, in slots.
    // *   SchedulerCUMaxSpec: Maximum CU quota for data computing, in CUs.
    // *   SchedulerCUUsage: CU usage for data computing, in CUs.
    // *   SchedulerCUMinSpec: Minimum guaranteed CUs for data computing, in CUs.
    // *   DataIntegrationCUMaxSpec: Maximum CU quota for Data Integration, in CUs.
    // *   DataIntegrationCUUsage: CU usage for Data Integration, in CUs.
    // *   DataIntegrationCUMinSpec: Minimum guaranteed CUs for Data Integration, in CUs.
    // *   DataServiceCUMaxSpec: Maximum CU quota for dataservice, in CUs.
    // *   DataServiceCUUsage: CU usage for DataService Studio, in CUs.
    // *   DataServiceCUMinSpec: Minimum guaranteed CUs for DataService Studio, in CUs.
    // *   ServerIdeCUMaxSpec: Maximum CU quota for personal development environment, in CUs.
    // *   ServerIdeCUUsage: CU usage for personal development environment, in CUs.
    // *   ServerIdeCUMinSpec: Minimum guaranteed CUs for personal development environment, in CUs.
    // 
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // The statistical period for monitoring data.
    // 
    // Value: A multiple of 60.
    // 
    // Unit: Seconds.
    // 
    // Default: 60
    std::shared_ptr<string> period_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
