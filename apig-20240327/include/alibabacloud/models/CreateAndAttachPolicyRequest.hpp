// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDATTACHPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDATTACHPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateAndAttachPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndAttachPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(attachResourceIds, attachResourceIds_);
      DARABONBA_PTR_TO_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_TO_JSON(className, className_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndAttachPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attachResourceIds, attachResourceIds_);
      DARABONBA_PTR_FROM_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_FROM_JSON(className, className_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateAndAttachPolicyRequest() = default ;
    CreateAndAttachPolicyRequest(const CreateAndAttachPolicyRequest &) = default ;
    CreateAndAttachPolicyRequest(CreateAndAttachPolicyRequest &&) = default ;
    CreateAndAttachPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndAttachPolicyRequest() = default ;
    CreateAndAttachPolicyRequest& operator=(const CreateAndAttachPolicyRequest &) = default ;
    CreateAndAttachPolicyRequest& operator=(CreateAndAttachPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachResourceIds_ == nullptr
        && return this->attachResourceType_ == nullptr && return this->className_ == nullptr && return this->config_ == nullptr && return this->description_ == nullptr && return this->environmentId_ == nullptr
        && return this->gatewayId_ == nullptr && return this->name_ == nullptr; };
    // attachResourceIds Field Functions 
    bool hasAttachResourceIds() const { return this->attachResourceIds_ != nullptr;};
    void deleteAttachResourceIds() { this->attachResourceIds_ = nullptr;};
    inline const vector<string> & attachResourceIds() const { DARABONBA_PTR_GET_CONST(attachResourceIds_, vector<string>) };
    inline vector<string> attachResourceIds() { DARABONBA_PTR_GET(attachResourceIds_, vector<string>) };
    inline CreateAndAttachPolicyRequest& setAttachResourceIds(const vector<string> & attachResourceIds) { DARABONBA_PTR_SET_VALUE(attachResourceIds_, attachResourceIds) };
    inline CreateAndAttachPolicyRequest& setAttachResourceIds(vector<string> && attachResourceIds) { DARABONBA_PTR_SET_RVALUE(attachResourceIds_, attachResourceIds) };


    // attachResourceType Field Functions 
    bool hasAttachResourceType() const { return this->attachResourceType_ != nullptr;};
    void deleteAttachResourceType() { this->attachResourceType_ = nullptr;};
    inline string attachResourceType() const { DARABONBA_PTR_GET_DEFAULT(attachResourceType_, "") };
    inline CreateAndAttachPolicyRequest& setAttachResourceType(string attachResourceType) { DARABONBA_PTR_SET_VALUE(attachResourceType_, attachResourceType) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline CreateAndAttachPolicyRequest& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreateAndAttachPolicyRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAndAttachPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline CreateAndAttachPolicyRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreateAndAttachPolicyRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAndAttachPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The IDs of the resources to be associated with the policy.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> attachResourceIds_ = nullptr;
    // The supported resource type. Valid values:
    // 
    // *   HttpApi: an HTTP API
    // *   Operation: an operation in an HTTP API
    // *   GatewayRoute: a route
    // *   GatewayService: a service
    // *   GatewayServicePort: a service port
    // *   Domain: a domain name
    // *   Gateway: an instance
    // 
    // This parameter is required.
    std::shared_ptr<string> attachResourceType_ = nullptr;
    // The class name supported by the policy. Different policies support different resources. This parameter is used in combination with AttachResourceType.
    // 
    // *   RateLimit: throttles traffic. Supported: HttpApi, Operation, and GatewayRoute.
    // *   ConcurrencyLimit: controls concurrency. Supported: HttpApi, Operation, and GatewayRoute.
    // *   CircuitBreaker: breaks circuits and downgrades traffic. Supported: HttpApi, Operation, and GatewayRoute.
    // *   HttpRewrite: rewrites HTTP traffic. Supported: HttpApi, Operation, and GatewayRoute.
    // *   HeaderModify: modifies headers. Supported: HttpApi, Operation, and GatewayRoute.
    // *   Cors: supports CORS. Supported: HttpApi, Operation, and GatewayRoute.
    // *   FlowCopy: replicates traffic. Supported: HttpApi, Operation, and GatewayRoute.
    // *   Timeout: times out requests. Supported: HttpApi, Operation, and GatewayRoute.
    // *   Retry: retries requests. Supported: HttpApi, Operation, and GatewayRoute.
    // *   IpAccessControl: implements IP address-based access control. Supported: HttpApi, Operation, GatewayRoute, Domain, and Gateway.
    // *   DirectResponse: mocks responses. Supported: Operation and GatewayRoute.
    // *   Redirect: redirects traffic. Supported: GatewayRoute.
    // *   Fallback: implements fallback. Supported: Operation and GatewayRoute.
    // *   ServiceTls: implements TLS authentication. Supported: GatewayService.
    // *   ServiceLb: balances loads. Supported: GatewayService.
    // *   ServicePortTls: implements service port TLS authentication. Supported: GatewayServicePort.
    // *   Waf: implements WAF protection. Supported: GatewayRoute and Gateway.
    // *   JWTAuth: implements global JWT authentication. Supported: Gateway.
    // *   OIDCAuth: implements global OIDC authentication. Supported: Gateway.
    // *   ExternalZAuth: implements custom authentication. Supported: Gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> className_ = nullptr;
    // The policy configurations.
    // 
    // This parameter is required.
    std::shared_ptr<string> config_ = nullptr;
    // The policy description.
    std::shared_ptr<string> description_ = nullptr;
    // The environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The policy name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
