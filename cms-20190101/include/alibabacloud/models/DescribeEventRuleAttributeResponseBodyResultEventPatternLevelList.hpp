// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULEATTRIBUTERESPONSEBODYRESULTEVENTPATTERNLEVELLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULEATTRIBUTERESPONSEBODYRESULTEVENTPATTERNLEVELLIST_HPP_
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
  class DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList& obj) { 
      DARABONBA_PTR_TO_JSON(LevelList, levelList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList& obj) { 
      DARABONBA_PTR_FROM_JSON(LevelList, levelList_);
    };
    DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList() = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList(const DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList &) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList(DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList &&) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList() = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList& operator=(const DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList &) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList& operator=(DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->levelList_ != nullptr; };
    // levelList Field Functions 
    bool hasLevelList() const { return this->levelList_ != nullptr;};
    void deleteLevelList() { this->levelList_ = nullptr;};
    inline const vector<string> & levelList() const { DARABONBA_PTR_GET_CONST(levelList_, vector<string>) };
    inline vector<string> levelList() { DARABONBA_PTR_GET(levelList_, vector<string>) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList& setLevelList(const vector<string> & levelList) { DARABONBA_PTR_SET_VALUE(levelList_, levelList) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList& setLevelList(vector<string> && levelList) { DARABONBA_PTR_SET_RVALUE(levelList_, levelList) };


  protected:
    std::shared_ptr<vector<string>> levelList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
