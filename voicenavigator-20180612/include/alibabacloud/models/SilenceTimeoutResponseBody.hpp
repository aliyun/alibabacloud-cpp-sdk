// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SILENCETIMEOUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SILENCETIMEOUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class SilenceTimeoutResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SilenceTimeoutResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ActionParams, actionParams_);
      DARABONBA_PTR_TO_JSON(Interruptible, interruptible_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TextResponse, textResponse_);
    };
    friend void from_json(const Darabonba::Json& j, SilenceTimeoutResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ActionParams, actionParams_);
      DARABONBA_PTR_FROM_JSON(Interruptible, interruptible_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TextResponse, textResponse_);
    };
    SilenceTimeoutResponseBody() = default ;
    SilenceTimeoutResponseBody(const SilenceTimeoutResponseBody &) = default ;
    SilenceTimeoutResponseBody(SilenceTimeoutResponseBody &&) = default ;
    SilenceTimeoutResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SilenceTimeoutResponseBody() = default ;
    SilenceTimeoutResponseBody& operator=(const SilenceTimeoutResponseBody &) = default ;
    SilenceTimeoutResponseBody& operator=(SilenceTimeoutResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->actionParams_ == nullptr && this->interruptible_ == nullptr && this->requestId_ == nullptr && this->textResponse_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline SilenceTimeoutResponseBody& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // actionParams Field Functions 
    bool hasActionParams() const { return this->actionParams_ != nullptr;};
    void deleteActionParams() { this->actionParams_ = nullptr;};
    inline string getActionParams() const { DARABONBA_PTR_GET_DEFAULT(actionParams_, "") };
    inline SilenceTimeoutResponseBody& setActionParams(string actionParams) { DARABONBA_PTR_SET_VALUE(actionParams_, actionParams) };


    // interruptible Field Functions 
    bool hasInterruptible() const { return this->interruptible_ != nullptr;};
    void deleteInterruptible() { this->interruptible_ = nullptr;};
    inline bool getInterruptible() const { DARABONBA_PTR_GET_DEFAULT(interruptible_, false) };
    inline SilenceTimeoutResponseBody& setInterruptible(bool interruptible) { DARABONBA_PTR_SET_VALUE(interruptible_, interruptible) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SilenceTimeoutResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // textResponse Field Functions 
    bool hasTextResponse() const { return this->textResponse_ != nullptr;};
    void deleteTextResponse() { this->textResponse_ = nullptr;};
    inline string getTextResponse() const { DARABONBA_PTR_GET_DEFAULT(textResponse_, "") };
    inline SilenceTimeoutResponseBody& setTextResponse(string textResponse) { DARABONBA_PTR_SET_VALUE(textResponse_, textResponse) };


  protected:
    // The system\\"s next action.
    shared_ptr<string> action_ {};
    // Parameters for the action defined in the Action parameter.
    shared_ptr<string> actionParams_ {};
    // Indicates whether the action is interruptible.
    shared_ptr<bool> interruptible_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The text response to play to the user.
    shared_ptr<string> textResponse_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
