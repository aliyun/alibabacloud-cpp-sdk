// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONBYTOPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONBYTOPICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class ListSubscriptionByTopicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubscriptionByTopicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(EndpointValue, endpointValue_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SubscriptionName, subscriptionName_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubscriptionByTopicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(EndpointValue, endpointValue_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SubscriptionName, subscriptionName_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    ListSubscriptionByTopicRequest() = default ;
    ListSubscriptionByTopicRequest(const ListSubscriptionByTopicRequest &) = default ;
    ListSubscriptionByTopicRequest(ListSubscriptionByTopicRequest &&) = default ;
    ListSubscriptionByTopicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubscriptionByTopicRequest() = default ;
    ListSubscriptionByTopicRequest& operator=(const ListSubscriptionByTopicRequest &) = default ;
    ListSubscriptionByTopicRequest& operator=(ListSubscriptionByTopicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpointType_ != nullptr
        && this->endpointValue_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->subscriptionName_ != nullptr && this->topicName_ != nullptr; };
    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline ListSubscriptionByTopicRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // endpointValue Field Functions 
    bool hasEndpointValue() const { return this->endpointValue_ != nullptr;};
    void deleteEndpointValue() { this->endpointValue_ = nullptr;};
    inline string endpointValue() const { DARABONBA_PTR_GET_DEFAULT(endpointValue_, "") };
    inline ListSubscriptionByTopicRequest& setEndpointValue(string endpointValue) { DARABONBA_PTR_SET_VALUE(endpointValue_, endpointValue) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline ListSubscriptionByTopicRequest& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSubscriptionByTopicRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // subscriptionName Field Functions 
    bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
    void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
    inline string subscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
    inline ListSubscriptionByTopicRequest& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline ListSubscriptionByTopicRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    std::shared_ptr<string> endpointType_ = nullptr;
    std::shared_ptr<string> endpointValue_ = nullptr;
    // The page number. Valid values: 1 to 100000000. If you set this parameter to a value smaller than 1, the value of this parameter is 1 by default. If you set this parameter to a value greater than 100000000, the value of this parameter is 100000000 by default.
    std::shared_ptr<int64_t> pageNum_ = nullptr;
    // The number of entries per page. Value values: 10 to 50. If you set this parameter to a value smaller than 10, the value of this parameter is 10 by default. If you set this parameter to a value greater than 50, the value of this parameter is 50 by default.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The name of the subscription.
    std::shared_ptr<string> subscriptionName_ = nullptr;
    // The topic name.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
