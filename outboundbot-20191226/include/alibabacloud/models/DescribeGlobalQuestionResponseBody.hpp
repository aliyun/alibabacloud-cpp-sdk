// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALQUESTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALQUESTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeGlobalQuestionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalQuestionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GlobalQuestion, globalQuestion_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalQuestionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GlobalQuestion, globalQuestion_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeGlobalQuestionResponseBody() = default ;
    DescribeGlobalQuestionResponseBody(const DescribeGlobalQuestionResponseBody &) = default ;
    DescribeGlobalQuestionResponseBody(DescribeGlobalQuestionResponseBody &&) = default ;
    DescribeGlobalQuestionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalQuestionResponseBody() = default ;
    DescribeGlobalQuestionResponseBody& operator=(const DescribeGlobalQuestionResponseBody &) = default ;
    DescribeGlobalQuestionResponseBody& operator=(DescribeGlobalQuestionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GlobalQuestion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GlobalQuestion& obj) { 
        DARABONBA_PTR_TO_JSON(Answers, answers_);
        DARABONBA_PTR_TO_JSON(GlobalQuestionId, globalQuestionId_);
        DARABONBA_PTR_TO_JSON(GlobalQuestionName, globalQuestionName_);
        DARABONBA_PTR_TO_JSON(GlobalQuestionType, globalQuestionType_);
        DARABONBA_PTR_TO_JSON(Questions, questions_);
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      };
      friend void from_json(const Darabonba::Json& j, GlobalQuestion& obj) { 
        DARABONBA_PTR_FROM_JSON(Answers, answers_);
        DARABONBA_PTR_FROM_JSON(GlobalQuestionId, globalQuestionId_);
        DARABONBA_PTR_FROM_JSON(GlobalQuestionName, globalQuestionName_);
        DARABONBA_PTR_FROM_JSON(GlobalQuestionType, globalQuestionType_);
        DARABONBA_PTR_FROM_JSON(Questions, questions_);
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      };
      GlobalQuestion() = default ;
      GlobalQuestion(const GlobalQuestion &) = default ;
      GlobalQuestion(GlobalQuestion &&) = default ;
      GlobalQuestion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GlobalQuestion() = default ;
      GlobalQuestion& operator=(const GlobalQuestion &) = default ;
      GlobalQuestion& operator=(GlobalQuestion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->answers_ == nullptr
        && this->globalQuestionId_ == nullptr && this->globalQuestionName_ == nullptr && this->globalQuestionType_ == nullptr && this->questions_ == nullptr && this->scriptId_ == nullptr; };
      // answers Field Functions 
      bool hasAnswers() const { return this->answers_ != nullptr;};
      void deleteAnswers() { this->answers_ = nullptr;};
      inline string getAnswers() const { DARABONBA_PTR_GET_DEFAULT(answers_, "") };
      inline GlobalQuestion& setAnswers(string answers) { DARABONBA_PTR_SET_VALUE(answers_, answers) };


      // globalQuestionId Field Functions 
      bool hasGlobalQuestionId() const { return this->globalQuestionId_ != nullptr;};
      void deleteGlobalQuestionId() { this->globalQuestionId_ = nullptr;};
      inline string getGlobalQuestionId() const { DARABONBA_PTR_GET_DEFAULT(globalQuestionId_, "") };
      inline GlobalQuestion& setGlobalQuestionId(string globalQuestionId) { DARABONBA_PTR_SET_VALUE(globalQuestionId_, globalQuestionId) };


      // globalQuestionName Field Functions 
      bool hasGlobalQuestionName() const { return this->globalQuestionName_ != nullptr;};
      void deleteGlobalQuestionName() { this->globalQuestionName_ = nullptr;};
      inline string getGlobalQuestionName() const { DARABONBA_PTR_GET_DEFAULT(globalQuestionName_, "") };
      inline GlobalQuestion& setGlobalQuestionName(string globalQuestionName) { DARABONBA_PTR_SET_VALUE(globalQuestionName_, globalQuestionName) };


      // globalQuestionType Field Functions 
      bool hasGlobalQuestionType() const { return this->globalQuestionType_ != nullptr;};
      void deleteGlobalQuestionType() { this->globalQuestionType_ = nullptr;};
      inline string getGlobalQuestionType() const { DARABONBA_PTR_GET_DEFAULT(globalQuestionType_, "") };
      inline GlobalQuestion& setGlobalQuestionType(string globalQuestionType) { DARABONBA_PTR_SET_VALUE(globalQuestionType_, globalQuestionType) };


      // questions Field Functions 
      bool hasQuestions() const { return this->questions_ != nullptr;};
      void deleteQuestions() { this->questions_ = nullptr;};
      inline string getQuestions() const { DARABONBA_PTR_GET_DEFAULT(questions_, "") };
      inline GlobalQuestion& setQuestions(string questions) { DARABONBA_PTR_SET_VALUE(questions_, questions) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline GlobalQuestion& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    protected:
      shared_ptr<string> answers_ {};
      shared_ptr<string> globalQuestionId_ {};
      shared_ptr<string> globalQuestionName_ {};
      shared_ptr<string> globalQuestionType_ {};
      shared_ptr<string> questions_ {};
      shared_ptr<string> scriptId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->globalQuestion_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeGlobalQuestionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // globalQuestion Field Functions 
    bool hasGlobalQuestion() const { return this->globalQuestion_ != nullptr;};
    void deleteGlobalQuestion() { this->globalQuestion_ = nullptr;};
    inline const DescribeGlobalQuestionResponseBody::GlobalQuestion & getGlobalQuestion() const { DARABONBA_PTR_GET_CONST(globalQuestion_, DescribeGlobalQuestionResponseBody::GlobalQuestion) };
    inline DescribeGlobalQuestionResponseBody::GlobalQuestion getGlobalQuestion() { DARABONBA_PTR_GET(globalQuestion_, DescribeGlobalQuestionResponseBody::GlobalQuestion) };
    inline DescribeGlobalQuestionResponseBody& setGlobalQuestion(const DescribeGlobalQuestionResponseBody::GlobalQuestion & globalQuestion) { DARABONBA_PTR_SET_VALUE(globalQuestion_, globalQuestion) };
    inline DescribeGlobalQuestionResponseBody& setGlobalQuestion(DescribeGlobalQuestionResponseBody::GlobalQuestion && globalQuestion) { DARABONBA_PTR_SET_RVALUE(globalQuestion_, globalQuestion) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeGlobalQuestionResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeGlobalQuestionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGlobalQuestionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeGlobalQuestionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DescribeGlobalQuestionResponseBody::GlobalQuestion> globalQuestion_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
