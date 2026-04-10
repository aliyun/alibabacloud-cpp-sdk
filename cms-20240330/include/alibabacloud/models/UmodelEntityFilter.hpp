// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UMODELENTITYFILTER_HPP_
#define ALIBABACLOUD_MODELS_UMODELENTITYFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UmodelEntityFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UmodelEntityFilter& obj) { 
      DARABONBA_PTR_TO_JSON(field, field_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UmodelEntityFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(field, field_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    UmodelEntityFilter() = default ;
    UmodelEntityFilter(const UmodelEntityFilter &) = default ;
    UmodelEntityFilter(UmodelEntityFilter &&) = default ;
    UmodelEntityFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UmodelEntityFilter() = default ;
    UmodelEntityFilter& operator=(const UmodelEntityFilter &) = default ;
    UmodelEntityFilter& operator=(UmodelEntityFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->field_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline UmodelEntityFilter& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline UmodelEntityFilter& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UmodelEntityFilter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // 过滤字段名
    shared_ptr<string> field_ {};
    // 过滤操作符，仅支持 = 或 !=
    shared_ptr<string> operator_ {};
    // 过滤值
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
