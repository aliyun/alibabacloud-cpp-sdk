// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTEMBEDDINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TEXTEMBEDDINGRESPONSEBODY_HPP_
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
          DARABONBA_PTR_TO_JSON(Embedding, embedding_);
          DARABONBA_PTR_TO_JSON(Index, index_);
        };
        friend void from_json(const Darabonba::Json& j, ResultsItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Embedding, embedding_);
          DARABONBA_PTR_FROM_JSON(Index, index_);
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
        class Embedding : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Embedding& obj) { 
            DARABONBA_PTR_TO_JSON(Embedding, embedding_);
          };
          friend void from_json(const Darabonba::Json& j, Embedding& obj) { 
            DARABONBA_PTR_FROM_JSON(Embedding, embedding_);
          };
          Embedding() = default ;
          Embedding(const Embedding &) = default ;
          Embedding(Embedding &&) = default ;
          Embedding(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Embedding() = default ;
          Embedding& operator=(const Embedding &) = default ;
          Embedding& operator=(Embedding &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->embedding_ == nullptr; };
          // embedding Field Functions 
          bool hasEmbedding() const { return this->embedding_ != nullptr;};
          void deleteEmbedding() { this->embedding_ = nullptr;};
          inline const vector<double> & getEmbedding() const { DARABONBA_PTR_GET_CONST(embedding_, vector<double>) };
          inline vector<double> getEmbedding() { DARABONBA_PTR_GET(embedding_, vector<double>) };
          inline Embedding& setEmbedding(const vector<double> & embedding) { DARABONBA_PTR_SET_VALUE(embedding_, embedding) };
          inline Embedding& setEmbedding(vector<double> && embedding) { DARABONBA_PTR_SET_RVALUE(embedding_, embedding) };


        protected:
          shared_ptr<vector<double>> embedding_ {};
        };

        virtual bool empty() const override { return this->embedding_ == nullptr
        && this->index_ == nullptr; };
        // embedding Field Functions 
        bool hasEmbedding() const { return this->embedding_ != nullptr;};
        void deleteEmbedding() { this->embedding_ = nullptr;};
        inline const ResultsItem::Embedding & getEmbedding() const { DARABONBA_PTR_GET_CONST(embedding_, ResultsItem::Embedding) };
        inline ResultsItem::Embedding getEmbedding() { DARABONBA_PTR_GET(embedding_, ResultsItem::Embedding) };
        inline ResultsItem& setEmbedding(const ResultsItem::Embedding & embedding) { DARABONBA_PTR_SET_VALUE(embedding_, embedding) };
        inline ResultsItem& setEmbedding(ResultsItem::Embedding && embedding) { DARABONBA_PTR_SET_RVALUE(embedding_, embedding) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
        inline ResultsItem& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      protected:
        // The embedding values.
        shared_ptr<ResultsItem::Embedding> embedding_ {};
        // The number of the embedding in the Input request parameter, which starts from 0.
        shared_ptr<int32_t> index_ {};
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
        && this->requestId_ == nullptr && this->results_ == nullptr && this->status_ == nullptr && this->textTokens_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TextEmbeddingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TextEmbeddingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const TextEmbeddingResponseBody::Results & getResults() const { DARABONBA_PTR_GET_CONST(results_, TextEmbeddingResponseBody::Results) };
    inline TextEmbeddingResponseBody::Results getResults() { DARABONBA_PTR_GET(results_, TextEmbeddingResponseBody::Results) };
    inline TextEmbeddingResponseBody& setResults(const TextEmbeddingResponseBody::Results & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline TextEmbeddingResponseBody& setResults(TextEmbeddingResponseBody::Results && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline TextEmbeddingResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // textTokens Field Functions 
    bool hasTextTokens() const { return this->textTokens_ != nullptr;};
    void deleteTextTokens() { this->textTokens_ = nullptr;};
    inline int32_t getTextTokens() const { DARABONBA_PTR_GET_DEFAULT(textTokens_, 0) };
    inline TextEmbeddingResponseBody& setTextTokens(int32_t textTokens) { DARABONBA_PTR_SET_VALUE(textTokens_, textTokens) };


  protected:
    // The returned message.
    shared_ptr<string> message_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // The embedding results.
    shared_ptr<TextEmbeddingResponseBody::Results> results_ {};
    // The status of the operation. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
    // The total number of tokens consumed.
    shared_ptr<int32_t> textTokens_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
