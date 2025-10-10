// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULEREQUESTRULEACTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATERULEREQUESTRULEACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleActionsCorsConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleActionsFixedResponseConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleActionsForwardGroupConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleActionsInsertHeaderConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleActionsRedirectConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleActionsRemoveHeaderConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleActionsRewriteConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleActionsTrafficLimitConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleActionsTrafficMirrorConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRuleRequestRuleActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRuleRequestRuleActions& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateRuleRequestRuleActions& obj) { 
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
    CreateRuleRequestRuleActions() = default ;
    CreateRuleRequestRuleActions(const CreateRuleRequestRuleActions &) = default ;
    CreateRuleRequestRuleActions(CreateRuleRequestRuleActions &&) = default ;
    CreateRuleRequestRuleActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRuleRequestRuleActions() = default ;
    CreateRuleRequestRuleActions& operator=(const CreateRuleRequestRuleActions &) = default ;
    CreateRuleRequestRuleActions& operator=(CreateRuleRequestRuleActions &&) = default ;
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
    inline const Models::CreateRuleRequestRuleActionsCorsConfig & corsConfig() const { DARABONBA_PTR_GET_CONST(corsConfig_, Models::CreateRuleRequestRuleActionsCorsConfig) };
    inline Models::CreateRuleRequestRuleActionsCorsConfig corsConfig() { DARABONBA_PTR_GET(corsConfig_, Models::CreateRuleRequestRuleActionsCorsConfig) };
    inline CreateRuleRequestRuleActions& setCorsConfig(const Models::CreateRuleRequestRuleActionsCorsConfig & corsConfig) { DARABONBA_PTR_SET_VALUE(corsConfig_, corsConfig) };
    inline CreateRuleRequestRuleActions& setCorsConfig(Models::CreateRuleRequestRuleActionsCorsConfig && corsConfig) { DARABONBA_PTR_SET_RVALUE(corsConfig_, corsConfig) };


    // fixedResponseConfig Field Functions 
    bool hasFixedResponseConfig() const { return this->fixedResponseConfig_ != nullptr;};
    void deleteFixedResponseConfig() { this->fixedResponseConfig_ = nullptr;};
    inline const Models::CreateRuleRequestRuleActionsFixedResponseConfig & fixedResponseConfig() const { DARABONBA_PTR_GET_CONST(fixedResponseConfig_, Models::CreateRuleRequestRuleActionsFixedResponseConfig) };
    inline Models::CreateRuleRequestRuleActionsFixedResponseConfig fixedResponseConfig() { DARABONBA_PTR_GET(fixedResponseConfig_, Models::CreateRuleRequestRuleActionsFixedResponseConfig) };
    inline CreateRuleRequestRuleActions& setFixedResponseConfig(const Models::CreateRuleRequestRuleActionsFixedResponseConfig & fixedResponseConfig) { DARABONBA_PTR_SET_VALUE(fixedResponseConfig_, fixedResponseConfig) };
    inline CreateRuleRequestRuleActions& setFixedResponseConfig(Models::CreateRuleRequestRuleActionsFixedResponseConfig && fixedResponseConfig) { DARABONBA_PTR_SET_RVALUE(fixedResponseConfig_, fixedResponseConfig) };


    // forwardGroupConfig Field Functions 
    bool hasForwardGroupConfig() const { return this->forwardGroupConfig_ != nullptr;};
    void deleteForwardGroupConfig() { this->forwardGroupConfig_ = nullptr;};
    inline const Models::CreateRuleRequestRuleActionsForwardGroupConfig & forwardGroupConfig() const { DARABONBA_PTR_GET_CONST(forwardGroupConfig_, Models::CreateRuleRequestRuleActionsForwardGroupConfig) };
    inline Models::CreateRuleRequestRuleActionsForwardGroupConfig forwardGroupConfig() { DARABONBA_PTR_GET(forwardGroupConfig_, Models::CreateRuleRequestRuleActionsForwardGroupConfig) };
    inline CreateRuleRequestRuleActions& setForwardGroupConfig(const Models::CreateRuleRequestRuleActionsForwardGroupConfig & forwardGroupConfig) { DARABONBA_PTR_SET_VALUE(forwardGroupConfig_, forwardGroupConfig) };
    inline CreateRuleRequestRuleActions& setForwardGroupConfig(Models::CreateRuleRequestRuleActionsForwardGroupConfig && forwardGroupConfig) { DARABONBA_PTR_SET_RVALUE(forwardGroupConfig_, forwardGroupConfig) };


    // insertHeaderConfig Field Functions 
    bool hasInsertHeaderConfig() const { return this->insertHeaderConfig_ != nullptr;};
    void deleteInsertHeaderConfig() { this->insertHeaderConfig_ = nullptr;};
    inline const Models::CreateRuleRequestRuleActionsInsertHeaderConfig & insertHeaderConfig() const { DARABONBA_PTR_GET_CONST(insertHeaderConfig_, Models::CreateRuleRequestRuleActionsInsertHeaderConfig) };
    inline Models::CreateRuleRequestRuleActionsInsertHeaderConfig insertHeaderConfig() { DARABONBA_PTR_GET(insertHeaderConfig_, Models::CreateRuleRequestRuleActionsInsertHeaderConfig) };
    inline CreateRuleRequestRuleActions& setInsertHeaderConfig(const Models::CreateRuleRequestRuleActionsInsertHeaderConfig & insertHeaderConfig) { DARABONBA_PTR_SET_VALUE(insertHeaderConfig_, insertHeaderConfig) };
    inline CreateRuleRequestRuleActions& setInsertHeaderConfig(Models::CreateRuleRequestRuleActionsInsertHeaderConfig && insertHeaderConfig) { DARABONBA_PTR_SET_RVALUE(insertHeaderConfig_, insertHeaderConfig) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline CreateRuleRequestRuleActions& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // redirectConfig Field Functions 
    bool hasRedirectConfig() const { return this->redirectConfig_ != nullptr;};
    void deleteRedirectConfig() { this->redirectConfig_ = nullptr;};
    inline const Models::CreateRuleRequestRuleActionsRedirectConfig & redirectConfig() const { DARABONBA_PTR_GET_CONST(redirectConfig_, Models::CreateRuleRequestRuleActionsRedirectConfig) };
    inline Models::CreateRuleRequestRuleActionsRedirectConfig redirectConfig() { DARABONBA_PTR_GET(redirectConfig_, Models::CreateRuleRequestRuleActionsRedirectConfig) };
    inline CreateRuleRequestRuleActions& setRedirectConfig(const Models::CreateRuleRequestRuleActionsRedirectConfig & redirectConfig) { DARABONBA_PTR_SET_VALUE(redirectConfig_, redirectConfig) };
    inline CreateRuleRequestRuleActions& setRedirectConfig(Models::CreateRuleRequestRuleActionsRedirectConfig && redirectConfig) { DARABONBA_PTR_SET_RVALUE(redirectConfig_, redirectConfig) };


    // removeHeaderConfig Field Functions 
    bool hasRemoveHeaderConfig() const { return this->removeHeaderConfig_ != nullptr;};
    void deleteRemoveHeaderConfig() { this->removeHeaderConfig_ = nullptr;};
    inline const Models::CreateRuleRequestRuleActionsRemoveHeaderConfig & removeHeaderConfig() const { DARABONBA_PTR_GET_CONST(removeHeaderConfig_, Models::CreateRuleRequestRuleActionsRemoveHeaderConfig) };
    inline Models::CreateRuleRequestRuleActionsRemoveHeaderConfig removeHeaderConfig() { DARABONBA_PTR_GET(removeHeaderConfig_, Models::CreateRuleRequestRuleActionsRemoveHeaderConfig) };
    inline CreateRuleRequestRuleActions& setRemoveHeaderConfig(const Models::CreateRuleRequestRuleActionsRemoveHeaderConfig & removeHeaderConfig) { DARABONBA_PTR_SET_VALUE(removeHeaderConfig_, removeHeaderConfig) };
    inline CreateRuleRequestRuleActions& setRemoveHeaderConfig(Models::CreateRuleRequestRuleActionsRemoveHeaderConfig && removeHeaderConfig) { DARABONBA_PTR_SET_RVALUE(removeHeaderConfig_, removeHeaderConfig) };


    // rewriteConfig Field Functions 
    bool hasRewriteConfig() const { return this->rewriteConfig_ != nullptr;};
    void deleteRewriteConfig() { this->rewriteConfig_ = nullptr;};
    inline const Models::CreateRuleRequestRuleActionsRewriteConfig & rewriteConfig() const { DARABONBA_PTR_GET_CONST(rewriteConfig_, Models::CreateRuleRequestRuleActionsRewriteConfig) };
    inline Models::CreateRuleRequestRuleActionsRewriteConfig rewriteConfig() { DARABONBA_PTR_GET(rewriteConfig_, Models::CreateRuleRequestRuleActionsRewriteConfig) };
    inline CreateRuleRequestRuleActions& setRewriteConfig(const Models::CreateRuleRequestRuleActionsRewriteConfig & rewriteConfig) { DARABONBA_PTR_SET_VALUE(rewriteConfig_, rewriteConfig) };
    inline CreateRuleRequestRuleActions& setRewriteConfig(Models::CreateRuleRequestRuleActionsRewriteConfig && rewriteConfig) { DARABONBA_PTR_SET_RVALUE(rewriteConfig_, rewriteConfig) };


    // trafficLimitConfig Field Functions 
    bool hasTrafficLimitConfig() const { return this->trafficLimitConfig_ != nullptr;};
    void deleteTrafficLimitConfig() { this->trafficLimitConfig_ = nullptr;};
    inline const Models::CreateRuleRequestRuleActionsTrafficLimitConfig & trafficLimitConfig() const { DARABONBA_PTR_GET_CONST(trafficLimitConfig_, Models::CreateRuleRequestRuleActionsTrafficLimitConfig) };
    inline Models::CreateRuleRequestRuleActionsTrafficLimitConfig trafficLimitConfig() { DARABONBA_PTR_GET(trafficLimitConfig_, Models::CreateRuleRequestRuleActionsTrafficLimitConfig) };
    inline CreateRuleRequestRuleActions& setTrafficLimitConfig(const Models::CreateRuleRequestRuleActionsTrafficLimitConfig & trafficLimitConfig) { DARABONBA_PTR_SET_VALUE(trafficLimitConfig_, trafficLimitConfig) };
    inline CreateRuleRequestRuleActions& setTrafficLimitConfig(Models::CreateRuleRequestRuleActionsTrafficLimitConfig && trafficLimitConfig) { DARABONBA_PTR_SET_RVALUE(trafficLimitConfig_, trafficLimitConfig) };


    // trafficMirrorConfig Field Functions 
    bool hasTrafficMirrorConfig() const { return this->trafficMirrorConfig_ != nullptr;};
    void deleteTrafficMirrorConfig() { this->trafficMirrorConfig_ = nullptr;};
    inline const Models::CreateRuleRequestRuleActionsTrafficMirrorConfig & trafficMirrorConfig() const { DARABONBA_PTR_GET_CONST(trafficMirrorConfig_, Models::CreateRuleRequestRuleActionsTrafficMirrorConfig) };
    inline Models::CreateRuleRequestRuleActionsTrafficMirrorConfig trafficMirrorConfig() { DARABONBA_PTR_GET(trafficMirrorConfig_, Models::CreateRuleRequestRuleActionsTrafficMirrorConfig) };
    inline CreateRuleRequestRuleActions& setTrafficMirrorConfig(const Models::CreateRuleRequestRuleActionsTrafficMirrorConfig & trafficMirrorConfig) { DARABONBA_PTR_SET_VALUE(trafficMirrorConfig_, trafficMirrorConfig) };
    inline CreateRuleRequestRuleActions& setTrafficMirrorConfig(Models::CreateRuleRequestRuleActionsTrafficMirrorConfig && trafficMirrorConfig) { DARABONBA_PTR_SET_RVALUE(trafficMirrorConfig_, trafficMirrorConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateRuleRequestRuleActions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Request forwarding based on CORS.
    std::shared_ptr<Models::CreateRuleRequestRuleActionsCorsConfig> corsConfig_ = nullptr;
    // The configuration of the custom response.
    std::shared_ptr<Models::CreateRuleRequestRuleActionsFixedResponseConfig> fixedResponseConfig_ = nullptr;
    // The server groups to which requests are forwarded. You can specify at most five server groups for each forwarding rule.
    std::shared_ptr<Models::CreateRuleRequestRuleActionsForwardGroupConfig> forwardGroupConfig_ = nullptr;
    // The key of the header to be inserted.
    std::shared_ptr<Models::CreateRuleRequestRuleActionsInsertHeaderConfig> insertHeaderConfig_ = nullptr;
    // The priority of the action. Valid values: **1 to 50000**. A smaller value indicates a higher priority. The actions of a forwarding rule are applied in descending order of priority. This parameter cannot empty. The priority of each action within a forwarding rule must be unique.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> order_ = nullptr;
    // The configuration of the redirect action.
    // 
    // >  Do not set all fields in **RedirectConfig** to default values, except for **httpCode**.
    std::shared_ptr<Models::CreateRuleRequestRuleActionsRedirectConfig> redirectConfig_ = nullptr;
    // The HTTP headers to be removed.
    std::shared_ptr<Models::CreateRuleRequestRuleActionsRemoveHeaderConfig> removeHeaderConfig_ = nullptr;
    // The configuration of the rewrite action.
    // 
    // >  If you specify multiple actions for a forwarding rule, you must configure the **ForwardGroup** parameter for the **RewriteConfig** action.
    std::shared_ptr<Models::CreateRuleRequestRuleActionsRewriteConfig> rewriteConfig_ = nullptr;
    // The configuration of the traffic throttling action.
    std::shared_ptr<Models::CreateRuleRequestRuleActionsTrafficLimitConfig> trafficLimitConfig_ = nullptr;
    // The configuration of the traffic mirroring action.
    std::shared_ptr<Models::CreateRuleRequestRuleActionsTrafficMirrorConfig> trafficMirrorConfig_ = nullptr;
    // The action. Valid values:
    // 
    // *   **ForwardGroup**: distributes requests to multiple vServer groups.
    // *   **Redirect**: redirects requests.
    // *   **FixedResponse**: returns a custom response.
    // *   **Rewrite**: rewrites requests.
    // *   **InsertHeader**: inserts headers.
    // *   **RemoveHeaderConfig:** deletes the header of a request.
    // *   **TrafficLimit**: throttles traffic.
    // *   **TrafficMirror**: mirrors network traffic.
    // *   **Cors**: enables cross-origin resource sharing (CORS).
    // 
    // The following action types are supported:
    // 
    // *   **FinalType**: Each forwarding rule can contain only one FinalType action, which is performed at the end. You can specify only one of **ForwardGroup**, **Redirect**, and **FixedResponse**.
    // *   **ExtType**: Each forwarding rule can contain one or more **ExtType** actions, which are performed before the **FinalType** action. If you want to specify an ExtType action, you must also specify a **FinalType** action. You can specify multiple **InsertHeader** actions or one **Rewrite** action.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
