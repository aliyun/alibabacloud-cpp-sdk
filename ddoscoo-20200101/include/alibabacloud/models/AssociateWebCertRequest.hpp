// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEWEBCERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEWEBCERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class AssociateWebCertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateWebCertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cert, cert_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateWebCertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cert, cert_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    AssociateWebCertRequest() = default ;
    AssociateWebCertRequest(const AssociateWebCertRequest &) = default ;
    AssociateWebCertRequest(AssociateWebCertRequest &&) = default ;
    AssociateWebCertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateWebCertRequest() = default ;
    AssociateWebCertRequest& operator=(const AssociateWebCertRequest &) = default ;
    AssociateWebCertRequest& operator=(AssociateWebCertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cert_ == nullptr
        && this->certId_ == nullptr && this->certIdentifier_ == nullptr && this->certName_ == nullptr && this->certRegion_ == nullptr && this->domain_ == nullptr
        && this->key_ == nullptr; };
    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline string getCert() const { DARABONBA_PTR_GET_DEFAULT(cert_, "") };
    inline AssociateWebCertRequest& setCert(string cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int32_t getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0) };
    inline AssociateWebCertRequest& setCertId(int32_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline AssociateWebCertRequest& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline AssociateWebCertRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certRegion Field Functions 
    bool hasCertRegion() const { return this->certRegion_ != nullptr;};
    void deleteCertRegion() { this->certRegion_ = nullptr;};
    inline string getCertRegion() const { DARABONBA_PTR_GET_DEFAULT(certRegion_, "") };
    inline AssociateWebCertRequest& setCertRegion(string certRegion) { DARABONBA_PTR_SET_VALUE(certRegion_, certRegion) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AssociateWebCertRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline AssociateWebCertRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    shared_ptr<string> cert_ {};
    shared_ptr<int32_t> certId_ {};
    // The globally unique ID of the certificate. The value is in the "Certificate ID-cn-hangzhou" format. For example, if the ID of the certificate is 123, the value of the CertIdentifier parameter is 123-cn-hangzhou.
    // 
    // >  You can specify only one of this parameter and the CertId parameter.
    shared_ptr<string> certIdentifier_ {};
    shared_ptr<string> certName_ {};
    // The region of the certificate. Valid values: **cn-hangzhou** and **ap-southeast-1**. Default value: **cn-hangzhou**.
    shared_ptr<string> certRegion_ {};
    // This parameter is required.
    shared_ptr<string> domain_ {};
    shared_ptr<string> key_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
