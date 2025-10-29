// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVECERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLISTCERT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVECERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLISTCERT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(Common, common_);
      DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(Common, common_);
      DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
    };
    DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert() = default ;
    DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert(const DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert &) = default ;
    DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert(DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert &&) = default ;
    DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert() = default ;
    DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert& operator=(const DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert &) = default ;
    DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert& operator=(DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certId_ == nullptr
        && return this->certName_ == nullptr && return this->common_ == nullptr && return this->fingerprint_ == nullptr && return this->issuer_ == nullptr && return this->lastTime_ == nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // common Field Functions 
    bool hasCommon() const { return this->common_ != nullptr;};
    void deleteCommon() { this->common_ = nullptr;};
    inline string common() const { DARABONBA_PTR_GET_DEFAULT(common_, "") };
    inline DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert& setCommon(string common) { DARABONBA_PTR_SET_VALUE(common_, common) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string fingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


  protected:
    // The ID of the certificate.
    std::shared_ptr<int64_t> certId_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The Common Name (CN) attribute of the certificate.
    std::shared_ptr<string> common_ = nullptr;
    // The fingerprint of the certificate.
    std::shared_ptr<string> fingerprint_ = nullptr;
    // The certificate authority (CA) that issued the certificate.
    std::shared_ptr<string> issuer_ = nullptr;
    // The time when the certificate was issued. Unit: seconds.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
