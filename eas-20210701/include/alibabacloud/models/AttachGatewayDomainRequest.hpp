// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHGATEWAYDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHGATEWAYDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AttachGatewayDomainRequestCustomDomain.hpp>
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
    virtual bool empty() const override { return this->customDomain_ == nullptr; };
    // customDomain Field Functions 
    bool hasCustomDomain() const { return this->customDomain_ != nullptr;};
    void deleteCustomDomain() { this->customDomain_ = nullptr;};
    inline const AttachGatewayDomainRequestCustomDomain & customDomain() const { DARABONBA_PTR_GET_CONST(customDomain_, AttachGatewayDomainRequestCustomDomain) };
    inline AttachGatewayDomainRequestCustomDomain customDomain() { DARABONBA_PTR_GET(customDomain_, AttachGatewayDomainRequestCustomDomain) };
    inline AttachGatewayDomainRequest& setCustomDomain(const AttachGatewayDomainRequestCustomDomain & customDomain) { DARABONBA_PTR_SET_VALUE(customDomain_, customDomain) };
    inline AttachGatewayDomainRequest& setCustomDomain(AttachGatewayDomainRequestCustomDomain && customDomain) { DARABONBA_PTR_SET_RVALUE(customDomain_, customDomain) };


  protected:
    // The custom domain name information.
    // 
    // This parameter is required.
    std::shared_ptr<AttachGatewayDomainRequestCustomDomain> customDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
