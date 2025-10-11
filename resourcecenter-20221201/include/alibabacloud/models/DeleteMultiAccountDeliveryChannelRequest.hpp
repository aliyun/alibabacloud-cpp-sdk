// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMULTIACCOUNTDELIVERYCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMULTIACCOUNTDELIVERYCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class DeleteMultiAccountDeliveryChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMultiAccountDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannelId, deliveryChannelId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMultiAccountDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannelId, deliveryChannelId_);
    };
    DeleteMultiAccountDeliveryChannelRequest() = default ;
    DeleteMultiAccountDeliveryChannelRequest(const DeleteMultiAccountDeliveryChannelRequest &) = default ;
    DeleteMultiAccountDeliveryChannelRequest(DeleteMultiAccountDeliveryChannelRequest &&) = default ;
    DeleteMultiAccountDeliveryChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMultiAccountDeliveryChannelRequest() = default ;
    DeleteMultiAccountDeliveryChannelRequest& operator=(const DeleteMultiAccountDeliveryChannelRequest &) = default ;
    DeleteMultiAccountDeliveryChannelRequest& operator=(DeleteMultiAccountDeliveryChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deliveryChannelId_ != nullptr; };
    // deliveryChannelId Field Functions 
    bool hasDeliveryChannelId() const { return this->deliveryChannelId_ != nullptr;};
    void deleteDeliveryChannelId() { this->deliveryChannelId_ = nullptr;};
    inline string deliveryChannelId() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelId_, "") };
    inline DeleteMultiAccountDeliveryChannelRequest& setDeliveryChannelId(string deliveryChannelId) { DARABONBA_PTR_SET_VALUE(deliveryChannelId_, deliveryChannelId) };


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
