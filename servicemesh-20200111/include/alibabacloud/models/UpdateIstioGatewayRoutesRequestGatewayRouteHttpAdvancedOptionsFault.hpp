// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONSFAULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONSFAULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault& obj) { 
      DARABONBA_PTR_TO_JSON(Abort, abort_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault& obj) { 
      DARABONBA_PTR_FROM_JSON(Abort, abort_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
    };
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault(const UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault(UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault &&) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault& operator=(const UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault& operator=(UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abort_ == nullptr
        && return this->delay_ == nullptr; };
    // abort Field Functions 
    bool hasAbort() const { return this->abort_ != nullptr;};
    void deleteAbort() { this->abort_ = nullptr;};
    inline const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort & abort() const { DARABONBA_PTR_GET_CONST(abort_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort) };
    inline Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort abort() { DARABONBA_PTR_GET(abort_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault& setAbort(const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort & abort) { DARABONBA_PTR_SET_VALUE(abort_, abort) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault& setAbort(Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort && abort) { DARABONBA_PTR_SET_RVALUE(abort_, abort) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay & delay() const { DARABONBA_PTR_GET_CONST(delay_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay) };
    inline Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay delay() { DARABONBA_PTR_GET(delay_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault& setDelay(const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay & delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault& setDelay(Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay && delay) { DARABONBA_PTR_SET_RVALUE(delay_, delay) };


  protected:
    // The configurations for aborting requests with specified error codes.
    std::shared_ptr<Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort> abort_ = nullptr;
    // The duration to delay a request.
    std::shared_ptr<Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay> delay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
