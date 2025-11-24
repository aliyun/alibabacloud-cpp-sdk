// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILHTTPADVANCEDOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILHTTPADVANCEDOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsDelegate.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsHTTPRedirect.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsMirror.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsMirrorPercentage.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRewrite.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Delegate, delegate_);
      DARABONBA_PTR_TO_JSON(Fault, fault_);
      DARABONBA_PTR_TO_JSON(HTTPRedirect, HTTPRedirect_);
      DARABONBA_PTR_TO_JSON(Mirror, mirror_);
      DARABONBA_PTR_TO_JSON(MirrorPercentage, mirrorPercentage_);
      DARABONBA_PTR_TO_JSON(Retries, retries_);
      DARABONBA_PTR_TO_JSON(Rewrite, rewrite_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Delegate, delegate_);
      DARABONBA_PTR_FROM_JSON(Fault, fault_);
      DARABONBA_PTR_FROM_JSON(HTTPRedirect, HTTPRedirect_);
      DARABONBA_PTR_FROM_JSON(Mirror, mirror_);
      DARABONBA_PTR_FROM_JSON(MirrorPercentage, mirrorPercentage_);
      DARABONBA_PTR_FROM_JSON(Retries, retries_);
      DARABONBA_PTR_FROM_JSON(Rewrite, rewrite_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions &&) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& operator=(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& operator=(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->delegate_ == nullptr
        && return this->fault_ == nullptr && return this->HTTPRedirect_ == nullptr && return this->mirror_ == nullptr && return this->mirrorPercentage_ == nullptr && return this->retries_ == nullptr
        && return this->rewrite_ == nullptr && return this->timeout_ == nullptr; };
    // delegate Field Functions 
    bool hasDelegate() const { return this->delegate_ != nullptr;};
    void deleteDelegate() { this->delegate_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsDelegate & delegate() const { DARABONBA_PTR_GET_CONST(delegate_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsDelegate) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsDelegate delegate() { DARABONBA_PTR_GET(delegate_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsDelegate) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& setDelegate(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsDelegate & delegate) { DARABONBA_PTR_SET_VALUE(delegate_, delegate) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& setDelegate(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsDelegate && delegate) { DARABONBA_PTR_SET_RVALUE(delegate_, delegate) };


    // fault Field Functions 
    bool hasFault() const { return this->fault_ != nullptr;};
    void deleteFault() { this->fault_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault & fault() const { DARABONBA_PTR_GET_CONST(fault_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault fault() { DARABONBA_PTR_GET(fault_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& setFault(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault & fault) { DARABONBA_PTR_SET_VALUE(fault_, fault) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& setFault(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault && fault) { DARABONBA_PTR_SET_RVALUE(fault_, fault) };


    // HTTPRedirect Field Functions 
    bool hasHTTPRedirect() const { return this->HTTPRedirect_ != nullptr;};
    void deleteHTTPRedirect() { this->HTTPRedirect_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsHTTPRedirect & HTTPRedirect() const { DARABONBA_PTR_GET_CONST(HTTPRedirect_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsHTTPRedirect) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsHTTPRedirect HTTPRedirect() { DARABONBA_PTR_GET(HTTPRedirect_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsHTTPRedirect) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& setHTTPRedirect(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsHTTPRedirect & HTTPRedirect) { DARABONBA_PTR_SET_VALUE(HTTPRedirect_, HTTPRedirect) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& setHTTPRedirect(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsHTTPRedirect && HTTPRedirect) { DARABONBA_PTR_SET_RVALUE(HTTPRedirect_, HTTPRedirect) };


    // mirror Field Functions 
    bool hasMirror() const { return this->mirror_ != nullptr;};
    void deleteMirror() { this->mirror_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsMirror & mirror() const { DARABONBA_PTR_GET_CONST(mirror_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsMirror) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsMirror mirror() { DARABONBA_PTR_GET(mirror_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsMirror) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& setMirror(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsMirror & mirror) { DARABONBA_PTR_SET_VALUE(mirror_, mirror) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& setMirror(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsMirror && mirror) { DARABONBA_PTR_SET_RVALUE(mirror_, mirror) };


    // mirrorPercentage Field Functions 
    bool hasMirrorPercentage() const { return this->mirrorPercentage_ != nullptr;};
    void deleteMirrorPercentage() { this->mirrorPercentage_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsMirrorPercentage & mirrorPercentage() const { DARABONBA_PTR_GET_CONST(mirrorPercentage_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsMirrorPercentage) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsMirrorPercentage mirrorPercentage() { DARABONBA_PTR_GET(mirrorPercentage_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsMirrorPercentage) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& setMirrorPercentage(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsMirrorPercentage & mirrorPercentage) { DARABONBA_PTR_SET_VALUE(mirrorPercentage_, mirrorPercentage) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& setMirrorPercentage(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsMirrorPercentage && mirrorPercentage) { DARABONBA_PTR_SET_RVALUE(mirrorPercentage_, mirrorPercentage) };


    // retries Field Functions 
    bool hasRetries() const { return this->retries_ != nullptr;};
    void deleteRetries() { this->retries_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries & retries() const { DARABONBA_PTR_GET_CONST(retries_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries retries() { DARABONBA_PTR_GET(retries_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& setRetries(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries & retries) { DARABONBA_PTR_SET_VALUE(retries_, retries) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& setRetries(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries && retries) { DARABONBA_PTR_SET_RVALUE(retries_, retries) };


    // rewrite Field Functions 
    bool hasRewrite() const { return this->rewrite_ != nullptr;};
    void deleteRewrite() { this->rewrite_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRewrite & rewrite() const { DARABONBA_PTR_GET_CONST(rewrite_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRewrite) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRewrite rewrite() { DARABONBA_PTR_GET(rewrite_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRewrite) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& setRewrite(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRewrite & rewrite) { DARABONBA_PTR_SET_VALUE(rewrite_, rewrite) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& setRewrite(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRewrite && rewrite) { DARABONBA_PTR_SET_RVALUE(rewrite_, rewrite) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline string timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, "") };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions& setTimeout(string timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The virtual service that defines traffic routing.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsDelegate> delegate_ = nullptr;
    // The configurations of fault injection.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsFault> fault_ = nullptr;
    // The HTTP redirection rule.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsHTTPRedirect> HTTPRedirect_ = nullptr;
    // The configurations for mirroring HTTP traffic to another destination in addition to forwarding requests to the specified destination.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsMirror> mirror_ = nullptr;
    // The percentage of requests that are aborted with the specified error code.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsMirrorPercentage> mirrorPercentage_ = nullptr;
    // The configurations of retries for failed requests.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRetries> retries_ = nullptr;
    // The configurations for rewriting the virtual service.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptionsRewrite> rewrite_ = nullptr;
    // The timeout period for requests.
    std::shared_ptr<string> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
