// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIALOGUEFLOWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIALOGUEFLOWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListDialogueFlowsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDialogueFlowsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DialogueFlows, dialogueFlows_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDialogueFlowsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DialogueFlows, dialogueFlows_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDialogueFlowsResponseBody() = default ;
    ListDialogueFlowsResponseBody(const ListDialogueFlowsResponseBody &) = default ;
    ListDialogueFlowsResponseBody(ListDialogueFlowsResponseBody &&) = default ;
    ListDialogueFlowsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDialogueFlowsResponseBody() = default ;
    ListDialogueFlowsResponseBody& operator=(const ListDialogueFlowsResponseBody &) = default ;
    ListDialogueFlowsResponseBody& operator=(ListDialogueFlowsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DialogueFlows : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DialogueFlows& obj) { 
        DARABONBA_PTR_TO_JSON(DialogueFlowDefinition, dialogueFlowDefinition_);
        DARABONBA_PTR_TO_JSON(DialogueFlowId, dialogueFlowId_);
        DARABONBA_PTR_TO_JSON(DialogueFlowName, dialogueFlowName_);
        DARABONBA_PTR_TO_JSON(DialogueFlowType, dialogueFlowType_);
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(ScriptVersion, scriptVersion_);
      };
      friend void from_json(const Darabonba::Json& j, DialogueFlows& obj) { 
        DARABONBA_PTR_FROM_JSON(DialogueFlowDefinition, dialogueFlowDefinition_);
        DARABONBA_PTR_FROM_JSON(DialogueFlowId, dialogueFlowId_);
        DARABONBA_PTR_FROM_JSON(DialogueFlowName, dialogueFlowName_);
        DARABONBA_PTR_FROM_JSON(DialogueFlowType, dialogueFlowType_);
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(ScriptVersion, scriptVersion_);
      };
      DialogueFlows() = default ;
      DialogueFlows(const DialogueFlows &) = default ;
      DialogueFlows(DialogueFlows &&) = default ;
      DialogueFlows(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DialogueFlows() = default ;
      DialogueFlows& operator=(const DialogueFlows &) = default ;
      DialogueFlows& operator=(DialogueFlows &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dialogueFlowDefinition_ == nullptr
        && this->dialogueFlowId_ == nullptr && this->dialogueFlowName_ == nullptr && this->dialogueFlowType_ == nullptr && this->scriptId_ == nullptr && this->scriptVersion_ == nullptr; };
      // dialogueFlowDefinition Field Functions 
      bool hasDialogueFlowDefinition() const { return this->dialogueFlowDefinition_ != nullptr;};
      void deleteDialogueFlowDefinition() { this->dialogueFlowDefinition_ = nullptr;};
      inline string getDialogueFlowDefinition() const { DARABONBA_PTR_GET_DEFAULT(dialogueFlowDefinition_, "") };
      inline DialogueFlows& setDialogueFlowDefinition(string dialogueFlowDefinition) { DARABONBA_PTR_SET_VALUE(dialogueFlowDefinition_, dialogueFlowDefinition) };


      // dialogueFlowId Field Functions 
      bool hasDialogueFlowId() const { return this->dialogueFlowId_ != nullptr;};
      void deleteDialogueFlowId() { this->dialogueFlowId_ = nullptr;};
      inline string getDialogueFlowId() const { DARABONBA_PTR_GET_DEFAULT(dialogueFlowId_, "") };
      inline DialogueFlows& setDialogueFlowId(string dialogueFlowId) { DARABONBA_PTR_SET_VALUE(dialogueFlowId_, dialogueFlowId) };


      // dialogueFlowName Field Functions 
      bool hasDialogueFlowName() const { return this->dialogueFlowName_ != nullptr;};
      void deleteDialogueFlowName() { this->dialogueFlowName_ = nullptr;};
      inline string getDialogueFlowName() const { DARABONBA_PTR_GET_DEFAULT(dialogueFlowName_, "") };
      inline DialogueFlows& setDialogueFlowName(string dialogueFlowName) { DARABONBA_PTR_SET_VALUE(dialogueFlowName_, dialogueFlowName) };


      // dialogueFlowType Field Functions 
      bool hasDialogueFlowType() const { return this->dialogueFlowType_ != nullptr;};
      void deleteDialogueFlowType() { this->dialogueFlowType_ = nullptr;};
      inline string getDialogueFlowType() const { DARABONBA_PTR_GET_DEFAULT(dialogueFlowType_, "") };
      inline DialogueFlows& setDialogueFlowType(string dialogueFlowType) { DARABONBA_PTR_SET_VALUE(dialogueFlowType_, dialogueFlowType) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline DialogueFlows& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // scriptVersion Field Functions 
      bool hasScriptVersion() const { return this->scriptVersion_ != nullptr;};
      void deleteScriptVersion() { this->scriptVersion_ = nullptr;};
      inline string getScriptVersion() const { DARABONBA_PTR_GET_DEFAULT(scriptVersion_, "") };
      inline DialogueFlows& setScriptVersion(string scriptVersion) { DARABONBA_PTR_SET_VALUE(scriptVersion_, scriptVersion) };


    protected:
      shared_ptr<string> dialogueFlowDefinition_ {};
      shared_ptr<string> dialogueFlowId_ {};
      shared_ptr<string> dialogueFlowName_ {};
      shared_ptr<string> dialogueFlowType_ {};
      shared_ptr<string> scriptId_ {};
      shared_ptr<string> scriptVersion_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->dialogueFlows_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDialogueFlowsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dialogueFlows Field Functions 
    bool hasDialogueFlows() const { return this->dialogueFlows_ != nullptr;};
    void deleteDialogueFlows() { this->dialogueFlows_ = nullptr;};
    inline const vector<ListDialogueFlowsResponseBody::DialogueFlows> & getDialogueFlows() const { DARABONBA_PTR_GET_CONST(dialogueFlows_, vector<ListDialogueFlowsResponseBody::DialogueFlows>) };
    inline vector<ListDialogueFlowsResponseBody::DialogueFlows> getDialogueFlows() { DARABONBA_PTR_GET(dialogueFlows_, vector<ListDialogueFlowsResponseBody::DialogueFlows>) };
    inline ListDialogueFlowsResponseBody& setDialogueFlows(const vector<ListDialogueFlowsResponseBody::DialogueFlows> & dialogueFlows) { DARABONBA_PTR_SET_VALUE(dialogueFlows_, dialogueFlows) };
    inline ListDialogueFlowsResponseBody& setDialogueFlows(vector<ListDialogueFlowsResponseBody::DialogueFlows> && dialogueFlows) { DARABONBA_PTR_SET_RVALUE(dialogueFlows_, dialogueFlows) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDialogueFlowsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDialogueFlowsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDialogueFlowsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDialogueFlowsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListDialogueFlowsResponseBody::DialogueFlows>> dialogueFlows_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
