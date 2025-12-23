// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDELIVERYCHANNELSTATISTICSRESPONSEBODYDELIVERYCHANNELSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_GETDELIVERYCHANNELSTATISTICSRESPONSEBODYDELIVERYCHANNELSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannelId, deliveryChannelId_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_TO_JSON(LatestChangeDeliveryTime, latestChangeDeliveryTime_);
      DARABONBA_PTR_TO_JSON(LatestSnapshotDeliveryTime, latestSnapshotDeliveryTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannelId, deliveryChannelId_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_FROM_JSON(LatestChangeDeliveryTime, latestChangeDeliveryTime_);
      DARABONBA_PTR_FROM_JSON(LatestSnapshotDeliveryTime, latestSnapshotDeliveryTime_);
    };
    GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics() = default ;
    GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics(const GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics &) = default ;
    GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics(GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics &&) = default ;
    GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics() = default ;
    GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics& operator=(const GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics &) = default ;
    GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics& operator=(GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryChannelId_ == nullptr
        && return this->deliveryChannelName_ == nullptr && return this->latestChangeDeliveryTime_ == nullptr && return this->latestSnapshotDeliveryTime_ == nullptr; };
    // deliveryChannelId Field Functions 
    bool hasDeliveryChannelId() const { return this->deliveryChannelId_ != nullptr;};
    void deleteDeliveryChannelId() { this->deliveryChannelId_ = nullptr;};
    inline string deliveryChannelId() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelId_, "") };
    inline GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics& setDeliveryChannelId(string deliveryChannelId) { DARABONBA_PTR_SET_VALUE(deliveryChannelId_, deliveryChannelId) };


    // deliveryChannelName Field Functions 
    bool hasDeliveryChannelName() const { return this->deliveryChannelName_ != nullptr;};
    void deleteDeliveryChannelName() { this->deliveryChannelName_ = nullptr;};
    inline string deliveryChannelName() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelName_, "") };
    inline GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics& setDeliveryChannelName(string deliveryChannelName) { DARABONBA_PTR_SET_VALUE(deliveryChannelName_, deliveryChannelName) };


    // latestChangeDeliveryTime Field Functions 
    bool hasLatestChangeDeliveryTime() const { return this->latestChangeDeliveryTime_ != nullptr;};
    void deleteLatestChangeDeliveryTime() { this->latestChangeDeliveryTime_ = nullptr;};
    inline string latestChangeDeliveryTime() const { DARABONBA_PTR_GET_DEFAULT(latestChangeDeliveryTime_, "") };
    inline GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics& setLatestChangeDeliveryTime(string latestChangeDeliveryTime) { DARABONBA_PTR_SET_VALUE(latestChangeDeliveryTime_, latestChangeDeliveryTime) };


    // latestSnapshotDeliveryTime Field Functions 
    bool hasLatestSnapshotDeliveryTime() const { return this->latestSnapshotDeliveryTime_ != nullptr;};
    void deleteLatestSnapshotDeliveryTime() { this->latestSnapshotDeliveryTime_ = nullptr;};
    inline string latestSnapshotDeliveryTime() const { DARABONBA_PTR_GET_DEFAULT(latestSnapshotDeliveryTime_, "") };
    inline GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics& setLatestSnapshotDeliveryTime(string latestSnapshotDeliveryTime) { DARABONBA_PTR_SET_VALUE(latestSnapshotDeliveryTime_, latestSnapshotDeliveryTime) };


  protected:
    // The ID of the delivery channel.
    std::shared_ptr<string> deliveryChannelId_ = nullptr;
    // The name of the delivery channel.
    std::shared_ptr<string> deliveryChannelName_ = nullptr;
    // The last delivery time of resource configuration change events.
    std::shared_ptr<string> latestChangeDeliveryTime_ = nullptr;
    // The last delivery time of scheduled resource snapshots.
    std::shared_ptr<string> latestSnapshotDeliveryTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
