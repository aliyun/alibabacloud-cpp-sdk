// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADDOCUMENTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADDOCUMENTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetUploadDocumentJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadDocumentJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkResult, chunkResult_);
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadDocumentJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkResult, chunkResult_);
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    GetUploadDocumentJobResponseBody() = default ;
    GetUploadDocumentJobResponseBody(const GetUploadDocumentJobResponseBody &) = default ;
    GetUploadDocumentJobResponseBody(GetUploadDocumentJobResponseBody &&) = default ;
    GetUploadDocumentJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadDocumentJobResponseBody() = default ;
    GetUploadDocumentJobResponseBody& operator=(const GetUploadDocumentJobResponseBody &) = default ;
    GetUploadDocumentJobResponseBody& operator=(GetUploadDocumentJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Usage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Usage& obj) { 
        DARABONBA_PTR_TO_JSON(EmbeddingEntries, embeddingEntries_);
        DARABONBA_PTR_TO_JSON(EmbeddingTokens, embeddingTokens_);
      };
      friend void from_json(const Darabonba::Json& j, Usage& obj) { 
        DARABONBA_PTR_FROM_JSON(EmbeddingEntries, embeddingEntries_);
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
      virtual bool empty() const override { return this->embeddingEntries_ == nullptr
        && this->embeddingTokens_ == nullptr; };
      // embeddingEntries Field Functions 
      bool hasEmbeddingEntries() const { return this->embeddingEntries_ != nullptr;};
      void deleteEmbeddingEntries() { this->embeddingEntries_ = nullptr;};
      inline int32_t getEmbeddingEntries() const { DARABONBA_PTR_GET_DEFAULT(embeddingEntries_, 0) };
      inline Usage& setEmbeddingEntries(int32_t embeddingEntries) { DARABONBA_PTR_SET_VALUE(embeddingEntries_, embeddingEntries) };


      // embeddingTokens Field Functions 
      bool hasEmbeddingTokens() const { return this->embeddingTokens_ != nullptr;};
      void deleteEmbeddingTokens() { this->embeddingTokens_ = nullptr;};
      inline int32_t getEmbeddingTokens() const { DARABONBA_PTR_GET_DEFAULT(embeddingTokens_, 0) };
      inline Usage& setEmbeddingTokens(int32_t embeddingTokens) { DARABONBA_PTR_SET_VALUE(embeddingTokens_, embeddingTokens) };


    protected:
      // The number of entries during vectorization.
      shared_ptr<int32_t> embeddingEntries_ {};
      // The number of tokens that are consumed during vectorization.
      // 
      // > A token is the minimum unit for splitting text. A token can be a word, phrase, punctuation, or character.
      shared_ptr<int32_t> embeddingTokens_ {};
    };

    class Job : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Job& obj) { 
        DARABONBA_PTR_TO_JSON(Completed, completed_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Job& obj) { 
        DARABONBA_PTR_FROM_JSON(Completed, completed_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Job() = default ;
      Job(const Job &) = default ;
      Job(Job &&) = default ;
      Job(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Job() = default ;
      Job& operator=(const Job &) = default ;
      Job& operator=(Job &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completed_ == nullptr
        && this->createTime_ == nullptr && this->error_ == nullptr && this->errorCode_ == nullptr && this->id_ == nullptr && this->progress_ == nullptr
        && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // completed Field Functions 
      bool hasCompleted() const { return this->completed_ != nullptr;};
      void deleteCompleted() { this->completed_ = nullptr;};
      inline bool getCompleted() const { DARABONBA_PTR_GET_DEFAULT(completed_, false) };
      inline Job& setCompleted(bool completed) { DARABONBA_PTR_SET_VALUE(completed_, completed) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Job& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline Job& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Job& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Job& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
      inline Job& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Job& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Job& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Indicates whether the operation is complete.
      shared_ptr<bool> completed_ {};
      // Job creation time.
      shared_ptr<string> createTime_ {};
      // The error message that is returned when the current operation is abnormal or fails.
      shared_ptr<string> error_ {};
      // The error code returned.
      shared_ptr<string> errorCode_ {};
      // The job ID.
      shared_ptr<string> id_ {};
      // The progress of the document upload job. Unit: %. A value of 100 indicates that the job is complete.
      shared_ptr<int32_t> progress_ {};
      // The status of the job. Valid values:
      // 
      // *   Success
      // *   Failed (See the Error parameter for failure reasons.)
      // *   Cancelling
      // *   Cancelled
      // *   Start
      // *   Running
      // *   Pending
      shared_ptr<string> status_ {};
      // Job last updated time
      shared_ptr<string> updateTime_ {};
    };

    class ChunkResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChunkResult& obj) { 
        DARABONBA_PTR_TO_JSON(ChunkFileUrl, chunkFileUrl_);
        DARABONBA_PTR_TO_JSON(DocumentLoaderResultFileUrl, documentLoaderResultFileUrl_);
        DARABONBA_PTR_TO_JSON(PlainChunkFileUrl, plainChunkFileUrl_);
      };
      friend void from_json(const Darabonba::Json& j, ChunkResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ChunkFileUrl, chunkFileUrl_);
        DARABONBA_PTR_FROM_JSON(DocumentLoaderResultFileUrl, documentLoaderResultFileUrl_);
        DARABONBA_PTR_FROM_JSON(PlainChunkFileUrl, plainChunkFileUrl_);
      };
      ChunkResult() = default ;
      ChunkResult(const ChunkResult &) = default ;
      ChunkResult(ChunkResult &&) = default ;
      ChunkResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChunkResult() = default ;
      ChunkResult& operator=(const ChunkResult &) = default ;
      ChunkResult& operator=(ChunkResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chunkFileUrl_ == nullptr
        && this->documentLoaderResultFileUrl_ == nullptr && this->plainChunkFileUrl_ == nullptr; };
      // chunkFileUrl Field Functions 
      bool hasChunkFileUrl() const { return this->chunkFileUrl_ != nullptr;};
      void deleteChunkFileUrl() { this->chunkFileUrl_ = nullptr;};
      inline string getChunkFileUrl() const { DARABONBA_PTR_GET_DEFAULT(chunkFileUrl_, "") };
      inline ChunkResult& setChunkFileUrl(string chunkFileUrl) { DARABONBA_PTR_SET_VALUE(chunkFileUrl_, chunkFileUrl) };


      // documentLoaderResultFileUrl Field Functions 
      bool hasDocumentLoaderResultFileUrl() const { return this->documentLoaderResultFileUrl_ != nullptr;};
      void deleteDocumentLoaderResultFileUrl() { this->documentLoaderResultFileUrl_ = nullptr;};
      inline string getDocumentLoaderResultFileUrl() const { DARABONBA_PTR_GET_DEFAULT(documentLoaderResultFileUrl_, "") };
      inline ChunkResult& setDocumentLoaderResultFileUrl(string documentLoaderResultFileUrl) { DARABONBA_PTR_SET_VALUE(documentLoaderResultFileUrl_, documentLoaderResultFileUrl) };


      // plainChunkFileUrl Field Functions 
      bool hasPlainChunkFileUrl() const { return this->plainChunkFileUrl_ != nullptr;};
      void deletePlainChunkFileUrl() { this->plainChunkFileUrl_ = nullptr;};
      inline string getPlainChunkFileUrl() const { DARABONBA_PTR_GET_DEFAULT(plainChunkFileUrl_, "") };
      inline ChunkResult& setPlainChunkFileUrl(string plainChunkFileUrl) { DARABONBA_PTR_SET_VALUE(plainChunkFileUrl_, plainChunkFileUrl) };


    protected:
      // The URL of the file after chunking. The validity period of the URL is 2 hours. The file is in the JSONL format. Each line is in the `{"page_content":"*****", "metadata": {"**":"***","**":"***"}` format.
      shared_ptr<string> chunkFileUrl_ {};
      // The markdown output file that is generated by the ADBPGLoader. The validity period is 2 hours.
      shared_ptr<string> documentLoaderResultFileUrl_ {};
      // The URL of the file that does not contain metadata after chunking. The validity period of the URL is 2 hours. The file is in the TXT format. Each line is a chunk. The file can be easily used for embedding.
      shared_ptr<string> plainChunkFileUrl_ {};
    };

    virtual bool empty() const override { return this->chunkResult_ == nullptr
        && this->job_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->usage_ == nullptr; };
    // chunkResult Field Functions 
    bool hasChunkResult() const { return this->chunkResult_ != nullptr;};
    void deleteChunkResult() { this->chunkResult_ = nullptr;};
    inline const GetUploadDocumentJobResponseBody::ChunkResult & getChunkResult() const { DARABONBA_PTR_GET_CONST(chunkResult_, GetUploadDocumentJobResponseBody::ChunkResult) };
    inline GetUploadDocumentJobResponseBody::ChunkResult getChunkResult() { DARABONBA_PTR_GET(chunkResult_, GetUploadDocumentJobResponseBody::ChunkResult) };
    inline GetUploadDocumentJobResponseBody& setChunkResult(const GetUploadDocumentJobResponseBody::ChunkResult & chunkResult) { DARABONBA_PTR_SET_VALUE(chunkResult_, chunkResult) };
    inline GetUploadDocumentJobResponseBody& setChunkResult(GetUploadDocumentJobResponseBody::ChunkResult && chunkResult) { DARABONBA_PTR_SET_RVALUE(chunkResult_, chunkResult) };


    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const GetUploadDocumentJobResponseBody::Job & getJob() const { DARABONBA_PTR_GET_CONST(job_, GetUploadDocumentJobResponseBody::Job) };
    inline GetUploadDocumentJobResponseBody::Job getJob() { DARABONBA_PTR_GET(job_, GetUploadDocumentJobResponseBody::Job) };
    inline GetUploadDocumentJobResponseBody& setJob(const GetUploadDocumentJobResponseBody::Job & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline GetUploadDocumentJobResponseBody& setJob(GetUploadDocumentJobResponseBody::Job && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUploadDocumentJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUploadDocumentJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetUploadDocumentJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const GetUploadDocumentJobResponseBody::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, GetUploadDocumentJobResponseBody::Usage) };
    inline GetUploadDocumentJobResponseBody::Usage getUsage() { DARABONBA_PTR_GET(usage_, GetUploadDocumentJobResponseBody::Usage) };
    inline GetUploadDocumentJobResponseBody& setUsage(const GetUploadDocumentJobResponseBody::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline GetUploadDocumentJobResponseBody& setUsage(GetUploadDocumentJobResponseBody::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    // The chunking result.
    shared_ptr<GetUploadDocumentJobResponseBody::ChunkResult> chunkResult_ {};
    // The information about the document upload job.
    shared_ptr<GetUploadDocumentJobResponseBody::Job> job_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the operation. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
    // The number of tokens that are consumed by document understanding or embedding.
    shared_ptr<GetUploadDocumentJobResponseBody::Usage> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
