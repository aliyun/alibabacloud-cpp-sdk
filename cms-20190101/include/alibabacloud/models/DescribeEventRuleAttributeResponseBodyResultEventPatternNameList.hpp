// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULEATTRIBUTERESPONSEBODYRESULTEVENTPATTERNNAMELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULEATTRIBUTERESPONSEBODYRESULTEVENTPATTERNNAMELIST_HPP_
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
  class DescribeEventRuleAttributeResponseBodyResultEventPatternNameList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleAttributeResponseBodyResultEventPatternNameList& obj) { 
      DARABONBA_PTR_TO_JSON(NameList, nameList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleAttributeResponseBodyResultEventPatternNameList& obj) { 
      DARABONBA_PTR_FROM_JSON(NameList, nameList_);
    };
    DescribeEventRuleAttributeResponseBodyResultEventPatternNameList() = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternNameList(const DescribeEventRuleAttributeResponseBodyResultEventPatternNameList &) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternNameList(DescribeEventRuleAttributeResponseBodyResultEventPatternNameList &&) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleAttributeResponseBodyResultEventPatternNameList() = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternNameList& operator=(const DescribeEventRuleAttributeResponseBodyResultEventPatternNameList &) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternNameList& operator=(DescribeEventRuleAttributeResponseBodyResultEventPatternNameList &&) = default ;
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
    inline DescribeEventRuleAttributeResponseBodyResultEventPatternNameList& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPatternNameList& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


  protected:
    std::shared_ptr<vector<string>> nameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
