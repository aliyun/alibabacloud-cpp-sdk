// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUEUPSTREAMBINDINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUEUPSTREAMBINDINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListQueueUpStreamBindingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueueUpStreamBindingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(VirtualHost, virtualHost_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueueUpStreamBindingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(VirtualHost, virtualHost_);
    };
    ListQueueUpStreamBindingsRequest() = default ;
    ListQueueUpStreamBindingsRequest(const ListQueueUpStreamBindingsRequest &) = default ;
    ListQueueUpStreamBindingsRequest(ListQueueUpStreamBindingsRequest &&) = default ;
    ListQueueUpStreamBindingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueueUpStreamBindingsRequest() = default ;
    ListQueueUpStreamBindingsRequest& operator=(const ListQueueUpStreamBindingsRequest &) = default ;
    ListQueueUpStreamBindingsRequest& operator=(ListQueueUpStreamBindingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->queueName_ == nullptr && return this->virtualHost_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListQueueUpStreamBindingsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQueueUpStreamBindingsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQueueUpStreamBindingsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline ListQueueUpStreamBindingsRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // virtualHost Field Functions 
    bool hasVirtualHost() const { return this->virtualHost_ != nullptr;};
    void deleteVirtualHost() { this->virtualHost_ = nullptr;};
    inline string virtualHost() const { DARABONBA_PTR_GET_DEFAULT(virtualHost_, "") };
    inline ListQueueUpStreamBindingsRequest& setVirtualHost(string virtualHost) { DARABONBA_PTR_SET_VALUE(virtualHost_, virtualHost) };


  protected:
    // The ID of the ApsaraMQ for RabbitMQ instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The maximum number of entries to return.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the end position of the previous returned page. To obtain the next batch of data, call the operation again by using the value of NextToken returned by the previous request. If you call this operation for the first time or want to query all results, set NextToken to an empty string.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The queue name.
    // 
    // This parameter is required.
    std::shared_ptr<string> queueName_ = nullptr;
    // The virtual host (vhost) name.
    // 
    // This parameter is required.
    std::shared_ptr<string> virtualHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
