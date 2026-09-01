// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEFILESHARDINGSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEFILESHARDINGSTRATEGYREQUEST_HPP_
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
  class UpdateKnowledgeBaseFileShardingStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeBaseFileShardingStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(InheritSpaceStrategy, inheritSpaceStrategy_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ShardingStrategyConfig, shardingStrategyConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeBaseFileShardingStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(InheritSpaceStrategy, inheritSpaceStrategy_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ShardingStrategyConfig, shardingStrategyConfig_);
    };
    UpdateKnowledgeBaseFileShardingStrategyRequest() = default ;
    UpdateKnowledgeBaseFileShardingStrategyRequest(const UpdateKnowledgeBaseFileShardingStrategyRequest &) = default ;
    UpdateKnowledgeBaseFileShardingStrategyRequest(UpdateKnowledgeBaseFileShardingStrategyRequest &&) = default ;
    UpdateKnowledgeBaseFileShardingStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeBaseFileShardingStrategyRequest() = default ;
    UpdateKnowledgeBaseFileShardingStrategyRequest& operator=(const UpdateKnowledgeBaseFileShardingStrategyRequest &) = default ;
    UpdateKnowledgeBaseFileShardingStrategyRequest& operator=(UpdateKnowledgeBaseFileShardingStrategyRequest &&) = default ;
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
          // This parameter is required.
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
        // This parameter is required.
        shared_ptr<Rules::Match> match_ {};
        // This parameter is required.
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
        // This parameter is required.
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
      // This parameter is required.
      shared_ptr<ShardingStrategyConfig::DefaultStrategy> defaultStrategy_ {};
      shared_ptr<vector<ShardingStrategyConfig::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->fileId_ == nullptr
        && this->inheritSpaceStrategy_ == nullptr && this->knowledgeBaseId_ == nullptr && this->regionId_ == nullptr && this->shardingStrategyConfig_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline UpdateKnowledgeBaseFileShardingStrategyRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // inheritSpaceStrategy Field Functions 
    bool hasInheritSpaceStrategy() const { return this->inheritSpaceStrategy_ != nullptr;};
    void deleteInheritSpaceStrategy() { this->inheritSpaceStrategy_ = nullptr;};
    inline bool getInheritSpaceStrategy() const { DARABONBA_PTR_GET_DEFAULT(inheritSpaceStrategy_, false) };
    inline UpdateKnowledgeBaseFileShardingStrategyRequest& setInheritSpaceStrategy(bool inheritSpaceStrategy) { DARABONBA_PTR_SET_VALUE(inheritSpaceStrategy_, inheritSpaceStrategy) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline UpdateKnowledgeBaseFileShardingStrategyRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateKnowledgeBaseFileShardingStrategyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // shardingStrategyConfig Field Functions 
    bool hasShardingStrategyConfig() const { return this->shardingStrategyConfig_ != nullptr;};
    void deleteShardingStrategyConfig() { this->shardingStrategyConfig_ = nullptr;};
    inline const UpdateKnowledgeBaseFileShardingStrategyRequest::ShardingStrategyConfig & getShardingStrategyConfig() const { DARABONBA_PTR_GET_CONST(shardingStrategyConfig_, UpdateKnowledgeBaseFileShardingStrategyRequest::ShardingStrategyConfig) };
    inline UpdateKnowledgeBaseFileShardingStrategyRequest::ShardingStrategyConfig getShardingStrategyConfig() { DARABONBA_PTR_GET(shardingStrategyConfig_, UpdateKnowledgeBaseFileShardingStrategyRequest::ShardingStrategyConfig) };
    inline UpdateKnowledgeBaseFileShardingStrategyRequest& setShardingStrategyConfig(const UpdateKnowledgeBaseFileShardingStrategyRequest::ShardingStrategyConfig & shardingStrategyConfig) { DARABONBA_PTR_SET_VALUE(shardingStrategyConfig_, shardingStrategyConfig) };
    inline UpdateKnowledgeBaseFileShardingStrategyRequest& setShardingStrategyConfig(UpdateKnowledgeBaseFileShardingStrategyRequest::ShardingStrategyConfig && shardingStrategyConfig) { DARABONBA_PTR_SET_RVALUE(shardingStrategyConfig_, shardingStrategyConfig) };


  protected:
    // This parameter is required.
    shared_ptr<string> fileId_ {};
    shared_ptr<bool> inheritSpaceStrategy_ {};
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<UpdateKnowledgeBaseFileShardingStrategyRequest::ShardingStrategyConfig> shardingStrategyConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
