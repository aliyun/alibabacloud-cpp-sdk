// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYESCALATIONSETTING_HPP_
#define ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYESCALATIONSETTING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NotificationStrategyEscalationSettingCustomChannels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class NotificationStrategyEscalationSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotificationStrategyEscalationSetting& obj) { 
      DARABONBA_PTR_TO_JSON(AutoResolveMin, autoResolveMin_);
      DARABONBA_PTR_TO_JSON(CustomChannels, customChannels_);
      DARABONBA_PTR_TO_JSON(EscalationLevel, escalationLevel_);
      DARABONBA_PTR_TO_JSON(EscalationUuid, escalationUuid_);
      DARABONBA_PTR_TO_JSON(Range, range_);
      DARABONBA_PTR_TO_JSON(RetriggerMin, retriggerMin_);
    };
    friend void from_json(const Darabonba::Json& j, NotificationStrategyEscalationSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoResolveMin, autoResolveMin_);
      DARABONBA_PTR_FROM_JSON(CustomChannels, customChannels_);
      DARABONBA_PTR_FROM_JSON(EscalationLevel, escalationLevel_);
      DARABONBA_PTR_FROM_JSON(EscalationUuid, escalationUuid_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
      DARABONBA_PTR_FROM_JSON(RetriggerMin, retriggerMin_);
    };
    NotificationStrategyEscalationSetting() = default ;
    NotificationStrategyEscalationSetting(const NotificationStrategyEscalationSetting &) = default ;
    NotificationStrategyEscalationSetting(NotificationStrategyEscalationSetting &&) = default ;
    NotificationStrategyEscalationSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotificationStrategyEscalationSetting() = default ;
    NotificationStrategyEscalationSetting& operator=(const NotificationStrategyEscalationSetting &) = default ;
    NotificationStrategyEscalationSetting& operator=(NotificationStrategyEscalationSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoResolveMin_ != nullptr
        && this->customChannels_ != nullptr && this->escalationLevel_ != nullptr && this->escalationUuid_ != nullptr && this->range_ != nullptr && this->retriggerMin_ != nullptr; };
    // autoResolveMin Field Functions 
    bool hasAutoResolveMin() const { return this->autoResolveMin_ != nullptr;};
    void deleteAutoResolveMin() { this->autoResolveMin_ = nullptr;};
    inline int64_t autoResolveMin() const { DARABONBA_PTR_GET_DEFAULT(autoResolveMin_, 0L) };
    inline NotificationStrategyEscalationSetting& setAutoResolveMin(int64_t autoResolveMin) { DARABONBA_PTR_SET_VALUE(autoResolveMin_, autoResolveMin) };


    // customChannels Field Functions 
    bool hasCustomChannels() const { return this->customChannels_ != nullptr;};
    void deleteCustomChannels() { this->customChannels_ = nullptr;};
    inline const vector<Models::NotificationStrategyEscalationSettingCustomChannels> & customChannels() const { DARABONBA_PTR_GET_CONST(customChannels_, vector<Models::NotificationStrategyEscalationSettingCustomChannels>) };
    inline vector<Models::NotificationStrategyEscalationSettingCustomChannels> customChannels() { DARABONBA_PTR_GET(customChannels_, vector<Models::NotificationStrategyEscalationSettingCustomChannels>) };
    inline NotificationStrategyEscalationSetting& setCustomChannels(const vector<Models::NotificationStrategyEscalationSettingCustomChannels> & customChannels) { DARABONBA_PTR_SET_VALUE(customChannels_, customChannels) };
    inline NotificationStrategyEscalationSetting& setCustomChannels(vector<Models::NotificationStrategyEscalationSettingCustomChannels> && customChannels) { DARABONBA_PTR_SET_RVALUE(customChannels_, customChannels) };


    // escalationLevel Field Functions 
    bool hasEscalationLevel() const { return this->escalationLevel_ != nullptr;};
    void deleteEscalationLevel() { this->escalationLevel_ = nullptr;};
    inline string escalationLevel() const { DARABONBA_PTR_GET_DEFAULT(escalationLevel_, "") };
    inline NotificationStrategyEscalationSetting& setEscalationLevel(string escalationLevel) { DARABONBA_PTR_SET_VALUE(escalationLevel_, escalationLevel) };


    // escalationUuid Field Functions 
    bool hasEscalationUuid() const { return this->escalationUuid_ != nullptr;};
    void deleteEscalationUuid() { this->escalationUuid_ = nullptr;};
    inline string escalationUuid() const { DARABONBA_PTR_GET_DEFAULT(escalationUuid_, "") };
    inline NotificationStrategyEscalationSetting& setEscalationUuid(string escalationUuid) { DARABONBA_PTR_SET_VALUE(escalationUuid_, escalationUuid) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline string range() const { DARABONBA_PTR_GET_DEFAULT(range_, "") };
    inline NotificationStrategyEscalationSetting& setRange(string range) { DARABONBA_PTR_SET_VALUE(range_, range) };


    // retriggerMin Field Functions 
    bool hasRetriggerMin() const { return this->retriggerMin_ != nullptr;};
    void deleteRetriggerMin() { this->retriggerMin_ = nullptr;};
    inline int64_t retriggerMin() const { DARABONBA_PTR_GET_DEFAULT(retriggerMin_, 0L) };
    inline NotificationStrategyEscalationSetting& setRetriggerMin(int64_t retriggerMin) { DARABONBA_PTR_SET_VALUE(retriggerMin_, retriggerMin) };


  protected:
    std::shared_ptr<int64_t> autoResolveMin_ = nullptr;
    std::shared_ptr<vector<Models::NotificationStrategyEscalationSettingCustomChannels>> customChannels_ = nullptr;
    std::shared_ptr<string> escalationLevel_ = nullptr;
    std::shared_ptr<string> escalationUuid_ = nullptr;
    std::shared_ptr<string> range_ = nullptr;
    std::shared_ptr<int64_t> retriggerMin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
