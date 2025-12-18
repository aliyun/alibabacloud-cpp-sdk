// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGDELIVERYCHANNELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGDELIVERYCHANNELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateConfigDeliveryChannelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateConfigDeliveryChannelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelIds, deliveryChannelIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateConfigDeliveryChannelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelIds, deliveryChannelIds_);
    };
    ListAggregateConfigDeliveryChannelsRequest() = default ;
    ListAggregateConfigDeliveryChannelsRequest(const ListAggregateConfigDeliveryChannelsRequest &) = default ;
    ListAggregateConfigDeliveryChannelsRequest(ListAggregateConfigDeliveryChannelsRequest &&) = default ;
    ListAggregateConfigDeliveryChannelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateConfigDeliveryChannelsRequest() = default ;
    ListAggregateConfigDeliveryChannelsRequest& operator=(const ListAggregateConfigDeliveryChannelsRequest &) = default ;
    ListAggregateConfigDeliveryChannelsRequest& operator=(ListAggregateConfigDeliveryChannelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && return this->deliveryChannelIds_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline ListAggregateConfigDeliveryChannelsRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // deliveryChannelIds Field Functions 
    bool hasDeliveryChannelIds() const { return this->deliveryChannelIds_ != nullptr;};
    void deleteDeliveryChannelIds() { this->deliveryChannelIds_ = nullptr;};
    inline string deliveryChannelIds() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelIds_, "") };
    inline ListAggregateConfigDeliveryChannelsRequest& setDeliveryChannelIds(string deliveryChannelIds) { DARABONBA_PTR_SET_VALUE(deliveryChannelIds_, deliveryChannelIds) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of the account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The IDs of the delivery channels. Separate multiple IDs with commas (,).
    std::shared_ptr<string> deliveryChannelIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
