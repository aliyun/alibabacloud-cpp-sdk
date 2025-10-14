// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYFILTERSETTINGBLACKLIST_HPP_
#define ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYFILTERSETTINGBLACKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class NotificationStrategyFilterSettingBlackList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotificationStrategyFilterSettingBlackList& obj) { 
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(Op, op_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, NotificationStrategyFilterSettingBlackList& obj) { 
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(Op, op_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    NotificationStrategyFilterSettingBlackList() = default ;
    NotificationStrategyFilterSettingBlackList(const NotificationStrategyFilterSettingBlackList &) = default ;
    NotificationStrategyFilterSettingBlackList(NotificationStrategyFilterSettingBlackList &&) = default ;
    NotificationStrategyFilterSettingBlackList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotificationStrategyFilterSettingBlackList() = default ;
    NotificationStrategyFilterSettingBlackList& operator=(const NotificationStrategyFilterSettingBlackList &) = default ;
    NotificationStrategyFilterSettingBlackList& operator=(NotificationStrategyFilterSettingBlackList &&) = default ;
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
    inline NotificationStrategyFilterSettingBlackList& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string op() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline NotificationStrategyFilterSettingBlackList& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline NotificationStrategyFilterSettingBlackList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> field_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> op_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
