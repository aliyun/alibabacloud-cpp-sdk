// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNBANDWIDTHDATARESPONSEBODYMONITORDATABANDWIDTHMONITORDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNBANDWIDTHDATARESPONSEBODYMONITORDATABANDWIDTHMONITORDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData& obj) { 
      DARABONBA_PTR_TO_JSON(DownBandWidth, downBandWidth_);
      DARABONBA_PTR_TO_JSON(InternetRX, internetRX_);
      DARABONBA_PTR_TO_JSON(InternetTX, internetTX_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(UpBandWidth, upBandWidth_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData& obj) { 
      DARABONBA_PTR_FROM_JSON(DownBandWidth, downBandWidth_);
      DARABONBA_PTR_FROM_JSON(InternetRX, internetRX_);
      DARABONBA_PTR_FROM_JSON(InternetTX, internetTX_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(UpBandWidth, upBandWidth_);
    };
    DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData() = default ;
    DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData(const DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData &) = default ;
    DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData(DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData &&) = default ;
    DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData() = default ;
    DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData& operator=(const DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData &) = default ;
    DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData& operator=(DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->downBandWidth_ != nullptr
        && this->internetRX_ != nullptr && this->internetTX_ != nullptr && this->timeStamp_ != nullptr && this->upBandWidth_ != nullptr; };
    // downBandWidth Field Functions 
    bool hasDownBandWidth() const { return this->downBandWidth_ != nullptr;};
    void deleteDownBandWidth() { this->downBandWidth_ = nullptr;};
    inline int64_t downBandWidth() const { DARABONBA_PTR_GET_DEFAULT(downBandWidth_, 0L) };
    inline DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData& setDownBandWidth(int64_t downBandWidth) { DARABONBA_PTR_SET_VALUE(downBandWidth_, downBandWidth) };


    // internetRX Field Functions 
    bool hasInternetRX() const { return this->internetRX_ != nullptr;};
    void deleteInternetRX() { this->internetRX_ = nullptr;};
    inline int64_t internetRX() const { DARABONBA_PTR_GET_DEFAULT(internetRX_, 0L) };
    inline DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData& setInternetRX(int64_t internetRX) { DARABONBA_PTR_SET_VALUE(internetRX_, internetRX) };


    // internetTX Field Functions 
    bool hasInternetTX() const { return this->internetTX_ != nullptr;};
    void deleteInternetTX() { this->internetTX_ = nullptr;};
    inline int64_t internetTX() const { DARABONBA_PTR_GET_DEFAULT(internetTX_, 0L) };
    inline DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData& setInternetTX(int64_t internetTX) { DARABONBA_PTR_SET_VALUE(internetTX_, internetTX) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // upBandWidth Field Functions 
    bool hasUpBandWidth() const { return this->upBandWidth_ != nullptr;};
    void deleteUpBandWidth() { this->upBandWidth_ = nullptr;};
    inline int64_t upBandWidth() const { DARABONBA_PTR_GET_DEFAULT(upBandWidth_, 0L) };
    inline DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData& setUpBandWidth(int64_t upBandWidth) { DARABONBA_PTR_SET_VALUE(upBandWidth_, upBandWidth) };


  protected:
    // The outbound bandwidth. Unit: bit/s.
    std::shared_ptr<int64_t> downBandWidth_ = nullptr;
    // The Internet traffic to the instance. Unit: bytes.
    std::shared_ptr<int64_t> internetRX_ = nullptr;
    // The Internet traffic from the instance. Unit: bytes.
    std::shared_ptr<int64_t> internetTX_ = nullptr;
    // The timestamp when the monitoring data was queried. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The inbound bandwidth. Unit: bit/s.
    std::shared_ptr<int64_t> upBandWidth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
