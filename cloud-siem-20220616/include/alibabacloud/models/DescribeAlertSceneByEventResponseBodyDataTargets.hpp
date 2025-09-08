// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTSCENEBYEVENTRESPONSEBODYDATATARGETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTSCENEBYEVENTRESPONSEBODYDATATARGETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAlertSceneByEventResponseBodyDataTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertSceneByEventResponseBodyDataTargets& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertSceneByEventResponseBodyDataTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeAlertSceneByEventResponseBodyDataTargets() = default ;
    DescribeAlertSceneByEventResponseBodyDataTargets(const DescribeAlertSceneByEventResponseBodyDataTargets &) = default ;
    DescribeAlertSceneByEventResponseBodyDataTargets(DescribeAlertSceneByEventResponseBodyDataTargets &&) = default ;
    DescribeAlertSceneByEventResponseBodyDataTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertSceneByEventResponseBodyDataTargets() = default ;
    DescribeAlertSceneByEventResponseBodyDataTargets& operator=(const DescribeAlertSceneByEventResponseBodyDataTargets &) = default ;
    DescribeAlertSceneByEventResponseBodyDataTargets& operator=(DescribeAlertSceneByEventResponseBodyDataTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->type_ != nullptr && this->value_ != nullptr && this->values_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAlertSceneByEventResponseBodyDataTargets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAlertSceneByEventResponseBodyDataTargets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeAlertSceneByEventResponseBodyDataTargets& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline DescribeAlertSceneByEventResponseBodyDataTargets& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeAlertSceneByEventResponseBodyDataTargets& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The display name of the entity attribute field that can be added to the whitelist.
    std::shared_ptr<string> name_ = nullptr;
    // The entity attribute field that can be added to the whitelist.
    std::shared_ptr<string> type_ = nullptr;
    // The right operand that is displayed by default in the whitelist rule.
    std::shared_ptr<string> value_ = nullptr;
    // The supported right operands of the whitelist rule.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
