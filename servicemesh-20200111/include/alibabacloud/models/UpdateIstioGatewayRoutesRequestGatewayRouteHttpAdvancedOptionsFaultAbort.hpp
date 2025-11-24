// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONSFAULTABORT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONSFAULTABORT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbortPercentage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort& obj) { 
      DARABONBA_PTR_TO_JSON(HttpStatus, httpStatus_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpStatus, httpStatus_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
    };
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort(const UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort(UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort &&) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort& operator=(const UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort& operator=(UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort &&) = default ;
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
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort& setHttpStatus(int32_t httpStatus) { DARABONBA_PTR_SET_VALUE(httpStatus_, httpStatus) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbortPercentage & percentage() const { DARABONBA_PTR_GET_CONST(percentage_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbortPercentage) };
    inline Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbortPercentage percentage() { DARABONBA_PTR_GET(percentage_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbortPercentage) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort& setPercentage(const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbortPercentage & percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbort& setPercentage(Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbortPercentage && percentage) { DARABONBA_PTR_SET_RVALUE(percentage_, percentage) };


  protected:
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatus_ = nullptr;
    // The percentage of requests that are aborted with the specified error code.
    std::shared_ptr<Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFaultAbortPercentage> percentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
