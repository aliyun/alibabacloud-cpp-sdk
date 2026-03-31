// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGGREGATECONFIGDELIVERYCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGGREGATECONFIGDELIVERYCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteAggregateConfigDeliveryChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAggregateConfigDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelId, deliveryChannelId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAggregateConfigDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelId, deliveryChannelId_);
    };
    DeleteAggregateConfigDeliveryChannelRequest() = default ;
    DeleteAggregateConfigDeliveryChannelRequest(const DeleteAggregateConfigDeliveryChannelRequest &) = default ;
    DeleteAggregateConfigDeliveryChannelRequest(DeleteAggregateConfigDeliveryChannelRequest &&) = default ;
    DeleteAggregateConfigDeliveryChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAggregateConfigDeliveryChannelRequest() = default ;
    DeleteAggregateConfigDeliveryChannelRequest& operator=(const DeleteAggregateConfigDeliveryChannelRequest &) = default ;
    DeleteAggregateConfigDeliveryChannelRequest& operator=(DeleteAggregateConfigDeliveryChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->deliveryChannelId_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline DeleteAggregateConfigDeliveryChannelRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // deliveryChannelId Field Functions 
    bool hasDeliveryChannelId() const { return this->deliveryChannelId_ != nullptr;};
    void deleteDeliveryChannelId() { this->deliveryChannelId_ = nullptr;};
    inline string getDeliveryChannelId() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelId_, "") };
    inline DeleteAggregateConfigDeliveryChannelRequest& setDeliveryChannelId(string deliveryChannelId) { DARABONBA_PTR_SET_VALUE(deliveryChannelId_, deliveryChannelId) };


  protected:
    // The ID of the account group.
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // The ID of the delivery channel.
    // 
    // For more information about how to obtain the ID of a delivery channel, see [ListAggregateConfigDeliveryChannels](https://help.aliyun.com/document_detail/429842.html).
    // 
    // This parameter is required.
    shared_ptr<string> deliveryChannelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
