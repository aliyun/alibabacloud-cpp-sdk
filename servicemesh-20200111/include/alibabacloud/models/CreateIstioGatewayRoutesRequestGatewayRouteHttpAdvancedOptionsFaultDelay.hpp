// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONSFAULTDELAY_HPP_
#define ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONSFAULTDELAY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelayPercentage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay& obj) { 
      DARABONBA_PTR_TO_JSON(FixedDelay, fixedDelay_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay& obj) { 
      DARABONBA_PTR_FROM_JSON(FixedDelay, fixedDelay_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
    };
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay() = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay(const CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay(CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay &&) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay() = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay& operator=(const CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay& operator=(CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fixedDelay_ == nullptr
        && return this->percentage_ == nullptr; };
    // fixedDelay Field Functions 
    bool hasFixedDelay() const { return this->fixedDelay_ != nullptr;};
    void deleteFixedDelay() { this->fixedDelay_ = nullptr;};
    inline string fixedDelay() const { DARABONBA_PTR_GET_DEFAULT(fixedDelay_, "") };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay& setFixedDelay(string fixedDelay) { DARABONBA_PTR_SET_VALUE(fixedDelay_, fixedDelay) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelayPercentage & percentage() const { DARABONBA_PTR_GET_CONST(percentage_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelayPercentage) };
    inline Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelayPercentage percentage() { DARABONBA_PTR_GET(percentage_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelayPercentage) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay& setPercentage(const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelayPercentage & percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay& setPercentage(Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelayPercentage && percentage) { DARABONBA_PTR_SET_RVALUE(percentage_, percentage) };


  protected:
    // The fixed duration for request delay.
    std::shared_ptr<string> fixedDelay_ = nullptr;
    // The percentage of requests to which the delay fault is injected.
    std::shared_ptr<Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelayPercentage> percentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
