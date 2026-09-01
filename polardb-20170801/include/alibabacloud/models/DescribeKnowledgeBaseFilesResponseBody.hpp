// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASEFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASEFILESRESPONSEBODY_HPP_
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
  class DescribeKnowledgeBaseFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKnowledgeBaseFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKnowledgeBaseFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeKnowledgeBaseFilesResponseBody() = default ;
    DescribeKnowledgeBaseFilesResponseBody(const DescribeKnowledgeBaseFilesResponseBody &) = default ;
    DescribeKnowledgeBaseFilesResponseBody(DescribeKnowledgeBaseFilesResponseBody &&) = default ;
    DescribeKnowledgeBaseFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKnowledgeBaseFilesResponseBody() = default ;
    DescribeKnowledgeBaseFilesResponseBody& operator=(const DescribeKnowledgeBaseFilesResponseBody &) = default ;
    DescribeKnowledgeBaseFilesResponseBody& operator=(DescribeKnowledgeBaseFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(FileType, fileType_);
        DARABONBA_PTR_TO_JSON(InheritSpaceStrategy, inheritSpaceStrategy_);
        DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_TO_JSON(KnowledgeSpaceId, knowledgeSpaceId_);
        DARABONBA_ANY_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(OSSPath, OSSPath_);
        DARABONBA_PTR_TO_JSON(ShardCount, shardCount_);
        DARABONBA_PTR_TO_JSON(ShardingStrategyConfig, shardingStrategyConfig_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(FileType, fileType_);
        DARABONBA_PTR_FROM_JSON(InheritSpaceStrategy, inheritSpaceStrategy_);
        DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_FROM_JSON(KnowledgeSpaceId, knowledgeSpaceId_);
        DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(OSSPath, OSSPath_);
        DARABONBA_PTR_FROM_JSON(ShardCount, shardCount_);
        DARABONBA_PTR_FROM_JSON(ShardingStrategyConfig, shardingStrategyConfig_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
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
              // The Markdown table processing mode. Valid values: auto, on, and off.
              shared_ptr<string> markdownTables_ {};
              // The maximum number of tokens per shard for matched content.
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
            // The parameter list.
            shared_ptr<Strategy::Parameters> parameters_ {};
            // The chunking strategy type applied after a rule is matched.
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
            // The content type. Currently, table is supported.
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
          // The content type. Currently, table is supported.
          shared_ptr<Rules::Match> match_ {};
          // The chunking strategy.
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
            // The maximum number of tokens per shard.
            shared_ptr<int32_t> maxTokens_ {};
            // Specifies whether to merge adjacent small shards under the same heading.
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
          // The parameter list.
          shared_ptr<DefaultStrategy::Parameters> parameters_ {};
          // The default chunking strategy type. Valid values: hybrid and hierarchical.
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
        // The default chunking strategy type. Valid values: hybrid and hierarchical.
        shared_ptr<ShardingStrategyConfig::DefaultStrategy> defaultStrategy_ {};
        // The list of override rules matched in order.
        shared_ptr<vector<ShardingStrategyConfig::Rules>> rules_ {};
      };

      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->fileId_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->fileType_ == nullptr && this->inheritSpaceStrategy_ == nullptr
        && this->knowledgeBaseId_ == nullptr && this->knowledgeSpaceId_ == nullptr && this->metadata_ == nullptr && this->OSSPath_ == nullptr && this->shardCount_ == nullptr
        && this->shardingStrategyConfig_ == nullptr && this->sourceType_ == nullptr && this->status_ == nullptr && this->updatedAt_ == nullptr && this->uploadTime_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Items& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Items& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Items& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
      inline Items& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // fileType Field Functions 
      bool hasFileType() const { return this->fileType_ != nullptr;};
      void deleteFileType() { this->fileType_ = nullptr;};
      inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
      inline Items& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


      // inheritSpaceStrategy Field Functions 
      bool hasInheritSpaceStrategy() const { return this->inheritSpaceStrategy_ != nullptr;};
      void deleteInheritSpaceStrategy() { this->inheritSpaceStrategy_ = nullptr;};
      inline bool getInheritSpaceStrategy() const { DARABONBA_PTR_GET_DEFAULT(inheritSpaceStrategy_, false) };
      inline Items& setInheritSpaceStrategy(bool inheritSpaceStrategy) { DARABONBA_PTR_SET_VALUE(inheritSpaceStrategy_, inheritSpaceStrategy) };


      // knowledgeBaseId Field Functions 
      bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
      void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
      inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
      inline Items& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


      // knowledgeSpaceId Field Functions 
      bool hasKnowledgeSpaceId() const { return this->knowledgeSpaceId_ != nullptr;};
      void deleteKnowledgeSpaceId() { this->knowledgeSpaceId_ = nullptr;};
      inline string getKnowledgeSpaceId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeSpaceId_, "") };
      inline Items& setKnowledgeSpaceId(string knowledgeSpaceId) { DARABONBA_PTR_SET_VALUE(knowledgeSpaceId_, knowledgeSpaceId) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline Items& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline Items& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // OSSPath Field Functions 
      bool hasOSSPath() const { return this->OSSPath_ != nullptr;};
      void deleteOSSPath() { this->OSSPath_ = nullptr;};
      inline string getOSSPath() const { DARABONBA_PTR_GET_DEFAULT(OSSPath_, "") };
      inline Items& setOSSPath(string OSSPath) { DARABONBA_PTR_SET_VALUE(OSSPath_, OSSPath) };


      // shardCount Field Functions 
      bool hasShardCount() const { return this->shardCount_ != nullptr;};
      void deleteShardCount() { this->shardCount_ = nullptr;};
      inline int32_t getShardCount() const { DARABONBA_PTR_GET_DEFAULT(shardCount_, 0) };
      inline Items& setShardCount(int32_t shardCount) { DARABONBA_PTR_SET_VALUE(shardCount_, shardCount) };


      // shardingStrategyConfig Field Functions 
      bool hasShardingStrategyConfig() const { return this->shardingStrategyConfig_ != nullptr;};
      void deleteShardingStrategyConfig() { this->shardingStrategyConfig_ = nullptr;};
      inline const Items::ShardingStrategyConfig & getShardingStrategyConfig() const { DARABONBA_PTR_GET_CONST(shardingStrategyConfig_, Items::ShardingStrategyConfig) };
      inline Items::ShardingStrategyConfig getShardingStrategyConfig() { DARABONBA_PTR_GET(shardingStrategyConfig_, Items::ShardingStrategyConfig) };
      inline Items& setShardingStrategyConfig(const Items::ShardingStrategyConfig & shardingStrategyConfig) { DARABONBA_PTR_SET_VALUE(shardingStrategyConfig_, shardingStrategyConfig) };
      inline Items& setShardingStrategyConfig(Items::ShardingStrategyConfig && shardingStrategyConfig) { DARABONBA_PTR_SET_RVALUE(shardingStrategyConfig_, shardingStrategyConfig) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Items& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Items& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // uploadTime Field Functions 
      bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
      void deleteUploadTime() { this->uploadTime_ = nullptr;};
      inline string getUploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
      inline Items& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


    protected:
      // The error message.
      shared_ptr<string> errorMessage_ {};
      // The file ID.
      shared_ptr<string> fileId_ {};
      // The file name.
      shared_ptr<string> fileName_ {};
      // The file size, in bytes.
      shared_ptr<int64_t> fileSize_ {};
      // The file type.
      shared_ptr<string> fileType_ {};
      // Indicates whether the chunking strategy is inherited from the knowledge space.
      shared_ptr<bool> inheritSpaceStrategy_ {};
      // The knowledge base ID.
      shared_ptr<string> knowledgeBaseId_ {};
      // The knowledge space ID.
      shared_ptr<string> knowledgeSpaceId_ {};
      // The document metadata.
      Darabonba::Json metadata_ {};
      // The OSS file path.
      shared_ptr<string> OSSPath_ {};
      // The number of shards.
      shared_ptr<int32_t> shardCount_ {};
      // The chunking strategy configuration currently in effect for the document. This value may be empty if the complete configuration was not saved for existing objects.
      shared_ptr<Items::ShardingStrategyConfig> shardingStrategyConfig_ {};
      // The source type.
      shared_ptr<string> sourceType_ {};
      // The status.
      shared_ptr<string> status_ {};
      // The update time.
      shared_ptr<string> updatedAt_ {};
      // The upload time.
      shared_ptr<string> uploadTime_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeKnowledgeBaseFilesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeKnowledgeBaseFilesResponseBody::Items>) };
    inline vector<DescribeKnowledgeBaseFilesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeKnowledgeBaseFilesResponseBody::Items>) };
    inline DescribeKnowledgeBaseFilesResponseBody& setItems(const vector<DescribeKnowledgeBaseFilesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeKnowledgeBaseFilesResponseBody& setItems(vector<DescribeKnowledgeBaseFilesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeKnowledgeBaseFilesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeKnowledgeBaseFilesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeKnowledgeBaseFilesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKnowledgeBaseFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeKnowledgeBaseFilesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The list of files.
    shared_ptr<vector<DescribeKnowledgeBaseFilesResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The number of records per page. Valid values: **30**, **50**, and **100**.
    //                               
    // Default value: **30**.
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
