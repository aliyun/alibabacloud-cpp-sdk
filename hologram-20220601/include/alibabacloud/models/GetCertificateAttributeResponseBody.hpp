// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCERTIFICATEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCERTIFICATEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class GetCertificateAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCertificateAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateAttributeDto, certificateAttributeDto_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCertificateAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateAttributeDto, certificateAttributeDto_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetCertificateAttributeResponseBody() = default ;
    GetCertificateAttributeResponseBody(const GetCertificateAttributeResponseBody &) = default ;
    GetCertificateAttributeResponseBody(GetCertificateAttributeResponseBody &&) = default ;
    GetCertificateAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCertificateAttributeResponseBody() = default ;
    GetCertificateAttributeResponseBody& operator=(const GetCertificateAttributeResponseBody &) = default ;
    GetCertificateAttributeResponseBody& operator=(GetCertificateAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CertificateAttributeDto : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertificateAttributeDto& obj) { 
        DARABONBA_PTR_TO_JSON(enableSSL, enableSSL_);
        DARABONBA_PTR_TO_JSON(expirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, CertificateAttributeDto& obj) { 
        DARABONBA_PTR_FROM_JSON(enableSSL, enableSSL_);
        DARABONBA_PTR_FROM_JSON(expirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      CertificateAttributeDto() = default ;
      CertificateAttributeDto(const CertificateAttributeDto &) = default ;
      CertificateAttributeDto(CertificateAttributeDto &&) = default ;
      CertificateAttributeDto(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertificateAttributeDto() = default ;
      CertificateAttributeDto& operator=(const CertificateAttributeDto &) = default ;
      CertificateAttributeDto& operator=(CertificateAttributeDto &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableSSL_ == nullptr
        && this->expirationTime_ == nullptr && this->status_ == nullptr; };
      // enableSSL Field Functions 
      bool hasEnableSSL() const { return this->enableSSL_ != nullptr;};
      void deleteEnableSSL() { this->enableSSL_ = nullptr;};
      inline bool getEnableSSL() const { DARABONBA_PTR_GET_DEFAULT(enableSSL_, false) };
      inline CertificateAttributeDto& setEnableSSL(bool enableSSL) { DARABONBA_PTR_SET_VALUE(enableSSL_, enableSSL) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
      inline CertificateAttributeDto& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CertificateAttributeDto& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<bool> enableSSL_ {};
      shared_ptr<int64_t> expirationTime_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->certificateAttributeDto_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->success_ == nullptr && this->requestId_ == nullptr; };
    // certificateAttributeDto Field Functions 
    bool hasCertificateAttributeDto() const { return this->certificateAttributeDto_ != nullptr;};
    void deleteCertificateAttributeDto() { this->certificateAttributeDto_ = nullptr;};
    inline const GetCertificateAttributeResponseBody::CertificateAttributeDto & getCertificateAttributeDto() const { DARABONBA_PTR_GET_CONST(certificateAttributeDto_, GetCertificateAttributeResponseBody::CertificateAttributeDto) };
    inline GetCertificateAttributeResponseBody::CertificateAttributeDto getCertificateAttributeDto() { DARABONBA_PTR_GET(certificateAttributeDto_, GetCertificateAttributeResponseBody::CertificateAttributeDto) };
    inline GetCertificateAttributeResponseBody& setCertificateAttributeDto(const GetCertificateAttributeResponseBody::CertificateAttributeDto & certificateAttributeDto) { DARABONBA_PTR_SET_VALUE(certificateAttributeDto_, certificateAttributeDto) };
    inline GetCertificateAttributeResponseBody& setCertificateAttributeDto(GetCertificateAttributeResponseBody::CertificateAttributeDto && certificateAttributeDto) { DARABONBA_PTR_SET_RVALUE(certificateAttributeDto_, certificateAttributeDto) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetCertificateAttributeResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetCertificateAttributeResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline GetCertificateAttributeResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCertificateAttributeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCertificateAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetCertificateAttributeResponseBody::CertificateAttributeDto> certificateAttributeDto_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> httpStatusCode_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
