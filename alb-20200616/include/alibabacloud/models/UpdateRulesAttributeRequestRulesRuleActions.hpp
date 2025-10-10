// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULEACTIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULEACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleActionsCorsConfig.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleActionsRedirectConfig.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleActionsRemoveHeaderConfig.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleActionsTrafficLimitConfig.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRulesAttributeRequestRulesRuleActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRulesAttributeRequestRulesRuleActions& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateRulesAttributeRequestRulesRuleActions& obj) { 
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
    UpdateRulesAttributeRequestRulesRuleActions() = default ;
    UpdateRulesAttributeRequestRulesRuleActions(const UpdateRulesAttributeRequestRulesRuleActions &) = default ;
    UpdateRulesAttributeRequestRulesRuleActions(UpdateRulesAttributeRequestRulesRuleActions &&) = default ;
    UpdateRulesAttributeRequestRulesRuleActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRulesAttributeRequestRulesRuleActions() = default ;
    UpdateRulesAttributeRequestRulesRuleActions& operator=(const UpdateRulesAttributeRequestRulesRuleActions &) = default ;
    UpdateRulesAttributeRequestRulesRuleActions& operator=(UpdateRulesAttributeRequestRulesRuleActions &&) = default ;
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
    inline const Models::UpdateRulesAttributeRequestRulesRuleActionsCorsConfig & corsConfig() const { DARABONBA_PTR_GET_CONST(corsConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsCorsConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleActionsCorsConfig corsConfig() { DARABONBA_PTR_GET(corsConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsCorsConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setCorsConfig(const Models::UpdateRulesAttributeRequestRulesRuleActionsCorsConfig & corsConfig) { DARABONBA_PTR_SET_VALUE(corsConfig_, corsConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setCorsConfig(Models::UpdateRulesAttributeRequestRulesRuleActionsCorsConfig && corsConfig) { DARABONBA_PTR_SET_RVALUE(corsConfig_, corsConfig) };


    // fixedResponseConfig Field Functions 
    bool hasFixedResponseConfig() const { return this->fixedResponseConfig_ != nullptr;};
    void deleteFixedResponseConfig() { this->fixedResponseConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig & fixedResponseConfig() const { DARABONBA_PTR_GET_CONST(fixedResponseConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig fixedResponseConfig() { DARABONBA_PTR_GET(fixedResponseConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setFixedResponseConfig(const Models::UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig & fixedResponseConfig) { DARABONBA_PTR_SET_VALUE(fixedResponseConfig_, fixedResponseConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setFixedResponseConfig(Models::UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig && fixedResponseConfig) { DARABONBA_PTR_SET_RVALUE(fixedResponseConfig_, fixedResponseConfig) };


    // forwardGroupConfig Field Functions 
    bool hasForwardGroupConfig() const { return this->forwardGroupConfig_ != nullptr;};
    void deleteForwardGroupConfig() { this->forwardGroupConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig & forwardGroupConfig() const { DARABONBA_PTR_GET_CONST(forwardGroupConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig forwardGroupConfig() { DARABONBA_PTR_GET(forwardGroupConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setForwardGroupConfig(const Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig & forwardGroupConfig) { DARABONBA_PTR_SET_VALUE(forwardGroupConfig_, forwardGroupConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setForwardGroupConfig(Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig && forwardGroupConfig) { DARABONBA_PTR_SET_RVALUE(forwardGroupConfig_, forwardGroupConfig) };


    // insertHeaderConfig Field Functions 
    bool hasInsertHeaderConfig() const { return this->insertHeaderConfig_ != nullptr;};
    void deleteInsertHeaderConfig() { this->insertHeaderConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig & insertHeaderConfig() const { DARABONBA_PTR_GET_CONST(insertHeaderConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig insertHeaderConfig() { DARABONBA_PTR_GET(insertHeaderConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setInsertHeaderConfig(const Models::UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig & insertHeaderConfig) { DARABONBA_PTR_SET_VALUE(insertHeaderConfig_, insertHeaderConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setInsertHeaderConfig(Models::UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig && insertHeaderConfig) { DARABONBA_PTR_SET_RVALUE(insertHeaderConfig_, insertHeaderConfig) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // redirectConfig Field Functions 
    bool hasRedirectConfig() const { return this->redirectConfig_ != nullptr;};
    void deleteRedirectConfig() { this->redirectConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleActionsRedirectConfig & redirectConfig() const { DARABONBA_PTR_GET_CONST(redirectConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsRedirectConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleActionsRedirectConfig redirectConfig() { DARABONBA_PTR_GET(redirectConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsRedirectConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setRedirectConfig(const Models::UpdateRulesAttributeRequestRulesRuleActionsRedirectConfig & redirectConfig) { DARABONBA_PTR_SET_VALUE(redirectConfig_, redirectConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setRedirectConfig(Models::UpdateRulesAttributeRequestRulesRuleActionsRedirectConfig && redirectConfig) { DARABONBA_PTR_SET_RVALUE(redirectConfig_, redirectConfig) };


    // removeHeaderConfig Field Functions 
    bool hasRemoveHeaderConfig() const { return this->removeHeaderConfig_ != nullptr;};
    void deleteRemoveHeaderConfig() { this->removeHeaderConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleActionsRemoveHeaderConfig & removeHeaderConfig() const { DARABONBA_PTR_GET_CONST(removeHeaderConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsRemoveHeaderConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleActionsRemoveHeaderConfig removeHeaderConfig() { DARABONBA_PTR_GET(removeHeaderConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsRemoveHeaderConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setRemoveHeaderConfig(const Models::UpdateRulesAttributeRequestRulesRuleActionsRemoveHeaderConfig & removeHeaderConfig) { DARABONBA_PTR_SET_VALUE(removeHeaderConfig_, removeHeaderConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setRemoveHeaderConfig(Models::UpdateRulesAttributeRequestRulesRuleActionsRemoveHeaderConfig && removeHeaderConfig) { DARABONBA_PTR_SET_RVALUE(removeHeaderConfig_, removeHeaderConfig) };


    // rewriteConfig Field Functions 
    bool hasRewriteConfig() const { return this->rewriteConfig_ != nullptr;};
    void deleteRewriteConfig() { this->rewriteConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig & rewriteConfig() const { DARABONBA_PTR_GET_CONST(rewriteConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig rewriteConfig() { DARABONBA_PTR_GET(rewriteConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setRewriteConfig(const Models::UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig & rewriteConfig) { DARABONBA_PTR_SET_VALUE(rewriteConfig_, rewriteConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setRewriteConfig(Models::UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig && rewriteConfig) { DARABONBA_PTR_SET_RVALUE(rewriteConfig_, rewriteConfig) };


    // trafficLimitConfig Field Functions 
    bool hasTrafficLimitConfig() const { return this->trafficLimitConfig_ != nullptr;};
    void deleteTrafficLimitConfig() { this->trafficLimitConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficLimitConfig & trafficLimitConfig() const { DARABONBA_PTR_GET_CONST(trafficLimitConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficLimitConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficLimitConfig trafficLimitConfig() { DARABONBA_PTR_GET(trafficLimitConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficLimitConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setTrafficLimitConfig(const Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficLimitConfig & trafficLimitConfig) { DARABONBA_PTR_SET_VALUE(trafficLimitConfig_, trafficLimitConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setTrafficLimitConfig(Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficLimitConfig && trafficLimitConfig) { DARABONBA_PTR_SET_RVALUE(trafficLimitConfig_, trafficLimitConfig) };


    // trafficMirrorConfig Field Functions 
    bool hasTrafficMirrorConfig() const { return this->trafficMirrorConfig_ != nullptr;};
    void deleteTrafficMirrorConfig() { this->trafficMirrorConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig & trafficMirrorConfig() const { DARABONBA_PTR_GET_CONST(trafficMirrorConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig trafficMirrorConfig() { DARABONBA_PTR_GET(trafficMirrorConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setTrafficMirrorConfig(const Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig & trafficMirrorConfig) { DARABONBA_PTR_SET_VALUE(trafficMirrorConfig_, trafficMirrorConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActions& setTrafficMirrorConfig(Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig && trafficMirrorConfig) { DARABONBA_PTR_SET_RVALUE(trafficMirrorConfig_, trafficMirrorConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateRulesAttributeRequestRulesRuleActions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleActionsCorsConfig> corsConfig_ = nullptr;
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig> fixedResponseConfig_ = nullptr;
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig> forwardGroupConfig_ = nullptr;
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig> insertHeaderConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> order_ = nullptr;
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleActionsRedirectConfig> redirectConfig_ = nullptr;
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleActionsRemoveHeaderConfig> removeHeaderConfig_ = nullptr;
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig> rewriteConfig_ = nullptr;
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficLimitConfig> trafficLimitConfig_ = nullptr;
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig> trafficMirrorConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
