// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUEUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUEUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetQueueResponseBodyQueue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetQueueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Queue, queue_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Queue, queue_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetQueueResponseBody() = default ;
    GetQueueResponseBody(const GetQueueResponseBody &) = default ;
    GetQueueResponseBody(GetQueueResponseBody &&) = default ;
    GetQueueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueueResponseBody() = default ;
    GetQueueResponseBody& operator=(const GetQueueResponseBody &) = default ;
    GetQueueResponseBody& operator=(GetQueueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queue_ == nullptr
        && return this->requestId_ == nullptr; };
    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline const GetQueueResponseBodyQueue & queue() const { DARABONBA_PTR_GET_CONST(queue_, GetQueueResponseBodyQueue) };
    inline GetQueueResponseBodyQueue queue() { DARABONBA_PTR_GET(queue_, GetQueueResponseBodyQueue) };
    inline GetQueueResponseBody& setQueue(const GetQueueResponseBodyQueue & queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };
    inline GetQueueResponseBody& setQueue(GetQueueResponseBodyQueue && queue) { DARABONBA_PTR_SET_RVALUE(queue_, queue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQueueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queue configurations.
    std::shared_ptr<GetQueueResponseBodyQueue> queue_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
