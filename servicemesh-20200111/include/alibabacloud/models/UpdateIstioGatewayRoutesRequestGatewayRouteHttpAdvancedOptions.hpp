// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsDelegate.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsHTTPRedirect.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirrorPercentage.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRetries.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Delegate, delegate_);
      DARABONBA_PTR_TO_JSON(Fault, fault_);
      DARABONBA_PTR_TO_JSON(HTTPRedirect, HTTPRedirect_);
      DARABONBA_PTR_TO_JSON(Mirror, mirror_);
      DARABONBA_PTR_TO_JSON(MirrorPercentage, mirrorPercentage_);
      DARABONBA_PTR_TO_JSON(Retries, retries_);
      DARABONBA_PTR_TO_JSON(Rewrite, rewrite_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Delegate, delegate_);
      DARABONBA_PTR_FROM_JSON(Fault, fault_);
      DARABONBA_PTR_FROM_JSON(HTTPRedirect, HTTPRedirect_);
      DARABONBA_PTR_FROM_JSON(Mirror, mirror_);
      DARABONBA_PTR_FROM_JSON(MirrorPercentage, mirrorPercentage_);
      DARABONBA_PTR_FROM_JSON(Retries, retries_);
      DARABONBA_PTR_FROM_JSON(Rewrite, rewrite_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions(const UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions(UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions &&) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& operator=(const UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& operator=(UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions &&) = default ;
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
    inline const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsDelegate & delegate() const { DARABONBA_PTR_GET_CONST(delegate_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsDelegate) };
    inline Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsDelegate delegate() { DARABONBA_PTR_GET(delegate_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsDelegate) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setDelegate(const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsDelegate & delegate) { DARABONBA_PTR_SET_VALUE(delegate_, delegate) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setDelegate(Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsDelegate && delegate) { DARABONBA_PTR_SET_RVALUE(delegate_, delegate) };


    // fault Field Functions 
    bool hasFault() const { return this->fault_ != nullptr;};
    void deleteFault() { this->fault_ = nullptr;};
    inline const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault & fault() const { DARABONBA_PTR_GET_CONST(fault_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault) };
    inline Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault fault() { DARABONBA_PTR_GET(fault_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setFault(const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault & fault) { DARABONBA_PTR_SET_VALUE(fault_, fault) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setFault(Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault && fault) { DARABONBA_PTR_SET_RVALUE(fault_, fault) };


    // HTTPRedirect Field Functions 
    bool hasHTTPRedirect() const { return this->HTTPRedirect_ != nullptr;};
    void deleteHTTPRedirect() { this->HTTPRedirect_ = nullptr;};
    inline const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsHTTPRedirect & HTTPRedirect() const { DARABONBA_PTR_GET_CONST(HTTPRedirect_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsHTTPRedirect) };
    inline Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsHTTPRedirect HTTPRedirect() { DARABONBA_PTR_GET(HTTPRedirect_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsHTTPRedirect) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setHTTPRedirect(const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsHTTPRedirect & HTTPRedirect) { DARABONBA_PTR_SET_VALUE(HTTPRedirect_, HTTPRedirect) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setHTTPRedirect(Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsHTTPRedirect && HTTPRedirect) { DARABONBA_PTR_SET_RVALUE(HTTPRedirect_, HTTPRedirect) };


    // mirror Field Functions 
    bool hasMirror() const { return this->mirror_ != nullptr;};
    void deleteMirror() { this->mirror_ = nullptr;};
    inline const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror & mirror() const { DARABONBA_PTR_GET_CONST(mirror_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror) };
    inline Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror mirror() { DARABONBA_PTR_GET(mirror_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setMirror(const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror & mirror) { DARABONBA_PTR_SET_VALUE(mirror_, mirror) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setMirror(Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror && mirror) { DARABONBA_PTR_SET_RVALUE(mirror_, mirror) };


    // mirrorPercentage Field Functions 
    bool hasMirrorPercentage() const { return this->mirrorPercentage_ != nullptr;};
    void deleteMirrorPercentage() { this->mirrorPercentage_ = nullptr;};
    inline const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirrorPercentage & mirrorPercentage() const { DARABONBA_PTR_GET_CONST(mirrorPercentage_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirrorPercentage) };
    inline Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirrorPercentage mirrorPercentage() { DARABONBA_PTR_GET(mirrorPercentage_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirrorPercentage) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setMirrorPercentage(const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirrorPercentage & mirrorPercentage) { DARABONBA_PTR_SET_VALUE(mirrorPercentage_, mirrorPercentage) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setMirrorPercentage(Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirrorPercentage && mirrorPercentage) { DARABONBA_PTR_SET_RVALUE(mirrorPercentage_, mirrorPercentage) };


    // retries Field Functions 
    bool hasRetries() const { return this->retries_ != nullptr;};
    void deleteRetries() { this->retries_ = nullptr;};
    inline const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRetries & retries() const { DARABONBA_PTR_GET_CONST(retries_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRetries) };
    inline Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRetries retries() { DARABONBA_PTR_GET(retries_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRetries) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setRetries(const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRetries & retries) { DARABONBA_PTR_SET_VALUE(retries_, retries) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setRetries(Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRetries && retries) { DARABONBA_PTR_SET_RVALUE(retries_, retries) };


    // rewrite Field Functions 
    bool hasRewrite() const { return this->rewrite_ != nullptr;};
    void deleteRewrite() { this->rewrite_ = nullptr;};
    inline const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite & rewrite() const { DARABONBA_PTR_GET_CONST(rewrite_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite) };
    inline Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite rewrite() { DARABONBA_PTR_GET(rewrite_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setRewrite(const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite & rewrite) { DARABONBA_PTR_SET_VALUE(rewrite_, rewrite) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setRewrite(Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite && rewrite) { DARABONBA_PTR_SET_RVALUE(rewrite_, rewrite) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline string timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, "") };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setTimeout(string timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The virtual service that defines traffic routing.
    std::shared_ptr<Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsDelegate> delegate_ = nullptr;
    // The configurations of fault injection.
    std::shared_ptr<Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault> fault_ = nullptr;
    // The HTTP redirection rule.
    std::shared_ptr<Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsHTTPRedirect> HTTPRedirect_ = nullptr;
    // The configurations for mirroring HTTP traffic to another destination in addition to forwarding requests to the specified destination.
    std::shared_ptr<Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror> mirror_ = nullptr;
    // The percentage of requests that are mirrored to another destination except for the original destination.
    std::shared_ptr<Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirrorPercentage> mirrorPercentage_ = nullptr;
    // The configurations of retries for failed requests.
    std::shared_ptr<Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRetries> retries_ = nullptr;
    // The configurations for rewriting the virtual service.
    std::shared_ptr<Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite> rewrite_ = nullptr;
    // The timeout period for requests.
    std::shared_ptr<string> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
