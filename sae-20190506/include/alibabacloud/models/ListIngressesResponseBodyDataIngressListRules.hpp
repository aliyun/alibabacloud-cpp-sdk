// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINGRESSESRESPONSEBODYDATAINGRESSLISTRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTINGRESSESRESPONSEBODYDATAINGRESSLISTRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIngressesResponseBodyDataIngressListRulesRuleActions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListIngressesResponseBodyDataIngressListRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIngressesResponseBodyDataIngressListRules& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BackendProtocol, backendProtocol_);
      DARABONBA_PTR_TO_JSON(ContainerPort, containerPort_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(RewritePath, rewritePath_);
      DARABONBA_PTR_TO_JSON(RuleActions, ruleActions_);
    };
    friend void from_json(const Darabonba::Json& j, ListIngressesResponseBodyDataIngressListRules& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BackendProtocol, backendProtocol_);
      DARABONBA_PTR_FROM_JSON(ContainerPort, containerPort_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(RewritePath, rewritePath_);
      DARABONBA_PTR_FROM_JSON(RuleActions, ruleActions_);
    };
    ListIngressesResponseBodyDataIngressListRules() = default ;
    ListIngressesResponseBodyDataIngressListRules(const ListIngressesResponseBodyDataIngressListRules &) = default ;
    ListIngressesResponseBodyDataIngressListRules(ListIngressesResponseBodyDataIngressListRules &&) = default ;
    ListIngressesResponseBodyDataIngressListRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIngressesResponseBodyDataIngressListRules() = default ;
    ListIngressesResponseBodyDataIngressListRules& operator=(const ListIngressesResponseBodyDataIngressListRules &) = default ;
    ListIngressesResponseBodyDataIngressListRules& operator=(ListIngressesResponseBodyDataIngressListRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->backendProtocol_ == nullptr && return this->containerPort_ == nullptr && return this->domain_ == nullptr && return this->path_ == nullptr
        && return this->rewritePath_ == nullptr && return this->ruleActions_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListIngressesResponseBodyDataIngressListRules& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListIngressesResponseBodyDataIngressListRules& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // backendProtocol Field Functions 
    bool hasBackendProtocol() const { return this->backendProtocol_ != nullptr;};
    void deleteBackendProtocol() { this->backendProtocol_ = nullptr;};
    inline string backendProtocol() const { DARABONBA_PTR_GET_DEFAULT(backendProtocol_, "") };
    inline ListIngressesResponseBodyDataIngressListRules& setBackendProtocol(string backendProtocol) { DARABONBA_PTR_SET_VALUE(backendProtocol_, backendProtocol) };


    // containerPort Field Functions 
    bool hasContainerPort() const { return this->containerPort_ != nullptr;};
    void deleteContainerPort() { this->containerPort_ = nullptr;};
    inline int32_t containerPort() const { DARABONBA_PTR_GET_DEFAULT(containerPort_, 0) };
    inline ListIngressesResponseBodyDataIngressListRules& setContainerPort(int32_t containerPort) { DARABONBA_PTR_SET_VALUE(containerPort_, containerPort) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListIngressesResponseBodyDataIngressListRules& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListIngressesResponseBodyDataIngressListRules& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // rewritePath Field Functions 
    bool hasRewritePath() const { return this->rewritePath_ != nullptr;};
    void deleteRewritePath() { this->rewritePath_ = nullptr;};
    inline string rewritePath() const { DARABONBA_PTR_GET_DEFAULT(rewritePath_, "") };
    inline ListIngressesResponseBodyDataIngressListRules& setRewritePath(string rewritePath) { DARABONBA_PTR_SET_VALUE(rewritePath_, rewritePath) };


    // ruleActions Field Functions 
    bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
    void deleteRuleActions() { this->ruleActions_ = nullptr;};
    inline const vector<Models::ListIngressesResponseBodyDataIngressListRulesRuleActions> & ruleActions() const { DARABONBA_PTR_GET_CONST(ruleActions_, vector<Models::ListIngressesResponseBodyDataIngressListRulesRuleActions>) };
    inline vector<Models::ListIngressesResponseBodyDataIngressListRulesRuleActions> ruleActions() { DARABONBA_PTR_GET(ruleActions_, vector<Models::ListIngressesResponseBodyDataIngressListRulesRuleActions>) };
    inline ListIngressesResponseBodyDataIngressListRules& setRuleActions(const vector<Models::ListIngressesResponseBodyDataIngressListRulesRuleActions> & ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };
    inline ListIngressesResponseBodyDataIngressListRules& setRuleActions(vector<Models::ListIngressesResponseBodyDataIngressListRulesRuleActions> && ruleActions) { DARABONBA_PTR_SET_RVALUE(ruleActions_, ruleActions) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> backendProtocol_ = nullptr;
    std::shared_ptr<int32_t> containerPort_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> rewritePath_ = nullptr;
    std::shared_ptr<vector<Models::ListIngressesResponseBodyDataIngressListRulesRuleActions>> ruleActions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
