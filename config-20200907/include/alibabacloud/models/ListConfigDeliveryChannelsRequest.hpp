// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGDELIVERYCHANNELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGDELIVERYCHANNELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListConfigDeliveryChannelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigDeliveryChannelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannelIds, deliveryChannelIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigDeliveryChannelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannelIds, deliveryChannelIds_);
    };
    ListConfigDeliveryChannelsRequest() = default ;
    ListConfigDeliveryChannelsRequest(const ListConfigDeliveryChannelsRequest &) = default ;
    ListConfigDeliveryChannelsRequest(ListConfigDeliveryChannelsRequest &&) = default ;
    ListConfigDeliveryChannelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigDeliveryChannelsRequest() = default ;
    ListConfigDeliveryChannelsRequest& operator=(const ListConfigDeliveryChannelsRequest &) = default ;
    ListConfigDeliveryChannelsRequest& operator=(ListConfigDeliveryChannelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryChannelIds_ == nullptr; };
    // deliveryChannelIds Field Functions 
    bool hasDeliveryChannelIds() const { return this->deliveryChannelIds_ != nullptr;};
    void deleteDeliveryChannelIds() { this->deliveryChannelIds_ = nullptr;};
    inline string deliveryChannelIds() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelIds_, "") };
    inline ListConfigDeliveryChannelsRequest& setDeliveryChannelIds(string deliveryChannelIds) { DARABONBA_PTR_SET_VALUE(deliveryChannelIds_, deliveryChannelIds) };


  protected:
    // The ID of the delivery channel. Separate multiple IDs with commas (,).
    std::shared_ptr<string> deliveryChannelIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
