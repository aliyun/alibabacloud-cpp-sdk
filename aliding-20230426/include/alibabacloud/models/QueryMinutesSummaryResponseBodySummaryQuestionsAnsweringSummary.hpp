// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYRESPONSEBODYSUMMARYQUESTIONSANSWERINGSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYRESPONSEBODYSUMMARYQUESTIONSANSWERINGSUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary& obj) { 
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(SentenceIdsOfAnswer, sentenceIdsOfAnswer_);
      DARABONBA_PTR_TO_JSON(SentenceIdsOfQuestion, sentenceIdsOfQuestion_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(SentenceIdsOfAnswer, sentenceIdsOfAnswer_);
      DARABONBA_PTR_FROM_JSON(SentenceIdsOfQuestion, sentenceIdsOfQuestion_);
    };
    QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary() = default ;
    QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary(const QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary &) = default ;
    QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary(QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary &&) = default ;
    QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary() = default ;
    QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary& operator=(const QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary &) = default ;
    QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary& operator=(QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answer_ == nullptr
        && return this->question_ == nullptr && return this->sentenceIdsOfAnswer_ == nullptr && return this->sentenceIdsOfQuestion_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string answer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string question() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // sentenceIdsOfAnswer Field Functions 
    bool hasSentenceIdsOfAnswer() const { return this->sentenceIdsOfAnswer_ != nullptr;};
    void deleteSentenceIdsOfAnswer() { this->sentenceIdsOfAnswer_ = nullptr;};
    inline const vector<int64_t> & sentenceIdsOfAnswer() const { DARABONBA_PTR_GET_CONST(sentenceIdsOfAnswer_, vector<int64_t>) };
    inline vector<int64_t> sentenceIdsOfAnswer() { DARABONBA_PTR_GET(sentenceIdsOfAnswer_, vector<int64_t>) };
    inline QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary& setSentenceIdsOfAnswer(const vector<int64_t> & sentenceIdsOfAnswer) { DARABONBA_PTR_SET_VALUE(sentenceIdsOfAnswer_, sentenceIdsOfAnswer) };
    inline QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary& setSentenceIdsOfAnswer(vector<int64_t> && sentenceIdsOfAnswer) { DARABONBA_PTR_SET_RVALUE(sentenceIdsOfAnswer_, sentenceIdsOfAnswer) };


    // sentenceIdsOfQuestion Field Functions 
    bool hasSentenceIdsOfQuestion() const { return this->sentenceIdsOfQuestion_ != nullptr;};
    void deleteSentenceIdsOfQuestion() { this->sentenceIdsOfQuestion_ = nullptr;};
    inline const vector<int64_t> & sentenceIdsOfQuestion() const { DARABONBA_PTR_GET_CONST(sentenceIdsOfQuestion_, vector<int64_t>) };
    inline vector<int64_t> sentenceIdsOfQuestion() { DARABONBA_PTR_GET(sentenceIdsOfQuestion_, vector<int64_t>) };
    inline QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary& setSentenceIdsOfQuestion(const vector<int64_t> & sentenceIdsOfQuestion) { DARABONBA_PTR_SET_VALUE(sentenceIdsOfQuestion_, sentenceIdsOfQuestion) };
    inline QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary& setSentenceIdsOfQuestion(vector<int64_t> && sentenceIdsOfQuestion) { DARABONBA_PTR_SET_RVALUE(sentenceIdsOfQuestion_, sentenceIdsOfQuestion) };


  protected:
    std::shared_ptr<string> answer_ = nullptr;
    std::shared_ptr<string> question_ = nullptr;
    std::shared_ptr<vector<int64_t>> sentenceIdsOfAnswer_ = nullptr;
    std::shared_ptr<vector<int64_t>> sentenceIdsOfQuestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
