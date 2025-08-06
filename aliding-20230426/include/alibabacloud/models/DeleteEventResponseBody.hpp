// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteEventResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_ANY_TO_JSON(errorCtx, errorCtx_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_ANY_FROM_JSON(errorCtx, errorCtx_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    DeleteEventResponseBody() = default ;
    DeleteEventResponseBody(const DeleteEventResponseBody &) = default ;
    DeleteEventResponseBody(DeleteEventResponseBody &&) = default ;
    DeleteEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEventResponseBody() = default ;
    DeleteEventResponseBody& operator=(const DeleteEventResponseBody &) = default ;
    DeleteEventResponseBody& operator=(DeleteEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->errorCode_ != nullptr && this->errorCtx_ != nullptr && this->errorMsg_ != nullptr && this->httpStatusCode_ != nullptr && this->requestId_ != nullptr
        && this->success_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const DeleteEventResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, DeleteEventResponseBodyContent) };
    inline DeleteEventResponseBodyContent content() { DARABONBA_PTR_GET(content_, DeleteEventResponseBodyContent) };
    inline DeleteEventResponseBody& setContent(const DeleteEventResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DeleteEventResponseBody& setContent(DeleteEventResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DeleteEventResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorCtx Field Functions 
    bool hasErrorCtx() const { return this->errorCtx_ != nullptr;};
    void deleteErrorCtx() { this->errorCtx_ = nullptr;};
    inline     const Darabonba::Json & errorCtx() const { DARABONBA_GET(errorCtx_) };
    Darabonba::Json & errorCtx() { DARABONBA_GET(errorCtx_) };
    inline DeleteEventResponseBody& setErrorCtx(const Darabonba::Json & errorCtx) { DARABONBA_SET_VALUE(errorCtx_, errorCtx) };
    inline DeleteEventResponseBody& setErrorCtx(Darabonba::Json & errorCtx) { DARABONBA_SET_RVALUE(errorCtx_, errorCtx) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DeleteEventResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DeleteEventResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteEventResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<DeleteEventResponseBodyContent> content_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    Darabonba::Json errorCtx_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
