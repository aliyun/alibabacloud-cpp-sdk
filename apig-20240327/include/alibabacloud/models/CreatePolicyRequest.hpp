// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreatePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(className, className_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(className, className_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreatePolicyRequest() = default ;
    CreatePolicyRequest(const CreatePolicyRequest &) = default ;
    CreatePolicyRequest(CreatePolicyRequest &&) = default ;
    CreatePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyRequest() = default ;
    CreatePolicyRequest& operator=(const CreatePolicyRequest &) = default ;
    CreatePolicyRequest& operator=(CreatePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->className_ == nullptr
        && this->config_ == nullptr && this->description_ == nullptr && this->name_ == nullptr; };
    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline CreatePolicyRequest& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreatePolicyRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The policy type. Valid values:
    // 
    // - RateLimit: rate limiting. Limits the request rate.
    // - ConcurrencyLimit: concurrency limiting. Limits the number of concurrent requests.
    // - CircuitBreaker: circuit breaker. Automatically triggers circuit breaking when backend exceptions occur.
    // - HttpRewrite: HTTP rewrite. Rewrites the request URL or path.
    // - HeaderModify: header modification. Adds, removes, or modifies HTTP request headers.
    // - Cors: Cross-Origin Resource Sharing (CORS). Controls cross-origin requests.
    // - Authentication: general authentication. A general request authentication policy.
    // - FlowCopy: traffic mirroring. Copies requests to an additional backend.
    // - Timeout: timeout. Sets the request timeout period.
    // - Retry: retry. Automatically retries failed requests.
    // - IpAccessControl: IP access control. Filters requests based on IP whitelists and blacklists.
    // - DirectResponse: direct response. Returns a fixed response directly.
    // - Redirect: redirect. Redirects requests to another address.
    // - Fallback: fallback. Returns a fallback response when the backend is unavailable.
    // - ServiceTls: server-side TLS. Configures TLS for backend services.
    // - ServiceLb: service load balancing. Configures load balancing for backend services.
    // - ServicePortTls: service port TLS. Configures TLS for backend service ports.
    // - Waf: Web Application Firewall (WAF). Provides request security protection.
    // - JWTAuth: JWT authentication. Authenticates requests based on JSON Web Tokens (JWT).
    // - OIDCAuth: OIDC authentication. Authenticates requests based on the OpenID Connect (OIDC) protocol.
    // - ExternalZAuth: external authentication. Integrates with an external authentication service.
    // - AiProxy: AI proxy.
    // - ModelRouter: model router.
    // - AiStatistics: AI statistics.
    // - AiSecurityGuard: AI security guard. Detects the security of AI request and response content.
    // - AiFallback: AI fallback. Falls back to an alternative model when the AI service is unavailable.
    // - ModelMapper: model mapper.
    // - AiTokenRateLimit: AI token rate limiting. Limits the rate based on token consumption.
    // - AiCache: AI cache. Caches AI response results.
    // - DynamicRoute: dynamic route.
    // 
    // This parameter is required.
    shared_ptr<string> className_ {};
    // The policy configuration.
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The policy name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
