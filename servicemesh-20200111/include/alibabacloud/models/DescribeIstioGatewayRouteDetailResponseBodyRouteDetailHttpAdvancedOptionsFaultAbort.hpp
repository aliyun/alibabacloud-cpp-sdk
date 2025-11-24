// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILHTTPADVANCEDOPTIONSFAULTABORT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILHTTPADVANCEDOPTIONSFAULTABORT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbortPercentage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort& obj) { 
      DARABONBA_PTR_TO_JSON(HttpStatus, httpStatus_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpStatus, httpStatus_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
    };
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort &&) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort& operator=(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort& operator=(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort &&) = default ;
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
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort& setHttpStatus(int32_t httpStatus) { DARABONBA_PTR_SET_VALUE(httpStatus_, httpStatus) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbortPercentage & percentage() const { DARABONBA_PTR_GET_CONST(percentage_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbortPercentage) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbortPercentage percentage() { DARABONBA_PTR_GET(percentage_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbortPercentage) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort& setPercentage(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbortPercentage & percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort& setPercentage(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbortPercentage && percentage) { DARABONBA_PTR_SET_RVALUE(percentage_, percentage) };


  protected:
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatus_ = nullptr;
    // The percentage of requests that are aborted with the specified error code.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbortPercentage> percentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
