// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONSFAULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONSFAULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort.hpp>
#include <alibabacloud/models/CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault& obj) { 
      DARABONBA_PTR_TO_JSON(Abort, abort_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault& obj) { 
      DARABONBA_PTR_FROM_JSON(Abort, abort_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
    };
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault() = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault(const CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault(CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault &&) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault() = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault& operator=(const CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault& operator=(CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abort_ == nullptr
        && return this->delay_ == nullptr; };
    // abort Field Functions 
    bool hasAbort() const { return this->abort_ != nullptr;};
    void deleteAbort() { this->abort_ = nullptr;};
    inline const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort & abort() const { DARABONBA_PTR_GET_CONST(abort_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort) };
    inline Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort abort() { DARABONBA_PTR_GET(abort_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault& setAbort(const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort & abort) { DARABONBA_PTR_SET_VALUE(abort_, abort) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault& setAbort(Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort && abort) { DARABONBA_PTR_SET_RVALUE(abort_, abort) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay & delay() const { DARABONBA_PTR_GET_CONST(delay_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay) };
    inline Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay delay() { DARABONBA_PTR_GET(delay_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault& setDelay(const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay & delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault& setDelay(Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay && delay) { DARABONBA_PTR_SET_RVALUE(delay_, delay) };


  protected:
    // The configurations for aborting requests with specified error codes.
    std::shared_ptr<Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort> abort_ = nullptr;
    // The duration to delay a request.
    std::shared_ptr<Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultDelay> delay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
