// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHGATEWAYDOMAINREQUESTCUSTOMDOMAIN_HPP_
#define ALIBABACLOUD_MODELS_DETACHGATEWAYDOMAINREQUESTCUSTOMDOMAIN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DetachGatewayDomainRequestCustomDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachGatewayDomainRequestCustomDomain& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DetachGatewayDomainRequestCustomDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DetachGatewayDomainRequestCustomDomain() = default ;
    DetachGatewayDomainRequestCustomDomain(const DetachGatewayDomainRequestCustomDomain &) = default ;
    DetachGatewayDomainRequestCustomDomain(DetachGatewayDomainRequestCustomDomain &&) = default ;
    DetachGatewayDomainRequestCustomDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachGatewayDomainRequestCustomDomain() = default ;
    DetachGatewayDomainRequestCustomDomain& operator=(const DetachGatewayDomainRequestCustomDomain &) = default ;
    DetachGatewayDomainRequestCustomDomain& operator=(DetachGatewayDomainRequestCustomDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->type_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DetachGatewayDomainRequestCustomDomain& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DetachGatewayDomainRequestCustomDomain& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The custom domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The domain name type.
    // 
    // Valid value:
    // 
    // *   intranet: internal network.
    // *   internet: public network.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
