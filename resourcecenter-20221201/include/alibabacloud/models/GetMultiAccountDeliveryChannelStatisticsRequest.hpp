// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIACCOUNTDELIVERYCHANNELSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIACCOUNTDELIVERYCHANNELSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetMultiAccountDeliveryChannelStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiAccountDeliveryChannelStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannelId, deliveryChannelId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiAccountDeliveryChannelStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannelId, deliveryChannelId_);
    };
    GetMultiAccountDeliveryChannelStatisticsRequest() = default ;
    GetMultiAccountDeliveryChannelStatisticsRequest(const GetMultiAccountDeliveryChannelStatisticsRequest &) = default ;
    GetMultiAccountDeliveryChannelStatisticsRequest(GetMultiAccountDeliveryChannelStatisticsRequest &&) = default ;
    GetMultiAccountDeliveryChannelStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiAccountDeliveryChannelStatisticsRequest() = default ;
    GetMultiAccountDeliveryChannelStatisticsRequest& operator=(const GetMultiAccountDeliveryChannelStatisticsRequest &) = default ;
    GetMultiAccountDeliveryChannelStatisticsRequest& operator=(GetMultiAccountDeliveryChannelStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryChannelId_ == nullptr; };
    // deliveryChannelId Field Functions 
    bool hasDeliveryChannelId() const { return this->deliveryChannelId_ != nullptr;};
    void deleteDeliveryChannelId() { this->deliveryChannelId_ = nullptr;};
    inline string deliveryChannelId() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelId_, "") };
    inline GetMultiAccountDeliveryChannelStatisticsRequest& setDeliveryChannelId(string deliveryChannelId) { DARABONBA_PTR_SET_VALUE(deliveryChannelId_, deliveryChannelId) };


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
