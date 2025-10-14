// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYRESPONSEBODYSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYRESPONSEBODYSUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMinutesSummaryResponseBodySummaryActions.hpp>
#include <vector>
#include <alibabacloud/models/QueryMinutesSummaryResponseBodySummaryAutoChapters.hpp>
#include <alibabacloud/models/QueryMinutesSummaryResponseBodySummaryConversationalSummary.hpp>
#include <alibabacloud/models/QueryMinutesSummaryResponseBodySummaryKeySentences.hpp>
#include <alibabacloud/models/QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMinutesSummaryResponseBodySummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMinutesSummaryResponseBodySummary& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(AutoChapters, autoChapters_);
      DARABONBA_PTR_TO_JSON(ConversationalSummary, conversationalSummary_);
      DARABONBA_PTR_TO_JSON(KeySentences, keySentences_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(ParagraphSummary, paragraphSummary_);
      DARABONBA_PTR_TO_JSON(QuestionsAnsweringSummary, questionsAnsweringSummary_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMinutesSummaryResponseBodySummary& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(AutoChapters, autoChapters_);
      DARABONBA_PTR_FROM_JSON(ConversationalSummary, conversationalSummary_);
      DARABONBA_PTR_FROM_JSON(KeySentences, keySentences_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(ParagraphSummary, paragraphSummary_);
      DARABONBA_PTR_FROM_JSON(QuestionsAnsweringSummary, questionsAnsweringSummary_);
    };
    QueryMinutesSummaryResponseBodySummary() = default ;
    QueryMinutesSummaryResponseBodySummary(const QueryMinutesSummaryResponseBodySummary &) = default ;
    QueryMinutesSummaryResponseBodySummary(QueryMinutesSummaryResponseBodySummary &&) = default ;
    QueryMinutesSummaryResponseBodySummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMinutesSummaryResponseBodySummary() = default ;
    QueryMinutesSummaryResponseBodySummary& operator=(const QueryMinutesSummaryResponseBodySummary &) = default ;
    QueryMinutesSummaryResponseBodySummary& operator=(QueryMinutesSummaryResponseBodySummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr
        && return this->autoChapters_ == nullptr && return this->conversationalSummary_ == nullptr && return this->keySentences_ == nullptr && return this->keywords_ == nullptr && return this->paragraphSummary_ == nullptr
        && return this->questionsAnsweringSummary_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const Models::QueryMinutesSummaryResponseBodySummaryActions & actions() const { DARABONBA_PTR_GET_CONST(actions_, Models::QueryMinutesSummaryResponseBodySummaryActions) };
    inline Models::QueryMinutesSummaryResponseBodySummaryActions actions() { DARABONBA_PTR_GET(actions_, Models::QueryMinutesSummaryResponseBodySummaryActions) };
    inline QueryMinutesSummaryResponseBodySummary& setActions(const Models::QueryMinutesSummaryResponseBodySummaryActions & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline QueryMinutesSummaryResponseBodySummary& setActions(Models::QueryMinutesSummaryResponseBodySummaryActions && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // autoChapters Field Functions 
    bool hasAutoChapters() const { return this->autoChapters_ != nullptr;};
    void deleteAutoChapters() { this->autoChapters_ = nullptr;};
    inline const vector<Models::QueryMinutesSummaryResponseBodySummaryAutoChapters> & autoChapters() const { DARABONBA_PTR_GET_CONST(autoChapters_, vector<Models::QueryMinutesSummaryResponseBodySummaryAutoChapters>) };
    inline vector<Models::QueryMinutesSummaryResponseBodySummaryAutoChapters> autoChapters() { DARABONBA_PTR_GET(autoChapters_, vector<Models::QueryMinutesSummaryResponseBodySummaryAutoChapters>) };
    inline QueryMinutesSummaryResponseBodySummary& setAutoChapters(const vector<Models::QueryMinutesSummaryResponseBodySummaryAutoChapters> & autoChapters) { DARABONBA_PTR_SET_VALUE(autoChapters_, autoChapters) };
    inline QueryMinutesSummaryResponseBodySummary& setAutoChapters(vector<Models::QueryMinutesSummaryResponseBodySummaryAutoChapters> && autoChapters) { DARABONBA_PTR_SET_RVALUE(autoChapters_, autoChapters) };


    // conversationalSummary Field Functions 
    bool hasConversationalSummary() const { return this->conversationalSummary_ != nullptr;};
    void deleteConversationalSummary() { this->conversationalSummary_ = nullptr;};
    inline const vector<Models::QueryMinutesSummaryResponseBodySummaryConversationalSummary> & conversationalSummary() const { DARABONBA_PTR_GET_CONST(conversationalSummary_, vector<Models::QueryMinutesSummaryResponseBodySummaryConversationalSummary>) };
    inline vector<Models::QueryMinutesSummaryResponseBodySummaryConversationalSummary> conversationalSummary() { DARABONBA_PTR_GET(conversationalSummary_, vector<Models::QueryMinutesSummaryResponseBodySummaryConversationalSummary>) };
    inline QueryMinutesSummaryResponseBodySummary& setConversationalSummary(const vector<Models::QueryMinutesSummaryResponseBodySummaryConversationalSummary> & conversationalSummary) { DARABONBA_PTR_SET_VALUE(conversationalSummary_, conversationalSummary) };
    inline QueryMinutesSummaryResponseBodySummary& setConversationalSummary(vector<Models::QueryMinutesSummaryResponseBodySummaryConversationalSummary> && conversationalSummary) { DARABONBA_PTR_SET_RVALUE(conversationalSummary_, conversationalSummary) };


    // keySentences Field Functions 
    bool hasKeySentences() const { return this->keySentences_ != nullptr;};
    void deleteKeySentences() { this->keySentences_ = nullptr;};
    inline const Models::QueryMinutesSummaryResponseBodySummaryKeySentences & keySentences() const { DARABONBA_PTR_GET_CONST(keySentences_, Models::QueryMinutesSummaryResponseBodySummaryKeySentences) };
    inline Models::QueryMinutesSummaryResponseBodySummaryKeySentences keySentences() { DARABONBA_PTR_GET(keySentences_, Models::QueryMinutesSummaryResponseBodySummaryKeySentences) };
    inline QueryMinutesSummaryResponseBodySummary& setKeySentences(const Models::QueryMinutesSummaryResponseBodySummaryKeySentences & keySentences) { DARABONBA_PTR_SET_VALUE(keySentences_, keySentences) };
    inline QueryMinutesSummaryResponseBodySummary& setKeySentences(Models::QueryMinutesSummaryResponseBodySummaryKeySentences && keySentences) { DARABONBA_PTR_SET_RVALUE(keySentences_, keySentences) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const vector<string> & keywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
    inline vector<string> keywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
    inline QueryMinutesSummaryResponseBodySummary& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline QueryMinutesSummaryResponseBodySummary& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // paragraphSummary Field Functions 
    bool hasParagraphSummary() const { return this->paragraphSummary_ != nullptr;};
    void deleteParagraphSummary() { this->paragraphSummary_ = nullptr;};
    inline string paragraphSummary() const { DARABONBA_PTR_GET_DEFAULT(paragraphSummary_, "") };
    inline QueryMinutesSummaryResponseBodySummary& setParagraphSummary(string paragraphSummary) { DARABONBA_PTR_SET_VALUE(paragraphSummary_, paragraphSummary) };


    // questionsAnsweringSummary Field Functions 
    bool hasQuestionsAnsweringSummary() const { return this->questionsAnsweringSummary_ != nullptr;};
    void deleteQuestionsAnsweringSummary() { this->questionsAnsweringSummary_ = nullptr;};
    inline const vector<Models::QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary> & questionsAnsweringSummary() const { DARABONBA_PTR_GET_CONST(questionsAnsweringSummary_, vector<Models::QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary>) };
    inline vector<Models::QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary> questionsAnsweringSummary() { DARABONBA_PTR_GET(questionsAnsweringSummary_, vector<Models::QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary>) };
    inline QueryMinutesSummaryResponseBodySummary& setQuestionsAnsweringSummary(const vector<Models::QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary> & questionsAnsweringSummary) { DARABONBA_PTR_SET_VALUE(questionsAnsweringSummary_, questionsAnsweringSummary) };
    inline QueryMinutesSummaryResponseBodySummary& setQuestionsAnsweringSummary(vector<Models::QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary> && questionsAnsweringSummary) { DARABONBA_PTR_SET_RVALUE(questionsAnsweringSummary_, questionsAnsweringSummary) };


  protected:
    std::shared_ptr<Models::QueryMinutesSummaryResponseBodySummaryActions> actions_ = nullptr;
    std::shared_ptr<vector<Models::QueryMinutesSummaryResponseBodySummaryAutoChapters>> autoChapters_ = nullptr;
    std::shared_ptr<vector<Models::QueryMinutesSummaryResponseBodySummaryConversationalSummary>> conversationalSummary_ = nullptr;
    std::shared_ptr<Models::QueryMinutesSummaryResponseBodySummaryKeySentences> keySentences_ = nullptr;
    std::shared_ptr<vector<string>> keywords_ = nullptr;
    std::shared_ptr<string> paragraphSummary_ = nullptr;
    std::shared_ptr<vector<Models::QueryMinutesSummaryResponseBodySummaryQuestionsAnsweringSummary>> questionsAnsweringSummary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
