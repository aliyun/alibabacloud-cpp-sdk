// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYROUTESETTINGROUTESCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYROUTESETTINGROUTESCONDITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class NotificationStrategyRouteSettingRoutesConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotificationStrategyRouteSettingRoutesConditions& obj) { 
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(Op, op_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, NotificationStrategyRouteSettingRoutesConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(Op, op_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    NotificationStrategyRouteSettingRoutesConditions() = default ;
    NotificationStrategyRouteSettingRoutesConditions(const NotificationStrategyRouteSettingRoutesConditions &) = default ;
    NotificationStrategyRouteSettingRoutesConditions(NotificationStrategyRouteSettingRoutesConditions &&) = default ;
    NotificationStrategyRouteSettingRoutesConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotificationStrategyRouteSettingRoutesConditions() = default ;
    NotificationStrategyRouteSettingRoutesConditions& operator=(const NotificationStrategyRouteSettingRoutesConditions &) = default ;
    NotificationStrategyRouteSettingRoutesConditions& operator=(NotificationStrategyRouteSettingRoutesConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->field_ == nullptr
        && return this->op_ == nullptr && return this->value_ == nullptr; };
    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline NotificationStrategyRouteSettingRoutesConditions& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string op() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline NotificationStrategyRouteSettingRoutesConditions& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline NotificationStrategyRouteSettingRoutesConditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> field_ = nullptr;
    std::shared_ptr<string> op_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
