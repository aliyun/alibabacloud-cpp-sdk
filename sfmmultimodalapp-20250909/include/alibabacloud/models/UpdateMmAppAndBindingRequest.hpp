// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMMAPPANDBINDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMMAPPANDBINDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/BindingConfigAgentsIntentFewShotConfigValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateMmAppAndBindingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMmAppAndBindingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BindingConfig, bindingConfig_);
      DARABONBA_PTR_TO_JSON(ConversationConfig, conversationConfig_);
      DARABONBA_PTR_TO_JSON(MemoryConfig, memoryConfig_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMmAppAndBindingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BindingConfig, bindingConfig_);
      DARABONBA_PTR_FROM_JSON(ConversationConfig, conversationConfig_);
      DARABONBA_PTR_FROM_JSON(MemoryConfig, memoryConfig_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateMmAppAndBindingRequest() = default ;
    UpdateMmAppAndBindingRequest(const UpdateMmAppAndBindingRequest &) = default ;
    UpdateMmAppAndBindingRequest(UpdateMmAppAndBindingRequest &&) = default ;
    UpdateMmAppAndBindingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMmAppAndBindingRequest() = default ;
    UpdateMmAppAndBindingRequest& operator=(const UpdateMmAppAndBindingRequest &) = default ;
    UpdateMmAppAndBindingRequest& operator=(UpdateMmAppAndBindingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModelConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EnableIntentRecognize, enableIntentRecognize_);
        DARABONBA_PTR_TO_JSON(EnableTransition, enableTransition_);
        DARABONBA_PTR_TO_JSON(HistoryLimit, historyLimit_);
        DARABONBA_PTR_TO_JSON(IntentOnlySwitch, intentOnlySwitch_);
        DARABONBA_PTR_TO_JSON(ModelType, modelType_);
        DARABONBA_PTR_TO_JSON(OpenMemory, openMemory_);
        DARABONBA_PTR_TO_JSON(OpenWebSearch, openWebSearch_);
        DARABONBA_PTR_TO_JSON(SearchModel, searchModel_);
        DARABONBA_PTR_TO_JSON(SearchStrategy, searchStrategy_);
        DARABONBA_PTR_TO_JSON(TextModal, textModal_);
        DARABONBA_PTR_TO_JSON(UserPromptParams, userPromptParams_);
        DARABONBA_PTR_TO_JSON(userQueryParams, userQueryParams_);
      };
      friend void from_json(const Darabonba::Json& j, ModelConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableIntentRecognize, enableIntentRecognize_);
        DARABONBA_PTR_FROM_JSON(EnableTransition, enableTransition_);
        DARABONBA_PTR_FROM_JSON(HistoryLimit, historyLimit_);
        DARABONBA_PTR_FROM_JSON(IntentOnlySwitch, intentOnlySwitch_);
        DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
        DARABONBA_PTR_FROM_JSON(OpenMemory, openMemory_);
        DARABONBA_PTR_FROM_JSON(OpenWebSearch, openWebSearch_);
        DARABONBA_PTR_FROM_JSON(SearchModel, searchModel_);
        DARABONBA_PTR_FROM_JSON(SearchStrategy, searchStrategy_);
        DARABONBA_PTR_FROM_JSON(TextModal, textModal_);
        DARABONBA_PTR_FROM_JSON(UserPromptParams, userPromptParams_);
        DARABONBA_PTR_FROM_JSON(userQueryParams, userQueryParams_);
      };
      ModelConfig() = default ;
      ModelConfig(const ModelConfig &) = default ;
      ModelConfig(ModelConfig &&) = default ;
      ModelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelConfig() = default ;
      ModelConfig& operator=(const ModelConfig &) = default ;
      ModelConfig& operator=(ModelConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserQueryParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserQueryParams& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, UserQueryParams& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        UserQueryParams() = default ;
        UserQueryParams(const UserQueryParams &) = default ;
        UserQueryParams(UserQueryParams &&) = default ;
        UserQueryParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserQueryParams() = default ;
        UserQueryParams& operator=(const UserQueryParams &) = default ;
        UserQueryParams& operator=(UserQueryParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline UserQueryParams& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline UserQueryParams& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline UserQueryParams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline UserQueryParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> defaultValue_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
      };

      class UserPromptParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserPromptParams& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, UserPromptParams& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        UserPromptParams() = default ;
        UserPromptParams(const UserPromptParams &) = default ;
        UserPromptParams(UserPromptParams &&) = default ;
        UserPromptParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserPromptParams() = default ;
        UserPromptParams& operator=(const UserPromptParams &) = default ;
        UserPromptParams& operator=(UserPromptParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline UserPromptParams& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline UserPromptParams& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline UserPromptParams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline UserPromptParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> defaultValue_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->enableIntentRecognize_ == nullptr
        && this->enableTransition_ == nullptr && this->historyLimit_ == nullptr && this->intentOnlySwitch_ == nullptr && this->modelType_ == nullptr && this->openMemory_ == nullptr
        && this->openWebSearch_ == nullptr && this->searchModel_ == nullptr && this->searchStrategy_ == nullptr && this->textModal_ == nullptr && this->userPromptParams_ == nullptr
        && this->userQueryParams_ == nullptr; };
      // enableIntentRecognize Field Functions 
      bool hasEnableIntentRecognize() const { return this->enableIntentRecognize_ != nullptr;};
      void deleteEnableIntentRecognize() { this->enableIntentRecognize_ = nullptr;};
      inline bool getEnableIntentRecognize() const { DARABONBA_PTR_GET_DEFAULT(enableIntentRecognize_, false) };
      inline ModelConfig& setEnableIntentRecognize(bool enableIntentRecognize) { DARABONBA_PTR_SET_VALUE(enableIntentRecognize_, enableIntentRecognize) };


      // enableTransition Field Functions 
      bool hasEnableTransition() const { return this->enableTransition_ != nullptr;};
      void deleteEnableTransition() { this->enableTransition_ = nullptr;};
      inline bool getEnableTransition() const { DARABONBA_PTR_GET_DEFAULT(enableTransition_, false) };
      inline ModelConfig& setEnableTransition(bool enableTransition) { DARABONBA_PTR_SET_VALUE(enableTransition_, enableTransition) };


      // historyLimit Field Functions 
      bool hasHistoryLimit() const { return this->historyLimit_ != nullptr;};
      void deleteHistoryLimit() { this->historyLimit_ = nullptr;};
      inline int32_t getHistoryLimit() const { DARABONBA_PTR_GET_DEFAULT(historyLimit_, 0) };
      inline ModelConfig& setHistoryLimit(int32_t historyLimit) { DARABONBA_PTR_SET_VALUE(historyLimit_, historyLimit) };


      // intentOnlySwitch Field Functions 
      bool hasIntentOnlySwitch() const { return this->intentOnlySwitch_ != nullptr;};
      void deleteIntentOnlySwitch() { this->intentOnlySwitch_ = nullptr;};
      inline bool getIntentOnlySwitch() const { DARABONBA_PTR_GET_DEFAULT(intentOnlySwitch_, false) };
      inline ModelConfig& setIntentOnlySwitch(bool intentOnlySwitch) { DARABONBA_PTR_SET_VALUE(intentOnlySwitch_, intentOnlySwitch) };


      // modelType Field Functions 
      bool hasModelType() const { return this->modelType_ != nullptr;};
      void deleteModelType() { this->modelType_ = nullptr;};
      inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
      inline ModelConfig& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


      // openMemory Field Functions 
      bool hasOpenMemory() const { return this->openMemory_ != nullptr;};
      void deleteOpenMemory() { this->openMemory_ = nullptr;};
      inline bool getOpenMemory() const { DARABONBA_PTR_GET_DEFAULT(openMemory_, false) };
      inline ModelConfig& setOpenMemory(bool openMemory) { DARABONBA_PTR_SET_VALUE(openMemory_, openMemory) };


      // openWebSearch Field Functions 
      bool hasOpenWebSearch() const { return this->openWebSearch_ != nullptr;};
      void deleteOpenWebSearch() { this->openWebSearch_ = nullptr;};
      inline bool getOpenWebSearch() const { DARABONBA_PTR_GET_DEFAULT(openWebSearch_, false) };
      inline ModelConfig& setOpenWebSearch(bool openWebSearch) { DARABONBA_PTR_SET_VALUE(openWebSearch_, openWebSearch) };


      // searchModel Field Functions 
      bool hasSearchModel() const { return this->searchModel_ != nullptr;};
      void deleteSearchModel() { this->searchModel_ = nullptr;};
      inline string getSearchModel() const { DARABONBA_PTR_GET_DEFAULT(searchModel_, "") };
      inline ModelConfig& setSearchModel(string searchModel) { DARABONBA_PTR_SET_VALUE(searchModel_, searchModel) };


      // searchStrategy Field Functions 
      bool hasSearchStrategy() const { return this->searchStrategy_ != nullptr;};
      void deleteSearchStrategy() { this->searchStrategy_ = nullptr;};
      inline string getSearchStrategy() const { DARABONBA_PTR_GET_DEFAULT(searchStrategy_, "") };
      inline ModelConfig& setSearchStrategy(string searchStrategy) { DARABONBA_PTR_SET_VALUE(searchStrategy_, searchStrategy) };


      // textModal Field Functions 
      bool hasTextModal() const { return this->textModal_ != nullptr;};
      void deleteTextModal() { this->textModal_ = nullptr;};
      inline string getTextModal() const { DARABONBA_PTR_GET_DEFAULT(textModal_, "") };
      inline ModelConfig& setTextModal(string textModal) { DARABONBA_PTR_SET_VALUE(textModal_, textModal) };


      // userPromptParams Field Functions 
      bool hasUserPromptParams() const { return this->userPromptParams_ != nullptr;};
      void deleteUserPromptParams() { this->userPromptParams_ = nullptr;};
      inline const vector<ModelConfig::UserPromptParams> & getUserPromptParams() const { DARABONBA_PTR_GET_CONST(userPromptParams_, vector<ModelConfig::UserPromptParams>) };
      inline vector<ModelConfig::UserPromptParams> getUserPromptParams() { DARABONBA_PTR_GET(userPromptParams_, vector<ModelConfig::UserPromptParams>) };
      inline ModelConfig& setUserPromptParams(const vector<ModelConfig::UserPromptParams> & userPromptParams) { DARABONBA_PTR_SET_VALUE(userPromptParams_, userPromptParams) };
      inline ModelConfig& setUserPromptParams(vector<ModelConfig::UserPromptParams> && userPromptParams) { DARABONBA_PTR_SET_RVALUE(userPromptParams_, userPromptParams) };


      // userQueryParams Field Functions 
      bool hasUserQueryParams() const { return this->userQueryParams_ != nullptr;};
      void deleteUserQueryParams() { this->userQueryParams_ = nullptr;};
      inline const vector<ModelConfig::UserQueryParams> & getUserQueryParams() const { DARABONBA_PTR_GET_CONST(userQueryParams_, vector<ModelConfig::UserQueryParams>) };
      inline vector<ModelConfig::UserQueryParams> getUserQueryParams() { DARABONBA_PTR_GET(userQueryParams_, vector<ModelConfig::UserQueryParams>) };
      inline ModelConfig& setUserQueryParams(const vector<ModelConfig::UserQueryParams> & userQueryParams) { DARABONBA_PTR_SET_VALUE(userQueryParams_, userQueryParams) };
      inline ModelConfig& setUserQueryParams(vector<ModelConfig::UserQueryParams> && userQueryParams) { DARABONBA_PTR_SET_RVALUE(userQueryParams_, userQueryParams) };


    protected:
      shared_ptr<bool> enableIntentRecognize_ {};
      shared_ptr<bool> enableTransition_ {};
      shared_ptr<int32_t> historyLimit_ {};
      shared_ptr<bool> intentOnlySwitch_ {};
      shared_ptr<string> modelType_ {};
      shared_ptr<bool> openMemory_ {};
      shared_ptr<bool> openWebSearch_ {};
      shared_ptr<string> searchModel_ {};
      shared_ptr<string> searchStrategy_ {};
      shared_ptr<string> textModal_ {};
      shared_ptr<vector<ModelConfig::UserPromptParams>> userPromptParams_ {};
      shared_ptr<vector<ModelConfig::UserQueryParams>> userQueryParams_ {};
    };

    class MemoryConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MemoryConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Attributes, attributes_);
        DARABONBA_PTR_TO_JSON(Desc, desc_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, MemoryConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(Desc, desc_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      MemoryConfig() = default ;
      MemoryConfig(const MemoryConfig &) = default ;
      MemoryConfig(MemoryConfig &&) = default ;
      MemoryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MemoryConfig() = default ;
      MemoryConfig& operator=(const MemoryConfig &) = default ;
      MemoryConfig& operator=(MemoryConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Attributes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Attributes& obj) { 
          DARABONBA_PTR_TO_JSON(Desc, desc_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Attributes& obj) { 
          DARABONBA_PTR_FROM_JSON(Desc, desc_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Attributes() = default ;
        Attributes(const Attributes &) = default ;
        Attributes(Attributes &&) = default ;
        Attributes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Attributes() = default ;
        Attributes& operator=(const Attributes &) = default ;
        Attributes& operator=(Attributes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->desc_ == nullptr
        && this->name_ == nullptr; };
        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline Attributes& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Attributes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> desc_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->attributes_ == nullptr
        && this->desc_ == nullptr && this->name_ == nullptr; };
      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline const vector<MemoryConfig::Attributes> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<MemoryConfig::Attributes>) };
      inline vector<MemoryConfig::Attributes> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<MemoryConfig::Attributes>) };
      inline MemoryConfig& setAttributes(const vector<MemoryConfig::Attributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
      inline MemoryConfig& setAttributes(vector<MemoryConfig::Attributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline MemoryConfig& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline MemoryConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<vector<MemoryConfig::Attributes>> attributes_ {};
      shared_ptr<string> desc_ {};
      shared_ptr<string> name_ {};
    };

    class ConversationConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConversationConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AsrModel, asrModel_);
        DARABONBA_PTR_TO_JSON(OpenAsr, openAsr_);
        DARABONBA_PTR_TO_JSON(OpenTts, openTts_);
        DARABONBA_PTR_TO_JSON(StopOrRejectFlag, stopOrRejectFlag_);
        DARABONBA_PTR_TO_JSON(TtsModel, ttsModel_);
      };
      friend void from_json(const Darabonba::Json& j, ConversationConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AsrModel, asrModel_);
        DARABONBA_PTR_FROM_JSON(OpenAsr, openAsr_);
        DARABONBA_PTR_FROM_JSON(OpenTts, openTts_);
        DARABONBA_PTR_FROM_JSON(StopOrRejectFlag, stopOrRejectFlag_);
        DARABONBA_PTR_FROM_JSON(TtsModel, ttsModel_);
      };
      ConversationConfig() = default ;
      ConversationConfig(const ConversationConfig &) = default ;
      ConversationConfig(ConversationConfig &&) = default ;
      ConversationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConversationConfig() = default ;
      ConversationConfig& operator=(const ConversationConfig &) = default ;
      ConversationConfig& operator=(ConversationConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->asrModel_ == nullptr
        && this->openAsr_ == nullptr && this->openTts_ == nullptr && this->stopOrRejectFlag_ == nullptr && this->ttsModel_ == nullptr; };
      // asrModel Field Functions 
      bool hasAsrModel() const { return this->asrModel_ != nullptr;};
      void deleteAsrModel() { this->asrModel_ = nullptr;};
      inline string getAsrModel() const { DARABONBA_PTR_GET_DEFAULT(asrModel_, "") };
      inline ConversationConfig& setAsrModel(string asrModel) { DARABONBA_PTR_SET_VALUE(asrModel_, asrModel) };


      // openAsr Field Functions 
      bool hasOpenAsr() const { return this->openAsr_ != nullptr;};
      void deleteOpenAsr() { this->openAsr_ = nullptr;};
      inline bool getOpenAsr() const { DARABONBA_PTR_GET_DEFAULT(openAsr_, false) };
      inline ConversationConfig& setOpenAsr(bool openAsr) { DARABONBA_PTR_SET_VALUE(openAsr_, openAsr) };


      // openTts Field Functions 
      bool hasOpenTts() const { return this->openTts_ != nullptr;};
      void deleteOpenTts() { this->openTts_ = nullptr;};
      inline bool getOpenTts() const { DARABONBA_PTR_GET_DEFAULT(openTts_, false) };
      inline ConversationConfig& setOpenTts(bool openTts) { DARABONBA_PTR_SET_VALUE(openTts_, openTts) };


      // stopOrRejectFlag Field Functions 
      bool hasStopOrRejectFlag() const { return this->stopOrRejectFlag_ != nullptr;};
      void deleteStopOrRejectFlag() { this->stopOrRejectFlag_ = nullptr;};
      inline bool getStopOrRejectFlag() const { DARABONBA_PTR_GET_DEFAULT(stopOrRejectFlag_, false) };
      inline ConversationConfig& setStopOrRejectFlag(bool stopOrRejectFlag) { DARABONBA_PTR_SET_VALUE(stopOrRejectFlag_, stopOrRejectFlag) };


      // ttsModel Field Functions 
      bool hasTtsModel() const { return this->ttsModel_ != nullptr;};
      void deleteTtsModel() { this->ttsModel_ = nullptr;};
      inline string getTtsModel() const { DARABONBA_PTR_GET_DEFAULT(ttsModel_, "") };
      inline ConversationConfig& setTtsModel(string ttsModel) { DARABONBA_PTR_SET_VALUE(ttsModel_, ttsModel) };


    protected:
      shared_ptr<string> asrModel_ {};
      shared_ptr<bool> openAsr_ {};
      shared_ptr<bool> openTts_ {};
      shared_ptr<bool> stopOrRejectFlag_ {};
      shared_ptr<string> ttsModel_ {};
    };

    class BindingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BindingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Agents, agents_);
        DARABONBA_PTR_TO_JSON(Commands, commands_);
        DARABONBA_PTR_TO_JSON(Mcps, mcps_);
        DARABONBA_PTR_TO_JSON(Plugins, plugins_);
        DARABONBA_PTR_TO_JSON(RagConfig, ragConfig_);
      };
      friend void from_json(const Darabonba::Json& j, BindingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Agents, agents_);
        DARABONBA_PTR_FROM_JSON(Commands, commands_);
        DARABONBA_PTR_FROM_JSON(Mcps, mcps_);
        DARABONBA_PTR_FROM_JSON(Plugins, plugins_);
        DARABONBA_PTR_FROM_JSON(RagConfig, ragConfig_);
      };
      BindingConfig() = default ;
      BindingConfig(const BindingConfig &) = default ;
      BindingConfig(BindingConfig &&) = default ;
      BindingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BindingConfig() = default ;
      BindingConfig& operator=(const BindingConfig &) = default ;
      BindingConfig& operator=(BindingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RagConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RagConfig& obj) { 
          DARABONBA_PTR_TO_JSON(EnableSearch, enableSearch_);
          DARABONBA_PTR_TO_JSON(KnowledgeBaseCodeList, knowledgeBaseCodeList_);
          DARABONBA_PTR_TO_JSON(PromptStrategy, promptStrategy_);
          DARABONBA_PTR_TO_JSON(RankWeights, rankWeights_);
          DARABONBA_PTR_TO_JSON(RetrieveMaxLength, retrieveMaxLength_);
          DARABONBA_PTR_TO_JSON(TopK, topK_);
        };
        friend void from_json(const Darabonba::Json& j, RagConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(EnableSearch, enableSearch_);
          DARABONBA_PTR_FROM_JSON(KnowledgeBaseCodeList, knowledgeBaseCodeList_);
          DARABONBA_PTR_FROM_JSON(PromptStrategy, promptStrategy_);
          DARABONBA_PTR_FROM_JSON(RankWeights, rankWeights_);
          DARABONBA_PTR_FROM_JSON(RetrieveMaxLength, retrieveMaxLength_);
          DARABONBA_PTR_FROM_JSON(TopK, topK_);
        };
        RagConfig() = default ;
        RagConfig(const RagConfig &) = default ;
        RagConfig(RagConfig &&) = default ;
        RagConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RagConfig() = default ;
        RagConfig& operator=(const RagConfig &) = default ;
        RagConfig& operator=(RagConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enableSearch_ == nullptr
        && this->knowledgeBaseCodeList_ == nullptr && this->promptStrategy_ == nullptr && this->rankWeights_ == nullptr && this->retrieveMaxLength_ == nullptr && this->topK_ == nullptr; };
        // enableSearch Field Functions 
        bool hasEnableSearch() const { return this->enableSearch_ != nullptr;};
        void deleteEnableSearch() { this->enableSearch_ = nullptr;};
        inline bool getEnableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, false) };
        inline RagConfig& setEnableSearch(bool enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


        // knowledgeBaseCodeList Field Functions 
        bool hasKnowledgeBaseCodeList() const { return this->knowledgeBaseCodeList_ != nullptr;};
        void deleteKnowledgeBaseCodeList() { this->knowledgeBaseCodeList_ = nullptr;};
        inline const vector<string> & getKnowledgeBaseCodeList() const { DARABONBA_PTR_GET_CONST(knowledgeBaseCodeList_, vector<string>) };
        inline vector<string> getKnowledgeBaseCodeList() { DARABONBA_PTR_GET(knowledgeBaseCodeList_, vector<string>) };
        inline RagConfig& setKnowledgeBaseCodeList(const vector<string> & knowledgeBaseCodeList) { DARABONBA_PTR_SET_VALUE(knowledgeBaseCodeList_, knowledgeBaseCodeList) };
        inline RagConfig& setKnowledgeBaseCodeList(vector<string> && knowledgeBaseCodeList) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseCodeList_, knowledgeBaseCodeList) };


        // promptStrategy Field Functions 
        bool hasPromptStrategy() const { return this->promptStrategy_ != nullptr;};
        void deletePromptStrategy() { this->promptStrategy_ = nullptr;};
        inline string getPromptStrategy() const { DARABONBA_PTR_GET_DEFAULT(promptStrategy_, "") };
        inline RagConfig& setPromptStrategy(string promptStrategy) { DARABONBA_PTR_SET_VALUE(promptStrategy_, promptStrategy) };


        // rankWeights Field Functions 
        bool hasRankWeights() const { return this->rankWeights_ != nullptr;};
        void deleteRankWeights() { this->rankWeights_ = nullptr;};
        inline const map<string, double> & getRankWeights() const { DARABONBA_PTR_GET_CONST(rankWeights_, map<string, double>) };
        inline map<string, double> getRankWeights() { DARABONBA_PTR_GET(rankWeights_, map<string, double>) };
        inline RagConfig& setRankWeights(const map<string, double> & rankWeights) { DARABONBA_PTR_SET_VALUE(rankWeights_, rankWeights) };
        inline RagConfig& setRankWeights(map<string, double> && rankWeights) { DARABONBA_PTR_SET_RVALUE(rankWeights_, rankWeights) };


        // retrieveMaxLength Field Functions 
        bool hasRetrieveMaxLength() const { return this->retrieveMaxLength_ != nullptr;};
        void deleteRetrieveMaxLength() { this->retrieveMaxLength_ = nullptr;};
        inline int32_t getRetrieveMaxLength() const { DARABONBA_PTR_GET_DEFAULT(retrieveMaxLength_, 0) };
        inline RagConfig& setRetrieveMaxLength(int32_t retrieveMaxLength) { DARABONBA_PTR_SET_VALUE(retrieveMaxLength_, retrieveMaxLength) };


        // topK Field Functions 
        bool hasTopK() const { return this->topK_ != nullptr;};
        void deleteTopK() { this->topK_ = nullptr;};
        inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
        inline RagConfig& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


      protected:
        shared_ptr<bool> enableSearch_ {};
        shared_ptr<vector<string>> knowledgeBaseCodeList_ {};
        shared_ptr<string> promptStrategy_ {};
        shared_ptr<map<string, double>> rankWeights_ {};
        shared_ptr<int32_t> retrieveMaxLength_ {};
        shared_ptr<int32_t> topK_ {};
      };

      class Plugins : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Plugins& obj) { 
          DARABONBA_PTR_TO_JSON(PluginCode, pluginCode_);
          DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
          DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
        };
        friend void from_json(const Darabonba::Json& j, Plugins& obj) { 
          DARABONBA_PTR_FROM_JSON(PluginCode, pluginCode_);
          DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
          DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
        };
        Plugins() = default ;
        Plugins(const Plugins &) = default ;
        Plugins(Plugins &&) = default ;
        Plugins(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Plugins() = default ;
        Plugins& operator=(const Plugins &) = default ;
        Plugins& operator=(Plugins &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->pluginCode_ == nullptr
        && this->pluginName_ == nullptr && this->pluginType_ == nullptr; };
        // pluginCode Field Functions 
        bool hasPluginCode() const { return this->pluginCode_ != nullptr;};
        void deletePluginCode() { this->pluginCode_ = nullptr;};
        inline string getPluginCode() const { DARABONBA_PTR_GET_DEFAULT(pluginCode_, "") };
        inline Plugins& setPluginCode(string pluginCode) { DARABONBA_PTR_SET_VALUE(pluginCode_, pluginCode) };


        // pluginName Field Functions 
        bool hasPluginName() const { return this->pluginName_ != nullptr;};
        void deletePluginName() { this->pluginName_ = nullptr;};
        inline string getPluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
        inline Plugins& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


        // pluginType Field Functions 
        bool hasPluginType() const { return this->pluginType_ != nullptr;};
        void deletePluginType() { this->pluginType_ = nullptr;};
        inline string getPluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
        inline Plugins& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


      protected:
        shared_ptr<string> pluginCode_ {};
        shared_ptr<string> pluginName_ {};
        shared_ptr<string> pluginType_ {};
      };

      class Mcps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Mcps& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(ToolList, toolList_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Mcps& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(ToolList, toolList_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Mcps() = default ;
        Mcps(const Mcps &) = default ;
        Mcps(Mcps &&) = default ;
        Mcps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Mcps() = default ;
        Mcps& operator=(const Mcps &) = default ;
        Mcps& operator=(Mcps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->toolList_ == nullptr && this->type_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Mcps& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // toolList Field Functions 
        bool hasToolList() const { return this->toolList_ != nullptr;};
        void deleteToolList() { this->toolList_ = nullptr;};
        inline const vector<string> & getToolList() const { DARABONBA_PTR_GET_CONST(toolList_, vector<string>) };
        inline vector<string> getToolList() { DARABONBA_PTR_GET(toolList_, vector<string>) };
        inline Mcps& setToolList(const vector<string> & toolList) { DARABONBA_PTR_SET_VALUE(toolList_, toolList) };
        inline Mcps& setToolList(vector<string> && toolList) { DARABONBA_PTR_SET_RVALUE(toolList_, toolList) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Mcps& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<vector<string>> toolList_ {};
        shared_ptr<string> type_ {};
      };

      class Commands : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Commands& obj) { 
          DARABONBA_PTR_TO_JSON(DomainCode, domainCode_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Tools, tools_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Commands& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainCode, domainCode_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Tools, tools_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Commands() = default ;
        Commands(const Commands &) = default ;
        Commands(Commands &&) = default ;
        Commands(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Commands() = default ;
        Commands& operator=(const Commands &) = default ;
        Commands& operator=(Commands &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tools : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tools& obj) { 
            DARABONBA_PTR_TO_JSON(ReplyMode, replyMode_);
            DARABONBA_PTR_TO_JSON(ToolDescription, toolDescription_);
            DARABONBA_PTR_TO_JSON(ToolExamples, toolExamples_);
            DARABONBA_PTR_TO_JSON(ToolId, toolId_);
            DARABONBA_PTR_TO_JSON(ToolName, toolName_);
            DARABONBA_PTR_TO_JSON(ToolParams, toolParams_);
          };
          friend void from_json(const Darabonba::Json& j, Tools& obj) { 
            DARABONBA_PTR_FROM_JSON(ReplyMode, replyMode_);
            DARABONBA_PTR_FROM_JSON(ToolDescription, toolDescription_);
            DARABONBA_PTR_FROM_JSON(ToolExamples, toolExamples_);
            DARABONBA_PTR_FROM_JSON(ToolId, toolId_);
            DARABONBA_PTR_FROM_JSON(ToolName, toolName_);
            DARABONBA_PTR_FROM_JSON(ToolParams, toolParams_);
          };
          Tools() = default ;
          Tools(const Tools &) = default ;
          Tools(Tools &&) = default ;
          Tools(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tools() = default ;
          Tools& operator=(const Tools &) = default ;
          Tools& operator=(Tools &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ToolParams : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ToolParams& obj) { 
              DARABONBA_PTR_TO_JSON(ParamDesc, paramDesc_);
              DARABONBA_PTR_TO_JSON(ParamExample, paramExample_);
              DARABONBA_PTR_TO_JSON(ParamName, paramName_);
              DARABONBA_PTR_TO_JSON(ParamType, paramType_);
              DARABONBA_PTR_TO_JSON(Required, required_);
            };
            friend void from_json(const Darabonba::Json& j, ToolParams& obj) { 
              DARABONBA_PTR_FROM_JSON(ParamDesc, paramDesc_);
              DARABONBA_PTR_FROM_JSON(ParamExample, paramExample_);
              DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
              DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
              DARABONBA_PTR_FROM_JSON(Required, required_);
            };
            ToolParams() = default ;
            ToolParams(const ToolParams &) = default ;
            ToolParams(ToolParams &&) = default ;
            ToolParams(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ToolParams() = default ;
            ToolParams& operator=(const ToolParams &) = default ;
            ToolParams& operator=(ToolParams &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->paramDesc_ == nullptr
        && this->paramExample_ == nullptr && this->paramName_ == nullptr && this->paramType_ == nullptr && this->required_ == nullptr; };
            // paramDesc Field Functions 
            bool hasParamDesc() const { return this->paramDesc_ != nullptr;};
            void deleteParamDesc() { this->paramDesc_ = nullptr;};
            inline string getParamDesc() const { DARABONBA_PTR_GET_DEFAULT(paramDesc_, "") };
            inline ToolParams& setParamDesc(string paramDesc) { DARABONBA_PTR_SET_VALUE(paramDesc_, paramDesc) };


            // paramExample Field Functions 
            bool hasParamExample() const { return this->paramExample_ != nullptr;};
            void deleteParamExample() { this->paramExample_ = nullptr;};
            inline string getParamExample() const { DARABONBA_PTR_GET_DEFAULT(paramExample_, "") };
            inline ToolParams& setParamExample(string paramExample) { DARABONBA_PTR_SET_VALUE(paramExample_, paramExample) };


            // paramName Field Functions 
            bool hasParamName() const { return this->paramName_ != nullptr;};
            void deleteParamName() { this->paramName_ = nullptr;};
            inline string getParamName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
            inline ToolParams& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


            // paramType Field Functions 
            bool hasParamType() const { return this->paramType_ != nullptr;};
            void deleteParamType() { this->paramType_ = nullptr;};
            inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
            inline ToolParams& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


            // required Field Functions 
            bool hasRequired() const { return this->required_ != nullptr;};
            void deleteRequired() { this->required_ = nullptr;};
            inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
            inline ToolParams& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


          protected:
            shared_ptr<string> paramDesc_ {};
            shared_ptr<string> paramExample_ {};
            shared_ptr<string> paramName_ {};
            shared_ptr<string> paramType_ {};
            shared_ptr<bool> required_ {};
          };

          class ToolExamples : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ToolExamples& obj) { 
              DARABONBA_ANY_TO_JSON(Parameters, parameters_);
              DARABONBA_PTR_TO_JSON(Query, query_);
            };
            friend void from_json(const Darabonba::Json& j, ToolExamples& obj) { 
              DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
              DARABONBA_PTR_FROM_JSON(Query, query_);
            };
            ToolExamples() = default ;
            ToolExamples(const ToolExamples &) = default ;
            ToolExamples(ToolExamples &&) = default ;
            ToolExamples(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ToolExamples() = default ;
            ToolExamples& operator=(const ToolExamples &) = default ;
            ToolExamples& operator=(ToolExamples &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->parameters_ == nullptr
        && this->query_ == nullptr; };
            // parameters Field Functions 
            bool hasParameters() const { return this->parameters_ != nullptr;};
            void deleteParameters() { this->parameters_ = nullptr;};
            inline             const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
            Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
            inline ToolExamples& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
            inline ToolExamples& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


            // query Field Functions 
            bool hasQuery() const { return this->query_ != nullptr;};
            void deleteQuery() { this->query_ = nullptr;};
            inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
            inline ToolExamples& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


          protected:
            Darabonba::Json parameters_ {};
            shared_ptr<string> query_ {};
          };

          virtual bool empty() const override { return this->replyMode_ == nullptr
        && this->toolDescription_ == nullptr && this->toolExamples_ == nullptr && this->toolId_ == nullptr && this->toolName_ == nullptr && this->toolParams_ == nullptr; };
          // replyMode Field Functions 
          bool hasReplyMode() const { return this->replyMode_ != nullptr;};
          void deleteReplyMode() { this->replyMode_ = nullptr;};
          inline string getReplyMode() const { DARABONBA_PTR_GET_DEFAULT(replyMode_, "") };
          inline Tools& setReplyMode(string replyMode) { DARABONBA_PTR_SET_VALUE(replyMode_, replyMode) };


          // toolDescription Field Functions 
          bool hasToolDescription() const { return this->toolDescription_ != nullptr;};
          void deleteToolDescription() { this->toolDescription_ = nullptr;};
          inline string getToolDescription() const { DARABONBA_PTR_GET_DEFAULT(toolDescription_, "") };
          inline Tools& setToolDescription(string toolDescription) { DARABONBA_PTR_SET_VALUE(toolDescription_, toolDescription) };


          // toolExamples Field Functions 
          bool hasToolExamples() const { return this->toolExamples_ != nullptr;};
          void deleteToolExamples() { this->toolExamples_ = nullptr;};
          inline const vector<Tools::ToolExamples> & getToolExamples() const { DARABONBA_PTR_GET_CONST(toolExamples_, vector<Tools::ToolExamples>) };
          inline vector<Tools::ToolExamples> getToolExamples() { DARABONBA_PTR_GET(toolExamples_, vector<Tools::ToolExamples>) };
          inline Tools& setToolExamples(const vector<Tools::ToolExamples> & toolExamples) { DARABONBA_PTR_SET_VALUE(toolExamples_, toolExamples) };
          inline Tools& setToolExamples(vector<Tools::ToolExamples> && toolExamples) { DARABONBA_PTR_SET_RVALUE(toolExamples_, toolExamples) };


          // toolId Field Functions 
          bool hasToolId() const { return this->toolId_ != nullptr;};
          void deleteToolId() { this->toolId_ = nullptr;};
          inline string getToolId() const { DARABONBA_PTR_GET_DEFAULT(toolId_, "") };
          inline Tools& setToolId(string toolId) { DARABONBA_PTR_SET_VALUE(toolId_, toolId) };


          // toolName Field Functions 
          bool hasToolName() const { return this->toolName_ != nullptr;};
          void deleteToolName() { this->toolName_ = nullptr;};
          inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
          inline Tools& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


          // toolParams Field Functions 
          bool hasToolParams() const { return this->toolParams_ != nullptr;};
          void deleteToolParams() { this->toolParams_ = nullptr;};
          inline const vector<Tools::ToolParams> & getToolParams() const { DARABONBA_PTR_GET_CONST(toolParams_, vector<Tools::ToolParams>) };
          inline vector<Tools::ToolParams> getToolParams() { DARABONBA_PTR_GET(toolParams_, vector<Tools::ToolParams>) };
          inline Tools& setToolParams(const vector<Tools::ToolParams> & toolParams) { DARABONBA_PTR_SET_VALUE(toolParams_, toolParams) };
          inline Tools& setToolParams(vector<Tools::ToolParams> && toolParams) { DARABONBA_PTR_SET_RVALUE(toolParams_, toolParams) };


        protected:
          shared_ptr<string> replyMode_ {};
          shared_ptr<string> toolDescription_ {};
          shared_ptr<vector<Tools::ToolExamples>> toolExamples_ {};
          shared_ptr<string> toolId_ {};
          shared_ptr<string> toolName_ {};
          shared_ptr<vector<Tools::ToolParams>> toolParams_ {};
        };

        virtual bool empty() const override { return this->domainCode_ == nullptr
        && this->domainName_ == nullptr && this->tools_ == nullptr && this->type_ == nullptr; };
        // domainCode Field Functions 
        bool hasDomainCode() const { return this->domainCode_ != nullptr;};
        void deleteDomainCode() { this->domainCode_ = nullptr;};
        inline string getDomainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
        inline Commands& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Commands& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // tools Field Functions 
        bool hasTools() const { return this->tools_ != nullptr;};
        void deleteTools() { this->tools_ = nullptr;};
        inline const vector<Commands::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Commands::Tools>) };
        inline vector<Commands::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<Commands::Tools>) };
        inline Commands& setTools(const vector<Commands::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
        inline Commands& setTools(vector<Commands::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Commands& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> domainCode_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<vector<Commands::Tools>> tools_ {};
        shared_ptr<string> type_ {};
      };

      class Agents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Agents& obj) { 
          DARABONBA_PTR_TO_JSON(AgentCode, agentCode_);
          DARABONBA_PTR_TO_JSON(AgentName, agentName_);
          DARABONBA_PTR_TO_JSON(AgentType, agentType_);
          DARABONBA_ANY_TO_JSON(CentralConfig, centralConfig_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(IntentFewShotConfig, intentFewShotConfig_);
          DARABONBA_ANY_TO_JSON(OwnConfig, ownConfig_);
        };
        friend void from_json(const Darabonba::Json& j, Agents& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentCode, agentCode_);
          DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
          DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
          DARABONBA_ANY_FROM_JSON(CentralConfig, centralConfig_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(IntentFewShotConfig, intentFewShotConfig_);
          DARABONBA_ANY_FROM_JSON(OwnConfig, ownConfig_);
        };
        Agents() = default ;
        Agents(const Agents &) = default ;
        Agents(Agents &&) = default ;
        Agents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Agents() = default ;
        Agents& operator=(const Agents &) = default ;
        Agents& operator=(Agents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentCode_ == nullptr
        && this->agentName_ == nullptr && this->agentType_ == nullptr && this->centralConfig_ == nullptr && this->description_ == nullptr && this->intentFewShotConfig_ == nullptr
        && this->ownConfig_ == nullptr; };
        // agentCode Field Functions 
        bool hasAgentCode() const { return this->agentCode_ != nullptr;};
        void deleteAgentCode() { this->agentCode_ = nullptr;};
        inline string getAgentCode() const { DARABONBA_PTR_GET_DEFAULT(agentCode_, "") };
        inline Agents& setAgentCode(string agentCode) { DARABONBA_PTR_SET_VALUE(agentCode_, agentCode) };


        // agentName Field Functions 
        bool hasAgentName() const { return this->agentName_ != nullptr;};
        void deleteAgentName() { this->agentName_ = nullptr;};
        inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
        inline Agents& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


        // agentType Field Functions 
        bool hasAgentType() const { return this->agentType_ != nullptr;};
        void deleteAgentType() { this->agentType_ = nullptr;};
        inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
        inline Agents& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


        // centralConfig Field Functions 
        bool hasCentralConfig() const { return this->centralConfig_ != nullptr;};
        void deleteCentralConfig() { this->centralConfig_ = nullptr;};
        inline         const Darabonba::Json & getCentralConfig() const { DARABONBA_GET(centralConfig_) };
        Darabonba::Json & getCentralConfig() { DARABONBA_GET(centralConfig_) };
        inline Agents& setCentralConfig(const Darabonba::Json & centralConfig) { DARABONBA_SET_VALUE(centralConfig_, centralConfig) };
        inline Agents& setCentralConfig(Darabonba::Json && centralConfig) { DARABONBA_SET_RVALUE(centralConfig_, centralConfig) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Agents& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // intentFewShotConfig Field Functions 
        bool hasIntentFewShotConfig() const { return this->intentFewShotConfig_ != nullptr;};
        void deleteIntentFewShotConfig() { this->intentFewShotConfig_ = nullptr;};
        inline const map<string, vector<BindingConfigAgentsIntentFewShotConfigValue>> & getIntentFewShotConfig() const { DARABONBA_PTR_GET_CONST(intentFewShotConfig_, map<string, vector<BindingConfigAgentsIntentFewShotConfigValue>>) };
        inline map<string, vector<BindingConfigAgentsIntentFewShotConfigValue>> getIntentFewShotConfig() { DARABONBA_PTR_GET(intentFewShotConfig_, map<string, vector<BindingConfigAgentsIntentFewShotConfigValue>>) };
        inline Agents& setIntentFewShotConfig(const map<string, vector<BindingConfigAgentsIntentFewShotConfigValue>> & intentFewShotConfig) { DARABONBA_PTR_SET_VALUE(intentFewShotConfig_, intentFewShotConfig) };
        inline Agents& setIntentFewShotConfig(map<string, vector<BindingConfigAgentsIntentFewShotConfigValue>> && intentFewShotConfig) { DARABONBA_PTR_SET_RVALUE(intentFewShotConfig_, intentFewShotConfig) };


        // ownConfig Field Functions 
        bool hasOwnConfig() const { return this->ownConfig_ != nullptr;};
        void deleteOwnConfig() { this->ownConfig_ = nullptr;};
        inline         const Darabonba::Json & getOwnConfig() const { DARABONBA_GET(ownConfig_) };
        Darabonba::Json & getOwnConfig() { DARABONBA_GET(ownConfig_) };
        inline Agents& setOwnConfig(const Darabonba::Json & ownConfig) { DARABONBA_SET_VALUE(ownConfig_, ownConfig) };
        inline Agents& setOwnConfig(Darabonba::Json && ownConfig) { DARABONBA_SET_RVALUE(ownConfig_, ownConfig) };


      protected:
        shared_ptr<string> agentCode_ {};
        shared_ptr<string> agentName_ {};
        shared_ptr<string> agentType_ {};
        Darabonba::Json centralConfig_ {};
        shared_ptr<string> description_ {};
        shared_ptr<map<string, vector<BindingConfigAgentsIntentFewShotConfigValue>>> intentFewShotConfig_ {};
        Darabonba::Json ownConfig_ {};
      };

      virtual bool empty() const override { return this->agents_ == nullptr
        && this->commands_ == nullptr && this->mcps_ == nullptr && this->plugins_ == nullptr && this->ragConfig_ == nullptr; };
      // agents Field Functions 
      bool hasAgents() const { return this->agents_ != nullptr;};
      void deleteAgents() { this->agents_ = nullptr;};
      inline const vector<BindingConfig::Agents> & getAgents() const { DARABONBA_PTR_GET_CONST(agents_, vector<BindingConfig::Agents>) };
      inline vector<BindingConfig::Agents> getAgents() { DARABONBA_PTR_GET(agents_, vector<BindingConfig::Agents>) };
      inline BindingConfig& setAgents(const vector<BindingConfig::Agents> & agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };
      inline BindingConfig& setAgents(vector<BindingConfig::Agents> && agents) { DARABONBA_PTR_SET_RVALUE(agents_, agents) };


      // commands Field Functions 
      bool hasCommands() const { return this->commands_ != nullptr;};
      void deleteCommands() { this->commands_ = nullptr;};
      inline const vector<BindingConfig::Commands> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<BindingConfig::Commands>) };
      inline vector<BindingConfig::Commands> getCommands() { DARABONBA_PTR_GET(commands_, vector<BindingConfig::Commands>) };
      inline BindingConfig& setCommands(const vector<BindingConfig::Commands> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
      inline BindingConfig& setCommands(vector<BindingConfig::Commands> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


      // mcps Field Functions 
      bool hasMcps() const { return this->mcps_ != nullptr;};
      void deleteMcps() { this->mcps_ = nullptr;};
      inline const vector<BindingConfig::Mcps> & getMcps() const { DARABONBA_PTR_GET_CONST(mcps_, vector<BindingConfig::Mcps>) };
      inline vector<BindingConfig::Mcps> getMcps() { DARABONBA_PTR_GET(mcps_, vector<BindingConfig::Mcps>) };
      inline BindingConfig& setMcps(const vector<BindingConfig::Mcps> & mcps) { DARABONBA_PTR_SET_VALUE(mcps_, mcps) };
      inline BindingConfig& setMcps(vector<BindingConfig::Mcps> && mcps) { DARABONBA_PTR_SET_RVALUE(mcps_, mcps) };


      // plugins Field Functions 
      bool hasPlugins() const { return this->plugins_ != nullptr;};
      void deletePlugins() { this->plugins_ = nullptr;};
      inline const vector<BindingConfig::Plugins> & getPlugins() const { DARABONBA_PTR_GET_CONST(plugins_, vector<BindingConfig::Plugins>) };
      inline vector<BindingConfig::Plugins> getPlugins() { DARABONBA_PTR_GET(plugins_, vector<BindingConfig::Plugins>) };
      inline BindingConfig& setPlugins(const vector<BindingConfig::Plugins> & plugins) { DARABONBA_PTR_SET_VALUE(plugins_, plugins) };
      inline BindingConfig& setPlugins(vector<BindingConfig::Plugins> && plugins) { DARABONBA_PTR_SET_RVALUE(plugins_, plugins) };


      // ragConfig Field Functions 
      bool hasRagConfig() const { return this->ragConfig_ != nullptr;};
      void deleteRagConfig() { this->ragConfig_ = nullptr;};
      inline const BindingConfig::RagConfig & getRagConfig() const { DARABONBA_PTR_GET_CONST(ragConfig_, BindingConfig::RagConfig) };
      inline BindingConfig::RagConfig getRagConfig() { DARABONBA_PTR_GET(ragConfig_, BindingConfig::RagConfig) };
      inline BindingConfig& setRagConfig(const BindingConfig::RagConfig & ragConfig) { DARABONBA_PTR_SET_VALUE(ragConfig_, ragConfig) };
      inline BindingConfig& setRagConfig(BindingConfig::RagConfig && ragConfig) { DARABONBA_PTR_SET_RVALUE(ragConfig_, ragConfig) };


    protected:
      shared_ptr<vector<BindingConfig::Agents>> agents_ {};
      shared_ptr<vector<BindingConfig::Commands>> commands_ {};
      shared_ptr<vector<BindingConfig::Mcps>> mcps_ {};
      shared_ptr<vector<BindingConfig::Plugins>> plugins_ {};
      shared_ptr<BindingConfig::RagConfig> ragConfig_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->bindingConfig_ == nullptr && this->conversationConfig_ == nullptr && this->memoryConfig_ == nullptr && this->modelConfig_ == nullptr
        && this->prompt_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateMmAppAndBindingRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateMmAppAndBindingRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bindingConfig Field Functions 
    bool hasBindingConfig() const { return this->bindingConfig_ != nullptr;};
    void deleteBindingConfig() { this->bindingConfig_ = nullptr;};
    inline const UpdateMmAppAndBindingRequest::BindingConfig & getBindingConfig() const { DARABONBA_PTR_GET_CONST(bindingConfig_, UpdateMmAppAndBindingRequest::BindingConfig) };
    inline UpdateMmAppAndBindingRequest::BindingConfig getBindingConfig() { DARABONBA_PTR_GET(bindingConfig_, UpdateMmAppAndBindingRequest::BindingConfig) };
    inline UpdateMmAppAndBindingRequest& setBindingConfig(const UpdateMmAppAndBindingRequest::BindingConfig & bindingConfig) { DARABONBA_PTR_SET_VALUE(bindingConfig_, bindingConfig) };
    inline UpdateMmAppAndBindingRequest& setBindingConfig(UpdateMmAppAndBindingRequest::BindingConfig && bindingConfig) { DARABONBA_PTR_SET_RVALUE(bindingConfig_, bindingConfig) };


    // conversationConfig Field Functions 
    bool hasConversationConfig() const { return this->conversationConfig_ != nullptr;};
    void deleteConversationConfig() { this->conversationConfig_ = nullptr;};
    inline const UpdateMmAppAndBindingRequest::ConversationConfig & getConversationConfig() const { DARABONBA_PTR_GET_CONST(conversationConfig_, UpdateMmAppAndBindingRequest::ConversationConfig) };
    inline UpdateMmAppAndBindingRequest::ConversationConfig getConversationConfig() { DARABONBA_PTR_GET(conversationConfig_, UpdateMmAppAndBindingRequest::ConversationConfig) };
    inline UpdateMmAppAndBindingRequest& setConversationConfig(const UpdateMmAppAndBindingRequest::ConversationConfig & conversationConfig) { DARABONBA_PTR_SET_VALUE(conversationConfig_, conversationConfig) };
    inline UpdateMmAppAndBindingRequest& setConversationConfig(UpdateMmAppAndBindingRequest::ConversationConfig && conversationConfig) { DARABONBA_PTR_SET_RVALUE(conversationConfig_, conversationConfig) };


    // memoryConfig Field Functions 
    bool hasMemoryConfig() const { return this->memoryConfig_ != nullptr;};
    void deleteMemoryConfig() { this->memoryConfig_ = nullptr;};
    inline const UpdateMmAppAndBindingRequest::MemoryConfig & getMemoryConfig() const { DARABONBA_PTR_GET_CONST(memoryConfig_, UpdateMmAppAndBindingRequest::MemoryConfig) };
    inline UpdateMmAppAndBindingRequest::MemoryConfig getMemoryConfig() { DARABONBA_PTR_GET(memoryConfig_, UpdateMmAppAndBindingRequest::MemoryConfig) };
    inline UpdateMmAppAndBindingRequest& setMemoryConfig(const UpdateMmAppAndBindingRequest::MemoryConfig & memoryConfig) { DARABONBA_PTR_SET_VALUE(memoryConfig_, memoryConfig) };
    inline UpdateMmAppAndBindingRequest& setMemoryConfig(UpdateMmAppAndBindingRequest::MemoryConfig && memoryConfig) { DARABONBA_PTR_SET_RVALUE(memoryConfig_, memoryConfig) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const UpdateMmAppAndBindingRequest::ModelConfig & getModelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, UpdateMmAppAndBindingRequest::ModelConfig) };
    inline UpdateMmAppAndBindingRequest::ModelConfig getModelConfig() { DARABONBA_PTR_GET(modelConfig_, UpdateMmAppAndBindingRequest::ModelConfig) };
    inline UpdateMmAppAndBindingRequest& setModelConfig(const UpdateMmAppAndBindingRequest::ModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline UpdateMmAppAndBindingRequest& setModelConfig(UpdateMmAppAndBindingRequest::ModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline UpdateMmAppAndBindingRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateMmAppAndBindingRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<UpdateMmAppAndBindingRequest::BindingConfig> bindingConfig_ {};
    shared_ptr<UpdateMmAppAndBindingRequest::ConversationConfig> conversationConfig_ {};
    shared_ptr<UpdateMmAppAndBindingRequest::MemoryConfig> memoryConfig_ {};
    shared_ptr<UpdateMmAppAndBindingRequest::ModelConfig> modelConfig_ {};
    shared_ptr<string> prompt_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
