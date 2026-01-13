// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERICSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERICSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class GenericSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenericSearchRequest& obj) { 
      DARABONBA_ANY_TO_JSON(advancedParams, advancedParams_);
      DARABONBA_PTR_TO_JSON(enableRerank, enableRerank_);
      DARABONBA_PTR_TO_JSON(industry, industry_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(returnMainText, returnMainText_);
      DARABONBA_PTR_TO_JSON(returnMarkdownText, returnMarkdownText_);
      DARABONBA_PTR_TO_JSON(returnRichMainBody, returnRichMainBody_);
      DARABONBA_PTR_TO_JSON(returnSummary, returnSummary_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, GenericSearchRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(advancedParams, advancedParams_);
      DARABONBA_PTR_FROM_JSON(enableRerank, enableRerank_);
      DARABONBA_PTR_FROM_JSON(industry, industry_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(returnMainText, returnMainText_);
      DARABONBA_PTR_FROM_JSON(returnMarkdownText, returnMarkdownText_);
      DARABONBA_PTR_FROM_JSON(returnRichMainBody, returnRichMainBody_);
      DARABONBA_PTR_FROM_JSON(returnSummary, returnSummary_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
    };
    GenericSearchRequest() = default ;
    GenericSearchRequest(const GenericSearchRequest &) = default ;
    GenericSearchRequest(GenericSearchRequest &&) = default ;
    GenericSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenericSearchRequest() = default ;
    GenericSearchRequest& operator=(const GenericSearchRequest &) = default ;
    GenericSearchRequest& operator=(GenericSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedParams_ == nullptr
        && this->enableRerank_ == nullptr && this->industry_ == nullptr && this->page_ == nullptr && this->query_ == nullptr && this->returnMainText_ == nullptr
        && this->returnMarkdownText_ == nullptr && this->returnRichMainBody_ == nullptr && this->returnSummary_ == nullptr && this->sessionId_ == nullptr && this->timeRange_ == nullptr; };
    // advancedParams Field Functions 
    bool hasAdvancedParams() const { return this->advancedParams_ != nullptr;};
    void deleteAdvancedParams() { this->advancedParams_ = nullptr;};
    inline     const Darabonba::Json & getAdvancedParams() const { DARABONBA_GET(advancedParams_) };
    Darabonba::Json & getAdvancedParams() { DARABONBA_GET(advancedParams_) };
    inline GenericSearchRequest& setAdvancedParams(const Darabonba::Json & advancedParams) { DARABONBA_SET_VALUE(advancedParams_, advancedParams) };
    inline GenericSearchRequest& setAdvancedParams(Darabonba::Json && advancedParams) { DARABONBA_SET_RVALUE(advancedParams_, advancedParams) };


    // enableRerank Field Functions 
    bool hasEnableRerank() const { return this->enableRerank_ != nullptr;};
    void deleteEnableRerank() { this->enableRerank_ = nullptr;};
    inline bool getEnableRerank() const { DARABONBA_PTR_GET_DEFAULT(enableRerank_, false) };
    inline GenericSearchRequest& setEnableRerank(bool enableRerank) { DARABONBA_PTR_SET_VALUE(enableRerank_, enableRerank) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline GenericSearchRequest& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GenericSearchRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline GenericSearchRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // returnMainText Field Functions 
    bool hasReturnMainText() const { return this->returnMainText_ != nullptr;};
    void deleteReturnMainText() { this->returnMainText_ = nullptr;};
    inline bool getReturnMainText() const { DARABONBA_PTR_GET_DEFAULT(returnMainText_, false) };
    inline GenericSearchRequest& setReturnMainText(bool returnMainText) { DARABONBA_PTR_SET_VALUE(returnMainText_, returnMainText) };


    // returnMarkdownText Field Functions 
    bool hasReturnMarkdownText() const { return this->returnMarkdownText_ != nullptr;};
    void deleteReturnMarkdownText() { this->returnMarkdownText_ = nullptr;};
    inline bool getReturnMarkdownText() const { DARABONBA_PTR_GET_DEFAULT(returnMarkdownText_, false) };
    inline GenericSearchRequest& setReturnMarkdownText(bool returnMarkdownText) { DARABONBA_PTR_SET_VALUE(returnMarkdownText_, returnMarkdownText) };


    // returnRichMainBody Field Functions 
    bool hasReturnRichMainBody() const { return this->returnRichMainBody_ != nullptr;};
    void deleteReturnRichMainBody() { this->returnRichMainBody_ = nullptr;};
    inline bool getReturnRichMainBody() const { DARABONBA_PTR_GET_DEFAULT(returnRichMainBody_, false) };
    inline GenericSearchRequest& setReturnRichMainBody(bool returnRichMainBody) { DARABONBA_PTR_SET_VALUE(returnRichMainBody_, returnRichMainBody) };


    // returnSummary Field Functions 
    bool hasReturnSummary() const { return this->returnSummary_ != nullptr;};
    void deleteReturnSummary() { this->returnSummary_ = nullptr;};
    inline bool getReturnSummary() const { DARABONBA_PTR_GET_DEFAULT(returnSummary_, false) };
    inline GenericSearchRequest& setReturnSummary(bool returnSummary) { DARABONBA_PTR_SET_VALUE(returnSummary_, returnSummary) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GenericSearchRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline string getTimeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
    inline GenericSearchRequest& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


  protected:
    Darabonba::Json advancedParams_ {};
    shared_ptr<bool> enableRerank_ {};
    shared_ptr<string> industry_ {};
    shared_ptr<int32_t> page_ {};
    // This parameter is required.
    shared_ptr<string> query_ {};
    shared_ptr<bool> returnMainText_ {};
    shared_ptr<bool> returnMarkdownText_ {};
    shared_ptr<bool> returnRichMainBody_ {};
    shared_ptr<bool> returnSummary_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> timeRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
