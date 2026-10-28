// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubscriptionForView.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListSubscriptionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubscriptionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(subscriptionList, subscriptionList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubscriptionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(subscriptionList, subscriptionList_);
    };
    ListSubscriptionsResponseBody() = default ;
    ListSubscriptionsResponseBody(const ListSubscriptionsResponseBody &) = default ;
    ListSubscriptionsResponseBody(ListSubscriptionsResponseBody &&) = default ;
    ListSubscriptionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubscriptionsResponseBody() = default ;
    ListSubscriptionsResponseBody& operator=(const ListSubscriptionsResponseBody &) = default ;
    ListSubscriptionsResponseBody& operator=(ListSubscriptionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->subscriptionList_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSubscriptionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSubscriptionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSubscriptionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subscriptionList Field Functions 
    bool hasSubscriptionList() const { return this->subscriptionList_ != nullptr;};
    void deleteSubscriptionList() { this->subscriptionList_ = nullptr;};
    inline const vector<SubscriptionForView> & getSubscriptionList() const { DARABONBA_PTR_GET_CONST(subscriptionList_, vector<SubscriptionForView>) };
    inline vector<SubscriptionForView> getSubscriptionList() { DARABONBA_PTR_GET(subscriptionList_, vector<SubscriptionForView>) };
    inline ListSubscriptionsResponseBody& setSubscriptionList(const vector<SubscriptionForView> & subscriptionList) { DARABONBA_PTR_SET_VALUE(subscriptionList_, subscriptionList) };
    inline ListSubscriptionsResponseBody& setSubscriptionList(vector<SubscriptionForView> && subscriptionList) { DARABONBA_PTR_SET_RVALUE(subscriptionList_, subscriptionList) };


  protected:
    // The maximum number of records returned for the current request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The list of subscriptions.
    shared_ptr<vector<SubscriptionForView>> subscriptionList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
