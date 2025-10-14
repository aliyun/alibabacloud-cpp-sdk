// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPMONITORINGAGENTPROCESSREQUESTMATCHEXPRESS_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPMONITORINGAGENTPROCESSREQUESTMATCHEXPRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateGroupMonitoringAgentProcessRequestMatchExpress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupMonitoringAgentProcessRequestMatchExpress& obj) { 
      DARABONBA_PTR_TO_JSON(Function, function_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupMonitoringAgentProcessRequestMatchExpress& obj) { 
      DARABONBA_PTR_FROM_JSON(Function, function_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateGroupMonitoringAgentProcessRequestMatchExpress() = default ;
    CreateGroupMonitoringAgentProcessRequestMatchExpress(const CreateGroupMonitoringAgentProcessRequestMatchExpress &) = default ;
    CreateGroupMonitoringAgentProcessRequestMatchExpress(CreateGroupMonitoringAgentProcessRequestMatchExpress &&) = default ;
    CreateGroupMonitoringAgentProcessRequestMatchExpress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupMonitoringAgentProcessRequestMatchExpress() = default ;
    CreateGroupMonitoringAgentProcessRequestMatchExpress& operator=(const CreateGroupMonitoringAgentProcessRequestMatchExpress &) = default ;
    CreateGroupMonitoringAgentProcessRequestMatchExpress& operator=(CreateGroupMonitoringAgentProcessRequestMatchExpress &&) = default ;
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
    inline CreateGroupMonitoringAgentProcessRequestMatchExpress& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateGroupMonitoringAgentProcessRequestMatchExpress& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateGroupMonitoringAgentProcessRequestMatchExpress& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The matching condition. Valid values:
    // 
    // *   all (default value): matches all
    // *   startWith: starts with a prefix
    // *   endWith: ends with a suffix
    // *   contains: contains
    // *   notContains: does not contain
    // *   equals: equals
    // 
    // Valid values of N: 1 to 3.
    std::shared_ptr<string> function_ = nullptr;
    // The criteria based on which the instances are matched.
    // 
    // Valid values of N: 1 to 3.
    // 
    // > Set the value to name. The value name indicates that the instances are matched based on the instance name.
    std::shared_ptr<string> name_ = nullptr;
    // The keyword used to match the instance name.
    // 
    // Valid values of N: 1 to 3.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
