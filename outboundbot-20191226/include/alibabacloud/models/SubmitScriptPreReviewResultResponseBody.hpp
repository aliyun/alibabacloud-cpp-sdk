// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSCRIPTPREREVIEWRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSCRIPTPREREVIEWRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SubmitScriptPreReviewResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitScriptPreReviewResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitScriptPreReviewResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SubmitScriptPreReviewResultResponseBody() = default ;
    SubmitScriptPreReviewResultResponseBody(const SubmitScriptPreReviewResultResponseBody &) = default ;
    SubmitScriptPreReviewResultResponseBody(SubmitScriptPreReviewResultResponseBody &&) = default ;
    SubmitScriptPreReviewResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitScriptPreReviewResultResponseBody() = default ;
    SubmitScriptPreReviewResultResponseBody& operator=(const SubmitScriptPreReviewResultResponseBody &) = default ;
    SubmitScriptPreReviewResultResponseBody& operator=(SubmitScriptPreReviewResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Script : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Script& obj) { 
        DARABONBA_PTR_TO_JSON(ScriptDescription, scriptDescription_);
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
      };
      friend void from_json(const Darabonba::Json& j, Script& obj) { 
        DARABONBA_PTR_FROM_JSON(ScriptDescription, scriptDescription_);
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
      };
      Script() = default ;
      Script(const Script &) = default ;
      Script(Script &&) = default ;
      Script(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Script() = default ;
      Script& operator=(const Script &) = default ;
      Script& operator=(Script &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->scriptDescription_ == nullptr
        && this->scriptId_ == nullptr && this->scriptName_ == nullptr; };
      // scriptDescription Field Functions 
      bool hasScriptDescription() const { return this->scriptDescription_ != nullptr;};
      void deleteScriptDescription() { this->scriptDescription_ = nullptr;};
      inline string getScriptDescription() const { DARABONBA_PTR_GET_DEFAULT(scriptDescription_, "") };
      inline Script& setScriptDescription(string scriptDescription) { DARABONBA_PTR_SET_VALUE(scriptDescription_, scriptDescription) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline Script& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // scriptName Field Functions 
      bool hasScriptName() const { return this->scriptName_ != nullptr;};
      void deleteScriptName() { this->scriptName_ = nullptr;};
      inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
      inline Script& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    protected:
      // The script description.
      shared_ptr<string> scriptDescription_ {};
      // The script ID.
      shared_ptr<string> scriptId_ {};
      // The script name.
      shared_ptr<string> scriptName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->script_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SubmitScriptPreReviewResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline SubmitScriptPreReviewResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SubmitScriptPreReviewResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitScriptPreReviewResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline const SubmitScriptPreReviewResultResponseBody::Script & getScript() const { DARABONBA_PTR_GET_CONST(script_, SubmitScriptPreReviewResultResponseBody::Script) };
    inline SubmitScriptPreReviewResultResponseBody::Script getScript() { DARABONBA_PTR_GET(script_, SubmitScriptPreReviewResultResponseBody::Script) };
    inline SubmitScriptPreReviewResultResponseBody& setScript(const SubmitScriptPreReviewResultResponseBody::Script & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
    inline SubmitScriptPreReviewResultResponseBody& setScript(SubmitScriptPreReviewResultResponseBody::Script && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SubmitScriptPreReviewResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned by the API operation.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The script information for which the pre-review result is submitted.
    shared_ptr<SubmitScriptPreReviewResultResponseBody::Script> script_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
