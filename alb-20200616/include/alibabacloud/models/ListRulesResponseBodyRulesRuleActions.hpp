// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULEACTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULEACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleActionsCorsConfig.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleActionsFixedResponseConfig.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleActionsForwardGroupConfig.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleActionsRedirectConfig.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleActionsRewriteConfig.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListRulesResponseBodyRulesRuleActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBodyRulesRuleActions& obj) { 
      DARABONBA_PTR_TO_JSON(CorsConfig, corsConfig_);
      DARABONBA_PTR_TO_JSON(FixedResponseConfig, fixedResponseConfig_);
      DARABONBA_PTR_TO_JSON(ForwardGroupConfig, forwardGroupConfig_);
      DARABONBA_PTR_TO_JSON(InsertHeaderConfig, insertHeaderConfig_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(RedirectConfig, redirectConfig_);
      DARABONBA_PTR_TO_JSON(RemoveHeaderConfig, removeHeaderConfig_);
      DARABONBA_PTR_TO_JSON(RewriteConfig, rewriteConfig_);
      DARABONBA_PTR_TO_JSON(TrafficLimitConfig, trafficLimitConfig_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorConfig, trafficMirrorConfig_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBodyRulesRuleActions& obj) { 
      DARABONBA_PTR_FROM_JSON(CorsConfig, corsConfig_);
      DARABONBA_PTR_FROM_JSON(FixedResponseConfig, fixedResponseConfig_);
      DARABONBA_PTR_FROM_JSON(ForwardGroupConfig, forwardGroupConfig_);
      DARABONBA_PTR_FROM_JSON(InsertHeaderConfig, insertHeaderConfig_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(RedirectConfig, redirectConfig_);
      DARABONBA_PTR_FROM_JSON(RemoveHeaderConfig, removeHeaderConfig_);
      DARABONBA_PTR_FROM_JSON(RewriteConfig, rewriteConfig_);
      DARABONBA_PTR_FROM_JSON(TrafficLimitConfig, trafficLimitConfig_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorConfig, trafficMirrorConfig_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListRulesResponseBodyRulesRuleActions() = default ;
    ListRulesResponseBodyRulesRuleActions(const ListRulesResponseBodyRulesRuleActions &) = default ;
    ListRulesResponseBodyRulesRuleActions(ListRulesResponseBodyRulesRuleActions &&) = default ;
    ListRulesResponseBodyRulesRuleActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBodyRulesRuleActions() = default ;
    ListRulesResponseBodyRulesRuleActions& operator=(const ListRulesResponseBodyRulesRuleActions &) = default ;
    ListRulesResponseBodyRulesRuleActions& operator=(ListRulesResponseBodyRulesRuleActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corsConfig_ != nullptr
        && this->fixedResponseConfig_ != nullptr && this->forwardGroupConfig_ != nullptr && this->insertHeaderConfig_ != nullptr && this->order_ != nullptr && this->redirectConfig_ != nullptr
        && this->removeHeaderConfig_ != nullptr && this->rewriteConfig_ != nullptr && this->trafficLimitConfig_ != nullptr && this->trafficMirrorConfig_ != nullptr && this->type_ != nullptr; };
    // corsConfig Field Functions 
    bool hasCorsConfig() const { return this->corsConfig_ != nullptr;};
    void deleteCorsConfig() { this->corsConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleActionsCorsConfig & corsConfig() const { DARABONBA_PTR_GET_CONST(corsConfig_, Models::ListRulesResponseBodyRulesRuleActionsCorsConfig) };
    inline Models::ListRulesResponseBodyRulesRuleActionsCorsConfig corsConfig() { DARABONBA_PTR_GET(corsConfig_, Models::ListRulesResponseBodyRulesRuleActionsCorsConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setCorsConfig(const Models::ListRulesResponseBodyRulesRuleActionsCorsConfig & corsConfig) { DARABONBA_PTR_SET_VALUE(corsConfig_, corsConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setCorsConfig(Models::ListRulesResponseBodyRulesRuleActionsCorsConfig && corsConfig) { DARABONBA_PTR_SET_RVALUE(corsConfig_, corsConfig) };


    // fixedResponseConfig Field Functions 
    bool hasFixedResponseConfig() const { return this->fixedResponseConfig_ != nullptr;};
    void deleteFixedResponseConfig() { this->fixedResponseConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleActionsFixedResponseConfig & fixedResponseConfig() const { DARABONBA_PTR_GET_CONST(fixedResponseConfig_, Models::ListRulesResponseBodyRulesRuleActionsFixedResponseConfig) };
    inline Models::ListRulesResponseBodyRulesRuleActionsFixedResponseConfig fixedResponseConfig() { DARABONBA_PTR_GET(fixedResponseConfig_, Models::ListRulesResponseBodyRulesRuleActionsFixedResponseConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setFixedResponseConfig(const Models::ListRulesResponseBodyRulesRuleActionsFixedResponseConfig & fixedResponseConfig) { DARABONBA_PTR_SET_VALUE(fixedResponseConfig_, fixedResponseConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setFixedResponseConfig(Models::ListRulesResponseBodyRulesRuleActionsFixedResponseConfig && fixedResponseConfig) { DARABONBA_PTR_SET_RVALUE(fixedResponseConfig_, fixedResponseConfig) };


    // forwardGroupConfig Field Functions 
    bool hasForwardGroupConfig() const { return this->forwardGroupConfig_ != nullptr;};
    void deleteForwardGroupConfig() { this->forwardGroupConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfig & forwardGroupConfig() const { DARABONBA_PTR_GET_CONST(forwardGroupConfig_, Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfig) };
    inline Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfig forwardGroupConfig() { DARABONBA_PTR_GET(forwardGroupConfig_, Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setForwardGroupConfig(const Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfig & forwardGroupConfig) { DARABONBA_PTR_SET_VALUE(forwardGroupConfig_, forwardGroupConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setForwardGroupConfig(Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfig && forwardGroupConfig) { DARABONBA_PTR_SET_RVALUE(forwardGroupConfig_, forwardGroupConfig) };


    // insertHeaderConfig Field Functions 
    bool hasInsertHeaderConfig() const { return this->insertHeaderConfig_ != nullptr;};
    void deleteInsertHeaderConfig() { this->insertHeaderConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig & insertHeaderConfig() const { DARABONBA_PTR_GET_CONST(insertHeaderConfig_, Models::ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig) };
    inline Models::ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig insertHeaderConfig() { DARABONBA_PTR_GET(insertHeaderConfig_, Models::ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setInsertHeaderConfig(const Models::ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig & insertHeaderConfig) { DARABONBA_PTR_SET_VALUE(insertHeaderConfig_, insertHeaderConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setInsertHeaderConfig(Models::ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig && insertHeaderConfig) { DARABONBA_PTR_SET_RVALUE(insertHeaderConfig_, insertHeaderConfig) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline ListRulesResponseBodyRulesRuleActions& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // redirectConfig Field Functions 
    bool hasRedirectConfig() const { return this->redirectConfig_ != nullptr;};
    void deleteRedirectConfig() { this->redirectConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleActionsRedirectConfig & redirectConfig() const { DARABONBA_PTR_GET_CONST(redirectConfig_, Models::ListRulesResponseBodyRulesRuleActionsRedirectConfig) };
    inline Models::ListRulesResponseBodyRulesRuleActionsRedirectConfig redirectConfig() { DARABONBA_PTR_GET(redirectConfig_, Models::ListRulesResponseBodyRulesRuleActionsRedirectConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setRedirectConfig(const Models::ListRulesResponseBodyRulesRuleActionsRedirectConfig & redirectConfig) { DARABONBA_PTR_SET_VALUE(redirectConfig_, redirectConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setRedirectConfig(Models::ListRulesResponseBodyRulesRuleActionsRedirectConfig && redirectConfig) { DARABONBA_PTR_SET_RVALUE(redirectConfig_, redirectConfig) };


    // removeHeaderConfig Field Functions 
    bool hasRemoveHeaderConfig() const { return this->removeHeaderConfig_ != nullptr;};
    void deleteRemoveHeaderConfig() { this->removeHeaderConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig & removeHeaderConfig() const { DARABONBA_PTR_GET_CONST(removeHeaderConfig_, Models::ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig) };
    inline Models::ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig removeHeaderConfig() { DARABONBA_PTR_GET(removeHeaderConfig_, Models::ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setRemoveHeaderConfig(const Models::ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig & removeHeaderConfig) { DARABONBA_PTR_SET_VALUE(removeHeaderConfig_, removeHeaderConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setRemoveHeaderConfig(Models::ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig && removeHeaderConfig) { DARABONBA_PTR_SET_RVALUE(removeHeaderConfig_, removeHeaderConfig) };


    // rewriteConfig Field Functions 
    bool hasRewriteConfig() const { return this->rewriteConfig_ != nullptr;};
    void deleteRewriteConfig() { this->rewriteConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleActionsRewriteConfig & rewriteConfig() const { DARABONBA_PTR_GET_CONST(rewriteConfig_, Models::ListRulesResponseBodyRulesRuleActionsRewriteConfig) };
    inline Models::ListRulesResponseBodyRulesRuleActionsRewriteConfig rewriteConfig() { DARABONBA_PTR_GET(rewriteConfig_, Models::ListRulesResponseBodyRulesRuleActionsRewriteConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setRewriteConfig(const Models::ListRulesResponseBodyRulesRuleActionsRewriteConfig & rewriteConfig) { DARABONBA_PTR_SET_VALUE(rewriteConfig_, rewriteConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setRewriteConfig(Models::ListRulesResponseBodyRulesRuleActionsRewriteConfig && rewriteConfig) { DARABONBA_PTR_SET_RVALUE(rewriteConfig_, rewriteConfig) };


    // trafficLimitConfig Field Functions 
    bool hasTrafficLimitConfig() const { return this->trafficLimitConfig_ != nullptr;};
    void deleteTrafficLimitConfig() { this->trafficLimitConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig & trafficLimitConfig() const { DARABONBA_PTR_GET_CONST(trafficLimitConfig_, Models::ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig) };
    inline Models::ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig trafficLimitConfig() { DARABONBA_PTR_GET(trafficLimitConfig_, Models::ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setTrafficLimitConfig(const Models::ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig & trafficLimitConfig) { DARABONBA_PTR_SET_VALUE(trafficLimitConfig_, trafficLimitConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setTrafficLimitConfig(Models::ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig && trafficLimitConfig) { DARABONBA_PTR_SET_RVALUE(trafficLimitConfig_, trafficLimitConfig) };


    // trafficMirrorConfig Field Functions 
    bool hasTrafficMirrorConfig() const { return this->trafficMirrorConfig_ != nullptr;};
    void deleteTrafficMirrorConfig() { this->trafficMirrorConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfig & trafficMirrorConfig() const { DARABONBA_PTR_GET_CONST(trafficMirrorConfig_, Models::ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfig) };
    inline Models::ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfig trafficMirrorConfig() { DARABONBA_PTR_GET(trafficMirrorConfig_, Models::ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setTrafficMirrorConfig(const Models::ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfig & trafficMirrorConfig) { DARABONBA_PTR_SET_VALUE(trafficMirrorConfig_, trafficMirrorConfig) };
    inline ListRulesResponseBodyRulesRuleActions& setTrafficMirrorConfig(Models::ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfig && trafficMirrorConfig) { DARABONBA_PTR_SET_RVALUE(trafficMirrorConfig_, trafficMirrorConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListRulesResponseBodyRulesRuleActions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The CORS configuration.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleActionsCorsConfig> corsConfig_ = nullptr;
    // The configuration of the custom response.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleActionsFixedResponseConfig> fixedResponseConfig_ = nullptr;
    // The configurations of the server groups.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfig> forwardGroupConfig_ = nullptr;
    // The key of the header to be inserted.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig> insertHeaderConfig_ = nullptr;
    // The priority of the action. Valid values: **1 to 50000**. A smaller value indicates a higher priority. The actions of a forwarding rule are applied in descending order of priority. This parameter cannot empty. The priority of each action within a forwarding rule must be unique.
    std::shared_ptr<int32_t> order_ = nullptr;
    // The configuration of the redirect action.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleActionsRedirectConfig> redirectConfig_ = nullptr;
    // The HTTP header to be removed.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig> removeHeaderConfig_ = nullptr;
    // The configuration of the rewrite action.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleActionsRewriteConfig> rewriteConfig_ = nullptr;
    // The configuration of traffic throttling.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig> trafficLimitConfig_ = nullptr;
    // The configuration of traffic mirroring.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfig> trafficMirrorConfig_ = nullptr;
    // The action. Valid values:
    // 
    // *   **ForwardGroup**: distributes requests to multiple vServer groups.
    // *   **Redirect**: redirects requests.
    // *   **FixedResponse**: returns a custom response.
    // *   **Rewrite**: rewrites requests.
    // *   **InsertHeader**: inserts headers.
    // *   **RemoveHeaderConfig**: removes headers.
    // *   **TrafficLimitConfig**: throttles network traffic.
    // *   **TrafficMirrorConfig**: mirrors network traffic.
    // *   **CorsConfig**: forwards requests based on CORS.
    // 
    // The preceding actions can be classified into two broad types:
    // 
    // *   **FinalType**: Each forwarding rule can contain only one FinalType action, which is performed at the end. You can specify only one of **ForwardGroup**, **Redirect**, and **FixedResponse**.
    // *   **ExtType**: Each forwarding rule can contain one or more **ExtType** actions, which are performed before the **FinalType** action. If you want to specify an ExtType action, you must also specify a **FinalType** action. You can specify multiple **InsertHeader** actions or one **Rewrite** action.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
