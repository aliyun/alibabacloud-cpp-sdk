// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONSFAULTDELAY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONSFAULTDELAY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelayPercentage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay& obj) { 
      DARABONBA_PTR_TO_JSON(FixedDelay, fixedDelay_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay& obj) { 
      DARABONBA_PTR_FROM_JSON(FixedDelay, fixedDelay_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
    };
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay(const UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay(UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay &&) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay& operator=(const UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay& operator=(UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay &&) = default ;
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
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay& setFixedDelay(string fixedDelay) { DARABONBA_PTR_SET_VALUE(fixedDelay_, fixedDelay) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelayPercentage & percentage() const { DARABONBA_PTR_GET_CONST(percentage_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelayPercentage) };
    inline Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelayPercentage percentage() { DARABONBA_PTR_GET(percentage_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelayPercentage) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay& setPercentage(const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelayPercentage & percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay& setPercentage(Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelayPercentage && percentage) { DARABONBA_PTR_SET_RVALUE(percentage_, percentage) };


  protected:
    // The fixed duration for request delay.
    std::shared_ptr<string> fixedDelay_ = nullptr;
    // The percentage of requests to which the delay fault is injected.
    std::shared_ptr<Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelayPercentage> percentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
