// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADHOCTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADHOCTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAdHocTaskResultResponseBodyExecuteResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAdHocTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdHocTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ExecuteResult, executeResult_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdHocTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ExecuteResult, executeResult_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAdHocTaskResultResponseBody() = default ;
    GetAdHocTaskResultResponseBody(const GetAdHocTaskResultResponseBody &) = default ;
    GetAdHocTaskResultResponseBody(GetAdHocTaskResultResponseBody &&) = default ;
    GetAdHocTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdHocTaskResultResponseBody() = default ;
    GetAdHocTaskResultResponseBody& operator=(const GetAdHocTaskResultResponseBody &) = default ;
    GetAdHocTaskResultResponseBody& operator=(GetAdHocTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->executeResult_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAdHocTaskResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // executeResult Field Functions 
    bool hasExecuteResult() const { return this->executeResult_ != nullptr;};
    void deleteExecuteResult() { this->executeResult_ = nullptr;};
    inline const GetAdHocTaskResultResponseBodyExecuteResult & executeResult() const { DARABONBA_PTR_GET_CONST(executeResult_, GetAdHocTaskResultResponseBodyExecuteResult) };
    inline GetAdHocTaskResultResponseBodyExecuteResult executeResult() { DARABONBA_PTR_GET(executeResult_, GetAdHocTaskResultResponseBodyExecuteResult) };
    inline GetAdHocTaskResultResponseBody& setExecuteResult(const GetAdHocTaskResultResponseBodyExecuteResult & executeResult) { DARABONBA_PTR_SET_VALUE(executeResult_, executeResult) };
    inline GetAdHocTaskResultResponseBody& setExecuteResult(GetAdHocTaskResultResponseBodyExecuteResult && executeResult) { DARABONBA_PTR_SET_RVALUE(executeResult_, executeResult) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAdHocTaskResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAdHocTaskResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAdHocTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAdHocTaskResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<GetAdHocTaskResultResponseBodyExecuteResult> executeResult_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
