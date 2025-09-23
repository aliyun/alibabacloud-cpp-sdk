// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGLAYER7CERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGLAYER7CERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class ConfigLayer7CertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigLayer7CertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cert, cert_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigLayer7CertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cert, cert_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ConfigLayer7CertRequest() = default ;
    ConfigLayer7CertRequest(const ConfigLayer7CertRequest &) = default ;
    ConfigLayer7CertRequest(ConfigLayer7CertRequest &&) = default ;
    ConfigLayer7CertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigLayer7CertRequest() = default ;
    ConfigLayer7CertRequest& operator=(const ConfigLayer7CertRequest &) = default ;
    ConfigLayer7CertRequest& operator=(ConfigLayer7CertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cert_ != nullptr
        && this->certId_ != nullptr && this->certIdentifier_ != nullptr && this->certName_ != nullptr && this->certRegion_ != nullptr && this->domain_ != nullptr
        && this->key_ != nullptr && this->resourceGroupId_ != nullptr; };
    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline string cert() const { DARABONBA_PTR_GET_DEFAULT(cert_, "") };
    inline ConfigLayer7CertRequest& setCert(string cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int32_t certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0) };
    inline ConfigLayer7CertRequest& setCertId(int32_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline ConfigLayer7CertRequest& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline ConfigLayer7CertRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certRegion Field Functions 
    bool hasCertRegion() const { return this->certRegion_ != nullptr;};
    void deleteCertRegion() { this->certRegion_ = nullptr;};
    inline string certRegion() const { DARABONBA_PTR_GET_DEFAULT(certRegion_, "") };
    inline ConfigLayer7CertRequest& setCertRegion(string certRegion) { DARABONBA_PTR_SET_VALUE(certRegion_, certRegion) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ConfigLayer7CertRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ConfigLayer7CertRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigLayer7CertRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    std::shared_ptr<string> cert_ = nullptr;
    std::shared_ptr<int32_t> certId_ = nullptr;
    std::shared_ptr<string> certIdentifier_ = nullptr;
    std::shared_ptr<string> certName_ = nullptr;
    std::shared_ptr<string> certRegion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
