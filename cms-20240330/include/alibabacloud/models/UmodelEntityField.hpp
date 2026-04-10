// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UMODELENTITYFIELD_HPP_
#define ALIBABACLOUD_MODELS_UMODELENTITYFIELD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UmodelEntityField : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UmodelEntityField& obj) { 
      DARABONBA_PTR_TO_JSON(field, field_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UmodelEntityField& obj) { 
      DARABONBA_PTR_FROM_JSON(field, field_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    UmodelEntityField() = default ;
    UmodelEntityField(const UmodelEntityField &) = default ;
    UmodelEntityField(UmodelEntityField &&) = default ;
    UmodelEntityField(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UmodelEntityField() = default ;
    UmodelEntityField& operator=(const UmodelEntityField &) = default ;
    UmodelEntityField& operator=(UmodelEntityField &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->field_ == nullptr
        && this->value_ == nullptr; };
    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline UmodelEntityField& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UmodelEntityField& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // 实体字段名
    shared_ptr<string> field_ {};
    // 字段别名或展示值
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
