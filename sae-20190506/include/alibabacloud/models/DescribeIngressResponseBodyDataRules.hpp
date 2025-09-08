// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINGRESSRESPONSEBODYDATARULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINGRESSRESPONSEBODYDATARULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIngressResponseBodyDataRulesRuleActions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeIngressResponseBodyDataRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIngressResponseBodyDataRules& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BackendProtocol, backendProtocol_);
      DARABONBA_PTR_TO_JSON(ContainerPort, containerPort_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(RewritePath, rewritePath_);
      DARABONBA_PTR_TO_JSON(RuleActions, ruleActions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIngressResponseBodyDataRules& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BackendProtocol, backendProtocol_);
      DARABONBA_PTR_FROM_JSON(ContainerPort, containerPort_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(RewritePath, rewritePath_);
      DARABONBA_PTR_FROM_JSON(RuleActions, ruleActions_);
    };
    DescribeIngressResponseBodyDataRules() = default ;
    DescribeIngressResponseBodyDataRules(const DescribeIngressResponseBodyDataRules &) = default ;
    DescribeIngressResponseBodyDataRules(DescribeIngressResponseBodyDataRules &&) = default ;
    DescribeIngressResponseBodyDataRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIngressResponseBodyDataRules() = default ;
    DescribeIngressResponseBodyDataRules& operator=(const DescribeIngressResponseBodyDataRules &) = default ;
    DescribeIngressResponseBodyDataRules& operator=(DescribeIngressResponseBodyDataRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->backendProtocol_ != nullptr && this->containerPort_ != nullptr && this->domain_ != nullptr && this->path_ != nullptr
        && this->rewritePath_ != nullptr && this->ruleActions_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeIngressResponseBodyDataRules& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeIngressResponseBodyDataRules& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // backendProtocol Field Functions 
    bool hasBackendProtocol() const { return this->backendProtocol_ != nullptr;};
    void deleteBackendProtocol() { this->backendProtocol_ = nullptr;};
    inline string backendProtocol() const { DARABONBA_PTR_GET_DEFAULT(backendProtocol_, "") };
    inline DescribeIngressResponseBodyDataRules& setBackendProtocol(string backendProtocol) { DARABONBA_PTR_SET_VALUE(backendProtocol_, backendProtocol) };


    // containerPort Field Functions 
    bool hasContainerPort() const { return this->containerPort_ != nullptr;};
    void deleteContainerPort() { this->containerPort_ = nullptr;};
    inline int32_t containerPort() const { DARABONBA_PTR_GET_DEFAULT(containerPort_, 0) };
    inline DescribeIngressResponseBodyDataRules& setContainerPort(int32_t containerPort) { DARABONBA_PTR_SET_VALUE(containerPort_, containerPort) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeIngressResponseBodyDataRules& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeIngressResponseBodyDataRules& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // rewritePath Field Functions 
    bool hasRewritePath() const { return this->rewritePath_ != nullptr;};
    void deleteRewritePath() { this->rewritePath_ = nullptr;};
    inline string rewritePath() const { DARABONBA_PTR_GET_DEFAULT(rewritePath_, "") };
    inline DescribeIngressResponseBodyDataRules& setRewritePath(string rewritePath) { DARABONBA_PTR_SET_VALUE(rewritePath_, rewritePath) };


    // ruleActions Field Functions 
    bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
    void deleteRuleActions() { this->ruleActions_ = nullptr;};
    inline const vector<Models::DescribeIngressResponseBodyDataRulesRuleActions> & ruleActions() const { DARABONBA_PTR_GET_CONST(ruleActions_, vector<Models::DescribeIngressResponseBodyDataRulesRuleActions>) };
    inline vector<Models::DescribeIngressResponseBodyDataRulesRuleActions> ruleActions() { DARABONBA_PTR_GET(ruleActions_, vector<Models::DescribeIngressResponseBodyDataRulesRuleActions>) };
    inline DescribeIngressResponseBodyDataRules& setRuleActions(const vector<Models::DescribeIngressResponseBodyDataRulesRuleActions> & ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };
    inline DescribeIngressResponseBodyDataRules& setRuleActions(vector<Models::DescribeIngressResponseBodyDataRulesRuleActions> && ruleActions) { DARABONBA_PTR_SET_RVALUE(ruleActions_, ruleActions) };


  protected:
    // The ID of the application specified in the forwarding rule.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application specified in the forwarding rules.
    std::shared_ptr<string> appName_ = nullptr;
    // The backend protocol. Valid values:
    // 
    // *   **http**: HTTP is suitable for applications that need to identify the transmitted data.
    // *   **https**: HTTPS is suitable for applications that require encrypted data transmission.
    // *   **grpc**: GRPC is suitable for load balancing scenarios in which you want to deploy services in multi-language frameworks, such as the .NET framework.
    // 
    // This parameter is returned only if the **LoadBalanceType** parameter is set to **ALB** and the **ListenerProtocol** parameter is set to **HTTPS**.
    std::shared_ptr<string> backendProtocol_ = nullptr;
    // Tthe container port of the application specified in the forwarding rules.
    std::shared_ptr<int32_t> containerPort_ = nullptr;
    // The domain name of the application specified in the forwarding rules.
    std::shared_ptr<string> domain_ = nullptr;
    // The path of a URL.
    std::shared_ptr<string> path_ = nullptr;
    // The path that is used to rewrite the original path.
    std::shared_ptr<string> rewritePath_ = nullptr;
    std::shared_ptr<vector<Models::DescribeIngressResponseBodyDataRulesRuleActions>> ruleActions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
