// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGDELIVERYCHANNELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGDELIVERYCHANNELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConfigDeliveryChannelsResponseBodyDeliveryChannels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListConfigDeliveryChannelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigDeliveryChannelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannels, deliveryChannels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigDeliveryChannelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannels, deliveryChannels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListConfigDeliveryChannelsResponseBody() = default ;
    ListConfigDeliveryChannelsResponseBody(const ListConfigDeliveryChannelsResponseBody &) = default ;
    ListConfigDeliveryChannelsResponseBody(ListConfigDeliveryChannelsResponseBody &&) = default ;
    ListConfigDeliveryChannelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigDeliveryChannelsResponseBody() = default ;
    ListConfigDeliveryChannelsResponseBody& operator=(const ListConfigDeliveryChannelsResponseBody &) = default ;
    ListConfigDeliveryChannelsResponseBody& operator=(ListConfigDeliveryChannelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryChannels_ == nullptr
        && return this->requestId_ == nullptr; };
    // deliveryChannels Field Functions 
    bool hasDeliveryChannels() const { return this->deliveryChannels_ != nullptr;};
    void deleteDeliveryChannels() { this->deliveryChannels_ = nullptr;};
    inline const vector<ListConfigDeliveryChannelsResponseBodyDeliveryChannels> & deliveryChannels() const { DARABONBA_PTR_GET_CONST(deliveryChannels_, vector<ListConfigDeliveryChannelsResponseBodyDeliveryChannels>) };
    inline vector<ListConfigDeliveryChannelsResponseBodyDeliveryChannels> deliveryChannels() { DARABONBA_PTR_GET(deliveryChannels_, vector<ListConfigDeliveryChannelsResponseBodyDeliveryChannels>) };
    inline ListConfigDeliveryChannelsResponseBody& setDeliveryChannels(const vector<ListConfigDeliveryChannelsResponseBodyDeliveryChannels> & deliveryChannels) { DARABONBA_PTR_SET_VALUE(deliveryChannels_, deliveryChannels) };
    inline ListConfigDeliveryChannelsResponseBody& setDeliveryChannels(vector<ListConfigDeliveryChannelsResponseBodyDeliveryChannels> && deliveryChannels) { DARABONBA_PTR_SET_RVALUE(deliveryChannels_, deliveryChannels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConfigDeliveryChannelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the delivery channels.
    std::shared_ptr<vector<ListConfigDeliveryChannelsResponseBodyDeliveryChannels>> deliveryChannels_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
