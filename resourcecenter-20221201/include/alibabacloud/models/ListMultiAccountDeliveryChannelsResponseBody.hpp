// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIACCOUNTDELIVERYCHANNELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIACCOUNTDELIVERYCHANNELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListMultiAccountDeliveryChannelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiAccountDeliveryChannelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannels, deliveryChannels_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiAccountDeliveryChannelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannels, deliveryChannels_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMultiAccountDeliveryChannelsResponseBody() = default ;
    ListMultiAccountDeliveryChannelsResponseBody(const ListMultiAccountDeliveryChannelsResponseBody &) = default ;
    ListMultiAccountDeliveryChannelsResponseBody(ListMultiAccountDeliveryChannelsResponseBody &&) = default ;
    ListMultiAccountDeliveryChannelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiAccountDeliveryChannelsResponseBody() = default ;
    ListMultiAccountDeliveryChannelsResponseBody& operator=(const ListMultiAccountDeliveryChannelsResponseBody &) = default ;
    ListMultiAccountDeliveryChannelsResponseBody& operator=(ListMultiAccountDeliveryChannelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeliveryChannels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeliveryChannels& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DeliveryChannelDescription, deliveryChannelDescription_);
        DARABONBA_PTR_TO_JSON(DeliveryChannelId, deliveryChannelId_);
        DARABONBA_PTR_TO_JSON(DeliveryChannelName, deliveryChannelName_);
      };
      friend void from_json(const Darabonba::Json& j, DeliveryChannels& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DeliveryChannelDescription, deliveryChannelDescription_);
        DARABONBA_PTR_FROM_JSON(DeliveryChannelId, deliveryChannelId_);
        DARABONBA_PTR_FROM_JSON(DeliveryChannelName, deliveryChannelName_);
      };
      DeliveryChannels() = default ;
      DeliveryChannels(const DeliveryChannels &) = default ;
      DeliveryChannels(DeliveryChannels &&) = default ;
      DeliveryChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeliveryChannels() = default ;
      DeliveryChannels& operator=(const DeliveryChannels &) = default ;
      DeliveryChannels& operator=(DeliveryChannels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->deliveryChannelDescription_ == nullptr && this->deliveryChannelId_ == nullptr && this->deliveryChannelName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DeliveryChannels& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deliveryChannelDescription Field Functions 
      bool hasDeliveryChannelDescription() const { return this->deliveryChannelDescription_ != nullptr;};
      void deleteDeliveryChannelDescription() { this->deliveryChannelDescription_ = nullptr;};
      inline string getDeliveryChannelDescription() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelDescription_, "") };
      inline DeliveryChannels& setDeliveryChannelDescription(string deliveryChannelDescription) { DARABONBA_PTR_SET_VALUE(deliveryChannelDescription_, deliveryChannelDescription) };


      // deliveryChannelId Field Functions 
      bool hasDeliveryChannelId() const { return this->deliveryChannelId_ != nullptr;};
      void deleteDeliveryChannelId() { this->deliveryChannelId_ = nullptr;};
      inline string getDeliveryChannelId() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelId_, "") };
      inline DeliveryChannels& setDeliveryChannelId(string deliveryChannelId) { DARABONBA_PTR_SET_VALUE(deliveryChannelId_, deliveryChannelId) };


      // deliveryChannelName Field Functions 
      bool hasDeliveryChannelName() const { return this->deliveryChannelName_ != nullptr;};
      void deleteDeliveryChannelName() { this->deliveryChannelName_ = nullptr;};
      inline string getDeliveryChannelName() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelName_, "") };
      inline DeliveryChannels& setDeliveryChannelName(string deliveryChannelName) { DARABONBA_PTR_SET_VALUE(deliveryChannelName_, deliveryChannelName) };


    protected:
      // The time when the delivery channel was created.
      shared_ptr<string> createTime_ {};
      // The description of the delivery channel.
      shared_ptr<string> deliveryChannelDescription_ {};
      // The ID of the delivery channel.
      shared_ptr<string> deliveryChannelId_ {};
      // The name of the delivery channel.
      shared_ptr<string> deliveryChannelName_ {};
    };

    virtual bool empty() const override { return this->deliveryChannels_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // deliveryChannels Field Functions 
    bool hasDeliveryChannels() const { return this->deliveryChannels_ != nullptr;};
    void deleteDeliveryChannels() { this->deliveryChannels_ = nullptr;};
    inline const vector<ListMultiAccountDeliveryChannelsResponseBody::DeliveryChannels> & getDeliveryChannels() const { DARABONBA_PTR_GET_CONST(deliveryChannels_, vector<ListMultiAccountDeliveryChannelsResponseBody::DeliveryChannels>) };
    inline vector<ListMultiAccountDeliveryChannelsResponseBody::DeliveryChannels> getDeliveryChannels() { DARABONBA_PTR_GET(deliveryChannels_, vector<ListMultiAccountDeliveryChannelsResponseBody::DeliveryChannels>) };
    inline ListMultiAccountDeliveryChannelsResponseBody& setDeliveryChannels(const vector<ListMultiAccountDeliveryChannelsResponseBody::DeliveryChannels> & deliveryChannels) { DARABONBA_PTR_SET_VALUE(deliveryChannels_, deliveryChannels) };
    inline ListMultiAccountDeliveryChannelsResponseBody& setDeliveryChannels(vector<ListMultiAccountDeliveryChannelsResponseBody::DeliveryChannels> && deliveryChannels) { DARABONBA_PTR_SET_RVALUE(deliveryChannels_, deliveryChannels) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMultiAccountDeliveryChannelsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMultiAccountDeliveryChannelsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMultiAccountDeliveryChannelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The delivery channels.
    shared_ptr<vector<ListMultiAccountDeliveryChannelsResponseBody::DeliveryChannels>> deliveryChannels_ {};
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token.
    // 
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
