// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELLMSIMILARQUESTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELLMSIMILARQUESTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeLLMSimilarQuestionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLLMSimilarQuestionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLLMSimilarQuestionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    DescribeLLMSimilarQuestionsResponseBody() = default ;
    DescribeLLMSimilarQuestionsResponseBody(const DescribeLLMSimilarQuestionsResponseBody &) = default ;
    DescribeLLMSimilarQuestionsResponseBody(DescribeLLMSimilarQuestionsResponseBody &&) = default ;
    DescribeLLMSimilarQuestionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLLMSimilarQuestionsResponseBody() = default ;
    DescribeLLMSimilarQuestionsResponseBody& operator=(const DescribeLLMSimilarQuestionsResponseBody &) = default ;
    DescribeLLMSimilarQuestionsResponseBody& operator=(DescribeLLMSimilarQuestionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Answer, answer_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Answer, answer_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->answer_ == nullptr
        && this->id_ == nullptr && this->score_ == nullptr && this->source_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr
        && this->url_ == nullptr; };
      // answer Field Functions 
      bool hasAnswer() const { return this->answer_ != nullptr;};
      void deleteAnswer() { this->answer_ = nullptr;};
      inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
      inline Items& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Items& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
      inline Items& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Items& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Items& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Items& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Items& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The answer to the similar question.
      shared_ptr<string> answer_ {};
      // The ID of the similar question.
      shared_ptr<string> id_ {};
      // The similarity of the similar question.
      shared_ptr<double> score_ {};
      // The source of the similar question.
      shared_ptr<string> source_ {};
      // The summary of the similar question.
      shared_ptr<string> summary_ {};
      // The content of the similar question.
      shared_ptr<string> title_ {};
      // The URL of the answer to the similar question.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr && this->sessionId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeLLMSimilarQuestionsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeLLMSimilarQuestionsResponseBody::Items>) };
    inline vector<DescribeLLMSimilarQuestionsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeLLMSimilarQuestionsResponseBody::Items>) };
    inline DescribeLLMSimilarQuestionsResponseBody& setItems(const vector<DescribeLLMSimilarQuestionsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeLLMSimilarQuestionsResponseBody& setItems(vector<DescribeLLMSimilarQuestionsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLLMSimilarQuestionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribeLLMSimilarQuestionsResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The queried similar questions.
    shared_ptr<vector<DescribeLLMSimilarQuestionsResponseBody::Items>> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The session ID.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
