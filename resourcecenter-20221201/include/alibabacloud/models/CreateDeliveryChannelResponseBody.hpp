// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDELIVERYCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDELIVERYCHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class CreateDeliveryChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeliveryChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannelId, deliveryChannelId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeliveryChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannelId, deliveryChannelId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDeliveryChannelResponseBody() = default ;
    CreateDeliveryChannelResponseBody(const CreateDeliveryChannelResponseBody &) = default ;
    CreateDeliveryChannelResponseBody(CreateDeliveryChannelResponseBody &&) = default ;
    CreateDeliveryChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeliveryChannelResponseBody() = default ;
    CreateDeliveryChannelResponseBody& operator=(const CreateDeliveryChannelResponseBody &) = default ;
    CreateDeliveryChannelResponseBody& operator=(CreateDeliveryChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryChannelId_ == nullptr
        && return this->requestId_ == nullptr; };
    // deliveryChannelId Field Functions 
    bool hasDeliveryChannelId() const { return this->deliveryChannelId_ != nullptr;};
    void deleteDeliveryChannelId() { this->deliveryChannelId_ = nullptr;};
    inline string deliveryChannelId() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelId_, "") };
    inline CreateDeliveryChannelResponseBody& setDeliveryChannelId(string deliveryChannelId) { DARABONBA_PTR_SET_VALUE(deliveryChannelId_, deliveryChannelId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDeliveryChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the delivery channel.
    std::shared_ptr<string> deliveryChannelId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
