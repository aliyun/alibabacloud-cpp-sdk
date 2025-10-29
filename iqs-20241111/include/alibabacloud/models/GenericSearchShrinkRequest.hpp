// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERICSEARCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERICSEARCHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class GenericSearchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenericSearchShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(advancedParams, advancedParamsShrink_);
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
    friend void from_json(const Darabonba::Json& j, GenericSearchShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(advancedParams, advancedParamsShrink_);
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
    GenericSearchShrinkRequest() = default ;
    GenericSearchShrinkRequest(const GenericSearchShrinkRequest &) = default ;
    GenericSearchShrinkRequest(GenericSearchShrinkRequest &&) = default ;
    GenericSearchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenericSearchShrinkRequest() = default ;
    GenericSearchShrinkRequest& operator=(const GenericSearchShrinkRequest &) = default ;
    GenericSearchShrinkRequest& operator=(GenericSearchShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedParamsShrink_ == nullptr
        && return this->enableRerank_ == nullptr && return this->industry_ == nullptr && return this->page_ == nullptr && return this->query_ == nullptr && return this->returnMainText_ == nullptr
        && return this->returnMarkdownText_ == nullptr && return this->returnRichMainBody_ == nullptr && return this->returnSummary_ == nullptr && return this->sessionId_ == nullptr && return this->timeRange_ == nullptr; };
    // advancedParamsShrink Field Functions 
    bool hasAdvancedParamsShrink() const { return this->advancedParamsShrink_ != nullptr;};
    void deleteAdvancedParamsShrink() { this->advancedParamsShrink_ = nullptr;};
    inline string advancedParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(advancedParamsShrink_, "") };
    inline GenericSearchShrinkRequest& setAdvancedParamsShrink(string advancedParamsShrink) { DARABONBA_PTR_SET_VALUE(advancedParamsShrink_, advancedParamsShrink) };


    // enableRerank Field Functions 
    bool hasEnableRerank() const { return this->enableRerank_ != nullptr;};
    void deleteEnableRerank() { this->enableRerank_ = nullptr;};
    inline bool enableRerank() const { DARABONBA_PTR_GET_DEFAULT(enableRerank_, false) };
    inline GenericSearchShrinkRequest& setEnableRerank(bool enableRerank) { DARABONBA_PTR_SET_VALUE(enableRerank_, enableRerank) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string industry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline GenericSearchShrinkRequest& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GenericSearchShrinkRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline GenericSearchShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // returnMainText Field Functions 
    bool hasReturnMainText() const { return this->returnMainText_ != nullptr;};
    void deleteReturnMainText() { this->returnMainText_ = nullptr;};
    inline bool returnMainText() const { DARABONBA_PTR_GET_DEFAULT(returnMainText_, false) };
    inline GenericSearchShrinkRequest& setReturnMainText(bool returnMainText) { DARABONBA_PTR_SET_VALUE(returnMainText_, returnMainText) };


    // returnMarkdownText Field Functions 
    bool hasReturnMarkdownText() const { return this->returnMarkdownText_ != nullptr;};
    void deleteReturnMarkdownText() { this->returnMarkdownText_ = nullptr;};
    inline bool returnMarkdownText() const { DARABONBA_PTR_GET_DEFAULT(returnMarkdownText_, false) };
    inline GenericSearchShrinkRequest& setReturnMarkdownText(bool returnMarkdownText) { DARABONBA_PTR_SET_VALUE(returnMarkdownText_, returnMarkdownText) };


    // returnRichMainBody Field Functions 
    bool hasReturnRichMainBody() const { return this->returnRichMainBody_ != nullptr;};
    void deleteReturnRichMainBody() { this->returnRichMainBody_ = nullptr;};
    inline bool returnRichMainBody() const { DARABONBA_PTR_GET_DEFAULT(returnRichMainBody_, false) };
    inline GenericSearchShrinkRequest& setReturnRichMainBody(bool returnRichMainBody) { DARABONBA_PTR_SET_VALUE(returnRichMainBody_, returnRichMainBody) };


    // returnSummary Field Functions 
    bool hasReturnSummary() const { return this->returnSummary_ != nullptr;};
    void deleteReturnSummary() { this->returnSummary_ = nullptr;};
    inline bool returnSummary() const { DARABONBA_PTR_GET_DEFAULT(returnSummary_, false) };
    inline GenericSearchShrinkRequest& setReturnSummary(bool returnSummary) { DARABONBA_PTR_SET_VALUE(returnSummary_, returnSummary) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GenericSearchShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline string timeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
    inline GenericSearchShrinkRequest& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


  protected:
    std::shared_ptr<string> advancedParamsShrink_ = nullptr;
    std::shared_ptr<bool> enableRerank_ = nullptr;
    std::shared_ptr<string> industry_ = nullptr;
    std::shared_ptr<int32_t> page_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<bool> returnMainText_ = nullptr;
    std::shared_ptr<bool> returnMarkdownText_ = nullptr;
    std::shared_ptr<bool> returnRichMainBody_ = nullptr;
    std::shared_ptr<bool> returnSummary_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> timeRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
