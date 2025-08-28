// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBE95TRAFFICRESPONSEBODYTRAFFIC95SUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBE95TRAFFICRESPONSEBODYTRAFFIC95SUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class Describe95TrafficResponseBodyTraffic95Summary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Describe95TrafficResponseBodyTraffic95Summary& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(FifthPeakBandwidth, fifthPeakBandwidth_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(MinimumConsumeBandwidth, minimumConsumeBandwidth_);
      DARABONBA_PTR_TO_JSON(Traffic95DetailList, traffic95DetailList_);
    };
    friend void from_json(const Darabonba::Json& j, Describe95TrafficResponseBodyTraffic95Summary& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(FifthPeakBandwidth, fifthPeakBandwidth_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(MinimumConsumeBandwidth, minimumConsumeBandwidth_);
      DARABONBA_PTR_FROM_JSON(Traffic95DetailList, traffic95DetailList_);
    };
    Describe95TrafficResponseBodyTraffic95Summary() = default ;
    Describe95TrafficResponseBodyTraffic95Summary(const Describe95TrafficResponseBodyTraffic95Summary &) = default ;
    Describe95TrafficResponseBodyTraffic95Summary(Describe95TrafficResponseBodyTraffic95Summary &&) = default ;
    Describe95TrafficResponseBodyTraffic95Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Describe95TrafficResponseBodyTraffic95Summary() = default ;
    Describe95TrafficResponseBodyTraffic95Summary& operator=(const Describe95TrafficResponseBodyTraffic95Summary &) = default ;
    Describe95TrafficResponseBodyTraffic95Summary& operator=(Describe95TrafficResponseBodyTraffic95Summary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->fifthPeakBandwidth_ != nullptr && this->instanceId_ != nullptr && this->internetChargeType_ != nullptr && this->minimumConsumeBandwidth_ != nullptr && this->traffic95DetailList_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline Describe95TrafficResponseBodyTraffic95Summary& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // fifthPeakBandwidth Field Functions 
    bool hasFifthPeakBandwidth() const { return this->fifthPeakBandwidth_ != nullptr;};
    void deleteFifthPeakBandwidth() { this->fifthPeakBandwidth_ = nullptr;};
    inline string fifthPeakBandwidth() const { DARABONBA_PTR_GET_DEFAULT(fifthPeakBandwidth_, "") };
    inline Describe95TrafficResponseBodyTraffic95Summary& setFifthPeakBandwidth(string fifthPeakBandwidth) { DARABONBA_PTR_SET_VALUE(fifthPeakBandwidth_, fifthPeakBandwidth) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline Describe95TrafficResponseBodyTraffic95Summary& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline Describe95TrafficResponseBodyTraffic95Summary& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // minimumConsumeBandwidth Field Functions 
    bool hasMinimumConsumeBandwidth() const { return this->minimumConsumeBandwidth_ != nullptr;};
    void deleteMinimumConsumeBandwidth() { this->minimumConsumeBandwidth_ = nullptr;};
    inline string minimumConsumeBandwidth() const { DARABONBA_PTR_GET_DEFAULT(minimumConsumeBandwidth_, "") };
    inline Describe95TrafficResponseBodyTraffic95Summary& setMinimumConsumeBandwidth(string minimumConsumeBandwidth) { DARABONBA_PTR_SET_VALUE(minimumConsumeBandwidth_, minimumConsumeBandwidth) };


    // traffic95DetailList Field Functions 
    bool hasTraffic95DetailList() const { return this->traffic95DetailList_ != nullptr;};
    void deleteTraffic95DetailList() { this->traffic95DetailList_ = nullptr;};
    inline const Models::Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList & traffic95DetailList() const { DARABONBA_PTR_GET_CONST(traffic95DetailList_, Models::Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList) };
    inline Models::Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList traffic95DetailList() { DARABONBA_PTR_GET(traffic95DetailList_, Models::Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList) };
    inline Describe95TrafficResponseBodyTraffic95Summary& setTraffic95DetailList(const Models::Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList & traffic95DetailList) { DARABONBA_PTR_SET_VALUE(traffic95DetailList_, traffic95DetailList) };
    inline Describe95TrafficResponseBodyTraffic95Summary& setTraffic95DetailList(Models::Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList && traffic95DetailList) { DARABONBA_PTR_SET_RVALUE(traffic95DetailList_, traffic95DetailList) };


  protected:
    // The peak bandwidth of the Internet Shared Bandwidth instance. Unit: Mbit/s.
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
    // The daily peak bandwidth. Unit: Mbit/s.
    // <props="china"> For more information, see [Daily peak bandwidth](https://help.aliyun.com/document_detail/89729.html).
    std::shared_ptr<string> fifthPeakBandwidth_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The metering method of the Internet Shared Bandwidth instance. Valid values:
    // 
    // *   PayBy95: pay-by-enhanced-95th-percentile
    // *   PayByBandwidth: pay-by-bandwidth
    // *   PayByDominantTraffic: pay-by-dominant-traffic
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The guaranteed bandwidth of the Internet Shared Bandwidth instance. Unit: Mbit/s.
    std::shared_ptr<string> minimumConsumeBandwidth_ = nullptr;
    // The average bandwidth every 5 minutes in the inbound and outbound directions.
    std::shared_ptr<Models::Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList> traffic95DetailList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
