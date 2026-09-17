// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMFYTASKWAITINGQUEUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMFYTASKWAITINGQUEUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeComfyTaskWaitingQueueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComfyTaskWaitingQueueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskWaitingQueue, taskWaitingQueue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComfyTaskWaitingQueueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskWaitingQueue, taskWaitingQueue_);
    };
    DescribeComfyTaskWaitingQueueResponseBody() = default ;
    DescribeComfyTaskWaitingQueueResponseBody(const DescribeComfyTaskWaitingQueueResponseBody &) = default ;
    DescribeComfyTaskWaitingQueueResponseBody(DescribeComfyTaskWaitingQueueResponseBody &&) = default ;
    DescribeComfyTaskWaitingQueueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComfyTaskWaitingQueueResponseBody() = default ;
    DescribeComfyTaskWaitingQueueResponseBody& operator=(const DescribeComfyTaskWaitingQueueResponseBody &) = default ;
    DescribeComfyTaskWaitingQueueResponseBody& operator=(DescribeComfyTaskWaitingQueueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskWaitingQueue : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskWaitingQueue& obj) { 
        DARABONBA_PTR_TO_JSON(WaitingCount, waitingCount_);
      };
      friend void from_json(const Darabonba::Json& j, TaskWaitingQueue& obj) { 
        DARABONBA_PTR_FROM_JSON(WaitingCount, waitingCount_);
      };
      TaskWaitingQueue() = default ;
      TaskWaitingQueue(const TaskWaitingQueue &) = default ;
      TaskWaitingQueue(TaskWaitingQueue &&) = default ;
      TaskWaitingQueue(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskWaitingQueue() = default ;
      TaskWaitingQueue& operator=(const TaskWaitingQueue &) = default ;
      TaskWaitingQueue& operator=(TaskWaitingQueue &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->waitingCount_ == nullptr; };
      // waitingCount Field Functions 
      bool hasWaitingCount() const { return this->waitingCount_ != nullptr;};
      void deleteWaitingCount() { this->waitingCount_ = nullptr;};
      inline int64_t getWaitingCount() const { DARABONBA_PTR_GET_DEFAULT(waitingCount_, 0L) };
      inline TaskWaitingQueue& setWaitingCount(int64_t waitingCount) { DARABONBA_PTR_SET_VALUE(waitingCount_, waitingCount) };


    protected:
      // The number of waiting tasks.
      shared_ptr<int64_t> waitingCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->taskWaitingQueue_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DescribeComfyTaskWaitingQueueResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeComfyTaskWaitingQueueResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeComfyTaskWaitingQueueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskWaitingQueue Field Functions 
    bool hasTaskWaitingQueue() const { return this->taskWaitingQueue_ != nullptr;};
    void deleteTaskWaitingQueue() { this->taskWaitingQueue_ = nullptr;};
    inline const DescribeComfyTaskWaitingQueueResponseBody::TaskWaitingQueue & getTaskWaitingQueue() const { DARABONBA_PTR_GET_CONST(taskWaitingQueue_, DescribeComfyTaskWaitingQueueResponseBody::TaskWaitingQueue) };
    inline DescribeComfyTaskWaitingQueueResponseBody::TaskWaitingQueue getTaskWaitingQueue() { DARABONBA_PTR_GET(taskWaitingQueue_, DescribeComfyTaskWaitingQueueResponseBody::TaskWaitingQueue) };
    inline DescribeComfyTaskWaitingQueueResponseBody& setTaskWaitingQueue(const DescribeComfyTaskWaitingQueueResponseBody::TaskWaitingQueue & taskWaitingQueue) { DARABONBA_PTR_SET_VALUE(taskWaitingQueue_, taskWaitingQueue) };
    inline DescribeComfyTaskWaitingQueueResponseBody& setTaskWaitingQueue(DescribeComfyTaskWaitingQueueResponseBody::TaskWaitingQueue && taskWaitingQueue) { DARABONBA_PTR_SET_RVALUE(taskWaitingQueue_, taskWaitingQueue) };


  protected:
    // The status code. A value of 0 indicates success.
    shared_ptr<int64_t> code_ {};
    // The description.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The waiting queue information.
    shared_ptr<DescribeComfyTaskWaitingQueueResponseBody::TaskWaitingQueue> taskWaitingQueue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
