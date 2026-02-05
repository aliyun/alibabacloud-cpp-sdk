// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULEDTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULEDTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateScheduledTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduledTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScheduledId, scheduledId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduledTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScheduledId, scheduledId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateScheduledTaskResponseBody() = default ;
    CreateScheduledTaskResponseBody(const CreateScheduledTaskResponseBody &) = default ;
    CreateScheduledTaskResponseBody(CreateScheduledTaskResponseBody &&) = default ;
    CreateScheduledTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduledTaskResponseBody() = default ;
    CreateScheduledTaskResponseBody& operator=(const CreateScheduledTaskResponseBody &) = default ;
    CreateScheduledTaskResponseBody& operator=(CreateScheduledTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && this->requestId_ == nullptr && this->scheduledId_ == nullptr && this->success_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateScheduledTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateScheduledTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduledId Field Functions 
    bool hasScheduledId() const { return this->scheduledId_ != nullptr;};
    void deleteScheduledId() { this->scheduledId_ = nullptr;};
    inline string getScheduledId() const { DARABONBA_PTR_GET_DEFAULT(scheduledId_, "") };
    inline CreateScheduledTaskResponseBody& setScheduledId(string scheduledId) { DARABONBA_PTR_SET_VALUE(scheduledId_, scheduledId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateScheduledTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> scheduledId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
