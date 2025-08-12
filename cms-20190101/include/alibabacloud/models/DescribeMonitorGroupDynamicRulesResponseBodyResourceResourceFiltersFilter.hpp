// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPDYNAMICRULESRESPONSEBODYRESOURCERESOURCEFILTERSFILTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPDYNAMICRULESRESPONSEBODYRESOURCERESOURCEFILTERSFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Function, function_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Function, function_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter() = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter(const DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter &) = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter(DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter &&) = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter() = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter& operator=(const DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter &) = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter& operator=(DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->function_ != nullptr
        && this->name_ != nullptr && this->value_ != nullptr; };
    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline string function() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
    inline DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The method that is used to filter the instances. Valid values:
    // 
    // *   contains: contains
    // *   startWith: starts with a prefix
    // *   endWith: ends with a suffix
    std::shared_ptr<string> function_ = nullptr;
    // The instance name.
    std::shared_ptr<string> name_ = nullptr;
    // The value of the dynamic rule.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
