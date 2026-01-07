// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHGATEWAYDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHGATEWAYDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DetachGatewayDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachGatewayDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomDomain, customDomain_);
    };
    friend void from_json(const Darabonba::Json& j, DetachGatewayDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomDomain, customDomain_);
    };
    DetachGatewayDomainRequest() = default ;
    DetachGatewayDomainRequest(const DetachGatewayDomainRequest &) = default ;
    DetachGatewayDomainRequest(DetachGatewayDomainRequest &&) = default ;
    DetachGatewayDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachGatewayDomainRequest() = default ;
    DetachGatewayDomainRequest& operator=(const DetachGatewayDomainRequest &) = default ;
    DetachGatewayDomainRequest& operator=(DetachGatewayDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomDomain : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomDomain& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, CustomDomain& obj) { 
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
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->type_ == nullptr; };
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
    inline const DetachGatewayDomainRequest::CustomDomain & getCustomDomain() const { DARABONBA_PTR_GET_CONST(customDomain_, DetachGatewayDomainRequest::CustomDomain) };
    inline DetachGatewayDomainRequest::CustomDomain getCustomDomain() { DARABONBA_PTR_GET(customDomain_, DetachGatewayDomainRequest::CustomDomain) };
    inline DetachGatewayDomainRequest& setCustomDomain(const DetachGatewayDomainRequest::CustomDomain & customDomain) { DARABONBA_PTR_SET_VALUE(customDomain_, customDomain) };
    inline DetachGatewayDomainRequest& setCustomDomain(DetachGatewayDomainRequest::CustomDomain && customDomain) { DARABONBA_PTR_SET_RVALUE(customDomain_, customDomain) };


  protected:
    // The custom domain name information.
    // 
    // This parameter is required.
    shared_ptr<DetachGatewayDomainRequest::CustomDomain> customDomain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
