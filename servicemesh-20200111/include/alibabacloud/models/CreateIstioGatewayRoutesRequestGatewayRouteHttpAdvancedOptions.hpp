// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsDelegate.hpp>
#include <alibabacloud/models/CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault.hpp>
#include <alibabacloud/models/CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsHTTPRedirect.hpp>
#include <alibabacloud/models/CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror.hpp>
#include <alibabacloud/models/CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirrorPercentage.hpp>
#include <alibabacloud/models/CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRetries.hpp>
#include <alibabacloud/models/CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Delegate, delegate_);
      DARABONBA_PTR_TO_JSON(Fault, fault_);
      DARABONBA_PTR_TO_JSON(HTTPRedirect, HTTPRedirect_);
      DARABONBA_PTR_TO_JSON(Mirror, mirror_);
      DARABONBA_PTR_TO_JSON(MirrorPercentage, mirrorPercentage_);
      DARABONBA_PTR_TO_JSON(Retries, retries_);
      DARABONBA_PTR_TO_JSON(Rewrite, rewrite_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Delegate, delegate_);
      DARABONBA_PTR_FROM_JSON(Fault, fault_);
      DARABONBA_PTR_FROM_JSON(HTTPRedirect, HTTPRedirect_);
      DARABONBA_PTR_FROM_JSON(Mirror, mirror_);
      DARABONBA_PTR_FROM_JSON(MirrorPercentage, mirrorPercentage_);
      DARABONBA_PTR_FROM_JSON(Retries, retries_);
      DARABONBA_PTR_FROM_JSON(Rewrite, rewrite_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions() = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions(const CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions(CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions &&) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions() = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& operator=(const CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& operator=(CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions &&) = default ;
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
    inline const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsDelegate & delegate() const { DARABONBA_PTR_GET_CONST(delegate_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsDelegate) };
    inline Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsDelegate delegate() { DARABONBA_PTR_GET(delegate_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsDelegate) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setDelegate(const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsDelegate & delegate) { DARABONBA_PTR_SET_VALUE(delegate_, delegate) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setDelegate(Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsDelegate && delegate) { DARABONBA_PTR_SET_RVALUE(delegate_, delegate) };


    // fault Field Functions 
    bool hasFault() const { return this->fault_ != nullptr;};
    void deleteFault() { this->fault_ = nullptr;};
    inline const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault & fault() const { DARABONBA_PTR_GET_CONST(fault_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault) };
    inline Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault fault() { DARABONBA_PTR_GET(fault_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setFault(const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault & fault) { DARABONBA_PTR_SET_VALUE(fault_, fault) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setFault(Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault && fault) { DARABONBA_PTR_SET_RVALUE(fault_, fault) };


    // HTTPRedirect Field Functions 
    bool hasHTTPRedirect() const { return this->HTTPRedirect_ != nullptr;};
    void deleteHTTPRedirect() { this->HTTPRedirect_ = nullptr;};
    inline const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsHTTPRedirect & HTTPRedirect() const { DARABONBA_PTR_GET_CONST(HTTPRedirect_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsHTTPRedirect) };
    inline Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsHTTPRedirect HTTPRedirect() { DARABONBA_PTR_GET(HTTPRedirect_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsHTTPRedirect) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setHTTPRedirect(const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsHTTPRedirect & HTTPRedirect) { DARABONBA_PTR_SET_VALUE(HTTPRedirect_, HTTPRedirect) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setHTTPRedirect(Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsHTTPRedirect && HTTPRedirect) { DARABONBA_PTR_SET_RVALUE(HTTPRedirect_, HTTPRedirect) };


    // mirror Field Functions 
    bool hasMirror() const { return this->mirror_ != nullptr;};
    void deleteMirror() { this->mirror_ = nullptr;};
    inline const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror & mirror() const { DARABONBA_PTR_GET_CONST(mirror_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror) };
    inline Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror mirror() { DARABONBA_PTR_GET(mirror_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setMirror(const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror & mirror) { DARABONBA_PTR_SET_VALUE(mirror_, mirror) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setMirror(Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror && mirror) { DARABONBA_PTR_SET_RVALUE(mirror_, mirror) };


    // mirrorPercentage Field Functions 
    bool hasMirrorPercentage() const { return this->mirrorPercentage_ != nullptr;};
    void deleteMirrorPercentage() { this->mirrorPercentage_ = nullptr;};
    inline const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirrorPercentage & mirrorPercentage() const { DARABONBA_PTR_GET_CONST(mirrorPercentage_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirrorPercentage) };
    inline Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirrorPercentage mirrorPercentage() { DARABONBA_PTR_GET(mirrorPercentage_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirrorPercentage) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setMirrorPercentage(const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirrorPercentage & mirrorPercentage) { DARABONBA_PTR_SET_VALUE(mirrorPercentage_, mirrorPercentage) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setMirrorPercentage(Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirrorPercentage && mirrorPercentage) { DARABONBA_PTR_SET_RVALUE(mirrorPercentage_, mirrorPercentage) };


    // retries Field Functions 
    bool hasRetries() const { return this->retries_ != nullptr;};
    void deleteRetries() { this->retries_ = nullptr;};
    inline const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRetries & retries() const { DARABONBA_PTR_GET_CONST(retries_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRetries) };
    inline Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRetries retries() { DARABONBA_PTR_GET(retries_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRetries) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setRetries(const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRetries & retries) { DARABONBA_PTR_SET_VALUE(retries_, retries) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setRetries(Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRetries && retries) { DARABONBA_PTR_SET_RVALUE(retries_, retries) };


    // rewrite Field Functions 
    bool hasRewrite() const { return this->rewrite_ != nullptr;};
    void deleteRewrite() { this->rewrite_ = nullptr;};
    inline const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite & rewrite() const { DARABONBA_PTR_GET_CONST(rewrite_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite) };
    inline Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite rewrite() { DARABONBA_PTR_GET(rewrite_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setRewrite(const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite & rewrite) { DARABONBA_PTR_SET_VALUE(rewrite_, rewrite) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setRewrite(Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite && rewrite) { DARABONBA_PTR_SET_RVALUE(rewrite_, rewrite) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline string timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, "") };
    inline CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions& setTimeout(string timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The virtual service that defines traffic routing.
    std::shared_ptr<Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsDelegate> delegate_ = nullptr;
    // The configurations of fault injection.
    std::shared_ptr<Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsFault> fault_ = nullptr;
    // The HTTP redirection rule.
    std::shared_ptr<Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsHTTPRedirect> HTTPRedirect_ = nullptr;
    // The configurations for mirroring HTTP traffic to another destination in addition to forwarding requests to the specified destination.
    std::shared_ptr<Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror> mirror_ = nullptr;
    // The percentage of requests that are mirrored to another destination except for the original destination.
    std::shared_ptr<Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirrorPercentage> mirrorPercentage_ = nullptr;
    // The configurations of retries for failed requests.
    std::shared_ptr<Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRetries> retries_ = nullptr;
    // The configurations for rewriting the virtual service.
    std::shared_ptr<Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsRewrite> rewrite_ = nullptr;
    // The timeout period for requests.
    std::shared_ptr<string> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
