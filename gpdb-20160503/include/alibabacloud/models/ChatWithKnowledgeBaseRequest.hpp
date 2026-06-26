// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(IncludeKnowledgeBaseResults, includeKnowledgeBaseResults_);
      DARABONBA_PTR_TO_JSON(KnowledgeParams, knowledgeParams_);
      DARABONBA_PTR_TO_JSON(ModelParams, modelParams_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PromptParams, promptParams_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(IncludeKnowledgeBaseResults, includeKnowledgeBaseResults_);
      DARABONBA_PTR_FROM_JSON(KnowledgeParams, knowledgeParams_);
      DARABONBA_PTR_FROM_JSON(ModelParams, modelParams_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PromptParams, promptParams_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ChatWithKnowledgeBaseRequest() = default ;
    ChatWithKnowledgeBaseRequest(const ChatWithKnowledgeBaseRequest &) = default ;
    ChatWithKnowledgeBaseRequest(ChatWithKnowledgeBaseRequest &&) = default ;
    ChatWithKnowledgeBaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseRequest() = default ;
    ChatWithKnowledgeBaseRequest& operator=(const ChatWithKnowledgeBaseRequest &) = default ;
    ChatWithKnowledgeBaseRequest& operator=(ChatWithKnowledgeBaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModelParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelParams& obj) { 
        DARABONBA_PTR_TO_JSON(MaxTokens, maxTokens_);
        DARABONBA_PTR_TO_JSON(Messages, messages_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(N, n_);
        DARABONBA_PTR_TO_JSON(PresencePenalty, presencePenalty_);
        DARABONBA_PTR_TO_JSON(Seed, seed_);
        DARABONBA_PTR_TO_JSON(Stop, stop_);
        DARABONBA_PTR_TO_JSON(Temperature, temperature_);
        DARABONBA_PTR_TO_JSON(Tools, tools_);
        DARABONBA_PTR_TO_JSON(TopP, topP_);
      };
      friend void from_json(const Darabonba::Json& j, ModelParams& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxTokens, maxTokens_);
        DARABONBA_PTR_FROM_JSON(Messages, messages_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(N, n_);
        DARABONBA_PTR_FROM_JSON(PresencePenalty, presencePenalty_);
        DARABONBA_PTR_FROM_JSON(Seed, seed_);
        DARABONBA_PTR_FROM_JSON(Stop, stop_);
        DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
        DARABONBA_PTR_FROM_JSON(Tools, tools_);
        DARABONBA_PTR_FROM_JSON(TopP, topP_);
      };
      ModelParams() = default ;
      ModelParams(const ModelParams &) = default ;
      ModelParams(ModelParams &&) = default ;
      ModelParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelParams() = default ;
      ModelParams& operator=(const ModelParams &) = default ;
      ModelParams& operator=(ModelParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tools : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tools& obj) { 
          DARABONBA_PTR_TO_JSON(Function, function_);
        };
        friend void from_json(const Darabonba::Json& j, Tools& obj) { 
          DARABONBA_PTR_FROM_JSON(Function, function_);
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
        class Function : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Function& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_ANY_TO_JSON(Parameters, parameters_);
          };
          friend void from_json(const Darabonba::Json& j, Function& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
          };
          Function() = default ;
          Function(const Function &) = default ;
          Function(Function &&) = default ;
          Function(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Function() = default ;
          Function& operator=(const Function &) = default ;
          Function& operator=(Function &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->parameters_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Function& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Function& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // parameters Field Functions 
          bool hasParameters() const { return this->parameters_ != nullptr;};
          void deleteParameters() { this->parameters_ = nullptr;};
          inline           const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
          Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
          inline Function& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
          inline Function& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


        protected:
          // The function tool description.
          shared_ptr<string> description_ {};
          // The function tool name.
          shared_ptr<string> name_ {};
          // The function parameters in JSON Schema format.
          Darabonba::Json parameters_ {};
        };

        virtual bool empty() const override { return this->function_ == nullptr; };
        // function Field Functions 
        bool hasFunction() const { return this->function_ != nullptr;};
        void deleteFunction() { this->function_ = nullptr;};
        inline const Tools::Function & getFunction() const { DARABONBA_PTR_GET_CONST(function_, Tools::Function) };
        inline Tools::Function getFunction() { DARABONBA_PTR_GET(function_, Tools::Function) };
        inline Tools& setFunction(const Tools::Function & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
        inline Tools& setFunction(Tools::Function && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


      protected:
        // The function information.
        shared_ptr<Tools::Function> function_ {};
      };

      class Messages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Messages& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Role, role_);
        };
        friend void from_json(const Darabonba::Json& j, Messages& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
        };
        Messages() = default ;
        Messages(const Messages &) = default ;
        Messages(Messages &&) = default ;
        Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Messages() = default ;
        Messages& operator=(const Messages &) = default ;
        Messages& operator=(Messages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      protected:
        // The message content.
        // 
        // This parameter is required.
        shared_ptr<string> content_ {};
        // The message role. Valid values:
        // - system
        // - user
        // - assistant
        // 
        // This parameter is required.
        shared_ptr<string> role_ {};
      };

      virtual bool empty() const override { return this->maxTokens_ == nullptr
        && this->messages_ == nullptr && this->model_ == nullptr && this->n_ == nullptr && this->presencePenalty_ == nullptr && this->seed_ == nullptr
        && this->stop_ == nullptr && this->temperature_ == nullptr && this->tools_ == nullptr && this->topP_ == nullptr; };
      // maxTokens Field Functions 
      bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
      void deleteMaxTokens() { this->maxTokens_ = nullptr;};
      inline int64_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0L) };
      inline ModelParams& setMaxTokens(int64_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


      // messages Field Functions 
      bool hasMessages() const { return this->messages_ != nullptr;};
      void deleteMessages() { this->messages_ = nullptr;};
      inline const vector<ModelParams::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<ModelParams::Messages>) };
      inline vector<ModelParams::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<ModelParams::Messages>) };
      inline ModelParams& setMessages(const vector<ModelParams::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
      inline ModelParams& setMessages(vector<ModelParams::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline ModelParams& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // n Field Functions 
      bool hasN() const { return this->n_ != nullptr;};
      void deleteN() { this->n_ = nullptr;};
      inline int64_t getN() const { DARABONBA_PTR_GET_DEFAULT(n_, 0L) };
      inline ModelParams& setN(int64_t n) { DARABONBA_PTR_SET_VALUE(n_, n) };


      // presencePenalty Field Functions 
      bool hasPresencePenalty() const { return this->presencePenalty_ != nullptr;};
      void deletePresencePenalty() { this->presencePenalty_ = nullptr;};
      inline double getPresencePenalty() const { DARABONBA_PTR_GET_DEFAULT(presencePenalty_, 0.0) };
      inline ModelParams& setPresencePenalty(double presencePenalty) { DARABONBA_PTR_SET_VALUE(presencePenalty_, presencePenalty) };


      // seed Field Functions 
      bool hasSeed() const { return this->seed_ != nullptr;};
      void deleteSeed() { this->seed_ = nullptr;};
      inline int64_t getSeed() const { DARABONBA_PTR_GET_DEFAULT(seed_, 0L) };
      inline ModelParams& setSeed(int64_t seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


      // stop Field Functions 
      bool hasStop() const { return this->stop_ != nullptr;};
      void deleteStop() { this->stop_ = nullptr;};
      inline const vector<string> & getStop() const { DARABONBA_PTR_GET_CONST(stop_, vector<string>) };
      inline vector<string> getStop() { DARABONBA_PTR_GET(stop_, vector<string>) };
      inline ModelParams& setStop(const vector<string> & stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };
      inline ModelParams& setStop(vector<string> && stop) { DARABONBA_PTR_SET_RVALUE(stop_, stop) };


      // temperature Field Functions 
      bool hasTemperature() const { return this->temperature_ != nullptr;};
      void deleteTemperature() { this->temperature_ = nullptr;};
      inline double getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
      inline ModelParams& setTemperature(double temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


      // tools Field Functions 
      bool hasTools() const { return this->tools_ != nullptr;};
      void deleteTools() { this->tools_ = nullptr;};
      inline const vector<ModelParams::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<ModelParams::Tools>) };
      inline vector<ModelParams::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<ModelParams::Tools>) };
      inline ModelParams& setTools(const vector<ModelParams::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
      inline ModelParams& setTools(vector<ModelParams::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


      // topP Field Functions 
      bool hasTopP() const { return this->topP_ != nullptr;};
      void deleteTopP() { this->topP_ = nullptr;};
      inline double getTopP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
      inline ModelParams& setTopP(double topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


    protected:
      // The maximum number of tokens to generate.
      shared_ptr<int64_t> maxTokens_ {};
      // The message list.
      // 
      // This parameter is required.
      shared_ptr<vector<ModelParams::Messages>> messages_ {};
      // The name of the large model to use. For valid values, see: [Bailian Help Documentation](https://help.aliyun.com/zh/model-studio/compatibility-of-openai-with-dashscope?spm=a2c4g.11186623.help-menu-2400256.d_2_10_0.45b5516eZIciC8&scm=20140722.H_2833609._.OR_help-T_cn~zh-V_1#eadfc13038jd5)
      // 
      // This parameter is required.
      shared_ptr<string> model_ {};
      // The number of candidate replies to generate.
      shared_ptr<int64_t> n_ {};
      // The presence penalty coefficient (-2.0 to 2.0).
      shared_ptr<double> presencePenalty_ {};
      // The random seed.
      shared_ptr<int64_t> seed_ {};
      // The stop word list.
      shared_ptr<vector<string>> stop_ {};
      // The sampling temperature (0 to 2).
      shared_ptr<double> temperature_ {};
      // The tool list.
      shared_ptr<vector<ModelParams::Tools>> tools_ {};
      // The nucleus sampling probability threshold (0 to 1).
      shared_ptr<double> topP_ {};
    };

    class KnowledgeParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KnowledgeParams& obj) { 
        DARABONBA_PTR_TO_JSON(MergeMethod, mergeMethod_);
        DARABONBA_PTR_TO_JSON(MergeMethodArgs, mergeMethodArgs_);
        DARABONBA_PTR_TO_JSON(RerankFactor, rerankFactor_);
        DARABONBA_PTR_TO_JSON(RerankModel, rerankModel_);
        DARABONBA_PTR_TO_JSON(SourceCollection, sourceCollection_);
        DARABONBA_PTR_TO_JSON(TopK, topK_);
      };
      friend void from_json(const Darabonba::Json& j, KnowledgeParams& obj) { 
        DARABONBA_PTR_FROM_JSON(MergeMethod, mergeMethod_);
        DARABONBA_PTR_FROM_JSON(MergeMethodArgs, mergeMethodArgs_);
        DARABONBA_PTR_FROM_JSON(RerankFactor, rerankFactor_);
        DARABONBA_PTR_FROM_JSON(RerankModel, rerankModel_);
        DARABONBA_PTR_FROM_JSON(SourceCollection, sourceCollection_);
        DARABONBA_PTR_FROM_JSON(TopK, topK_);
      };
      KnowledgeParams() = default ;
      KnowledgeParams(const KnowledgeParams &) = default ;
      KnowledgeParams(KnowledgeParams &&) = default ;
      KnowledgeParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KnowledgeParams() = default ;
      KnowledgeParams& operator=(const KnowledgeParams &) = default ;
      KnowledgeParams& operator=(KnowledgeParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SourceCollection : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceCollection& obj) { 
          DARABONBA_PTR_TO_JSON(Collection, collection_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
          DARABONBA_PTR_TO_JSON(QueryParams, queryParams_);
        };
        friend void from_json(const Darabonba::Json& j, SourceCollection& obj) { 
          DARABONBA_PTR_FROM_JSON(Collection, collection_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
          DARABONBA_PTR_FROM_JSON(QueryParams, queryParams_);
        };
        SourceCollection() = default ;
        SourceCollection(const SourceCollection &) = default ;
        SourceCollection(SourceCollection &&) = default ;
        SourceCollection(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceCollection() = default ;
        SourceCollection& operator=(const SourceCollection &) = default ;
        SourceCollection& operator=(SourceCollection &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class QueryParams : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const QueryParams& obj) { 
            DARABONBA_PTR_TO_JSON(Filter, filter_);
            DARABONBA_PTR_TO_JSON(GraphEnhance, graphEnhance_);
            DARABONBA_PTR_TO_JSON(GraphSearchArgs, graphSearchArgs_);
            DARABONBA_PTR_TO_JSON(HybridSearch, hybridSearch_);
            DARABONBA_ANY_TO_JSON(HybridSearchArgs, hybridSearchArgs_);
            DARABONBA_PTR_TO_JSON(Metrics, metrics_);
            DARABONBA_PTR_TO_JSON(RecallWindow, recallWindow_);
            DARABONBA_PTR_TO_JSON(RerankFactor, rerankFactor_);
            DARABONBA_PTR_TO_JSON(RerankModel, rerankModel_);
            DARABONBA_PTR_TO_JSON(TopK, topK_);
            DARABONBA_PTR_TO_JSON(UseFullTextRetrieval, useFullTextRetrieval_);
          };
          friend void from_json(const Darabonba::Json& j, QueryParams& obj) { 
            DARABONBA_PTR_FROM_JSON(Filter, filter_);
            DARABONBA_PTR_FROM_JSON(GraphEnhance, graphEnhance_);
            DARABONBA_PTR_FROM_JSON(GraphSearchArgs, graphSearchArgs_);
            DARABONBA_PTR_FROM_JSON(HybridSearch, hybridSearch_);
            DARABONBA_ANY_FROM_JSON(HybridSearchArgs, hybridSearchArgs_);
            DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
            DARABONBA_PTR_FROM_JSON(RecallWindow, recallWindow_);
            DARABONBA_PTR_FROM_JSON(RerankFactor, rerankFactor_);
            DARABONBA_PTR_FROM_JSON(RerankModel, rerankModel_);
            DARABONBA_PTR_FROM_JSON(TopK, topK_);
            DARABONBA_PTR_FROM_JSON(UseFullTextRetrieval, useFullTextRetrieval_);
          };
          QueryParams() = default ;
          QueryParams(const QueryParams &) = default ;
          QueryParams(QueryParams &&) = default ;
          QueryParams(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~QueryParams() = default ;
          QueryParams& operator=(const QueryParams &) = default ;
          QueryParams& operator=(QueryParams &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RerankModel : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RerankModel& obj) { 
              DARABONBA_PTR_TO_JSON(Instruct, instruct_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(RerankMetadataFields, rerankMetadataFields_);
            };
            friend void from_json(const Darabonba::Json& j, RerankModel& obj) { 
              DARABONBA_PTR_FROM_JSON(Instruct, instruct_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(RerankMetadataFields, rerankMetadataFields_);
            };
            RerankModel() = default ;
            RerankModel(const RerankModel &) = default ;
            RerankModel(RerankModel &&) = default ;
            RerankModel(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RerankModel() = default ;
            RerankModel& operator=(const RerankModel &) = default ;
            RerankModel& operator=(RerankModel &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->instruct_ == nullptr
        && this->name_ == nullptr && this->rerankMetadataFields_ == nullptr; };
            // instruct Field Functions 
            bool hasInstruct() const { return this->instruct_ != nullptr;};
            void deleteInstruct() { this->instruct_ = nullptr;};
            inline string getInstruct() const { DARABONBA_PTR_GET_DEFAULT(instruct_, "") };
            inline RerankModel& setInstruct(string instruct) { DARABONBA_PTR_SET_VALUE(instruct_, instruct) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline RerankModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // rerankMetadataFields Field Functions 
            bool hasRerankMetadataFields() const { return this->rerankMetadataFields_ != nullptr;};
            void deleteRerankMetadataFields() { this->rerankMetadataFields_ = nullptr;};
            inline string getRerankMetadataFields() const { DARABONBA_PTR_GET_DEFAULT(rerankMetadataFields_, "") };
            inline RerankModel& setRerankMetadataFields(string rerankMetadataFields) { DARABONBA_PTR_SET_VALUE(rerankMetadataFields_, rerankMetadataFields) };


          protected:
            shared_ptr<string> instruct_ {};
            shared_ptr<string> name_ {};
            shared_ptr<string> rerankMetadataFields_ {};
          };

          class GraphSearchArgs : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const GraphSearchArgs& obj) { 
              DARABONBA_PTR_TO_JSON(GraphTopK, graphTopK_);
            };
            friend void from_json(const Darabonba::Json& j, GraphSearchArgs& obj) { 
              DARABONBA_PTR_FROM_JSON(GraphTopK, graphTopK_);
            };
            GraphSearchArgs() = default ;
            GraphSearchArgs(const GraphSearchArgs &) = default ;
            GraphSearchArgs(GraphSearchArgs &&) = default ;
            GraphSearchArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~GraphSearchArgs() = default ;
            GraphSearchArgs& operator=(const GraphSearchArgs &) = default ;
            GraphSearchArgs& operator=(GraphSearchArgs &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->graphTopK_ == nullptr; };
            // graphTopK Field Functions 
            bool hasGraphTopK() const { return this->graphTopK_ != nullptr;};
            void deleteGraphTopK() { this->graphTopK_ = nullptr;};
            inline int64_t getGraphTopK() const { DARABONBA_PTR_GET_DEFAULT(graphTopK_, 0L) };
            inline GraphSearchArgs& setGraphTopK(int64_t graphTopK) { DARABONBA_PTR_SET_VALUE(graphTopK_, graphTopK) };


          protected:
            // The number of top entities and relationship edges to return. Default value: 60.
            shared_ptr<int64_t> graphTopK_ {};
          };

          virtual bool empty() const override { return this->filter_ == nullptr
        && this->graphEnhance_ == nullptr && this->graphSearchArgs_ == nullptr && this->hybridSearch_ == nullptr && this->hybridSearchArgs_ == nullptr && this->metrics_ == nullptr
        && this->recallWindow_ == nullptr && this->rerankFactor_ == nullptr && this->rerankModel_ == nullptr && this->topK_ == nullptr && this->useFullTextRetrieval_ == nullptr; };
          // filter Field Functions 
          bool hasFilter() const { return this->filter_ != nullptr;};
          void deleteFilter() { this->filter_ = nullptr;};
          inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
          inline QueryParams& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


          // graphEnhance Field Functions 
          bool hasGraphEnhance() const { return this->graphEnhance_ != nullptr;};
          void deleteGraphEnhance() { this->graphEnhance_ = nullptr;};
          inline bool getGraphEnhance() const { DARABONBA_PTR_GET_DEFAULT(graphEnhance_, false) };
          inline QueryParams& setGraphEnhance(bool graphEnhance) { DARABONBA_PTR_SET_VALUE(graphEnhance_, graphEnhance) };


          // graphSearchArgs Field Functions 
          bool hasGraphSearchArgs() const { return this->graphSearchArgs_ != nullptr;};
          void deleteGraphSearchArgs() { this->graphSearchArgs_ = nullptr;};
          inline const QueryParams::GraphSearchArgs & getGraphSearchArgs() const { DARABONBA_PTR_GET_CONST(graphSearchArgs_, QueryParams::GraphSearchArgs) };
          inline QueryParams::GraphSearchArgs getGraphSearchArgs() { DARABONBA_PTR_GET(graphSearchArgs_, QueryParams::GraphSearchArgs) };
          inline QueryParams& setGraphSearchArgs(const QueryParams::GraphSearchArgs & graphSearchArgs) { DARABONBA_PTR_SET_VALUE(graphSearchArgs_, graphSearchArgs) };
          inline QueryParams& setGraphSearchArgs(QueryParams::GraphSearchArgs && graphSearchArgs) { DARABONBA_PTR_SET_RVALUE(graphSearchArgs_, graphSearchArgs) };


          // hybridSearch Field Functions 
          bool hasHybridSearch() const { return this->hybridSearch_ != nullptr;};
          void deleteHybridSearch() { this->hybridSearch_ = nullptr;};
          inline string getHybridSearch() const { DARABONBA_PTR_GET_DEFAULT(hybridSearch_, "") };
          inline QueryParams& setHybridSearch(string hybridSearch) { DARABONBA_PTR_SET_VALUE(hybridSearch_, hybridSearch) };


          // hybridSearchArgs Field Functions 
          bool hasHybridSearchArgs() const { return this->hybridSearchArgs_ != nullptr;};
          void deleteHybridSearchArgs() { this->hybridSearchArgs_ = nullptr;};
          inline           const Darabonba::Json & getHybridSearchArgs() const { DARABONBA_GET(hybridSearchArgs_) };
          Darabonba::Json & getHybridSearchArgs() { DARABONBA_GET(hybridSearchArgs_) };
          inline QueryParams& setHybridSearchArgs(const Darabonba::Json & hybridSearchArgs) { DARABONBA_SET_VALUE(hybridSearchArgs_, hybridSearchArgs) };
          inline QueryParams& setHybridSearchArgs(Darabonba::Json && hybridSearchArgs) { DARABONBA_SET_RVALUE(hybridSearchArgs_, hybridSearchArgs) };


          // metrics Field Functions 
          bool hasMetrics() const { return this->metrics_ != nullptr;};
          void deleteMetrics() { this->metrics_ = nullptr;};
          inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
          inline QueryParams& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


          // recallWindow Field Functions 
          bool hasRecallWindow() const { return this->recallWindow_ != nullptr;};
          void deleteRecallWindow() { this->recallWindow_ = nullptr;};
          inline const vector<int64_t> & getRecallWindow() const { DARABONBA_PTR_GET_CONST(recallWindow_, vector<int64_t>) };
          inline vector<int64_t> getRecallWindow() { DARABONBA_PTR_GET(recallWindow_, vector<int64_t>) };
          inline QueryParams& setRecallWindow(const vector<int64_t> & recallWindow) { DARABONBA_PTR_SET_VALUE(recallWindow_, recallWindow) };
          inline QueryParams& setRecallWindow(vector<int64_t> && recallWindow) { DARABONBA_PTR_SET_RVALUE(recallWindow_, recallWindow) };


          // rerankFactor Field Functions 
          bool hasRerankFactor() const { return this->rerankFactor_ != nullptr;};
          void deleteRerankFactor() { this->rerankFactor_ = nullptr;};
          inline double getRerankFactor() const { DARABONBA_PTR_GET_DEFAULT(rerankFactor_, 0.0) };
          inline QueryParams& setRerankFactor(double rerankFactor) { DARABONBA_PTR_SET_VALUE(rerankFactor_, rerankFactor) };


          // rerankModel Field Functions 
          bool hasRerankModel() const { return this->rerankModel_ != nullptr;};
          void deleteRerankModel() { this->rerankModel_ = nullptr;};
          inline const QueryParams::RerankModel & getRerankModel() const { DARABONBA_PTR_GET_CONST(rerankModel_, QueryParams::RerankModel) };
          inline QueryParams::RerankModel getRerankModel() { DARABONBA_PTR_GET(rerankModel_, QueryParams::RerankModel) };
          inline QueryParams& setRerankModel(const QueryParams::RerankModel & rerankModel) { DARABONBA_PTR_SET_VALUE(rerankModel_, rerankModel) };
          inline QueryParams& setRerankModel(QueryParams::RerankModel && rerankModel) { DARABONBA_PTR_SET_RVALUE(rerankModel_, rerankModel) };


          // topK Field Functions 
          bool hasTopK() const { return this->topK_ != nullptr;};
          void deleteTopK() { this->topK_ = nullptr;};
          inline int64_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0L) };
          inline QueryParams& setTopK(int64_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


          // useFullTextRetrieval Field Functions 
          bool hasUseFullTextRetrieval() const { return this->useFullTextRetrieval_ != nullptr;};
          void deleteUseFullTextRetrieval() { this->useFullTextRetrieval_ = nullptr;};
          inline bool getUseFullTextRetrieval() const { DARABONBA_PTR_GET_DEFAULT(useFullTextRetrieval_, false) };
          inline QueryParams& setUseFullTextRetrieval(bool useFullTextRetrieval) { DARABONBA_PTR_SET_VALUE(useFullTextRetrieval_, useFullTextRetrieval) };


        protected:
          // The filter condition for the data to be updated, in SQL WHERE clause format.
          shared_ptr<string> filter_ {};
          // Specifies whether to enable knowledge graph enhancement. Default value: false.
          shared_ptr<bool> graphEnhance_ {};
          // The number of top entities and relationship edges to return. Default value: 60.
          shared_ptr<QueryParams::GraphSearchArgs> graphSearchArgs_ {};
          // The multi-path recall algorithm. Default is empty (i.e., directly compares and sorts the dense vector and full-text scores).
          // 
          // Valid values:
          // 
          // - RRF: Reciprocal Rank Fusion. Has a parameter k to control the fusion effect. See HybridSearchArgs configuration for details.
          // - Weight: Weight-based sorting. Uses parameters to control the score weights of vector and full-text retrieval, then sorts. See HybridSearchArgs configuration for details.
          // - Cascaded: First performs full-text retrieval, then performs vector retrieval on top of it.
          shared_ptr<string> hybridSearch_ {};
          // The algorithm parameters for multi-path recall. Currently supports RRF and Weight. HybridPathsSetting can specify recall of dense vectors (dense), sparse vectors (sparse), and full-text retrieval (fulltext). If the value is empty, dense vectors (dense) and full-text retrieval (fulltext) are recalled by default.
          // 
          // - RRF: Specifies the k constant in the scoring algorithm `1/(k+rank_i)`. The value must be a positive integer greater than 1. Format:
          // ```
          // {
          //   "HybridPathsSetting": {
          //     "paths": "dense,fulltext"
          //   },
          //   "RRF": {
          //     "k": 60
          //   }
          // }
          // ```
          // 
          // - Weight: 
          //    - Dual-path recall (without specifying HybridPathsSetting, only specifying alpha):
          //       - Formula: alpha * dense_score + (1-alpha) * fulltext_score. The parameter alpha represents the score weight between dense vector and full-text retrieval, ranging from 0 to 1, where 0 means full-text only and 1 means dense vector only:
          // ```
          // { 
          //    "Weight": {
          //     "alpha": 0.5
          //    }
          // }
          // ```
          //   - Three-path recall mode:
          //      - Formula: normalized_dense * dense_score + normalized_sparse * sparse_score + normalized_fulltext * fulltext_score. Where dense, sparse, and fulltext represent the weights for dense vector, sparse vector, and full-text retrieval respectively, with values greater than or equal to 0. The system automatically normalizes the weights to the range 0-1 (i.e., normalized_x = x / (dense + sparse + fulltext)).
          // ```
          // {
          //   "HybridPathsSetting": {
          //      "paths": "dense,sparse,fulltext"
          //    },
          //   "Weight": {
          //     "dense": 0.5,
          //     "sparse": 0.3,
          //     "fulltext": 0.2
          //   }
          // }
          // ```
          Darabonba::Json hybridSearchArgs_ {};
          // The method used when building the vector index. Valid values:
          // - l2: Euclidean distance.
          // - ip: Inner product distance.
          // - cosine: Cosine similarity.
          shared_ptr<string> metrics_ {};
          // The recall window. When this value is not empty, additional context of the retrieval results is returned. The format is a 2-element array: List<A, B>, where -10 <= A <= 0 and 0 <= B <= 10.
          // > - It is recommended to use this parameter when document segmentation is too granular and retrieval may lose contextual information.
          // > - Reranking takes priority over windowing, meaning reranking is performed first, then windowing is applied.
          shared_ptr<vector<int64_t>> recallWindow_ {};
          // The reranking factor. When this value is not empty, the vector retrieval results are reranked. Value range: 1 < RerankFactor <= 5.
          // > - Reranking is slow when document segmentation is sparse.
          // > - It is recommended that the number of items to rerank (TopK * Factor, rounded up) does not exceed 50.
          shared_ptr<double> rerankFactor_ {};
          shared_ptr<QueryParams::RerankModel> rerankModel_ {};
          // The number of top results to return.
          shared_ptr<int64_t> topK_ {};
          // Specifies whether to use full-text retrieval (dual-path recall). Default value: false, which means only vector retrieval is used.
          shared_ptr<bool> useFullTextRetrieval_ {};
        };

        virtual bool empty() const override { return this->collection_ == nullptr
        && this->namespace_ == nullptr && this->namespacePassword_ == nullptr && this->queryParams_ == nullptr; };
        // collection Field Functions 
        bool hasCollection() const { return this->collection_ != nullptr;};
        void deleteCollection() { this->collection_ = nullptr;};
        inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
        inline SourceCollection& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline SourceCollection& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // namespacePassword Field Functions 
        bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
        void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
        inline string getNamespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
        inline SourceCollection& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


        // queryParams Field Functions 
        bool hasQueryParams() const { return this->queryParams_ != nullptr;};
        void deleteQueryParams() { this->queryParams_ = nullptr;};
        inline const SourceCollection::QueryParams & getQueryParams() const { DARABONBA_PTR_GET_CONST(queryParams_, SourceCollection::QueryParams) };
        inline SourceCollection::QueryParams getQueryParams() { DARABONBA_PTR_GET(queryParams_, SourceCollection::QueryParams) };
        inline SourceCollection& setQueryParams(const SourceCollection::QueryParams & queryParams) { DARABONBA_PTR_SET_VALUE(queryParams_, queryParams) };
        inline SourceCollection& setQueryParams(SourceCollection::QueryParams && queryParams) { DARABONBA_PTR_SET_RVALUE(queryParams_, queryParams) };


      protected:
        // The name of the collection to recall.
        // 
        // This parameter is required.
        shared_ptr<string> collection_ {};
        // The namespace. Default value: public.
        // 
        // > You can create a namespace by calling the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation, and view the list by calling the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation.
        shared_ptr<string> namespace_ {};
        // The password corresponding to the namespace.
        // 
        // > This value is specified in the CreateNamespace operation.
        // 
        // This parameter is required.
        shared_ptr<string> namespacePassword_ {};
        // The parameters related to knowledge base retrieval.
        shared_ptr<SourceCollection::QueryParams> queryParams_ {};
      };

      class RerankModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RerankModel& obj) { 
          DARABONBA_PTR_TO_JSON(Instruct, instruct_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, RerankModel& obj) { 
          DARABONBA_PTR_FROM_JSON(Instruct, instruct_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        RerankModel() = default ;
        RerankModel(const RerankModel &) = default ;
        RerankModel(RerankModel &&) = default ;
        RerankModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RerankModel() = default ;
        RerankModel& operator=(const RerankModel &) = default ;
        RerankModel& operator=(RerankModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instruct_ == nullptr
        && this->name_ == nullptr; };
        // instruct Field Functions 
        bool hasInstruct() const { return this->instruct_ != nullptr;};
        void deleteInstruct() { this->instruct_ = nullptr;};
        inline string getInstruct() const { DARABONBA_PTR_GET_DEFAULT(instruct_, "") };
        inline RerankModel& setInstruct(string instruct) { DARABONBA_PTR_SET_VALUE(instruct_, instruct) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RerankModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> instruct_ {};
        shared_ptr<string> name_ {};
      };

      class MergeMethodArgs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MergeMethodArgs& obj) { 
          DARABONBA_PTR_TO_JSON(Rrf, rrf_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, MergeMethodArgs& obj) { 
          DARABONBA_PTR_FROM_JSON(Rrf, rrf_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        MergeMethodArgs() = default ;
        MergeMethodArgs(const MergeMethodArgs &) = default ;
        MergeMethodArgs(MergeMethodArgs &&) = default ;
        MergeMethodArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MergeMethodArgs() = default ;
        MergeMethodArgs& operator=(const MergeMethodArgs &) = default ;
        MergeMethodArgs& operator=(MergeMethodArgs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Weight : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Weight& obj) { 
            DARABONBA_PTR_TO_JSON(Weights, weights_);
          };
          friend void from_json(const Darabonba::Json& j, Weight& obj) { 
            DARABONBA_PTR_FROM_JSON(Weights, weights_);
          };
          Weight() = default ;
          Weight(const Weight &) = default ;
          Weight(Weight &&) = default ;
          Weight(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Weight() = default ;
          Weight& operator=(const Weight &) = default ;
          Weight& operator=(Weight &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->weights_ == nullptr; };
          // weights Field Functions 
          bool hasWeights() const { return this->weights_ != nullptr;};
          void deleteWeights() { this->weights_ = nullptr;};
          inline const vector<double> & getWeights() const { DARABONBA_PTR_GET_CONST(weights_, vector<double>) };
          inline vector<double> getWeights() { DARABONBA_PTR_GET(weights_, vector<double>) };
          inline Weight& setWeights(const vector<double> & weights) { DARABONBA_PTR_SET_VALUE(weights_, weights) };
          inline Weight& setWeights(vector<double> && weights) { DARABONBA_PTR_SET_RVALUE(weights_, weights) };


        protected:
          // The weight array for each SourceCollection.
          shared_ptr<vector<double>> weights_ {};
        };

        class Rrf : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rrf& obj) { 
            DARABONBA_PTR_TO_JSON(K, k_);
          };
          friend void from_json(const Darabonba::Json& j, Rrf& obj) { 
            DARABONBA_PTR_FROM_JSON(K, k_);
          };
          Rrf() = default ;
          Rrf(const Rrf &) = default ;
          Rrf(Rrf &&) = default ;
          Rrf(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rrf() = default ;
          Rrf& operator=(const Rrf &) = default ;
          Rrf& operator=(Rrf &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->k_ == nullptr; };
          // k Field Functions 
          bool hasK() const { return this->k_ != nullptr;};
          void deleteK() { this->k_ = nullptr;};
          inline int64_t getK() const { DARABONBA_PTR_GET_DEFAULT(k_, 0L) };
          inline Rrf& setK(int64_t k) { DARABONBA_PTR_SET_VALUE(k_, k) };


        protected:
          // The k constant in the scoring algorithm 1/(k+rank_i). The value must be a positive integer greater than 1.
          shared_ptr<int64_t> k_ {};
        };

        virtual bool empty() const override { return this->rrf_ == nullptr
        && this->weight_ == nullptr; };
        // rrf Field Functions 
        bool hasRrf() const { return this->rrf_ != nullptr;};
        void deleteRrf() { this->rrf_ = nullptr;};
        inline const MergeMethodArgs::Rrf & getRrf() const { DARABONBA_PTR_GET_CONST(rrf_, MergeMethodArgs::Rrf) };
        inline MergeMethodArgs::Rrf getRrf() { DARABONBA_PTR_GET(rrf_, MergeMethodArgs::Rrf) };
        inline MergeMethodArgs& setRrf(const MergeMethodArgs::Rrf & rrf) { DARABONBA_PTR_SET_VALUE(rrf_, rrf) };
        inline MergeMethodArgs& setRrf(MergeMethodArgs::Rrf && rrf) { DARABONBA_PTR_SET_RVALUE(rrf_, rrf) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline const MergeMethodArgs::Weight & getWeight() const { DARABONBA_PTR_GET_CONST(weight_, MergeMethodArgs::Weight) };
        inline MergeMethodArgs::Weight getWeight() { DARABONBA_PTR_GET(weight_, MergeMethodArgs::Weight) };
        inline MergeMethodArgs& setWeight(const MergeMethodArgs::Weight & weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };
        inline MergeMethodArgs& setWeight(MergeMethodArgs::Weight && weight) { DARABONBA_PTR_SET_RVALUE(weight_, weight) };


      protected:
        // The configurable parameters when MergeMethod is set to RRF.
        shared_ptr<MergeMethodArgs::Rrf> rrf_ {};
        // The configurable parameters when MergeMethod is set to Weight.
        shared_ptr<MergeMethodArgs::Weight> weight_ {};
      };

      virtual bool empty() const override { return this->mergeMethod_ == nullptr
        && this->mergeMethodArgs_ == nullptr && this->rerankFactor_ == nullptr && this->rerankModel_ == nullptr && this->sourceCollection_ == nullptr && this->topK_ == nullptr; };
      // mergeMethod Field Functions 
      bool hasMergeMethod() const { return this->mergeMethod_ != nullptr;};
      void deleteMergeMethod() { this->mergeMethod_ = nullptr;};
      inline string getMergeMethod() const { DARABONBA_PTR_GET_DEFAULT(mergeMethod_, "") };
      inline KnowledgeParams& setMergeMethod(string mergeMethod) { DARABONBA_PTR_SET_VALUE(mergeMethod_, mergeMethod) };


      // mergeMethodArgs Field Functions 
      bool hasMergeMethodArgs() const { return this->mergeMethodArgs_ != nullptr;};
      void deleteMergeMethodArgs() { this->mergeMethodArgs_ = nullptr;};
      inline const KnowledgeParams::MergeMethodArgs & getMergeMethodArgs() const { DARABONBA_PTR_GET_CONST(mergeMethodArgs_, KnowledgeParams::MergeMethodArgs) };
      inline KnowledgeParams::MergeMethodArgs getMergeMethodArgs() { DARABONBA_PTR_GET(mergeMethodArgs_, KnowledgeParams::MergeMethodArgs) };
      inline KnowledgeParams& setMergeMethodArgs(const KnowledgeParams::MergeMethodArgs & mergeMethodArgs) { DARABONBA_PTR_SET_VALUE(mergeMethodArgs_, mergeMethodArgs) };
      inline KnowledgeParams& setMergeMethodArgs(KnowledgeParams::MergeMethodArgs && mergeMethodArgs) { DARABONBA_PTR_SET_RVALUE(mergeMethodArgs_, mergeMethodArgs) };


      // rerankFactor Field Functions 
      bool hasRerankFactor() const { return this->rerankFactor_ != nullptr;};
      void deleteRerankFactor() { this->rerankFactor_ = nullptr;};
      inline double getRerankFactor() const { DARABONBA_PTR_GET_DEFAULT(rerankFactor_, 0.0) };
      inline KnowledgeParams& setRerankFactor(double rerankFactor) { DARABONBA_PTR_SET_VALUE(rerankFactor_, rerankFactor) };


      // rerankModel Field Functions 
      bool hasRerankModel() const { return this->rerankModel_ != nullptr;};
      void deleteRerankModel() { this->rerankModel_ = nullptr;};
      inline const KnowledgeParams::RerankModel & getRerankModel() const { DARABONBA_PTR_GET_CONST(rerankModel_, KnowledgeParams::RerankModel) };
      inline KnowledgeParams::RerankModel getRerankModel() { DARABONBA_PTR_GET(rerankModel_, KnowledgeParams::RerankModel) };
      inline KnowledgeParams& setRerankModel(const KnowledgeParams::RerankModel & rerankModel) { DARABONBA_PTR_SET_VALUE(rerankModel_, rerankModel) };
      inline KnowledgeParams& setRerankModel(KnowledgeParams::RerankModel && rerankModel) { DARABONBA_PTR_SET_RVALUE(rerankModel_, rerankModel) };


      // sourceCollection Field Functions 
      bool hasSourceCollection() const { return this->sourceCollection_ != nullptr;};
      void deleteSourceCollection() { this->sourceCollection_ = nullptr;};
      inline const vector<KnowledgeParams::SourceCollection> & getSourceCollection() const { DARABONBA_PTR_GET_CONST(sourceCollection_, vector<KnowledgeParams::SourceCollection>) };
      inline vector<KnowledgeParams::SourceCollection> getSourceCollection() { DARABONBA_PTR_GET(sourceCollection_, vector<KnowledgeParams::SourceCollection>) };
      inline KnowledgeParams& setSourceCollection(const vector<KnowledgeParams::SourceCollection> & sourceCollection) { DARABONBA_PTR_SET_VALUE(sourceCollection_, sourceCollection) };
      inline KnowledgeParams& setSourceCollection(vector<KnowledgeParams::SourceCollection> && sourceCollection) { DARABONBA_PTR_SET_RVALUE(sourceCollection_, sourceCollection) };


      // topK Field Functions 
      bool hasTopK() const { return this->topK_ != nullptr;};
      void deleteTopK() { this->topK_ = nullptr;};
      inline int64_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0L) };
      inline KnowledgeParams& setTopK(int64_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    protected:
      // The method for merging multiple knowledge bases. Default is RRF. Valid values:
      // - RRF
      // - Weight
      shared_ptr<string> mergeMethod_ {};
      // The parameters for multi-knowledge base fusion.
      shared_ptr<KnowledgeParams::MergeMethodArgs> mergeMethodArgs_ {};
      // The reranking factor. When this value is not empty, the vector retrieval results are reranked. Value range: 1 < RerankFactor <= 5.
      // > - Reranking is slow when document segmentation is sparse.
      // > - It is recommended that the number of items to rerank (TopK * Factor, rounded up) does not exceed 50.
      shared_ptr<double> rerankFactor_ {};
      shared_ptr<KnowledgeParams::RerankModel> rerankModel_ {};
      // The list of knowledge bases.
      // 
      // This parameter is required.
      shared_ptr<vector<KnowledgeParams::SourceCollection>> sourceCollection_ {};
      // The number of top results to return after merging the recall results from multiple vector collections.
      shared_ptr<int64_t> topK_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->includeKnowledgeBaseResults_ == nullptr && this->knowledgeParams_ == nullptr && this->modelParams_ == nullptr && this->ownerId_ == nullptr && this->promptParams_ == nullptr
        && this->regionId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ChatWithKnowledgeBaseRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // includeKnowledgeBaseResults Field Functions 
    bool hasIncludeKnowledgeBaseResults() const { return this->includeKnowledgeBaseResults_ != nullptr;};
    void deleteIncludeKnowledgeBaseResults() { this->includeKnowledgeBaseResults_ = nullptr;};
    inline bool getIncludeKnowledgeBaseResults() const { DARABONBA_PTR_GET_DEFAULT(includeKnowledgeBaseResults_, false) };
    inline ChatWithKnowledgeBaseRequest& setIncludeKnowledgeBaseResults(bool includeKnowledgeBaseResults) { DARABONBA_PTR_SET_VALUE(includeKnowledgeBaseResults_, includeKnowledgeBaseResults) };


    // knowledgeParams Field Functions 
    bool hasKnowledgeParams() const { return this->knowledgeParams_ != nullptr;};
    void deleteKnowledgeParams() { this->knowledgeParams_ = nullptr;};
    inline const ChatWithKnowledgeBaseRequest::KnowledgeParams & getKnowledgeParams() const { DARABONBA_PTR_GET_CONST(knowledgeParams_, ChatWithKnowledgeBaseRequest::KnowledgeParams) };
    inline ChatWithKnowledgeBaseRequest::KnowledgeParams getKnowledgeParams() { DARABONBA_PTR_GET(knowledgeParams_, ChatWithKnowledgeBaseRequest::KnowledgeParams) };
    inline ChatWithKnowledgeBaseRequest& setKnowledgeParams(const ChatWithKnowledgeBaseRequest::KnowledgeParams & knowledgeParams) { DARABONBA_PTR_SET_VALUE(knowledgeParams_, knowledgeParams) };
    inline ChatWithKnowledgeBaseRequest& setKnowledgeParams(ChatWithKnowledgeBaseRequest::KnowledgeParams && knowledgeParams) { DARABONBA_PTR_SET_RVALUE(knowledgeParams_, knowledgeParams) };


    // modelParams Field Functions 
    bool hasModelParams() const { return this->modelParams_ != nullptr;};
    void deleteModelParams() { this->modelParams_ = nullptr;};
    inline const ChatWithKnowledgeBaseRequest::ModelParams & getModelParams() const { DARABONBA_PTR_GET_CONST(modelParams_, ChatWithKnowledgeBaseRequest::ModelParams) };
    inline ChatWithKnowledgeBaseRequest::ModelParams getModelParams() { DARABONBA_PTR_GET(modelParams_, ChatWithKnowledgeBaseRequest::ModelParams) };
    inline ChatWithKnowledgeBaseRequest& setModelParams(const ChatWithKnowledgeBaseRequest::ModelParams & modelParams) { DARABONBA_PTR_SET_VALUE(modelParams_, modelParams) };
    inline ChatWithKnowledgeBaseRequest& setModelParams(ChatWithKnowledgeBaseRequest::ModelParams && modelParams) { DARABONBA_PTR_SET_RVALUE(modelParams_, modelParams) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ChatWithKnowledgeBaseRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // promptParams Field Functions 
    bool hasPromptParams() const { return this->promptParams_ != nullptr;};
    void deletePromptParams() { this->promptParams_ = nullptr;};
    inline string getPromptParams() const { DARABONBA_PTR_GET_DEFAULT(promptParams_, "") };
    inline ChatWithKnowledgeBaseRequest& setPromptParams(string promptParams) { DARABONBA_PTR_SET_VALUE(promptParams_, promptParams) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ChatWithKnowledgeBaseRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID.
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/196830.html) operation to query the details of all instances in the target region, including the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // Specifies whether to return the recall results. Default value: false.
    shared_ptr<bool> includeKnowledgeBaseResults_ {};
    // The knowledge retrieval parameter object. If not specified, only chat is performed.
    shared_ptr<ChatWithKnowledgeBaseRequest::KnowledgeParams> knowledgeParams_ {};
    // The large language model (LLM) invocation parameter object.
    // 
    // This parameter is required.
    shared_ptr<ChatWithKnowledgeBaseRequest::ModelParams> modelParams_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The system prompt template, which must include {{ text_chunks }}, {{ user_system_prompt }}, {{ graph_entities }}, and {{ graph_relations }}. If not specified, this part does not take effect.
    shared_ptr<string> promptParams_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
