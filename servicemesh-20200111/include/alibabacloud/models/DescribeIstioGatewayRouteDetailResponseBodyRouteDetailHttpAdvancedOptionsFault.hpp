// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILHTTPADVANCEDOPTIONSFAULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILHTTPADVANCEDOPTIONSFAULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault& obj) { 
      DARABONBA_PTR_TO_JSON(Abort, abort_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault& obj) { 
      DARABONBA_PTR_FROM_JSON(Abort, abort_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
    };
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault &&) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault& operator=(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault& operator=(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abort_ == nullptr
        && return this->delay_ == nullptr; };
    // abort Field Functions 
    bool hasAbort() const { return this->abort_ != nullptr;};
    void deleteAbort() { this->abort_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort & abort() const { DARABONBA_PTR_GET_CONST(abort_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort abort() { DARABONBA_PTR_GET(abort_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault& setAbort(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort & abort) { DARABONBA_PTR_SET_VALUE(abort_, abort) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault& setAbort(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort && abort) { DARABONBA_PTR_SET_RVALUE(abort_, abort) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay & delay() const { DARABONBA_PTR_GET_CONST(delay_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay delay() { DARABONBA_PTR_GET(delay_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault& setDelay(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay & delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault& setDelay(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay && delay) { DARABONBA_PTR_SET_RVALUE(delay_, delay) };


  protected:
    // The configurations for aborting requests with specified error codes.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultAbort> abort_ = nullptr;
    // The duration to delay a request.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFaultDelay> delay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
