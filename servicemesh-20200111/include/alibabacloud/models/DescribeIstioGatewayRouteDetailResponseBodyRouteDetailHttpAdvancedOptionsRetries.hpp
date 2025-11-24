// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILHTTPADVANCEDOPTIONSRETRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILHTTPADVANCEDOPTIONSRETRIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetriesRetryRemoteLocalities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries& obj) { 
      DARABONBA_PTR_TO_JSON(Attempts, attempts_);
      DARABONBA_PTR_TO_JSON(PerTryTimeout, perTryTimeout_);
      DARABONBA_PTR_TO_JSON(RetryOn, retryOn_);
      DARABONBA_PTR_TO_JSON(RetryRemoteLocalities, retryRemoteLocalities_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries& obj) { 
      DARABONBA_PTR_FROM_JSON(Attempts, attempts_);
      DARABONBA_PTR_FROM_JSON(PerTryTimeout, perTryTimeout_);
      DARABONBA_PTR_FROM_JSON(RetryOn, retryOn_);
      DARABONBA_PTR_FROM_JSON(RetryRemoteLocalities, retryRemoteLocalities_);
    };
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries &&) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries& operator=(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries& operator=(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attempts_ == nullptr
        && return this->perTryTimeout_ == nullptr && return this->retryOn_ == nullptr && return this->retryRemoteLocalities_ == nullptr; };
    // attempts Field Functions 
    bool hasAttempts() const { return this->attempts_ != nullptr;};
    void deleteAttempts() { this->attempts_ = nullptr;};
    inline int32_t attempts() const { DARABONBA_PTR_GET_DEFAULT(attempts_, 0) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries& setAttempts(int32_t attempts) { DARABONBA_PTR_SET_VALUE(attempts_, attempts) };


    // perTryTimeout Field Functions 
    bool hasPerTryTimeout() const { return this->perTryTimeout_ != nullptr;};
    void deletePerTryTimeout() { this->perTryTimeout_ = nullptr;};
    inline string perTryTimeout() const { DARABONBA_PTR_GET_DEFAULT(perTryTimeout_, "") };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries& setPerTryTimeout(string perTryTimeout) { DARABONBA_PTR_SET_VALUE(perTryTimeout_, perTryTimeout) };


    // retryOn Field Functions 
    bool hasRetryOn() const { return this->retryOn_ != nullptr;};
    void deleteRetryOn() { this->retryOn_ = nullptr;};
    inline string retryOn() const { DARABONBA_PTR_GET_DEFAULT(retryOn_, "") };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries& setRetryOn(string retryOn) { DARABONBA_PTR_SET_VALUE(retryOn_, retryOn) };


    // retryRemoteLocalities Field Functions 
    bool hasRetryRemoteLocalities() const { return this->retryRemoteLocalities_ != nullptr;};
    void deleteRetryRemoteLocalities() { this->retryRemoteLocalities_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetriesRetryRemoteLocalities & retryRemoteLocalities() const { DARABONBA_PTR_GET_CONST(retryRemoteLocalities_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetriesRetryRemoteLocalities) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetriesRetryRemoteLocalities retryRemoteLocalities() { DARABONBA_PTR_GET(retryRemoteLocalities_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetriesRetryRemoteLocalities) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries& setRetryRemoteLocalities(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetriesRetryRemoteLocalities & retryRemoteLocalities) { DARABONBA_PTR_SET_VALUE(retryRemoteLocalities_, retryRemoteLocalities) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries& setRetryRemoteLocalities(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetriesRetryRemoteLocalities && retryRemoteLocalities) { DARABONBA_PTR_SET_RVALUE(retryRemoteLocalities_, retryRemoteLocalities) };


  protected:
    // The number of retries that are allowed for a request.
    std::shared_ptr<int32_t> attempts_ = nullptr;
    // The timeout period for each retry.
    std::shared_ptr<string> perTryTimeout_ = nullptr;
    // The condition for retries. Example: `connect-failure,refused-stream,503`.
    std::shared_ptr<string> retryOn_ = nullptr;
    // Specifies whether to allow retries to other localities.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetriesRetryRemoteLocalities> retryRemoteLocalities_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
