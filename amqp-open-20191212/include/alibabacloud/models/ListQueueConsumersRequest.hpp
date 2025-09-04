// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUECONSUMERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUECONSUMERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListQueueConsumersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueueConsumersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QueryCount, queryCount_);
      DARABONBA_PTR_TO_JSON(Queue, queue_);
      DARABONBA_PTR_TO_JSON(VirtualHost, virtualHost_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueueConsumersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QueryCount, queryCount_);
      DARABONBA_PTR_FROM_JSON(Queue, queue_);
      DARABONBA_PTR_FROM_JSON(VirtualHost, virtualHost_);
    };
    ListQueueConsumersRequest() = default ;
    ListQueueConsumersRequest(const ListQueueConsumersRequest &) = default ;
    ListQueueConsumersRequest(ListQueueConsumersRequest &&) = default ;
    ListQueueConsumersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueueConsumersRequest() = default ;
    ListQueueConsumersRequest& operator=(const ListQueueConsumersRequest &) = default ;
    ListQueueConsumersRequest& operator=(ListQueueConsumersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->nextToken_ != nullptr && this->queryCount_ != nullptr && this->queue_ != nullptr && this->virtualHost_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListQueueConsumersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQueueConsumersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // queryCount Field Functions 
    bool hasQueryCount() const { return this->queryCount_ != nullptr;};
    void deleteQueryCount() { this->queryCount_ = nullptr;};
    inline int32_t queryCount() const { DARABONBA_PTR_GET_DEFAULT(queryCount_, 0) };
    inline ListQueueConsumersRequest& setQueryCount(int32_t queryCount) { DARABONBA_PTR_SET_VALUE(queryCount_, queryCount) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline string queue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
    inline ListQueueConsumersRequest& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


    // virtualHost Field Functions 
    bool hasVirtualHost() const { return this->virtualHost_ != nullptr;};
    void deleteVirtualHost() { this->virtualHost_ = nullptr;};
    inline string virtualHost() const { DARABONBA_PTR_GET_DEFAULT(virtualHost_, "") };
    inline ListQueueConsumersRequest& setVirtualHost(string virtualHost) { DARABONBA_PTR_SET_VALUE(virtualHost_, virtualHost) };


  protected:
    // The ID of the ApsaraMQ for RabbitMQ instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The token that marks the end position of the previous returned page. To obtain the next batch of data, call the operation again by using the value of NextToken returned by the previous request. If you call this operation for the first time or want to query all results, set NextToken to an empty string.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The number of data entries to return. If you do not configure this parameter, the default value 1 is used.
    // 
    // Valid values: 1 to 100.
    std::shared_ptr<int32_t> queryCount_ = nullptr;
    // The name of the queue for which you want to query online consumers.
    // 
    // This parameter is required.
    std::shared_ptr<string> queue_ = nullptr;
    // The virtual host (vhost) name.
    // 
    // This parameter is required.
    std::shared_ptr<string> virtualHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
