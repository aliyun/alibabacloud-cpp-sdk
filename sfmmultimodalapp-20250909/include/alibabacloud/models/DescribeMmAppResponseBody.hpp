// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMMAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMMAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class DescribeMmAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMmAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BindingConfig, bindingConfig_);
      DARABONBA_PTR_TO_JSON(ConversationConfig, conversationConfig_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(ModifyUserId, modifyUserId_);
      DARABONBA_PTR_TO_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PublishVersion, publishVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMmAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BindingConfig, bindingConfig_);
      DARABONBA_PTR_FROM_JSON(ConversationConfig, conversationConfig_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(ModifyUserId, modifyUserId_);
      DARABONBA_PTR_FROM_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PublishVersion, publishVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeMmAppResponseBody() = default ;
    DescribeMmAppResponseBody(const DescribeMmAppResponseBody &) = default ;
    DescribeMmAppResponseBody(DescribeMmAppResponseBody &&) = default ;
    DescribeMmAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMmAppResponseBody() = default ;
    DescribeMmAppResponseBody& operator=(const DescribeMmAppResponseBody &) = default ;
    DescribeMmAppResponseBody& operator=(DescribeMmAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModelConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelConfig& obj) { 
        DARABONBA_PTR_TO_JSON(HistoryLimit, historyLimit_);
        DARABONBA_PTR_TO_JSON(ModelType, modelType_);
        DARABONBA_PTR_TO_JSON(OpenMemory, openMemory_);
        DARABONBA_PTR_TO_JSON(OpenWebSearch, openWebSearch_);
        DARABONBA_PTR_TO_JSON(TextModal, textModal_);
      };
      friend void from_json(const Darabonba::Json& j, ModelConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(HistoryLimit, historyLimit_);
        DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
        DARABONBA_PTR_FROM_JSON(OpenMemory, openMemory_);
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
        && this->modelType_ == nullptr && this->openMemory_ == nullptr && this->openWebSearch_ == nullptr && this->textModal_ == nullptr; };
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


      // textModal Field Functions 
      bool hasTextModal() const { return this->textModal_ != nullptr;};
      void deleteTextModal() { this->textModal_ = nullptr;};
      inline string getTextModal() const { DARABONBA_PTR_GET_DEFAULT(textModal_, "") };
      inline ModelConfig& setTextModal(string textModal) { DARABONBA_PTR_SET_VALUE(textModal_, textModal) };


    protected:
      shared_ptr<int32_t> historyLimit_ {};
      shared_ptr<string> modelType_ {};
      shared_ptr<bool> openMemory_ {};
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
        DARABONBA_PTR_TO_JSON(Mcps, mcps_);
        DARABONBA_PTR_TO_JSON(RagConfig, ragConfig_);
      };
      friend void from_json(const Darabonba::Json& j, BindingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Commands, commands_);
        DARABONBA_PTR_FROM_JSON(Mcps, mcps_);
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
        inline string getEnableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, "") };
        inline RagConfig& setEnableSearch(string enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


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
        shared_ptr<string> enableSearch_ {};
        shared_ptr<vector<string>> knowledgeBaseCodeList_ {};
        shared_ptr<string> promptStrategy_ {};
        shared_ptr<map<string, double>> rankWeights_ {};
        shared_ptr<int32_t> retrieveMaxLength_ {};
        shared_ptr<int32_t> topK_ {};
      };

      class Mcps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Mcps& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(ToolList, toolList_);
        };
        friend void from_json(const Darabonba::Json& j, Mcps& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(ToolList, toolList_);
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
        && this->toolList_ == nullptr; };
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


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<vector<string>> toolList_ {};
      };

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
        inline const vector<string> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<string>) };
        inline vector<string> getTools() { DARABONBA_PTR_GET(tools_, vector<string>) };
        inline Commands& setTools(const vector<string> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
        inline Commands& setTools(vector<string> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Commands& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> domainCode_ {};
        shared_ptr<vector<string>> tools_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->commands_ == nullptr
        && this->mcps_ == nullptr && this->ragConfig_ == nullptr; };
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


      // ragConfig Field Functions 
      bool hasRagConfig() const { return this->ragConfig_ != nullptr;};
      void deleteRagConfig() { this->ragConfig_ = nullptr;};
      inline const BindingConfig::RagConfig & getRagConfig() const { DARABONBA_PTR_GET_CONST(ragConfig_, BindingConfig::RagConfig) };
      inline BindingConfig::RagConfig getRagConfig() { DARABONBA_PTR_GET(ragConfig_, BindingConfig::RagConfig) };
      inline BindingConfig& setRagConfig(const BindingConfig::RagConfig & ragConfig) { DARABONBA_PTR_SET_VALUE(ragConfig_, ragConfig) };
      inline BindingConfig& setRagConfig(BindingConfig::RagConfig && ragConfig) { DARABONBA_PTR_SET_RVALUE(ragConfig_, ragConfig) };


    protected:
      shared_ptr<vector<BindingConfig::Commands>> commands_ {};
      shared_ptr<vector<BindingConfig::Mcps>> mcps_ {};
      shared_ptr<BindingConfig::RagConfig> ragConfig_ {};
    };

    class AppConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EnableTransition, enableTransition_);
      };
      friend void from_json(const Darabonba::Json& j, AppConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableTransition, enableTransition_);
      };
      AppConfig() = default ;
      AppConfig(const AppConfig &) = default ;
      AppConfig(AppConfig &&) = default ;
      AppConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppConfig() = default ;
      AppConfig& operator=(const AppConfig &) = default ;
      AppConfig& operator=(AppConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableTransition_ == nullptr; };
      // enableTransition Field Functions 
      bool hasEnableTransition() const { return this->enableTransition_ != nullptr;};
      void deleteEnableTransition() { this->enableTransition_ = nullptr;};
      inline bool getEnableTransition() const { DARABONBA_PTR_GET_DEFAULT(enableTransition_, false) };
      inline AppConfig& setEnableTransition(bool enableTransition) { DARABONBA_PTR_SET_VALUE(enableTransition_, enableTransition) };


    protected:
      shared_ptr<bool> enableTransition_ {};
    };

    virtual bool empty() const override { return this->appConfig_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->bindingConfig_ == nullptr && this->conversationConfig_ == nullptr && this->createUserId_ == nullptr
        && this->createUserName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->modelConfig_ == nullptr && this->modifyUserId_ == nullptr
        && this->modifyUserName_ == nullptr && this->prompt_ == nullptr && this->publishVersion_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // appConfig Field Functions 
    bool hasAppConfig() const { return this->appConfig_ != nullptr;};
    void deleteAppConfig() { this->appConfig_ = nullptr;};
    inline const DescribeMmAppResponseBody::AppConfig & getAppConfig() const { DARABONBA_PTR_GET_CONST(appConfig_, DescribeMmAppResponseBody::AppConfig) };
    inline DescribeMmAppResponseBody::AppConfig getAppConfig() { DARABONBA_PTR_GET(appConfig_, DescribeMmAppResponseBody::AppConfig) };
    inline DescribeMmAppResponseBody& setAppConfig(const DescribeMmAppResponseBody::AppConfig & appConfig) { DARABONBA_PTR_SET_VALUE(appConfig_, appConfig) };
    inline DescribeMmAppResponseBody& setAppConfig(DescribeMmAppResponseBody::AppConfig && appConfig) { DARABONBA_PTR_SET_RVALUE(appConfig_, appConfig) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeMmAppResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeMmAppResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bindingConfig Field Functions 
    bool hasBindingConfig() const { return this->bindingConfig_ != nullptr;};
    void deleteBindingConfig() { this->bindingConfig_ = nullptr;};
    inline const DescribeMmAppResponseBody::BindingConfig & getBindingConfig() const { DARABONBA_PTR_GET_CONST(bindingConfig_, DescribeMmAppResponseBody::BindingConfig) };
    inline DescribeMmAppResponseBody::BindingConfig getBindingConfig() { DARABONBA_PTR_GET(bindingConfig_, DescribeMmAppResponseBody::BindingConfig) };
    inline DescribeMmAppResponseBody& setBindingConfig(const DescribeMmAppResponseBody::BindingConfig & bindingConfig) { DARABONBA_PTR_SET_VALUE(bindingConfig_, bindingConfig) };
    inline DescribeMmAppResponseBody& setBindingConfig(DescribeMmAppResponseBody::BindingConfig && bindingConfig) { DARABONBA_PTR_SET_RVALUE(bindingConfig_, bindingConfig) };


    // conversationConfig Field Functions 
    bool hasConversationConfig() const { return this->conversationConfig_ != nullptr;};
    void deleteConversationConfig() { this->conversationConfig_ = nullptr;};
    inline const DescribeMmAppResponseBody::ConversationConfig & getConversationConfig() const { DARABONBA_PTR_GET_CONST(conversationConfig_, DescribeMmAppResponseBody::ConversationConfig) };
    inline DescribeMmAppResponseBody::ConversationConfig getConversationConfig() { DARABONBA_PTR_GET(conversationConfig_, DescribeMmAppResponseBody::ConversationConfig) };
    inline DescribeMmAppResponseBody& setConversationConfig(const DescribeMmAppResponseBody::ConversationConfig & conversationConfig) { DARABONBA_PTR_SET_VALUE(conversationConfig_, conversationConfig) };
    inline DescribeMmAppResponseBody& setConversationConfig(DescribeMmAppResponseBody::ConversationConfig && conversationConfig) { DARABONBA_PTR_SET_RVALUE(conversationConfig_, conversationConfig) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline string getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
    inline DescribeMmAppResponseBody& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline DescribeMmAppResponseBody& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeMmAppResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeMmAppResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const DescribeMmAppResponseBody::ModelConfig & getModelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, DescribeMmAppResponseBody::ModelConfig) };
    inline DescribeMmAppResponseBody::ModelConfig getModelConfig() { DARABONBA_PTR_GET(modelConfig_, DescribeMmAppResponseBody::ModelConfig) };
    inline DescribeMmAppResponseBody& setModelConfig(const DescribeMmAppResponseBody::ModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline DescribeMmAppResponseBody& setModelConfig(DescribeMmAppResponseBody::ModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // modifyUserId Field Functions 
    bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
    void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
    inline string getModifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, "") };
    inline DescribeMmAppResponseBody& setModifyUserId(string modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string getModifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline DescribeMmAppResponseBody& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline DescribeMmAppResponseBody& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // publishVersion Field Functions 
    bool hasPublishVersion() const { return this->publishVersion_ != nullptr;};
    void deletePublishVersion() { this->publishVersion_ = nullptr;};
    inline int64_t getPublishVersion() const { DARABONBA_PTR_GET_DEFAULT(publishVersion_, 0L) };
    inline DescribeMmAppResponseBody& setPublishVersion(int64_t publishVersion) { DARABONBA_PTR_SET_VALUE(publishVersion_, publishVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMmAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMmAppResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<DescribeMmAppResponseBody::AppConfig> appConfig_ {};
    shared_ptr<string> appId_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<DescribeMmAppResponseBody::BindingConfig> bindingConfig_ {};
    shared_ptr<DescribeMmAppResponseBody::ConversationConfig> conversationConfig_ {};
    shared_ptr<string> createUserId_ {};
    shared_ptr<string> createUserName_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<DescribeMmAppResponseBody::ModelConfig> modelConfig_ {};
    shared_ptr<string> modifyUserId_ {};
    shared_ptr<string> modifyUserName_ {};
    shared_ptr<string> prompt_ {};
    shared_ptr<int64_t> publishVersion_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
