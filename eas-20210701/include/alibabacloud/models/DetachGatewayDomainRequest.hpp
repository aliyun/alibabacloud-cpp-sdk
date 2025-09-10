// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHGATEWAYDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHGATEWAYDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetachGatewayDomainRequestCustomDomain.hpp>
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
    virtual bool empty() const override { this->customDomain_ != nullptr; };
    // customDomain Field Functions 
    bool hasCustomDomain() const { return this->customDomain_ != nullptr;};
    void deleteCustomDomain() { this->customDomain_ = nullptr;};
    inline const DetachGatewayDomainRequestCustomDomain & customDomain() const { DARABONBA_PTR_GET_CONST(customDomain_, DetachGatewayDomainRequestCustomDomain) };
    inline DetachGatewayDomainRequestCustomDomain customDomain() { DARABONBA_PTR_GET(customDomain_, DetachGatewayDomainRequestCustomDomain) };
    inline DetachGatewayDomainRequest& setCustomDomain(const DetachGatewayDomainRequestCustomDomain & customDomain) { DARABONBA_PTR_SET_VALUE(customDomain_, customDomain) };
    inline DetachGatewayDomainRequest& setCustomDomain(DetachGatewayDomainRequestCustomDomain && customDomain) { DARABONBA_PTR_SET_RVALUE(customDomain_, customDomain) };


  protected:
    // The custom domain name information.
    // 
    // This parameter is required.
    std::shared_ptr<DetachGatewayDomainRequestCustomDomain> customDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
