// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTEMBEDDINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TEXTEMBEDDINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TextEmbeddingResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class TextEmbeddingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextEmbeddingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TextTokens, textTokens_);
    };
    friend void from_json(const Darabonba::Json& j, TextEmbeddingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TextTokens, textTokens_);
    };
    TextEmbeddingResponseBody() = default ;
    TextEmbeddingResponseBody(const TextEmbeddingResponseBody &) = default ;
    TextEmbeddingResponseBody(TextEmbeddingResponseBody &&) = default ;
    TextEmbeddingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextEmbeddingResponseBody() = default ;
    TextEmbeddingResponseBody& operator=(const TextEmbeddingResponseBody &) = default ;
    TextEmbeddingResponseBody& operator=(TextEmbeddingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->requestId_ == nullptr && return this->results_ == nullptr && return this->status_ == nullptr && return this->textTokens_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TextEmbeddingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TextEmbeddingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const TextEmbeddingResponseBodyResults & results() const { DARABONBA_PTR_GET_CONST(results_, TextEmbeddingResponseBodyResults) };
    inline TextEmbeddingResponseBodyResults results() { DARABONBA_PTR_GET(results_, TextEmbeddingResponseBodyResults) };
    inline TextEmbeddingResponseBody& setResults(const TextEmbeddingResponseBodyResults & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline TextEmbeddingResponseBody& setResults(TextEmbeddingResponseBodyResults && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline TextEmbeddingResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // textTokens Field Functions 
    bool hasTextTokens() const { return this->textTokens_ != nullptr;};
    void deleteTextTokens() { this->textTokens_ = nullptr;};
    inline int32_t textTokens() const { DARABONBA_PTR_GET_DEFAULT(textTokens_, 0) };
    inline TextEmbeddingResponseBody& setTextTokens(int32_t textTokens) { DARABONBA_PTR_SET_VALUE(textTokens_, textTokens) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<TextEmbeddingResponseBodyResults> results_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> textTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
