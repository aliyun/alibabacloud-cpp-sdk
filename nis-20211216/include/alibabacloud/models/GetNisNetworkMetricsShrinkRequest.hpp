// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNISNETWORKMETRICSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNISNETWORKMETRICSSHRINKREQUEST_HPP_
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
  class GetNisNetworkMetricsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNisNetworkMetricsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensionsShrink_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ScanBy, scanBy_);
      DARABONBA_PTR_TO_JSON(StepMinutes, stepMinutes_);
      DARABONBA_PTR_TO_JSON(UseCrossAccount, useCrossAccount_);
    };
    friend void from_json(const Darabonba::Json& j, GetNisNetworkMetricsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensionsShrink_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ScanBy, scanBy_);
      DARABONBA_PTR_FROM_JSON(StepMinutes, stepMinutes_);
      DARABONBA_PTR_FROM_JSON(UseCrossAccount, useCrossAccount_);
    };
    GetNisNetworkMetricsShrinkRequest() = default ;
    GetNisNetworkMetricsShrinkRequest(const GetNisNetworkMetricsShrinkRequest &) = default ;
    GetNisNetworkMetricsShrinkRequest(GetNisNetworkMetricsShrinkRequest &&) = default ;
    GetNisNetworkMetricsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNisNetworkMetricsShrinkRequest() = default ;
    GetNisNetworkMetricsShrinkRequest& operator=(const GetNisNetworkMetricsShrinkRequest &) = default ;
    GetNisNetworkMetricsShrinkRequest& operator=(GetNisNetworkMetricsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->beginTime_ == nullptr && this->dimensionsShrink_ == nullptr && this->endTime_ == nullptr && this->metricName_ == nullptr && this->regionNo_ == nullptr
        && this->resourceType_ == nullptr && this->scanBy_ == nullptr && this->stepMinutes_ == nullptr && this->useCrossAccount_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline GetNisNetworkMetricsShrinkRequest& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline GetNisNetworkMetricsShrinkRequest& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetNisNetworkMetricsShrinkRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // dimensionsShrink Field Functions 
    bool hasDimensionsShrink() const { return this->dimensionsShrink_ != nullptr;};
    void deleteDimensionsShrink() { this->dimensionsShrink_ = nullptr;};
    inline string getDimensionsShrink() const { DARABONBA_PTR_GET_DEFAULT(dimensionsShrink_, "") };
    inline GetNisNetworkMetricsShrinkRequest& setDimensionsShrink(string dimensionsShrink) { DARABONBA_PTR_SET_VALUE(dimensionsShrink_, dimensionsShrink) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetNisNetworkMetricsShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline GetNisNetworkMetricsShrinkRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline GetNisNetworkMetricsShrinkRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetNisNetworkMetricsShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // scanBy Field Functions 
    bool hasScanBy() const { return this->scanBy_ != nullptr;};
    void deleteScanBy() { this->scanBy_ = nullptr;};
    inline string getScanBy() const { DARABONBA_PTR_GET_DEFAULT(scanBy_, "") };
    inline GetNisNetworkMetricsShrinkRequest& setScanBy(string scanBy) { DARABONBA_PTR_SET_VALUE(scanBy_, scanBy) };


    // stepMinutes Field Functions 
    bool hasStepMinutes() const { return this->stepMinutes_ != nullptr;};
    void deleteStepMinutes() { this->stepMinutes_ = nullptr;};
    inline int32_t getStepMinutes() const { DARABONBA_PTR_GET_DEFAULT(stepMinutes_, 0) };
    inline GetNisNetworkMetricsShrinkRequest& setStepMinutes(int32_t stepMinutes) { DARABONBA_PTR_SET_VALUE(stepMinutes_, stepMinutes) };


    // useCrossAccount Field Functions 
    bool hasUseCrossAccount() const { return this->useCrossAccount_ != nullptr;};
    void deleteUseCrossAccount() { this->useCrossAccount_ = nullptr;};
    inline bool getUseCrossAccount() const { DARABONBA_PTR_GET_DEFAULT(useCrossAccount_, false) };
    inline GetNisNetworkMetricsShrinkRequest& setUseCrossAccount(bool useCrossAccount) { DARABONBA_PTR_SET_VALUE(useCrossAccount_, useCrossAccount) };


  protected:
    // Explicitly passes member account IDs.
    shared_ptr<vector<string>> accountIds_ {};
    // The start time, in **ms**, in **UNIX** timestamp format. If not specified, the most recent 1 hour is queried by default. The earliest start time can be 7 days ago.
    shared_ptr<int64_t> beginTime_ {};
    // The collection of metric query parameters for specific business scenarios. For metric description of each scenario, see [GetNisNetworkMetrics](https://help.aliyun.com/document_detail/2833348.html).
    // 
    // This parameter is required.
    shared_ptr<string> dimensionsShrink_ {};
    // The end time, in **ms**, in **UNIX** timestamp format. If not specified, the most recent 1 hour is queried by default. If only BeginTime is specified, the 1 hour after BeginTime is queried. The maximum time span between the end time and start time is 24 hours.
    shared_ptr<int64_t> endTime_ {};
    // The metric name. Valid values:
    // 
    // -   bps: bits per second.
    // -   pps: packets per second.
    // -   rtt: round-trip time when establishing a TCP connection.
    // -   RetransmitRate: retransmission rate.
    // -   RatelimitDropPps: rate of packets dropped due to throttling.
    // -   ActiveSessionCount: concurrent session count.
    // -   NewSessionPerSecond: new sessions per second.
    // -   BandwidthUtilization: bandwidth utilization.
    // -   passRate: inspection pass rate.
    // > If no RTT data is available within the selected time range, the connection is a persistent connection and no initial connection was established during that period.
    // 
    // This parameter is required.
    shared_ptr<string> metricName_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionNo_ {};
    // Analyzes traffic by the Alibaba Cloud network resource type used for traffic forwarding. Valid values:
    // 
    // - AccessInternetIpV4: all Alibaba Cloud public IPv4 addresses.
    // - AccessInternetIpV4Limited: all region-throttled Alibaba Cloud public IPv4 addresses.
    // - ElasticIP: Elastic IP Address (EIP) (IPv4).
    // - PublicIpEcs: static public IP address bound to an ECS instance (IPv4).
    // - PublicIpClb: static public IP address bound to a CLB instance (IPv4).
    // - NAT: public network traffic through SNAT.
    // - TR: traffic through Cloud Enterprise Network (CEN) transit routers.
    // - TRAttachment: traffic through CEN connection instances, including intra-region and inter-region connections. Intra-region connections have inbound and outbound directions. Inter-region connections have only the outbound direction.
    // - VBR: traffic through virtual border routers.
    // - GA: traffic through Global Accelerator.
    // - IntranetProbing: internal network quality probing data.
    // - NisInspectionHistoryReportScore: inspection history scores.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The sort order. Default value: TimestampAscending. Valid values:
    // 
    // - TimestampAscending: sorts by time in ascending order.
    // - TimestampDescending: sorts by time in descending order.
    shared_ptr<string> scanBy_ {};
    shared_ptr<int32_t> stepMinutes_ {};
    // Specifies whether to use multi-account access mode. This is a reserved parameter and is not currently supported.
    shared_ptr<bool> useCrossAccount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
