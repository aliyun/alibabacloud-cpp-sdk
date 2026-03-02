// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMMAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMMAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateMmAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMmAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BindingConfig, bindingConfig_);
      DARABONBA_PTR_TO_JSON(ConversationConfig, conversationConfig_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMmAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BindingConfig, bindingConfig_);
      DARABONBA_PTR_FROM_JSON(ConversationConfig, conversationConfig_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateMmAppRequest() = default ;
    UpdateMmAppRequest(const UpdateMmAppRequest &) = default ;
    UpdateMmAppRequest(UpdateMmAppRequest &&) = default ;
    UpdateMmAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMmAppRequest() = default ;
    UpdateMmAppRequest& operator=(const UpdateMmAppRequest &) = default ;
    UpdateMmAppRequest& operator=(UpdateMmAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModelConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelConfig& obj) { 
        DARABONBA_PTR_TO_JSON(HistoryLimit, historyLimit_);
        DARABONBA_PTR_TO_JSON(ModelType, modelType_);
        DARABONBA_PTR_TO_JSON(OpenWebSearch, openWebSearch_);
        DARABONBA_PTR_TO_JSON(TextModal, textModal_);
      };
      friend void from_json(const Darabonba::Json& j, ModelConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(HistoryLimit, historyLimit_);
        DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
        DARABONBA_PTR_FROM_JSON(OpenWebSearch, openWebSearch_);
        DARABONBA_PTR_FROM_JSON(TextModal, textModal_);
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
      virtual bool empty() const override { return this->historyLimit_ == nullptr
        && this->modelType_ == nullptr && this->openWebSearch_ == nullptr && this->textModal_ == nullptr; };
      // historyLimit Field Functions 
      bool hasHistoryLimit() const { return this->historyLimit_ != nullptr;};
      void deleteHistoryLimit() { this->historyLimit_ = nullptr;};
      inline int32_t getHistoryLimit() const { DARABONBA_PTR_GET_DEFAULT(historyLimit_, 0) };
      inline ModelConfig& setHistoryLimit(int32_t historyLimit) { DARABONBA_PTR_SET_VALUE(historyLimit_, historyLimit) };


      // modelType Field Functions 
      bool hasModelType() const { return this->modelType_ != nullptr;};
      void deleteModelType() { this->modelType_ = nullptr;};
      inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
      inline ModelConfig& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


      // openWebSearch Field Functions 
      bool hasOpenWebSearch() const { return this->openWebSearch_ != nullptr;};
      void deleteOpenWebSearch() { this->openWebSearch_ = nullptr;};
      inline bool getOpenWebSearch() const { DARABONBA_PTR_GET_DEFAULT(openWebSearch_, false) };
      inline ModelConfig& setOpenWebSearch(bool openWebSearch) { DARABONBA_PTR_SET_VALUE(openWebSearch_, openWebSearch) };


      // textModal Field Functions 
      bool hasTextModal() const { return this->textModal_ != nullptr;};
      void deleteTextModal() { this->textModal_ = nullptr;};
      inline string getTextModal() const { DARABONBA_PTR_GET_DEFAULT(textModal_, "") };
      inline ModelConfig& setTextModal(string textModal) { DARABONBA_PTR_SET_VALUE(textModal_, textModal) };


    protected:
      shared_ptr<int32_t> historyLimit_ {};
      shared_ptr<string> modelType_ {};
      shared_ptr<bool> openWebSearch_ {};
      shared_ptr<string> textModal_ {};
    };

    class ConversationConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConversationConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AsrModel, asrModel_);
        DARABONBA_PTR_TO_JSON(OpenAsr, openAsr_);
        DARABONBA_PTR_TO_JSON(OpenTts, openTts_);
        DARABONBA_PTR_TO_JSON(TtsModel, ttsModel_);
      };
      friend void from_json(const Darabonba::Json& j, ConversationConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AsrModel, asrModel_);
        DARABONBA_PTR_FROM_JSON(OpenAsr, openAsr_);
        DARABONBA_PTR_FROM_JSON(OpenTts, openTts_);
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
        && this->openAsr_ == nullptr && this->openTts_ == nullptr && this->ttsModel_ == nullptr; };
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


      // ttsModel Field Functions 
      bool hasTtsModel() const { return this->ttsModel_ != nullptr;};
      void deleteTtsModel() { this->ttsModel_ = nullptr;};
      inline string getTtsModel() const { DARABONBA_PTR_GET_DEFAULT(ttsModel_, "") };
      inline ConversationConfig& setTtsModel(string ttsModel) { DARABONBA_PTR_SET_VALUE(ttsModel_, ttsModel) };


    protected:
      shared_ptr<string> asrModel_ {};
      shared_ptr<bool> openAsr_ {};
      shared_ptr<bool> openTts_ {};
      shared_ptr<string> ttsModel_ {};
    };

    class BindingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BindingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Commands, commands_);
      };
      friend void from_json(const Darabonba::Json& j, BindingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Commands, commands_);
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
      class Commands : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Commands& obj) { 
          DARABONBA_PTR_TO_JSON(DomainCode, domainCode_);
          DARABONBA_PTR_TO_JSON(Tools, tools_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Commands& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainCode, domainCode_);
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
            DARABONBA_PTR_TO_JSON(ToolId, toolId_);
          };
          friend void from_json(const Darabonba::Json& j, Tools& obj) { 
            DARABONBA_PTR_FROM_JSON(ToolId, toolId_);
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
          virtual bool empty() const override { return this->toolId_ == nullptr; };
          // toolId Field Functions 
          bool hasToolId() const { return this->toolId_ != nullptr;};
          void deleteToolId() { this->toolId_ = nullptr;};
          inline string getToolId() const { DARABONBA_PTR_GET_DEFAULT(toolId_, "") };
          inline Tools& setToolId(string toolId) { DARABONBA_PTR_SET_VALUE(toolId_, toolId) };


        protected:
          // This parameter is required.
          shared_ptr<string> toolId_ {};
        };

        virtual bool empty() const override { return this->domainCode_ == nullptr
        && this->tools_ == nullptr && this->type_ == nullptr; };
        // domainCode Field Functions 
        bool hasDomainCode() const { return this->domainCode_ != nullptr;};
        void deleteDomainCode() { this->domainCode_ = nullptr;};
        inline string getDomainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
        inline Commands& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


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
        // This parameter is required.
        shared_ptr<string> domainCode_ {};
        shared_ptr<vector<Commands::Tools>> tools_ {};
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->commands_ == nullptr; };
      // commands Field Functions 
      bool hasCommands() const { return this->commands_ != nullptr;};
      void deleteCommands() { this->commands_ = nullptr;};
      inline const vector<BindingConfig::Commands> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<BindingConfig::Commands>) };
      inline vector<BindingConfig::Commands> getCommands() { DARABONBA_PTR_GET(commands_, vector<BindingConfig::Commands>) };
      inline BindingConfig& setCommands(const vector<BindingConfig::Commands> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
      inline BindingConfig& setCommands(vector<BindingConfig::Commands> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


    protected:
      shared_ptr<vector<BindingConfig::Commands>> commands_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->bindingConfig_ == nullptr && this->conversationConfig_ == nullptr && this->modelConfig_ == nullptr && this->prompt_ == nullptr
        && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateMmAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateMmAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bindingConfig Field Functions 
    bool hasBindingConfig() const { return this->bindingConfig_ != nullptr;};
    void deleteBindingConfig() { this->bindingConfig_ = nullptr;};
    inline const UpdateMmAppRequest::BindingConfig & getBindingConfig() const { DARABONBA_PTR_GET_CONST(bindingConfig_, UpdateMmAppRequest::BindingConfig) };
    inline UpdateMmAppRequest::BindingConfig getBindingConfig() { DARABONBA_PTR_GET(bindingConfig_, UpdateMmAppRequest::BindingConfig) };
    inline UpdateMmAppRequest& setBindingConfig(const UpdateMmAppRequest::BindingConfig & bindingConfig) { DARABONBA_PTR_SET_VALUE(bindingConfig_, bindingConfig) };
    inline UpdateMmAppRequest& setBindingConfig(UpdateMmAppRequest::BindingConfig && bindingConfig) { DARABONBA_PTR_SET_RVALUE(bindingConfig_, bindingConfig) };


    // conversationConfig Field Functions 
    bool hasConversationConfig() const { return this->conversationConfig_ != nullptr;};
    void deleteConversationConfig() { this->conversationConfig_ = nullptr;};
    inline const UpdateMmAppRequest::ConversationConfig & getConversationConfig() const { DARABONBA_PTR_GET_CONST(conversationConfig_, UpdateMmAppRequest::ConversationConfig) };
    inline UpdateMmAppRequest::ConversationConfig getConversationConfig() { DARABONBA_PTR_GET(conversationConfig_, UpdateMmAppRequest::ConversationConfig) };
    inline UpdateMmAppRequest& setConversationConfig(const UpdateMmAppRequest::ConversationConfig & conversationConfig) { DARABONBA_PTR_SET_VALUE(conversationConfig_, conversationConfig) };
    inline UpdateMmAppRequest& setConversationConfig(UpdateMmAppRequest::ConversationConfig && conversationConfig) { DARABONBA_PTR_SET_RVALUE(conversationConfig_, conversationConfig) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const UpdateMmAppRequest::ModelConfig & getModelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, UpdateMmAppRequest::ModelConfig) };
    inline UpdateMmAppRequest::ModelConfig getModelConfig() { DARABONBA_PTR_GET(modelConfig_, UpdateMmAppRequest::ModelConfig) };
    inline UpdateMmAppRequest& setModelConfig(const UpdateMmAppRequest::ModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline UpdateMmAppRequest& setModelConfig(UpdateMmAppRequest::ModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline UpdateMmAppRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateMmAppRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<UpdateMmAppRequest::BindingConfig> bindingConfig_ {};
    shared_ptr<UpdateMmAppRequest::ConversationConfig> conversationConfig_ {};
    shared_ptr<UpdateMmAppRequest::ModelConfig> modelConfig_ {};
    shared_ptr<string> prompt_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
