// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKTEMPLATEQUESTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKTEMPLATEQUESTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuestionPlugin.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class GetTaskTemplateQuestionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskTemplateQuestionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Questions, questions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskTemplateQuestionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Questions, questions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTaskTemplateQuestionsResponseBody() = default ;
    GetTaskTemplateQuestionsResponseBody(const GetTaskTemplateQuestionsResponseBody &) = default ;
    GetTaskTemplateQuestionsResponseBody(GetTaskTemplateQuestionsResponseBody &&) = default ;
    GetTaskTemplateQuestionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskTemplateQuestionsResponseBody() = default ;
    GetTaskTemplateQuestionsResponseBody& operator=(const GetTaskTemplateQuestionsResponseBody &) = default ;
    GetTaskTemplateQuestionsResponseBody& operator=(GetTaskTemplateQuestionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->details_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->questions_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetTaskTemplateQuestionsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline string getDetails() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
    inline GetTaskTemplateQuestionsResponseBody& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTaskTemplateQuestionsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTaskTemplateQuestionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // questions Field Functions 
    bool hasQuestions() const { return this->questions_ != nullptr;};
    void deleteQuestions() { this->questions_ = nullptr;};
    inline const vector<QuestionPlugin> & getQuestions() const { DARABONBA_PTR_GET_CONST(questions_, vector<QuestionPlugin>) };
    inline vector<QuestionPlugin> getQuestions() { DARABONBA_PTR_GET(questions_, vector<QuestionPlugin>) };
    inline GetTaskTemplateQuestionsResponseBody& setQuestions(const vector<QuestionPlugin> & questions) { DARABONBA_PTR_SET_VALUE(questions_, questions) };
    inline GetTaskTemplateQuestionsResponseBody& setQuestions(vector<QuestionPlugin> && questions) { DARABONBA_PTR_SET_RVALUE(questions_, questions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskTemplateQuestionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTaskTemplateQuestionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Total amount of data under the current request conditions. This parameter is optional and does not need to be returned by default.
    shared_ptr<int32_t> code_ {};
    // Details
    shared_ptr<string> details_ {};
    // error code
    shared_ptr<string> errorCode_ {};
    // Response message of the request
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
    // Question list
    shared_ptr<vector<QuestionPlugin>> questions_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // is succeeded
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
