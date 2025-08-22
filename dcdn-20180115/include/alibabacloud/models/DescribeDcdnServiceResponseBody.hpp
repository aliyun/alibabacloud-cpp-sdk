// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnServiceResponseBodyOperationLocks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangingAffectTime, changingAffectTime_);
      DARABONBA_PTR_TO_JSON(ChangingChargeType, changingChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(OpeningTime, openingTime_);
      DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WebsocketChangingTime, websocketChangingTime_);
      DARABONBA_PTR_TO_JSON(WebsocketChangingType, websocketChangingType_);
      DARABONBA_PTR_TO_JSON(WebsocketType, websocketType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangingAffectTime, changingAffectTime_);
      DARABONBA_PTR_FROM_JSON(ChangingChargeType, changingChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(OpeningTime, openingTime_);
      DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WebsocketChangingTime, websocketChangingTime_);
      DARABONBA_PTR_FROM_JSON(WebsocketChangingType, websocketChangingType_);
      DARABONBA_PTR_FROM_JSON(WebsocketType, websocketType_);
    };
    DescribeDcdnServiceResponseBody() = default ;
    DescribeDcdnServiceResponseBody(const DescribeDcdnServiceResponseBody &) = default ;
    DescribeDcdnServiceResponseBody(DescribeDcdnServiceResponseBody &&) = default ;
    DescribeDcdnServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnServiceResponseBody() = default ;
    DescribeDcdnServiceResponseBody& operator=(const DescribeDcdnServiceResponseBody &) = default ;
    DescribeDcdnServiceResponseBody& operator=(DescribeDcdnServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changingAffectTime_ != nullptr
        && this->changingChargeType_ != nullptr && this->instanceId_ != nullptr && this->internetChargeType_ != nullptr && this->openingTime_ != nullptr && this->operationLocks_ != nullptr
        && this->requestId_ != nullptr && this->websocketChangingTime_ != nullptr && this->websocketChangingType_ != nullptr && this->websocketType_ != nullptr; };
    // changingAffectTime Field Functions 
    bool hasChangingAffectTime() const { return this->changingAffectTime_ != nullptr;};
    void deleteChangingAffectTime() { this->changingAffectTime_ = nullptr;};
    inline string changingAffectTime() const { DARABONBA_PTR_GET_DEFAULT(changingAffectTime_, "") };
    inline DescribeDcdnServiceResponseBody& setChangingAffectTime(string changingAffectTime) { DARABONBA_PTR_SET_VALUE(changingAffectTime_, changingAffectTime) };


    // changingChargeType Field Functions 
    bool hasChangingChargeType() const { return this->changingChargeType_ != nullptr;};
    void deleteChangingChargeType() { this->changingChargeType_ = nullptr;};
    inline string changingChargeType() const { DARABONBA_PTR_GET_DEFAULT(changingChargeType_, "") };
    inline DescribeDcdnServiceResponseBody& setChangingChargeType(string changingChargeType) { DARABONBA_PTR_SET_VALUE(changingChargeType_, changingChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDcdnServiceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeDcdnServiceResponseBody& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // openingTime Field Functions 
    bool hasOpeningTime() const { return this->openingTime_ != nullptr;};
    void deleteOpeningTime() { this->openingTime_ = nullptr;};
    inline string openingTime() const { DARABONBA_PTR_GET_DEFAULT(openingTime_, "") };
    inline DescribeDcdnServiceResponseBody& setOpeningTime(string openingTime) { DARABONBA_PTR_SET_VALUE(openingTime_, openingTime) };


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const DescribeDcdnServiceResponseBodyOperationLocks & operationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, DescribeDcdnServiceResponseBodyOperationLocks) };
    inline DescribeDcdnServiceResponseBodyOperationLocks operationLocks() { DARABONBA_PTR_GET(operationLocks_, DescribeDcdnServiceResponseBodyOperationLocks) };
    inline DescribeDcdnServiceResponseBody& setOperationLocks(const DescribeDcdnServiceResponseBodyOperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline DescribeDcdnServiceResponseBody& setOperationLocks(DescribeDcdnServiceResponseBodyOperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // websocketChangingTime Field Functions 
    bool hasWebsocketChangingTime() const { return this->websocketChangingTime_ != nullptr;};
    void deleteWebsocketChangingTime() { this->websocketChangingTime_ = nullptr;};
    inline string websocketChangingTime() const { DARABONBA_PTR_GET_DEFAULT(websocketChangingTime_, "") };
    inline DescribeDcdnServiceResponseBody& setWebsocketChangingTime(string websocketChangingTime) { DARABONBA_PTR_SET_VALUE(websocketChangingTime_, websocketChangingTime) };


    // websocketChangingType Field Functions 
    bool hasWebsocketChangingType() const { return this->websocketChangingType_ != nullptr;};
    void deleteWebsocketChangingType() { this->websocketChangingType_ = nullptr;};
    inline string websocketChangingType() const { DARABONBA_PTR_GET_DEFAULT(websocketChangingType_, "") };
    inline DescribeDcdnServiceResponseBody& setWebsocketChangingType(string websocketChangingType) { DARABONBA_PTR_SET_VALUE(websocketChangingType_, websocketChangingType) };


    // websocketType Field Functions 
    bool hasWebsocketType() const { return this->websocketType_ != nullptr;};
    void deleteWebsocketType() { this->websocketType_ = nullptr;};
    inline string websocketType() const { DARABONBA_PTR_GET_DEFAULT(websocketType_, "") };
    inline DescribeDcdnServiceResponseBody& setWebsocketType(string websocketType) { DARABONBA_PTR_SET_VALUE(websocketType_, websocketType) };


  protected:
    // The time when the renewed secure DCDN takes effect. The time is displayed in UTC.
    std::shared_ptr<string> changingAffectTime_ = nullptr;
    // The new metering method for the renewed secure DCDN. Valid values:
    // 
    // *   **PayByTraffic**: pay by data transfer
    // *   **PayByBandwidth**: pay by bandwidth
    // *   **PayByBandwidth95**: pay by 95th percentile bandwidth
    // *   **PayByBandwidth_monthavg**: pay by monthly average bandwidth
    // *   **PayByBandwidth_month4th**: pay by fourth peak bandwidth per month
    // *   **PayByBandwidth_monthday95avg**: pay by monthly average 95th percentile bandwidth
    // *   **PayByBandwidth_nighthalf95**: pay by 95th percentile bandwidth (50% off during nighttime)
    std::shared_ptr<string> changingChargeType_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The current metering method. Valid values:
    // 
    // *   **PayByTraffic**: pay by data transfer
    // *   **PayByBandwidth**: pay by bandwidth
    // *   **PayByBandwidth95**: pay by 95th percentile bandwidth
    // *   **PayByBandwidth_monthavg**: pay by monthly average bandwidth
    // *   **PayByBandwidth_month4th**: pay by fourth peak bandwidth per month
    // *   **PayByBandwidth_monthday95avg**: pay by monthly average 95th percentile bandwidth
    // *   **PayByBandwidth_nighthalf95**: pay by 95th percentile bandwidth (50% off during nighttime)
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The time when the DCDN service was activated. The time follows the ISO 8601 standard.
    std::shared_ptr<string> openingTime_ = nullptr;
    // The lock status of DCDN.
    std::shared_ptr<DescribeDcdnServiceResponseBodyOperationLocks> operationLocks_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The time when the changes of the WebSocket configuration take effect. The value is the same as that of the ChangingAffectTime parameter. This parameter can be displayed in the console only if the specified time is later than the current time.
    std::shared_ptr<string> websocketChangingTime_ = nullptr;
    // The next effective billing method of WebSocket. Valid values: **websockettraffic** and **websocketbps**. A value of websockettraffic indicates that you are billed based on the traffic volume. A value of websocketbps indicates that you are billed based on the bandwidth.
    std::shared_ptr<string> websocketChangingType_ = nullptr;
    // The current billing method of WebSocket. Valid values: **websockettraffic** and **websocketbps**. A value of websockettraffic indicates that you are billed based on the traffic volume. A value of websocketbps indicates that you are billed based on the bandwidth.
    std::shared_ptr<string> websocketType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
