// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AITOOLSELECTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AITOOLSELECTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AiPluginStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
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
        // The model name.
        shared_ptr<string> modelName_ {};
        // The model service ID.
        shared_ptr<string> serviceId_ {};
        // The request timeout period, in milliseconds.
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
      // The fallback strategy upon failure.
      shared_ptr<string> fallbackStrategy_ {};
      // The filtering method.
      shared_ptr<string> filteringMethod_ {};
      // The reranking model service configuration.
      shared_ptr<ToolReranking::ModelService> modelService_ {};
      // The score threshold.
      shared_ptr<float> scoreThreshold_ {};
      // The retention percentage.
      shared_ptr<int32_t> topKPercent_ {};
      // The retention count.
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
        // The number of conversation turns after which rewriting is triggered.
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
        // The custom prompt content.
        shared_ptr<string> customPrompt_ {};
        // The prompt type.
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
        // The model name.
        shared_ptr<string> modelName_ {};
        // The model service ID.
        shared_ptr<string> serviceId_ {};
        // The request timeout period, in milliseconds.
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
        // The context selection method.
        shared_ptr<string> type_ {};
        // The number of retained messages or characters.
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
      // The context selection configuration.
      shared_ptr<QueryRewriting::ContextSelection> contextSelection_ {};
      // Specifies whether query rewrite is enabled.
      shared_ptr<bool> enabled_ {};
      // The fallback strategy.
      shared_ptr<string> fallbackStrategy_ {};
      // The maximum number of output tokens for rewriting.
      shared_ptr<int32_t> maxOutputTokens_ {};
      // The rewriting model service configuration.
      shared_ptr<QueryRewriting::ModelService> modelService_ {};
      // The prompt configuration.
      shared_ptr<QueryRewriting::PromptConfig> promptConfig_ {};
      // The trigger condition configuration.
      shared_ptr<QueryRewriting::TriggerConditions> triggerConditions_ {};
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
      // The tool count threshold.
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
    inline const AiPluginStatus & getPluginStatus() const { DARABONBA_PTR_GET_CONST(pluginStatus_, AiPluginStatus) };
    inline AiPluginStatus getPluginStatus() { DARABONBA_PTR_GET(pluginStatus_, AiPluginStatus) };
    inline AiToolSelectionConfig& setPluginStatus(const AiPluginStatus & pluginStatus) { DARABONBA_PTR_SET_VALUE(pluginStatus_, pluginStatus) };
    inline AiToolSelectionConfig& setPluginStatus(AiPluginStatus && pluginStatus) { DARABONBA_PTR_SET_RVALUE(pluginStatus_, pluginStatus) };


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
    // The enable conditions configuration. Controls when the overall feature is triggered.
    shared_ptr<AiToolSelectionConfig::EnableConditions> enableConditions_ {};
    // The plug-in running status.
    shared_ptr<AiPluginStatus> pluginStatus_ {};
    // The query rewrite configuration. Rewrites user queries before tool reranking to improve matching precision.
    shared_ptr<AiToolSelectionConfig::QueryRewriting> queryRewriting_ {};
    // The tool reranking configuration. Uses a model to rank and filter candidate tools.
    shared_ptr<AiToolSelectionConfig::ToolReranking> toolReranking_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
