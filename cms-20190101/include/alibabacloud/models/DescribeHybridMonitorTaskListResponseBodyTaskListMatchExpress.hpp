// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORTASKLISTRESPONSEBODYTASKLISTMATCHEXPRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORTASKLISTRESPONSEBODYTASKLISTMATCHEXPRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress& obj) { 
      DARABONBA_PTR_TO_JSON(Function, function_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress& obj) { 
      DARABONBA_PTR_FROM_JSON(Function, function_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress() = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress(const DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress &) = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress(DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress &&) = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress() = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress& operator=(const DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress &) = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress& operator=(DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress &&) = default ;
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
    inline DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The method that is used to match the instance name. Valid values:
    // 
    // *   startWith: starts with a prefix
    // *   endWith: ends with a suffix
    // *   all: matches all
    // *   equals: equals
    // *   contains: contains
    // *   notContains: does not contain
    std::shared_ptr<string> function_ = nullptr;
    // The instance name.
    std::shared_ptr<string> name_ = nullptr;
    // The keyword that corresponds to the instance name.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
