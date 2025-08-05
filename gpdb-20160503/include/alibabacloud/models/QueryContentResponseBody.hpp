// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryContentResponseBodyMatches.hpp>
#include <alibabacloud/models/QueryContentResponseBodyUsage.hpp>
#include <alibabacloud/models/QueryContentResponseBodyWindowMatches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EmbeddingTokens, embeddingTokens_);
      DARABONBA_PTR_TO_JSON(Matches, matches_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
      DARABONBA_PTR_TO_JSON(WindowMatches, windowMatches_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EmbeddingTokens, embeddingTokens_);
      DARABONBA_PTR_FROM_JSON(Matches, matches_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
      DARABONBA_PTR_FROM_JSON(WindowMatches, windowMatches_);
    };
    QueryContentResponseBody() = default ;
    QueryContentResponseBody(const QueryContentResponseBody &) = default ;
    QueryContentResponseBody(QueryContentResponseBody &&) = default ;
    QueryContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContentResponseBody() = default ;
    QueryContentResponseBody& operator=(const QueryContentResponseBody &) = default ;
    QueryContentResponseBody& operator=(QueryContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->embeddingTokens_ != nullptr
        && this->matches_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr && this->usage_ != nullptr
        && this->windowMatches_ != nullptr; };
    // embeddingTokens Field Functions 
    bool hasEmbeddingTokens() const { return this->embeddingTokens_ != nullptr;};
    void deleteEmbeddingTokens() { this->embeddingTokens_ = nullptr;};
    inline string embeddingTokens() const { DARABONBA_PTR_GET_DEFAULT(embeddingTokens_, "") };
    inline QueryContentResponseBody& setEmbeddingTokens(string embeddingTokens) { DARABONBA_PTR_SET_VALUE(embeddingTokens_, embeddingTokens) };


    // matches Field Functions 
    bool hasMatches() const { return this->matches_ != nullptr;};
    void deleteMatches() { this->matches_ = nullptr;};
    inline const QueryContentResponseBodyMatches & matches() const { DARABONBA_PTR_GET_CONST(matches_, QueryContentResponseBodyMatches) };
    inline QueryContentResponseBodyMatches matches() { DARABONBA_PTR_GET(matches_, QueryContentResponseBodyMatches) };
    inline QueryContentResponseBody& setMatches(const QueryContentResponseBodyMatches & matches) { DARABONBA_PTR_SET_VALUE(matches_, matches) };
    inline QueryContentResponseBody& setMatches(QueryContentResponseBodyMatches && matches) { DARABONBA_PTR_SET_RVALUE(matches_, matches) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryContentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryContentResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const QueryContentResponseBodyUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, QueryContentResponseBodyUsage) };
    inline QueryContentResponseBodyUsage usage() { DARABONBA_PTR_GET(usage_, QueryContentResponseBodyUsage) };
    inline QueryContentResponseBody& setUsage(const QueryContentResponseBodyUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline QueryContentResponseBody& setUsage(QueryContentResponseBodyUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    // windowMatches Field Functions 
    bool hasWindowMatches() const { return this->windowMatches_ != nullptr;};
    void deleteWindowMatches() { this->windowMatches_ = nullptr;};
    inline const QueryContentResponseBodyWindowMatches & windowMatches() const { DARABONBA_PTR_GET_CONST(windowMatches_, QueryContentResponseBodyWindowMatches) };
    inline QueryContentResponseBodyWindowMatches windowMatches() { DARABONBA_PTR_GET(windowMatches_, QueryContentResponseBodyWindowMatches) };
    inline QueryContentResponseBody& setWindowMatches(const QueryContentResponseBodyWindowMatches & windowMatches) { DARABONBA_PTR_SET_VALUE(windowMatches_, windowMatches) };
    inline QueryContentResponseBody& setWindowMatches(QueryContentResponseBodyWindowMatches && windowMatches) { DARABONBA_PTR_SET_RVALUE(windowMatches_, windowMatches) };


  protected:
    // Number of tokens used for vectorization.
    // 
    // > A token refers to the smallest unit into which the input text is divided; a token can be a word, a phrase, a punctuation mark, or a character, etc.
    std::shared_ptr<string> embeddingTokens_ = nullptr;
    // The retrieved data.
    std::shared_ptr<QueryContentResponseBodyMatches> matches_ = nullptr;
    // Return message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The execution state of the operation. Valid values:
    // 
    // *   **false**: The operation fails.
    // *   **true**: The operation is successful.
    std::shared_ptr<string> status_ = nullptr;
    // Resource usage for this query.
    std::shared_ptr<QueryContentResponseBodyUsage> usage_ = nullptr;
    // List of windowed matches.
    std::shared_ptr<QueryContentResponseBodyWindowMatches> windowMatches_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
