// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONSSLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONSSLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyApplicationSSLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationSSLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(CaPem, caPem_);
      DARABONBA_PTR_TO_JSON(CertPem, certPem_);
      DARABONBA_PTR_TO_JSON(KeyPem, keyPem_);
      DARABONBA_PTR_TO_JSON(SslEnabled, sslEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationSSLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(CaPem, caPem_);
      DARABONBA_PTR_FROM_JSON(CertPem, certPem_);
      DARABONBA_PTR_FROM_JSON(KeyPem, keyPem_);
      DARABONBA_PTR_FROM_JSON(SslEnabled, sslEnabled_);
    };
    ModifyApplicationSSLRequest() = default ;
    ModifyApplicationSSLRequest(const ModifyApplicationSSLRequest &) = default ;
    ModifyApplicationSSLRequest(ModifyApplicationSSLRequest &&) = default ;
    ModifyApplicationSSLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationSSLRequest() = default ;
    ModifyApplicationSSLRequest& operator=(const ModifyApplicationSSLRequest &) = default ;
    ModifyApplicationSSLRequest& operator=(ModifyApplicationSSLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->caPem_ == nullptr && this->certPem_ == nullptr && this->keyPem_ == nullptr && this->sslEnabled_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ModifyApplicationSSLRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // caPem Field Functions 
    bool hasCaPem() const { return this->caPem_ != nullptr;};
    void deleteCaPem() { this->caPem_ = nullptr;};
    inline string getCaPem() const { DARABONBA_PTR_GET_DEFAULT(caPem_, "") };
    inline ModifyApplicationSSLRequest& setCaPem(string caPem) { DARABONBA_PTR_SET_VALUE(caPem_, caPem) };


    // certPem Field Functions 
    bool hasCertPem() const { return this->certPem_ != nullptr;};
    void deleteCertPem() { this->certPem_ = nullptr;};
    inline string getCertPem() const { DARABONBA_PTR_GET_DEFAULT(certPem_, "") };
    inline ModifyApplicationSSLRequest& setCertPem(string certPem) { DARABONBA_PTR_SET_VALUE(certPem_, certPem) };


    // keyPem Field Functions 
    bool hasKeyPem() const { return this->keyPem_ != nullptr;};
    void deleteKeyPem() { this->keyPem_ = nullptr;};
    inline string getKeyPem() const { DARABONBA_PTR_GET_DEFAULT(keyPem_, "") };
    inline ModifyApplicationSSLRequest& setKeyPem(string keyPem) { DARABONBA_PTR_SET_VALUE(keyPem_, keyPem) };


    // sslEnabled Field Functions 
    bool hasSslEnabled() const { return this->sslEnabled_ != nullptr;};
    void deleteSslEnabled() { this->sslEnabled_ = nullptr;};
    inline bool getSslEnabled() const { DARABONBA_PTR_GET_DEFAULT(sslEnabled_, false) };
    inline ModifyApplicationSSLRequest& setSslEnabled(bool sslEnabled) { DARABONBA_PTR_SET_VALUE(sslEnabled_, sslEnabled) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The server certificate chain in PEM format. This parameter is optional.
    shared_ptr<string> caPem_ {};
    // The server certificate in PEM format. This parameter is provided when you use a bring-your-own (BYO) certificate. It must match KeyPem and override the instance connection domain name. This parameter is allowed only when CA SSL is enabled for the instance.
    shared_ptr<string> certPem_ {};
    // The server private key in PEM format. PKCS#1, PKCS#8, and EC SEC1 formats are supported.
    shared_ptr<string> keyPem_ {};
    // Specifies whether SSL is enabled.
    // 
    // This parameter is required.
    shared_ptr<bool> sslEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
