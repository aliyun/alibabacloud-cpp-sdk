// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGLOBALQUESTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGLOBALQUESTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListGlobalQuestionsResponseBodyGlobalQuestions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListGlobalQuestionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGlobalQuestionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GlobalQuestions, globalQuestions_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListGlobalQuestionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GlobalQuestions, globalQuestions_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListGlobalQuestionsResponseBody() = default ;
    ListGlobalQuestionsResponseBody(const ListGlobalQuestionsResponseBody &) = default ;
    ListGlobalQuestionsResponseBody(ListGlobalQuestionsResponseBody &&) = default ;
    ListGlobalQuestionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGlobalQuestionsResponseBody() = default ;
    ListGlobalQuestionsResponseBody& operator=(const ListGlobalQuestionsResponseBody &) = default ;
    ListGlobalQuestionsResponseBody& operator=(ListGlobalQuestionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->globalQuestions_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListGlobalQuestionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // globalQuestions Field Functions 
    bool hasGlobalQuestions() const { return this->globalQuestions_ != nullptr;};
    void deleteGlobalQuestions() { this->globalQuestions_ = nullptr;};
    inline const ListGlobalQuestionsResponseBodyGlobalQuestions & globalQuestions() const { DARABONBA_PTR_GET_CONST(globalQuestions_, ListGlobalQuestionsResponseBodyGlobalQuestions) };
    inline ListGlobalQuestionsResponseBodyGlobalQuestions globalQuestions() { DARABONBA_PTR_GET(globalQuestions_, ListGlobalQuestionsResponseBodyGlobalQuestions) };
    inline ListGlobalQuestionsResponseBody& setGlobalQuestions(const ListGlobalQuestionsResponseBodyGlobalQuestions & globalQuestions) { DARABONBA_PTR_SET_VALUE(globalQuestions_, globalQuestions) };
    inline ListGlobalQuestionsResponseBody& setGlobalQuestions(ListGlobalQuestionsResponseBodyGlobalQuestions && globalQuestions) { DARABONBA_PTR_SET_RVALUE(globalQuestions_, globalQuestions) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListGlobalQuestionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGlobalQuestionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGlobalQuestionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListGlobalQuestionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<ListGlobalQuestionsResponseBodyGlobalQuestions> globalQuestions_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
