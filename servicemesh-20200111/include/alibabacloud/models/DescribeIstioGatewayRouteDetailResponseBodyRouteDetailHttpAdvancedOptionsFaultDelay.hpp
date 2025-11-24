// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILHTTPADVANCEDOPTIONSFAULTDELAY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILHTTPADVANCEDOPTIONSFAULTDELAY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelayPercentage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay& obj) { 
      DARABONBA_PTR_TO_JSON(ExponentialDelay, exponentialDelay_);
      DARABONBA_PTR_TO_JSON(FixedDelay, fixedDelay_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay& obj) { 
      DARABONBA_PTR_FROM_JSON(ExponentialDelay, exponentialDelay_);
      DARABONBA_PTR_FROM_JSON(FixedDelay, fixedDelay_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
    };
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay &&) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay& operator=(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay& operator=(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exponentialDelay_ == nullptr
        && return this->fixedDelay_ == nullptr && return this->percentage_ == nullptr; };
    // exponentialDelay Field Functions 
    bool hasExponentialDelay() const { return this->exponentialDelay_ != nullptr;};
    void deleteExponentialDelay() { this->exponentialDelay_ = nullptr;};
    inline string exponentialDelay() const { DARABONBA_PTR_GET_DEFAULT(exponentialDelay_, "") };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay& setExponentialDelay(string exponentialDelay) { DARABONBA_PTR_SET_VALUE(exponentialDelay_, exponentialDelay) };


    // fixedDelay Field Functions 
    bool hasFixedDelay() const { return this->fixedDelay_ != nullptr;};
    void deleteFixedDelay() { this->fixedDelay_ = nullptr;};
    inline string fixedDelay() const { DARABONBA_PTR_GET_DEFAULT(fixedDelay_, "") };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay& setFixedDelay(string fixedDelay) { DARABONBA_PTR_SET_VALUE(fixedDelay_, fixedDelay) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelayPercentage & percentage() const { DARABONBA_PTR_GET_CONST(percentage_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelayPercentage) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelayPercentage percentage() { DARABONBA_PTR_GET(percentage_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelayPercentage) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay& setPercentage(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelayPercentage & percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay& setPercentage(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelayPercentage && percentage) { DARABONBA_PTR_SET_RVALUE(percentage_, percentage) };


  protected:
    // The duration for request delay is expressed as 2 raised to the power of x. You must specify the value of x.
    std::shared_ptr<string> exponentialDelay_ = nullptr;
    // The fixed duration for request delay.
    std::shared_ptr<string> fixedDelay_ = nullptr;
    // The percentage of requests to which the delay fault is injected.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelayPercentage> percentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
