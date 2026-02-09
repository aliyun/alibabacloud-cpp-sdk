// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHTTPAPIROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHTTPAPIROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/HttpApiDeployConfig.hpp>
#include <alibabacloud/models/HttpRouteMatch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateHttpApiRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHttpApiRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_TO_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domainIds, domainIds_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(mcpRouteConfig, mcpRouteConfig_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(policyConfigs, policyConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHttpApiRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_FROM_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domainIds, domainIds_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(mcpRouteConfig, mcpRouteConfig_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(policyConfigs, policyConfigs_);
    };
    UpdateHttpApiRouteRequest() = default ;
    UpdateHttpApiRouteRequest(const UpdateHttpApiRouteRequest &) = default ;
    UpdateHttpApiRouteRequest(UpdateHttpApiRouteRequest &&) = default ;
    UpdateHttpApiRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHttpApiRouteRequest() = default ;
    UpdateHttpApiRouteRequest& operator=(const UpdateHttpApiRouteRequest &) = default ;
    UpdateHttpApiRouteRequest& operator=(UpdateHttpApiRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(aiCacheConfig, aiCacheConfig_);
        DARABONBA_PTR_TO_JSON(aiFallbackConfig, aiFallbackConfig_);
        DARABONBA_PTR_TO_JSON(aiNetworkSearchConfig, aiNetworkSearchConfig_);
        DARABONBA_PTR_TO_JSON(aiSecurityGuardConfig, aiSecurityGuardConfig_);
        DARABONBA_PTR_TO_JSON(aiStatisticsConfig, aiStatisticsConfig_);
        DARABONBA_PTR_TO_JSON(aiTokenRateLimitConfig, aiTokenRateLimitConfig_);
        DARABONBA_PTR_TO_JSON(aiToolSelectionConfig, aiToolSelectionConfig_);
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(semanticRouterConfig, semanticRouterConfig_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(aiCacheConfig, aiCacheConfig_);
        DARABONBA_PTR_FROM_JSON(aiFallbackConfig, aiFallbackConfig_);
        DARABONBA_PTR_FROM_JSON(aiNetworkSearchConfig, aiNetworkSearchConfig_);
        DARABONBA_PTR_FROM_JSON(aiSecurityGuardConfig, aiSecurityGuardConfig_);
        DARABONBA_PTR_FROM_JSON(aiStatisticsConfig, aiStatisticsConfig_);
        DARABONBA_PTR_FROM_JSON(aiTokenRateLimitConfig, aiTokenRateLimitConfig_);
        DARABONBA_PTR_FROM_JSON(aiToolSelectionConfig, aiToolSelectionConfig_);
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(semanticRouterConfig, semanticRouterConfig_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      PolicyConfigs() = default ;
      PolicyConfigs(const PolicyConfigs &) = default ;
      PolicyConfigs(PolicyConfigs &&) = default ;
      PolicyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyConfigs() = default ;
      PolicyConfigs& operator=(const PolicyConfigs &) = default ;
      PolicyConfigs& operator=(PolicyConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SemanticRouterConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SemanticRouterConfig& obj) { 
          DARABONBA_PTR_TO_JSON(timeoutMillisecond, timeoutMillisecond_);
        };
        friend void from_json(const Darabonba::Json& j, SemanticRouterConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(timeoutMillisecond, timeoutMillisecond_);
        };
        SemanticRouterConfig() = default ;
        SemanticRouterConfig(const SemanticRouterConfig &) = default ;
        SemanticRouterConfig(SemanticRouterConfig &&) = default ;
        SemanticRouterConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SemanticRouterConfig() = default ;
        SemanticRouterConfig& operator=(const SemanticRouterConfig &) = default ;
        SemanticRouterConfig& operator=(SemanticRouterConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->timeoutMillisecond_ == nullptr; };
        // timeoutMillisecond Field Functions 
        bool hasTimeoutMillisecond() const { return this->timeoutMillisecond_ != nullptr;};
        void deleteTimeoutMillisecond() { this->timeoutMillisecond_ = nullptr;};
        inline int32_t getTimeoutMillisecond() const { DARABONBA_PTR_GET_DEFAULT(timeoutMillisecond_, 0) };
        inline SemanticRouterConfig& setTimeoutMillisecond(int32_t timeoutMillisecond) { DARABONBA_PTR_SET_VALUE(timeoutMillisecond_, timeoutMillisecond) };


      protected:
        shared_ptr<int32_t> timeoutMillisecond_ {};
      };

      class AiToolSelectionConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiToolSelectionConfig& obj) { 
          DARABONBA_PTR_TO_JSON(enableConditions, enableConditions_);
          DARABONBA_PTR_TO_JSON(pluginStatus, pluginStatus_);
          DARABONBA_PTR_TO_JSON(queryRewriting, queryRewriting_);
          DARABONBA_PTR_TO_JSON(toolReranking, toolReranking_);
        };
        friend void from_json(const Darabonba::Json& j, AiToolSelectionConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(enableConditions, enableConditions_);
          DARABONBA_PTR_FROM_JSON(pluginStatus, pluginStatus_);
          DARABONBA_PTR_FROM_JSON(queryRewriting, queryRewriting_);
          DARABONBA_PTR_FROM_JSON(toolReranking, toolReranking_);
        };
        AiToolSelectionConfig() = default ;
        AiToolSelectionConfig(const AiToolSelectionConfig &) = default ;
        AiToolSelectionConfig(AiToolSelectionConfig &&) = default ;
        AiToolSelectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiToolSelectionConfig() = default ;
        AiToolSelectionConfig& operator=(const AiToolSelectionConfig &) = default ;
        AiToolSelectionConfig& operator=(AiToolSelectionConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ToolReranking : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ToolReranking& obj) { 
            DARABONBA_PTR_TO_JSON(fallbackStrategy, fallbackStrategy_);
            DARABONBA_PTR_TO_JSON(filteringMethod, filteringMethod_);
            DARABONBA_PTR_TO_JSON(modelService, modelService_);
            DARABONBA_PTR_TO_JSON(scoreThreshold, scoreThreshold_);
            DARABONBA_PTR_TO_JSON(topKPercent, topKPercent_);
            DARABONBA_PTR_TO_JSON(topNCount, topNCount_);
          };
          friend void from_json(const Darabonba::Json& j, ToolReranking& obj) { 
            DARABONBA_PTR_FROM_JSON(fallbackStrategy, fallbackStrategy_);
            DARABONBA_PTR_FROM_JSON(filteringMethod, filteringMethod_);
            DARABONBA_PTR_FROM_JSON(modelService, modelService_);
            DARABONBA_PTR_FROM_JSON(scoreThreshold, scoreThreshold_);
            DARABONBA_PTR_FROM_JSON(topKPercent, topKPercent_);
            DARABONBA_PTR_FROM_JSON(topNCount, topNCount_);
          };
          ToolReranking() = default ;
          ToolReranking(const ToolReranking &) = default ;
          ToolReranking(ToolReranking &&) = default ;
          ToolReranking(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ToolReranking() = default ;
          ToolReranking& operator=(const ToolReranking &) = default ;
          ToolReranking& operator=(ToolReranking &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ModelService : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ModelService& obj) { 
              DARABONBA_PTR_TO_JSON(modelName, modelName_);
              DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
              DARABONBA_PTR_TO_JSON(timeoutMillisecond, timeoutMillisecond_);
            };
            friend void from_json(const Darabonba::Json& j, ModelService& obj) { 
              DARABONBA_PTR_FROM_JSON(modelName, modelName_);
              DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
              DARABONBA_PTR_FROM_JSON(timeoutMillisecond, timeoutMillisecond_);
            };
            ModelService() = default ;
            ModelService(const ModelService &) = default ;
            ModelService(ModelService &&) = default ;
            ModelService(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ModelService() = default ;
            ModelService& operator=(const ModelService &) = default ;
            ModelService& operator=(ModelService &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->modelName_ == nullptr
        && this->serviceId_ == nullptr && this->timeoutMillisecond_ == nullptr; };
            // modelName Field Functions 
            bool hasModelName() const { return this->modelName_ != nullptr;};
            void deleteModelName() { this->modelName_ = nullptr;};
            inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
            inline ModelService& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


            // serviceId Field Functions 
            bool hasServiceId() const { return this->serviceId_ != nullptr;};
            void deleteServiceId() { this->serviceId_ = nullptr;};
            inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
            inline ModelService& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


            // timeoutMillisecond Field Functions 
            bool hasTimeoutMillisecond() const { return this->timeoutMillisecond_ != nullptr;};
            void deleteTimeoutMillisecond() { this->timeoutMillisecond_ = nullptr;};
            inline int32_t getTimeoutMillisecond() const { DARABONBA_PTR_GET_DEFAULT(timeoutMillisecond_, 0) };
            inline ModelService& setTimeoutMillisecond(int32_t timeoutMillisecond) { DARABONBA_PTR_SET_VALUE(timeoutMillisecond_, timeoutMillisecond) };


          protected:
            shared_ptr<string> modelName_ {};
            shared_ptr<string> serviceId_ {};
            shared_ptr<int32_t> timeoutMillisecond_ {};
          };

          virtual bool empty() const override { return this->fallbackStrategy_ == nullptr
        && this->filteringMethod_ == nullptr && this->modelService_ == nullptr && this->scoreThreshold_ == nullptr && this->topKPercent_ == nullptr && this->topNCount_ == nullptr; };
          // fallbackStrategy Field Functions 
          bool hasFallbackStrategy() const { return this->fallbackStrategy_ != nullptr;};
          void deleteFallbackStrategy() { this->fallbackStrategy_ = nullptr;};
          inline string getFallbackStrategy() const { DARABONBA_PTR_GET_DEFAULT(fallbackStrategy_, "") };
          inline ToolReranking& setFallbackStrategy(string fallbackStrategy) { DARABONBA_PTR_SET_VALUE(fallbackStrategy_, fallbackStrategy) };


          // filteringMethod Field Functions 
          bool hasFilteringMethod() const { return this->filteringMethod_ != nullptr;};
          void deleteFilteringMethod() { this->filteringMethod_ = nullptr;};
          inline string getFilteringMethod() const { DARABONBA_PTR_GET_DEFAULT(filteringMethod_, "") };
          inline ToolReranking& setFilteringMethod(string filteringMethod) { DARABONBA_PTR_SET_VALUE(filteringMethod_, filteringMethod) };


          // modelService Field Functions 
          bool hasModelService() const { return this->modelService_ != nullptr;};
          void deleteModelService() { this->modelService_ = nullptr;};
          inline const ToolReranking::ModelService & getModelService() const { DARABONBA_PTR_GET_CONST(modelService_, ToolReranking::ModelService) };
          inline ToolReranking::ModelService getModelService() { DARABONBA_PTR_GET(modelService_, ToolReranking::ModelService) };
          inline ToolReranking& setModelService(const ToolReranking::ModelService & modelService) { DARABONBA_PTR_SET_VALUE(modelService_, modelService) };
          inline ToolReranking& setModelService(ToolReranking::ModelService && modelService) { DARABONBA_PTR_SET_RVALUE(modelService_, modelService) };


          // scoreThreshold Field Functions 
          bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
          void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
          inline float getScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, 0.0) };
          inline ToolReranking& setScoreThreshold(float scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


          // topKPercent Field Functions 
          bool hasTopKPercent() const { return this->topKPercent_ != nullptr;};
          void deleteTopKPercent() { this->topKPercent_ = nullptr;};
          inline int32_t getTopKPercent() const { DARABONBA_PTR_GET_DEFAULT(topKPercent_, 0) };
          inline ToolReranking& setTopKPercent(int32_t topKPercent) { DARABONBA_PTR_SET_VALUE(topKPercent_, topKPercent) };


          // topNCount Field Functions 
          bool hasTopNCount() const { return this->topNCount_ != nullptr;};
          void deleteTopNCount() { this->topNCount_ = nullptr;};
          inline int32_t getTopNCount() const { DARABONBA_PTR_GET_DEFAULT(topNCount_, 0) };
          inline ToolReranking& setTopNCount(int32_t topNCount) { DARABONBA_PTR_SET_VALUE(topNCount_, topNCount) };


        protected:
          shared_ptr<string> fallbackStrategy_ {};
          shared_ptr<string> filteringMethod_ {};
          shared_ptr<ToolReranking::ModelService> modelService_ {};
          shared_ptr<float> scoreThreshold_ {};
          shared_ptr<int32_t> topKPercent_ {};
          shared_ptr<int32_t> topNCount_ {};
        };

        class QueryRewriting : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const QueryRewriting& obj) { 
            DARABONBA_PTR_TO_JSON(contextSelection, contextSelection_);
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
            DARABONBA_PTR_TO_JSON(fallbackStrategy, fallbackStrategy_);
            DARABONBA_PTR_TO_JSON(maxOutputTokens, maxOutputTokens_);
            DARABONBA_PTR_TO_JSON(modelService, modelService_);
            DARABONBA_PTR_TO_JSON(promptConfig, promptConfig_);
            DARABONBA_PTR_TO_JSON(triggerConditions, triggerConditions_);
          };
          friend void from_json(const Darabonba::Json& j, QueryRewriting& obj) { 
            DARABONBA_PTR_FROM_JSON(contextSelection, contextSelection_);
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(fallbackStrategy, fallbackStrategy_);
            DARABONBA_PTR_FROM_JSON(maxOutputTokens, maxOutputTokens_);
            DARABONBA_PTR_FROM_JSON(modelService, modelService_);
            DARABONBA_PTR_FROM_JSON(promptConfig, promptConfig_);
            DARABONBA_PTR_FROM_JSON(triggerConditions, triggerConditions_);
          };
          QueryRewriting() = default ;
          QueryRewriting(const QueryRewriting &) = default ;
          QueryRewriting(QueryRewriting &&) = default ;
          QueryRewriting(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~QueryRewriting() = default ;
          QueryRewriting& operator=(const QueryRewriting &) = default ;
          QueryRewriting& operator=(QueryRewriting &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TriggerConditions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TriggerConditions& obj) { 
              DARABONBA_PTR_TO_JSON(messageCountThreshold, messageCountThreshold_);
            };
            friend void from_json(const Darabonba::Json& j, TriggerConditions& obj) { 
              DARABONBA_PTR_FROM_JSON(messageCountThreshold, messageCountThreshold_);
            };
            TriggerConditions() = default ;
            TriggerConditions(const TriggerConditions &) = default ;
            TriggerConditions(TriggerConditions &&) = default ;
            TriggerConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TriggerConditions() = default ;
            TriggerConditions& operator=(const TriggerConditions &) = default ;
            TriggerConditions& operator=(TriggerConditions &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->messageCountThreshold_ == nullptr; };
            // messageCountThreshold Field Functions 
            bool hasMessageCountThreshold() const { return this->messageCountThreshold_ != nullptr;};
            void deleteMessageCountThreshold() { this->messageCountThreshold_ = nullptr;};
            inline int32_t getMessageCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(messageCountThreshold_, 0) };
            inline TriggerConditions& setMessageCountThreshold(int32_t messageCountThreshold) { DARABONBA_PTR_SET_VALUE(messageCountThreshold_, messageCountThreshold) };


          protected:
            shared_ptr<int32_t> messageCountThreshold_ {};
          };

          class PromptConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PromptConfig& obj) { 
              DARABONBA_PTR_TO_JSON(customPrompt, customPrompt_);
              DARABONBA_PTR_TO_JSON(type, type_);
            };
            friend void from_json(const Darabonba::Json& j, PromptConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(customPrompt, customPrompt_);
              DARABONBA_PTR_FROM_JSON(type, type_);
            };
            PromptConfig() = default ;
            PromptConfig(const PromptConfig &) = default ;
            PromptConfig(PromptConfig &&) = default ;
            PromptConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PromptConfig() = default ;
            PromptConfig& operator=(const PromptConfig &) = default ;
            PromptConfig& operator=(PromptConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->customPrompt_ == nullptr
        && this->type_ == nullptr; };
            // customPrompt Field Functions 
            bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
            void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
            inline string getCustomPrompt() const { DARABONBA_PTR_GET_DEFAULT(customPrompt_, "") };
            inline PromptConfig& setCustomPrompt(string customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline PromptConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> customPrompt_ {};
            shared_ptr<string> type_ {};
          };

          class ModelService : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ModelService& obj) { 
              DARABONBA_PTR_TO_JSON(modelName, modelName_);
              DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
              DARABONBA_PTR_TO_JSON(timeoutMillisecond, timeoutMillisecond_);
            };
            friend void from_json(const Darabonba::Json& j, ModelService& obj) { 
              DARABONBA_PTR_FROM_JSON(modelName, modelName_);
              DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
              DARABONBA_PTR_FROM_JSON(timeoutMillisecond, timeoutMillisecond_);
            };
            ModelService() = default ;
            ModelService(const ModelService &) = default ;
            ModelService(ModelService &&) = default ;
            ModelService(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ModelService() = default ;
            ModelService& operator=(const ModelService &) = default ;
            ModelService& operator=(ModelService &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->modelName_ == nullptr
        && this->serviceId_ == nullptr && this->timeoutMillisecond_ == nullptr; };
            // modelName Field Functions 
            bool hasModelName() const { return this->modelName_ != nullptr;};
            void deleteModelName() { this->modelName_ = nullptr;};
            inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
            inline ModelService& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


            // serviceId Field Functions 
            bool hasServiceId() const { return this->serviceId_ != nullptr;};
            void deleteServiceId() { this->serviceId_ = nullptr;};
            inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
            inline ModelService& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


            // timeoutMillisecond Field Functions 
            bool hasTimeoutMillisecond() const { return this->timeoutMillisecond_ != nullptr;};
            void deleteTimeoutMillisecond() { this->timeoutMillisecond_ = nullptr;};
            inline int32_t getTimeoutMillisecond() const { DARABONBA_PTR_GET_DEFAULT(timeoutMillisecond_, 0) };
            inline ModelService& setTimeoutMillisecond(int32_t timeoutMillisecond) { DARABONBA_PTR_SET_VALUE(timeoutMillisecond_, timeoutMillisecond) };


          protected:
            shared_ptr<string> modelName_ {};
            shared_ptr<string> serviceId_ {};
            shared_ptr<int32_t> timeoutMillisecond_ {};
          };

          class ContextSelection : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ContextSelection& obj) { 
              DARABONBA_PTR_TO_JSON(type, type_);
              DARABONBA_PTR_TO_JSON(value, value_);
            };
            friend void from_json(const Darabonba::Json& j, ContextSelection& obj) { 
              DARABONBA_PTR_FROM_JSON(type, type_);
              DARABONBA_PTR_FROM_JSON(value, value_);
            };
            ContextSelection() = default ;
            ContextSelection(const ContextSelection &) = default ;
            ContextSelection(ContextSelection &&) = default ;
            ContextSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ContextSelection() = default ;
            ContextSelection& operator=(const ContextSelection &) = default ;
            ContextSelection& operator=(ContextSelection &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline ContextSelection& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
            inline ContextSelection& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> type_ {};
            shared_ptr<int32_t> value_ {};
          };

          virtual bool empty() const override { return this->contextSelection_ == nullptr
        && this->enabled_ == nullptr && this->fallbackStrategy_ == nullptr && this->maxOutputTokens_ == nullptr && this->modelService_ == nullptr && this->promptConfig_ == nullptr
        && this->triggerConditions_ == nullptr; };
          // contextSelection Field Functions 
          bool hasContextSelection() const { return this->contextSelection_ != nullptr;};
          void deleteContextSelection() { this->contextSelection_ = nullptr;};
          inline const QueryRewriting::ContextSelection & getContextSelection() const { DARABONBA_PTR_GET_CONST(contextSelection_, QueryRewriting::ContextSelection) };
          inline QueryRewriting::ContextSelection getContextSelection() { DARABONBA_PTR_GET(contextSelection_, QueryRewriting::ContextSelection) };
          inline QueryRewriting& setContextSelection(const QueryRewriting::ContextSelection & contextSelection) { DARABONBA_PTR_SET_VALUE(contextSelection_, contextSelection) };
          inline QueryRewriting& setContextSelection(QueryRewriting::ContextSelection && contextSelection) { DARABONBA_PTR_SET_RVALUE(contextSelection_, contextSelection) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline QueryRewriting& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // fallbackStrategy Field Functions 
          bool hasFallbackStrategy() const { return this->fallbackStrategy_ != nullptr;};
          void deleteFallbackStrategy() { this->fallbackStrategy_ = nullptr;};
          inline string getFallbackStrategy() const { DARABONBA_PTR_GET_DEFAULT(fallbackStrategy_, "") };
          inline QueryRewriting& setFallbackStrategy(string fallbackStrategy) { DARABONBA_PTR_SET_VALUE(fallbackStrategy_, fallbackStrategy) };


          // maxOutputTokens Field Functions 
          bool hasMaxOutputTokens() const { return this->maxOutputTokens_ != nullptr;};
          void deleteMaxOutputTokens() { this->maxOutputTokens_ = nullptr;};
          inline int32_t getMaxOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(maxOutputTokens_, 0) };
          inline QueryRewriting& setMaxOutputTokens(int32_t maxOutputTokens) { DARABONBA_PTR_SET_VALUE(maxOutputTokens_, maxOutputTokens) };


          // modelService Field Functions 
          bool hasModelService() const { return this->modelService_ != nullptr;};
          void deleteModelService() { this->modelService_ = nullptr;};
          inline const QueryRewriting::ModelService & getModelService() const { DARABONBA_PTR_GET_CONST(modelService_, QueryRewriting::ModelService) };
          inline QueryRewriting::ModelService getModelService() { DARABONBA_PTR_GET(modelService_, QueryRewriting::ModelService) };
          inline QueryRewriting& setModelService(const QueryRewriting::ModelService & modelService) { DARABONBA_PTR_SET_VALUE(modelService_, modelService) };
          inline QueryRewriting& setModelService(QueryRewriting::ModelService && modelService) { DARABONBA_PTR_SET_RVALUE(modelService_, modelService) };


          // promptConfig Field Functions 
          bool hasPromptConfig() const { return this->promptConfig_ != nullptr;};
          void deletePromptConfig() { this->promptConfig_ = nullptr;};
          inline const QueryRewriting::PromptConfig & getPromptConfig() const { DARABONBA_PTR_GET_CONST(promptConfig_, QueryRewriting::PromptConfig) };
          inline QueryRewriting::PromptConfig getPromptConfig() { DARABONBA_PTR_GET(promptConfig_, QueryRewriting::PromptConfig) };
          inline QueryRewriting& setPromptConfig(const QueryRewriting::PromptConfig & promptConfig) { DARABONBA_PTR_SET_VALUE(promptConfig_, promptConfig) };
          inline QueryRewriting& setPromptConfig(QueryRewriting::PromptConfig && promptConfig) { DARABONBA_PTR_SET_RVALUE(promptConfig_, promptConfig) };


          // triggerConditions Field Functions 
          bool hasTriggerConditions() const { return this->triggerConditions_ != nullptr;};
          void deleteTriggerConditions() { this->triggerConditions_ = nullptr;};
          inline const QueryRewriting::TriggerConditions & getTriggerConditions() const { DARABONBA_PTR_GET_CONST(triggerConditions_, QueryRewriting::TriggerConditions) };
          inline QueryRewriting::TriggerConditions getTriggerConditions() { DARABONBA_PTR_GET(triggerConditions_, QueryRewriting::TriggerConditions) };
          inline QueryRewriting& setTriggerConditions(const QueryRewriting::TriggerConditions & triggerConditions) { DARABONBA_PTR_SET_VALUE(triggerConditions_, triggerConditions) };
          inline QueryRewriting& setTriggerConditions(QueryRewriting::TriggerConditions && triggerConditions) { DARABONBA_PTR_SET_RVALUE(triggerConditions_, triggerConditions) };


        protected:
          shared_ptr<QueryRewriting::ContextSelection> contextSelection_ {};
          shared_ptr<bool> enabled_ {};
          shared_ptr<string> fallbackStrategy_ {};
          shared_ptr<int32_t> maxOutputTokens_ {};
          shared_ptr<QueryRewriting::ModelService> modelService_ {};
          shared_ptr<QueryRewriting::PromptConfig> promptConfig_ {};
          shared_ptr<QueryRewriting::TriggerConditions> triggerConditions_ {};
        };

        class PluginStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PluginStatus& obj) { 
            DARABONBA_PTR_TO_JSON(errorLogs, errorLogs_);
            DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
            DARABONBA_PTR_TO_JSON(serviceHealthy, serviceHealthy_);
          };
          friend void from_json(const Darabonba::Json& j, PluginStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(errorLogs, errorLogs_);
            DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
            DARABONBA_PTR_FROM_JSON(serviceHealthy, serviceHealthy_);
          };
          PluginStatus() = default ;
          PluginStatus(const PluginStatus &) = default ;
          PluginStatus(PluginStatus &&) = default ;
          PluginStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PluginStatus() = default ;
          PluginStatus& operator=(const PluginStatus &) = default ;
          PluginStatus& operator=(PluginStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorLogs_ == nullptr
        && this->pluginId_ == nullptr && this->serviceHealthy_ == nullptr; };
          // errorLogs Field Functions 
          bool hasErrorLogs() const { return this->errorLogs_ != nullptr;};
          void deleteErrorLogs() { this->errorLogs_ = nullptr;};
          inline const map<string, string> & getErrorLogs() const { DARABONBA_PTR_GET_CONST(errorLogs_, map<string, string>) };
          inline map<string, string> getErrorLogs() { DARABONBA_PTR_GET(errorLogs_, map<string, string>) };
          inline PluginStatus& setErrorLogs(const map<string, string> & errorLogs) { DARABONBA_PTR_SET_VALUE(errorLogs_, errorLogs) };
          inline PluginStatus& setErrorLogs(map<string, string> && errorLogs) { DARABONBA_PTR_SET_RVALUE(errorLogs_, errorLogs) };


          // pluginId Field Functions 
          bool hasPluginId() const { return this->pluginId_ != nullptr;};
          void deletePluginId() { this->pluginId_ = nullptr;};
          inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
          inline PluginStatus& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


          // serviceHealthy Field Functions 
          bool hasServiceHealthy() const { return this->serviceHealthy_ != nullptr;};
          void deleteServiceHealthy() { this->serviceHealthy_ = nullptr;};
          inline bool getServiceHealthy() const { DARABONBA_PTR_GET_DEFAULT(serviceHealthy_, false) };
          inline PluginStatus& setServiceHealthy(bool serviceHealthy) { DARABONBA_PTR_SET_VALUE(serviceHealthy_, serviceHealthy) };


        protected:
          shared_ptr<map<string, string>> errorLogs_ {};
          shared_ptr<string> pluginId_ {};
          shared_ptr<bool> serviceHealthy_ {};
        };

        class EnableConditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EnableConditions& obj) { 
            DARABONBA_PTR_TO_JSON(toolCountThreshold, toolCountThreshold_);
          };
          friend void from_json(const Darabonba::Json& j, EnableConditions& obj) { 
            DARABONBA_PTR_FROM_JSON(toolCountThreshold, toolCountThreshold_);
          };
          EnableConditions() = default ;
          EnableConditions(const EnableConditions &) = default ;
          EnableConditions(EnableConditions &&) = default ;
          EnableConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EnableConditions() = default ;
          EnableConditions& operator=(const EnableConditions &) = default ;
          EnableConditions& operator=(EnableConditions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->toolCountThreshold_ == nullptr; };
          // toolCountThreshold Field Functions 
          bool hasToolCountThreshold() const { return this->toolCountThreshold_ != nullptr;};
          void deleteToolCountThreshold() { this->toolCountThreshold_ = nullptr;};
          inline int32_t getToolCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(toolCountThreshold_, 0) };
          inline EnableConditions& setToolCountThreshold(int32_t toolCountThreshold) { DARABONBA_PTR_SET_VALUE(toolCountThreshold_, toolCountThreshold) };


        protected:
          shared_ptr<int32_t> toolCountThreshold_ {};
        };

        virtual bool empty() const override { return this->enableConditions_ == nullptr
        && this->pluginStatus_ == nullptr && this->queryRewriting_ == nullptr && this->toolReranking_ == nullptr; };
        // enableConditions Field Functions 
        bool hasEnableConditions() const { return this->enableConditions_ != nullptr;};
        void deleteEnableConditions() { this->enableConditions_ = nullptr;};
        inline const AiToolSelectionConfig::EnableConditions & getEnableConditions() const { DARABONBA_PTR_GET_CONST(enableConditions_, AiToolSelectionConfig::EnableConditions) };
        inline AiToolSelectionConfig::EnableConditions getEnableConditions() { DARABONBA_PTR_GET(enableConditions_, AiToolSelectionConfig::EnableConditions) };
        inline AiToolSelectionConfig& setEnableConditions(const AiToolSelectionConfig::EnableConditions & enableConditions) { DARABONBA_PTR_SET_VALUE(enableConditions_, enableConditions) };
        inline AiToolSelectionConfig& setEnableConditions(AiToolSelectionConfig::EnableConditions && enableConditions) { DARABONBA_PTR_SET_RVALUE(enableConditions_, enableConditions) };


        // pluginStatus Field Functions 
        bool hasPluginStatus() const { return this->pluginStatus_ != nullptr;};
        void deletePluginStatus() { this->pluginStatus_ = nullptr;};
        inline const AiToolSelectionConfig::PluginStatus & getPluginStatus() const { DARABONBA_PTR_GET_CONST(pluginStatus_, AiToolSelectionConfig::PluginStatus) };
        inline AiToolSelectionConfig::PluginStatus getPluginStatus() { DARABONBA_PTR_GET(pluginStatus_, AiToolSelectionConfig::PluginStatus) };
        inline AiToolSelectionConfig& setPluginStatus(const AiToolSelectionConfig::PluginStatus & pluginStatus) { DARABONBA_PTR_SET_VALUE(pluginStatus_, pluginStatus) };
        inline AiToolSelectionConfig& setPluginStatus(AiToolSelectionConfig::PluginStatus && pluginStatus) { DARABONBA_PTR_SET_RVALUE(pluginStatus_, pluginStatus) };


        // queryRewriting Field Functions 
        bool hasQueryRewriting() const { return this->queryRewriting_ != nullptr;};
        void deleteQueryRewriting() { this->queryRewriting_ = nullptr;};
        inline const AiToolSelectionConfig::QueryRewriting & getQueryRewriting() const { DARABONBA_PTR_GET_CONST(queryRewriting_, AiToolSelectionConfig::QueryRewriting) };
        inline AiToolSelectionConfig::QueryRewriting getQueryRewriting() { DARABONBA_PTR_GET(queryRewriting_, AiToolSelectionConfig::QueryRewriting) };
        inline AiToolSelectionConfig& setQueryRewriting(const AiToolSelectionConfig::QueryRewriting & queryRewriting) { DARABONBA_PTR_SET_VALUE(queryRewriting_, queryRewriting) };
        inline AiToolSelectionConfig& setQueryRewriting(AiToolSelectionConfig::QueryRewriting && queryRewriting) { DARABONBA_PTR_SET_RVALUE(queryRewriting_, queryRewriting) };


        // toolReranking Field Functions 
        bool hasToolReranking() const { return this->toolReranking_ != nullptr;};
        void deleteToolReranking() { this->toolReranking_ = nullptr;};
        inline const AiToolSelectionConfig::ToolReranking & getToolReranking() const { DARABONBA_PTR_GET_CONST(toolReranking_, AiToolSelectionConfig::ToolReranking) };
        inline AiToolSelectionConfig::ToolReranking getToolReranking() { DARABONBA_PTR_GET(toolReranking_, AiToolSelectionConfig::ToolReranking) };
        inline AiToolSelectionConfig& setToolReranking(const AiToolSelectionConfig::ToolReranking & toolReranking) { DARABONBA_PTR_SET_VALUE(toolReranking_, toolReranking) };
        inline AiToolSelectionConfig& setToolReranking(AiToolSelectionConfig::ToolReranking && toolReranking) { DARABONBA_PTR_SET_RVALUE(toolReranking_, toolReranking) };


      protected:
        shared_ptr<AiToolSelectionConfig::EnableConditions> enableConditions_ {};
        shared_ptr<AiToolSelectionConfig::PluginStatus> pluginStatus_ {};
        shared_ptr<AiToolSelectionConfig::QueryRewriting> queryRewriting_ {};
        shared_ptr<AiToolSelectionConfig::ToolReranking> toolReranking_ {};
      };

      class AiTokenRateLimitConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiTokenRateLimitConfig& obj) { 
          DARABONBA_PTR_TO_JSON(enableGlobalRules, enableGlobalRules_);
          DARABONBA_PTR_TO_JSON(globalRules, globalRules_);
          DARABONBA_PTR_TO_JSON(pluginStatus, pluginStatus_);
          DARABONBA_PTR_TO_JSON(redisConfig, redisConfig_);
          DARABONBA_PTR_TO_JSON(rules, rules_);
        };
        friend void from_json(const Darabonba::Json& j, AiTokenRateLimitConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(enableGlobalRules, enableGlobalRules_);
          DARABONBA_PTR_FROM_JSON(globalRules, globalRules_);
          DARABONBA_PTR_FROM_JSON(pluginStatus, pluginStatus_);
          DARABONBA_PTR_FROM_JSON(redisConfig, redisConfig_);
          DARABONBA_PTR_FROM_JSON(rules, rules_);
        };
        AiTokenRateLimitConfig() = default ;
        AiTokenRateLimitConfig(const AiTokenRateLimitConfig &) = default ;
        AiTokenRateLimitConfig(AiTokenRateLimitConfig &&) = default ;
        AiTokenRateLimitConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiTokenRateLimitConfig() = default ;
        AiTokenRateLimitConfig& operator=(const AiTokenRateLimitConfig &) = default ;
        AiTokenRateLimitConfig& operator=(AiTokenRateLimitConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rules& obj) { 
            DARABONBA_PTR_TO_JSON(limitMode, limitMode_);
            DARABONBA_PTR_TO_JSON(limitType, limitType_);
            DARABONBA_PTR_TO_JSON(limitValue, limitValue_);
            DARABONBA_PTR_TO_JSON(matchKey, matchKey_);
            DARABONBA_PTR_TO_JSON(matchType, matchType_);
            DARABONBA_PTR_TO_JSON(matchValue, matchValue_);
          };
          friend void from_json(const Darabonba::Json& j, Rules& obj) { 
            DARABONBA_PTR_FROM_JSON(limitMode, limitMode_);
            DARABONBA_PTR_FROM_JSON(limitType, limitType_);
            DARABONBA_PTR_FROM_JSON(limitValue, limitValue_);
            DARABONBA_PTR_FROM_JSON(matchKey, matchKey_);
            DARABONBA_PTR_FROM_JSON(matchType, matchType_);
            DARABONBA_PTR_FROM_JSON(matchValue, matchValue_);
          };
          Rules() = default ;
          Rules(const Rules &) = default ;
          Rules(Rules &&) = default ;
          Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rules() = default ;
          Rules& operator=(const Rules &) = default ;
          Rules& operator=(Rules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->limitMode_ == nullptr
        && this->limitType_ == nullptr && this->limitValue_ == nullptr && this->matchKey_ == nullptr && this->matchType_ == nullptr && this->matchValue_ == nullptr; };
          // limitMode Field Functions 
          bool hasLimitMode() const { return this->limitMode_ != nullptr;};
          void deleteLimitMode() { this->limitMode_ = nullptr;};
          inline string getLimitMode() const { DARABONBA_PTR_GET_DEFAULT(limitMode_, "") };
          inline Rules& setLimitMode(string limitMode) { DARABONBA_PTR_SET_VALUE(limitMode_, limitMode) };


          // limitType Field Functions 
          bool hasLimitType() const { return this->limitType_ != nullptr;};
          void deleteLimitType() { this->limitType_ = nullptr;};
          inline string getLimitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
          inline Rules& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


          // limitValue Field Functions 
          bool hasLimitValue() const { return this->limitValue_ != nullptr;};
          void deleteLimitValue() { this->limitValue_ = nullptr;};
          inline int32_t getLimitValue() const { DARABONBA_PTR_GET_DEFAULT(limitValue_, 0) };
          inline Rules& setLimitValue(int32_t limitValue) { DARABONBA_PTR_SET_VALUE(limitValue_, limitValue) };


          // matchKey Field Functions 
          bool hasMatchKey() const { return this->matchKey_ != nullptr;};
          void deleteMatchKey() { this->matchKey_ = nullptr;};
          inline string getMatchKey() const { DARABONBA_PTR_GET_DEFAULT(matchKey_, "") };
          inline Rules& setMatchKey(string matchKey) { DARABONBA_PTR_SET_VALUE(matchKey_, matchKey) };


          // matchType Field Functions 
          bool hasMatchType() const { return this->matchType_ != nullptr;};
          void deleteMatchType() { this->matchType_ = nullptr;};
          inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
          inline Rules& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


          // matchValue Field Functions 
          bool hasMatchValue() const { return this->matchValue_ != nullptr;};
          void deleteMatchValue() { this->matchValue_ = nullptr;};
          inline string getMatchValue() const { DARABONBA_PTR_GET_DEFAULT(matchValue_, "") };
          inline Rules& setMatchValue(string matchValue) { DARABONBA_PTR_SET_VALUE(matchValue_, matchValue) };


        protected:
          shared_ptr<string> limitMode_ {};
          shared_ptr<string> limitType_ {};
          shared_ptr<int32_t> limitValue_ {};
          shared_ptr<string> matchKey_ {};
          shared_ptr<string> matchType_ {};
          shared_ptr<string> matchValue_ {};
        };

        class RedisConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RedisConfig& obj) { 
            DARABONBA_PTR_TO_JSON(databaseNumber, databaseNumber_);
            DARABONBA_PTR_TO_JSON(host, host_);
            DARABONBA_PTR_TO_JSON(password, password_);
            DARABONBA_PTR_TO_JSON(port, port_);
            DARABONBA_PTR_TO_JSON(timeout, timeout_);
            DARABONBA_PTR_TO_JSON(username, username_);
          };
          friend void from_json(const Darabonba::Json& j, RedisConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(databaseNumber, databaseNumber_);
            DARABONBA_PTR_FROM_JSON(host, host_);
            DARABONBA_PTR_FROM_JSON(password, password_);
            DARABONBA_PTR_FROM_JSON(port, port_);
            DARABONBA_PTR_FROM_JSON(timeout, timeout_);
            DARABONBA_PTR_FROM_JSON(username, username_);
          };
          RedisConfig() = default ;
          RedisConfig(const RedisConfig &) = default ;
          RedisConfig(RedisConfig &&) = default ;
          RedisConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RedisConfig() = default ;
          RedisConfig& operator=(const RedisConfig &) = default ;
          RedisConfig& operator=(RedisConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->databaseNumber_ == nullptr
        && this->host_ == nullptr && this->password_ == nullptr && this->port_ == nullptr && this->timeout_ == nullptr && this->username_ == nullptr; };
          // databaseNumber Field Functions 
          bool hasDatabaseNumber() const { return this->databaseNumber_ != nullptr;};
          void deleteDatabaseNumber() { this->databaseNumber_ = nullptr;};
          inline int32_t getDatabaseNumber() const { DARABONBA_PTR_GET_DEFAULT(databaseNumber_, 0) };
          inline RedisConfig& setDatabaseNumber(int32_t databaseNumber) { DARABONBA_PTR_SET_VALUE(databaseNumber_, databaseNumber) };


          // host Field Functions 
          bool hasHost() const { return this->host_ != nullptr;};
          void deleteHost() { this->host_ = nullptr;};
          inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
          inline RedisConfig& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


          // password Field Functions 
          bool hasPassword() const { return this->password_ != nullptr;};
          void deletePassword() { this->password_ = nullptr;};
          inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
          inline RedisConfig& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline RedisConfig& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // timeout Field Functions 
          bool hasTimeout() const { return this->timeout_ != nullptr;};
          void deleteTimeout() { this->timeout_ = nullptr;};
          inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
          inline RedisConfig& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


          // username Field Functions 
          bool hasUsername() const { return this->username_ != nullptr;};
          void deleteUsername() { this->username_ = nullptr;};
          inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
          inline RedisConfig& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


        protected:
          shared_ptr<int32_t> databaseNumber_ {};
          shared_ptr<string> host_ {};
          shared_ptr<string> password_ {};
          shared_ptr<int32_t> port_ {};
          shared_ptr<int32_t> timeout_ {};
          shared_ptr<string> username_ {};
        };

        class PluginStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PluginStatus& obj) { 
            DARABONBA_PTR_TO_JSON(errorLogs, errorLogs_);
            DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
            DARABONBA_PTR_TO_JSON(serviceHealthy, serviceHealthy_);
          };
          friend void from_json(const Darabonba::Json& j, PluginStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(errorLogs, errorLogs_);
            DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
            DARABONBA_PTR_FROM_JSON(serviceHealthy, serviceHealthy_);
          };
          PluginStatus() = default ;
          PluginStatus(const PluginStatus &) = default ;
          PluginStatus(PluginStatus &&) = default ;
          PluginStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PluginStatus() = default ;
          PluginStatus& operator=(const PluginStatus &) = default ;
          PluginStatus& operator=(PluginStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorLogs_ == nullptr
        && this->pluginId_ == nullptr && this->serviceHealthy_ == nullptr; };
          // errorLogs Field Functions 
          bool hasErrorLogs() const { return this->errorLogs_ != nullptr;};
          void deleteErrorLogs() { this->errorLogs_ = nullptr;};
          inline const map<string, string> & getErrorLogs() const { DARABONBA_PTR_GET_CONST(errorLogs_, map<string, string>) };
          inline map<string, string> getErrorLogs() { DARABONBA_PTR_GET(errorLogs_, map<string, string>) };
          inline PluginStatus& setErrorLogs(const map<string, string> & errorLogs) { DARABONBA_PTR_SET_VALUE(errorLogs_, errorLogs) };
          inline PluginStatus& setErrorLogs(map<string, string> && errorLogs) { DARABONBA_PTR_SET_RVALUE(errorLogs_, errorLogs) };


          // pluginId Field Functions 
          bool hasPluginId() const { return this->pluginId_ != nullptr;};
          void deletePluginId() { this->pluginId_ = nullptr;};
          inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
          inline PluginStatus& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


          // serviceHealthy Field Functions 
          bool hasServiceHealthy() const { return this->serviceHealthy_ != nullptr;};
          void deleteServiceHealthy() { this->serviceHealthy_ = nullptr;};
          inline bool getServiceHealthy() const { DARABONBA_PTR_GET_DEFAULT(serviceHealthy_, false) };
          inline PluginStatus& setServiceHealthy(bool serviceHealthy) { DARABONBA_PTR_SET_VALUE(serviceHealthy_, serviceHealthy) };


        protected:
          shared_ptr<map<string, string>> errorLogs_ {};
          shared_ptr<string> pluginId_ {};
          shared_ptr<bool> serviceHealthy_ {};
        };

        class GlobalRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const GlobalRules& obj) { 
            DARABONBA_PTR_TO_JSON(limitMode, limitMode_);
            DARABONBA_PTR_TO_JSON(limitType, limitType_);
            DARABONBA_PTR_TO_JSON(limitValue, limitValue_);
            DARABONBA_PTR_TO_JSON(matchKey, matchKey_);
            DARABONBA_PTR_TO_JSON(matchType, matchType_);
            DARABONBA_PTR_TO_JSON(matchValue, matchValue_);
          };
          friend void from_json(const Darabonba::Json& j, GlobalRules& obj) { 
            DARABONBA_PTR_FROM_JSON(limitMode, limitMode_);
            DARABONBA_PTR_FROM_JSON(limitType, limitType_);
            DARABONBA_PTR_FROM_JSON(limitValue, limitValue_);
            DARABONBA_PTR_FROM_JSON(matchKey, matchKey_);
            DARABONBA_PTR_FROM_JSON(matchType, matchType_);
            DARABONBA_PTR_FROM_JSON(matchValue, matchValue_);
          };
          GlobalRules() = default ;
          GlobalRules(const GlobalRules &) = default ;
          GlobalRules(GlobalRules &&) = default ;
          GlobalRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~GlobalRules() = default ;
          GlobalRules& operator=(const GlobalRules &) = default ;
          GlobalRules& operator=(GlobalRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->limitMode_ == nullptr
        && this->limitType_ == nullptr && this->limitValue_ == nullptr && this->matchKey_ == nullptr && this->matchType_ == nullptr && this->matchValue_ == nullptr; };
          // limitMode Field Functions 
          bool hasLimitMode() const { return this->limitMode_ != nullptr;};
          void deleteLimitMode() { this->limitMode_ = nullptr;};
          inline string getLimitMode() const { DARABONBA_PTR_GET_DEFAULT(limitMode_, "") };
          inline GlobalRules& setLimitMode(string limitMode) { DARABONBA_PTR_SET_VALUE(limitMode_, limitMode) };


          // limitType Field Functions 
          bool hasLimitType() const { return this->limitType_ != nullptr;};
          void deleteLimitType() { this->limitType_ = nullptr;};
          inline string getLimitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
          inline GlobalRules& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


          // limitValue Field Functions 
          bool hasLimitValue() const { return this->limitValue_ != nullptr;};
          void deleteLimitValue() { this->limitValue_ = nullptr;};
          inline int32_t getLimitValue() const { DARABONBA_PTR_GET_DEFAULT(limitValue_, 0) };
          inline GlobalRules& setLimitValue(int32_t limitValue) { DARABONBA_PTR_SET_VALUE(limitValue_, limitValue) };


          // matchKey Field Functions 
          bool hasMatchKey() const { return this->matchKey_ != nullptr;};
          void deleteMatchKey() { this->matchKey_ = nullptr;};
          inline string getMatchKey() const { DARABONBA_PTR_GET_DEFAULT(matchKey_, "") };
          inline GlobalRules& setMatchKey(string matchKey) { DARABONBA_PTR_SET_VALUE(matchKey_, matchKey) };


          // matchType Field Functions 
          bool hasMatchType() const { return this->matchType_ != nullptr;};
          void deleteMatchType() { this->matchType_ = nullptr;};
          inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
          inline GlobalRules& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


          // matchValue Field Functions 
          bool hasMatchValue() const { return this->matchValue_ != nullptr;};
          void deleteMatchValue() { this->matchValue_ = nullptr;};
          inline string getMatchValue() const { DARABONBA_PTR_GET_DEFAULT(matchValue_, "") };
          inline GlobalRules& setMatchValue(string matchValue) { DARABONBA_PTR_SET_VALUE(matchValue_, matchValue) };


        protected:
          shared_ptr<string> limitMode_ {};
          shared_ptr<string> limitType_ {};
          shared_ptr<int32_t> limitValue_ {};
          shared_ptr<string> matchKey_ {};
          shared_ptr<string> matchType_ {};
          shared_ptr<string> matchValue_ {};
        };

        virtual bool empty() const override { return this->enableGlobalRules_ == nullptr
        && this->globalRules_ == nullptr && this->pluginStatus_ == nullptr && this->redisConfig_ == nullptr && this->rules_ == nullptr; };
        // enableGlobalRules Field Functions 
        bool hasEnableGlobalRules() const { return this->enableGlobalRules_ != nullptr;};
        void deleteEnableGlobalRules() { this->enableGlobalRules_ = nullptr;};
        inline bool getEnableGlobalRules() const { DARABONBA_PTR_GET_DEFAULT(enableGlobalRules_, false) };
        inline AiTokenRateLimitConfig& setEnableGlobalRules(bool enableGlobalRules) { DARABONBA_PTR_SET_VALUE(enableGlobalRules_, enableGlobalRules) };


        // globalRules Field Functions 
        bool hasGlobalRules() const { return this->globalRules_ != nullptr;};
        void deleteGlobalRules() { this->globalRules_ = nullptr;};
        inline const vector<AiTokenRateLimitConfig::GlobalRules> & getGlobalRules() const { DARABONBA_PTR_GET_CONST(globalRules_, vector<AiTokenRateLimitConfig::GlobalRules>) };
        inline vector<AiTokenRateLimitConfig::GlobalRules> getGlobalRules() { DARABONBA_PTR_GET(globalRules_, vector<AiTokenRateLimitConfig::GlobalRules>) };
        inline AiTokenRateLimitConfig& setGlobalRules(const vector<AiTokenRateLimitConfig::GlobalRules> & globalRules) { DARABONBA_PTR_SET_VALUE(globalRules_, globalRules) };
        inline AiTokenRateLimitConfig& setGlobalRules(vector<AiTokenRateLimitConfig::GlobalRules> && globalRules) { DARABONBA_PTR_SET_RVALUE(globalRules_, globalRules) };


        // pluginStatus Field Functions 
        bool hasPluginStatus() const { return this->pluginStatus_ != nullptr;};
        void deletePluginStatus() { this->pluginStatus_ = nullptr;};
        inline const AiTokenRateLimitConfig::PluginStatus & getPluginStatus() const { DARABONBA_PTR_GET_CONST(pluginStatus_, AiTokenRateLimitConfig::PluginStatus) };
        inline AiTokenRateLimitConfig::PluginStatus getPluginStatus() { DARABONBA_PTR_GET(pluginStatus_, AiTokenRateLimitConfig::PluginStatus) };
        inline AiTokenRateLimitConfig& setPluginStatus(const AiTokenRateLimitConfig::PluginStatus & pluginStatus) { DARABONBA_PTR_SET_VALUE(pluginStatus_, pluginStatus) };
        inline AiTokenRateLimitConfig& setPluginStatus(AiTokenRateLimitConfig::PluginStatus && pluginStatus) { DARABONBA_PTR_SET_RVALUE(pluginStatus_, pluginStatus) };


        // redisConfig Field Functions 
        bool hasRedisConfig() const { return this->redisConfig_ != nullptr;};
        void deleteRedisConfig() { this->redisConfig_ = nullptr;};
        inline const AiTokenRateLimitConfig::RedisConfig & getRedisConfig() const { DARABONBA_PTR_GET_CONST(redisConfig_, AiTokenRateLimitConfig::RedisConfig) };
        inline AiTokenRateLimitConfig::RedisConfig getRedisConfig() { DARABONBA_PTR_GET(redisConfig_, AiTokenRateLimitConfig::RedisConfig) };
        inline AiTokenRateLimitConfig& setRedisConfig(const AiTokenRateLimitConfig::RedisConfig & redisConfig) { DARABONBA_PTR_SET_VALUE(redisConfig_, redisConfig) };
        inline AiTokenRateLimitConfig& setRedisConfig(AiTokenRateLimitConfig::RedisConfig && redisConfig) { DARABONBA_PTR_SET_RVALUE(redisConfig_, redisConfig) };


        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline const vector<AiTokenRateLimitConfig::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<AiTokenRateLimitConfig::Rules>) };
        inline vector<AiTokenRateLimitConfig::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<AiTokenRateLimitConfig::Rules>) };
        inline AiTokenRateLimitConfig& setRules(const vector<AiTokenRateLimitConfig::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
        inline AiTokenRateLimitConfig& setRules(vector<AiTokenRateLimitConfig::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      protected:
        shared_ptr<bool> enableGlobalRules_ {};
        shared_ptr<vector<AiTokenRateLimitConfig::GlobalRules>> globalRules_ {};
        shared_ptr<AiTokenRateLimitConfig::PluginStatus> pluginStatus_ {};
        shared_ptr<AiTokenRateLimitConfig::RedisConfig> redisConfig_ {};
        shared_ptr<vector<AiTokenRateLimitConfig::Rules>> rules_ {};
      };

      class AiStatisticsConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiStatisticsConfig& obj) { 
          DARABONBA_PTR_TO_JSON(logRequestContent, logRequestContent_);
          DARABONBA_PTR_TO_JSON(logResponseContent, logResponseContent_);
        };
        friend void from_json(const Darabonba::Json& j, AiStatisticsConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(logRequestContent, logRequestContent_);
          DARABONBA_PTR_FROM_JSON(logResponseContent, logResponseContent_);
        };
        AiStatisticsConfig() = default ;
        AiStatisticsConfig(const AiStatisticsConfig &) = default ;
        AiStatisticsConfig(AiStatisticsConfig &&) = default ;
        AiStatisticsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiStatisticsConfig() = default ;
        AiStatisticsConfig& operator=(const AiStatisticsConfig &) = default ;
        AiStatisticsConfig& operator=(AiStatisticsConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logRequestContent_ == nullptr
        && this->logResponseContent_ == nullptr; };
        // logRequestContent Field Functions 
        bool hasLogRequestContent() const { return this->logRequestContent_ != nullptr;};
        void deleteLogRequestContent() { this->logRequestContent_ = nullptr;};
        inline bool getLogRequestContent() const { DARABONBA_PTR_GET_DEFAULT(logRequestContent_, false) };
        inline AiStatisticsConfig& setLogRequestContent(bool logRequestContent) { DARABONBA_PTR_SET_VALUE(logRequestContent_, logRequestContent) };


        // logResponseContent Field Functions 
        bool hasLogResponseContent() const { return this->logResponseContent_ != nullptr;};
        void deleteLogResponseContent() { this->logResponseContent_ = nullptr;};
        inline bool getLogResponseContent() const { DARABONBA_PTR_GET_DEFAULT(logResponseContent_, false) };
        inline AiStatisticsConfig& setLogResponseContent(bool logResponseContent) { DARABONBA_PTR_SET_VALUE(logResponseContent_, logResponseContent) };


      protected:
        shared_ptr<bool> logRequestContent_ {};
        shared_ptr<bool> logResponseContent_ {};
      };

      class AiSecurityGuardConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiSecurityGuardConfig& obj) { 
          DARABONBA_PTR_TO_JSON(bufferLimit, bufferLimit_);
          DARABONBA_PTR_TO_JSON(checkRequest, checkRequest_);
          DARABONBA_PTR_TO_JSON(checkRequestImage, checkRequestImage_);
          DARABONBA_PTR_TO_JSON(checkResponse, checkResponse_);
          DARABONBA_PTR_TO_JSON(checkResponseImage, checkResponseImage_);
          DARABONBA_PTR_TO_JSON(consumerRequestCheckService, consumerRequestCheckService_);
          DARABONBA_PTR_TO_JSON(consumerResponseCheckService, consumerResponseCheckService_);
          DARABONBA_PTR_TO_JSON(consumerRiskLevel, consumerRiskLevel_);
          DARABONBA_PTR_TO_JSON(pluginStatus, pluginStatus_);
          DARABONBA_PTR_TO_JSON(requestCheckService, requestCheckService_);
          DARABONBA_PTR_TO_JSON(requestImageCheckService, requestImageCheckService_);
          DARABONBA_PTR_TO_JSON(responseCheckService, responseCheckService_);
          DARABONBA_PTR_TO_JSON(responseImageCheckService, responseImageCheckService_);
          DARABONBA_PTR_TO_JSON(riskAlertLevel, riskAlertLevel_);
          DARABONBA_PTR_TO_JSON(riskConfig, riskConfig_);
          DARABONBA_PTR_TO_JSON(serviceAddress, serviceAddress_);
        };
        friend void from_json(const Darabonba::Json& j, AiSecurityGuardConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(bufferLimit, bufferLimit_);
          DARABONBA_PTR_FROM_JSON(checkRequest, checkRequest_);
          DARABONBA_PTR_FROM_JSON(checkRequestImage, checkRequestImage_);
          DARABONBA_PTR_FROM_JSON(checkResponse, checkResponse_);
          DARABONBA_PTR_FROM_JSON(checkResponseImage, checkResponseImage_);
          DARABONBA_PTR_FROM_JSON(consumerRequestCheckService, consumerRequestCheckService_);
          DARABONBA_PTR_FROM_JSON(consumerResponseCheckService, consumerResponseCheckService_);
          DARABONBA_PTR_FROM_JSON(consumerRiskLevel, consumerRiskLevel_);
          DARABONBA_PTR_FROM_JSON(pluginStatus, pluginStatus_);
          DARABONBA_PTR_FROM_JSON(requestCheckService, requestCheckService_);
          DARABONBA_PTR_FROM_JSON(requestImageCheckService, requestImageCheckService_);
          DARABONBA_PTR_FROM_JSON(responseCheckService, responseCheckService_);
          DARABONBA_PTR_FROM_JSON(responseImageCheckService, responseImageCheckService_);
          DARABONBA_PTR_FROM_JSON(riskAlertLevel, riskAlertLevel_);
          DARABONBA_PTR_FROM_JSON(riskConfig, riskConfig_);
          DARABONBA_PTR_FROM_JSON(serviceAddress, serviceAddress_);
        };
        AiSecurityGuardConfig() = default ;
        AiSecurityGuardConfig(const AiSecurityGuardConfig &) = default ;
        AiSecurityGuardConfig(AiSecurityGuardConfig &&) = default ;
        AiSecurityGuardConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiSecurityGuardConfig() = default ;
        AiSecurityGuardConfig& operator=(const AiSecurityGuardConfig &) = default ;
        AiSecurityGuardConfig& operator=(AiSecurityGuardConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RiskConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RiskConfig& obj) { 
            DARABONBA_PTR_TO_JSON(consumerRules, consumerRules_);
            DARABONBA_PTR_TO_JSON(level, level_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, RiskConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(consumerRules, consumerRules_);
            DARABONBA_PTR_FROM_JSON(level, level_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          RiskConfig() = default ;
          RiskConfig(const RiskConfig &) = default ;
          RiskConfig(RiskConfig &&) = default ;
          RiskConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RiskConfig() = default ;
          RiskConfig& operator=(const RiskConfig &) = default ;
          RiskConfig& operator=(RiskConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ConsumerRules : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ConsumerRules& obj) { 
              DARABONBA_PTR_TO_JSON(matchType, matchType_);
              DARABONBA_PTR_TO_JSON(pattern, pattern_);
            };
            friend void from_json(const Darabonba::Json& j, ConsumerRules& obj) { 
              DARABONBA_PTR_FROM_JSON(matchType, matchType_);
              DARABONBA_PTR_FROM_JSON(pattern, pattern_);
            };
            ConsumerRules() = default ;
            ConsumerRules(const ConsumerRules &) = default ;
            ConsumerRules(ConsumerRules &&) = default ;
            ConsumerRules(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ConsumerRules() = default ;
            ConsumerRules& operator=(const ConsumerRules &) = default ;
            ConsumerRules& operator=(ConsumerRules &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->matchType_ == nullptr
        && this->pattern_ == nullptr; };
            // matchType Field Functions 
            bool hasMatchType() const { return this->matchType_ != nullptr;};
            void deleteMatchType() { this->matchType_ = nullptr;};
            inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
            inline ConsumerRules& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


            // pattern Field Functions 
            bool hasPattern() const { return this->pattern_ != nullptr;};
            void deletePattern() { this->pattern_ = nullptr;};
            inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
            inline ConsumerRules& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


          protected:
            shared_ptr<string> matchType_ {};
            shared_ptr<string> pattern_ {};
          };

          virtual bool empty() const override { return this->consumerRules_ == nullptr
        && this->level_ == nullptr && this->type_ == nullptr; };
          // consumerRules Field Functions 
          bool hasConsumerRules() const { return this->consumerRules_ != nullptr;};
          void deleteConsumerRules() { this->consumerRules_ = nullptr;};
          inline const RiskConfig::ConsumerRules & getConsumerRules() const { DARABONBA_PTR_GET_CONST(consumerRules_, RiskConfig::ConsumerRules) };
          inline RiskConfig::ConsumerRules getConsumerRules() { DARABONBA_PTR_GET(consumerRules_, RiskConfig::ConsumerRules) };
          inline RiskConfig& setConsumerRules(const RiskConfig::ConsumerRules & consumerRules) { DARABONBA_PTR_SET_VALUE(consumerRules_, consumerRules) };
          inline RiskConfig& setConsumerRules(RiskConfig::ConsumerRules && consumerRules) { DARABONBA_PTR_SET_RVALUE(consumerRules_, consumerRules) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
          inline RiskConfig& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline RiskConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<RiskConfig::ConsumerRules> consumerRules_ {};
          shared_ptr<string> level_ {};
          shared_ptr<string> type_ {};
        };

        class PluginStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PluginStatus& obj) { 
            DARABONBA_PTR_TO_JSON(errorLogs, errorLogs_);
            DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
            DARABONBA_PTR_TO_JSON(serviceHealthy, serviceHealthy_);
          };
          friend void from_json(const Darabonba::Json& j, PluginStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(errorLogs, errorLogs_);
            DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
            DARABONBA_PTR_FROM_JSON(serviceHealthy, serviceHealthy_);
          };
          PluginStatus() = default ;
          PluginStatus(const PluginStatus &) = default ;
          PluginStatus(PluginStatus &&) = default ;
          PluginStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PluginStatus() = default ;
          PluginStatus& operator=(const PluginStatus &) = default ;
          PluginStatus& operator=(PluginStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorLogs_ == nullptr
        && this->pluginId_ == nullptr && this->serviceHealthy_ == nullptr; };
          // errorLogs Field Functions 
          bool hasErrorLogs() const { return this->errorLogs_ != nullptr;};
          void deleteErrorLogs() { this->errorLogs_ = nullptr;};
          inline const map<string, string> & getErrorLogs() const { DARABONBA_PTR_GET_CONST(errorLogs_, map<string, string>) };
          inline map<string, string> getErrorLogs() { DARABONBA_PTR_GET(errorLogs_, map<string, string>) };
          inline PluginStatus& setErrorLogs(const map<string, string> & errorLogs) { DARABONBA_PTR_SET_VALUE(errorLogs_, errorLogs) };
          inline PluginStatus& setErrorLogs(map<string, string> && errorLogs) { DARABONBA_PTR_SET_RVALUE(errorLogs_, errorLogs) };


          // pluginId Field Functions 
          bool hasPluginId() const { return this->pluginId_ != nullptr;};
          void deletePluginId() { this->pluginId_ = nullptr;};
          inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
          inline PluginStatus& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


          // serviceHealthy Field Functions 
          bool hasServiceHealthy() const { return this->serviceHealthy_ != nullptr;};
          void deleteServiceHealthy() { this->serviceHealthy_ = nullptr;};
          inline bool getServiceHealthy() const { DARABONBA_PTR_GET_DEFAULT(serviceHealthy_, false) };
          inline PluginStatus& setServiceHealthy(bool serviceHealthy) { DARABONBA_PTR_SET_VALUE(serviceHealthy_, serviceHealthy) };


        protected:
          shared_ptr<map<string, string>> errorLogs_ {};
          shared_ptr<string> pluginId_ {};
          shared_ptr<bool> serviceHealthy_ {};
        };

        class ConsumerRiskLevel : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConsumerRiskLevel& obj) { 
            DARABONBA_PTR_TO_JSON(level, level_);
            DARABONBA_PTR_TO_JSON(matchType, matchType_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, ConsumerRiskLevel& obj) { 
            DARABONBA_PTR_FROM_JSON(level, level_);
            DARABONBA_PTR_FROM_JSON(matchType, matchType_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          ConsumerRiskLevel() = default ;
          ConsumerRiskLevel(const ConsumerRiskLevel &) = default ;
          ConsumerRiskLevel(ConsumerRiskLevel &&) = default ;
          ConsumerRiskLevel(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConsumerRiskLevel() = default ;
          ConsumerRiskLevel& operator=(const ConsumerRiskLevel &) = default ;
          ConsumerRiskLevel& operator=(ConsumerRiskLevel &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->level_ == nullptr
        && this->matchType_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
          inline ConsumerRiskLevel& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // matchType Field Functions 
          bool hasMatchType() const { return this->matchType_ != nullptr;};
          void deleteMatchType() { this->matchType_ = nullptr;};
          inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
          inline ConsumerRiskLevel& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ConsumerRiskLevel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ConsumerRiskLevel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> level_ {};
          shared_ptr<string> matchType_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> type_ {};
        };

        class ConsumerResponseCheckService : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConsumerResponseCheckService& obj) { 
            DARABONBA_PTR_TO_JSON(matchType, matchType_);
            DARABONBA_PTR_TO_JSON(modalityType, modalityType_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(responseCheckService, responseCheckService_);
            DARABONBA_PTR_TO_JSON(responseImageCheckService, responseImageCheckService_);
          };
          friend void from_json(const Darabonba::Json& j, ConsumerResponseCheckService& obj) { 
            DARABONBA_PTR_FROM_JSON(matchType, matchType_);
            DARABONBA_PTR_FROM_JSON(modalityType, modalityType_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(responseCheckService, responseCheckService_);
            DARABONBA_PTR_FROM_JSON(responseImageCheckService, responseImageCheckService_);
          };
          ConsumerResponseCheckService() = default ;
          ConsumerResponseCheckService(const ConsumerResponseCheckService &) = default ;
          ConsumerResponseCheckService(ConsumerResponseCheckService &&) = default ;
          ConsumerResponseCheckService(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConsumerResponseCheckService() = default ;
          ConsumerResponseCheckService& operator=(const ConsumerResponseCheckService &) = default ;
          ConsumerResponseCheckService& operator=(ConsumerResponseCheckService &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->matchType_ == nullptr
        && this->modalityType_ == nullptr && this->name_ == nullptr && this->responseCheckService_ == nullptr && this->responseImageCheckService_ == nullptr; };
          // matchType Field Functions 
          bool hasMatchType() const { return this->matchType_ != nullptr;};
          void deleteMatchType() { this->matchType_ = nullptr;};
          inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
          inline ConsumerResponseCheckService& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


          // modalityType Field Functions 
          bool hasModalityType() const { return this->modalityType_ != nullptr;};
          void deleteModalityType() { this->modalityType_ = nullptr;};
          inline string getModalityType() const { DARABONBA_PTR_GET_DEFAULT(modalityType_, "") };
          inline ConsumerResponseCheckService& setModalityType(string modalityType) { DARABONBA_PTR_SET_VALUE(modalityType_, modalityType) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ConsumerResponseCheckService& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // responseCheckService Field Functions 
          bool hasResponseCheckService() const { return this->responseCheckService_ != nullptr;};
          void deleteResponseCheckService() { this->responseCheckService_ = nullptr;};
          inline string getResponseCheckService() const { DARABONBA_PTR_GET_DEFAULT(responseCheckService_, "") };
          inline ConsumerResponseCheckService& setResponseCheckService(string responseCheckService) { DARABONBA_PTR_SET_VALUE(responseCheckService_, responseCheckService) };


          // responseImageCheckService Field Functions 
          bool hasResponseImageCheckService() const { return this->responseImageCheckService_ != nullptr;};
          void deleteResponseImageCheckService() { this->responseImageCheckService_ = nullptr;};
          inline string getResponseImageCheckService() const { DARABONBA_PTR_GET_DEFAULT(responseImageCheckService_, "") };
          inline ConsumerResponseCheckService& setResponseImageCheckService(string responseImageCheckService) { DARABONBA_PTR_SET_VALUE(responseImageCheckService_, responseImageCheckService) };


        protected:
          shared_ptr<string> matchType_ {};
          shared_ptr<string> modalityType_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> responseCheckService_ {};
          shared_ptr<string> responseImageCheckService_ {};
        };

        class ConsumerRequestCheckService : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConsumerRequestCheckService& obj) { 
            DARABONBA_PTR_TO_JSON(matchType, matchType_);
            DARABONBA_PTR_TO_JSON(modalityType, modalityType_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(requestCheckService, requestCheckService_);
            DARABONBA_PTR_TO_JSON(requestImageCheckService, requestImageCheckService_);
          };
          friend void from_json(const Darabonba::Json& j, ConsumerRequestCheckService& obj) { 
            DARABONBA_PTR_FROM_JSON(matchType, matchType_);
            DARABONBA_PTR_FROM_JSON(modalityType, modalityType_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(requestCheckService, requestCheckService_);
            DARABONBA_PTR_FROM_JSON(requestImageCheckService, requestImageCheckService_);
          };
          ConsumerRequestCheckService() = default ;
          ConsumerRequestCheckService(const ConsumerRequestCheckService &) = default ;
          ConsumerRequestCheckService(ConsumerRequestCheckService &&) = default ;
          ConsumerRequestCheckService(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConsumerRequestCheckService() = default ;
          ConsumerRequestCheckService& operator=(const ConsumerRequestCheckService &) = default ;
          ConsumerRequestCheckService& operator=(ConsumerRequestCheckService &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->matchType_ == nullptr
        && this->modalityType_ == nullptr && this->name_ == nullptr && this->requestCheckService_ == nullptr && this->requestImageCheckService_ == nullptr; };
          // matchType Field Functions 
          bool hasMatchType() const { return this->matchType_ != nullptr;};
          void deleteMatchType() { this->matchType_ = nullptr;};
          inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
          inline ConsumerRequestCheckService& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


          // modalityType Field Functions 
          bool hasModalityType() const { return this->modalityType_ != nullptr;};
          void deleteModalityType() { this->modalityType_ = nullptr;};
          inline string getModalityType() const { DARABONBA_PTR_GET_DEFAULT(modalityType_, "") };
          inline ConsumerRequestCheckService& setModalityType(string modalityType) { DARABONBA_PTR_SET_VALUE(modalityType_, modalityType) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ConsumerRequestCheckService& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // requestCheckService Field Functions 
          bool hasRequestCheckService() const { return this->requestCheckService_ != nullptr;};
          void deleteRequestCheckService() { this->requestCheckService_ = nullptr;};
          inline string getRequestCheckService() const { DARABONBA_PTR_GET_DEFAULT(requestCheckService_, "") };
          inline ConsumerRequestCheckService& setRequestCheckService(string requestCheckService) { DARABONBA_PTR_SET_VALUE(requestCheckService_, requestCheckService) };


          // requestImageCheckService Field Functions 
          bool hasRequestImageCheckService() const { return this->requestImageCheckService_ != nullptr;};
          void deleteRequestImageCheckService() { this->requestImageCheckService_ = nullptr;};
          inline string getRequestImageCheckService() const { DARABONBA_PTR_GET_DEFAULT(requestImageCheckService_, "") };
          inline ConsumerRequestCheckService& setRequestImageCheckService(string requestImageCheckService) { DARABONBA_PTR_SET_VALUE(requestImageCheckService_, requestImageCheckService) };


        protected:
          shared_ptr<string> matchType_ {};
          shared_ptr<string> modalityType_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> requestCheckService_ {};
          shared_ptr<string> requestImageCheckService_ {};
        };

        virtual bool empty() const override { return this->bufferLimit_ == nullptr
        && this->checkRequest_ == nullptr && this->checkRequestImage_ == nullptr && this->checkResponse_ == nullptr && this->checkResponseImage_ == nullptr && this->consumerRequestCheckService_ == nullptr
        && this->consumerResponseCheckService_ == nullptr && this->consumerRiskLevel_ == nullptr && this->pluginStatus_ == nullptr && this->requestCheckService_ == nullptr && this->requestImageCheckService_ == nullptr
        && this->responseCheckService_ == nullptr && this->responseImageCheckService_ == nullptr && this->riskAlertLevel_ == nullptr && this->riskConfig_ == nullptr && this->serviceAddress_ == nullptr; };
        // bufferLimit Field Functions 
        bool hasBufferLimit() const { return this->bufferLimit_ != nullptr;};
        void deleteBufferLimit() { this->bufferLimit_ = nullptr;};
        inline int32_t getBufferLimit() const { DARABONBA_PTR_GET_DEFAULT(bufferLimit_, 0) };
        inline AiSecurityGuardConfig& setBufferLimit(int32_t bufferLimit) { DARABONBA_PTR_SET_VALUE(bufferLimit_, bufferLimit) };


        // checkRequest Field Functions 
        bool hasCheckRequest() const { return this->checkRequest_ != nullptr;};
        void deleteCheckRequest() { this->checkRequest_ = nullptr;};
        inline bool getCheckRequest() const { DARABONBA_PTR_GET_DEFAULT(checkRequest_, false) };
        inline AiSecurityGuardConfig& setCheckRequest(bool checkRequest) { DARABONBA_PTR_SET_VALUE(checkRequest_, checkRequest) };


        // checkRequestImage Field Functions 
        bool hasCheckRequestImage() const { return this->checkRequestImage_ != nullptr;};
        void deleteCheckRequestImage() { this->checkRequestImage_ = nullptr;};
        inline bool getCheckRequestImage() const { DARABONBA_PTR_GET_DEFAULT(checkRequestImage_, false) };
        inline AiSecurityGuardConfig& setCheckRequestImage(bool checkRequestImage) { DARABONBA_PTR_SET_VALUE(checkRequestImage_, checkRequestImage) };


        // checkResponse Field Functions 
        bool hasCheckResponse() const { return this->checkResponse_ != nullptr;};
        void deleteCheckResponse() { this->checkResponse_ = nullptr;};
        inline bool getCheckResponse() const { DARABONBA_PTR_GET_DEFAULT(checkResponse_, false) };
        inline AiSecurityGuardConfig& setCheckResponse(bool checkResponse) { DARABONBA_PTR_SET_VALUE(checkResponse_, checkResponse) };


        // checkResponseImage Field Functions 
        bool hasCheckResponseImage() const { return this->checkResponseImage_ != nullptr;};
        void deleteCheckResponseImage() { this->checkResponseImage_ = nullptr;};
        inline bool getCheckResponseImage() const { DARABONBA_PTR_GET_DEFAULT(checkResponseImage_, false) };
        inline AiSecurityGuardConfig& setCheckResponseImage(bool checkResponseImage) { DARABONBA_PTR_SET_VALUE(checkResponseImage_, checkResponseImage) };


        // consumerRequestCheckService Field Functions 
        bool hasConsumerRequestCheckService() const { return this->consumerRequestCheckService_ != nullptr;};
        void deleteConsumerRequestCheckService() { this->consumerRequestCheckService_ = nullptr;};
        inline const vector<AiSecurityGuardConfig::ConsumerRequestCheckService> & getConsumerRequestCheckService() const { DARABONBA_PTR_GET_CONST(consumerRequestCheckService_, vector<AiSecurityGuardConfig::ConsumerRequestCheckService>) };
        inline vector<AiSecurityGuardConfig::ConsumerRequestCheckService> getConsumerRequestCheckService() { DARABONBA_PTR_GET(consumerRequestCheckService_, vector<AiSecurityGuardConfig::ConsumerRequestCheckService>) };
        inline AiSecurityGuardConfig& setConsumerRequestCheckService(const vector<AiSecurityGuardConfig::ConsumerRequestCheckService> & consumerRequestCheckService) { DARABONBA_PTR_SET_VALUE(consumerRequestCheckService_, consumerRequestCheckService) };
        inline AiSecurityGuardConfig& setConsumerRequestCheckService(vector<AiSecurityGuardConfig::ConsumerRequestCheckService> && consumerRequestCheckService) { DARABONBA_PTR_SET_RVALUE(consumerRequestCheckService_, consumerRequestCheckService) };


        // consumerResponseCheckService Field Functions 
        bool hasConsumerResponseCheckService() const { return this->consumerResponseCheckService_ != nullptr;};
        void deleteConsumerResponseCheckService() { this->consumerResponseCheckService_ = nullptr;};
        inline const vector<AiSecurityGuardConfig::ConsumerResponseCheckService> & getConsumerResponseCheckService() const { DARABONBA_PTR_GET_CONST(consumerResponseCheckService_, vector<AiSecurityGuardConfig::ConsumerResponseCheckService>) };
        inline vector<AiSecurityGuardConfig::ConsumerResponseCheckService> getConsumerResponseCheckService() { DARABONBA_PTR_GET(consumerResponseCheckService_, vector<AiSecurityGuardConfig::ConsumerResponseCheckService>) };
        inline AiSecurityGuardConfig& setConsumerResponseCheckService(const vector<AiSecurityGuardConfig::ConsumerResponseCheckService> & consumerResponseCheckService) { DARABONBA_PTR_SET_VALUE(consumerResponseCheckService_, consumerResponseCheckService) };
        inline AiSecurityGuardConfig& setConsumerResponseCheckService(vector<AiSecurityGuardConfig::ConsumerResponseCheckService> && consumerResponseCheckService) { DARABONBA_PTR_SET_RVALUE(consumerResponseCheckService_, consumerResponseCheckService) };


        // consumerRiskLevel Field Functions 
        bool hasConsumerRiskLevel() const { return this->consumerRiskLevel_ != nullptr;};
        void deleteConsumerRiskLevel() { this->consumerRiskLevel_ = nullptr;};
        inline const vector<AiSecurityGuardConfig::ConsumerRiskLevel> & getConsumerRiskLevel() const { DARABONBA_PTR_GET_CONST(consumerRiskLevel_, vector<AiSecurityGuardConfig::ConsumerRiskLevel>) };
        inline vector<AiSecurityGuardConfig::ConsumerRiskLevel> getConsumerRiskLevel() { DARABONBA_PTR_GET(consumerRiskLevel_, vector<AiSecurityGuardConfig::ConsumerRiskLevel>) };
        inline AiSecurityGuardConfig& setConsumerRiskLevel(const vector<AiSecurityGuardConfig::ConsumerRiskLevel> & consumerRiskLevel) { DARABONBA_PTR_SET_VALUE(consumerRiskLevel_, consumerRiskLevel) };
        inline AiSecurityGuardConfig& setConsumerRiskLevel(vector<AiSecurityGuardConfig::ConsumerRiskLevel> && consumerRiskLevel) { DARABONBA_PTR_SET_RVALUE(consumerRiskLevel_, consumerRiskLevel) };


        // pluginStatus Field Functions 
        bool hasPluginStatus() const { return this->pluginStatus_ != nullptr;};
        void deletePluginStatus() { this->pluginStatus_ = nullptr;};
        inline const AiSecurityGuardConfig::PluginStatus & getPluginStatus() const { DARABONBA_PTR_GET_CONST(pluginStatus_, AiSecurityGuardConfig::PluginStatus) };
        inline AiSecurityGuardConfig::PluginStatus getPluginStatus() { DARABONBA_PTR_GET(pluginStatus_, AiSecurityGuardConfig::PluginStatus) };
        inline AiSecurityGuardConfig& setPluginStatus(const AiSecurityGuardConfig::PluginStatus & pluginStatus) { DARABONBA_PTR_SET_VALUE(pluginStatus_, pluginStatus) };
        inline AiSecurityGuardConfig& setPluginStatus(AiSecurityGuardConfig::PluginStatus && pluginStatus) { DARABONBA_PTR_SET_RVALUE(pluginStatus_, pluginStatus) };


        // requestCheckService Field Functions 
        bool hasRequestCheckService() const { return this->requestCheckService_ != nullptr;};
        void deleteRequestCheckService() { this->requestCheckService_ = nullptr;};
        inline string getRequestCheckService() const { DARABONBA_PTR_GET_DEFAULT(requestCheckService_, "") };
        inline AiSecurityGuardConfig& setRequestCheckService(string requestCheckService) { DARABONBA_PTR_SET_VALUE(requestCheckService_, requestCheckService) };


        // requestImageCheckService Field Functions 
        bool hasRequestImageCheckService() const { return this->requestImageCheckService_ != nullptr;};
        void deleteRequestImageCheckService() { this->requestImageCheckService_ = nullptr;};
        inline string getRequestImageCheckService() const { DARABONBA_PTR_GET_DEFAULT(requestImageCheckService_, "") };
        inline AiSecurityGuardConfig& setRequestImageCheckService(string requestImageCheckService) { DARABONBA_PTR_SET_VALUE(requestImageCheckService_, requestImageCheckService) };


        // responseCheckService Field Functions 
        bool hasResponseCheckService() const { return this->responseCheckService_ != nullptr;};
        void deleteResponseCheckService() { this->responseCheckService_ = nullptr;};
        inline string getResponseCheckService() const { DARABONBA_PTR_GET_DEFAULT(responseCheckService_, "") };
        inline AiSecurityGuardConfig& setResponseCheckService(string responseCheckService) { DARABONBA_PTR_SET_VALUE(responseCheckService_, responseCheckService) };


        // responseImageCheckService Field Functions 
        bool hasResponseImageCheckService() const { return this->responseImageCheckService_ != nullptr;};
        void deleteResponseImageCheckService() { this->responseImageCheckService_ = nullptr;};
        inline string getResponseImageCheckService() const { DARABONBA_PTR_GET_DEFAULT(responseImageCheckService_, "") };
        inline AiSecurityGuardConfig& setResponseImageCheckService(string responseImageCheckService) { DARABONBA_PTR_SET_VALUE(responseImageCheckService_, responseImageCheckService) };


        // riskAlertLevel Field Functions 
        bool hasRiskAlertLevel() const { return this->riskAlertLevel_ != nullptr;};
        void deleteRiskAlertLevel() { this->riskAlertLevel_ = nullptr;};
        inline string getRiskAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(riskAlertLevel_, "") };
        inline AiSecurityGuardConfig& setRiskAlertLevel(string riskAlertLevel) { DARABONBA_PTR_SET_VALUE(riskAlertLevel_, riskAlertLevel) };


        // riskConfig Field Functions 
        bool hasRiskConfig() const { return this->riskConfig_ != nullptr;};
        void deleteRiskConfig() { this->riskConfig_ = nullptr;};
        inline const vector<AiSecurityGuardConfig::RiskConfig> & getRiskConfig() const { DARABONBA_PTR_GET_CONST(riskConfig_, vector<AiSecurityGuardConfig::RiskConfig>) };
        inline vector<AiSecurityGuardConfig::RiskConfig> getRiskConfig() { DARABONBA_PTR_GET(riskConfig_, vector<AiSecurityGuardConfig::RiskConfig>) };
        inline AiSecurityGuardConfig& setRiskConfig(const vector<AiSecurityGuardConfig::RiskConfig> & riskConfig) { DARABONBA_PTR_SET_VALUE(riskConfig_, riskConfig) };
        inline AiSecurityGuardConfig& setRiskConfig(vector<AiSecurityGuardConfig::RiskConfig> && riskConfig) { DARABONBA_PTR_SET_RVALUE(riskConfig_, riskConfig) };


        // serviceAddress Field Functions 
        bool hasServiceAddress() const { return this->serviceAddress_ != nullptr;};
        void deleteServiceAddress() { this->serviceAddress_ = nullptr;};
        inline string getServiceAddress() const { DARABONBA_PTR_GET_DEFAULT(serviceAddress_, "") };
        inline AiSecurityGuardConfig& setServiceAddress(string serviceAddress) { DARABONBA_PTR_SET_VALUE(serviceAddress_, serviceAddress) };


      protected:
        shared_ptr<int32_t> bufferLimit_ {};
        shared_ptr<bool> checkRequest_ {};
        shared_ptr<bool> checkRequestImage_ {};
        shared_ptr<bool> checkResponse_ {};
        shared_ptr<bool> checkResponseImage_ {};
        shared_ptr<vector<AiSecurityGuardConfig::ConsumerRequestCheckService>> consumerRequestCheckService_ {};
        shared_ptr<vector<AiSecurityGuardConfig::ConsumerResponseCheckService>> consumerResponseCheckService_ {};
        shared_ptr<vector<AiSecurityGuardConfig::ConsumerRiskLevel>> consumerRiskLevel_ {};
        shared_ptr<AiSecurityGuardConfig::PluginStatus> pluginStatus_ {};
        shared_ptr<string> requestCheckService_ {};
        shared_ptr<string> requestImageCheckService_ {};
        shared_ptr<string> responseCheckService_ {};
        shared_ptr<string> responseImageCheckService_ {};
        shared_ptr<string> riskAlertLevel_ {};
        shared_ptr<vector<AiSecurityGuardConfig::RiskConfig>> riskConfig_ {};
        shared_ptr<string> serviceAddress_ {};
      };

      class AiNetworkSearchConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiNetworkSearchConfig& obj) { 
          DARABONBA_PTR_TO_JSON(defaultEnable, defaultEnable_);
          DARABONBA_PTR_TO_JSON(defaultLang, defaultLang_);
          DARABONBA_PTR_TO_JSON(needReference, needReference_);
          DARABONBA_PTR_TO_JSON(pluginStatus, pluginStatus_);
          DARABONBA_PTR_TO_JSON(referenceFormat, referenceFormat_);
          DARABONBA_PTR_TO_JSON(referenceLocation, referenceLocation_);
          DARABONBA_PTR_TO_JSON(searchEngineConfig, searchEngineConfig_);
          DARABONBA_PTR_TO_JSON(searchFrom, searchFrom_);
          DARABONBA_PTR_TO_JSON(searchRewrite, searchRewrite_);
        };
        friend void from_json(const Darabonba::Json& j, AiNetworkSearchConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(defaultEnable, defaultEnable_);
          DARABONBA_PTR_FROM_JSON(defaultLang, defaultLang_);
          DARABONBA_PTR_FROM_JSON(needReference, needReference_);
          DARABONBA_PTR_FROM_JSON(pluginStatus, pluginStatus_);
          DARABONBA_PTR_FROM_JSON(referenceFormat, referenceFormat_);
          DARABONBA_PTR_FROM_JSON(referenceLocation, referenceLocation_);
          DARABONBA_PTR_FROM_JSON(searchEngineConfig, searchEngineConfig_);
          DARABONBA_PTR_FROM_JSON(searchFrom, searchFrom_);
          DARABONBA_PTR_FROM_JSON(searchRewrite, searchRewrite_);
        };
        AiNetworkSearchConfig() = default ;
        AiNetworkSearchConfig(const AiNetworkSearchConfig &) = default ;
        AiNetworkSearchConfig(AiNetworkSearchConfig &&) = default ;
        AiNetworkSearchConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiNetworkSearchConfig() = default ;
        AiNetworkSearchConfig& operator=(const AiNetworkSearchConfig &) = default ;
        AiNetworkSearchConfig& operator=(AiNetworkSearchConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SearchRewrite : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SearchRewrite& obj) { 
            DARABONBA_PTR_TO_JSON(enable, enable_);
            DARABONBA_PTR_TO_JSON(maxCount, maxCount_);
            DARABONBA_PTR_TO_JSON(modelName, modelName_);
            DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
            DARABONBA_PTR_TO_JSON(timeoutMillisecond, timeoutMillisecond_);
          };
          friend void from_json(const Darabonba::Json& j, SearchRewrite& obj) { 
            DARABONBA_PTR_FROM_JSON(enable, enable_);
            DARABONBA_PTR_FROM_JSON(maxCount, maxCount_);
            DARABONBA_PTR_FROM_JSON(modelName, modelName_);
            DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
            DARABONBA_PTR_FROM_JSON(timeoutMillisecond, timeoutMillisecond_);
          };
          SearchRewrite() = default ;
          SearchRewrite(const SearchRewrite &) = default ;
          SearchRewrite(SearchRewrite &&) = default ;
          SearchRewrite(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SearchRewrite() = default ;
          SearchRewrite& operator=(const SearchRewrite &) = default ;
          SearchRewrite& operator=(SearchRewrite &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enable_ == nullptr
        && this->maxCount_ == nullptr && this->modelName_ == nullptr && this->serviceId_ == nullptr && this->timeoutMillisecond_ == nullptr; };
          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
          inline SearchRewrite& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // maxCount Field Functions 
          bool hasMaxCount() const { return this->maxCount_ != nullptr;};
          void deleteMaxCount() { this->maxCount_ = nullptr;};
          inline int32_t getMaxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
          inline SearchRewrite& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


          // modelName Field Functions 
          bool hasModelName() const { return this->modelName_ != nullptr;};
          void deleteModelName() { this->modelName_ = nullptr;};
          inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
          inline SearchRewrite& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


          // serviceId Field Functions 
          bool hasServiceId() const { return this->serviceId_ != nullptr;};
          void deleteServiceId() { this->serviceId_ = nullptr;};
          inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
          inline SearchRewrite& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


          // timeoutMillisecond Field Functions 
          bool hasTimeoutMillisecond() const { return this->timeoutMillisecond_ != nullptr;};
          void deleteTimeoutMillisecond() { this->timeoutMillisecond_ = nullptr;};
          inline int32_t getTimeoutMillisecond() const { DARABONBA_PTR_GET_DEFAULT(timeoutMillisecond_, 0) };
          inline SearchRewrite& setTimeoutMillisecond(int32_t timeoutMillisecond) { DARABONBA_PTR_SET_VALUE(timeoutMillisecond_, timeoutMillisecond) };


        protected:
          shared_ptr<bool> enable_ {};
          shared_ptr<int32_t> maxCount_ {};
          shared_ptr<string> modelName_ {};
          shared_ptr<string> serviceId_ {};
          shared_ptr<int32_t> timeoutMillisecond_ {};
        };

        class SearchFrom : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SearchFrom& obj) { 
            DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
            DARABONBA_PTR_TO_JSON(contentMode, contentMode_);
            DARABONBA_PTR_TO_JSON(count, count_);
            DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
            DARABONBA_PTR_TO_JSON(industry, industry_);
            DARABONBA_PTR_TO_JSON(optionArgs, optionArgs_);
            DARABONBA_PTR_TO_JSON(start, start_);
            DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
            DARABONBA_PTR_TO_JSON(timeoutMillisecond, timeoutMillisecond_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, SearchFrom& obj) { 
            DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
            DARABONBA_PTR_FROM_JSON(contentMode, contentMode_);
            DARABONBA_PTR_FROM_JSON(count, count_);
            DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
            DARABONBA_PTR_FROM_JSON(industry, industry_);
            DARABONBA_PTR_FROM_JSON(optionArgs, optionArgs_);
            DARABONBA_PTR_FROM_JSON(start, start_);
            DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
            DARABONBA_PTR_FROM_JSON(timeoutMillisecond, timeoutMillisecond_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          SearchFrom() = default ;
          SearchFrom(const SearchFrom &) = default ;
          SearchFrom(SearchFrom &&) = default ;
          SearchFrom(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SearchFrom() = default ;
          SearchFrom& operator=(const SearchFrom &) = default ;
          SearchFrom& operator=(SearchFrom &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->contentMode_ == nullptr && this->count_ == nullptr && this->endpoint_ == nullptr && this->industry_ == nullptr && this->optionArgs_ == nullptr
        && this->start_ == nullptr && this->timeRange_ == nullptr && this->timeoutMillisecond_ == nullptr && this->type_ == nullptr; };
          // apiKey Field Functions 
          bool hasApiKey() const { return this->apiKey_ != nullptr;};
          void deleteApiKey() { this->apiKey_ = nullptr;};
          inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
          inline SearchFrom& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


          // contentMode Field Functions 
          bool hasContentMode() const { return this->contentMode_ != nullptr;};
          void deleteContentMode() { this->contentMode_ = nullptr;};
          inline string getContentMode() const { DARABONBA_PTR_GET_DEFAULT(contentMode_, "") };
          inline SearchFrom& setContentMode(string contentMode) { DARABONBA_PTR_SET_VALUE(contentMode_, contentMode) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
          inline SearchFrom& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // endpoint Field Functions 
          bool hasEndpoint() const { return this->endpoint_ != nullptr;};
          void deleteEndpoint() { this->endpoint_ = nullptr;};
          inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
          inline SearchFrom& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


          // industry Field Functions 
          bool hasIndustry() const { return this->industry_ != nullptr;};
          void deleteIndustry() { this->industry_ = nullptr;};
          inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
          inline SearchFrom& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


          // optionArgs Field Functions 
          bool hasOptionArgs() const { return this->optionArgs_ != nullptr;};
          void deleteOptionArgs() { this->optionArgs_ = nullptr;};
          inline const map<string, string> & getOptionArgs() const { DARABONBA_PTR_GET_CONST(optionArgs_, map<string, string>) };
          inline map<string, string> getOptionArgs() { DARABONBA_PTR_GET(optionArgs_, map<string, string>) };
          inline SearchFrom& setOptionArgs(const map<string, string> & optionArgs) { DARABONBA_PTR_SET_VALUE(optionArgs_, optionArgs) };
          inline SearchFrom& setOptionArgs(map<string, string> && optionArgs) { DARABONBA_PTR_SET_RVALUE(optionArgs_, optionArgs) };


          // start Field Functions 
          bool hasStart() const { return this->start_ != nullptr;};
          void deleteStart() { this->start_ = nullptr;};
          inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
          inline SearchFrom& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


          // timeRange Field Functions 
          bool hasTimeRange() const { return this->timeRange_ != nullptr;};
          void deleteTimeRange() { this->timeRange_ = nullptr;};
          inline string getTimeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
          inline SearchFrom& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


          // timeoutMillisecond Field Functions 
          bool hasTimeoutMillisecond() const { return this->timeoutMillisecond_ != nullptr;};
          void deleteTimeoutMillisecond() { this->timeoutMillisecond_ = nullptr;};
          inline int32_t getTimeoutMillisecond() const { DARABONBA_PTR_GET_DEFAULT(timeoutMillisecond_, 0) };
          inline SearchFrom& setTimeoutMillisecond(int32_t timeoutMillisecond) { DARABONBA_PTR_SET_VALUE(timeoutMillisecond_, timeoutMillisecond) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline SearchFrom& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> apiKey_ {};
          shared_ptr<string> contentMode_ {};
          shared_ptr<int32_t> count_ {};
          shared_ptr<string> endpoint_ {};
          shared_ptr<string> industry_ {};
          shared_ptr<map<string, string>> optionArgs_ {};
          shared_ptr<int32_t> start_ {};
          shared_ptr<string> timeRange_ {};
          shared_ptr<int32_t> timeoutMillisecond_ {};
          shared_ptr<string> type_ {};
        };

        class SearchEngineConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SearchEngineConfig& obj) { 
            DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
            DARABONBA_PTR_TO_JSON(contentMode, contentMode_);
            DARABONBA_PTR_TO_JSON(count, count_);
            DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
            DARABONBA_PTR_TO_JSON(industry, industry_);
            DARABONBA_PTR_TO_JSON(optionArgs, optionArgs_);
            DARABONBA_PTR_TO_JSON(start, start_);
            DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
            DARABONBA_PTR_TO_JSON(timeoutMillisecond, timeoutMillisecond_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, SearchEngineConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
            DARABONBA_PTR_FROM_JSON(contentMode, contentMode_);
            DARABONBA_PTR_FROM_JSON(count, count_);
            DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
            DARABONBA_PTR_FROM_JSON(industry, industry_);
            DARABONBA_PTR_FROM_JSON(optionArgs, optionArgs_);
            DARABONBA_PTR_FROM_JSON(start, start_);
            DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
            DARABONBA_PTR_FROM_JSON(timeoutMillisecond, timeoutMillisecond_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          SearchEngineConfig() = default ;
          SearchEngineConfig(const SearchEngineConfig &) = default ;
          SearchEngineConfig(SearchEngineConfig &&) = default ;
          SearchEngineConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SearchEngineConfig() = default ;
          SearchEngineConfig& operator=(const SearchEngineConfig &) = default ;
          SearchEngineConfig& operator=(SearchEngineConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->contentMode_ == nullptr && this->count_ == nullptr && this->endpoint_ == nullptr && this->industry_ == nullptr && this->optionArgs_ == nullptr
        && this->start_ == nullptr && this->timeRange_ == nullptr && this->timeoutMillisecond_ == nullptr && this->type_ == nullptr; };
          // apiKey Field Functions 
          bool hasApiKey() const { return this->apiKey_ != nullptr;};
          void deleteApiKey() { this->apiKey_ = nullptr;};
          inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
          inline SearchEngineConfig& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


          // contentMode Field Functions 
          bool hasContentMode() const { return this->contentMode_ != nullptr;};
          void deleteContentMode() { this->contentMode_ = nullptr;};
          inline string getContentMode() const { DARABONBA_PTR_GET_DEFAULT(contentMode_, "") };
          inline SearchEngineConfig& setContentMode(string contentMode) { DARABONBA_PTR_SET_VALUE(contentMode_, contentMode) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
          inline SearchEngineConfig& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // endpoint Field Functions 
          bool hasEndpoint() const { return this->endpoint_ != nullptr;};
          void deleteEndpoint() { this->endpoint_ = nullptr;};
          inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
          inline SearchEngineConfig& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


          // industry Field Functions 
          bool hasIndustry() const { return this->industry_ != nullptr;};
          void deleteIndustry() { this->industry_ = nullptr;};
          inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
          inline SearchEngineConfig& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


          // optionArgs Field Functions 
          bool hasOptionArgs() const { return this->optionArgs_ != nullptr;};
          void deleteOptionArgs() { this->optionArgs_ = nullptr;};
          inline const map<string, string> & getOptionArgs() const { DARABONBA_PTR_GET_CONST(optionArgs_, map<string, string>) };
          inline map<string, string> getOptionArgs() { DARABONBA_PTR_GET(optionArgs_, map<string, string>) };
          inline SearchEngineConfig& setOptionArgs(const map<string, string> & optionArgs) { DARABONBA_PTR_SET_VALUE(optionArgs_, optionArgs) };
          inline SearchEngineConfig& setOptionArgs(map<string, string> && optionArgs) { DARABONBA_PTR_SET_RVALUE(optionArgs_, optionArgs) };


          // start Field Functions 
          bool hasStart() const { return this->start_ != nullptr;};
          void deleteStart() { this->start_ = nullptr;};
          inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
          inline SearchEngineConfig& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


          // timeRange Field Functions 
          bool hasTimeRange() const { return this->timeRange_ != nullptr;};
          void deleteTimeRange() { this->timeRange_ = nullptr;};
          inline string getTimeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
          inline SearchEngineConfig& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


          // timeoutMillisecond Field Functions 
          bool hasTimeoutMillisecond() const { return this->timeoutMillisecond_ != nullptr;};
          void deleteTimeoutMillisecond() { this->timeoutMillisecond_ = nullptr;};
          inline int32_t getTimeoutMillisecond() const { DARABONBA_PTR_GET_DEFAULT(timeoutMillisecond_, 0) };
          inline SearchEngineConfig& setTimeoutMillisecond(int32_t timeoutMillisecond) { DARABONBA_PTR_SET_VALUE(timeoutMillisecond_, timeoutMillisecond) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline SearchEngineConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> apiKey_ {};
          shared_ptr<string> contentMode_ {};
          shared_ptr<int32_t> count_ {};
          shared_ptr<string> endpoint_ {};
          shared_ptr<string> industry_ {};
          shared_ptr<map<string, string>> optionArgs_ {};
          shared_ptr<int32_t> start_ {};
          shared_ptr<string> timeRange_ {};
          shared_ptr<int32_t> timeoutMillisecond_ {};
          shared_ptr<string> type_ {};
        };

        class PluginStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PluginStatus& obj) { 
            DARABONBA_PTR_TO_JSON(errorLogs, errorLogs_);
            DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
            DARABONBA_PTR_TO_JSON(serviceHealthy, serviceHealthy_);
          };
          friend void from_json(const Darabonba::Json& j, PluginStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(errorLogs, errorLogs_);
            DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
            DARABONBA_PTR_FROM_JSON(serviceHealthy, serviceHealthy_);
          };
          PluginStatus() = default ;
          PluginStatus(const PluginStatus &) = default ;
          PluginStatus(PluginStatus &&) = default ;
          PluginStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PluginStatus() = default ;
          PluginStatus& operator=(const PluginStatus &) = default ;
          PluginStatus& operator=(PluginStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorLogs_ == nullptr
        && this->pluginId_ == nullptr && this->serviceHealthy_ == nullptr; };
          // errorLogs Field Functions 
          bool hasErrorLogs() const { return this->errorLogs_ != nullptr;};
          void deleteErrorLogs() { this->errorLogs_ = nullptr;};
          inline const map<string, string> & getErrorLogs() const { DARABONBA_PTR_GET_CONST(errorLogs_, map<string, string>) };
          inline map<string, string> getErrorLogs() { DARABONBA_PTR_GET(errorLogs_, map<string, string>) };
          inline PluginStatus& setErrorLogs(const map<string, string> & errorLogs) { DARABONBA_PTR_SET_VALUE(errorLogs_, errorLogs) };
          inline PluginStatus& setErrorLogs(map<string, string> && errorLogs) { DARABONBA_PTR_SET_RVALUE(errorLogs_, errorLogs) };


          // pluginId Field Functions 
          bool hasPluginId() const { return this->pluginId_ != nullptr;};
          void deletePluginId() { this->pluginId_ = nullptr;};
          inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
          inline PluginStatus& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


          // serviceHealthy Field Functions 
          bool hasServiceHealthy() const { return this->serviceHealthy_ != nullptr;};
          void deleteServiceHealthy() { this->serviceHealthy_ = nullptr;};
          inline bool getServiceHealthy() const { DARABONBA_PTR_GET_DEFAULT(serviceHealthy_, false) };
          inline PluginStatus& setServiceHealthy(bool serviceHealthy) { DARABONBA_PTR_SET_VALUE(serviceHealthy_, serviceHealthy) };


        protected:
          shared_ptr<map<string, string>> errorLogs_ {};
          shared_ptr<string> pluginId_ {};
          shared_ptr<bool> serviceHealthy_ {};
        };

        virtual bool empty() const override { return this->defaultEnable_ == nullptr
        && this->defaultLang_ == nullptr && this->needReference_ == nullptr && this->pluginStatus_ == nullptr && this->referenceFormat_ == nullptr && this->referenceLocation_ == nullptr
        && this->searchEngineConfig_ == nullptr && this->searchFrom_ == nullptr && this->searchRewrite_ == nullptr; };
        // defaultEnable Field Functions 
        bool hasDefaultEnable() const { return this->defaultEnable_ != nullptr;};
        void deleteDefaultEnable() { this->defaultEnable_ = nullptr;};
        inline bool getDefaultEnable() const { DARABONBA_PTR_GET_DEFAULT(defaultEnable_, false) };
        inline AiNetworkSearchConfig& setDefaultEnable(bool defaultEnable) { DARABONBA_PTR_SET_VALUE(defaultEnable_, defaultEnable) };


        // defaultLang Field Functions 
        bool hasDefaultLang() const { return this->defaultLang_ != nullptr;};
        void deleteDefaultLang() { this->defaultLang_ = nullptr;};
        inline string getDefaultLang() const { DARABONBA_PTR_GET_DEFAULT(defaultLang_, "") };
        inline AiNetworkSearchConfig& setDefaultLang(string defaultLang) { DARABONBA_PTR_SET_VALUE(defaultLang_, defaultLang) };


        // needReference Field Functions 
        bool hasNeedReference() const { return this->needReference_ != nullptr;};
        void deleteNeedReference() { this->needReference_ = nullptr;};
        inline bool getNeedReference() const { DARABONBA_PTR_GET_DEFAULT(needReference_, false) };
        inline AiNetworkSearchConfig& setNeedReference(bool needReference) { DARABONBA_PTR_SET_VALUE(needReference_, needReference) };


        // pluginStatus Field Functions 
        bool hasPluginStatus() const { return this->pluginStatus_ != nullptr;};
        void deletePluginStatus() { this->pluginStatus_ = nullptr;};
        inline const AiNetworkSearchConfig::PluginStatus & getPluginStatus() const { DARABONBA_PTR_GET_CONST(pluginStatus_, AiNetworkSearchConfig::PluginStatus) };
        inline AiNetworkSearchConfig::PluginStatus getPluginStatus() { DARABONBA_PTR_GET(pluginStatus_, AiNetworkSearchConfig::PluginStatus) };
        inline AiNetworkSearchConfig& setPluginStatus(const AiNetworkSearchConfig::PluginStatus & pluginStatus) { DARABONBA_PTR_SET_VALUE(pluginStatus_, pluginStatus) };
        inline AiNetworkSearchConfig& setPluginStatus(AiNetworkSearchConfig::PluginStatus && pluginStatus) { DARABONBA_PTR_SET_RVALUE(pluginStatus_, pluginStatus) };


        // referenceFormat Field Functions 
        bool hasReferenceFormat() const { return this->referenceFormat_ != nullptr;};
        void deleteReferenceFormat() { this->referenceFormat_ = nullptr;};
        inline string getReferenceFormat() const { DARABONBA_PTR_GET_DEFAULT(referenceFormat_, "") };
        inline AiNetworkSearchConfig& setReferenceFormat(string referenceFormat) { DARABONBA_PTR_SET_VALUE(referenceFormat_, referenceFormat) };


        // referenceLocation Field Functions 
        bool hasReferenceLocation() const { return this->referenceLocation_ != nullptr;};
        void deleteReferenceLocation() { this->referenceLocation_ = nullptr;};
        inline string getReferenceLocation() const { DARABONBA_PTR_GET_DEFAULT(referenceLocation_, "") };
        inline AiNetworkSearchConfig& setReferenceLocation(string referenceLocation) { DARABONBA_PTR_SET_VALUE(referenceLocation_, referenceLocation) };


        // searchEngineConfig Field Functions 
        bool hasSearchEngineConfig() const { return this->searchEngineConfig_ != nullptr;};
        void deleteSearchEngineConfig() { this->searchEngineConfig_ = nullptr;};
        inline const AiNetworkSearchConfig::SearchEngineConfig & getSearchEngineConfig() const { DARABONBA_PTR_GET_CONST(searchEngineConfig_, AiNetworkSearchConfig::SearchEngineConfig) };
        inline AiNetworkSearchConfig::SearchEngineConfig getSearchEngineConfig() { DARABONBA_PTR_GET(searchEngineConfig_, AiNetworkSearchConfig::SearchEngineConfig) };
        inline AiNetworkSearchConfig& setSearchEngineConfig(const AiNetworkSearchConfig::SearchEngineConfig & searchEngineConfig) { DARABONBA_PTR_SET_VALUE(searchEngineConfig_, searchEngineConfig) };
        inline AiNetworkSearchConfig& setSearchEngineConfig(AiNetworkSearchConfig::SearchEngineConfig && searchEngineConfig) { DARABONBA_PTR_SET_RVALUE(searchEngineConfig_, searchEngineConfig) };


        // searchFrom Field Functions 
        bool hasSearchFrom() const { return this->searchFrom_ != nullptr;};
        void deleteSearchFrom() { this->searchFrom_ = nullptr;};
        inline const vector<AiNetworkSearchConfig::SearchFrom> & getSearchFrom() const { DARABONBA_PTR_GET_CONST(searchFrom_, vector<AiNetworkSearchConfig::SearchFrom>) };
        inline vector<AiNetworkSearchConfig::SearchFrom> getSearchFrom() { DARABONBA_PTR_GET(searchFrom_, vector<AiNetworkSearchConfig::SearchFrom>) };
        inline AiNetworkSearchConfig& setSearchFrom(const vector<AiNetworkSearchConfig::SearchFrom> & searchFrom) { DARABONBA_PTR_SET_VALUE(searchFrom_, searchFrom) };
        inline AiNetworkSearchConfig& setSearchFrom(vector<AiNetworkSearchConfig::SearchFrom> && searchFrom) { DARABONBA_PTR_SET_RVALUE(searchFrom_, searchFrom) };


        // searchRewrite Field Functions 
        bool hasSearchRewrite() const { return this->searchRewrite_ != nullptr;};
        void deleteSearchRewrite() { this->searchRewrite_ = nullptr;};
        inline const AiNetworkSearchConfig::SearchRewrite & getSearchRewrite() const { DARABONBA_PTR_GET_CONST(searchRewrite_, AiNetworkSearchConfig::SearchRewrite) };
        inline AiNetworkSearchConfig::SearchRewrite getSearchRewrite() { DARABONBA_PTR_GET(searchRewrite_, AiNetworkSearchConfig::SearchRewrite) };
        inline AiNetworkSearchConfig& setSearchRewrite(const AiNetworkSearchConfig::SearchRewrite & searchRewrite) { DARABONBA_PTR_SET_VALUE(searchRewrite_, searchRewrite) };
        inline AiNetworkSearchConfig& setSearchRewrite(AiNetworkSearchConfig::SearchRewrite && searchRewrite) { DARABONBA_PTR_SET_RVALUE(searchRewrite_, searchRewrite) };


      protected:
        shared_ptr<bool> defaultEnable_ {};
        shared_ptr<string> defaultLang_ {};
        shared_ptr<bool> needReference_ {};
        shared_ptr<AiNetworkSearchConfig::PluginStatus> pluginStatus_ {};
        shared_ptr<string> referenceFormat_ {};
        shared_ptr<string> referenceLocation_ {};
        shared_ptr<AiNetworkSearchConfig::SearchEngineConfig> searchEngineConfig_ {};
        shared_ptr<vector<AiNetworkSearchConfig::SearchFrom>> searchFrom_ {};
        shared_ptr<AiNetworkSearchConfig::SearchRewrite> searchRewrite_ {};
      };

      class AiFallbackConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiFallbackConfig& obj) { 
          DARABONBA_PTR_TO_JSON(onlyRedirectUpstreamCode, onlyRedirectUpstreamCode_);
          DARABONBA_PTR_TO_JSON(routeEmbedded, routeEmbedded_);
          DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
        };
        friend void from_json(const Darabonba::Json& j, AiFallbackConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(onlyRedirectUpstreamCode, onlyRedirectUpstreamCode_);
          DARABONBA_PTR_FROM_JSON(routeEmbedded, routeEmbedded_);
          DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
        };
        AiFallbackConfig() = default ;
        AiFallbackConfig(const AiFallbackConfig &) = default ;
        AiFallbackConfig(AiFallbackConfig &&) = default ;
        AiFallbackConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiFallbackConfig() = default ;
        AiFallbackConfig& operator=(const AiFallbackConfig &) = default ;
        AiFallbackConfig& operator=(AiFallbackConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ServiceConfigs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServiceConfigs& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(passThroughModelName, passThroughModelName_);
            DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
            DARABONBA_PTR_TO_JSON(targetModelName, targetModelName_);
          };
          friend void from_json(const Darabonba::Json& j, ServiceConfigs& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(passThroughModelName, passThroughModelName_);
            DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
            DARABONBA_PTR_FROM_JSON(targetModelName, targetModelName_);
          };
          ServiceConfigs() = default ;
          ServiceConfigs(const ServiceConfigs &) = default ;
          ServiceConfigs(ServiceConfigs &&) = default ;
          ServiceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ServiceConfigs() = default ;
          ServiceConfigs& operator=(const ServiceConfigs &) = default ;
          ServiceConfigs& operator=(ServiceConfigs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->passThroughModelName_ == nullptr && this->serviceId_ == nullptr && this->targetModelName_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ServiceConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // passThroughModelName Field Functions 
          bool hasPassThroughModelName() const { return this->passThroughModelName_ != nullptr;};
          void deletePassThroughModelName() { this->passThroughModelName_ = nullptr;};
          inline bool getPassThroughModelName() const { DARABONBA_PTR_GET_DEFAULT(passThroughModelName_, false) };
          inline ServiceConfigs& setPassThroughModelName(bool passThroughModelName) { DARABONBA_PTR_SET_VALUE(passThroughModelName_, passThroughModelName) };


          // serviceId Field Functions 
          bool hasServiceId() const { return this->serviceId_ != nullptr;};
          void deleteServiceId() { this->serviceId_ = nullptr;};
          inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
          inline ServiceConfigs& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


          // targetModelName Field Functions 
          bool hasTargetModelName() const { return this->targetModelName_ != nullptr;};
          void deleteTargetModelName() { this->targetModelName_ = nullptr;};
          inline string getTargetModelName() const { DARABONBA_PTR_GET_DEFAULT(targetModelName_, "") };
          inline ServiceConfigs& setTargetModelName(string targetModelName) { DARABONBA_PTR_SET_VALUE(targetModelName_, targetModelName) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<bool> passThroughModelName_ {};
          shared_ptr<string> serviceId_ {};
          shared_ptr<string> targetModelName_ {};
        };

        virtual bool empty() const override { return this->onlyRedirectUpstreamCode_ == nullptr
        && this->routeEmbedded_ == nullptr && this->serviceConfigs_ == nullptr; };
        // onlyRedirectUpstreamCode Field Functions 
        bool hasOnlyRedirectUpstreamCode() const { return this->onlyRedirectUpstreamCode_ != nullptr;};
        void deleteOnlyRedirectUpstreamCode() { this->onlyRedirectUpstreamCode_ = nullptr;};
        inline bool getOnlyRedirectUpstreamCode() const { DARABONBA_PTR_GET_DEFAULT(onlyRedirectUpstreamCode_, false) };
        inline AiFallbackConfig& setOnlyRedirectUpstreamCode(bool onlyRedirectUpstreamCode) { DARABONBA_PTR_SET_VALUE(onlyRedirectUpstreamCode_, onlyRedirectUpstreamCode) };


        // routeEmbedded Field Functions 
        bool hasRouteEmbedded() const { return this->routeEmbedded_ != nullptr;};
        void deleteRouteEmbedded() { this->routeEmbedded_ = nullptr;};
        inline bool getRouteEmbedded() const { DARABONBA_PTR_GET_DEFAULT(routeEmbedded_, false) };
        inline AiFallbackConfig& setRouteEmbedded(bool routeEmbedded) { DARABONBA_PTR_SET_VALUE(routeEmbedded_, routeEmbedded) };


        // serviceConfigs Field Functions 
        bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
        void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
        inline const vector<AiFallbackConfig::ServiceConfigs> & getServiceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<AiFallbackConfig::ServiceConfigs>) };
        inline vector<AiFallbackConfig::ServiceConfigs> getServiceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<AiFallbackConfig::ServiceConfigs>) };
        inline AiFallbackConfig& setServiceConfigs(const vector<AiFallbackConfig::ServiceConfigs> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
        inline AiFallbackConfig& setServiceConfigs(vector<AiFallbackConfig::ServiceConfigs> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


      protected:
        shared_ptr<bool> onlyRedirectUpstreamCode_ {};
        shared_ptr<bool> routeEmbedded_ {};
        shared_ptr<vector<AiFallbackConfig::ServiceConfigs>> serviceConfigs_ {};
      };

      class AiCacheConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiCacheConfig& obj) { 
          DARABONBA_PTR_TO_JSON(cacheKeyStrategy, cacheKeyStrategy_);
          DARABONBA_PTR_TO_JSON(cacheMode, cacheMode_);
          DARABONBA_PTR_TO_JSON(cacheTTL, cacheTTL_);
          DARABONBA_PTR_TO_JSON(embeddingConfig, embeddingConfig_);
          DARABONBA_PTR_TO_JSON(pluginStatus, pluginStatus_);
          DARABONBA_PTR_TO_JSON(redisConfig, redisConfig_);
          DARABONBA_PTR_TO_JSON(vectorConfig, vectorConfig_);
        };
        friend void from_json(const Darabonba::Json& j, AiCacheConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(cacheKeyStrategy, cacheKeyStrategy_);
          DARABONBA_PTR_FROM_JSON(cacheMode, cacheMode_);
          DARABONBA_PTR_FROM_JSON(cacheTTL, cacheTTL_);
          DARABONBA_PTR_FROM_JSON(embeddingConfig, embeddingConfig_);
          DARABONBA_PTR_FROM_JSON(pluginStatus, pluginStatus_);
          DARABONBA_PTR_FROM_JSON(redisConfig, redisConfig_);
          DARABONBA_PTR_FROM_JSON(vectorConfig, vectorConfig_);
        };
        AiCacheConfig() = default ;
        AiCacheConfig(const AiCacheConfig &) = default ;
        AiCacheConfig(AiCacheConfig &&) = default ;
        AiCacheConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiCacheConfig() = default ;
        AiCacheConfig& operator=(const AiCacheConfig &) = default ;
        AiCacheConfig& operator=(AiCacheConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VectorConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VectorConfig& obj) { 
            DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
            DARABONBA_PTR_TO_JSON(collectionId, collectionId_);
            DARABONBA_PTR_TO_JSON(serviceHost, serviceHost_);
            DARABONBA_PTR_TO_JSON(threshold, threshold_);
            DARABONBA_PTR_TO_JSON(timeout, timeout_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, VectorConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
            DARABONBA_PTR_FROM_JSON(collectionId, collectionId_);
            DARABONBA_PTR_FROM_JSON(serviceHost, serviceHost_);
            DARABONBA_PTR_FROM_JSON(threshold, threshold_);
            DARABONBA_PTR_FROM_JSON(timeout, timeout_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          VectorConfig() = default ;
          VectorConfig(const VectorConfig &) = default ;
          VectorConfig(VectorConfig &&) = default ;
          VectorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VectorConfig() = default ;
          VectorConfig& operator=(const VectorConfig &) = default ;
          VectorConfig& operator=(VectorConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->collectionId_ == nullptr && this->serviceHost_ == nullptr && this->threshold_ == nullptr && this->timeout_ == nullptr && this->type_ == nullptr; };
          // apiKey Field Functions 
          bool hasApiKey() const { return this->apiKey_ != nullptr;};
          void deleteApiKey() { this->apiKey_ = nullptr;};
          inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
          inline VectorConfig& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


          // collectionId Field Functions 
          bool hasCollectionId() const { return this->collectionId_ != nullptr;};
          void deleteCollectionId() { this->collectionId_ = nullptr;};
          inline string getCollectionId() const { DARABONBA_PTR_GET_DEFAULT(collectionId_, "") };
          inline VectorConfig& setCollectionId(string collectionId) { DARABONBA_PTR_SET_VALUE(collectionId_, collectionId) };


          // serviceHost Field Functions 
          bool hasServiceHost() const { return this->serviceHost_ != nullptr;};
          void deleteServiceHost() { this->serviceHost_ = nullptr;};
          inline string getServiceHost() const { DARABONBA_PTR_GET_DEFAULT(serviceHost_, "") };
          inline VectorConfig& setServiceHost(string serviceHost) { DARABONBA_PTR_SET_VALUE(serviceHost_, serviceHost) };


          // threshold Field Functions 
          bool hasThreshold() const { return this->threshold_ != nullptr;};
          void deleteThreshold() { this->threshold_ = nullptr;};
          inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
          inline VectorConfig& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


          // timeout Field Functions 
          bool hasTimeout() const { return this->timeout_ != nullptr;};
          void deleteTimeout() { this->timeout_ = nullptr;};
          inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
          inline VectorConfig& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline VectorConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // apiKey
          shared_ptr<string> apiKey_ {};
          shared_ptr<string> collectionId_ {};
          shared_ptr<string> serviceHost_ {};
          shared_ptr<float> threshold_ {};
          shared_ptr<int32_t> timeout_ {};
          shared_ptr<string> type_ {};
        };

        class RedisConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RedisConfig& obj) { 
            DARABONBA_PTR_TO_JSON(databaseNumber, databaseNumber_);
            DARABONBA_PTR_TO_JSON(host, host_);
            DARABONBA_PTR_TO_JSON(password, password_);
            DARABONBA_PTR_TO_JSON(port, port_);
            DARABONBA_PTR_TO_JSON(timeout, timeout_);
            DARABONBA_PTR_TO_JSON(username, username_);
          };
          friend void from_json(const Darabonba::Json& j, RedisConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(databaseNumber, databaseNumber_);
            DARABONBA_PTR_FROM_JSON(host, host_);
            DARABONBA_PTR_FROM_JSON(password, password_);
            DARABONBA_PTR_FROM_JSON(port, port_);
            DARABONBA_PTR_FROM_JSON(timeout, timeout_);
            DARABONBA_PTR_FROM_JSON(username, username_);
          };
          RedisConfig() = default ;
          RedisConfig(const RedisConfig &) = default ;
          RedisConfig(RedisConfig &&) = default ;
          RedisConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RedisConfig() = default ;
          RedisConfig& operator=(const RedisConfig &) = default ;
          RedisConfig& operator=(RedisConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->databaseNumber_ == nullptr
        && this->host_ == nullptr && this->password_ == nullptr && this->port_ == nullptr && this->timeout_ == nullptr && this->username_ == nullptr; };
          // databaseNumber Field Functions 
          bool hasDatabaseNumber() const { return this->databaseNumber_ != nullptr;};
          void deleteDatabaseNumber() { this->databaseNumber_ = nullptr;};
          inline int32_t getDatabaseNumber() const { DARABONBA_PTR_GET_DEFAULT(databaseNumber_, 0) };
          inline RedisConfig& setDatabaseNumber(int32_t databaseNumber) { DARABONBA_PTR_SET_VALUE(databaseNumber_, databaseNumber) };


          // host Field Functions 
          bool hasHost() const { return this->host_ != nullptr;};
          void deleteHost() { this->host_ = nullptr;};
          inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
          inline RedisConfig& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


          // password Field Functions 
          bool hasPassword() const { return this->password_ != nullptr;};
          void deletePassword() { this->password_ = nullptr;};
          inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
          inline RedisConfig& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline RedisConfig& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // timeout Field Functions 
          bool hasTimeout() const { return this->timeout_ != nullptr;};
          void deleteTimeout() { this->timeout_ = nullptr;};
          inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
          inline RedisConfig& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


          // username Field Functions 
          bool hasUsername() const { return this->username_ != nullptr;};
          void deleteUsername() { this->username_ = nullptr;};
          inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
          inline RedisConfig& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


        protected:
          shared_ptr<int32_t> databaseNumber_ {};
          shared_ptr<string> host_ {};
          shared_ptr<string> password_ {};
          shared_ptr<int32_t> port_ {};
          shared_ptr<int32_t> timeout_ {};
          shared_ptr<string> username_ {};
        };

        class PluginStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PluginStatus& obj) { 
            DARABONBA_PTR_TO_JSON(errorLogs, errorLogs_);
            DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
            DARABONBA_PTR_TO_JSON(serviceHealthy, serviceHealthy_);
          };
          friend void from_json(const Darabonba::Json& j, PluginStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(errorLogs, errorLogs_);
            DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
            DARABONBA_PTR_FROM_JSON(serviceHealthy, serviceHealthy_);
          };
          PluginStatus() = default ;
          PluginStatus(const PluginStatus &) = default ;
          PluginStatus(PluginStatus &&) = default ;
          PluginStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PluginStatus() = default ;
          PluginStatus& operator=(const PluginStatus &) = default ;
          PluginStatus& operator=(PluginStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorLogs_ == nullptr
        && this->pluginId_ == nullptr && this->serviceHealthy_ == nullptr; };
          // errorLogs Field Functions 
          bool hasErrorLogs() const { return this->errorLogs_ != nullptr;};
          void deleteErrorLogs() { this->errorLogs_ = nullptr;};
          inline const map<string, string> & getErrorLogs() const { DARABONBA_PTR_GET_CONST(errorLogs_, map<string, string>) };
          inline map<string, string> getErrorLogs() { DARABONBA_PTR_GET(errorLogs_, map<string, string>) };
          inline PluginStatus& setErrorLogs(const map<string, string> & errorLogs) { DARABONBA_PTR_SET_VALUE(errorLogs_, errorLogs) };
          inline PluginStatus& setErrorLogs(map<string, string> && errorLogs) { DARABONBA_PTR_SET_RVALUE(errorLogs_, errorLogs) };


          // pluginId Field Functions 
          bool hasPluginId() const { return this->pluginId_ != nullptr;};
          void deletePluginId() { this->pluginId_ = nullptr;};
          inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
          inline PluginStatus& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


          // serviceHealthy Field Functions 
          bool hasServiceHealthy() const { return this->serviceHealthy_ != nullptr;};
          void deleteServiceHealthy() { this->serviceHealthy_ = nullptr;};
          inline bool getServiceHealthy() const { DARABONBA_PTR_GET_DEFAULT(serviceHealthy_, false) };
          inline PluginStatus& setServiceHealthy(bool serviceHealthy) { DARABONBA_PTR_SET_VALUE(serviceHealthy_, serviceHealthy) };


        protected:
          shared_ptr<map<string, string>> errorLogs_ {};
          shared_ptr<string> pluginId_ {};
          shared_ptr<bool> serviceHealthy_ {};
        };

        class EmbeddingConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EmbeddingConfig& obj) { 
            DARABONBA_PTR_TO_JSON(modelName, modelName_);
            DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
            DARABONBA_PTR_TO_JSON(timeout, timeout_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, EmbeddingConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(modelName, modelName_);
            DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
            DARABONBA_PTR_FROM_JSON(timeout, timeout_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          EmbeddingConfig() = default ;
          EmbeddingConfig(const EmbeddingConfig &) = default ;
          EmbeddingConfig(EmbeddingConfig &&) = default ;
          EmbeddingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EmbeddingConfig() = default ;
          EmbeddingConfig& operator=(const EmbeddingConfig &) = default ;
          EmbeddingConfig& operator=(EmbeddingConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->modelName_ == nullptr
        && this->serviceId_ == nullptr && this->timeout_ == nullptr && this->type_ == nullptr; };
          // modelName Field Functions 
          bool hasModelName() const { return this->modelName_ != nullptr;};
          void deleteModelName() { this->modelName_ = nullptr;};
          inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
          inline EmbeddingConfig& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


          // serviceId Field Functions 
          bool hasServiceId() const { return this->serviceId_ != nullptr;};
          void deleteServiceId() { this->serviceId_ = nullptr;};
          inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
          inline EmbeddingConfig& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


          // timeout Field Functions 
          bool hasTimeout() const { return this->timeout_ != nullptr;};
          void deleteTimeout() { this->timeout_ = nullptr;};
          inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
          inline EmbeddingConfig& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline EmbeddingConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> modelName_ {};
          shared_ptr<string> serviceId_ {};
          shared_ptr<int32_t> timeout_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->cacheKeyStrategy_ == nullptr
        && this->cacheMode_ == nullptr && this->cacheTTL_ == nullptr && this->embeddingConfig_ == nullptr && this->pluginStatus_ == nullptr && this->redisConfig_ == nullptr
        && this->vectorConfig_ == nullptr; };
        // cacheKeyStrategy Field Functions 
        bool hasCacheKeyStrategy() const { return this->cacheKeyStrategy_ != nullptr;};
        void deleteCacheKeyStrategy() { this->cacheKeyStrategy_ = nullptr;};
        inline string getCacheKeyStrategy() const { DARABONBA_PTR_GET_DEFAULT(cacheKeyStrategy_, "") };
        inline AiCacheConfig& setCacheKeyStrategy(string cacheKeyStrategy) { DARABONBA_PTR_SET_VALUE(cacheKeyStrategy_, cacheKeyStrategy) };


        // cacheMode Field Functions 
        bool hasCacheMode() const { return this->cacheMode_ != nullptr;};
        void deleteCacheMode() { this->cacheMode_ = nullptr;};
        inline string getCacheMode() const { DARABONBA_PTR_GET_DEFAULT(cacheMode_, "") };
        inline AiCacheConfig& setCacheMode(string cacheMode) { DARABONBA_PTR_SET_VALUE(cacheMode_, cacheMode) };


        // cacheTTL Field Functions 
        bool hasCacheTTL() const { return this->cacheTTL_ != nullptr;};
        void deleteCacheTTL() { this->cacheTTL_ = nullptr;};
        inline int32_t getCacheTTL() const { DARABONBA_PTR_GET_DEFAULT(cacheTTL_, 0) };
        inline AiCacheConfig& setCacheTTL(int32_t cacheTTL) { DARABONBA_PTR_SET_VALUE(cacheTTL_, cacheTTL) };


        // embeddingConfig Field Functions 
        bool hasEmbeddingConfig() const { return this->embeddingConfig_ != nullptr;};
        void deleteEmbeddingConfig() { this->embeddingConfig_ = nullptr;};
        inline const AiCacheConfig::EmbeddingConfig & getEmbeddingConfig() const { DARABONBA_PTR_GET_CONST(embeddingConfig_, AiCacheConfig::EmbeddingConfig) };
        inline AiCacheConfig::EmbeddingConfig getEmbeddingConfig() { DARABONBA_PTR_GET(embeddingConfig_, AiCacheConfig::EmbeddingConfig) };
        inline AiCacheConfig& setEmbeddingConfig(const AiCacheConfig::EmbeddingConfig & embeddingConfig) { DARABONBA_PTR_SET_VALUE(embeddingConfig_, embeddingConfig) };
        inline AiCacheConfig& setEmbeddingConfig(AiCacheConfig::EmbeddingConfig && embeddingConfig) { DARABONBA_PTR_SET_RVALUE(embeddingConfig_, embeddingConfig) };


        // pluginStatus Field Functions 
        bool hasPluginStatus() const { return this->pluginStatus_ != nullptr;};
        void deletePluginStatus() { this->pluginStatus_ = nullptr;};
        inline const AiCacheConfig::PluginStatus & getPluginStatus() const { DARABONBA_PTR_GET_CONST(pluginStatus_, AiCacheConfig::PluginStatus) };
        inline AiCacheConfig::PluginStatus getPluginStatus() { DARABONBA_PTR_GET(pluginStatus_, AiCacheConfig::PluginStatus) };
        inline AiCacheConfig& setPluginStatus(const AiCacheConfig::PluginStatus & pluginStatus) { DARABONBA_PTR_SET_VALUE(pluginStatus_, pluginStatus) };
        inline AiCacheConfig& setPluginStatus(AiCacheConfig::PluginStatus && pluginStatus) { DARABONBA_PTR_SET_RVALUE(pluginStatus_, pluginStatus) };


        // redisConfig Field Functions 
        bool hasRedisConfig() const { return this->redisConfig_ != nullptr;};
        void deleteRedisConfig() { this->redisConfig_ = nullptr;};
        inline const AiCacheConfig::RedisConfig & getRedisConfig() const { DARABONBA_PTR_GET_CONST(redisConfig_, AiCacheConfig::RedisConfig) };
        inline AiCacheConfig::RedisConfig getRedisConfig() { DARABONBA_PTR_GET(redisConfig_, AiCacheConfig::RedisConfig) };
        inline AiCacheConfig& setRedisConfig(const AiCacheConfig::RedisConfig & redisConfig) { DARABONBA_PTR_SET_VALUE(redisConfig_, redisConfig) };
        inline AiCacheConfig& setRedisConfig(AiCacheConfig::RedisConfig && redisConfig) { DARABONBA_PTR_SET_RVALUE(redisConfig_, redisConfig) };


        // vectorConfig Field Functions 
        bool hasVectorConfig() const { return this->vectorConfig_ != nullptr;};
        void deleteVectorConfig() { this->vectorConfig_ = nullptr;};
        inline const AiCacheConfig::VectorConfig & getVectorConfig() const { DARABONBA_PTR_GET_CONST(vectorConfig_, AiCacheConfig::VectorConfig) };
        inline AiCacheConfig::VectorConfig getVectorConfig() { DARABONBA_PTR_GET(vectorConfig_, AiCacheConfig::VectorConfig) };
        inline AiCacheConfig& setVectorConfig(const AiCacheConfig::VectorConfig & vectorConfig) { DARABONBA_PTR_SET_VALUE(vectorConfig_, vectorConfig) };
        inline AiCacheConfig& setVectorConfig(AiCacheConfig::VectorConfig && vectorConfig) { DARABONBA_PTR_SET_RVALUE(vectorConfig_, vectorConfig) };


      protected:
        shared_ptr<string> cacheKeyStrategy_ {};
        shared_ptr<string> cacheMode_ {};
        shared_ptr<int32_t> cacheTTL_ {};
        shared_ptr<AiCacheConfig::EmbeddingConfig> embeddingConfig_ {};
        shared_ptr<AiCacheConfig::PluginStatus> pluginStatus_ {};
        shared_ptr<AiCacheConfig::RedisConfig> redisConfig_ {};
        shared_ptr<AiCacheConfig::VectorConfig> vectorConfig_ {};
      };

      virtual bool empty() const override { return this->aiCacheConfig_ == nullptr
        && this->aiFallbackConfig_ == nullptr && this->aiNetworkSearchConfig_ == nullptr && this->aiSecurityGuardConfig_ == nullptr && this->aiStatisticsConfig_ == nullptr && this->aiTokenRateLimitConfig_ == nullptr
        && this->aiToolSelectionConfig_ == nullptr && this->enable_ == nullptr && this->semanticRouterConfig_ == nullptr && this->type_ == nullptr; };
      // aiCacheConfig Field Functions 
      bool hasAiCacheConfig() const { return this->aiCacheConfig_ != nullptr;};
      void deleteAiCacheConfig() { this->aiCacheConfig_ = nullptr;};
      inline const PolicyConfigs::AiCacheConfig & getAiCacheConfig() const { DARABONBA_PTR_GET_CONST(aiCacheConfig_, PolicyConfigs::AiCacheConfig) };
      inline PolicyConfigs::AiCacheConfig getAiCacheConfig() { DARABONBA_PTR_GET(aiCacheConfig_, PolicyConfigs::AiCacheConfig) };
      inline PolicyConfigs& setAiCacheConfig(const PolicyConfigs::AiCacheConfig & aiCacheConfig) { DARABONBA_PTR_SET_VALUE(aiCacheConfig_, aiCacheConfig) };
      inline PolicyConfigs& setAiCacheConfig(PolicyConfigs::AiCacheConfig && aiCacheConfig) { DARABONBA_PTR_SET_RVALUE(aiCacheConfig_, aiCacheConfig) };


      // aiFallbackConfig Field Functions 
      bool hasAiFallbackConfig() const { return this->aiFallbackConfig_ != nullptr;};
      void deleteAiFallbackConfig() { this->aiFallbackConfig_ = nullptr;};
      inline const PolicyConfigs::AiFallbackConfig & getAiFallbackConfig() const { DARABONBA_PTR_GET_CONST(aiFallbackConfig_, PolicyConfigs::AiFallbackConfig) };
      inline PolicyConfigs::AiFallbackConfig getAiFallbackConfig() { DARABONBA_PTR_GET(aiFallbackConfig_, PolicyConfigs::AiFallbackConfig) };
      inline PolicyConfigs& setAiFallbackConfig(const PolicyConfigs::AiFallbackConfig & aiFallbackConfig) { DARABONBA_PTR_SET_VALUE(aiFallbackConfig_, aiFallbackConfig) };
      inline PolicyConfigs& setAiFallbackConfig(PolicyConfigs::AiFallbackConfig && aiFallbackConfig) { DARABONBA_PTR_SET_RVALUE(aiFallbackConfig_, aiFallbackConfig) };


      // aiNetworkSearchConfig Field Functions 
      bool hasAiNetworkSearchConfig() const { return this->aiNetworkSearchConfig_ != nullptr;};
      void deleteAiNetworkSearchConfig() { this->aiNetworkSearchConfig_ = nullptr;};
      inline const PolicyConfigs::AiNetworkSearchConfig & getAiNetworkSearchConfig() const { DARABONBA_PTR_GET_CONST(aiNetworkSearchConfig_, PolicyConfigs::AiNetworkSearchConfig) };
      inline PolicyConfigs::AiNetworkSearchConfig getAiNetworkSearchConfig() { DARABONBA_PTR_GET(aiNetworkSearchConfig_, PolicyConfigs::AiNetworkSearchConfig) };
      inline PolicyConfigs& setAiNetworkSearchConfig(const PolicyConfigs::AiNetworkSearchConfig & aiNetworkSearchConfig) { DARABONBA_PTR_SET_VALUE(aiNetworkSearchConfig_, aiNetworkSearchConfig) };
      inline PolicyConfigs& setAiNetworkSearchConfig(PolicyConfigs::AiNetworkSearchConfig && aiNetworkSearchConfig) { DARABONBA_PTR_SET_RVALUE(aiNetworkSearchConfig_, aiNetworkSearchConfig) };


      // aiSecurityGuardConfig Field Functions 
      bool hasAiSecurityGuardConfig() const { return this->aiSecurityGuardConfig_ != nullptr;};
      void deleteAiSecurityGuardConfig() { this->aiSecurityGuardConfig_ = nullptr;};
      inline const PolicyConfigs::AiSecurityGuardConfig & getAiSecurityGuardConfig() const { DARABONBA_PTR_GET_CONST(aiSecurityGuardConfig_, PolicyConfigs::AiSecurityGuardConfig) };
      inline PolicyConfigs::AiSecurityGuardConfig getAiSecurityGuardConfig() { DARABONBA_PTR_GET(aiSecurityGuardConfig_, PolicyConfigs::AiSecurityGuardConfig) };
      inline PolicyConfigs& setAiSecurityGuardConfig(const PolicyConfigs::AiSecurityGuardConfig & aiSecurityGuardConfig) { DARABONBA_PTR_SET_VALUE(aiSecurityGuardConfig_, aiSecurityGuardConfig) };
      inline PolicyConfigs& setAiSecurityGuardConfig(PolicyConfigs::AiSecurityGuardConfig && aiSecurityGuardConfig) { DARABONBA_PTR_SET_RVALUE(aiSecurityGuardConfig_, aiSecurityGuardConfig) };


      // aiStatisticsConfig Field Functions 
      bool hasAiStatisticsConfig() const { return this->aiStatisticsConfig_ != nullptr;};
      void deleteAiStatisticsConfig() { this->aiStatisticsConfig_ = nullptr;};
      inline const PolicyConfigs::AiStatisticsConfig & getAiStatisticsConfig() const { DARABONBA_PTR_GET_CONST(aiStatisticsConfig_, PolicyConfigs::AiStatisticsConfig) };
      inline PolicyConfigs::AiStatisticsConfig getAiStatisticsConfig() { DARABONBA_PTR_GET(aiStatisticsConfig_, PolicyConfigs::AiStatisticsConfig) };
      inline PolicyConfigs& setAiStatisticsConfig(const PolicyConfigs::AiStatisticsConfig & aiStatisticsConfig) { DARABONBA_PTR_SET_VALUE(aiStatisticsConfig_, aiStatisticsConfig) };
      inline PolicyConfigs& setAiStatisticsConfig(PolicyConfigs::AiStatisticsConfig && aiStatisticsConfig) { DARABONBA_PTR_SET_RVALUE(aiStatisticsConfig_, aiStatisticsConfig) };


      // aiTokenRateLimitConfig Field Functions 
      bool hasAiTokenRateLimitConfig() const { return this->aiTokenRateLimitConfig_ != nullptr;};
      void deleteAiTokenRateLimitConfig() { this->aiTokenRateLimitConfig_ = nullptr;};
      inline const PolicyConfigs::AiTokenRateLimitConfig & getAiTokenRateLimitConfig() const { DARABONBA_PTR_GET_CONST(aiTokenRateLimitConfig_, PolicyConfigs::AiTokenRateLimitConfig) };
      inline PolicyConfigs::AiTokenRateLimitConfig getAiTokenRateLimitConfig() { DARABONBA_PTR_GET(aiTokenRateLimitConfig_, PolicyConfigs::AiTokenRateLimitConfig) };
      inline PolicyConfigs& setAiTokenRateLimitConfig(const PolicyConfigs::AiTokenRateLimitConfig & aiTokenRateLimitConfig) { DARABONBA_PTR_SET_VALUE(aiTokenRateLimitConfig_, aiTokenRateLimitConfig) };
      inline PolicyConfigs& setAiTokenRateLimitConfig(PolicyConfigs::AiTokenRateLimitConfig && aiTokenRateLimitConfig) { DARABONBA_PTR_SET_RVALUE(aiTokenRateLimitConfig_, aiTokenRateLimitConfig) };


      // aiToolSelectionConfig Field Functions 
      bool hasAiToolSelectionConfig() const { return this->aiToolSelectionConfig_ != nullptr;};
      void deleteAiToolSelectionConfig() { this->aiToolSelectionConfig_ = nullptr;};
      inline const PolicyConfigs::AiToolSelectionConfig & getAiToolSelectionConfig() const { DARABONBA_PTR_GET_CONST(aiToolSelectionConfig_, PolicyConfigs::AiToolSelectionConfig) };
      inline PolicyConfigs::AiToolSelectionConfig getAiToolSelectionConfig() { DARABONBA_PTR_GET(aiToolSelectionConfig_, PolicyConfigs::AiToolSelectionConfig) };
      inline PolicyConfigs& setAiToolSelectionConfig(const PolicyConfigs::AiToolSelectionConfig & aiToolSelectionConfig) { DARABONBA_PTR_SET_VALUE(aiToolSelectionConfig_, aiToolSelectionConfig) };
      inline PolicyConfigs& setAiToolSelectionConfig(PolicyConfigs::AiToolSelectionConfig && aiToolSelectionConfig) { DARABONBA_PTR_SET_RVALUE(aiToolSelectionConfig_, aiToolSelectionConfig) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline PolicyConfigs& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // semanticRouterConfig Field Functions 
      bool hasSemanticRouterConfig() const { return this->semanticRouterConfig_ != nullptr;};
      void deleteSemanticRouterConfig() { this->semanticRouterConfig_ = nullptr;};
      inline const PolicyConfigs::SemanticRouterConfig & getSemanticRouterConfig() const { DARABONBA_PTR_GET_CONST(semanticRouterConfig_, PolicyConfigs::SemanticRouterConfig) };
      inline PolicyConfigs::SemanticRouterConfig getSemanticRouterConfig() { DARABONBA_PTR_GET(semanticRouterConfig_, PolicyConfigs::SemanticRouterConfig) };
      inline PolicyConfigs& setSemanticRouterConfig(const PolicyConfigs::SemanticRouterConfig & semanticRouterConfig) { DARABONBA_PTR_SET_VALUE(semanticRouterConfig_, semanticRouterConfig) };
      inline PolicyConfigs& setSemanticRouterConfig(PolicyConfigs::SemanticRouterConfig && semanticRouterConfig) { DARABONBA_PTR_SET_RVALUE(semanticRouterConfig_, semanticRouterConfig) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline PolicyConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<PolicyConfigs::AiCacheConfig> aiCacheConfig_ {};
      shared_ptr<PolicyConfigs::AiFallbackConfig> aiFallbackConfig_ {};
      shared_ptr<PolicyConfigs::AiNetworkSearchConfig> aiNetworkSearchConfig_ {};
      shared_ptr<PolicyConfigs::AiSecurityGuardConfig> aiSecurityGuardConfig_ {};
      shared_ptr<PolicyConfigs::AiStatisticsConfig> aiStatisticsConfig_ {};
      shared_ptr<PolicyConfigs::AiTokenRateLimitConfig> aiTokenRateLimitConfig_ {};
      shared_ptr<PolicyConfigs::AiToolSelectionConfig> aiToolSelectionConfig_ {};
      shared_ptr<bool> enable_ {};
      shared_ptr<PolicyConfigs::SemanticRouterConfig> semanticRouterConfig_ {};
      shared_ptr<string> type_ {};
    };

    class McpRouteConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const McpRouteConfig& obj) { 
        DARABONBA_PTR_TO_JSON(exposedUriPath, exposedUriPath_);
        DARABONBA_PTR_TO_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, McpRouteConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(exposedUriPath, exposedUriPath_);
        DARABONBA_PTR_FROM_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      };
      McpRouteConfig() = default ;
      McpRouteConfig(const McpRouteConfig &) = default ;
      McpRouteConfig(McpRouteConfig &&) = default ;
      McpRouteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~McpRouteConfig() = default ;
      McpRouteConfig& operator=(const McpRouteConfig &) = default ;
      McpRouteConfig& operator=(McpRouteConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exposedUriPath_ == nullptr
        && this->mcpStatisticsEnable_ == nullptr && this->protocol_ == nullptr; };
      // exposedUriPath Field Functions 
      bool hasExposedUriPath() const { return this->exposedUriPath_ != nullptr;};
      void deleteExposedUriPath() { this->exposedUriPath_ = nullptr;};
      inline string getExposedUriPath() const { DARABONBA_PTR_GET_DEFAULT(exposedUriPath_, "") };
      inline McpRouteConfig& setExposedUriPath(string exposedUriPath) { DARABONBA_PTR_SET_VALUE(exposedUriPath_, exposedUriPath) };


      // mcpStatisticsEnable Field Functions 
      bool hasMcpStatisticsEnable() const { return this->mcpStatisticsEnable_ != nullptr;};
      void deleteMcpStatisticsEnable() { this->mcpStatisticsEnable_ = nullptr;};
      inline bool getMcpStatisticsEnable() const { DARABONBA_PTR_GET_DEFAULT(mcpStatisticsEnable_, false) };
      inline McpRouteConfig& setMcpStatisticsEnable(bool mcpStatisticsEnable) { DARABONBA_PTR_SET_VALUE(mcpStatisticsEnable_, mcpStatisticsEnable) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline McpRouteConfig& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      shared_ptr<string> exposedUriPath_ {};
      shared_ptr<bool> mcpStatisticsEnable_ {};
      shared_ptr<string> protocol_ {};
    };

    class BackendConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackendConfig& obj) { 
        DARABONBA_PTR_TO_JSON(scene, scene_);
        DARABONBA_PTR_TO_JSON(services, services_);
      };
      friend void from_json(const Darabonba::Json& j, BackendConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(scene, scene_);
        DARABONBA_PTR_FROM_JSON(services, services_);
      };
      BackendConfig() = default ;
      BackendConfig(const BackendConfig &) = default ;
      BackendConfig(BackendConfig &&) = default ;
      BackendConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackendConfig() = default ;
      BackendConfig& operator=(const BackendConfig &) = default ;
      BackendConfig& operator=(BackendConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Services : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Services& obj) { 
          DARABONBA_PTR_TO_JSON(port, port_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
          DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
          DARABONBA_PTR_TO_JSON(version, version_);
          DARABONBA_PTR_TO_JSON(weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, Services& obj) { 
          DARABONBA_PTR_FROM_JSON(port, port_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
          DARABONBA_PTR_FROM_JSON(version, version_);
          DARABONBA_PTR_FROM_JSON(weight, weight_);
        };
        Services() = default ;
        Services(const Services &) = default ;
        Services(Services &&) = default ;
        Services(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Services() = default ;
        Services& operator=(const Services &) = default ;
        Services& operator=(Services &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr && this->serviceId_ == nullptr && this->version_ == nullptr && this->weight_ == nullptr; };
        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline Services& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline Services& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // serviceId Field Functions 
        bool hasServiceId() const { return this->serviceId_ != nullptr;};
        void deleteServiceId() { this->serviceId_ = nullptr;};
        inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
        inline Services& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Services& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline Services& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The service port (omit for dynamic ports).
        shared_ptr<int32_t> port_ {};
        // The service protocol. Valid values:
        // 
        // *   HTTP
        // *   HTTPS
        shared_ptr<string> protocol_ {};
        // The service ID.
        shared_ptr<string> serviceId_ {};
        // The service version.
        shared_ptr<string> version_ {};
        // The traffic weight percentage.
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->scene_ == nullptr
        && this->services_ == nullptr; };
      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline BackendConfig& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // services Field Functions 
      bool hasServices() const { return this->services_ != nullptr;};
      void deleteServices() { this->services_ = nullptr;};
      inline const vector<BackendConfig::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<BackendConfig::Services>) };
      inline vector<BackendConfig::Services> getServices() { DARABONBA_PTR_GET(services_, vector<BackendConfig::Services>) };
      inline BackendConfig& setServices(const vector<BackendConfig::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
      inline BackendConfig& setServices(vector<BackendConfig::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    protected:
      // The backend service scenario. Valid values:
      // 
      // *   SingleService
      // *   MultiServiceByRatio
      // *   Redirect
      // *   Mock
      shared_ptr<string> scene_ {};
      // The list of backend services.
      shared_ptr<vector<BackendConfig::Services>> services_ {};
    };

    virtual bool empty() const override { return this->backendConfig_ == nullptr
        && this->deployConfigs_ == nullptr && this->description_ == nullptr && this->domainIds_ == nullptr && this->environmentId_ == nullptr && this->match_ == nullptr
        && this->mcpRouteConfig_ == nullptr && this->name_ == nullptr && this->policyConfigs_ == nullptr; };
    // backendConfig Field Functions 
    bool hasBackendConfig() const { return this->backendConfig_ != nullptr;};
    void deleteBackendConfig() { this->backendConfig_ = nullptr;};
    inline const UpdateHttpApiRouteRequest::BackendConfig & getBackendConfig() const { DARABONBA_PTR_GET_CONST(backendConfig_, UpdateHttpApiRouteRequest::BackendConfig) };
    inline UpdateHttpApiRouteRequest::BackendConfig getBackendConfig() { DARABONBA_PTR_GET(backendConfig_, UpdateHttpApiRouteRequest::BackendConfig) };
    inline UpdateHttpApiRouteRequest& setBackendConfig(const UpdateHttpApiRouteRequest::BackendConfig & backendConfig) { DARABONBA_PTR_SET_VALUE(backendConfig_, backendConfig) };
    inline UpdateHttpApiRouteRequest& setBackendConfig(UpdateHttpApiRouteRequest::BackendConfig && backendConfig) { DARABONBA_PTR_SET_RVALUE(backendConfig_, backendConfig) };


    // deployConfigs Field Functions 
    bool hasDeployConfigs() const { return this->deployConfigs_ != nullptr;};
    void deleteDeployConfigs() { this->deployConfigs_ = nullptr;};
    inline const vector<HttpApiDeployConfig> & getDeployConfigs() const { DARABONBA_PTR_GET_CONST(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline vector<HttpApiDeployConfig> getDeployConfigs() { DARABONBA_PTR_GET(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline UpdateHttpApiRouteRequest& setDeployConfigs(const vector<HttpApiDeployConfig> & deployConfigs) { DARABONBA_PTR_SET_VALUE(deployConfigs_, deployConfigs) };
    inline UpdateHttpApiRouteRequest& setDeployConfigs(vector<HttpApiDeployConfig> && deployConfigs) { DARABONBA_PTR_SET_RVALUE(deployConfigs_, deployConfigs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateHttpApiRouteRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & getDomainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> getDomainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline UpdateHttpApiRouteRequest& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline UpdateHttpApiRouteRequest& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline UpdateHttpApiRouteRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const HttpRouteMatch & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpRouteMatch) };
    inline HttpRouteMatch getMatch() { DARABONBA_PTR_GET(match_, HttpRouteMatch) };
    inline UpdateHttpApiRouteRequest& setMatch(const HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline UpdateHttpApiRouteRequest& setMatch(HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // mcpRouteConfig Field Functions 
    bool hasMcpRouteConfig() const { return this->mcpRouteConfig_ != nullptr;};
    void deleteMcpRouteConfig() { this->mcpRouteConfig_ = nullptr;};
    inline const UpdateHttpApiRouteRequest::McpRouteConfig & getMcpRouteConfig() const { DARABONBA_PTR_GET_CONST(mcpRouteConfig_, UpdateHttpApiRouteRequest::McpRouteConfig) };
    inline UpdateHttpApiRouteRequest::McpRouteConfig getMcpRouteConfig() { DARABONBA_PTR_GET(mcpRouteConfig_, UpdateHttpApiRouteRequest::McpRouteConfig) };
    inline UpdateHttpApiRouteRequest& setMcpRouteConfig(const UpdateHttpApiRouteRequest::McpRouteConfig & mcpRouteConfig) { DARABONBA_PTR_SET_VALUE(mcpRouteConfig_, mcpRouteConfig) };
    inline UpdateHttpApiRouteRequest& setMcpRouteConfig(UpdateHttpApiRouteRequest::McpRouteConfig && mcpRouteConfig) { DARABONBA_PTR_SET_RVALUE(mcpRouteConfig_, mcpRouteConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateHttpApiRouteRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyConfigs Field Functions 
    bool hasPolicyConfigs() const { return this->policyConfigs_ != nullptr;};
    void deletePolicyConfigs() { this->policyConfigs_ = nullptr;};
    inline const vector<UpdateHttpApiRouteRequest::PolicyConfigs> & getPolicyConfigs() const { DARABONBA_PTR_GET_CONST(policyConfigs_, vector<UpdateHttpApiRouteRequest::PolicyConfigs>) };
    inline vector<UpdateHttpApiRouteRequest::PolicyConfigs> getPolicyConfigs() { DARABONBA_PTR_GET(policyConfigs_, vector<UpdateHttpApiRouteRequest::PolicyConfigs>) };
    inline UpdateHttpApiRouteRequest& setPolicyConfigs(const vector<UpdateHttpApiRouteRequest::PolicyConfigs> & policyConfigs) { DARABONBA_PTR_SET_VALUE(policyConfigs_, policyConfigs) };
    inline UpdateHttpApiRouteRequest& setPolicyConfigs(vector<UpdateHttpApiRouteRequest::PolicyConfigs> && policyConfigs) { DARABONBA_PTR_SET_RVALUE(policyConfigs_, policyConfigs) };


  protected:
    // The backend service configurations for the route.
    shared_ptr<UpdateHttpApiRouteRequest::BackendConfig> backendConfig_ {};
    shared_ptr<vector<HttpApiDeployConfig>> deployConfigs_ {};
    // The route description.
    shared_ptr<string> description_ {};
    // The list of domain IDs.
    shared_ptr<vector<string>> domainIds_ {};
    // The environment ID.
    shared_ptr<string> environmentId_ {};
    // The route match rule.
    shared_ptr<HttpRouteMatch> match_ {};
    shared_ptr<UpdateHttpApiRouteRequest::McpRouteConfig> mcpRouteConfig_ {};
    shared_ptr<string> name_ {};
    shared_ptr<vector<UpdateHttpApiRouteRequest::PolicyConfigs>> policyConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
