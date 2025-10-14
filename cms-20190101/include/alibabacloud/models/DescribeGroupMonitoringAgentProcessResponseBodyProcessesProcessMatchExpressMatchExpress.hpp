// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODYPROCESSESPROCESSMATCHEXPRESSMATCHEXPRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODYPROCESSESPROCESSMATCHEXPRESSMATCHEXPRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress& obj) { 
      DARABONBA_PTR_TO_JSON(Function, function_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress& obj) { 
      DARABONBA_PTR_FROM_JSON(Function, function_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress() = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress(const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress(DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress &&) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress() = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress& operator=(const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress& operator=(DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->function_ == nullptr
        && return this->name_ == nullptr && return this->value_ == nullptr; };
    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline string function() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The matching condition. Valid values:
    // 
    // *   all (default): matches all
    // *   startWith: starts with a prefix
    // *   endWith: ends with a suffix
    // *   contains: contains
    // *   notContains: excludes
    // *   equals: equals
    // 
    // >  The matched instances are monitored by the process monitoring task.
    std::shared_ptr<string> function_ = nullptr;
    // The criteria based on which the instances are matched.
    // 
    // >  Set the value to `name`. The value name indicates that the instances are matched based on the instance name.
    std::shared_ptr<string> name_ = nullptr;
    // The keyword used to match the instance name.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
