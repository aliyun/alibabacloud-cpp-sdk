// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleActionsCorsConfig.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleActionsFixedResponseConfig.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleActionsForwardGroupConfig.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleActionsRedirectConfig.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleActionsRemoveHeaderConfig.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleActionsRewriteConfig.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleActionsTrafficLimitConfig.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRuleAttributeRequestRuleActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleAttributeRequestRuleActions& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateRuleAttributeRequestRuleActions& obj) { 
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
    UpdateRuleAttributeRequestRuleActions() = default ;
    UpdateRuleAttributeRequestRuleActions(const UpdateRuleAttributeRequestRuleActions &) = default ;
    UpdateRuleAttributeRequestRuleActions(UpdateRuleAttributeRequestRuleActions &&) = default ;
    UpdateRuleAttributeRequestRuleActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleAttributeRequestRuleActions() = default ;
    UpdateRuleAttributeRequestRuleActions& operator=(const UpdateRuleAttributeRequestRuleActions &) = default ;
    UpdateRuleAttributeRequestRuleActions& operator=(UpdateRuleAttributeRequestRuleActions &&) = default ;
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
    inline const Models::UpdateRuleAttributeRequestRuleActionsCorsConfig & corsConfig() const { DARABONBA_PTR_GET_CONST(corsConfig_, Models::UpdateRuleAttributeRequestRuleActionsCorsConfig) };
    inline Models::UpdateRuleAttributeRequestRuleActionsCorsConfig corsConfig() { DARABONBA_PTR_GET(corsConfig_, Models::UpdateRuleAttributeRequestRuleActionsCorsConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setCorsConfig(const Models::UpdateRuleAttributeRequestRuleActionsCorsConfig & corsConfig) { DARABONBA_PTR_SET_VALUE(corsConfig_, corsConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setCorsConfig(Models::UpdateRuleAttributeRequestRuleActionsCorsConfig && corsConfig) { DARABONBA_PTR_SET_RVALUE(corsConfig_, corsConfig) };


    // fixedResponseConfig Field Functions 
    bool hasFixedResponseConfig() const { return this->fixedResponseConfig_ != nullptr;};
    void deleteFixedResponseConfig() { this->fixedResponseConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleActionsFixedResponseConfig & fixedResponseConfig() const { DARABONBA_PTR_GET_CONST(fixedResponseConfig_, Models::UpdateRuleAttributeRequestRuleActionsFixedResponseConfig) };
    inline Models::UpdateRuleAttributeRequestRuleActionsFixedResponseConfig fixedResponseConfig() { DARABONBA_PTR_GET(fixedResponseConfig_, Models::UpdateRuleAttributeRequestRuleActionsFixedResponseConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setFixedResponseConfig(const Models::UpdateRuleAttributeRequestRuleActionsFixedResponseConfig & fixedResponseConfig) { DARABONBA_PTR_SET_VALUE(fixedResponseConfig_, fixedResponseConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setFixedResponseConfig(Models::UpdateRuleAttributeRequestRuleActionsFixedResponseConfig && fixedResponseConfig) { DARABONBA_PTR_SET_RVALUE(fixedResponseConfig_, fixedResponseConfig) };


    // forwardGroupConfig Field Functions 
    bool hasForwardGroupConfig() const { return this->forwardGroupConfig_ != nullptr;};
    void deleteForwardGroupConfig() { this->forwardGroupConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfig & forwardGroupConfig() const { DARABONBA_PTR_GET_CONST(forwardGroupConfig_, Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfig) };
    inline Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfig forwardGroupConfig() { DARABONBA_PTR_GET(forwardGroupConfig_, Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setForwardGroupConfig(const Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfig & forwardGroupConfig) { DARABONBA_PTR_SET_VALUE(forwardGroupConfig_, forwardGroupConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setForwardGroupConfig(Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfig && forwardGroupConfig) { DARABONBA_PTR_SET_RVALUE(forwardGroupConfig_, forwardGroupConfig) };


    // insertHeaderConfig Field Functions 
    bool hasInsertHeaderConfig() const { return this->insertHeaderConfig_ != nullptr;};
    void deleteInsertHeaderConfig() { this->insertHeaderConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig & insertHeaderConfig() const { DARABONBA_PTR_GET_CONST(insertHeaderConfig_, Models::UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig) };
    inline Models::UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig insertHeaderConfig() { DARABONBA_PTR_GET(insertHeaderConfig_, Models::UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setInsertHeaderConfig(const Models::UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig & insertHeaderConfig) { DARABONBA_PTR_SET_VALUE(insertHeaderConfig_, insertHeaderConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setInsertHeaderConfig(Models::UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig && insertHeaderConfig) { DARABONBA_PTR_SET_RVALUE(insertHeaderConfig_, insertHeaderConfig) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline UpdateRuleAttributeRequestRuleActions& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // redirectConfig Field Functions 
    bool hasRedirectConfig() const { return this->redirectConfig_ != nullptr;};
    void deleteRedirectConfig() { this->redirectConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleActionsRedirectConfig & redirectConfig() const { DARABONBA_PTR_GET_CONST(redirectConfig_, Models::UpdateRuleAttributeRequestRuleActionsRedirectConfig) };
    inline Models::UpdateRuleAttributeRequestRuleActionsRedirectConfig redirectConfig() { DARABONBA_PTR_GET(redirectConfig_, Models::UpdateRuleAttributeRequestRuleActionsRedirectConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setRedirectConfig(const Models::UpdateRuleAttributeRequestRuleActionsRedirectConfig & redirectConfig) { DARABONBA_PTR_SET_VALUE(redirectConfig_, redirectConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setRedirectConfig(Models::UpdateRuleAttributeRequestRuleActionsRedirectConfig && redirectConfig) { DARABONBA_PTR_SET_RVALUE(redirectConfig_, redirectConfig) };


    // removeHeaderConfig Field Functions 
    bool hasRemoveHeaderConfig() const { return this->removeHeaderConfig_ != nullptr;};
    void deleteRemoveHeaderConfig() { this->removeHeaderConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleActionsRemoveHeaderConfig & removeHeaderConfig() const { DARABONBA_PTR_GET_CONST(removeHeaderConfig_, Models::UpdateRuleAttributeRequestRuleActionsRemoveHeaderConfig) };
    inline Models::UpdateRuleAttributeRequestRuleActionsRemoveHeaderConfig removeHeaderConfig() { DARABONBA_PTR_GET(removeHeaderConfig_, Models::UpdateRuleAttributeRequestRuleActionsRemoveHeaderConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setRemoveHeaderConfig(const Models::UpdateRuleAttributeRequestRuleActionsRemoveHeaderConfig & removeHeaderConfig) { DARABONBA_PTR_SET_VALUE(removeHeaderConfig_, removeHeaderConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setRemoveHeaderConfig(Models::UpdateRuleAttributeRequestRuleActionsRemoveHeaderConfig && removeHeaderConfig) { DARABONBA_PTR_SET_RVALUE(removeHeaderConfig_, removeHeaderConfig) };


    // rewriteConfig Field Functions 
    bool hasRewriteConfig() const { return this->rewriteConfig_ != nullptr;};
    void deleteRewriteConfig() { this->rewriteConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleActionsRewriteConfig & rewriteConfig() const { DARABONBA_PTR_GET_CONST(rewriteConfig_, Models::UpdateRuleAttributeRequestRuleActionsRewriteConfig) };
    inline Models::UpdateRuleAttributeRequestRuleActionsRewriteConfig rewriteConfig() { DARABONBA_PTR_GET(rewriteConfig_, Models::UpdateRuleAttributeRequestRuleActionsRewriteConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setRewriteConfig(const Models::UpdateRuleAttributeRequestRuleActionsRewriteConfig & rewriteConfig) { DARABONBA_PTR_SET_VALUE(rewriteConfig_, rewriteConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setRewriteConfig(Models::UpdateRuleAttributeRequestRuleActionsRewriteConfig && rewriteConfig) { DARABONBA_PTR_SET_RVALUE(rewriteConfig_, rewriteConfig) };


    // trafficLimitConfig Field Functions 
    bool hasTrafficLimitConfig() const { return this->trafficLimitConfig_ != nullptr;};
    void deleteTrafficLimitConfig() { this->trafficLimitConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleActionsTrafficLimitConfig & trafficLimitConfig() const { DARABONBA_PTR_GET_CONST(trafficLimitConfig_, Models::UpdateRuleAttributeRequestRuleActionsTrafficLimitConfig) };
    inline Models::UpdateRuleAttributeRequestRuleActionsTrafficLimitConfig trafficLimitConfig() { DARABONBA_PTR_GET(trafficLimitConfig_, Models::UpdateRuleAttributeRequestRuleActionsTrafficLimitConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setTrafficLimitConfig(const Models::UpdateRuleAttributeRequestRuleActionsTrafficLimitConfig & trafficLimitConfig) { DARABONBA_PTR_SET_VALUE(trafficLimitConfig_, trafficLimitConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setTrafficLimitConfig(Models::UpdateRuleAttributeRequestRuleActionsTrafficLimitConfig && trafficLimitConfig) { DARABONBA_PTR_SET_RVALUE(trafficLimitConfig_, trafficLimitConfig) };


    // trafficMirrorConfig Field Functions 
    bool hasTrafficMirrorConfig() const { return this->trafficMirrorConfig_ != nullptr;};
    void deleteTrafficMirrorConfig() { this->trafficMirrorConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig & trafficMirrorConfig() const { DARABONBA_PTR_GET_CONST(trafficMirrorConfig_, Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig) };
    inline Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig trafficMirrorConfig() { DARABONBA_PTR_GET(trafficMirrorConfig_, Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setTrafficMirrorConfig(const Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig & trafficMirrorConfig) { DARABONBA_PTR_SET_VALUE(trafficMirrorConfig_, trafficMirrorConfig) };
    inline UpdateRuleAttributeRequestRuleActions& setTrafficMirrorConfig(Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig && trafficMirrorConfig) { DARABONBA_PTR_SET_RVALUE(trafficMirrorConfig_, trafficMirrorConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateRuleAttributeRequestRuleActions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The CORS configuration.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleActionsCorsConfig> corsConfig_ = nullptr;
    // The configuration of the custom response.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleActionsFixedResponseConfig> fixedResponseConfig_ = nullptr;
    // The configuration of the server groups.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfig> forwardGroupConfig_ = nullptr;
    // The configuration of the header to be inserted.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig> insertHeaderConfig_ = nullptr;
    // The priority of the action. Valid values: **1 to 50000**. A smaller value specifies a higher priority. The actions of a forwarding rule are applied in descending order of priority. This parameter cannot be left empty. The priority of each action within a forwarding rule must be unique. You can specify up to 20 forwarding rule priorities.
    std::shared_ptr<int32_t> order_ = nullptr;
    // The configuration of the redirect action. You can specify up to 20 redirect actions.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleActionsRedirectConfig> redirectConfig_ = nullptr;
    // The HTTP header to be removed.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleActionsRemoveHeaderConfig> removeHeaderConfig_ = nullptr;
    // The configuration of the rewrite action.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleActionsRewriteConfig> rewriteConfig_ = nullptr;
    // The configuration of the action to throttle traffic.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleActionsTrafficLimitConfig> trafficLimitConfig_ = nullptr;
    // The configuration of the traffic mirroring action.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig> trafficMirrorConfig_ = nullptr;
    // The type of the task. You can specify up to 11 types of action. Valid values:
    // 
    // *   **ForwardGroup**: forwards a request to multiple vServer groups.
    // *   **Redirect**: redirects requests.
    // *   **FixedResponse**: returns a fixed response.
    // *   **Rewrite**: rewrites requests.
    // *   **InsertHeader**: inserts a header.
    // *   **RemoveHeader**: deletes the header of a request.
    // *   **TrafficLimit**: throttles traffic.
    // *   **trafficMirror**: mirrors network traffic.
    // *   **Cors**: forwards requests based on CORS.
    // 
    // The preceding actions can be classified into two types:
    // 
    // *   **FinalType**: Each forwarding rule can contain only one FinalType action, which is performed at the end. You can specify only one of **ForwardGroup**, **Redirect**, and **FixedResponse**.
    // *   **ExtType**: Each forwarding rule can contain one or more **ExtType** actions, which are performed before the **FinalType** action. If you want to specify an ExtType action, you must also specify a **FinalType** action. You can specify multiple **InsertHeader** actions or one **Rewrite** action.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
