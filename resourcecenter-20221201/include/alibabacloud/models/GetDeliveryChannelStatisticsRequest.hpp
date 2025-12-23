// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDELIVERYCHANNELSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDELIVERYCHANNELSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetDeliveryChannelStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeliveryChannelStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannelId, deliveryChannelId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeliveryChannelStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannelId, deliveryChannelId_);
    };
    GetDeliveryChannelStatisticsRequest() = default ;
    GetDeliveryChannelStatisticsRequest(const GetDeliveryChannelStatisticsRequest &) = default ;
    GetDeliveryChannelStatisticsRequest(GetDeliveryChannelStatisticsRequest &&) = default ;
    GetDeliveryChannelStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeliveryChannelStatisticsRequest() = default ;
    GetDeliveryChannelStatisticsRequest& operator=(const GetDeliveryChannelStatisticsRequest &) = default ;
    GetDeliveryChannelStatisticsRequest& operator=(GetDeliveryChannelStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryChannelId_ == nullptr; };
    // deliveryChannelId Field Functions 
    bool hasDeliveryChannelId() const { return this->deliveryChannelId_ != nullptr;};
    void deleteDeliveryChannelId() { this->deliveryChannelId_ = nullptr;};
    inline string deliveryChannelId() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelId_, "") };
    inline GetDeliveryChannelStatisticsRequest& setDeliveryChannelId(string deliveryChannelId) { DARABONBA_PTR_SET_VALUE(deliveryChannelId_, deliveryChannelId) };


  protected:
    // The ID of the delivery channel.
    // 
    // This parameter is required.
    std::shared_ptr<string> deliveryChannelId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
