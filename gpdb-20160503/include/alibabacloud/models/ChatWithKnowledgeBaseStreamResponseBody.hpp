// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODY_HPP_
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
  class ChatWithKnowledgeBaseStreamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChatCompletion, chatCompletion_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MultiCollectionRecallResult, multiCollectionRecallResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatCompletion, chatCompletion_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MultiCollectionRecallResult, multiCollectionRecallResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ChatWithKnowledgeBaseStreamResponseBody() = default ;
    ChatWithKnowledgeBaseStreamResponseBody(const ChatWithKnowledgeBaseStreamResponseBody &) = default ;
    ChatWithKnowledgeBaseStreamResponseBody(ChatWithKnowledgeBaseStreamResponseBody &&) = default ;
    ChatWithKnowledgeBaseStreamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamResponseBody() = default ;
    ChatWithKnowledgeBaseStreamResponseBody& operator=(const ChatWithKnowledgeBaseStreamResponseBody &) = default ;
    ChatWithKnowledgeBaseStreamResponseBody& operator=(ChatWithKnowledgeBaseStreamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MultiCollectionRecallResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MultiCollectionRecallResult& obj) { 
        DARABONBA_PTR_TO_JSON(Entities, entities_);
        DARABONBA_PTR_TO_JSON(Matches, matches_);
        DARABONBA_PTR_TO_JSON(Relations, relations_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tokens, tokens_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, MultiCollectionRecallResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Entities, entities_);
        DARABONBA_PTR_FROM_JSON(Matches, matches_);
        DARABONBA_PTR_FROM_JSON(Relations, relations_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tokens, tokens_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
      };
      MultiCollectionRecallResult() = default ;
      MultiCollectionRecallResult(const MultiCollectionRecallResult &) = default ;
      MultiCollectionRecallResult(MultiCollectionRecallResult &&) = default ;
      MultiCollectionRecallResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MultiCollectionRecallResult() = default ;
      MultiCollectionRecallResult& operator=(const MultiCollectionRecallResult &) = default ;
      MultiCollectionRecallResult& operator=(MultiCollectionRecallResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Usage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Usage& obj) { 
          DARABONBA_PTR_TO_JSON(EmbeddingTokens, embeddingTokens_);
        };
        friend void from_json(const Darabonba::Json& j, Usage& obj) { 
          DARABONBA_PTR_FROM_JSON(EmbeddingTokens, embeddingTokens_);
        };
        Usage() = default ;
        Usage(const Usage &) = default ;
        Usage(Usage &&) = default ;
        Usage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Usage() = default ;
        Usage& operator=(const Usage &) = default ;
        Usage& operator=(Usage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->embeddingTokens_ == nullptr; };
        // embeddingTokens Field Functions 
        bool hasEmbeddingTokens() const { return this->embeddingTokens_ != nullptr;};
        void deleteEmbeddingTokens() { this->embeddingTokens_ = nullptr;};
        inline int64_t getEmbeddingTokens() const { DARABONBA_PTR_GET_DEFAULT(embeddingTokens_, 0L) };
        inline Usage& setEmbeddingTokens(int64_t embeddingTokens) { DARABONBA_PTR_SET_VALUE(embeddingTokens_, embeddingTokens) };


      protected:
        // The number of tokens that are used during vectorization.
        // 
        // >  A token is the minimum unit for splitting text. A token can be a word, phrase, punctuation, or character.
        shared_ptr<int64_t> embeddingTokens_ {};
      };

      class Matches : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Matches& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_ANY_TO_JSON(LoaderMetadata, loaderMetadata_);
          DARABONBA_ANY_TO_JSON(Metadata, metadata_);
          DARABONBA_PTR_TO_JSON(RerankScore, rerankScore_);
          DARABONBA_PTR_TO_JSON(RetrievalSource, retrievalSource_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Vector, vector_);
        };
        friend void from_json(const Darabonba::Json& j, Matches& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_ANY_FROM_JSON(LoaderMetadata, loaderMetadata_);
          DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
          DARABONBA_PTR_FROM_JSON(RerankScore, rerankScore_);
          DARABONBA_PTR_FROM_JSON(RetrievalSource, retrievalSource_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Vector, vector_);
        };
        Matches() = default ;
        Matches(const Matches &) = default ;
        Matches(Matches &&) = default ;
        Matches(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Matches() = default ;
        Matches& operator=(const Matches &) = default ;
        Matches& operator=(Matches &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->fileName_ == nullptr && this->fileURL_ == nullptr && this->id_ == nullptr && this->loaderMetadata_ == nullptr && this->metadata_ == nullptr
        && this->rerankScore_ == nullptr && this->retrievalSource_ == nullptr && this->score_ == nullptr && this->vector_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Matches& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline Matches& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileURL Field Functions 
        bool hasFileURL() const { return this->fileURL_ != nullptr;};
        void deleteFileURL() { this->fileURL_ = nullptr;};
        inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
        inline Matches& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Matches& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // loaderMetadata Field Functions 
        bool hasLoaderMetadata() const { return this->loaderMetadata_ != nullptr;};
        void deleteLoaderMetadata() { this->loaderMetadata_ = nullptr;};
        inline         const Darabonba::Json & getLoaderMetadata() const { DARABONBA_GET(loaderMetadata_) };
        Darabonba::Json & getLoaderMetadata() { DARABONBA_GET(loaderMetadata_) };
        inline Matches& setLoaderMetadata(const Darabonba::Json & loaderMetadata) { DARABONBA_SET_VALUE(loaderMetadata_, loaderMetadata) };
        inline Matches& setLoaderMetadata(Darabonba::Json && loaderMetadata) { DARABONBA_SET_RVALUE(loaderMetadata_, loaderMetadata) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline         const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
        Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
        inline Matches& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
        inline Matches& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


        // rerankScore Field Functions 
        bool hasRerankScore() const { return this->rerankScore_ != nullptr;};
        void deleteRerankScore() { this->rerankScore_ = nullptr;};
        inline double getRerankScore() const { DARABONBA_PTR_GET_DEFAULT(rerankScore_, 0.0) };
        inline Matches& setRerankScore(double rerankScore) { DARABONBA_PTR_SET_VALUE(rerankScore_, rerankScore) };


        // retrievalSource Field Functions 
        bool hasRetrievalSource() const { return this->retrievalSource_ != nullptr;};
        void deleteRetrievalSource() { this->retrievalSource_ = nullptr;};
        inline int64_t getRetrievalSource() const { DARABONBA_PTR_GET_DEFAULT(retrievalSource_, 0L) };
        inline Matches& setRetrievalSource(int64_t retrievalSource) { DARABONBA_PTR_SET_VALUE(retrievalSource_, retrievalSource) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline Matches& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // vector Field Functions 
        bool hasVector() const { return this->vector_ != nullptr;};
        void deleteVector() { this->vector_ = nullptr;};
        inline const vector<double> & getVector() const { DARABONBA_PTR_GET_CONST(vector_, vector<double>) };
        inline vector<double> getVector() { DARABONBA_PTR_GET(vector_, vector<double>) };
        inline Matches& setVector(const vector<double> & _vector) { DARABONBA_PTR_SET_VALUE(vector_, _vector) };
        inline Matches& setVector(vector<double> && _vector) { DARABONBA_PTR_SET_RVALUE(vector_, _vector) };


      protected:
        // The content of the document.
        shared_ptr<string> content_ {};
        // The file name.
        shared_ptr<string> fileName_ {};
        // The URL of the image result. By default, the URL is valid for 2 hours.
        // 
        // You can use the UrlExpiration parameter to specify a validity period.
        shared_ptr<string> fileURL_ {};
        // The unique ID of the vector data.
        // 
        // >  If you leave this parameter empty, a unique ID is automatically generated by using uuidgen. If it is not empty and conflicts with an existing ID in the database, the value in the database will be updated with the data from the API.
        shared_ptr<string> id_ {};
        // Document loader metadata.
        Darabonba::Json loaderMetadata_ {};
        // Metadata.
        Darabonba::Json metadata_ {};
        // The rerank score.
        shared_ptr<double> rerankScore_ {};
        // The source of the retrieved results. 1 indicates vector retrieval, 2 indicates full-text retrieval, and 3 indicates dual-path retrieval.
        shared_ptr<int64_t> retrievalSource_ {};
        // The similarity score of the data. It is related to the `l2, ip, or cosine` algorithm that is specified when you create an index.
        shared_ptr<double> score_ {};
        // The vector data.
        shared_ptr<vector<double>> vector_ {};
      };

      virtual bool empty() const override { return this->entities_ == nullptr
        && this->matches_ == nullptr && this->relations_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->tokens_ == nullptr
        && this->usage_ == nullptr; };
      // entities Field Functions 
      bool hasEntities() const { return this->entities_ != nullptr;};
      void deleteEntities() { this->entities_ = nullptr;};
      inline const vector<string> & getEntities() const { DARABONBA_PTR_GET_CONST(entities_, vector<string>) };
      inline vector<string> getEntities() { DARABONBA_PTR_GET(entities_, vector<string>) };
      inline MultiCollectionRecallResult& setEntities(const vector<string> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
      inline MultiCollectionRecallResult& setEntities(vector<string> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


      // matches Field Functions 
      bool hasMatches() const { return this->matches_ != nullptr;};
      void deleteMatches() { this->matches_ = nullptr;};
      inline const vector<MultiCollectionRecallResult::Matches> & getMatches() const { DARABONBA_PTR_GET_CONST(matches_, vector<MultiCollectionRecallResult::Matches>) };
      inline vector<MultiCollectionRecallResult::Matches> getMatches() { DARABONBA_PTR_GET(matches_, vector<MultiCollectionRecallResult::Matches>) };
      inline MultiCollectionRecallResult& setMatches(const vector<MultiCollectionRecallResult::Matches> & matches) { DARABONBA_PTR_SET_VALUE(matches_, matches) };
      inline MultiCollectionRecallResult& setMatches(vector<MultiCollectionRecallResult::Matches> && matches) { DARABONBA_PTR_SET_RVALUE(matches_, matches) };


      // relations Field Functions 
      bool hasRelations() const { return this->relations_ != nullptr;};
      void deleteRelations() { this->relations_ = nullptr;};
      inline const vector<string> & getRelations() const { DARABONBA_PTR_GET_CONST(relations_, vector<string>) };
      inline vector<string> getRelations() { DARABONBA_PTR_GET(relations_, vector<string>) };
      inline MultiCollectionRecallResult& setRelations(const vector<string> & relations) { DARABONBA_PTR_SET_VALUE(relations_, relations) };
      inline MultiCollectionRecallResult& setRelations(vector<string> && relations) { DARABONBA_PTR_SET_RVALUE(relations_, relations) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline MultiCollectionRecallResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline MultiCollectionRecallResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tokens Field Functions 
      bool hasTokens() const { return this->tokens_ != nullptr;};
      void deleteTokens() { this->tokens_ = nullptr;};
      inline int64_t getTokens() const { DARABONBA_PTR_GET_DEFAULT(tokens_, 0L) };
      inline MultiCollectionRecallResult& setTokens(int64_t tokens) { DARABONBA_PTR_SET_VALUE(tokens_, tokens) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline const MultiCollectionRecallResult::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, MultiCollectionRecallResult::Usage) };
      inline MultiCollectionRecallResult::Usage getUsage() { DARABONBA_PTR_GET(usage_, MultiCollectionRecallResult::Usage) };
      inline MultiCollectionRecallResult& setUsage(const MultiCollectionRecallResult::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
      inline MultiCollectionRecallResult& setUsage(MultiCollectionRecallResult::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    protected:
      // The details of the entity.
      shared_ptr<vector<string>> entities_ {};
      // The retrieved item.
      shared_ptr<vector<MultiCollectionRecallResult::Matches>> matches_ {};
      // The relationship name.
      shared_ptr<vector<string>> relations_ {};
      // The unique ID of the request.
      shared_ptr<string> requestId_ {};
      // The status of the operation. Valid values:
      // 
      // *   **success**.
      // *   **fail**.
      shared_ptr<string> status_ {};
      // The number of tokens that are consumed.
      shared_ptr<int64_t> tokens_ {};
      // The number of tokens that are consumed during document understanding or embedding.
      shared_ptr<MultiCollectionRecallResult::Usage> usage_ {};
    };

    class ChatCompletion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChatCompletion& obj) { 
        DARABONBA_PTR_TO_JSON(Choices, choices_);
        DARABONBA_PTR_TO_JSON(Created, created_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, ChatCompletion& obj) { 
        DARABONBA_PTR_FROM_JSON(Choices, choices_);
        DARABONBA_PTR_FROM_JSON(Created, created_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
      };
      ChatCompletion() = default ;
      ChatCompletion(const ChatCompletion &) = default ;
      ChatCompletion(ChatCompletion &&) = default ;
      ChatCompletion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChatCompletion() = default ;
      ChatCompletion& operator=(const ChatCompletion &) = default ;
      ChatCompletion& operator=(ChatCompletion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Usage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Usage& obj) { 
          DARABONBA_PTR_TO_JSON(CompletionTokens, completionTokens_);
          DARABONBA_PTR_TO_JSON(PromptTokens, promptTokens_);
          DARABONBA_PTR_TO_JSON(PromptTokensDetails, promptTokensDetails_);
          DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
        };
        friend void from_json(const Darabonba::Json& j, Usage& obj) { 
          DARABONBA_PTR_FROM_JSON(CompletionTokens, completionTokens_);
          DARABONBA_PTR_FROM_JSON(PromptTokens, promptTokens_);
          DARABONBA_PTR_FROM_JSON(PromptTokensDetails, promptTokensDetails_);
          DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
        };
        Usage() = default ;
        Usage(const Usage &) = default ;
        Usage(Usage &&) = default ;
        Usage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Usage() = default ;
        Usage& operator=(const Usage &) = default ;
        Usage& operator=(Usage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PromptTokensDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PromptTokensDetails& obj) { 
            DARABONBA_PTR_TO_JSON(CachedTokens, cachedTokens_);
          };
          friend void from_json(const Darabonba::Json& j, PromptTokensDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(CachedTokens, cachedTokens_);
          };
          PromptTokensDetails() = default ;
          PromptTokensDetails(const PromptTokensDetails &) = default ;
          PromptTokensDetails(PromptTokensDetails &&) = default ;
          PromptTokensDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PromptTokensDetails() = default ;
          PromptTokensDetails& operator=(const PromptTokensDetails &) = default ;
          PromptTokensDetails& operator=(PromptTokensDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cachedTokens_ == nullptr; };
          // cachedTokens Field Functions 
          bool hasCachedTokens() const { return this->cachedTokens_ != nullptr;};
          void deleteCachedTokens() { this->cachedTokens_ = nullptr;};
          inline int64_t getCachedTokens() const { DARABONBA_PTR_GET_DEFAULT(cachedTokens_, 0L) };
          inline PromptTokensDetails& setCachedTokens(int64_t cachedTokens) { DARABONBA_PTR_SET_VALUE(cachedTokens_, cachedTokens) };


        protected:
          // The number of tokens from cache hits.
          shared_ptr<int64_t> cachedTokens_ {};
        };

        virtual bool empty() const override { return this->completionTokens_ == nullptr
        && this->promptTokens_ == nullptr && this->promptTokensDetails_ == nullptr && this->totalTokens_ == nullptr; };
        // completionTokens Field Functions 
        bool hasCompletionTokens() const { return this->completionTokens_ != nullptr;};
        void deleteCompletionTokens() { this->completionTokens_ = nullptr;};
        inline int64_t getCompletionTokens() const { DARABONBA_PTR_GET_DEFAULT(completionTokens_, 0L) };
        inline Usage& setCompletionTokens(int64_t completionTokens) { DARABONBA_PTR_SET_VALUE(completionTokens_, completionTokens) };


        // promptTokens Field Functions 
        bool hasPromptTokens() const { return this->promptTokens_ != nullptr;};
        void deletePromptTokens() { this->promptTokens_ = nullptr;};
        inline int64_t getPromptTokens() const { DARABONBA_PTR_GET_DEFAULT(promptTokens_, 0L) };
        inline Usage& setPromptTokens(int64_t promptTokens) { DARABONBA_PTR_SET_VALUE(promptTokens_, promptTokens) };


        // promptTokensDetails Field Functions 
        bool hasPromptTokensDetails() const { return this->promptTokensDetails_ != nullptr;};
        void deletePromptTokensDetails() { this->promptTokensDetails_ = nullptr;};
        inline const Usage::PromptTokensDetails & getPromptTokensDetails() const { DARABONBA_PTR_GET_CONST(promptTokensDetails_, Usage::PromptTokensDetails) };
        inline Usage::PromptTokensDetails getPromptTokensDetails() { DARABONBA_PTR_GET(promptTokensDetails_, Usage::PromptTokensDetails) };
        inline Usage& setPromptTokensDetails(const Usage::PromptTokensDetails & promptTokensDetails) { DARABONBA_PTR_SET_VALUE(promptTokensDetails_, promptTokensDetails) };
        inline Usage& setPromptTokensDetails(Usage::PromptTokensDetails && promptTokensDetails) { DARABONBA_PTR_SET_RVALUE(promptTokensDetails_, promptTokensDetails) };


        // totalTokens Field Functions 
        bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
        void deleteTotalTokens() { this->totalTokens_ = nullptr;};
        inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
        inline Usage& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


      protected:
        // The number of tokens consumed by the generated content.
        shared_ptr<int64_t> completionTokens_ {};
        // The number of tokens consumed by the prompt.
        shared_ptr<int64_t> promptTokens_ {};
        // The details about the prompt token.
        shared_ptr<Usage::PromptTokensDetails> promptTokensDetails_ {};
        // The total number of tokens.
        shared_ptr<int64_t> totalTokens_ {};
      };

      class Choices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Choices& obj) { 
          DARABONBA_PTR_TO_JSON(FinishReason, finishReason_);
          DARABONBA_PTR_TO_JSON(Index, index_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, Choices& obj) { 
          DARABONBA_PTR_FROM_JSON(FinishReason, finishReason_);
          DARABONBA_PTR_FROM_JSON(Index, index_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        Choices() = default ;
        Choices(const Choices &) = default ;
        Choices(Choices &&) = default ;
        Choices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Choices() = default ;
        Choices& operator=(const Choices &) = default ;
        Choices& operator=(Choices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Message : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Message& obj) { 
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(ReasoningContent, reasoningContent_);
            DARABONBA_PTR_TO_JSON(Role, role_);
            DARABONBA_PTR_TO_JSON(ToolCalls, toolCalls_);
          };
          friend void from_json(const Darabonba::Json& j, Message& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(ReasoningContent, reasoningContent_);
            DARABONBA_PTR_FROM_JSON(Role, role_);
            DARABONBA_PTR_FROM_JSON(ToolCalls, toolCalls_);
          };
          Message() = default ;
          Message(const Message &) = default ;
          Message(Message &&) = default ;
          Message(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Message() = default ;
          Message& operator=(const Message &) = default ;
          Message& operator=(Message &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ToolCalls : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ToolCalls& obj) { 
              DARABONBA_PTR_TO_JSON(Function, function_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Index, index_);
            };
            friend void from_json(const Darabonba::Json& j, ToolCalls& obj) { 
              DARABONBA_PTR_FROM_JSON(Function, function_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Index, index_);
            };
            ToolCalls() = default ;
            ToolCalls(const ToolCalls &) = default ;
            ToolCalls(ToolCalls &&) = default ;
            ToolCalls(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ToolCalls() = default ;
            ToolCalls& operator=(const ToolCalls &) = default ;
            ToolCalls& operator=(ToolCalls &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Function : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Function& obj) { 
                DARABONBA_PTR_TO_JSON(Arguments, arguments_);
                DARABONBA_PTR_TO_JSON(Name, name_);
              };
              friend void from_json(const Darabonba::Json& j, Function& obj) { 
                DARABONBA_PTR_FROM_JSON(Arguments, arguments_);
                DARABONBA_PTR_FROM_JSON(Name, name_);
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
              virtual bool empty() const override { return this->arguments_ == nullptr
        && this->name_ == nullptr; };
              // arguments Field Functions 
              bool hasArguments() const { return this->arguments_ != nullptr;};
              void deleteArguments() { this->arguments_ = nullptr;};
              inline string getArguments() const { DARABONBA_PTR_GET_DEFAULT(arguments_, "") };
              inline Function& setArguments(string arguments) { DARABONBA_PTR_SET_VALUE(arguments_, arguments) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline Function& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            protected:
              // Arguments of the called function.
              shared_ptr<string> arguments_ {};
              // The name of the called function.
              shared_ptr<string> name_ {};
            };

            virtual bool empty() const override { return this->function_ == nullptr
        && this->id_ == nullptr && this->index_ == nullptr; };
            // function Field Functions 
            bool hasFunction() const { return this->function_ != nullptr;};
            void deleteFunction() { this->function_ = nullptr;};
            inline const ToolCalls::Function & getFunction() const { DARABONBA_PTR_GET_CONST(function_, ToolCalls::Function) };
            inline ToolCalls::Function getFunction() { DARABONBA_PTR_GET(function_, ToolCalls::Function) };
            inline ToolCalls& setFunction(const ToolCalls::Function & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
            inline ToolCalls& setFunction(ToolCalls::Function && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline ToolCalls& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // index Field Functions 
            bool hasIndex() const { return this->index_ != nullptr;};
            void deleteIndex() { this->index_ = nullptr;};
            inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
            inline ToolCalls& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          protected:
            // Function call information.
            shared_ptr<ToolCalls::Function> function_ {};
            // The ID.
            shared_ptr<string> id_ {};
            // The position of this tool in the \\"input\\" request parameter, which starts from 0.
            shared_ptr<int64_t> index_ {};
          };

          virtual bool empty() const override { return this->content_ == nullptr
        && this->reasoningContent_ == nullptr && this->role_ == nullptr && this->toolCalls_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline Message& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // reasoningContent Field Functions 
          bool hasReasoningContent() const { return this->reasoningContent_ != nullptr;};
          void deleteReasoningContent() { this->reasoningContent_ = nullptr;};
          inline string getReasoningContent() const { DARABONBA_PTR_GET_DEFAULT(reasoningContent_, "") };
          inline Message& setReasoningContent(string reasoningContent) { DARABONBA_PTR_SET_VALUE(reasoningContent_, reasoningContent) };


          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline Message& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


          // toolCalls Field Functions 
          bool hasToolCalls() const { return this->toolCalls_ != nullptr;};
          void deleteToolCalls() { this->toolCalls_ = nullptr;};
          inline const vector<Message::ToolCalls> & getToolCalls() const { DARABONBA_PTR_GET_CONST(toolCalls_, vector<Message::ToolCalls>) };
          inline vector<Message::ToolCalls> getToolCalls() { DARABONBA_PTR_GET(toolCalls_, vector<Message::ToolCalls>) };
          inline Message& setToolCalls(const vector<Message::ToolCalls> & toolCalls) { DARABONBA_PTR_SET_VALUE(toolCalls_, toolCalls) };
          inline Message& setToolCalls(vector<Message::ToolCalls> && toolCalls) { DARABONBA_PTR_SET_RVALUE(toolCalls_, toolCalls) };


        protected:
          // The content of the document.
          shared_ptr<string> content_ {};
          // Model reasoning chain content.
          shared_ptr<string> reasoningContent_ {};
          // Message role:
          // 
          // *   system
          // *   user
          // *   assistant
          shared_ptr<string> role_ {};
          // Tool call response.
          shared_ptr<vector<Message::ToolCalls>> toolCalls_ {};
        };

        virtual bool empty() const override { return this->finishReason_ == nullptr
        && this->index_ == nullptr && this->message_ == nullptr; };
        // finishReason Field Functions 
        bool hasFinishReason() const { return this->finishReason_ != nullptr;};
        void deleteFinishReason() { this->finishReason_ = nullptr;};
        inline string getFinishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
        inline Choices& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
        inline Choices& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline const Choices::Message & getMessage() const { DARABONBA_PTR_GET_CONST(message_, Choices::Message) };
        inline Choices::Message getMessage() { DARABONBA_PTR_GET(message_, Choices::Message) };
        inline Choices& setMessage(const Choices::Message & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
        inline Choices& setMessage(Choices::Message && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


      protected:
        // Finish reason.
        shared_ptr<string> finishReason_ {};
        // The sequence number of the reply.
        shared_ptr<int64_t> index_ {};
        // LLM response.
        shared_ptr<Choices::Message> message_ {};
      };

      virtual bool empty() const override { return this->choices_ == nullptr
        && this->created_ == nullptr && this->id_ == nullptr && this->model_ == nullptr && this->usage_ == nullptr; };
      // choices Field Functions 
      bool hasChoices() const { return this->choices_ != nullptr;};
      void deleteChoices() { this->choices_ = nullptr;};
      inline const vector<ChatCompletion::Choices> & getChoices() const { DARABONBA_PTR_GET_CONST(choices_, vector<ChatCompletion::Choices>) };
      inline vector<ChatCompletion::Choices> getChoices() { DARABONBA_PTR_GET(choices_, vector<ChatCompletion::Choices>) };
      inline ChatCompletion& setChoices(const vector<ChatCompletion::Choices> & choices) { DARABONBA_PTR_SET_VALUE(choices_, choices) };
      inline ChatCompletion& setChoices(vector<ChatCompletion::Choices> && choices) { DARABONBA_PTR_SET_RVALUE(choices_, choices) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int64_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
      inline ChatCompletion& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ChatCompletion& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline ChatCompletion& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline const ChatCompletion::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, ChatCompletion::Usage) };
      inline ChatCompletion::Usage getUsage() { DARABONBA_PTR_GET(usage_, ChatCompletion::Usage) };
      inline ChatCompletion& setUsage(const ChatCompletion::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
      inline ChatCompletion& setUsage(ChatCompletion::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    protected:
      // Text content generated in real time.
      shared_ptr<vector<ChatCompletion::Choices>> choices_ {};
      // The creation time.
      shared_ptr<int64_t> created_ {};
      // The ID of the response.
      shared_ptr<string> id_ {};
      // The name of the model.
      shared_ptr<string> model_ {};
      // The number of tokens used in LLM output.
      shared_ptr<ChatCompletion::Usage> usage_ {};
    };

    virtual bool empty() const override { return this->chatCompletion_ == nullptr
        && this->message_ == nullptr && this->multiCollectionRecallResult_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // chatCompletion Field Functions 
    bool hasChatCompletion() const { return this->chatCompletion_ != nullptr;};
    void deleteChatCompletion() { this->chatCompletion_ = nullptr;};
    inline const ChatWithKnowledgeBaseStreamResponseBody::ChatCompletion & getChatCompletion() const { DARABONBA_PTR_GET_CONST(chatCompletion_, ChatWithKnowledgeBaseStreamResponseBody::ChatCompletion) };
    inline ChatWithKnowledgeBaseStreamResponseBody::ChatCompletion getChatCompletion() { DARABONBA_PTR_GET(chatCompletion_, ChatWithKnowledgeBaseStreamResponseBody::ChatCompletion) };
    inline ChatWithKnowledgeBaseStreamResponseBody& setChatCompletion(const ChatWithKnowledgeBaseStreamResponseBody::ChatCompletion & chatCompletion) { DARABONBA_PTR_SET_VALUE(chatCompletion_, chatCompletion) };
    inline ChatWithKnowledgeBaseStreamResponseBody& setChatCompletion(ChatWithKnowledgeBaseStreamResponseBody::ChatCompletion && chatCompletion) { DARABONBA_PTR_SET_RVALUE(chatCompletion_, chatCompletion) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ChatWithKnowledgeBaseStreamResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // multiCollectionRecallResult Field Functions 
    bool hasMultiCollectionRecallResult() const { return this->multiCollectionRecallResult_ != nullptr;};
    void deleteMultiCollectionRecallResult() { this->multiCollectionRecallResult_ = nullptr;};
    inline const ChatWithKnowledgeBaseStreamResponseBody::MultiCollectionRecallResult & getMultiCollectionRecallResult() const { DARABONBA_PTR_GET_CONST(multiCollectionRecallResult_, ChatWithKnowledgeBaseStreamResponseBody::MultiCollectionRecallResult) };
    inline ChatWithKnowledgeBaseStreamResponseBody::MultiCollectionRecallResult getMultiCollectionRecallResult() { DARABONBA_PTR_GET(multiCollectionRecallResult_, ChatWithKnowledgeBaseStreamResponseBody::MultiCollectionRecallResult) };
    inline ChatWithKnowledgeBaseStreamResponseBody& setMultiCollectionRecallResult(const ChatWithKnowledgeBaseStreamResponseBody::MultiCollectionRecallResult & multiCollectionRecallResult) { DARABONBA_PTR_SET_VALUE(multiCollectionRecallResult_, multiCollectionRecallResult) };
    inline ChatWithKnowledgeBaseStreamResponseBody& setMultiCollectionRecallResult(ChatWithKnowledgeBaseStreamResponseBody::MultiCollectionRecallResult && multiCollectionRecallResult) { DARABONBA_PTR_SET_RVALUE(multiCollectionRecallResult_, multiCollectionRecallResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChatWithKnowledgeBaseStreamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ChatWithKnowledgeBaseStreamResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // model response.
    shared_ptr<ChatWithKnowledgeBaseStreamResponseBody::ChatCompletion> chatCompletion_ {};
    // The returned information.
    shared_ptr<string> message_ {};
    // Retrieve information from multiple knowledge bases.
    shared_ptr<ChatWithKnowledgeBaseStreamResponseBody::MultiCollectionRecallResult> multiCollectionRecallResult_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the operation. Valid values:
    // 
    // *   **success**.
    // *   **fail**.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
