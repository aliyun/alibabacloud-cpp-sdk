// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDCDNDOMAINCSRCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDCDNDOMAINCSRCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class SetDcdnDomainCSRCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDcdnDomainCSRCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ServerCertificate, serverCertificate_);
    };
    friend void from_json(const Darabonba::Json& j, SetDcdnDomainCSRCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ServerCertificate, serverCertificate_);
    };
    SetDcdnDomainCSRCertificateRequest() = default ;
    SetDcdnDomainCSRCertificateRequest(const SetDcdnDomainCSRCertificateRequest &) = default ;
    SetDcdnDomainCSRCertificateRequest(SetDcdnDomainCSRCertificateRequest &&) = default ;
    SetDcdnDomainCSRCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDcdnDomainCSRCertificateRequest() = default ;
    SetDcdnDomainCSRCertificateRequest& operator=(const SetDcdnDomainCSRCertificateRequest &) = default ;
    SetDcdnDomainCSRCertificateRequest& operator=(SetDcdnDomainCSRCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->serverCertificate_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetDcdnDomainCSRCertificateRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // serverCertificate Field Functions 
    bool hasServerCertificate() const { return this->serverCertificate_ != nullptr;};
    void deleteServerCertificate() { this->serverCertificate_ = nullptr;};
    inline string getServerCertificate() const { DARABONBA_PTR_GET_DEFAULT(serverCertificate_, "") };
    inline SetDcdnDomainCSRCertificateRequest& setServerCertificate(string serverCertificate) { DARABONBA_PTR_SET_VALUE(serverCertificate_, serverCertificate) };


  protected:
    // The domain name that is secured by the certificate. The domain name uses HTTPS acceleration.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The content of the certificate. The certificate must match the certificate signing request (CSR) created by calling the [CreateDcdnCertificateSigningRequest](https://help.aliyun.com/document_detail/144478.html) operation. Make sure that the certificate is in PEM format and its content is Base64-encoded and then encoded by encodeURIComponent.
    // 
    // This parameter is required.
    shared_ptr<string> serverCertificate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
