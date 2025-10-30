// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALERTEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAlertEventResponseBodyAlertEventInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAlertEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertEventInfo, alertEventInfo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertEventInfo, alertEventInfo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAlertEventResponseBody() = default ;
    GetAlertEventResponseBody(const GetAlertEventResponseBody &) = default ;
    GetAlertEventResponseBody(GetAlertEventResponseBody &&) = default ;
    GetAlertEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertEventResponseBody() = default ;
    GetAlertEventResponseBody& operator=(const GetAlertEventResponseBody &) = default ;
    GetAlertEventResponseBody& operator=(GetAlertEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertEventInfo_ == nullptr
        && return this->code_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // alertEventInfo Field Functions 
    bool hasAlertEventInfo() const { return this->alertEventInfo_ != nullptr;};
    void deleteAlertEventInfo() { this->alertEventInfo_ = nullptr;};
    inline const GetAlertEventResponseBodyAlertEventInfo & alertEventInfo() const { DARABONBA_PTR_GET_CONST(alertEventInfo_, GetAlertEventResponseBodyAlertEventInfo) };
    inline GetAlertEventResponseBodyAlertEventInfo alertEventInfo() { DARABONBA_PTR_GET(alertEventInfo_, GetAlertEventResponseBodyAlertEventInfo) };
    inline GetAlertEventResponseBody& setAlertEventInfo(const GetAlertEventResponseBodyAlertEventInfo & alertEventInfo) { DARABONBA_PTR_SET_VALUE(alertEventInfo_, alertEventInfo) };
    inline GetAlertEventResponseBody& setAlertEventInfo(GetAlertEventResponseBodyAlertEventInfo && alertEventInfo) { DARABONBA_PTR_SET_RVALUE(alertEventInfo_, alertEventInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAlertEventResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAlertEventResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAlertEventResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlertEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAlertEventResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<GetAlertEventResponseBodyAlertEventInfo> alertEventInfo_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
