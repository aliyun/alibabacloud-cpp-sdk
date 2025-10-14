// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSITEORIGINCLIENTCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSITEORIGINCLIENTCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UploadSiteOriginClientCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadSiteOriginClientCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadSiteOriginClientCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UploadSiteOriginClientCertificateRequest() = default ;
    UploadSiteOriginClientCertificateRequest(const UploadSiteOriginClientCertificateRequest &) = default ;
    UploadSiteOriginClientCertificateRequest(UploadSiteOriginClientCertificateRequest &&) = default ;
    UploadSiteOriginClientCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadSiteOriginClientCertificateRequest() = default ;
    UploadSiteOriginClientCertificateRequest& operator=(const UploadSiteOriginClientCertificateRequest &) = default ;
    UploadSiteOriginClientCertificateRequest& operator=(UploadSiteOriginClientCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificate_ == nullptr
        && return this->name_ == nullptr && return this->privateKey_ == nullptr && return this->siteId_ == nullptr; };
    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string certificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline UploadSiteOriginClientCertificateRequest& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UploadSiteOriginClientCertificateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string privateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline UploadSiteOriginClientCertificateRequest& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UploadSiteOriginClientCertificateRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The certificate content.
    // 
    // This parameter is required.
    std::shared_ptr<string> certificate_ = nullptr;
    // The certificate name.
    std::shared_ptr<string> name_ = nullptr;
    // The private key of the certificate.
    // 
    // This parameter is required.
    std::shared_ptr<string> privateKey_ = nullptr;
    // Site ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
