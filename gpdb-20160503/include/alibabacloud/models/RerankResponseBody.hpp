// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RERANKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RERANKRESPONSEBODY_HPP_
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
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Results, results_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Results, results_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResultsItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResultsItem& obj) { 
          DARABONBA_PTR_TO_JSON(Document, document_);
          DARABONBA_PTR_TO_JSON(Index, index_);
          DARABONBA_PTR_TO_JSON(RelevanceScore, relevanceScore_);
        };
        friend void from_json(const Darabonba::Json& j, ResultsItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Document, document_);
          DARABONBA_PTR_FROM_JSON(Index, index_);
          DARABONBA_PTR_FROM_JSON(RelevanceScore, relevanceScore_);
        };
        ResultsItem() = default ;
        ResultsItem(const ResultsItem &) = default ;
        ResultsItem(ResultsItem &&) = default ;
        ResultsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResultsItem() = default ;
        ResultsItem& operator=(const ResultsItem &) = default ;
        ResultsItem& operator=(ResultsItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->document_ == nullptr
        && this->index_ == nullptr && this->relevanceScore_ == nullptr; };
        // document Field Functions 
        bool hasDocument() const { return this->document_ != nullptr;};
        void deleteDocument() { this->document_ = nullptr;};
        inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
        inline ResultsItem& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
        inline ResultsItem& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // relevanceScore Field Functions 
        bool hasRelevanceScore() const { return this->relevanceScore_ != nullptr;};
        void deleteRelevanceScore() { this->relevanceScore_ = nullptr;};
        inline float getRelevanceScore() const { DARABONBA_PTR_GET_DEFAULT(relevanceScore_, 0.0) };
        inline ResultsItem& setRelevanceScore(float relevanceScore) { DARABONBA_PTR_SET_VALUE(relevanceScore_, relevanceScore) };


      protected:
        // Re-ordered document information.
        shared_ptr<string> document_ {};
        // Index of this document in the request parameter Documents, starting from 0.
        shared_ptr<int32_t> index_ {};
        // Rerank similarity score.
        shared_ptr<float> relevanceScore_ {};
      };

      virtual bool empty() const override { return this->results_ == nullptr; };
      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<Results::ResultsItem> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Results::ResultsItem>) };
      inline vector<Results::ResultsItem> getResults() { DARABONBA_PTR_GET(results_, vector<Results::ResultsItem>) };
      inline Results& setResults(const vector<Results::ResultsItem> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Results& setResults(vector<Results::ResultsItem> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    protected:
      shared_ptr<vector<Results::ResultsItem>> results_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->requestId_ == nullptr && this->results_ == nullptr && this->status_ == nullptr && this->tokens_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RerankResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RerankResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const RerankResponseBody::Results & getResults() const { DARABONBA_PTR_GET_CONST(results_, RerankResponseBody::Results) };
    inline RerankResponseBody::Results getResults() { DARABONBA_PTR_GET(results_, RerankResponseBody::Results) };
    inline RerankResponseBody& setResults(const RerankResponseBody::Results & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline RerankResponseBody& setResults(RerankResponseBody::Results && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RerankResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tokens Field Functions 
    bool hasTokens() const { return this->tokens_ != nullptr;};
    void deleteTokens() { this->tokens_ = nullptr;};
    inline int32_t getTokens() const { DARABONBA_PTR_GET_DEFAULT(tokens_, 0) };
    inline RerankResponseBody& setTokens(int32_t tokens) { DARABONBA_PTR_SET_VALUE(tokens_, tokens) };


  protected:
    // Detailed information returned by the interface.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Rerank results.
    shared_ptr<RerankResponseBody::Results> results_ {};
    // API execution status, value description:
    // - **success**: Execution succeeded.
    // - **fail**: Execution failed.
    shared_ptr<string> status_ {};
    // Number of consumed tokens.
    shared_ptr<int32_t> tokens_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
