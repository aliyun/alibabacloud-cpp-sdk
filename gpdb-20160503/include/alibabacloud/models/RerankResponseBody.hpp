// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RERANKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RERANKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RerankResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class RerankResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RerankResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tokens, tokens_);
    };
    friend void from_json(const Darabonba::Json& j, RerankResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tokens, tokens_);
    };
    RerankResponseBody() = default ;
    RerankResponseBody(const RerankResponseBody &) = default ;
    RerankResponseBody(RerankResponseBody &&) = default ;
    RerankResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RerankResponseBody() = default ;
    RerankResponseBody& operator=(const RerankResponseBody &) = default ;
    RerankResponseBody& operator=(RerankResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->requestId_ == nullptr && return this->results_ == nullptr && return this->status_ == nullptr && return this->tokens_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RerankResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RerankResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const RerankResponseBodyResults & results() const { DARABONBA_PTR_GET_CONST(results_, RerankResponseBodyResults) };
    inline RerankResponseBodyResults results() { DARABONBA_PTR_GET(results_, RerankResponseBodyResults) };
    inline RerankResponseBody& setResults(const RerankResponseBodyResults & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline RerankResponseBody& setResults(RerankResponseBodyResults && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RerankResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tokens Field Functions 
    bool hasTokens() const { return this->tokens_ != nullptr;};
    void deleteTokens() { this->tokens_ = nullptr;};
    inline int32_t tokens() const { DARABONBA_PTR_GET_DEFAULT(tokens_, 0) };
    inline RerankResponseBody& setTokens(int32_t tokens) { DARABONBA_PTR_SET_VALUE(tokens_, tokens) };


  protected:
    // Detailed information returned by the interface.
    std::shared_ptr<string> message_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Rerank results.
    std::shared_ptr<RerankResponseBodyResults> results_ = nullptr;
    // API execution status, value description:
    // - **success**: Execution succeeded.
    // - **fail**: Execution failed.
    std::shared_ptr<string> status_ = nullptr;
    // Number of consumed tokens.
    std::shared_ptr<int32_t> tokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
