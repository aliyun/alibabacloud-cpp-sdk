// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListSubscriptionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubscriptionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentUuid, agentUuid_);
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(notifyStrategyUuid, notifyStrategyUuid_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(subscriptionId, subscriptionId_);
      DARABONBA_PTR_TO_JSON(subscriptionName, subscriptionName_);
      DARABONBA_PTR_TO_JSON(subscriptionType, subscriptionType_);
      DARABONBA_PTR_TO_JSON(unbound, unbound_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubscriptionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentUuid, agentUuid_);
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyUuid, notifyStrategyUuid_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(subscriptionId, subscriptionId_);
      DARABONBA_PTR_FROM_JSON(subscriptionName, subscriptionName_);
      DARABONBA_PTR_FROM_JSON(subscriptionType, subscriptionType_);
      DARABONBA_PTR_FROM_JSON(unbound, unbound_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListSubscriptionsRequest() = default ;
    ListSubscriptionsRequest(const ListSubscriptionsRequest &) = default ;
    ListSubscriptionsRequest(ListSubscriptionsRequest &&) = default ;
    ListSubscriptionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubscriptionsRequest() = default ;
    ListSubscriptionsRequest& operator=(const ListSubscriptionsRequest &) = default ;
    ListSubscriptionsRequest& operator=(ListSubscriptionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentUuid_ == nullptr
        && this->direction_ == nullptr && this->enable_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->notifyStrategyUuid_ == nullptr
        && this->orderBy_ == nullptr && this->subscriptionId_ == nullptr && this->subscriptionName_ == nullptr && this->subscriptionType_ == nullptr && this->unbound_ == nullptr
        && this->workspace_ == nullptr; };
    // agentUuid Field Functions 
    bool hasAgentUuid() const { return this->agentUuid_ != nullptr;};
    void deleteAgentUuid() { this->agentUuid_ = nullptr;};
    inline string getAgentUuid() const { DARABONBA_PTR_GET_DEFAULT(agentUuid_, "") };
    inline ListSubscriptionsRequest& setAgentUuid(string agentUuid) { DARABONBA_PTR_SET_VALUE(agentUuid_, agentUuid) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ListSubscriptionsRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ListSubscriptionsRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSubscriptionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSubscriptionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // notifyStrategyUuid Field Functions 
    bool hasNotifyStrategyUuid() const { return this->notifyStrategyUuid_ != nullptr;};
    void deleteNotifyStrategyUuid() { this->notifyStrategyUuid_ = nullptr;};
    inline string getNotifyStrategyUuid() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyUuid_, "") };
    inline ListSubscriptionsRequest& setNotifyStrategyUuid(string notifyStrategyUuid) { DARABONBA_PTR_SET_VALUE(notifyStrategyUuid_, notifyStrategyUuid) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListSubscriptionsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // subscriptionId Field Functions 
    bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
    void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
    inline string getSubscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
    inline ListSubscriptionsRequest& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


    // subscriptionName Field Functions 
    bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
    void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
    inline string getSubscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
    inline ListSubscriptionsRequest& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline ListSubscriptionsRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


    // unbound Field Functions 
    bool hasUnbound() const { return this->unbound_ != nullptr;};
    void deleteUnbound() { this->unbound_ = nullptr;};
    inline bool getUnbound() const { DARABONBA_PTR_GET_DEFAULT(unbound_, false) };
    inline ListSubscriptionsRequest& setUnbound(bool unbound) { DARABONBA_PTR_SET_VALUE(unbound_, unbound) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListSubscriptionsRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<string> agentUuid_ {};
    shared_ptr<string> direction_ {};
    shared_ptr<bool> enable_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> notifyStrategyUuid_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> subscriptionId_ {};
    shared_ptr<string> subscriptionName_ {};
    shared_ptr<string> subscriptionType_ {};
    shared_ptr<bool> unbound_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
