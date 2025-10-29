// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISEARCHQUERY_HPP_
#define ALIBABACLOUD_MODELS_AISEARCHQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class AISearchQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AISearchQuery& obj) { 
      DARABONBA_PTR_TO_JSON(card, card_);
      DARABONBA_PTR_TO_JSON(cardQuery, cardQuery_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(searchEngine, searchEngine_);
      DARABONBA_PTR_TO_JSON(searchPlan, searchPlan_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, AISearchQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(card, card_);
      DARABONBA_PTR_FROM_JSON(cardQuery, cardQuery_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(searchEngine, searchEngine_);
      DARABONBA_PTR_FROM_JSON(searchPlan, searchPlan_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
    };
    AISearchQuery() = default ;
    AISearchQuery(const AISearchQuery &) = default ;
    AISearchQuery(AISearchQuery &&) = default ;
    AISearchQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AISearchQuery() = default ;
    AISearchQuery& operator=(const AISearchQuery &) = default ;
    AISearchQuery& operator=(AISearchQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->card_ == nullptr
        && return this->cardQuery_ == nullptr && return this->page_ == nullptr && return this->query_ == nullptr && return this->searchEngine_ == nullptr && return this->searchPlan_ == nullptr
        && return this->sessionId_ == nullptr && return this->timeRange_ == nullptr; };
    // card Field Functions 
    bool hasCard() const { return this->card_ != nullptr;};
    void deleteCard() { this->card_ = nullptr;};
    inline string card() const { DARABONBA_PTR_GET_DEFAULT(card_, "") };
    inline AISearchQuery& setCard(string card) { DARABONBA_PTR_SET_VALUE(card_, card) };


    // cardQuery Field Functions 
    bool hasCardQuery() const { return this->cardQuery_ != nullptr;};
    void deleteCardQuery() { this->cardQuery_ = nullptr;};
    inline string cardQuery() const { DARABONBA_PTR_GET_DEFAULT(cardQuery_, "") };
    inline AISearchQuery& setCardQuery(string cardQuery) { DARABONBA_PTR_SET_VALUE(cardQuery_, cardQuery) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline AISearchQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline AISearchQuery& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // searchEngine Field Functions 
    bool hasSearchEngine() const { return this->searchEngine_ != nullptr;};
    void deleteSearchEngine() { this->searchEngine_ = nullptr;};
    inline string searchEngine() const { DARABONBA_PTR_GET_DEFAULT(searchEngine_, "") };
    inline AISearchQuery& setSearchEngine(string searchEngine) { DARABONBA_PTR_SET_VALUE(searchEngine_, searchEngine) };


    // searchPlan Field Functions 
    bool hasSearchPlan() const { return this->searchPlan_ != nullptr;};
    void deleteSearchPlan() { this->searchPlan_ = nullptr;};
    inline string searchPlan() const { DARABONBA_PTR_GET_DEFAULT(searchPlan_, "") };
    inline AISearchQuery& setSearchPlan(string searchPlan) { DARABONBA_PTR_SET_VALUE(searchPlan_, searchPlan) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline AISearchQuery& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline string timeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
    inline AISearchQuery& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


  protected:
    std::shared_ptr<string> card_ = nullptr;
    std::shared_ptr<string> cardQuery_ = nullptr;
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<string> searchEngine_ = nullptr;
    std::shared_ptr<string> searchPlan_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> timeRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
