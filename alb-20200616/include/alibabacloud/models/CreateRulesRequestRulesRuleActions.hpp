// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESREQUESTRULESRULEACTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESREQUESTRULESRULEACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleActionsCorsConfig.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleActionsFixedResponseConfig.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleActionsForwardGroupConfig.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleActionsInsertHeaderConfig.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleActionsRedirectConfig.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleActionsRemoveHeaderConfig.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleActionsRewriteConfig.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleActionsTrafficLimitConfig.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleActionsTrafficMirrorConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRulesRequestRulesRuleActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRulesRequestRulesRuleActions& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateRulesRequestRulesRuleActions& obj) { 
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
    CreateRulesRequestRulesRuleActions() = default ;
    CreateRulesRequestRulesRuleActions(const CreateRulesRequestRulesRuleActions &) = default ;
    CreateRulesRequestRulesRuleActions(CreateRulesRequestRulesRuleActions &&) = default ;
    CreateRulesRequestRulesRuleActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRulesRequestRulesRuleActions() = default ;
    CreateRulesRequestRulesRuleActions& operator=(const CreateRulesRequestRulesRuleActions &) = default ;
    CreateRulesRequestRulesRuleActions& operator=(CreateRulesRequestRulesRuleActions &&) = default ;
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
    inline const Models::CreateRulesRequestRulesRuleActionsCorsConfig & corsConfig() const { DARABONBA_PTR_GET_CONST(corsConfig_, Models::CreateRulesRequestRulesRuleActionsCorsConfig) };
    inline Models::CreateRulesRequestRulesRuleActionsCorsConfig corsConfig() { DARABONBA_PTR_GET(corsConfig_, Models::CreateRulesRequestRulesRuleActionsCorsConfig) };
    inline CreateRulesRequestRulesRuleActions& setCorsConfig(const Models::CreateRulesRequestRulesRuleActionsCorsConfig & corsConfig) { DARABONBA_PTR_SET_VALUE(corsConfig_, corsConfig) };
    inline CreateRulesRequestRulesRuleActions& setCorsConfig(Models::CreateRulesRequestRulesRuleActionsCorsConfig && corsConfig) { DARABONBA_PTR_SET_RVALUE(corsConfig_, corsConfig) };


    // fixedResponseConfig Field Functions 
    bool hasFixedResponseConfig() const { return this->fixedResponseConfig_ != nullptr;};
    void deleteFixedResponseConfig() { this->fixedResponseConfig_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleActionsFixedResponseConfig & fixedResponseConfig() const { DARABONBA_PTR_GET_CONST(fixedResponseConfig_, Models::CreateRulesRequestRulesRuleActionsFixedResponseConfig) };
    inline Models::CreateRulesRequestRulesRuleActionsFixedResponseConfig fixedResponseConfig() { DARABONBA_PTR_GET(fixedResponseConfig_, Models::CreateRulesRequestRulesRuleActionsFixedResponseConfig) };
    inline CreateRulesRequestRulesRuleActions& setFixedResponseConfig(const Models::CreateRulesRequestRulesRuleActionsFixedResponseConfig & fixedResponseConfig) { DARABONBA_PTR_SET_VALUE(fixedResponseConfig_, fixedResponseConfig) };
    inline CreateRulesRequestRulesRuleActions& setFixedResponseConfig(Models::CreateRulesRequestRulesRuleActionsFixedResponseConfig && fixedResponseConfig) { DARABONBA_PTR_SET_RVALUE(fixedResponseConfig_, fixedResponseConfig) };


    // forwardGroupConfig Field Functions 
    bool hasForwardGroupConfig() const { return this->forwardGroupConfig_ != nullptr;};
    void deleteForwardGroupConfig() { this->forwardGroupConfig_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleActionsForwardGroupConfig & forwardGroupConfig() const { DARABONBA_PTR_GET_CONST(forwardGroupConfig_, Models::CreateRulesRequestRulesRuleActionsForwardGroupConfig) };
    inline Models::CreateRulesRequestRulesRuleActionsForwardGroupConfig forwardGroupConfig() { DARABONBA_PTR_GET(forwardGroupConfig_, Models::CreateRulesRequestRulesRuleActionsForwardGroupConfig) };
    inline CreateRulesRequestRulesRuleActions& setForwardGroupConfig(const Models::CreateRulesRequestRulesRuleActionsForwardGroupConfig & forwardGroupConfig) { DARABONBA_PTR_SET_VALUE(forwardGroupConfig_, forwardGroupConfig) };
    inline CreateRulesRequestRulesRuleActions& setForwardGroupConfig(Models::CreateRulesRequestRulesRuleActionsForwardGroupConfig && forwardGroupConfig) { DARABONBA_PTR_SET_RVALUE(forwardGroupConfig_, forwardGroupConfig) };


    // insertHeaderConfig Field Functions 
    bool hasInsertHeaderConfig() const { return this->insertHeaderConfig_ != nullptr;};
    void deleteInsertHeaderConfig() { this->insertHeaderConfig_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleActionsInsertHeaderConfig & insertHeaderConfig() const { DARABONBA_PTR_GET_CONST(insertHeaderConfig_, Models::CreateRulesRequestRulesRuleActionsInsertHeaderConfig) };
    inline Models::CreateRulesRequestRulesRuleActionsInsertHeaderConfig insertHeaderConfig() { DARABONBA_PTR_GET(insertHeaderConfig_, Models::CreateRulesRequestRulesRuleActionsInsertHeaderConfig) };
    inline CreateRulesRequestRulesRuleActions& setInsertHeaderConfig(const Models::CreateRulesRequestRulesRuleActionsInsertHeaderConfig & insertHeaderConfig) { DARABONBA_PTR_SET_VALUE(insertHeaderConfig_, insertHeaderConfig) };
    inline CreateRulesRequestRulesRuleActions& setInsertHeaderConfig(Models::CreateRulesRequestRulesRuleActionsInsertHeaderConfig && insertHeaderConfig) { DARABONBA_PTR_SET_RVALUE(insertHeaderConfig_, insertHeaderConfig) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline CreateRulesRequestRulesRuleActions& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // redirectConfig Field Functions 
    bool hasRedirectConfig() const { return this->redirectConfig_ != nullptr;};
    void deleteRedirectConfig() { this->redirectConfig_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleActionsRedirectConfig & redirectConfig() const { DARABONBA_PTR_GET_CONST(redirectConfig_, Models::CreateRulesRequestRulesRuleActionsRedirectConfig) };
    inline Models::CreateRulesRequestRulesRuleActionsRedirectConfig redirectConfig() { DARABONBA_PTR_GET(redirectConfig_, Models::CreateRulesRequestRulesRuleActionsRedirectConfig) };
    inline CreateRulesRequestRulesRuleActions& setRedirectConfig(const Models::CreateRulesRequestRulesRuleActionsRedirectConfig & redirectConfig) { DARABONBA_PTR_SET_VALUE(redirectConfig_, redirectConfig) };
    inline CreateRulesRequestRulesRuleActions& setRedirectConfig(Models::CreateRulesRequestRulesRuleActionsRedirectConfig && redirectConfig) { DARABONBA_PTR_SET_RVALUE(redirectConfig_, redirectConfig) };


    // removeHeaderConfig Field Functions 
    bool hasRemoveHeaderConfig() const { return this->removeHeaderConfig_ != nullptr;};
    void deleteRemoveHeaderConfig() { this->removeHeaderConfig_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleActionsRemoveHeaderConfig & removeHeaderConfig() const { DARABONBA_PTR_GET_CONST(removeHeaderConfig_, Models::CreateRulesRequestRulesRuleActionsRemoveHeaderConfig) };
    inline Models::CreateRulesRequestRulesRuleActionsRemoveHeaderConfig removeHeaderConfig() { DARABONBA_PTR_GET(removeHeaderConfig_, Models::CreateRulesRequestRulesRuleActionsRemoveHeaderConfig) };
    inline CreateRulesRequestRulesRuleActions& setRemoveHeaderConfig(const Models::CreateRulesRequestRulesRuleActionsRemoveHeaderConfig & removeHeaderConfig) { DARABONBA_PTR_SET_VALUE(removeHeaderConfig_, removeHeaderConfig) };
    inline CreateRulesRequestRulesRuleActions& setRemoveHeaderConfig(Models::CreateRulesRequestRulesRuleActionsRemoveHeaderConfig && removeHeaderConfig) { DARABONBA_PTR_SET_RVALUE(removeHeaderConfig_, removeHeaderConfig) };


    // rewriteConfig Field Functions 
    bool hasRewriteConfig() const { return this->rewriteConfig_ != nullptr;};
    void deleteRewriteConfig() { this->rewriteConfig_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleActionsRewriteConfig & rewriteConfig() const { DARABONBA_PTR_GET_CONST(rewriteConfig_, Models::CreateRulesRequestRulesRuleActionsRewriteConfig) };
    inline Models::CreateRulesRequestRulesRuleActionsRewriteConfig rewriteConfig() { DARABONBA_PTR_GET(rewriteConfig_, Models::CreateRulesRequestRulesRuleActionsRewriteConfig) };
    inline CreateRulesRequestRulesRuleActions& setRewriteConfig(const Models::CreateRulesRequestRulesRuleActionsRewriteConfig & rewriteConfig) { DARABONBA_PTR_SET_VALUE(rewriteConfig_, rewriteConfig) };
    inline CreateRulesRequestRulesRuleActions& setRewriteConfig(Models::CreateRulesRequestRulesRuleActionsRewriteConfig && rewriteConfig) { DARABONBA_PTR_SET_RVALUE(rewriteConfig_, rewriteConfig) };


    // trafficLimitConfig Field Functions 
    bool hasTrafficLimitConfig() const { return this->trafficLimitConfig_ != nullptr;};
    void deleteTrafficLimitConfig() { this->trafficLimitConfig_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleActionsTrafficLimitConfig & trafficLimitConfig() const { DARABONBA_PTR_GET_CONST(trafficLimitConfig_, Models::CreateRulesRequestRulesRuleActionsTrafficLimitConfig) };
    inline Models::CreateRulesRequestRulesRuleActionsTrafficLimitConfig trafficLimitConfig() { DARABONBA_PTR_GET(trafficLimitConfig_, Models::CreateRulesRequestRulesRuleActionsTrafficLimitConfig) };
    inline CreateRulesRequestRulesRuleActions& setTrafficLimitConfig(const Models::CreateRulesRequestRulesRuleActionsTrafficLimitConfig & trafficLimitConfig) { DARABONBA_PTR_SET_VALUE(trafficLimitConfig_, trafficLimitConfig) };
    inline CreateRulesRequestRulesRuleActions& setTrafficLimitConfig(Models::CreateRulesRequestRulesRuleActionsTrafficLimitConfig && trafficLimitConfig) { DARABONBA_PTR_SET_RVALUE(trafficLimitConfig_, trafficLimitConfig) };


    // trafficMirrorConfig Field Functions 
    bool hasTrafficMirrorConfig() const { return this->trafficMirrorConfig_ != nullptr;};
    void deleteTrafficMirrorConfig() { this->trafficMirrorConfig_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleActionsTrafficMirrorConfig & trafficMirrorConfig() const { DARABONBA_PTR_GET_CONST(trafficMirrorConfig_, Models::CreateRulesRequestRulesRuleActionsTrafficMirrorConfig) };
    inline Models::CreateRulesRequestRulesRuleActionsTrafficMirrorConfig trafficMirrorConfig() { DARABONBA_PTR_GET(trafficMirrorConfig_, Models::CreateRulesRequestRulesRuleActionsTrafficMirrorConfig) };
    inline CreateRulesRequestRulesRuleActions& setTrafficMirrorConfig(const Models::CreateRulesRequestRulesRuleActionsTrafficMirrorConfig & trafficMirrorConfig) { DARABONBA_PTR_SET_VALUE(trafficMirrorConfig_, trafficMirrorConfig) };
    inline CreateRulesRequestRulesRuleActions& setTrafficMirrorConfig(Models::CreateRulesRequestRulesRuleActionsTrafficMirrorConfig && trafficMirrorConfig) { DARABONBA_PTR_SET_RVALUE(trafficMirrorConfig_, trafficMirrorConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateRulesRequestRulesRuleActions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::CreateRulesRequestRulesRuleActionsCorsConfig> corsConfig_ = nullptr;
    std::shared_ptr<Models::CreateRulesRequestRulesRuleActionsFixedResponseConfig> fixedResponseConfig_ = nullptr;
    std::shared_ptr<Models::CreateRulesRequestRulesRuleActionsForwardGroupConfig> forwardGroupConfig_ = nullptr;
    std::shared_ptr<Models::CreateRulesRequestRulesRuleActionsInsertHeaderConfig> insertHeaderConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> order_ = nullptr;
    std::shared_ptr<Models::CreateRulesRequestRulesRuleActionsRedirectConfig> redirectConfig_ = nullptr;
    std::shared_ptr<Models::CreateRulesRequestRulesRuleActionsRemoveHeaderConfig> removeHeaderConfig_ = nullptr;
    std::shared_ptr<Models::CreateRulesRequestRulesRuleActionsRewriteConfig> rewriteConfig_ = nullptr;
    std::shared_ptr<Models::CreateRulesRequestRulesRuleActionsTrafficLimitConfig> trafficLimitConfig_ = nullptr;
    std::shared_ptr<Models::CreateRulesRequestRulesRuleActionsTrafficMirrorConfig> trafficMirrorConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
