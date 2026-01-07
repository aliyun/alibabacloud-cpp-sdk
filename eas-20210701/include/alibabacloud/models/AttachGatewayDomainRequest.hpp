// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHGATEWAYDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHGATEWAYDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class AttachGatewayDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachGatewayDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomDomain, customDomain_);
    };
    friend void from_json(const Darabonba::Json& j, AttachGatewayDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomDomain, customDomain_);
    };
    AttachGatewayDomainRequest() = default ;
    AttachGatewayDomainRequest(const AttachGatewayDomainRequest &) = default ;
    AttachGatewayDomainRequest(AttachGatewayDomainRequest &&) = default ;
    AttachGatewayDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachGatewayDomainRequest() = default ;
    AttachGatewayDomainRequest& operator=(const AttachGatewayDomainRequest &) = default ;
    AttachGatewayDomainRequest& operator=(AttachGatewayDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomDomain : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomDomain& obj) { 
        DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, CustomDomain& obj) { 
        DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      CustomDomain() = default ;
      CustomDomain(const CustomDomain &) = default ;
      CustomDomain(CustomDomain &&) = default ;
      CustomDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomDomain() = default ;
      CustomDomain& operator=(const CustomDomain &) = default ;
      CustomDomain& operator=(CustomDomain &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certificateId_ == nullptr
        && this->domain_ == nullptr && this->type_ == nullptr; };
      // certificateId Field Functions 
      bool hasCertificateId() const { return this->certificateId_ != nullptr;};
      void deleteCertificateId() { this->certificateId_ = nullptr;};
      inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
      inline CustomDomain& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline CustomDomain& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CustomDomain& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the SSL certificate bound to the domain name. Obtain the certificate ID after you upload or purchase a certificate in the [Certificate Management Service](https://yundunnext.console.aliyun.com/?spm=5176.2020520163.console-base_help.2.4b3baJixaJixOc\\&p=cas) console.
      shared_ptr<string> certificateId_ {};
      // The custom domain name.
      // 
      // This parameter is required.
      shared_ptr<string> domain_ {};
      // The domain name type.
      // 
      // Valid value:
      // 
      // *   intranet: internal network.
      // *   internet: public network.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->customDomain_ == nullptr; };
    // customDomain Field Functions 
    bool hasCustomDomain() const { return this->customDomain_ != nullptr;};
    void deleteCustomDomain() { this->customDomain_ = nullptr;};
    inline const AttachGatewayDomainRequest::CustomDomain & getCustomDomain() const { DARABONBA_PTR_GET_CONST(customDomain_, AttachGatewayDomainRequest::CustomDomain) };
    inline AttachGatewayDomainRequest::CustomDomain getCustomDomain() { DARABONBA_PTR_GET(customDomain_, AttachGatewayDomainRequest::CustomDomain) };
    inline AttachGatewayDomainRequest& setCustomDomain(const AttachGatewayDomainRequest::CustomDomain & customDomain) { DARABONBA_PTR_SET_VALUE(customDomain_, customDomain) };
    inline AttachGatewayDomainRequest& setCustomDomain(AttachGatewayDomainRequest::CustomDomain && customDomain) { DARABONBA_PTR_SET_RVALUE(customDomain_, customDomain) };


  protected:
    // The custom domain name information.
    // 
    // This parameter is required.
    shared_ptr<AttachGatewayDomainRequest::CustomDomain> customDomain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
