// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASEANSWERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASEANSWERRESPONSEBODY_HPP_
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
  class DescribeKnowledgeBaseAnswerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKnowledgeBaseAnswerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(CompletionTokens, completionTokens_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ErrorType, errorType_);
      DARABONBA_PTR_TO_JSON(LLMModelId, LLMModelId_);
      DARABONBA_PTR_TO_JSON(PromptTokens, promptTokens_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKnowledgeBaseAnswerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(CompletionTokens, completionTokens_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorType, errorType_);
      DARABONBA_PTR_FROM_JSON(LLMModelId, LLMModelId_);
      DARABONBA_PTR_FROM_JSON(PromptTokens, promptTokens_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeKnowledgeBaseAnswerResponseBody() = default ;
    DescribeKnowledgeBaseAnswerResponseBody(const DescribeKnowledgeBaseAnswerResponseBody &) = default ;
    DescribeKnowledgeBaseAnswerResponseBody(DescribeKnowledgeBaseAnswerResponseBody &&) = default ;
    DescribeKnowledgeBaseAnswerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKnowledgeBaseAnswerResponseBody() = default ;
    DescribeKnowledgeBaseAnswerResponseBody& operator=(const DescribeKnowledgeBaseAnswerResponseBody &) = default ;
    DescribeKnowledgeBaseAnswerResponseBody& operator=(DescribeKnowledgeBaseAnswerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Sources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sources& obj) { 
        DARABONBA_ANY_TO_JSON(ChunkMetadata, chunkMetadata_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_ANY_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(PageNumbers, pageNumbers_);
        DARABONBA_PTR_TO_JSON(ShardContent, shardContent_);
        DARABONBA_PTR_TO_JSON(ShardIndex, shardIndex_);
        DARABONBA_PTR_TO_JSON(SimilarityScore, similarityScore_);
        DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      };
      friend void from_json(const Darabonba::Json& j, Sources& obj) { 
        DARABONBA_ANY_FROM_JSON(ChunkMetadata, chunkMetadata_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(PageNumbers, pageNumbers_);
        DARABONBA_PTR_FROM_JSON(ShardContent, shardContent_);
        DARABONBA_PTR_FROM_JSON(ShardIndex, shardIndex_);
        DARABONBA_PTR_FROM_JSON(SimilarityScore, similarityScore_);
        DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      };
      Sources() = default ;
      Sources(const Sources &) = default ;
      Sources(Sources &&) = default ;
      Sources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sources() = default ;
      Sources& operator=(const Sources &) = default ;
      Sources& operator=(Sources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chunkMetadata_ == nullptr
        && this->fileId_ == nullptr && this->fileName_ == nullptr && this->knowledgeBaseId_ == nullptr && this->metadata_ == nullptr && this->pageNumbers_ == nullptr
        && this->shardContent_ == nullptr && this->shardIndex_ == nullptr && this->similarityScore_ == nullptr && this->sourceId_ == nullptr; };
      // chunkMetadata Field Functions 
      bool hasChunkMetadata() const { return this->chunkMetadata_ != nullptr;};
      void deleteChunkMetadata() { this->chunkMetadata_ = nullptr;};
      inline       const Darabonba::Json & getChunkMetadata() const { DARABONBA_GET(chunkMetadata_) };
      Darabonba::Json & getChunkMetadata() { DARABONBA_GET(chunkMetadata_) };
      inline Sources& setChunkMetadata(const Darabonba::Json & chunkMetadata) { DARABONBA_SET_VALUE(chunkMetadata_, chunkMetadata) };
      inline Sources& setChunkMetadata(Darabonba::Json && chunkMetadata) { DARABONBA_SET_RVALUE(chunkMetadata_, chunkMetadata) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Sources& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Sources& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // knowledgeBaseId Field Functions 
      bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
      void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
      inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
      inline Sources& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline Sources& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline Sources& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // pageNumbers Field Functions 
      bool hasPageNumbers() const { return this->pageNumbers_ != nullptr;};
      void deletePageNumbers() { this->pageNumbers_ = nullptr;};
      inline const vector<int32_t> & getPageNumbers() const { DARABONBA_PTR_GET_CONST(pageNumbers_, vector<int32_t>) };
      inline vector<int32_t> getPageNumbers() { DARABONBA_PTR_GET(pageNumbers_, vector<int32_t>) };
      inline Sources& setPageNumbers(const vector<int32_t> & pageNumbers) { DARABONBA_PTR_SET_VALUE(pageNumbers_, pageNumbers) };
      inline Sources& setPageNumbers(vector<int32_t> && pageNumbers) { DARABONBA_PTR_SET_RVALUE(pageNumbers_, pageNumbers) };


      // shardContent Field Functions 
      bool hasShardContent() const { return this->shardContent_ != nullptr;};
      void deleteShardContent() { this->shardContent_ = nullptr;};
      inline string getShardContent() const { DARABONBA_PTR_GET_DEFAULT(shardContent_, "") };
      inline Sources& setShardContent(string shardContent) { DARABONBA_PTR_SET_VALUE(shardContent_, shardContent) };


      // shardIndex Field Functions 
      bool hasShardIndex() const { return this->shardIndex_ != nullptr;};
      void deleteShardIndex() { this->shardIndex_ = nullptr;};
      inline int32_t getShardIndex() const { DARABONBA_PTR_GET_DEFAULT(shardIndex_, 0) };
      inline Sources& setShardIndex(int32_t shardIndex) { DARABONBA_PTR_SET_VALUE(shardIndex_, shardIndex) };


      // similarityScore Field Functions 
      bool hasSimilarityScore() const { return this->similarityScore_ != nullptr;};
      void deleteSimilarityScore() { this->similarityScore_ = nullptr;};
      inline double getSimilarityScore() const { DARABONBA_PTR_GET_DEFAULT(similarityScore_, 0.0) };
      inline Sources& setSimilarityScore(double similarityScore) { DARABONBA_PTR_SET_VALUE(similarityScore_, similarityScore) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline int32_t getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0) };
      inline Sources& setSourceId(int32_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    protected:
      Darabonba::Json chunkMetadata_ {};
      shared_ptr<string> fileId_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<string> knowledgeBaseId_ {};
      Darabonba::Json metadata_ {};
      shared_ptr<vector<int32_t>> pageNumbers_ {};
      shared_ptr<string> shardContent_ {};
      shared_ptr<int32_t> shardIndex_ {};
      shared_ptr<double> similarityScore_ {};
      shared_ptr<int32_t> sourceId_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->answer_ == nullptr && this->completionTokens_ == nullptr && this->errorMessage_ == nullptr && this->errorType_ == nullptr && this->LLMModelId_ == nullptr
        && this->promptTokens_ == nullptr && this->queryId_ == nullptr && this->requestId_ == nullptr && this->sources_ == nullptr && this->status_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline DescribeKnowledgeBaseAnswerResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline DescribeKnowledgeBaseAnswerResponseBody& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // completionTokens Field Functions 
    bool hasCompletionTokens() const { return this->completionTokens_ != nullptr;};
    void deleteCompletionTokens() { this->completionTokens_ = nullptr;};
    inline int32_t getCompletionTokens() const { DARABONBA_PTR_GET_DEFAULT(completionTokens_, 0) };
    inline DescribeKnowledgeBaseAnswerResponseBody& setCompletionTokens(int32_t completionTokens) { DARABONBA_PTR_SET_VALUE(completionTokens_, completionTokens) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeKnowledgeBaseAnswerResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // errorType Field Functions 
    bool hasErrorType() const { return this->errorType_ != nullptr;};
    void deleteErrorType() { this->errorType_ = nullptr;};
    inline string getErrorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
    inline DescribeKnowledgeBaseAnswerResponseBody& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


    // LLMModelId Field Functions 
    bool hasLLMModelId() const { return this->LLMModelId_ != nullptr;};
    void deleteLLMModelId() { this->LLMModelId_ = nullptr;};
    inline string getLLMModelId() const { DARABONBA_PTR_GET_DEFAULT(LLMModelId_, "") };
    inline DescribeKnowledgeBaseAnswerResponseBody& setLLMModelId(string LLMModelId) { DARABONBA_PTR_SET_VALUE(LLMModelId_, LLMModelId) };


    // promptTokens Field Functions 
    bool hasPromptTokens() const { return this->promptTokens_ != nullptr;};
    void deletePromptTokens() { this->promptTokens_ = nullptr;};
    inline int32_t getPromptTokens() const { DARABONBA_PTR_GET_DEFAULT(promptTokens_, 0) };
    inline DescribeKnowledgeBaseAnswerResponseBody& setPromptTokens(int32_t promptTokens) { DARABONBA_PTR_SET_VALUE(promptTokens_, promptTokens) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline DescribeKnowledgeBaseAnswerResponseBody& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKnowledgeBaseAnswerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<DescribeKnowledgeBaseAnswerResponseBody::Sources> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<DescribeKnowledgeBaseAnswerResponseBody::Sources>) };
    inline vector<DescribeKnowledgeBaseAnswerResponseBody::Sources> getSources() { DARABONBA_PTR_GET(sources_, vector<DescribeKnowledgeBaseAnswerResponseBody::Sources>) };
    inline DescribeKnowledgeBaseAnswerResponseBody& setSources(const vector<DescribeKnowledgeBaseAnswerResponseBody::Sources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline DescribeKnowledgeBaseAnswerResponseBody& setSources(vector<DescribeKnowledgeBaseAnswerResponseBody::Sources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeKnowledgeBaseAnswerResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> agentId_ {};
    shared_ptr<string> answer_ {};
    shared_ptr<int32_t> completionTokens_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> errorType_ {};
    shared_ptr<string> LLMModelId_ {};
    shared_ptr<int32_t> promptTokens_ {};
    shared_ptr<string> queryId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeKnowledgeBaseAnswerResponseBody::Sources>> sources_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
