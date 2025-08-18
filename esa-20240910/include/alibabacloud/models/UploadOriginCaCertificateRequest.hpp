// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADORIGINCACERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADORIGINCACERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UploadOriginCaCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadOriginCaCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadOriginCaCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UploadOriginCaCertificateRequest() = default ;
    UploadOriginCaCertificateRequest(const UploadOriginCaCertificateRequest &) = default ;
    UploadOriginCaCertificateRequest(UploadOriginCaCertificateRequest &&) = default ;
    UploadOriginCaCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadOriginCaCertificateRequest() = default ;
    UploadOriginCaCertificateRequest& operator=(const UploadOriginCaCertificateRequest &) = default ;
    UploadOriginCaCertificateRequest& operator=(UploadOriginCaCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificate_ != nullptr
        && this->name_ != nullptr && this->siteId_ != nullptr; };
    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string certificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline UploadOriginCaCertificateRequest& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UploadOriginCaCertificateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UploadOriginCaCertificateRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The certificate content.
    // 
    // This parameter is required.
    std::shared_ptr<string> certificate_ = nullptr;
    // The certificate name.
    std::shared_ptr<string> name_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
