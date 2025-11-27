// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONSCHEMARESPONSEBODYFIELDSCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_GETADDONSCHEMARESPONSEBODYFIELDSCONDITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAddonSchemaResponseBodyFieldsConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonSchemaResponseBodyFieldsConditions& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(field, field_);
      DARABONBA_PTR_TO_JSON(op, op_);
      DARABONBA_ANY_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonSchemaResponseBodyFieldsConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(field, field_);
      DARABONBA_PTR_FROM_JSON(op, op_);
      DARABONBA_ANY_FROM_JSON(value, value_);
    };
    GetAddonSchemaResponseBodyFieldsConditions() = default ;
    GetAddonSchemaResponseBodyFieldsConditions(const GetAddonSchemaResponseBodyFieldsConditions &) = default ;
    GetAddonSchemaResponseBodyFieldsConditions(GetAddonSchemaResponseBodyFieldsConditions &&) = default ;
    GetAddonSchemaResponseBodyFieldsConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonSchemaResponseBodyFieldsConditions() = default ;
    GetAddonSchemaResponseBodyFieldsConditions& operator=(const GetAddonSchemaResponseBodyFieldsConditions &) = default ;
    GetAddonSchemaResponseBodyFieldsConditions& operator=(GetAddonSchemaResponseBodyFieldsConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->field_ == nullptr && return this->op_ == nullptr && return this->value_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetAddonSchemaResponseBodyFieldsConditions& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline GetAddonSchemaResponseBodyFieldsConditions& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string op() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline GetAddonSchemaResponseBodyFieldsConditions& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline GetAddonSchemaResponseBodyFieldsConditions& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline GetAddonSchemaResponseBodyFieldsConditions& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> field_ = nullptr;
    std::shared_ptr<string> op_ = nullptr;
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
