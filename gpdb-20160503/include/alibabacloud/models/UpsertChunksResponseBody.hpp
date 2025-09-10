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
    virtual bool empty() const override { this->embeddingTokens_ != nullptr
        && this->jobId_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr; };
    // embeddingTokens Field Functions 
    bool hasEmbeddingTokens() const { return this->embeddingTokens_ != nullptr;};
    void deleteEmbeddingTokens() { this->embeddingTokens_ = nullptr;};
    inline string embeddingTokens() const { DARABONBA_PTR_GET_DEFAULT(embeddingTokens_, "") };
    inline UpsertChunksResponseBody& setEmbeddingTokens(string embeddingTokens) { DARABONBA_PTR_SET_VALUE(embeddingTokens_, embeddingTokens) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline UpsertChunksResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpsertChunksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpsertChunksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpsertChunksResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Number of tokens used during vectorization.
    // 
    // > A token refers to the smallest unit into which the input text is divided. A token can be a word, a phrase, a punctuation mark, a character, etc.
    std::shared_ptr<string> embeddingTokens_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    // Return message.
    std::shared_ptr<string> message_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // API execution status, with the following values:
    // - **success**: Execution succeeded.
    // - **fail**: Execution failed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
