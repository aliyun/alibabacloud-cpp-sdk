// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONSFAULTABORT_HPP_
#define ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONSFAULTABORT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbortPercentage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort& obj) { 
      DARABONBA_PTR_TO_JSON(HttpStatus, httpStatus_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpStatus, httpStatus_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
    };
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort() = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort(const CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort(CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort &&) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort() = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort& operator=(const CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort& operator=(CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->httpStatus_ == nullptr
        && return this->percentage_ == nullptr; };
    // httpStatus Field Functions 
    bool hasHttpStatus() const { return this->httpStatus_ != nullptr;};
    void deleteHttpStatus() { this->httpStatus_ = nullptr;};
    inline int32_t httpStatus() const { DARABONBA_PTR_GET_DEFAULT(httpStatus_, 0) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort& setHttpStatus(int32_t httpStatus) { DARABONBA_PTR_SET_VALUE(httpStatus_, httpStatus) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbortPercentage & percentage() const { DARABONBA_PTR_GET_CONST(percentage_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbortPercentage) };
    inline Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbortPercentage percentage() { DARABONBA_PTR_GET(percentage_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbortPercentage) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort& setPercentage(const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbortPercentage & percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort& setPercentage(Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbortPercentage && percentage) { DARABONBA_PTR_SET_RVALUE(percentage_, percentage) };


  protected:
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatus_ = nullptr;
    // The percentage of requests that are aborted with the specified error code.
    std::shared_ptr<Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbortPercentage> percentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
