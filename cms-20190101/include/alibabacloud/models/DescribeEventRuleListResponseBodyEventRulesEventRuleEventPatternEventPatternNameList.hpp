// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULELISTRESPONSEBODYEVENTRULESEVENTRULEEVENTPATTERNEVENTPATTERNNAMELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULELISTRESPONSEBODYEVENTRULESEVENTRULEEVENTPATTERNEVENTPATTERNNAMELIST_HPP_
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
  class DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList& obj) { 
      DARABONBA_PTR_TO_JSON(NameList, nameList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList& obj) { 
      DARABONBA_PTR_FROM_JSON(NameList, nameList_);
    };
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList() = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList(const DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList &) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList(DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList &&) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList() = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList& operator=(const DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList &) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList& operator=(DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nameList_ != nullptr; };
    // nameList Field Functions 
    bool hasNameList() const { return this->nameList_ != nullptr;};
    void deleteNameList() { this->nameList_ = nullptr;};
    inline const vector<string> & nameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
    inline vector<string> nameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


  protected:
    std::shared_ptr<vector<string>> nameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
