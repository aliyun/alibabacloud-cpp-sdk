// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class ListEventRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Subscription, subscriptionShrink_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Subscription, subscriptionShrink_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    ListEventRulesShrinkRequest() = default ;
    ListEventRulesShrinkRequest(const ListEventRulesShrinkRequest &) = default ;
    ListEventRulesShrinkRequest(ListEventRulesShrinkRequest &&) = default ;
    ListEventRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventRulesShrinkRequest() = default ;
    ListEventRulesShrinkRequest& operator=(const ListEventRulesShrinkRequest &) = default ;
    ListEventRulesShrinkRequest& operator=(ListEventRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->productName_ == nullptr && this->resourceName_ == nullptr
        && this->ruleName_ == nullptr && this->subscriptionShrink_ == nullptr && this->topicName_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEventRulesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEventRulesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline ListEventRulesShrinkRequest& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListEventRulesShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline ListEventRulesShrinkRequest& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ListEventRulesShrinkRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListEventRulesShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // subscriptionShrink Field Functions 
    bool hasSubscriptionShrink() const { return this->subscriptionShrink_ != nullptr;};
    void deleteSubscriptionShrink() { this->subscriptionShrink_ = nullptr;};
    inline string getSubscriptionShrink() const { DARABONBA_PTR_GET_DEFAULT(subscriptionShrink_, "") };
    inline ListEventRulesShrinkRequest& setSubscriptionShrink(string subscriptionShrink) { DARABONBA_PTR_SET_VALUE(subscriptionShrink_, subscriptionShrink) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline ListEventRulesShrinkRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // This parameter is deprecated. Use PageSize for paged queries.
    shared_ptr<int32_t> maxResults_ {};
    // This parameter is deprecated. Use PageNum for paged queries.
    shared_ptr<string> nextToken_ {};
    // The page number of the results to return.
    // Valid values: 1 to 100000.
    // If you set this parameter to a value less than 1, the system uses 1. If you set this parameter to a value greater than 100000, the system uses 100000.
    shared_ptr<int64_t> pageNum_ {};
    // The number of entries to return on each page.
    // Valid values: 10 to 50.
    // If you set this parameter to a value less than 10, the system uses 10. If you set this parameter to a value greater than 50, the system uses 50.
    shared_ptr<int64_t> pageSize_ {};
    // The name of the Alibaba Cloud service for which event notifications are configured.
    shared_ptr<string> productName_ {};
    // The resource name in the matching rule. This parameter is used to filter rules. For example, for Object Storage Service (OSS), this is the bucket name.
    shared_ptr<string> resourceName_ {};
    // The name of the rule.
    shared_ptr<string> ruleName_ {};
    // The subscriber.
    shared_ptr<string> subscriptionShrink_ {};
    // The name of the topic.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
