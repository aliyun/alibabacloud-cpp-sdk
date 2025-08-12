// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULEATTRIBUTERESPONSEBODYRESULTEVENTPATTERNSTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULEATTRIBUTERESPONSEBODYRESULTEVENTPATTERNSTATUSLIST_HPP_
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
  class DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
    };
    DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList() = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList(const DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList &) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList(DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList &&) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList() = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList& operator=(const DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList &) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList& operator=(DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->statusList_ != nullptr; };
    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> statusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


  protected:
    std::shared_ptr<vector<string>> statusList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
