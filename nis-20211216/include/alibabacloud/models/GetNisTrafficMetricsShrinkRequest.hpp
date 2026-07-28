// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNISTRAFFICMETRICSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNISTRAFFICMETRICSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetNisTrafficMetricsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNisTrafficMetricsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(ScanBy, scanBy_);
      DARABONBA_PTR_TO_JSON(StepMinutes, stepMinutes_);
      DARABONBA_PTR_TO_JSON(StorageInterval, storageInterval_);
      DARABONBA_PTR_TO_JSON(TrafficAnalyzerId, trafficAnalyzerId_);
      DARABONBA_PTR_TO_JSON(TrafficScenario, trafficScenario_);
      DARABONBA_PTR_TO_JSON(TupleDimension, tupleDimension_);
    };
    friend void from_json(const Darabonba::Json& j, GetNisTrafficMetricsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(ScanBy, scanBy_);
      DARABONBA_PTR_FROM_JSON(StepMinutes, stepMinutes_);
      DARABONBA_PTR_FROM_JSON(StorageInterval, storageInterval_);
      DARABONBA_PTR_FROM_JSON(TrafficAnalyzerId, trafficAnalyzerId_);
      DARABONBA_PTR_FROM_JSON(TrafficScenario, trafficScenario_);
      DARABONBA_PTR_FROM_JSON(TupleDimension, tupleDimension_);
    };
    GetNisTrafficMetricsShrinkRequest() = default ;
    GetNisTrafficMetricsShrinkRequest(const GetNisTrafficMetricsShrinkRequest &) = default ;
    GetNisTrafficMetricsShrinkRequest(GetNisTrafficMetricsShrinkRequest &&) = default ;
    GetNisTrafficMetricsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNisTrafficMetricsShrinkRequest() = default ;
    GetNisTrafficMetricsShrinkRequest& operator=(const GetNisTrafficMetricsShrinkRequest &) = default ;
    GetNisTrafficMetricsShrinkRequest& operator=(GetNisTrafficMetricsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->direction_ == nullptr && this->endTime_ == nullptr && this->filterShrink_ == nullptr && this->maxResults_ == nullptr && this->metricName_ == nullptr
        && this->nextToken_ == nullptr && this->regionNo_ == nullptr && this->scanBy_ == nullptr && this->stepMinutes_ == nullptr && this->storageInterval_ == nullptr
        && this->trafficAnalyzerId_ == nullptr && this->trafficScenario_ == nullptr && this->tupleDimension_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetNisTrafficMetricsShrinkRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline GetNisTrafficMetricsShrinkRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetNisTrafficMetricsShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string getFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline GetNisTrafficMetricsShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetNisTrafficMetricsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline GetNisTrafficMetricsShrinkRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetNisTrafficMetricsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline GetNisTrafficMetricsShrinkRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // scanBy Field Functions 
    bool hasScanBy() const { return this->scanBy_ != nullptr;};
    void deleteScanBy() { this->scanBy_ = nullptr;};
    inline string getScanBy() const { DARABONBA_PTR_GET_DEFAULT(scanBy_, "") };
    inline GetNisTrafficMetricsShrinkRequest& setScanBy(string scanBy) { DARABONBA_PTR_SET_VALUE(scanBy_, scanBy) };


    // stepMinutes Field Functions 
    bool hasStepMinutes() const { return this->stepMinutes_ != nullptr;};
    void deleteStepMinutes() { this->stepMinutes_ = nullptr;};
    inline int32_t getStepMinutes() const { DARABONBA_PTR_GET_DEFAULT(stepMinutes_, 0) };
    inline GetNisTrafficMetricsShrinkRequest& setStepMinutes(int32_t stepMinutes) { DARABONBA_PTR_SET_VALUE(stepMinutes_, stepMinutes) };


    // storageInterval Field Functions 
    bool hasStorageInterval() const { return this->storageInterval_ != nullptr;};
    void deleteStorageInterval() { this->storageInterval_ = nullptr;};
    inline int32_t getStorageInterval() const { DARABONBA_PTR_GET_DEFAULT(storageInterval_, 0) };
    inline GetNisTrafficMetricsShrinkRequest& setStorageInterval(int32_t storageInterval) { DARABONBA_PTR_SET_VALUE(storageInterval_, storageInterval) };


    // trafficAnalyzerId Field Functions 
    bool hasTrafficAnalyzerId() const { return this->trafficAnalyzerId_ != nullptr;};
    void deleteTrafficAnalyzerId() { this->trafficAnalyzerId_ = nullptr;};
    inline string getTrafficAnalyzerId() const { DARABONBA_PTR_GET_DEFAULT(trafficAnalyzerId_, "") };
    inline GetNisTrafficMetricsShrinkRequest& setTrafficAnalyzerId(string trafficAnalyzerId) { DARABONBA_PTR_SET_VALUE(trafficAnalyzerId_, trafficAnalyzerId) };


    // trafficScenario Field Functions 
    bool hasTrafficScenario() const { return this->trafficScenario_ != nullptr;};
    void deleteTrafficScenario() { this->trafficScenario_ = nullptr;};
    inline string getTrafficScenario() const { DARABONBA_PTR_GET_DEFAULT(trafficScenario_, "") };
    inline GetNisTrafficMetricsShrinkRequest& setTrafficScenario(string trafficScenario) { DARABONBA_PTR_SET_VALUE(trafficScenario_, trafficScenario) };


    // tupleDimension Field Functions 
    bool hasTupleDimension() const { return this->tupleDimension_ != nullptr;};
    void deleteTupleDimension() { this->tupleDimension_ = nullptr;};
    inline string getTupleDimension() const { DARABONBA_PTR_GET_DEFAULT(tupleDimension_, "") };
    inline GetNisTrafficMetricsShrinkRequest& setTupleDimension(string tupleDimension) { DARABONBA_PTR_SET_VALUE(tupleDimension_, tupleDimension) };


  protected:
    // The start timestamp, in milliseconds. If not specified, the most recent 1 hour is queried by default.
    // 
    // This parameter is required.
    shared_ptr<int64_t> beginTime_ {};
    // The network traffic direction based on Alibaba Cloud resources.
    // 
    // In: traffic flowing into the target resource.
    // Out: traffic flowing out of the target resource.
    // 
    // This parameter is required.
    shared_ptr<string> direction_ {};
    // The end timestamp, in milliseconds. If not specified, the most recent 1 hour is queried by default. If only BeginTime is specified, the 1 hour after BeginTime is queried.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // Specifies additional filter conditions for the traffic to perform focused network traffic analysis.
    shared_ptr<string> filterShrink_ {};
    // In VPC scenarios, this parameter specifies the paging size. In TR and Internet Shared Bandwidth scenarios, this parameter specifies the SQL query limit. If not specified, the backend defaults to 1440.
    shared_ptr<int32_t> maxResults_ {};
    // The metric name.
    // Common parameters supported in network traffic analysis scenarios:
    //   bps: bits per second.
    //   pps: packets per second.
    // Parameters specific to the Internet scenario:
    //   rtt: round-trip time when establishing a TCP protocol connection.
    //   RetransmitRate: retransmission rate.
    // Parameters specific to the area-level bandwidth scenario:
    //   RatelimitDropPps: rate of packet loss due to rate limiting.
    //   BandwidthUtilization: bandwidth utilization.
    // Parameters specific to the NAT scenario:
    //   ActiveSessionCount: number of concurrent sessions.
    //   NewSessionPerSecond: number of new sessions per second.
    // 
    // This parameter is required.
    shared_ptr<string> metricName_ {};
    // The token for the next query. You do not need to specify this parameter for the first query or when no more results exist. If a next page exists, set this parameter to the NextToken value returned by the previous API invoke. This parameter is valid only in VPC scenarios. TR and Internet Shared Bandwidth scenarios do not use this parameter.
    shared_ptr<string> nextToken_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionNo_ {};
    // The sort order. Valid values:
    // TimestampAscending: sorts by time in ascending order.
    // TimestampDescending: sorts by time in descending order.
    shared_ptr<string> scanBy_ {};
    // The aggregation step for time series data, in minutes. The final query granularity is the larger value between StepMinutes and the underlying storage granularity. The number of data points calculated by (EndTime-BeginTime)/StepMinutes cannot exceed 1440.
    shared_ptr<int32_t> stepMinutes_ {};
    // The storage bucket precision property.
    // 
    // The storage bucket precision specifies the storage aggregation epoch to query. Two precision levels are supported: high precision (such as 1 minute) or long epoch (such as 1 day). The specific precision is determined by the network traffic analysis sampling interval configured for high-precision traffic statistics or long-epoch traffic statistics when creating or editing the network traffic analysis analyzer.
    // 
    // - The storage precisions active for the corresponding tuples of the network traffic analysis analyzer are:
    //   - `1`: in minutes (1 minute)
    //   - `10`: in minutes (10 minutes)
    //   - `60`: in minutes (60 minutes, i.e., 1 hour)
    //   - `1440`: in minutes (1440 minutes, i.e., 1 day)
    // 
    // - The storage bucket precision can be used for two typical purposes:
    //   - High-precision traffic statistics: such as 1-minute, 10-minute, or 60-minute aggregation
    //   - Long-epoch traffic statistics: such as 1440-minute (1-day) aggregation
    // 
    // - Specify a value for this field during the query to select the storage aggregation epoch. For example:
    //   - Pass `10`: queries short-epoch data with a 10-minute aggregation granularity
    //   - Pass `1440`: queries long-epoch data with a 1-day aggregation granularity
    shared_ptr<int32_t> storageInterval_ {};
    // The ID of the network traffic analysis analyzer.
    // 
    // This parameter is required.
    shared_ptr<string> trafficAnalyzerId_ {};
    // The supported analysis scenarios: 
    // 
    // - All VPC flow log analysis
    // - Internet VPC flow log analysis
    // - All TR flow log analysis
    // - Internet Shared Bandwidth metric analysis
    // 
    // This parameter is required.
    shared_ptr<string> trafficScenario_ {};
    // The traffic storage aggregation dimension.
    // 
    // Based on the TrafficScenario:
    // 
    // - VpcFlowLogAll/VpcFlowLog: required. Specifies the storage aggregation view to query, which corresponds to the storage aggregation property configured in the network traffic analysis analyzer.
    // 
    // - TRFlowLog/CbwpMetric: optional. Automatically adapts based on the storage aggregation property of the network traffic analysis analyzer.
    shared_ptr<string> tupleDimension_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
