// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIDEOLABELCLASSIFICATIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIDEOLABELCLASSIFICATIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateVideoLabelClassificationTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVideoLabelClassificationTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVideoLabelClassificationTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateVideoLabelClassificationTaskResponseBody() = default ;
    CreateVideoLabelClassificationTaskResponseBody(const CreateVideoLabelClassificationTaskResponseBody &) = default ;
    CreateVideoLabelClassificationTaskResponseBody(CreateVideoLabelClassificationTaskResponseBody &&) = default ;
    CreateVideoLabelClassificationTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVideoLabelClassificationTaskResponseBody() = default ;
    CreateVideoLabelClassificationTaskResponseBody& operator=(const CreateVideoLabelClassificationTaskResponseBody &) = default ;
    CreateVideoLabelClassificationTaskResponseBody& operator=(CreateVideoLabelClassificationTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventId_ == nullptr
        && return this->requestId_ == nullptr && return this->taskId_ == nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline CreateVideoLabelClassificationTaskResponseBody& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVideoLabelClassificationTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateVideoLabelClassificationTaskResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The event ID of the current task. You can use [EventBridge](https://www.alibabacloud.com/en/product/eventbridge) to query the ID and obtain the task information notification.
    std::shared_ptr<string> eventId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the current task. You can call the [GetTask](~~GetTask~~) operation to view the task information or the [GetVideoLabelClassificationResult](https://help.aliyun.com/document_detail/478224.html) operation to obtain the result of the video label detection task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
