// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNBANDWITDHBYINTERNETCHARGETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNBANDWITDHBYINTERNETCHARGETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnBandwitdhByInternetChargeTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnBandwitdhByInternetChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthValue, bandwidthValue_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnBandwitdhByInternetChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthValue, bandwidthValue_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeEpnBandwitdhByInternetChargeTypeResponseBody() = default ;
    DescribeEpnBandwitdhByInternetChargeTypeResponseBody(const DescribeEpnBandwitdhByInternetChargeTypeResponseBody &) = default ;
    DescribeEpnBandwitdhByInternetChargeTypeResponseBody(DescribeEpnBandwitdhByInternetChargeTypeResponseBody &&) = default ;
    DescribeEpnBandwitdhByInternetChargeTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnBandwitdhByInternetChargeTypeResponseBody() = default ;
    DescribeEpnBandwitdhByInternetChargeTypeResponseBody& operator=(const DescribeEpnBandwitdhByInternetChargeTypeResponseBody &) = default ;
    DescribeEpnBandwitdhByInternetChargeTypeResponseBody& operator=(DescribeEpnBandwitdhByInternetChargeTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthValue_ != nullptr
        && this->internetChargeType_ != nullptr && this->requestId_ != nullptr && this->timeStamp_ != nullptr; };
    // bandwidthValue Field Functions 
    bool hasBandwidthValue() const { return this->bandwidthValue_ != nullptr;};
    void deleteBandwidthValue() { this->bandwidthValue_ = nullptr;};
    inline int64_t bandwidthValue() const { DARABONBA_PTR_GET_DEFAULT(bandwidthValue_, 0L) };
    inline DescribeEpnBandwitdhByInternetChargeTypeResponseBody& setBandwidthValue(int64_t bandwidthValue) { DARABONBA_PTR_SET_VALUE(bandwidthValue_, bandwidthValue) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeEpnBandwitdhByInternetChargeTypeResponseBody& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEpnBandwitdhByInternetChargeTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeEpnBandwitdhByInternetChargeTypeResponseBody& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The bandwidth. Unit: bit/s.
    std::shared_ptr<int64_t> bandwidthValue_ = nullptr;
    // The metering method. Valid values:
    // 
    // *   BandwidthByDay: Pay by daily peak bandwidth
    // *   95BandwidthByMonth: Pay by monthly 95th percentile bandwidth
    // *   PayByBandwidth4thMonth: Pay by monthly fourth peak bandwidth
    // *   PayByBandwidth: Pay by fixed bandwidth
    // 
    // You can specify only one metering method for network usage and cannot overwrite the existing metering method.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The timestamp when the monitoring data was queried. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
