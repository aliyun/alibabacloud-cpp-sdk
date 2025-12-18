// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECONFIGDELIVERYCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECONFIGDELIVERYCHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregateConfigDeliveryChannelResponseBodyDeliveryChannel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateConfigDeliveryChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateConfigDeliveryChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannel, deliveryChannel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateConfigDeliveryChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannel, deliveryChannel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateConfigDeliveryChannelResponseBody() = default ;
    GetAggregateConfigDeliveryChannelResponseBody(const GetAggregateConfigDeliveryChannelResponseBody &) = default ;
    GetAggregateConfigDeliveryChannelResponseBody(GetAggregateConfigDeliveryChannelResponseBody &&) = default ;
    GetAggregateConfigDeliveryChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateConfigDeliveryChannelResponseBody() = default ;
    GetAggregateConfigDeliveryChannelResponseBody& operator=(const GetAggregateConfigDeliveryChannelResponseBody &) = default ;
    GetAggregateConfigDeliveryChannelResponseBody& operator=(GetAggregateConfigDeliveryChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryChannel_ == nullptr
        && return this->requestId_ == nullptr; };
    // deliveryChannel Field Functions 
    bool hasDeliveryChannel() const { return this->deliveryChannel_ != nullptr;};
    void deleteDeliveryChannel() { this->deliveryChannel_ = nullptr;};
    inline const GetAggregateConfigDeliveryChannelResponseBodyDeliveryChannel & deliveryChannel() const { DARABONBA_PTR_GET_CONST(deliveryChannel_, GetAggregateConfigDeliveryChannelResponseBodyDeliveryChannel) };
    inline GetAggregateConfigDeliveryChannelResponseBodyDeliveryChannel deliveryChannel() { DARABONBA_PTR_GET(deliveryChannel_, GetAggregateConfigDeliveryChannelResponseBodyDeliveryChannel) };
    inline GetAggregateConfigDeliveryChannelResponseBody& setDeliveryChannel(const GetAggregateConfigDeliveryChannelResponseBodyDeliveryChannel & deliveryChannel) { DARABONBA_PTR_SET_VALUE(deliveryChannel_, deliveryChannel) };
    inline GetAggregateConfigDeliveryChannelResponseBody& setDeliveryChannel(GetAggregateConfigDeliveryChannelResponseBodyDeliveryChannel && deliveryChannel) { DARABONBA_PTR_SET_RVALUE(deliveryChannel_, deliveryChannel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateConfigDeliveryChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about a delivery channel.
    std::shared_ptr<GetAggregateConfigDeliveryChannelResponseBodyDeliveryChannel> deliveryChannel_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
