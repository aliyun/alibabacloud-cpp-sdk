// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDELIVERYCHANNELSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDELIVERYCHANNELSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetDeliveryChannelStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeliveryChannelStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannelStatistics, deliveryChannelStatistics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeliveryChannelStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannelStatistics, deliveryChannelStatistics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDeliveryChannelStatisticsResponseBody() = default ;
    GetDeliveryChannelStatisticsResponseBody(const GetDeliveryChannelStatisticsResponseBody &) = default ;
    GetDeliveryChannelStatisticsResponseBody(GetDeliveryChannelStatisticsResponseBody &&) = default ;
    GetDeliveryChannelStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeliveryChannelStatisticsResponseBody() = default ;
    GetDeliveryChannelStatisticsResponseBody& operator=(const GetDeliveryChannelStatisticsResponseBody &) = default ;
    GetDeliveryChannelStatisticsResponseBody& operator=(GetDeliveryChannelStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeliveryChannelStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeliveryChannelStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(DeliveryChannelId, deliveryChannelId_);
        DARABONBA_PTR_TO_JSON(DeliveryChannelName, deliveryChannelName_);
        DARABONBA_PTR_TO_JSON(LatestChangeDeliveryTime, latestChangeDeliveryTime_);
        DARABONBA_PTR_TO_JSON(LatestSnapshotDeliveryTime, latestSnapshotDeliveryTime_);
      };
      friend void from_json(const Darabonba::Json& j, DeliveryChannelStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(DeliveryChannelId, deliveryChannelId_);
        DARABONBA_PTR_FROM_JSON(DeliveryChannelName, deliveryChannelName_);
        DARABONBA_PTR_FROM_JSON(LatestChangeDeliveryTime, latestChangeDeliveryTime_);
        DARABONBA_PTR_FROM_JSON(LatestSnapshotDeliveryTime, latestSnapshotDeliveryTime_);
      };
      DeliveryChannelStatistics() = default ;
      DeliveryChannelStatistics(const DeliveryChannelStatistics &) = default ;
      DeliveryChannelStatistics(DeliveryChannelStatistics &&) = default ;
      DeliveryChannelStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeliveryChannelStatistics() = default ;
      DeliveryChannelStatistics& operator=(const DeliveryChannelStatistics &) = default ;
      DeliveryChannelStatistics& operator=(DeliveryChannelStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deliveryChannelId_ == nullptr
        && this->deliveryChannelName_ == nullptr && this->latestChangeDeliveryTime_ == nullptr && this->latestSnapshotDeliveryTime_ == nullptr; };
      // deliveryChannelId Field Functions 
      bool hasDeliveryChannelId() const { return this->deliveryChannelId_ != nullptr;};
      void deleteDeliveryChannelId() { this->deliveryChannelId_ = nullptr;};
      inline string getDeliveryChannelId() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelId_, "") };
      inline DeliveryChannelStatistics& setDeliveryChannelId(string deliveryChannelId) { DARABONBA_PTR_SET_VALUE(deliveryChannelId_, deliveryChannelId) };


      // deliveryChannelName Field Functions 
      bool hasDeliveryChannelName() const { return this->deliveryChannelName_ != nullptr;};
      void deleteDeliveryChannelName() { this->deliveryChannelName_ = nullptr;};
      inline string getDeliveryChannelName() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelName_, "") };
      inline DeliveryChannelStatistics& setDeliveryChannelName(string deliveryChannelName) { DARABONBA_PTR_SET_VALUE(deliveryChannelName_, deliveryChannelName) };


      // latestChangeDeliveryTime Field Functions 
      bool hasLatestChangeDeliveryTime() const { return this->latestChangeDeliveryTime_ != nullptr;};
      void deleteLatestChangeDeliveryTime() { this->latestChangeDeliveryTime_ = nullptr;};
      inline string getLatestChangeDeliveryTime() const { DARABONBA_PTR_GET_DEFAULT(latestChangeDeliveryTime_, "") };
      inline DeliveryChannelStatistics& setLatestChangeDeliveryTime(string latestChangeDeliveryTime) { DARABONBA_PTR_SET_VALUE(latestChangeDeliveryTime_, latestChangeDeliveryTime) };


      // latestSnapshotDeliveryTime Field Functions 
      bool hasLatestSnapshotDeliveryTime() const { return this->latestSnapshotDeliveryTime_ != nullptr;};
      void deleteLatestSnapshotDeliveryTime() { this->latestSnapshotDeliveryTime_ = nullptr;};
      inline string getLatestSnapshotDeliveryTime() const { DARABONBA_PTR_GET_DEFAULT(latestSnapshotDeliveryTime_, "") };
      inline DeliveryChannelStatistics& setLatestSnapshotDeliveryTime(string latestSnapshotDeliveryTime) { DARABONBA_PTR_SET_VALUE(latestSnapshotDeliveryTime_, latestSnapshotDeliveryTime) };


    protected:
      // The ID of the delivery channel.
      shared_ptr<string> deliveryChannelId_ {};
      // The name of the delivery channel.
      shared_ptr<string> deliveryChannelName_ {};
      // The last delivery time of resource configuration change events.
      shared_ptr<string> latestChangeDeliveryTime_ {};
      // The last delivery time of scheduled resource snapshots.
      shared_ptr<string> latestSnapshotDeliveryTime_ {};
    };

    virtual bool empty() const override { return this->deliveryChannelStatistics_ == nullptr
        && this->requestId_ == nullptr; };
    // deliveryChannelStatistics Field Functions 
    bool hasDeliveryChannelStatistics() const { return this->deliveryChannelStatistics_ != nullptr;};
    void deleteDeliveryChannelStatistics() { this->deliveryChannelStatistics_ = nullptr;};
    inline const GetDeliveryChannelStatisticsResponseBody::DeliveryChannelStatistics & getDeliveryChannelStatistics() const { DARABONBA_PTR_GET_CONST(deliveryChannelStatistics_, GetDeliveryChannelStatisticsResponseBody::DeliveryChannelStatistics) };
    inline GetDeliveryChannelStatisticsResponseBody::DeliveryChannelStatistics getDeliveryChannelStatistics() { DARABONBA_PTR_GET(deliveryChannelStatistics_, GetDeliveryChannelStatisticsResponseBody::DeliveryChannelStatistics) };
    inline GetDeliveryChannelStatisticsResponseBody& setDeliveryChannelStatistics(const GetDeliveryChannelStatisticsResponseBody::DeliveryChannelStatistics & deliveryChannelStatistics) { DARABONBA_PTR_SET_VALUE(deliveryChannelStatistics_, deliveryChannelStatistics) };
    inline GetDeliveryChannelStatisticsResponseBody& setDeliveryChannelStatistics(GetDeliveryChannelStatisticsResponseBody::DeliveryChannelStatistics && deliveryChannelStatistics) { DARABONBA_PTR_SET_RVALUE(deliveryChannelStatistics_, deliveryChannelStatistics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeliveryChannelStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics on the delivery channel.
    shared_ptr<GetDeliveryChannelStatisticsResponseBody::DeliveryChannelStatistics> deliveryChannelStatistics_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
