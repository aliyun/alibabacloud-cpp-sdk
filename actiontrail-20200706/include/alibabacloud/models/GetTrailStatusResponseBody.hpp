// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAILSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRAILSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetTrailStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrailStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsLogging, isLogging_);
      DARABONBA_PTR_TO_JSON(LatestDeliveryError, latestDeliveryError_);
      DARABONBA_PTR_TO_JSON(LatestDeliveryLogServiceError, latestDeliveryLogServiceError_);
      DARABONBA_PTR_TO_JSON(LatestDeliveryLogServiceTime, latestDeliveryLogServiceTime_);
      DARABONBA_PTR_TO_JSON(LatestDeliveryTime, latestDeliveryTime_);
      DARABONBA_PTR_TO_JSON(OssBucketStatus, ossBucketStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsLogStoreStatus, slsLogStoreStatus_);
      DARABONBA_PTR_TO_JSON(StartLoggingTime, startLoggingTime_);
      DARABONBA_PTR_TO_JSON(StopLoggingTime, stopLoggingTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrailStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsLogging, isLogging_);
      DARABONBA_PTR_FROM_JSON(LatestDeliveryError, latestDeliveryError_);
      DARABONBA_PTR_FROM_JSON(LatestDeliveryLogServiceError, latestDeliveryLogServiceError_);
      DARABONBA_PTR_FROM_JSON(LatestDeliveryLogServiceTime, latestDeliveryLogServiceTime_);
      DARABONBA_PTR_FROM_JSON(LatestDeliveryTime, latestDeliveryTime_);
      DARABONBA_PTR_FROM_JSON(OssBucketStatus, ossBucketStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsLogStoreStatus, slsLogStoreStatus_);
      DARABONBA_PTR_FROM_JSON(StartLoggingTime, startLoggingTime_);
      DARABONBA_PTR_FROM_JSON(StopLoggingTime, stopLoggingTime_);
    };
    GetTrailStatusResponseBody() = default ;
    GetTrailStatusResponseBody(const GetTrailStatusResponseBody &) = default ;
    GetTrailStatusResponseBody(GetTrailStatusResponseBody &&) = default ;
    GetTrailStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrailStatusResponseBody() = default ;
    GetTrailStatusResponseBody& operator=(const GetTrailStatusResponseBody &) = default ;
    GetTrailStatusResponseBody& operator=(GetTrailStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isLogging_ != nullptr
        && this->latestDeliveryError_ != nullptr && this->latestDeliveryLogServiceError_ != nullptr && this->latestDeliveryLogServiceTime_ != nullptr && this->latestDeliveryTime_ != nullptr && this->ossBucketStatus_ != nullptr
        && this->requestId_ != nullptr && this->slsLogStoreStatus_ != nullptr && this->startLoggingTime_ != nullptr && this->stopLoggingTime_ != nullptr; };
    // isLogging Field Functions 
    bool hasIsLogging() const { return this->isLogging_ != nullptr;};
    void deleteIsLogging() { this->isLogging_ = nullptr;};
    inline bool isLogging() const { DARABONBA_PTR_GET_DEFAULT(isLogging_, false) };
    inline GetTrailStatusResponseBody& setIsLogging(bool isLogging) { DARABONBA_PTR_SET_VALUE(isLogging_, isLogging) };


    // latestDeliveryError Field Functions 
    bool hasLatestDeliveryError() const { return this->latestDeliveryError_ != nullptr;};
    void deleteLatestDeliveryError() { this->latestDeliveryError_ = nullptr;};
    inline string latestDeliveryError() const { DARABONBA_PTR_GET_DEFAULT(latestDeliveryError_, "") };
    inline GetTrailStatusResponseBody& setLatestDeliveryError(string latestDeliveryError) { DARABONBA_PTR_SET_VALUE(latestDeliveryError_, latestDeliveryError) };


    // latestDeliveryLogServiceError Field Functions 
    bool hasLatestDeliveryLogServiceError() const { return this->latestDeliveryLogServiceError_ != nullptr;};
    void deleteLatestDeliveryLogServiceError() { this->latestDeliveryLogServiceError_ = nullptr;};
    inline string latestDeliveryLogServiceError() const { DARABONBA_PTR_GET_DEFAULT(latestDeliveryLogServiceError_, "") };
    inline GetTrailStatusResponseBody& setLatestDeliveryLogServiceError(string latestDeliveryLogServiceError) { DARABONBA_PTR_SET_VALUE(latestDeliveryLogServiceError_, latestDeliveryLogServiceError) };


    // latestDeliveryLogServiceTime Field Functions 
    bool hasLatestDeliveryLogServiceTime() const { return this->latestDeliveryLogServiceTime_ != nullptr;};
    void deleteLatestDeliveryLogServiceTime() { this->latestDeliveryLogServiceTime_ = nullptr;};
    inline string latestDeliveryLogServiceTime() const { DARABONBA_PTR_GET_DEFAULT(latestDeliveryLogServiceTime_, "") };
    inline GetTrailStatusResponseBody& setLatestDeliveryLogServiceTime(string latestDeliveryLogServiceTime) { DARABONBA_PTR_SET_VALUE(latestDeliveryLogServiceTime_, latestDeliveryLogServiceTime) };


    // latestDeliveryTime Field Functions 
    bool hasLatestDeliveryTime() const { return this->latestDeliveryTime_ != nullptr;};
    void deleteLatestDeliveryTime() { this->latestDeliveryTime_ = nullptr;};
    inline string latestDeliveryTime() const { DARABONBA_PTR_GET_DEFAULT(latestDeliveryTime_, "") };
    inline GetTrailStatusResponseBody& setLatestDeliveryTime(string latestDeliveryTime) { DARABONBA_PTR_SET_VALUE(latestDeliveryTime_, latestDeliveryTime) };


    // ossBucketStatus Field Functions 
    bool hasOssBucketStatus() const { return this->ossBucketStatus_ != nullptr;};
    void deleteOssBucketStatus() { this->ossBucketStatus_ = nullptr;};
    inline bool ossBucketStatus() const { DARABONBA_PTR_GET_DEFAULT(ossBucketStatus_, false) };
    inline GetTrailStatusResponseBody& setOssBucketStatus(bool ossBucketStatus) { DARABONBA_PTR_SET_VALUE(ossBucketStatus_, ossBucketStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTrailStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsLogStoreStatus Field Functions 
    bool hasSlsLogStoreStatus() const { return this->slsLogStoreStatus_ != nullptr;};
    void deleteSlsLogStoreStatus() { this->slsLogStoreStatus_ = nullptr;};
    inline bool slsLogStoreStatus() const { DARABONBA_PTR_GET_DEFAULT(slsLogStoreStatus_, false) };
    inline GetTrailStatusResponseBody& setSlsLogStoreStatus(bool slsLogStoreStatus) { DARABONBA_PTR_SET_VALUE(slsLogStoreStatus_, slsLogStoreStatus) };


    // startLoggingTime Field Functions 
    bool hasStartLoggingTime() const { return this->startLoggingTime_ != nullptr;};
    void deleteStartLoggingTime() { this->startLoggingTime_ = nullptr;};
    inline string startLoggingTime() const { DARABONBA_PTR_GET_DEFAULT(startLoggingTime_, "") };
    inline GetTrailStatusResponseBody& setStartLoggingTime(string startLoggingTime) { DARABONBA_PTR_SET_VALUE(startLoggingTime_, startLoggingTime) };


    // stopLoggingTime Field Functions 
    bool hasStopLoggingTime() const { return this->stopLoggingTime_ != nullptr;};
    void deleteStopLoggingTime() { this->stopLoggingTime_ = nullptr;};
    inline string stopLoggingTime() const { DARABONBA_PTR_GET_DEFAULT(stopLoggingTime_, "") };
    inline GetTrailStatusResponseBody& setStopLoggingTime(string stopLoggingTime) { DARABONBA_PTR_SET_VALUE(stopLoggingTime_, stopLoggingTime) };


  protected:
    // Indicates whether logging is enabled for the trail. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isLogging_ = nullptr;
    // The log of the last failed delivery.
    std::shared_ptr<string> latestDeliveryError_ = nullptr;
    // The log of the last failed delivery to Log Service.
    std::shared_ptr<string> latestDeliveryLogServiceError_ = nullptr;
    // The most recent time when an event was delivered to Log Service.
    std::shared_ptr<string> latestDeliveryLogServiceTime_ = nullptr;
    // The most recent time when an event was delivered by the trail.
    std::shared_ptr<string> latestDeliveryTime_ = nullptr;
    // Indicates whether the destination Object Storage Service (OSS) bucket is available. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> ossBucketStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the destination Log Service Logstore is available. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> slsLogStoreStatus_ = nullptr;
    // The time when logging was last enabled for the trail.
    std::shared_ptr<string> startLoggingTime_ = nullptr;
    // The time when logging was last disabled for the trail.
    std::shared_ptr<string> stopLoggingTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
