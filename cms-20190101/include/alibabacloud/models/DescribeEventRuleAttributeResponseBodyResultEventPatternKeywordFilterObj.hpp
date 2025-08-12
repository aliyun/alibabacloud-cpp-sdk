// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULEATTRIBUTERESPONSEBODYRESULTEVENTPATTERNKEYWORDFILTEROBJ_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULEATTRIBUTERESPONSEBODYRESULTEVENTPATTERNKEYWORDFILTEROBJ_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj& obj) { 
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(Relation, relation_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj& obj) { 
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(Relation, relation_);
    };
    DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj() = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj(const DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj &) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj(DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj &&) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj() = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj& operator=(const DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj &) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj& operator=(DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keywords_ != nullptr
        && this->relation_ != nullptr; };
    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const Models::DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords & keywords() const { DARABONBA_PTR_GET_CONST(keywords_, Models::DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords) };
    inline Models::DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords keywords() { DARABONBA_PTR_GET(keywords_, Models::DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj& setKeywords(const Models::DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj& setKeywords(Models::DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string relation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


  protected:
    // The keywords that are used to match events.
    std::shared_ptr<Models::DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords> keywords_ = nullptr;
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
