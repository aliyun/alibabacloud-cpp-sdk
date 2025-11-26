// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDIALOGUEFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDIALOGUEFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyDialogueFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDialogueFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DialogueFlowDefinition, dialogueFlowDefinition_);
      DARABONBA_PTR_TO_JSON(DialogueFlowId, dialogueFlowId_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDialogueFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DialogueFlowDefinition, dialogueFlowDefinition_);
      DARABONBA_PTR_FROM_JSON(DialogueFlowId, dialogueFlowId_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifyDialogueFlowResponseBody() = default ;
    ModifyDialogueFlowResponseBody(const ModifyDialogueFlowResponseBody &) = default ;
    ModifyDialogueFlowResponseBody(ModifyDialogueFlowResponseBody &&) = default ;
    ModifyDialogueFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDialogueFlowResponseBody() = default ;
    ModifyDialogueFlowResponseBody& operator=(const ModifyDialogueFlowResponseBody &) = default ;
    ModifyDialogueFlowResponseBody& operator=(ModifyDialogueFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->dialogueFlowDefinition_ == nullptr && return this->dialogueFlowId_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModifyDialogueFlowResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dialogueFlowDefinition Field Functions 
    bool hasDialogueFlowDefinition() const { return this->dialogueFlowDefinition_ != nullptr;};
    void deleteDialogueFlowDefinition() { this->dialogueFlowDefinition_ = nullptr;};
    inline string dialogueFlowDefinition() const { DARABONBA_PTR_GET_DEFAULT(dialogueFlowDefinition_, "") };
    inline ModifyDialogueFlowResponseBody& setDialogueFlowDefinition(string dialogueFlowDefinition) { DARABONBA_PTR_SET_VALUE(dialogueFlowDefinition_, dialogueFlowDefinition) };


    // dialogueFlowId Field Functions 
    bool hasDialogueFlowId() const { return this->dialogueFlowId_ != nullptr;};
    void deleteDialogueFlowId() { this->dialogueFlowId_ = nullptr;};
    inline string dialogueFlowId() const { DARABONBA_PTR_GET_DEFAULT(dialogueFlowId_, "") };
    inline ModifyDialogueFlowResponseBody& setDialogueFlowId(string dialogueFlowId) { DARABONBA_PTR_SET_VALUE(dialogueFlowId_, dialogueFlowId) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModifyDialogueFlowResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyDialogueFlowResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDialogueFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModifyDialogueFlowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> dialogueFlowDefinition_ = nullptr;
    std::shared_ptr<string> dialogueFlowId_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
