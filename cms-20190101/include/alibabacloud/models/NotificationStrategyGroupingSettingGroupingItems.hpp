// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYGROUPINGSETTINGGROUPINGITEMS_HPP_
#define ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYGROUPINGSETTINGGROUPINGITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class NotificationStrategyGroupingSettingGroupingItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotificationStrategyGroupingSettingGroupingItems& obj) { 
      DARABONBA_PTR_TO_JSON(Keys, keys_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, NotificationStrategyGroupingSettingGroupingItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    NotificationStrategyGroupingSettingGroupingItems() = default ;
    NotificationStrategyGroupingSettingGroupingItems(const NotificationStrategyGroupingSettingGroupingItems &) = default ;
    NotificationStrategyGroupingSettingGroupingItems(NotificationStrategyGroupingSettingGroupingItems &&) = default ;
    NotificationStrategyGroupingSettingGroupingItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotificationStrategyGroupingSettingGroupingItems() = default ;
    NotificationStrategyGroupingSettingGroupingItems& operator=(const NotificationStrategyGroupingSettingGroupingItems &) = default ;
    NotificationStrategyGroupingSettingGroupingItems& operator=(NotificationStrategyGroupingSettingGroupingItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keys_ == nullptr
        && return this->type_ == nullptr; };
    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const vector<string> & keys() const { DARABONBA_PTR_GET_CONST(keys_, vector<string>) };
    inline vector<string> keys() { DARABONBA_PTR_GET(keys_, vector<string>) };
    inline NotificationStrategyGroupingSettingGroupingItems& setKeys(const vector<string> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline NotificationStrategyGroupingSettingGroupingItems& setKeys(vector<string> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline NotificationStrategyGroupingSettingGroupingItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<string>> keys_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
