// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDATTENDEERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDATTENDEERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddAttendeeResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddAttendeeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAttendeeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_ANY_TO_JSON(ErrorCtx, errorCtx_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddAttendeeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_ANY_FROM_JSON(ErrorCtx, errorCtx_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddAttendeeResponseBody() = default ;
    AddAttendeeResponseBody(const AddAttendeeResponseBody &) = default ;
    AddAttendeeResponseBody(AddAttendeeResponseBody &&) = default ;
    AddAttendeeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAttendeeResponseBody() = default ;
    AddAttendeeResponseBody& operator=(const AddAttendeeResponseBody &) = default ;
    AddAttendeeResponseBody& operator=(AddAttendeeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorCtx_ == nullptr && return this->errorMsg_ == nullptr && return this->httpStatusCode_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const AddAttendeeResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, AddAttendeeResponseBodyContent) };
    inline AddAttendeeResponseBodyContent content() { DARABONBA_PTR_GET(content_, AddAttendeeResponseBodyContent) };
    inline AddAttendeeResponseBody& setContent(const AddAttendeeResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline AddAttendeeResponseBody& setContent(AddAttendeeResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline AddAttendeeResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorCtx Field Functions 
    bool hasErrorCtx() const { return this->errorCtx_ != nullptr;};
    void deleteErrorCtx() { this->errorCtx_ = nullptr;};
    inline     const Darabonba::Json & errorCtx() const { DARABONBA_GET(errorCtx_) };
    Darabonba::Json & errorCtx() { DARABONBA_GET(errorCtx_) };
    inline AddAttendeeResponseBody& setErrorCtx(const Darabonba::Json & errorCtx) { DARABONBA_SET_VALUE(errorCtx_, errorCtx) };
    inline AddAttendeeResponseBody& setErrorCtx(Darabonba::Json & errorCtx) { DARABONBA_SET_RVALUE(errorCtx_, errorCtx) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline AddAttendeeResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline AddAttendeeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddAttendeeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddAttendeeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<AddAttendeeResponseBodyContent> content_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    Darabonba::Json errorCtx_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // RequestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
