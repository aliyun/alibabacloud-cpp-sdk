// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdateKnowledgeSpaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeSpaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KnowledgeSpaceId, knowledgeSpaceId_);
      DARABONBA_PTR_TO_JSON(LLMModel, LLMModel_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RerankModel, rerankModel_);
      DARABONBA_PTR_TO_JSON(ShardingStrategyConfig, shardingStrategyConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeSpaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KnowledgeSpaceId, knowledgeSpaceId_);
      DARABONBA_PTR_FROM_JSON(LLMModel, LLMModel_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RerankModel, rerankModel_);
      DARABONBA_PTR_FROM_JSON(ShardingStrategyConfig, shardingStrategyConfig_);
    };
    UpdateKnowledgeSpaceRequest() = default ;
    UpdateKnowledgeSpaceRequest(const UpdateKnowledgeSpaceRequest &) = default ;
    UpdateKnowledgeSpaceRequest(UpdateKnowledgeSpaceRequest &&) = default ;
    UpdateKnowledgeSpaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeSpaceRequest() = default ;
    UpdateKnowledgeSpaceRequest& operator=(const UpdateKnowledgeSpaceRequest &) = default ;
    UpdateKnowledgeSpaceRequest& operator=(UpdateKnowledgeSpaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ShardingStrategyConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ShardingStrategyConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultStrategy, defaultStrategy_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, ShardingStrategyConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultStrategy, defaultStrategy_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
      };
      ShardingStrategyConfig() = default ;
      ShardingStrategyConfig(const ShardingStrategyConfig &) = default ;
      ShardingStrategyConfig(ShardingStrategyConfig &&) = default ;
      ShardingStrategyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ShardingStrategyConfig() = default ;
      ShardingStrategyConfig& operator=(const ShardingStrategyConfig &) = default ;
      ShardingStrategyConfig& operator=(ShardingStrategyConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(Match, match_);
          DARABONBA_PTR_TO_JSON(Strategy, strategy_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(Match, match_);
          DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
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
        class Strategy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Strategy& obj) { 
            DARABONBA_PTR_TO_JSON(Parameters, parameters_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Strategy& obj) { 
            DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Strategy() = default ;
          Strategy(const Strategy &) = default ;
          Strategy(Strategy &&) = default ;
          Strategy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Strategy() = default ;
          Strategy& operator=(const Strategy &) = default ;
          Strategy& operator=(Strategy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Parameters : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
              DARABONBA_PTR_TO_JSON(MarkdownTables, markdownTables_);
              DARABONBA_PTR_TO_JSON(MaxTokens, maxTokens_);
            };
            friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
              DARABONBA_PTR_FROM_JSON(MarkdownTables, markdownTables_);
              DARABONBA_PTR_FROM_JSON(MaxTokens, maxTokens_);
            };
            Parameters() = default ;
            Parameters(const Parameters &) = default ;
            Parameters(Parameters &&) = default ;
            Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Parameters() = default ;
            Parameters& operator=(const Parameters &) = default ;
            Parameters& operator=(Parameters &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->markdownTables_ == nullptr
        && this->maxTokens_ == nullptr; };
            // markdownTables Field Functions 
            bool hasMarkdownTables() const { return this->markdownTables_ != nullptr;};
            void deleteMarkdownTables() { this->markdownTables_ = nullptr;};
            inline string getMarkdownTables() const { DARABONBA_PTR_GET_DEFAULT(markdownTables_, "") };
            inline Parameters& setMarkdownTables(string markdownTables) { DARABONBA_PTR_SET_VALUE(markdownTables_, markdownTables) };


            // maxTokens Field Functions 
            bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
            void deleteMaxTokens() { this->maxTokens_ = nullptr;};
            inline int32_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0) };
            inline Parameters& setMaxTokens(int32_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


          protected:
            // The processing mode for Markdown tables. Valid values: auto, on, or off.
            shared_ptr<string> markdownTables_ {};
            // The maximum number of tokens per chunk for matched content. The value must be a positive integer.
            shared_ptr<int32_t> maxTokens_ {};
          };

          virtual bool empty() const override { return this->parameters_ == nullptr
        && this->type_ == nullptr; };
          // parameters Field Functions 
          bool hasParameters() const { return this->parameters_ != nullptr;};
          void deleteParameters() { this->parameters_ = nullptr;};
          inline const Strategy::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, Strategy::Parameters) };
          inline Strategy::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, Strategy::Parameters) };
          inline Strategy& setParameters(const Strategy::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
          inline Strategy& setParameters(Strategy::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Strategy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The chunking strategy parameters for the override rule. MaxTokens takes effect only when Type is set to hybrid. MarkdownTables supports auto, on, or off.
          shared_ptr<Strategy::Parameters> parameters_ {};
          // The type of the chunking strategy to use when the rule is matched. Valid values: hybrid or hierarchical.
          shared_ptr<string> type_ {};
        };

        class Match : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Match& obj) { 
            DARABONBA_PTR_TO_JSON(ContentType, contentType_);
          };
          friend void from_json(const Darabonba::Json& j, Match& obj) { 
            DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
          };
          Match() = default ;
          Match(const Match &) = default ;
          Match(Match &&) = default ;
          Match(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Match() = default ;
          Match& operator=(const Match &) = default ;
          Match& operator=(Match &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->contentType_ == nullptr; };
          // contentType Field Functions 
          bool hasContentType() const { return this->contentType_ != nullptr;};
          void deleteContentType() { this->contentType_ = nullptr;};
          inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
          inline Match& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


        protected:
          // The content type. Currently, only table is supported.
          shared_ptr<string> contentType_ {};
        };

        virtual bool empty() const override { return this->match_ == nullptr
        && this->strategy_ == nullptr; };
        // match Field Functions 
        bool hasMatch() const { return this->match_ != nullptr;};
        void deleteMatch() { this->match_ = nullptr;};
        inline const Rules::Match & getMatch() const { DARABONBA_PTR_GET_CONST(match_, Rules::Match) };
        inline Rules::Match getMatch() { DARABONBA_PTR_GET(match_, Rules::Match) };
        inline Rules& setMatch(const Rules::Match & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
        inline Rules& setMatch(Rules::Match && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


        // strategy Field Functions 
        bool hasStrategy() const { return this->strategy_ != nullptr;};
        void deleteStrategy() { this->strategy_ = nullptr;};
        inline const Rules::Strategy & getStrategy() const { DARABONBA_PTR_GET_CONST(strategy_, Rules::Strategy) };
        inline Rules::Strategy getStrategy() { DARABONBA_PTR_GET(strategy_, Rules::Strategy) };
        inline Rules& setStrategy(const Rules::Strategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
        inline Rules& setStrategy(Rules::Strategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


      protected:
        // The match condition of the rule. Currently, only exact matching of table content by content type is supported.
        shared_ptr<Rules::Match> match_ {};
        // The chunking strategy to use when the rule is matched.
        shared_ptr<Rules::Strategy> strategy_ {};
      };

      class DefaultStrategy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DefaultStrategy& obj) { 
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DefaultStrategy& obj) { 
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        DefaultStrategy() = default ;
        DefaultStrategy(const DefaultStrategy &) = default ;
        DefaultStrategy(DefaultStrategy &&) = default ;
        DefaultStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DefaultStrategy() = default ;
        DefaultStrategy& operator=(const DefaultStrategy &) = default ;
        DefaultStrategy& operator=(DefaultStrategy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Parameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
            DARABONBA_PTR_TO_JSON(MaxTokens, maxTokens_);
            DARABONBA_PTR_TO_JSON(MergePeers, mergePeers_);
          };
          friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
            DARABONBA_PTR_FROM_JSON(MaxTokens, maxTokens_);
            DARABONBA_PTR_FROM_JSON(MergePeers, mergePeers_);
          };
          Parameters() = default ;
          Parameters(const Parameters &) = default ;
          Parameters(Parameters &&) = default ;
          Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Parameters() = default ;
          Parameters& operator=(const Parameters &) = default ;
          Parameters& operator=(Parameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxTokens_ == nullptr
        && this->mergePeers_ == nullptr; };
          // maxTokens Field Functions 
          bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
          void deleteMaxTokens() { this->maxTokens_ = nullptr;};
          inline int32_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0) };
          inline Parameters& setMaxTokens(int32_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


          // mergePeers Field Functions 
          bool hasMergePeers() const { return this->mergePeers_ != nullptr;};
          void deleteMergePeers() { this->mergePeers_ = nullptr;};
          inline bool getMergePeers() const { DARABONBA_PTR_GET_DEFAULT(mergePeers_, false) };
          inline Parameters& setMergePeers(bool mergePeers) { DARABONBA_PTR_SET_VALUE(mergePeers_, mergePeers) };


        protected:
          // The maximum number of tokens per chunk. The value must be a positive integer.
          shared_ptr<int32_t> maxTokens_ {};
          // Specifies whether to merge adjacent small chunks under the same heading.
          shared_ptr<bool> mergePeers_ {};
        };

        virtual bool empty() const override { return this->parameters_ == nullptr
        && this->type_ == nullptr; };
        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline const DefaultStrategy::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, DefaultStrategy::Parameters) };
        inline DefaultStrategy::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, DefaultStrategy::Parameters) };
        inline DefaultStrategy& setParameters(const DefaultStrategy::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
        inline DefaultStrategy& setParameters(DefaultStrategy::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DefaultStrategy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The parameters of the default chunking strategy. MaxTokens and MergePeers take effect only when Type is set to hybrid.
        shared_ptr<DefaultStrategy::Parameters> parameters_ {};
        // The type of the default chunking strategy. Valid values: hybrid or hierarchical.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->defaultStrategy_ == nullptr
        && this->rules_ == nullptr; };
      // defaultStrategy Field Functions 
      bool hasDefaultStrategy() const { return this->defaultStrategy_ != nullptr;};
      void deleteDefaultStrategy() { this->defaultStrategy_ = nullptr;};
      inline const ShardingStrategyConfig::DefaultStrategy & getDefaultStrategy() const { DARABONBA_PTR_GET_CONST(defaultStrategy_, ShardingStrategyConfig::DefaultStrategy) };
      inline ShardingStrategyConfig::DefaultStrategy getDefaultStrategy() { DARABONBA_PTR_GET(defaultStrategy_, ShardingStrategyConfig::DefaultStrategy) };
      inline ShardingStrategyConfig& setDefaultStrategy(const ShardingStrategyConfig::DefaultStrategy & defaultStrategy) { DARABONBA_PTR_SET_VALUE(defaultStrategy_, defaultStrategy) };
      inline ShardingStrategyConfig& setDefaultStrategy(ShardingStrategyConfig::DefaultStrategy && defaultStrategy) { DARABONBA_PTR_SET_RVALUE(defaultStrategy_, defaultStrategy) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<ShardingStrategyConfig::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<ShardingStrategyConfig::Rules>) };
      inline vector<ShardingStrategyConfig::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<ShardingStrategyConfig::Rules>) };
      inline ShardingStrategyConfig& setRules(const vector<ShardingStrategyConfig::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline ShardingStrategyConfig& setRules(vector<ShardingStrategyConfig::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      // The default chunking strategy. This strategy is used when no rule is matched.
      shared_ptr<ShardingStrategyConfig::DefaultStrategy> defaultStrategy_ {};
      // The list of override rules that are matched in order. Currently, a maximum of one exact-match rule with ContentType set to table is supported.
      shared_ptr<vector<ShardingStrategyConfig::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->knowledgeSpaceId_ == nullptr && this->LLMModel_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->rerankModel_ == nullptr
        && this->shardingStrategyConfig_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateKnowledgeSpaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // knowledgeSpaceId Field Functions 
    bool hasKnowledgeSpaceId() const { return this->knowledgeSpaceId_ != nullptr;};
    void deleteKnowledgeSpaceId() { this->knowledgeSpaceId_ = nullptr;};
    inline string getKnowledgeSpaceId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeSpaceId_, "") };
    inline UpdateKnowledgeSpaceRequest& setKnowledgeSpaceId(string knowledgeSpaceId) { DARABONBA_PTR_SET_VALUE(knowledgeSpaceId_, knowledgeSpaceId) };


    // LLMModel Field Functions 
    bool hasLLMModel() const { return this->LLMModel_ != nullptr;};
    void deleteLLMModel() { this->LLMModel_ = nullptr;};
    inline string getLLMModel() const { DARABONBA_PTR_GET_DEFAULT(LLMModel_, "") };
    inline UpdateKnowledgeSpaceRequest& setLLMModel(string LLMModel) { DARABONBA_PTR_SET_VALUE(LLMModel_, LLMModel) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateKnowledgeSpaceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateKnowledgeSpaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rerankModel Field Functions 
    bool hasRerankModel() const { return this->rerankModel_ != nullptr;};
    void deleteRerankModel() { this->rerankModel_ = nullptr;};
    inline string getRerankModel() const { DARABONBA_PTR_GET_DEFAULT(rerankModel_, "") };
    inline UpdateKnowledgeSpaceRequest& setRerankModel(string rerankModel) { DARABONBA_PTR_SET_VALUE(rerankModel_, rerankModel) };


    // shardingStrategyConfig Field Functions 
    bool hasShardingStrategyConfig() const { return this->shardingStrategyConfig_ != nullptr;};
    void deleteShardingStrategyConfig() { this->shardingStrategyConfig_ = nullptr;};
    inline const UpdateKnowledgeSpaceRequest::ShardingStrategyConfig & getShardingStrategyConfig() const { DARABONBA_PTR_GET_CONST(shardingStrategyConfig_, UpdateKnowledgeSpaceRequest::ShardingStrategyConfig) };
    inline UpdateKnowledgeSpaceRequest::ShardingStrategyConfig getShardingStrategyConfig() { DARABONBA_PTR_GET(shardingStrategyConfig_, UpdateKnowledgeSpaceRequest::ShardingStrategyConfig) };
    inline UpdateKnowledgeSpaceRequest& setShardingStrategyConfig(const UpdateKnowledgeSpaceRequest::ShardingStrategyConfig & shardingStrategyConfig) { DARABONBA_PTR_SET_VALUE(shardingStrategyConfig_, shardingStrategyConfig) };
    inline UpdateKnowledgeSpaceRequest& setShardingStrategyConfig(UpdateKnowledgeSpaceRequest::ShardingStrategyConfig && shardingStrategyConfig) { DARABONBA_PTR_SET_RVALUE(shardingStrategyConfig_, shardingStrategyConfig) };


  protected:
    // The description of the knowledge space. The description can be up to 512 characters in length.
    shared_ptr<string> description_ {};
    // The unique identifier of the knowledge space.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeSpaceId_ {};
    // The name of the large language model.
    shared_ptr<string> LLMModel_ {};
    // The name of the knowledge space. The name must be 1 to 128 characters in length.
    shared_ptr<string> name_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The name of the reranking model.
    shared_ptr<string> rerankModel_ {};
    // The default chunking strategy configuration for the knowledge space. Both simple strategies and composite strategies that match by content type are supported.
    shared_ptr<UpdateKnowledgeSpaceRequest::ShardingStrategyConfig> shardingStrategyConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
