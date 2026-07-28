// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNISTRAFFICMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNISTRAFFICMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetNisTrafficMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNisTrafficMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
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
    friend void from_json(const Darabonba::Json& j, GetNisTrafficMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
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
    GetNisTrafficMetricsRequest() = default ;
    GetNisTrafficMetricsRequest(const GetNisTrafficMetricsRequest &) = default ;
    GetNisTrafficMetricsRequest(GetNisTrafficMetricsRequest &&) = default ;
    GetNisTrafficMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNisTrafficMetricsRequest() = default ;
    GetNisTrafficMetricsRequest& operator=(const GetNisTrafficMetricsRequest &) = default ;
    GetNisTrafficMetricsRequest& operator=(GetNisTrafficMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
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
      virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline Filter& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
      inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
      inline Filter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline Filter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      // Based on the TupleDimension field and TrafficScenario field, the supported filter condition label keys are as follows:
      // 
      // - `TrafficScenario = VpcFlowLogAll` / `VpcFlowLogInternet` (VPC flow log scenario):
      // 
      //   - When `TupleDimension` is a 1-tuple, the following keys are supported:
      //     - `FlowAction`: the action type to execute on traffic after it matches the corresponding rule or policy (required, the corresponding value does not support multiple selections)
      //     - `VpcId`: VPC ID (the corresponding value supports multiple selections)
      //     - `VSwitchId`: vSwitch ID (the corresponding value supports multiple selections)
      //     - `NetworkInterfaceId`: elastic network interfaces (ENIs) ID (the corresponding value supports multiple selections)
      //     - `EcsId`: ECS instance ID (the corresponding value supports multiple selections)
      //     - `CloudIp`: cloud IP address (the corresponding value supports multiple selections)
      // 
      //   - When `TupleDimension` is a 2-tuple, the following keys are supported:
      //     - `FlowAction`: the action type to execute on traffic after it matches the corresponding rule or policy (required, the corresponding value does not support multiple selections)
      //     - `VpcId`: VPC ID (the corresponding value supports multiple selections)
      //     - `VSwitchId`: vSwitch ID (the corresponding value supports multiple selections)
      //     - `NetworkInterfaceId`: elastic network interfaces (ENIs) ID (the corresponding value supports multiple selections)
      //     - `EcsId`: ECS instance ID (the corresponding value supports multiple selections)
      //     - `SourceIp`: source IP address (the corresponding value supports multiple selections)
      //     - `DestinationIp`: destination IP address (the corresponding value supports multiple selections)
      //     - `TrafficPath`: traffic path (the corresponding value supports multiple selections)
      // 
      //   - When `TupleDimension` is a 5-tuple, the following keys are supported:
      //     - `FlowAction`: the action type to execute on traffic after it matches the corresponding rule or policy (required, the corresponding value does not support multiple selections)
      //     - `VpcId`: VPC ID (the corresponding value supports multiple selections)
      //     - `VSwitchId`: vSwitch ID (the corresponding value supports multiple selections)
      //     - `NetworkInterfaceId`: elastic network interfaces (ENIs) ID (the corresponding value supports multiple selections)
      //     - `EcsId`: ECS instance ID (the corresponding value supports multiple selections)
      //     - `SourceIp`: source IP address
      //     - `DestinationIp`: destination IP address
      //     - `TrafficPath`: traffic path (the corresponding value supports multiple selections)
      //     - `SourcePort`: source port (the corresponding value supports multiple selections)
      //     - `DestinationPort`: destination port (the corresponding value supports multiple selections)
      //     - `Protocol`: network protocol (the corresponding value supports multiple selections)
      // 
      //   - In the VPC Internet scenario (`TrafficScenario = VpcFlowLogInternet`), the following additional keys are supported for filtering by Internet location:
      //     - `ClientCountry`: filters network traffic analysis scope by country (the corresponding value supports multiple selections)
      //     - `ClientCity`: filters network traffic analysis scope by city (the corresponding value supports multiple selections)
      //     - `ClientAsn`: filters network traffic analysis scope by ASN (the corresponding value supports multiple selections)
      //     - `ClientIsp`: filters network traffic analysis scope by client ISP (the corresponding value supports multiple selections)
      // 
      //   - In VPC scenarios, the following traffic metrics filters are supported:
      //     - `MinBytes`: specifies the minimum traffic volume for sorting, in bytes (the corresponding value does not support multiple selections)
      //     - `MaxBytes`: specifies the maximum traffic volume for sorting, in bytes (the corresponding value does not support multiple selections)
      //     - `MinRoundTripTime`: specifies the minimum RTT for sorting, in ms (the corresponding value does not support multiple selections)
      //     - `MaxRoundTripTime`: specifies the maximum RTT for sorting, in ms (the corresponding value does not support multiple selections)
      //     - `MinPackages`: specifies the minimum number of packets for sorting (the corresponding value does not support multiple selections)
      //     - `MaxPackages`: specifies the maximum number of packets for sorting (the corresponding value does not support multiple selections)
      // 
      // ---
      // 
      // - `TrafficScenario = TRFlowlog` (TR flow log scenario):
      // 
      //   - When querying 2-tuples or adaptively using 2-tuples, the following keys are supported:
      //     - `TransitRouterAttachmentId`: network instance connection ID (required, the corresponding value does not support multiple selections)
      //     - `TransitRouterPairAttachmentId`: peer TR connection ID (the corresponding value supports multiple selections)
      //     - `TransitRouterId`: transit router instance ID (the corresponding value supports multiple selections)
      //     - `SourceIp`: source IP address (the corresponding value does not support multiple selections when Operator is like, and supports multiple selections when Operator is not like)
      //     - `DestinationIp`: destination IP address (the corresponding value does not support multiple selections when Operator is like, and supports multiple selections when Operator is not like)
      //     - `Dscp`: Differentiated Services Code Point (the corresponding value supports multiple selections)
      // 
      //   - When querying 5-tuples or adaptively using 5-tuples, the following additional keys are supported in addition to the 2-tuple keys:
      //     - `Protocol`: network protocol (the corresponding value supports multiple selections)
      //     - `SourcePort`: source port (the corresponding value supports multiple selections)
      //     - `DestinationPort`: destination port (the corresponding value supports multiple selections)
      //   - In `non-TR cross-region scenarios`, the following additional keys are supported:
      //     - `TransitRouterSourceResourceId`: source network instance ID (the corresponding value supports multiple selections)
      //     - `TransitRouterDestinationResourceId`: destination network instance ID (the corresponding value supports multiple selections)
      //   - In `VPC connection traffic scenarios`, the following additional keys are supported:
      //     - `TransitRouterSourceNetworkInterface`: source TR network interface controller (NIC) (the corresponding value supports multiple selections)
      //     - `TransitRouterDestinationNetworkInterface`: destination TR network interface controller (NIC) (the corresponding value supports multiple selections)
      // 
      //   - In TR scenarios, the following traffic metrics filters are supported:
      //     - `MinBytes`: specifies the minimum traffic volume for sorting, in bytes (the corresponding value does not support multiple selections)
      //     - `MaxBytes`: specifies the maximum traffic volume for sorting, in bytes (the corresponding value does not support multiple selections)
      //     - `MinPackages`: specifies the minimum number of packets for sorting (the corresponding value does not support multiple selections)
      //     - `MaxPackages`: specifies the maximum number of packets for sorting (the corresponding value does not support multiple selections)
      //     - `MinPacketsLostNoRoute`: minimum number of packets dropped due to no route (the corresponding value does not support multiple selections)
      //     - `MinPacketsLostBlackhole`: minimum number of packets dropped due to blackhole route (the corresponding value does not support multiple selections)
      //     - `MinPacketsLostTTLExpired`: minimum number of packets dropped due to TTL timeout (the corresponding value does not support multiple selections)
      //     - `MaxPacketsLostNoRoute`: maximum number of packets dropped due to no route (the corresponding value does not support multiple selections)
      //     - `MaxPacketsLostBlackhole`: maximum number of packets dropped due to blackhole route (the corresponding value does not support multiple selections)
      //     - `MaxPacketsLostTTLExpired`: maximum number of packets dropped due to TTL timeout (the corresponding value does not support multiple selections)
      // 
      // ---
      // 
      // - `TrafficScenario = CbwpMetric` (Internet Shared Bandwidth metric analysis scenario):
      // 
      //   - The following filter condition keys are supported:
      //     - `PublicIpAddress`: the public IP address of the associated EIP (the corresponding value does not support multiple selections when Operator is like, and supports multiple selections when Operator is not like)
      //     - `BindingResourceType`: the type of the instance resource to which the EIP is bound (the corresponding value supports multiple selections)
      //     - `BindingResourceId`: the ID of the instance resource to which the EIP is bound (the corresponding value supports multiple selections)
      //     - `CbwpId`: the Internet Shared Bandwidth instance ID (required, the corresponding value does not support multiple selections)
      //     - `InstanceId`: the EIP ID bound to the Internet Shared Bandwidth instance (the corresponding value supports multiple selections)
      // 
      //   - In CBWP scenarios, the following traffic metrics filters are supported:
      //     - `MinBytes`: specifies the minimum traffic volume for sorting, in bytes (the corresponding value does not support multiple selections)
      //     - `MaxBytes`: specifies the maximum traffic volume for sorting, in bytes (the corresponding value does not support multiple selections)
      //     - `MinPackages`: specifies the minimum number of packets for sorting (the corresponding value does not support multiple selections)
      //     - `MaxPackages`: specifies the maximum number of packets for sorting (the corresponding value does not support multiple selections)
      shared_ptr<string> key_ {};
      // The filter operator.
      // - TR and Internet Shared Bandwidth scenarios:
      //   - Defaults to in if not specified.
      //   - like performs prefix matching and only one Value can be specified.
      // - VPC scenarios currently ignore this parameter and uniformly process it as IN.
      shared_ptr<string> operator_ {};
      // The filter value corresponding to the specified key type.
      // 
      // Based on the `TupleDimension` field and `TrafficScenario` field, the supported values are as follows:
      // 
      // - `TrafficScenario = VpcFlowLogAll` / `VpcFlowLogInternet` (VPC flow log scenario)
      // 
      //   - When the key is `FlowAction`, the valid values are:
      //     - `ACCEPT` (pass `Accept` by default): traffic allowed by security groups and network ACLs
      //     - `REJECT`: traffic denied by security groups and network ACLs
      // 
      // - `TrafficScenario = TRFlowlog` (TR flow log scenario)
      // 
      //   - When the key is `TransitRouterAttachmentId`, this is a required field, and the corresponding value is also required (specify the specific VPC connection / VPN connection / VBR connection / ECR connection / inter-region connection or network instance connection ID).
      // 
      // - `TrafficScenario = CbwpMetric` (shared bandwidth metric analysis scenario)
      // 
      //   - When the key is `CbwpId`, this is a required field, and the corresponding value is also required (specify the specific Internet Shared Bandwidth instance ID).
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->direction_ == nullptr && this->endTime_ == nullptr && this->filter_ == nullptr && this->maxResults_ == nullptr && this->metricName_ == nullptr
        && this->nextToken_ == nullptr && this->regionNo_ == nullptr && this->scanBy_ == nullptr && this->stepMinutes_ == nullptr && this->storageInterval_ == nullptr
        && this->trafficAnalyzerId_ == nullptr && this->trafficScenario_ == nullptr && this->tupleDimension_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetNisTrafficMetricsRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline GetNisTrafficMetricsRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetNisTrafficMetricsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<GetNisTrafficMetricsRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<GetNisTrafficMetricsRequest::Filter>) };
    inline vector<GetNisTrafficMetricsRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<GetNisTrafficMetricsRequest::Filter>) };
    inline GetNisTrafficMetricsRequest& setFilter(const vector<GetNisTrafficMetricsRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetNisTrafficMetricsRequest& setFilter(vector<GetNisTrafficMetricsRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetNisTrafficMetricsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline GetNisTrafficMetricsRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetNisTrafficMetricsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline GetNisTrafficMetricsRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // scanBy Field Functions 
    bool hasScanBy() const { return this->scanBy_ != nullptr;};
    void deleteScanBy() { this->scanBy_ = nullptr;};
    inline string getScanBy() const { DARABONBA_PTR_GET_DEFAULT(scanBy_, "") };
    inline GetNisTrafficMetricsRequest& setScanBy(string scanBy) { DARABONBA_PTR_SET_VALUE(scanBy_, scanBy) };


    // stepMinutes Field Functions 
    bool hasStepMinutes() const { return this->stepMinutes_ != nullptr;};
    void deleteStepMinutes() { this->stepMinutes_ = nullptr;};
    inline int32_t getStepMinutes() const { DARABONBA_PTR_GET_DEFAULT(stepMinutes_, 0) };
    inline GetNisTrafficMetricsRequest& setStepMinutes(int32_t stepMinutes) { DARABONBA_PTR_SET_VALUE(stepMinutes_, stepMinutes) };


    // storageInterval Field Functions 
    bool hasStorageInterval() const { return this->storageInterval_ != nullptr;};
    void deleteStorageInterval() { this->storageInterval_ = nullptr;};
    inline int32_t getStorageInterval() const { DARABONBA_PTR_GET_DEFAULT(storageInterval_, 0) };
    inline GetNisTrafficMetricsRequest& setStorageInterval(int32_t storageInterval) { DARABONBA_PTR_SET_VALUE(storageInterval_, storageInterval) };


    // trafficAnalyzerId Field Functions 
    bool hasTrafficAnalyzerId() const { return this->trafficAnalyzerId_ != nullptr;};
    void deleteTrafficAnalyzerId() { this->trafficAnalyzerId_ = nullptr;};
    inline string getTrafficAnalyzerId() const { DARABONBA_PTR_GET_DEFAULT(trafficAnalyzerId_, "") };
    inline GetNisTrafficMetricsRequest& setTrafficAnalyzerId(string trafficAnalyzerId) { DARABONBA_PTR_SET_VALUE(trafficAnalyzerId_, trafficAnalyzerId) };


    // trafficScenario Field Functions 
    bool hasTrafficScenario() const { return this->trafficScenario_ != nullptr;};
    void deleteTrafficScenario() { this->trafficScenario_ = nullptr;};
    inline string getTrafficScenario() const { DARABONBA_PTR_GET_DEFAULT(trafficScenario_, "") };
    inline GetNisTrafficMetricsRequest& setTrafficScenario(string trafficScenario) { DARABONBA_PTR_SET_VALUE(trafficScenario_, trafficScenario) };


    // tupleDimension Field Functions 
    bool hasTupleDimension() const { return this->tupleDimension_ != nullptr;};
    void deleteTupleDimension() { this->tupleDimension_ = nullptr;};
    inline string getTupleDimension() const { DARABONBA_PTR_GET_DEFAULT(tupleDimension_, "") };
    inline GetNisTrafficMetricsRequest& setTupleDimension(string tupleDimension) { DARABONBA_PTR_SET_VALUE(tupleDimension_, tupleDimension) };


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
    shared_ptr<vector<GetNisTrafficMetricsRequest::Filter>> filter_ {};
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
