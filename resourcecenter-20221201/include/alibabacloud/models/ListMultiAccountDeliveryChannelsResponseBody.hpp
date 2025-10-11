// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIACCOUNTDELIVERYCHANNELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIACCOUNTDELIVERYCHANNELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMultiAccountDeliveryChannelsResponseBodyDeliveryChannels.hpp>
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
    virtual bool empty() const override { this->deliveryChannels_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // deliveryChannels Field Functions 
    bool hasDeliveryChannels() const { return this->deliveryChannels_ != nullptr;};
    void deleteDeliveryChannels() { this->deliveryChannels_ = nullptr;};
    inline const vector<ListMultiAccountDeliveryChannelsResponseBodyDeliveryChannels> & deliveryChannels() const { DARABONBA_PTR_GET_CONST(deliveryChannels_, vector<ListMultiAccountDeliveryChannelsResponseBodyDeliveryChannels>) };
    inline vector<ListMultiAccountDeliveryChannelsResponseBodyDeliveryChannels> deliveryChannels() { DARABONBA_PTR_GET(deliveryChannels_, vector<ListMultiAccountDeliveryChannelsResponseBodyDeliveryChannels>) };
    inline ListMultiAccountDeliveryChannelsResponseBody& setDeliveryChannels(const vector<ListMultiAccountDeliveryChannelsResponseBodyDeliveryChannels> & deliveryChannels) { DARABONBA_PTR_SET_VALUE(deliveryChannels_, deliveryChannels) };
    inline ListMultiAccountDeliveryChannelsResponseBody& setDeliveryChannels(vector<ListMultiAccountDeliveryChannelsResponseBodyDeliveryChannels> && deliveryChannels) { DARABONBA_PTR_SET_RVALUE(deliveryChannels_, deliveryChannels) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMultiAccountDeliveryChannelsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMultiAccountDeliveryChannelsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMultiAccountDeliveryChannelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The delivery channels.
    std::shared_ptr<vector<ListMultiAccountDeliveryChannelsResponseBodyDeliveryChannels>> deliveryChannels_ = nullptr;
    // The maximum number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
