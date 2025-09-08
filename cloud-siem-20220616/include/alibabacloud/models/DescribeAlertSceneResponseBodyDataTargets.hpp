// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTSCENERESPONSEBODYDATATARGETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTSCENERESPONSEBODYDATATARGETS_HPP_
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
  class DescribeAlertSceneResponseBodyDataTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertSceneResponseBodyDataTargets& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertSceneResponseBodyDataTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeAlertSceneResponseBodyDataTargets() = default ;
    DescribeAlertSceneResponseBodyDataTargets(const DescribeAlertSceneResponseBodyDataTargets &) = default ;
    DescribeAlertSceneResponseBodyDataTargets(DescribeAlertSceneResponseBodyDataTargets &&) = default ;
    DescribeAlertSceneResponseBodyDataTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertSceneResponseBodyDataTargets() = default ;
    DescribeAlertSceneResponseBodyDataTargets& operator=(const DescribeAlertSceneResponseBodyDataTargets &) = default ;
    DescribeAlertSceneResponseBodyDataTargets& operator=(DescribeAlertSceneResponseBodyDataTargets &&) = default ;
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
    inline DescribeAlertSceneResponseBodyDataTargets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAlertSceneResponseBodyDataTargets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeAlertSceneResponseBodyDataTargets& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline DescribeAlertSceneResponseBodyDataTargets& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeAlertSceneResponseBodyDataTargets& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The display name of the attribute for the entity.
    std::shared_ptr<string> name_ = nullptr;
    // The attribute of the entity.
    std::shared_ptr<string> type_ = nullptr;
    // The right operand that is displayed by default in the whitelist rule.
    std::shared_ptr<string> value_ = nullptr;
    // The right operands supported by the whitelist rule.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
