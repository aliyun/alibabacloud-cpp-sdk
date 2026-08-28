// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSSLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSSLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationSSLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationSSLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_TO_JSON(CertExpiredTime, certExpiredTime_);
      DARABONBA_PTR_TO_JSON(CertFingerprintSha256Der, certFingerprintSha256Der_);
      DARABONBA_PTR_TO_JSON(CertModifiedTime, certModifiedTime_);
      DARABONBA_PTR_TO_JSON(CertSource, certSource_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SSLAutoRotate, SSLAutoRotate_);
      DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationSSLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_FROM_JSON(CertExpiredTime, certExpiredTime_);
      DARABONBA_PTR_FROM_JSON(CertFingerprintSha256Der, certFingerprintSha256Der_);
      DARABONBA_PTR_FROM_JSON(CertModifiedTime, certModifiedTime_);
      DARABONBA_PTR_FROM_JSON(CertSource, certSource_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SSLAutoRotate, SSLAutoRotate_);
      DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
    };
    DescribeApplicationSSLResponseBody() = default ;
    DescribeApplicationSSLResponseBody(const DescribeApplicationSSLResponseBody &) = default ;
    DescribeApplicationSSLResponseBody(DescribeApplicationSSLResponseBody &&) = default ;
    DescribeApplicationSSLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationSSLResponseBody() = default ;
    DescribeApplicationSSLResponseBody& operator=(const DescribeApplicationSSLResponseBody &) = default ;
    DescribeApplicationSSLResponseBody& operator=(DescribeApplicationSSLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certCommonName_ == nullptr
        && this->certExpiredTime_ == nullptr && this->certFingerprintSha256Der_ == nullptr && this->certModifiedTime_ == nullptr && this->certSource_ == nullptr && this->requestId_ == nullptr
        && this->SSLAutoRotate_ == nullptr && this->SSLEnabled_ == nullptr; };
    // certCommonName Field Functions 
    bool hasCertCommonName() const { return this->certCommonName_ != nullptr;};
    void deleteCertCommonName() { this->certCommonName_ = nullptr;};
    inline string getCertCommonName() const { DARABONBA_PTR_GET_DEFAULT(certCommonName_, "") };
    inline DescribeApplicationSSLResponseBody& setCertCommonName(string certCommonName) { DARABONBA_PTR_SET_VALUE(certCommonName_, certCommonName) };


    // certExpiredTime Field Functions 
    bool hasCertExpiredTime() const { return this->certExpiredTime_ != nullptr;};
    void deleteCertExpiredTime() { this->certExpiredTime_ = nullptr;};
    inline string getCertExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(certExpiredTime_, "") };
    inline DescribeApplicationSSLResponseBody& setCertExpiredTime(string certExpiredTime) { DARABONBA_PTR_SET_VALUE(certExpiredTime_, certExpiredTime) };


    // certFingerprintSha256Der Field Functions 
    bool hasCertFingerprintSha256Der() const { return this->certFingerprintSha256Der_ != nullptr;};
    void deleteCertFingerprintSha256Der() { this->certFingerprintSha256Der_ = nullptr;};
    inline string getCertFingerprintSha256Der() const { DARABONBA_PTR_GET_DEFAULT(certFingerprintSha256Der_, "") };
    inline DescribeApplicationSSLResponseBody& setCertFingerprintSha256Der(string certFingerprintSha256Der) { DARABONBA_PTR_SET_VALUE(certFingerprintSha256Der_, certFingerprintSha256Der) };


    // certModifiedTime Field Functions 
    bool hasCertModifiedTime() const { return this->certModifiedTime_ != nullptr;};
    void deleteCertModifiedTime() { this->certModifiedTime_ = nullptr;};
    inline string getCertModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(certModifiedTime_, "") };
    inline DescribeApplicationSSLResponseBody& setCertModifiedTime(string certModifiedTime) { DARABONBA_PTR_SET_VALUE(certModifiedTime_, certModifiedTime) };


    // certSource Field Functions 
    bool hasCertSource() const { return this->certSource_ != nullptr;};
    void deleteCertSource() { this->certSource_ = nullptr;};
    inline string getCertSource() const { DARABONBA_PTR_GET_DEFAULT(certSource_, "") };
    inline DescribeApplicationSSLResponseBody& setCertSource(string certSource) { DARABONBA_PTR_SET_VALUE(certSource_, certSource) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationSSLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SSLAutoRotate Field Functions 
    bool hasSSLAutoRotate() const { return this->SSLAutoRotate_ != nullptr;};
    void deleteSSLAutoRotate() { this->SSLAutoRotate_ = nullptr;};
    inline bool getSSLAutoRotate() const { DARABONBA_PTR_GET_DEFAULT(SSLAutoRotate_, false) };
    inline DescribeApplicationSSLResponseBody& setSSLAutoRotate(bool SSLAutoRotate) { DARABONBA_PTR_SET_VALUE(SSLAutoRotate_, SSLAutoRotate) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline bool getSSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, false) };
    inline DescribeApplicationSSLResponseBody& setSSLEnabled(bool SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


  protected:
    // The Common Name of the certificate. This field is empty when SSL is not enabled.
    shared_ptr<string> certCommonName_ {};
    // The certificate expiration time in UTC. This field is empty when SSL is not enabled.
    shared_ptr<string> certExpiredTime_ {};
    // The SHA-256 (DER) fingerprint of the server certificate in lowercase hex. Use this value for client pinning. This is consistent with openssl -fingerprint -sha256. This field is empty when SSL is not enabled.
    shared_ptr<string> certFingerprintSha256Der_ {};
    // The most recent certificate installation time in UTC. This field is empty when SSL is not enabled.
    shared_ptr<string> certModifiedTime_ {};
    // The certificate source. Valid values:
    // 
    // - ca: issued by the platform.
    // - customer: provided by the user.
    // 
    // This field is empty when SSL is not enabled.
    shared_ptr<string> certSource_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether automatic rotation of platform-issued certificates is enabled.
    shared_ptr<bool> SSLAutoRotate_ {};
    // Indicates whether SSL is enabled.
    shared_ptr<bool> SSLEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
