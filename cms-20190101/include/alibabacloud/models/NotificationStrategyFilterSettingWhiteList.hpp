// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYFILTERSETTINGWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYFILTERSETTINGWHITELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class NotificationStrategyFilterSettingWhiteList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotificationStrategyFilterSettingWhiteList& obj) { 
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(Op, op_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, NotificationStrategyFilterSettingWhiteList& obj) { 
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(Op, op_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    NotificationStrategyFilterSettingWhiteList() = default ;
    NotificationStrategyFilterSettingWhiteList(const NotificationStrategyFilterSettingWhiteList &) = default ;
    NotificationStrategyFilterSettingWhiteList(NotificationStrategyFilterSettingWhiteList &&) = default ;
    NotificationStrategyFilterSettingWhiteList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotificationStrategyFilterSettingWhiteList() = default ;
    NotificationStrategyFilterSettingWhiteList& operator=(const NotificationStrategyFilterSettingWhiteList &) = default ;
    NotificationStrategyFilterSettingWhiteList& operator=(NotificationStrategyFilterSettingWhiteList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->field_ != nullptr
        && this->op_ != nullptr && this->value_ != nullptr; };
    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline NotificationStrategyFilterSettingWhiteList& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string op() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline NotificationStrategyFilterSettingWhiteList& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline NotificationStrategyFilterSettingWhiteList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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
