// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGESPACEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGESPACEATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeKnowledgeSpaceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKnowledgeSpaceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ACLMode, ACLMode_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EmbeddingDimension, embeddingDimension_);
      DARABONBA_PTR_TO_JSON(EmbeddingModel, embeddingModel_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseCount, knowledgeBaseCount_);
      DARABONBA_PTR_TO_JSON(KnowledgeSpaceId, knowledgeSpaceId_);
      DARABONBA_PTR_TO_JSON(LLMModel, LLMModel_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RerankModel, rerankModel_);
      DARABONBA_PTR_TO_JSON(ShardSize, shardSize_);
      DARABONBA_PTR_TO_JSON(ShardingStrategyConfig, shardingStrategyConfig_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      DARABONBA_PTR_TO_JSON(TotalDocs, totalDocs_);
      DARABONBA_PTR_TO_JSON(TotalSizeBytes, totalSizeBytes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKnowledgeSpaceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ACLMode, ACLMode_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EmbeddingDimension, embeddingDimension_);
      DARABONBA_PTR_FROM_JSON(EmbeddingModel, embeddingModel_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseCount, knowledgeBaseCount_);
      DARABONBA_PTR_FROM_JSON(KnowledgeSpaceId, knowledgeSpaceId_);
      DARABONBA_PTR_FROM_JSON(LLMModel, LLMModel_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RerankModel, rerankModel_);
      DARABONBA_PTR_FROM_JSON(ShardSize, shardSize_);
      DARABONBA_PTR_FROM_JSON(ShardingStrategyConfig, shardingStrategyConfig_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(TotalDocs, totalDocs_);
      DARABONBA_PTR_FROM_JSON(TotalSizeBytes, totalSizeBytes_);
    };
    DescribeKnowledgeSpaceAttributeResponseBody() = default ;
    DescribeKnowledgeSpaceAttributeResponseBody(const DescribeKnowledgeSpaceAttributeResponseBody &) = default ;
    DescribeKnowledgeSpaceAttributeResponseBody(DescribeKnowledgeSpaceAttributeResponseBody &&) = default ;
    DescribeKnowledgeSpaceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKnowledgeSpaceAttributeResponseBody() = default ;
    DescribeKnowledgeSpaceAttributeResponseBody& operator=(const DescribeKnowledgeSpaceAttributeResponseBody &) = default ;
    DescribeKnowledgeSpaceAttributeResponseBody& operator=(DescribeKnowledgeSpaceAttributeResponseBody &&) = default ;
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
            shared_ptr<string> markdownTables_ {};
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
          shared_ptr<Strategy::Parameters> parameters_ {};
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
        shared_ptr<Rules::Match> match_ {};
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
          shared_ptr<int32_t> maxTokens_ {};
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
        shared_ptr<DefaultStrategy::Parameters> parameters_ {};
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
      shared_ptr<ShardingStrategyConfig::DefaultStrategy> defaultStrategy_ {};
      shared_ptr<vector<ShardingStrategyConfig::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->ACLMode_ == nullptr
        && this->creationTime_ == nullptr && this->DBClusterId_ == nullptr && this->DBName_ == nullptr && this->DBType_ == nullptr && this->description_ == nullptr
        && this->embeddingDimension_ == nullptr && this->embeddingModel_ == nullptr && this->knowledgeBaseCount_ == nullptr && this->knowledgeSpaceId_ == nullptr && this->LLMModel_ == nullptr
        && this->name_ == nullptr && this->OSSBucket_ == nullptr && this->requestId_ == nullptr && this->rerankModel_ == nullptr && this->shardSize_ == nullptr
        && this->shardingStrategyConfig_ == nullptr && this->status_ == nullptr && this->strategy_ == nullptr && this->totalDocs_ == nullptr && this->totalSizeBytes_ == nullptr; };
    // ACLMode Field Functions 
    bool hasACLMode() const { return this->ACLMode_ != nullptr;};
    void deleteACLMode() { this->ACLMode_ = nullptr;};
    inline string getACLMode() const { DARABONBA_PTR_GET_DEFAULT(ACLMode_, "") };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setACLMode(string ACLMode) { DARABONBA_PTR_SET_VALUE(ACLMode_, ACLMode) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // embeddingDimension Field Functions 
    bool hasEmbeddingDimension() const { return this->embeddingDimension_ != nullptr;};
    void deleteEmbeddingDimension() { this->embeddingDimension_ = nullptr;};
    inline int32_t getEmbeddingDimension() const { DARABONBA_PTR_GET_DEFAULT(embeddingDimension_, 0) };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setEmbeddingDimension(int32_t embeddingDimension) { DARABONBA_PTR_SET_VALUE(embeddingDimension_, embeddingDimension) };


    // embeddingModel Field Functions 
    bool hasEmbeddingModel() const { return this->embeddingModel_ != nullptr;};
    void deleteEmbeddingModel() { this->embeddingModel_ = nullptr;};
    inline string getEmbeddingModel() const { DARABONBA_PTR_GET_DEFAULT(embeddingModel_, "") };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setEmbeddingModel(string embeddingModel) { DARABONBA_PTR_SET_VALUE(embeddingModel_, embeddingModel) };


    // knowledgeBaseCount Field Functions 
    bool hasKnowledgeBaseCount() const { return this->knowledgeBaseCount_ != nullptr;};
    void deleteKnowledgeBaseCount() { this->knowledgeBaseCount_ = nullptr;};
    inline int32_t getKnowledgeBaseCount() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseCount_, 0) };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setKnowledgeBaseCount(int32_t knowledgeBaseCount) { DARABONBA_PTR_SET_VALUE(knowledgeBaseCount_, knowledgeBaseCount) };


    // knowledgeSpaceId Field Functions 
    bool hasKnowledgeSpaceId() const { return this->knowledgeSpaceId_ != nullptr;};
    void deleteKnowledgeSpaceId() { this->knowledgeSpaceId_ = nullptr;};
    inline string getKnowledgeSpaceId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeSpaceId_, "") };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setKnowledgeSpaceId(string knowledgeSpaceId) { DARABONBA_PTR_SET_VALUE(knowledgeSpaceId_, knowledgeSpaceId) };


    // LLMModel Field Functions 
    bool hasLLMModel() const { return this->LLMModel_ != nullptr;};
    void deleteLLMModel() { this->LLMModel_ = nullptr;};
    inline string getLLMModel() const { DARABONBA_PTR_GET_DEFAULT(LLMModel_, "") };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setLLMModel(string LLMModel) { DARABONBA_PTR_SET_VALUE(LLMModel_, LLMModel) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // OSSBucket Field Functions 
    bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
    void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
    inline string getOSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rerankModel Field Functions 
    bool hasRerankModel() const { return this->rerankModel_ != nullptr;};
    void deleteRerankModel() { this->rerankModel_ = nullptr;};
    inline string getRerankModel() const { DARABONBA_PTR_GET_DEFAULT(rerankModel_, "") };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setRerankModel(string rerankModel) { DARABONBA_PTR_SET_VALUE(rerankModel_, rerankModel) };


    // shardSize Field Functions 
    bool hasShardSize() const { return this->shardSize_ != nullptr;};
    void deleteShardSize() { this->shardSize_ = nullptr;};
    inline int32_t getShardSize() const { DARABONBA_PTR_GET_DEFAULT(shardSize_, 0) };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setShardSize(int32_t shardSize) { DARABONBA_PTR_SET_VALUE(shardSize_, shardSize) };


    // shardingStrategyConfig Field Functions 
    bool hasShardingStrategyConfig() const { return this->shardingStrategyConfig_ != nullptr;};
    void deleteShardingStrategyConfig() { this->shardingStrategyConfig_ = nullptr;};
    inline const DescribeKnowledgeSpaceAttributeResponseBody::ShardingStrategyConfig & getShardingStrategyConfig() const { DARABONBA_PTR_GET_CONST(shardingStrategyConfig_, DescribeKnowledgeSpaceAttributeResponseBody::ShardingStrategyConfig) };
    inline DescribeKnowledgeSpaceAttributeResponseBody::ShardingStrategyConfig getShardingStrategyConfig() { DARABONBA_PTR_GET(shardingStrategyConfig_, DescribeKnowledgeSpaceAttributeResponseBody::ShardingStrategyConfig) };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setShardingStrategyConfig(const DescribeKnowledgeSpaceAttributeResponseBody::ShardingStrategyConfig & shardingStrategyConfig) { DARABONBA_PTR_SET_VALUE(shardingStrategyConfig_, shardingStrategyConfig) };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setShardingStrategyConfig(DescribeKnowledgeSpaceAttributeResponseBody::ShardingStrategyConfig && shardingStrategyConfig) { DARABONBA_PTR_SET_RVALUE(shardingStrategyConfig_, shardingStrategyConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // totalDocs Field Functions 
    bool hasTotalDocs() const { return this->totalDocs_ != nullptr;};
    void deleteTotalDocs() { this->totalDocs_ = nullptr;};
    inline int32_t getTotalDocs() const { DARABONBA_PTR_GET_DEFAULT(totalDocs_, 0) };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setTotalDocs(int32_t totalDocs) { DARABONBA_PTR_SET_VALUE(totalDocs_, totalDocs) };


    // totalSizeBytes Field Functions 
    bool hasTotalSizeBytes() const { return this->totalSizeBytes_ != nullptr;};
    void deleteTotalSizeBytes() { this->totalSizeBytes_ = nullptr;};
    inline int64_t getTotalSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(totalSizeBytes_, 0L) };
    inline DescribeKnowledgeSpaceAttributeResponseBody& setTotalSizeBytes(int64_t totalSizeBytes) { DARABONBA_PTR_SET_VALUE(totalSizeBytes_, totalSizeBytes) };


  protected:
    shared_ptr<string> ACLMode_ {};
    shared_ptr<string> creationTime_ {};
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> DBName_ {};
    shared_ptr<string> DBType_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int32_t> embeddingDimension_ {};
    shared_ptr<string> embeddingModel_ {};
    shared_ptr<int32_t> knowledgeBaseCount_ {};
    shared_ptr<string> knowledgeSpaceId_ {};
    shared_ptr<string> LLMModel_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> OSSBucket_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> rerankModel_ {};
    shared_ptr<int32_t> shardSize_ {};
    shared_ptr<DescribeKnowledgeSpaceAttributeResponseBody::ShardingStrategyConfig> shardingStrategyConfig_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> strategy_ {};
    shared_ptr<int32_t> totalDocs_ {};
    shared_ptr<int64_t> totalSizeBytes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
