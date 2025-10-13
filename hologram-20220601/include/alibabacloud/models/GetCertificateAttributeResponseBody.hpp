// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCERTIFICATEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCERTIFICATEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCertificateAttributeResponseBodyCertificateAttributeDto.hpp>
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
    virtual bool empty() const override { this->certificateAttributeDto_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->httpStatusCode_ != nullptr && this->success_ != nullptr && this->requestId_ != nullptr; };
    // certificateAttributeDto Field Functions 
    bool hasCertificateAttributeDto() const { return this->certificateAttributeDto_ != nullptr;};
    void deleteCertificateAttributeDto() { this->certificateAttributeDto_ = nullptr;};
    inline const GetCertificateAttributeResponseBodyCertificateAttributeDto & certificateAttributeDto() const { DARABONBA_PTR_GET_CONST(certificateAttributeDto_, GetCertificateAttributeResponseBodyCertificateAttributeDto) };
    inline GetCertificateAttributeResponseBodyCertificateAttributeDto certificateAttributeDto() { DARABONBA_PTR_GET(certificateAttributeDto_, GetCertificateAttributeResponseBodyCertificateAttributeDto) };
    inline GetCertificateAttributeResponseBody& setCertificateAttributeDto(const GetCertificateAttributeResponseBodyCertificateAttributeDto & certificateAttributeDto) { DARABONBA_PTR_SET_VALUE(certificateAttributeDto_, certificateAttributeDto) };
    inline GetCertificateAttributeResponseBody& setCertificateAttributeDto(GetCertificateAttributeResponseBodyCertificateAttributeDto && certificateAttributeDto) { DARABONBA_PTR_SET_RVALUE(certificateAttributeDto_, certificateAttributeDto) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetCertificateAttributeResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetCertificateAttributeResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline GetCertificateAttributeResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCertificateAttributeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCertificateAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetCertificateAttributeResponseBodyCertificateAttributeDto> certificateAttributeDto_ = nullptr;
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
