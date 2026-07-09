// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIGNUSERIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SIGNUSERIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class SignUserImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SignUserImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(CertificateSubject, certificateSubject_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SignTime, signTime_);
      DARABONBA_PTR_TO_JSON(SignedImageUrl, signedImageUrl_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SignUserImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CertificateSubject, certificateSubject_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SignTime, signTime_);
      DARABONBA_PTR_FROM_JSON(SignedImageUrl, signedImageUrl_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SignUserImageResponseBody() = default ;
    SignUserImageResponseBody(const SignUserImageResponseBody &) = default ;
    SignUserImageResponseBody(SignUserImageResponseBody &&) = default ;
    SignUserImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SignUserImageResponseBody() = default ;
    SignUserImageResponseBody& operator=(const SignUserImageResponseBody &) = default ;
    SignUserImageResponseBody& operator=(SignUserImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->certificateSubject_ == nullptr && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->objectKey_ == nullptr
        && this->requestId_ == nullptr && this->signTime_ == nullptr && this->signedImageUrl_ == nullptr && this->success_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline SignUserImageResponseBody& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certificateSubject Field Functions 
    bool hasCertificateSubject() const { return this->certificateSubject_ != nullptr;};
    void deleteCertificateSubject() { this->certificateSubject_ = nullptr;};
    inline string getCertificateSubject() const { DARABONBA_PTR_GET_DEFAULT(certificateSubject_, "") };
    inline SignUserImageResponseBody& setCertificateSubject(string certificateSubject) { DARABONBA_PTR_SET_VALUE(certificateSubject_, certificateSubject) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SignUserImageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline SignUserImageResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SignUserImageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // objectKey Field Functions 
    bool hasObjectKey() const { return this->objectKey_ != nullptr;};
    void deleteObjectKey() { this->objectKey_ = nullptr;};
    inline string getObjectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
    inline SignUserImageResponseBody& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SignUserImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signTime Field Functions 
    bool hasSignTime() const { return this->signTime_ != nullptr;};
    void deleteSignTime() { this->signTime_ = nullptr;};
    inline string getSignTime() const { DARABONBA_PTR_GET_DEFAULT(signTime_, "") };
    inline SignUserImageResponseBody& setSignTime(string signTime) { DARABONBA_PTR_SET_VALUE(signTime_, signTime) };


    // signedImageUrl Field Functions 
    bool hasSignedImageUrl() const { return this->signedImageUrl_ != nullptr;};
    void deleteSignedImageUrl() { this->signedImageUrl_ = nullptr;};
    inline string getSignedImageUrl() const { DARABONBA_PTR_GET_DEFAULT(signedImageUrl_, "") };
    inline SignUserImageResponseBody& setSignedImageUrl(string signedImageUrl) { DARABONBA_PTR_SET_VALUE(signedImageUrl_, signedImageUrl) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SignUserImageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The algorithm used for signing, such as ps256 or es256.
    shared_ptr<string> algorithm_ {};
    // The subject information of the signing certificate.
    shared_ptr<string> certificateSubject_ {};
    // The business error code. The value "OK" is returned if the request succeeds.
    shared_ptr<string> code_ {};
    // The HTTP status code. The value 200 is returned if the request succeeds.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The additional information. The value "success" is returned if the request succeeds.
    shared_ptr<string> message_ {};
    // The ObjectKey of the signed image in OSS. You can use this value for subsequent API calls.
    shared_ptr<string> objectKey_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The signing time in ISO 8601 format, such as `2026-01-15T08:30:00Z`.
    shared_ptr<string> signTime_ {};
    // The pre-signed download URL of the signed image.
    shared_ptr<string> signedImageUrl_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
