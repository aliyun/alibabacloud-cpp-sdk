// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LABELFILTERS_HPP_
#define ALIBABACLOUD_MODELS_LABELFILTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class LabelFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LabelFilters& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, LabelFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    LabelFilters() = default ;
    LabelFilters(const LabelFilters &) = default ;
    LabelFilters(LabelFilters &&) = default ;
    LabelFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LabelFilters() = default ;
    LabelFilters& operator=(const LabelFilters &) = default ;
    LabelFilters& operator=(LabelFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline LabelFilters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline LabelFilters& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline LabelFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<string> name_ {};
    shared_ptr<string> operator_ {};
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
