// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULEATTRIBUTERESPONSEBODYRESULTEVENTPATTERNKEYWORDFILTEROBJKEYWORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULEATTRIBUTERESPONSEBODYRESULTEVENTPATTERNKEYWORDFILTEROBJKEYWORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords& obj) { 
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords& obj) { 
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
    };
    DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords() = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords(const DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords &) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords(DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords &&) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords() = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords& operator=(const DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords &) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords& operator=(DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline const vector<string> & keyword() const { DARABONBA_PTR_GET_CONST(keyword_, vector<string>) };
    inline vector<string> keyword() { DARABONBA_PTR_GET(keyword_, vector<string>) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords& setKeyword(const vector<string> & keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObjKeywords& setKeyword(vector<string> && keyword) { DARABONBA_PTR_SET_RVALUE(keyword_, keyword) };


  protected:
    std::shared_ptr<vector<string>> keyword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
