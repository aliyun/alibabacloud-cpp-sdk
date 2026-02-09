// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POLICYINFO_HPP_
#define ALIBABACLOUD_MODELS_POLICYINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Attachment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class PolicyInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PolicyInfo& obj) { 
      DARABONBA_PTR_TO_JSON(attachments, attachments_);
      DARABONBA_PTR_TO_JSON(classAlias, classAlias_);
      DARABONBA_PTR_TO_JSON(className, className_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(executePriority, executePriority_);
      DARABONBA_PTR_TO_JSON(executeStage, executeStage_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PolicyInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(attachments, attachments_);
      DARABONBA_PTR_FROM_JSON(classAlias, classAlias_);
      DARABONBA_PTR_FROM_JSON(className, className_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(executePriority, executePriority_);
      DARABONBA_PTR_FROM_JSON(executeStage, executeStage_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    PolicyInfo() = default ;
    PolicyInfo(const PolicyInfo &) = default ;
    PolicyInfo(PolicyInfo &&) = default ;
    PolicyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PolicyInfo() = default ;
    PolicyInfo& operator=(const PolicyInfo &) = default ;
    PolicyInfo& operator=(PolicyInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachments_ == nullptr
        && this->classAlias_ == nullptr && this->className_ == nullptr && this->config_ == nullptr && this->direction_ == nullptr && this->executePriority_ == nullptr
        && this->executeStage_ == nullptr && this->name_ == nullptr && this->policyId_ == nullptr && this->type_ == nullptr; };
    // attachments Field Functions 
    bool hasAttachments() const { return this->attachments_ != nullptr;};
    void deleteAttachments() { this->attachments_ = nullptr;};
    inline const vector<Attachment> & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<Attachment>) };
    inline vector<Attachment> getAttachments() { DARABONBA_PTR_GET(attachments_, vector<Attachment>) };
    inline PolicyInfo& setAttachments(const vector<Attachment> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
    inline PolicyInfo& setAttachments(vector<Attachment> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


    // classAlias Field Functions 
    bool hasClassAlias() const { return this->classAlias_ != nullptr;};
    void deleteClassAlias() { this->classAlias_ = nullptr;};
    inline string getClassAlias() const { DARABONBA_PTR_GET_DEFAULT(classAlias_, "") };
    inline PolicyInfo& setClassAlias(string classAlias) { DARABONBA_PTR_SET_VALUE(classAlias_, classAlias) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline PolicyInfo& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline PolicyInfo& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline PolicyInfo& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // executePriority Field Functions 
    bool hasExecutePriority() const { return this->executePriority_ != nullptr;};
    void deleteExecutePriority() { this->executePriority_ = nullptr;};
    inline string getExecutePriority() const { DARABONBA_PTR_GET_DEFAULT(executePriority_, "") };
    inline PolicyInfo& setExecutePriority(string executePriority) { DARABONBA_PTR_SET_VALUE(executePriority_, executePriority) };


    // executeStage Field Functions 
    bool hasExecuteStage() const { return this->executeStage_ != nullptr;};
    void deleteExecuteStage() { this->executeStage_ = nullptr;};
    inline string getExecuteStage() const { DARABONBA_PTR_GET_DEFAULT(executeStage_, "") };
    inline PolicyInfo& setExecuteStage(string executeStage) { DARABONBA_PTR_SET_VALUE(executeStage_, executeStage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PolicyInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline PolicyInfo& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PolicyInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The mount information.
    shared_ptr<vector<Attachment>> attachments_ {};
    // The policy class alias.
    shared_ptr<string> classAlias_ {};
    // The class name supported by the policy. Different policies support different mount points. This parameter is used in combination with AttachResourceType.
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
    shared_ptr<string> className_ {};
    // The policy configurations.
    shared_ptr<string> config_ {};
    // The direction of traffic on which the policy takes effect. Valid values:
    // 
    // *   OutBound
    // *   InBound
    // *   Both
    shared_ptr<string> direction_ {};
    // The execution priority.
    shared_ptr<string> executePriority_ {};
    // The execution phase.
    // 
    // Valid values:
    // 
    // *   PluginStatistic
    // *   PluginAuthorization
    // *   PluginPre
    // *   PluginAuthentication
    // *   PluginDefault
    // *   PluginPost
    shared_ptr<string> executeStage_ {};
    // The policy name.
    shared_ptr<string> name_ {};
    // The policy ID.
    shared_ptr<string> policyId_ {};
    // The policy type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
