// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGRAPHRAGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGRAPHRAGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetGraphRAGJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGraphRAGJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetGraphRAGJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    GetGraphRAGJobResponseBody() = default ;
    GetGraphRAGJobResponseBody(const GetGraphRAGJobResponseBody &) = default ;
    GetGraphRAGJobResponseBody(GetGraphRAGJobResponseBody &&) = default ;
    GetGraphRAGJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGraphRAGJobResponseBody() = default ;
    GetGraphRAGJobResponseBody& operator=(const GetGraphRAGJobResponseBody &) = default ;
    GetGraphRAGJobResponseBody& operator=(GetGraphRAGJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Usage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Usage& obj) { 
        DARABONBA_PTR_TO_JSON(EmbeddingTokens, embeddingTokens_);
        DARABONBA_PTR_TO_JSON(LLMInputTokens, LLMInputTokens_);
        DARABONBA_PTR_TO_JSON(LLMOutputTokens, LLMOutputTokens_);
      };
      friend void from_json(const Darabonba::Json& j, Usage& obj) { 
        DARABONBA_PTR_FROM_JSON(EmbeddingTokens, embeddingTokens_);
        DARABONBA_PTR_FROM_JSON(LLMInputTokens, LLMInputTokens_);
        DARABONBA_PTR_FROM_JSON(LLMOutputTokens, LLMOutputTokens_);
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
      virtual bool empty() const override { return this->embeddingTokens_ == nullptr
        && this->LLMInputTokens_ == nullptr && this->LLMOutputTokens_ == nullptr; };
      // embeddingTokens Field Functions 
      bool hasEmbeddingTokens() const { return this->embeddingTokens_ != nullptr;};
      void deleteEmbeddingTokens() { this->embeddingTokens_ = nullptr;};
      inline int32_t getEmbeddingTokens() const { DARABONBA_PTR_GET_DEFAULT(embeddingTokens_, 0) };
      inline Usage& setEmbeddingTokens(int32_t embeddingTokens) { DARABONBA_PTR_SET_VALUE(embeddingTokens_, embeddingTokens) };


      // LLMInputTokens Field Functions 
      bool hasLLMInputTokens() const { return this->LLMInputTokens_ != nullptr;};
      void deleteLLMInputTokens() { this->LLMInputTokens_ = nullptr;};
      inline int32_t getLLMInputTokens() const { DARABONBA_PTR_GET_DEFAULT(LLMInputTokens_, 0) };
      inline Usage& setLLMInputTokens(int32_t LLMInputTokens) { DARABONBA_PTR_SET_VALUE(LLMInputTokens_, LLMInputTokens) };


      // LLMOutputTokens Field Functions 
      bool hasLLMOutputTokens() const { return this->LLMOutputTokens_ != nullptr;};
      void deleteLLMOutputTokens() { this->LLMOutputTokens_ = nullptr;};
      inline int32_t getLLMOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(LLMOutputTokens_, 0) };
      inline Usage& setLLMOutputTokens(int32_t LLMOutputTokens) { DARABONBA_PTR_SET_VALUE(LLMOutputTokens_, LLMOutputTokens) };


    protected:
      // The number of tokens that are consumed during vectorization.
      // 
      // > A token is the minimum unit for splitting text. A token can be a word, phrase, punctuation, or character.
      shared_ptr<int32_t> embeddingTokens_ {};
      // The number of tokens used by the large model input.
      shared_ptr<int32_t> LLMInputTokens_ {};
      // The number of tokens used for large model output.
      shared_ptr<int32_t> LLMOutputTokens_ {};
    };

    class Job : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Job& obj) { 
        DARABONBA_PTR_TO_JSON(Completed, completed_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Job& obj) { 
        DARABONBA_PTR_FROM_JSON(Completed, completed_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
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
        && this->createTime_ == nullptr && this->error_ == nullptr && this->id_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr
        && this->updateTime_ == nullptr; };
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
      // The job creation time.
      shared_ptr<string> createTime_ {};
      // The error message that is returned when the current operation is abnormal or fails.
      shared_ptr<string> error_ {};
      // The job ID.
      shared_ptr<string> id_ {};
      // The progress of the document upload job. Unit: %. A value of 100 indicates that the job is complete.
      shared_ptr<int32_t> progress_ {};
      // The state of the job. Valid values:
      // 
      // *   **Success**
      // *   **Failed** (See the Error parameter for failure reasons.)
      // *   **Running**
      // *   **Pending**
      shared_ptr<string> status_ {};
      // The job last updated time.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->job_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->usage_ == nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const GetGraphRAGJobResponseBody::Job & getJob() const { DARABONBA_PTR_GET_CONST(job_, GetGraphRAGJobResponseBody::Job) };
    inline GetGraphRAGJobResponseBody::Job getJob() { DARABONBA_PTR_GET(job_, GetGraphRAGJobResponseBody::Job) };
    inline GetGraphRAGJobResponseBody& setJob(const GetGraphRAGJobResponseBody::Job & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline GetGraphRAGJobResponseBody& setJob(GetGraphRAGJobResponseBody::Job && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGraphRAGJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGraphRAGJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetGraphRAGJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const GetGraphRAGJobResponseBody::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, GetGraphRAGJobResponseBody::Usage) };
    inline GetGraphRAGJobResponseBody::Usage getUsage() { DARABONBA_PTR_GET(usage_, GetGraphRAGJobResponseBody::Usage) };
    inline GetGraphRAGJobResponseBody& setUsage(const GetGraphRAGJobResponseBody::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline GetGraphRAGJobResponseBody& setUsage(GetGraphRAGJobResponseBody::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    // The details of the task for building a knowledge graph.
    shared_ptr<GetGraphRAGJobResponseBody::Job> job_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the operation. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
    // The number of tokens that are consumed by document understanding or embedding.
    shared_ptr<GetGraphRAGJobResponseBody::Usage> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
