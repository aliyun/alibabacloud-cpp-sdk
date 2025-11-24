// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONSREWRITE_HPP_
#define ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONSREWRITE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite& obj) { 
      DARABONBA_PTR_TO_JSON(Authority, authority_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite& obj) { 
      DARABONBA_PTR_FROM_JSON(Authority, authority_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite() = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite(const CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite(CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite &&) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite() = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite& operator=(const CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite& operator=(CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authority_ == nullptr
        && return this->uri_ == nullptr; };
    // authority Field Functions 
    bool hasAuthority() const { return this->authority_ != nullptr;};
    void deleteAuthority() { this->authority_ = nullptr;};
    inline string authority() const { DARABONBA_PTR_GET_DEFAULT(authority_, "") };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite& setAuthority(string authority) { DARABONBA_PTR_SET_VALUE(authority_, authority) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // The value to be used to overwrite the value of the Authority or Host header.
    std::shared_ptr<string> authority_ = nullptr;
    // The value to be used to overwrite the path or prefix of the URI.
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
