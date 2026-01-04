// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBANDWITDHBYINTERNETCHARGETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBANDWITDHBYINTERNETCHARGETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeBandwitdhByInternetChargeTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBandwitdhByInternetChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthValue, bandwidthValue_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBandwitdhByInternetChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthValue, bandwidthValue_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeBandwitdhByInternetChargeTypeResponseBody() = default ;
    DescribeBandwitdhByInternetChargeTypeResponseBody(const DescribeBandwitdhByInternetChargeTypeResponseBody &) = default ;
    DescribeBandwitdhByInternetChargeTypeResponseBody(DescribeBandwitdhByInternetChargeTypeResponseBody &&) = default ;
    DescribeBandwitdhByInternetChargeTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBandwitdhByInternetChargeTypeResponseBody() = default ;
    DescribeBandwitdhByInternetChargeTypeResponseBody& operator=(const DescribeBandwitdhByInternetChargeTypeResponseBody &) = default ;
    DescribeBandwitdhByInternetChargeTypeResponseBody& operator=(DescribeBandwitdhByInternetChargeTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidthValue_ == nullptr
        && this->internetChargeType_ == nullptr && this->requestId_ == nullptr && this->timeStamp_ == nullptr; };
    // bandwidthValue Field Functions 
    bool hasBandwidthValue() const { return this->bandwidthValue_ != nullptr;};
    void deleteBandwidthValue() { this->bandwidthValue_ = nullptr;};
    inline int64_t getBandwidthValue() const { DARABONBA_PTR_GET_DEFAULT(bandwidthValue_, 0L) };
    inline DescribeBandwitdhByInternetChargeTypeResponseBody& setBandwidthValue(int64_t bandwidthValue) { DARABONBA_PTR_SET_VALUE(bandwidthValue_, bandwidthValue) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeBandwitdhByInternetChargeTypeResponseBody& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBandwitdhByInternetChargeTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeBandwitdhByInternetChargeTypeResponseBody& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The bandwidth. Unit: bit/s.
    shared_ptr<int64_t> bandwidthValue_ {};
    // The metering method. Valid values:
    // 
    // *   BandwidthByDay: Pay by daily peak bandwidth
    // *   95BandwidthByMonth: Pay by monthly 95th percentile bandwidth
    // *   PayByBandwidth4thMonth: Pay by monthly fourth peak bandwidth
    // *   PayByBandwidth: Pay by fixed bandwidth
    // 
    // You can specify only one metering method for network usage and cannot overwrite the existing metering method.
    shared_ptr<string> internetChargeType_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use the ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The timestamp. The time follows the ISO 8601 standard. The time is displayed in UTC. Example: 2016-10-20T04:00:00Z.
    shared_ptr<string> timeStamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
