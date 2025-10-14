// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWSSLCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RENEWSSLCERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class RenewSSLCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewSSLCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RenewSSLCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RenewSSLCertificateResponseBody() = default ;
    RenewSSLCertificateResponseBody(const RenewSSLCertificateResponseBody &) = default ;
    RenewSSLCertificateResponseBody(RenewSSLCertificateResponseBody &&) = default ;
    RenewSSLCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewSSLCertificateResponseBody() = default ;
    RenewSSLCertificateResponseBody& operator=(const RenewSSLCertificateResponseBody &) = default ;
    RenewSSLCertificateResponseBody& operator=(RenewSSLCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->httpStatusCode_ == nullptr && return this->success_ == nullptr && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline bool data() const { DARABONBA_PTR_GET_DEFAULT(data_, false) };
    inline RenewSSLCertificateResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline RenewSSLCertificateResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline RenewSSLCertificateResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline RenewSSLCertificateResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RenewSSLCertificateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RenewSSLCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> data_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
