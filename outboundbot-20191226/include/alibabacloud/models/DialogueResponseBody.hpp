// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIALOGUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DIALOGUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DialogueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DialogueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Feedback, feedback_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DialogueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DialogueResponseBody() = default ;
    DialogueResponseBody(const DialogueResponseBody &) = default ;
    DialogueResponseBody(DialogueResponseBody &&) = default ;
    DialogueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DialogueResponseBody() = default ;
    DialogueResponseBody& operator=(const DialogueResponseBody &) = default ;
    DialogueResponseBody& operator=(DialogueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Feedback : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Feedback& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(ActionParams, actionParams_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ContentParams, contentParams_);
        DARABONBA_PTR_TO_JSON(Interruptible, interruptible_);
      };
      friend void from_json(const Darabonba::Json& j, Feedback& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(ActionParams, actionParams_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ContentParams, contentParams_);
        DARABONBA_PTR_FROM_JSON(Interruptible, interruptible_);
      };
      Feedback() = default ;
      Feedback(const Feedback &) = default ;
      Feedback(Feedback &&) = default ;
      Feedback(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Feedback() = default ;
      Feedback& operator=(const Feedback &) = default ;
      Feedback& operator=(Feedback &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->actionParams_ == nullptr && this->content_ == nullptr && this->contentParams_ == nullptr && this->interruptible_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Feedback& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // actionParams Field Functions 
      bool hasActionParams() const { return this->actionParams_ != nullptr;};
      void deleteActionParams() { this->actionParams_ = nullptr;};
      inline string getActionParams() const { DARABONBA_PTR_GET_DEFAULT(actionParams_, "") };
      inline Feedback& setActionParams(string actionParams) { DARABONBA_PTR_SET_VALUE(actionParams_, actionParams) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Feedback& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // contentParams Field Functions 
      bool hasContentParams() const { return this->contentParams_ != nullptr;};
      void deleteContentParams() { this->contentParams_ = nullptr;};
      inline string getContentParams() const { DARABONBA_PTR_GET_DEFAULT(contentParams_, "") };
      inline Feedback& setContentParams(string contentParams) { DARABONBA_PTR_SET_VALUE(contentParams_, contentParams) };


      // interruptible Field Functions 
      bool hasInterruptible() const { return this->interruptible_ != nullptr;};
      void deleteInterruptible() { this->interruptible_ = nullptr;};
      inline bool getInterruptible() const { DARABONBA_PTR_GET_DEFAULT(interruptible_, false) };
      inline Feedback& setInterruptible(bool interruptible) { DARABONBA_PTR_SET_VALUE(interruptible_, interruptible) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<string> actionParams_ {};
      shared_ptr<string> content_ {};
      // 已废弃
      shared_ptr<string> contentParams_ {};
      shared_ptr<bool> interruptible_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->feedback_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DialogueResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline const DialogueResponseBody::Feedback & getFeedback() const { DARABONBA_PTR_GET_CONST(feedback_, DialogueResponseBody::Feedback) };
    inline DialogueResponseBody::Feedback getFeedback() { DARABONBA_PTR_GET(feedback_, DialogueResponseBody::Feedback) };
    inline DialogueResponseBody& setFeedback(const DialogueResponseBody::Feedback & feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };
    inline DialogueResponseBody& setFeedback(DialogueResponseBody::Feedback && feedback) { DARABONBA_PTR_SET_RVALUE(feedback_, feedback) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DialogueResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DialogueResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DialogueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DialogueResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DialogueResponseBody::Feedback> feedback_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
