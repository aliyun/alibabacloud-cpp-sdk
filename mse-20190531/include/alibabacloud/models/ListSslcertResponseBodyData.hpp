// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSSLCERTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSSLCERTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListSSLCertResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSSLCertResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(GmtAfter, gmtAfter_);
      DARABONBA_PTR_TO_JSON(GmtBefore, gmtBefore_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(Sans, sans_);
    };
    friend void from_json(const Darabonba::Json& j, ListSSLCertResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(GmtAfter, gmtAfter_);
      DARABONBA_PTR_FROM_JSON(GmtBefore, gmtBefore_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(Sans, sans_);
    };
    ListSSLCertResponseBodyData() = default ;
    ListSSLCertResponseBodyData(const ListSSLCertResponseBodyData &) = default ;
    ListSSLCertResponseBodyData(ListSSLCertResponseBodyData &&) = default ;
    ListSSLCertResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSSLCertResponseBodyData() = default ;
    ListSSLCertResponseBodyData& operator=(const ListSSLCertResponseBodyData &) = default ;
    ListSSLCertResponseBodyData& operator=(ListSSLCertResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->afterDate_ != nullptr
        && this->algorithm_ != nullptr && this->beforeDate_ != nullptr && this->certIdentifier_ != nullptr && this->certName_ != nullptr && this->commonName_ != nullptr
        && this->gmtAfter_ != nullptr && this->gmtBefore_ != nullptr && this->issuer_ != nullptr && this->sans_ != nullptr; };
    // afterDate Field Functions 
    bool hasAfterDate() const { return this->afterDate_ != nullptr;};
    void deleteAfterDate() { this->afterDate_ = nullptr;};
    inline string afterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, "") };
    inline ListSSLCertResponseBodyData& setAfterDate(string afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline ListSSLCertResponseBodyData& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // beforeDate Field Functions 
    bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
    void deleteBeforeDate() { this->beforeDate_ = nullptr;};
    inline string beforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, "") };
    inline ListSSLCertResponseBodyData& setBeforeDate(string beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline ListSSLCertResponseBodyData& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline ListSSLCertResponseBodyData& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline ListSSLCertResponseBodyData& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // gmtAfter Field Functions 
    bool hasGmtAfter() const { return this->gmtAfter_ != nullptr;};
    void deleteGmtAfter() { this->gmtAfter_ = nullptr;};
    inline string gmtAfter() const { DARABONBA_PTR_GET_DEFAULT(gmtAfter_, "") };
    inline ListSSLCertResponseBodyData& setGmtAfter(string gmtAfter) { DARABONBA_PTR_SET_VALUE(gmtAfter_, gmtAfter) };


    // gmtBefore Field Functions 
    bool hasGmtBefore() const { return this->gmtBefore_ != nullptr;};
    void deleteGmtBefore() { this->gmtBefore_ = nullptr;};
    inline string gmtBefore() const { DARABONBA_PTR_GET_DEFAULT(gmtBefore_, "") };
    inline ListSSLCertResponseBodyData& setGmtBefore(string gmtBefore) { DARABONBA_PTR_SET_VALUE(gmtBefore_, gmtBefore) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline ListSSLCertResponseBodyData& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string sans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline ListSSLCertResponseBodyData& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


  protected:
    // The time when the certificate expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> afterDate_ = nullptr;
    // The algorithm.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The time when the certificate took effect. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> beforeDate_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The domain name with which the certificate is associated.
    std::shared_ptr<string> commonName_ = nullptr;
    // The time when the certificate expires. This value is a GMT timestamp.
    std::shared_ptr<string> gmtAfter_ = nullptr;
    // The time when the certificate took effect. This value is a GMT timestamp.
    std::shared_ptr<string> gmtBefore_ = nullptr;
    // The issuer of the certificate.
    std::shared_ptr<string> issuer_ = nullptr;
    // The SSL certificate.
    std::shared_ptr<string> sans_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
