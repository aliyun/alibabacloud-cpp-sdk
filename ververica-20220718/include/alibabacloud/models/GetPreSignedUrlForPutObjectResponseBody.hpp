// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRESIGNEDURLFORPUTOBJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRESIGNEDURLFORPUTOBJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPreSignedUrlForObjectResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetPreSignedUrlForPutObjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPreSignedUrlForPutObjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPreSignedUrlForPutObjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetPreSignedUrlForPutObjectResponseBody() = default ;
    GetPreSignedUrlForPutObjectResponseBody(const GetPreSignedUrlForPutObjectResponseBody &) = default ;
    GetPreSignedUrlForPutObjectResponseBody(GetPreSignedUrlForPutObjectResponseBody &&) = default ;
    GetPreSignedUrlForPutObjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPreSignedUrlForPutObjectResponseBody() = default ;
    GetPreSignedUrlForPutObjectResponseBody& operator=(const GetPreSignedUrlForPutObjectResponseBody &) = default ;
    GetPreSignedUrlForPutObjectResponseBody& operator=(GetPreSignedUrlForPutObjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->httpCode_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPreSignedUrlForObjectResult & data() const { DARABONBA_PTR_GET_CONST(data_, GetPreSignedUrlForObjectResult) };
    inline GetPreSignedUrlForObjectResult data() { DARABONBA_PTR_GET(data_, GetPreSignedUrlForObjectResult) };
    inline GetPreSignedUrlForPutObjectResponseBody& setData(const GetPreSignedUrlForObjectResult & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPreSignedUrlForPutObjectResponseBody& setData(GetPreSignedUrlForObjectResult && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetPreSignedUrlForPutObjectResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetPreSignedUrlForPutObjectResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetPreSignedUrlForPutObjectResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPreSignedUrlForPutObjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPreSignedUrlForPutObjectResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<GetPreSignedUrlForObjectResult> data_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<int32_t> httpCode_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
