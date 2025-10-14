// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULELISTRESPONSEBODYEVENTRULESEVENTRULEEVENTPATTERNEVENTPATTERNKEYWORDFILTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULELISTRESPONSEBODYEVENTRULESEVENTRULEEVENTPATTERNEVENTPATTERNKEYWORDFILTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilterKeywords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(Relation, relation_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(Relation, relation_);
    };
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter() = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter(const DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter &) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter(DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter &&) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter() = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter& operator=(const DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter &) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter& operator=(DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keywords_ == nullptr
        && return this->relation_ == nullptr; };
    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilterKeywords & keywords() const { DARABONBA_PTR_GET_CONST(keywords_, Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilterKeywords) };
    inline Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilterKeywords keywords() { DARABONBA_PTR_GET(keywords_, Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilterKeywords) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter& setKeywords(const Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilterKeywords & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter& setKeywords(Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilterKeywords && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string relation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


  protected:
    // The keywords that are used to match events.
    std::shared_ptr<Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilterKeywords> keywords_ = nullptr;
    // The relationship between multiple keywords in a condition. Valid values:
    // 
    // *   OR: The relationship between keywords is OR.
    // *   NOT: The keyword is excluded. The value NOT indicates that all events that do not contain the keywords are matched.
    std::shared_ptr<string> relation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
