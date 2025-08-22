// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSMCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSMCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList& obj) { 
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(Common, common_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList& obj) { 
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(Common, common_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
    };
    DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList() = default ;
    DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList(const DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList &) = default ;
    DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList(DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList &&) = default ;
    DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList() = default ;
    DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList& operator=(const DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList &) = default ;
    DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList& operator=(DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certIdentifier_ != nullptr
        && this->certName_ != nullptr && this->common_ != nullptr && this->issuer_ != nullptr; };
    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // common Field Functions 
    bool hasCommon() const { return this->common_ != nullptr;};
    void deleteCommon() { this->common_ = nullptr;};
    inline string common() const { DARABONBA_PTR_GET_DEFAULT(common_, "") };
    inline DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList& setCommon(string common) { DARABONBA_PTR_SET_VALUE(common_, common) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


  protected:
    // The ID of the certificate.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The common name of the certificate.
    std::shared_ptr<string> common_ = nullptr;
    // The certificate authority (CA) that issued the certificate.
    std::shared_ptr<string> issuer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
