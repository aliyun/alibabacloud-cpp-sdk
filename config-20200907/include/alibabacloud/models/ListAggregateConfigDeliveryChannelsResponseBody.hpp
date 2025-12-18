// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGDELIVERYCHANNELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGDELIVERYCHANNELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAggregateConfigDeliveryChannelsResponseBodyDeliveryChannels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateConfigDeliveryChannelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateConfigDeliveryChannelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannels, deliveryChannels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateConfigDeliveryChannelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannels, deliveryChannels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAggregateConfigDeliveryChannelsResponseBody() = default ;
    ListAggregateConfigDeliveryChannelsResponseBody(const ListAggregateConfigDeliveryChannelsResponseBody &) = default ;
    ListAggregateConfigDeliveryChannelsResponseBody(ListAggregateConfigDeliveryChannelsResponseBody &&) = default ;
    ListAggregateConfigDeliveryChannelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateConfigDeliveryChannelsResponseBody() = default ;
    ListAggregateConfigDeliveryChannelsResponseBody& operator=(const ListAggregateConfigDeliveryChannelsResponseBody &) = default ;
    ListAggregateConfigDeliveryChannelsResponseBody& operator=(ListAggregateConfigDeliveryChannelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryChannels_ == nullptr
        && return this->requestId_ == nullptr; };
    // deliveryChannels Field Functions 
    bool hasDeliveryChannels() const { return this->deliveryChannels_ != nullptr;};
    void deleteDeliveryChannels() { this->deliveryChannels_ = nullptr;};
    inline const vector<ListAggregateConfigDeliveryChannelsResponseBodyDeliveryChannels> & deliveryChannels() const { DARABONBA_PTR_GET_CONST(deliveryChannels_, vector<ListAggregateConfigDeliveryChannelsResponseBodyDeliveryChannels>) };
    inline vector<ListAggregateConfigDeliveryChannelsResponseBodyDeliveryChannels> deliveryChannels() { DARABONBA_PTR_GET(deliveryChannels_, vector<ListAggregateConfigDeliveryChannelsResponseBodyDeliveryChannels>) };
    inline ListAggregateConfigDeliveryChannelsResponseBody& setDeliveryChannels(const vector<ListAggregateConfigDeliveryChannelsResponseBodyDeliveryChannels> & deliveryChannels) { DARABONBA_PTR_SET_VALUE(deliveryChannels_, deliveryChannels) };
    inline ListAggregateConfigDeliveryChannelsResponseBody& setDeliveryChannels(vector<ListAggregateConfigDeliveryChannelsResponseBodyDeliveryChannels> && deliveryChannels) { DARABONBA_PTR_SET_RVALUE(deliveryChannels_, deliveryChannels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregateConfigDeliveryChannelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the delivery channels.
    std::shared_ptr<vector<ListAggregateConfigDeliveryChannelsResponseBodyDeliveryChannels>> deliveryChannels_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
