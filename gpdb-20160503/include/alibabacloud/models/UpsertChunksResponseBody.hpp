// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTCHUNKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPSERTCHUNKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class UpsertChunksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertChunksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EmbeddingTokens, embeddingTokens_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertChunksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EmbeddingTokens, embeddingTokens_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpsertChunksResponseBody() = default ;
    UpsertChunksResponseBody(const UpsertChunksResponseBody &) = default ;
    UpsertChunksResponseBody(UpsertChunksResponseBody &&) = default ;
    UpsertChunksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertChunksResponseBody() = default ;
    UpsertChunksResponseBody& operator=(const UpsertChunksResponseBody &) = default ;
    UpsertChunksResponseBody& operator=(UpsertChunksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->embeddingTokens_ == nullptr
        && this->jobId_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // embeddingTokens Field Functions 
    bool hasEmbeddingTokens() const { return this->embeddingTokens_ != nullptr;};
    void deleteEmbeddingTokens() { this->embeddingTokens_ = nullptr;};
    inline string getEmbeddingTokens() const { DARABONBA_PTR_GET_DEFAULT(embeddingTokens_, "") };
    inline UpsertChunksResponseBody& setEmbeddingTokens(string embeddingTokens) { DARABONBA_PTR_SET_VALUE(embeddingTokens_, embeddingTokens) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline UpsertChunksResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpsertChunksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpsertChunksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpsertChunksResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of tokens that are consumed during vectorization.
    // 
    // > A token is the minimum unit for splitting text. A token can be a word, phrase, punctuation, or character.
    shared_ptr<string> embeddingTokens_ {};
    // The job ID. You can use the `GetGraphRAGJob` to view the job status.
    // 
    // > This parameter is returned only when the knowledge base is enabled.
    shared_ptr<string> jobId_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the operation. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
