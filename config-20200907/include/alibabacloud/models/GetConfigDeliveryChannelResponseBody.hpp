// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGDELIVERYCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGDELIVERYCHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConfigDeliveryChannelResponseBodyDeliveryChannel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigDeliveryChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigDeliveryChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannel, deliveryChannel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigDeliveryChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannel, deliveryChannel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConfigDeliveryChannelResponseBody() = default ;
    GetConfigDeliveryChannelResponseBody(const GetConfigDeliveryChannelResponseBody &) = default ;
    GetConfigDeliveryChannelResponseBody(GetConfigDeliveryChannelResponseBody &&) = default ;
    GetConfigDeliveryChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigDeliveryChannelResponseBody() = default ;
    GetConfigDeliveryChannelResponseBody& operator=(const GetConfigDeliveryChannelResponseBody &) = default ;
    GetConfigDeliveryChannelResponseBody& operator=(GetConfigDeliveryChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryChannel_ == nullptr
        && return this->requestId_ == nullptr; };
    // deliveryChannel Field Functions 
    bool hasDeliveryChannel() const { return this->deliveryChannel_ != nullptr;};
    void deleteDeliveryChannel() { this->deliveryChannel_ = nullptr;};
    inline const GetConfigDeliveryChannelResponseBodyDeliveryChannel & deliveryChannel() const { DARABONBA_PTR_GET_CONST(deliveryChannel_, GetConfigDeliveryChannelResponseBodyDeliveryChannel) };
    inline GetConfigDeliveryChannelResponseBodyDeliveryChannel deliveryChannel() { DARABONBA_PTR_GET(deliveryChannel_, GetConfigDeliveryChannelResponseBodyDeliveryChannel) };
    inline GetConfigDeliveryChannelResponseBody& setDeliveryChannel(const GetConfigDeliveryChannelResponseBodyDeliveryChannel & deliveryChannel) { DARABONBA_PTR_SET_VALUE(deliveryChannel_, deliveryChannel) };
    inline GetConfigDeliveryChannelResponseBody& setDeliveryChannel(GetConfigDeliveryChannelResponseBodyDeliveryChannel && deliveryChannel) { DARABONBA_PTR_SET_RVALUE(deliveryChannel_, deliveryChannel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConfigDeliveryChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the delivery channel.
    std::shared_ptr<GetConfigDeliveryChannelResponseBodyDeliveryChannel> deliveryChannel_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
