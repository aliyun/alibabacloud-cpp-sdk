// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYPUSHINGSETTING_HPP_
#define ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYPUSHINGSETTING_HPP_
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
  class NotificationStrategyPushingSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotificationStrategyPushingSetting& obj) { 
      DARABONBA_PTR_TO_JSON(PushingDataFormat, pushingDataFormat_);
      DARABONBA_PTR_TO_JSON(Range, range_);
      DARABONBA_PTR_TO_JSON(TargetUuids, targetUuids_);
      DARABONBA_PTR_TO_JSON(TemplateUuid, templateUuid_);
    };
    friend void from_json(const Darabonba::Json& j, NotificationStrategyPushingSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(PushingDataFormat, pushingDataFormat_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
      DARABONBA_PTR_FROM_JSON(TargetUuids, targetUuids_);
      DARABONBA_PTR_FROM_JSON(TemplateUuid, templateUuid_);
    };
    NotificationStrategyPushingSetting() = default ;
    NotificationStrategyPushingSetting(const NotificationStrategyPushingSetting &) = default ;
    NotificationStrategyPushingSetting(NotificationStrategyPushingSetting &&) = default ;
    NotificationStrategyPushingSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotificationStrategyPushingSetting() = default ;
    NotificationStrategyPushingSetting& operator=(const NotificationStrategyPushingSetting &) = default ;
    NotificationStrategyPushingSetting& operator=(NotificationStrategyPushingSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pushingDataFormat_ == nullptr
        && return this->range_ == nullptr && return this->targetUuids_ == nullptr && return this->templateUuid_ == nullptr; };
    // pushingDataFormat Field Functions 
    bool hasPushingDataFormat() const { return this->pushingDataFormat_ != nullptr;};
    void deletePushingDataFormat() { this->pushingDataFormat_ = nullptr;};
    inline string pushingDataFormat() const { DARABONBA_PTR_GET_DEFAULT(pushingDataFormat_, "") };
    inline NotificationStrategyPushingSetting& setPushingDataFormat(string pushingDataFormat) { DARABONBA_PTR_SET_VALUE(pushingDataFormat_, pushingDataFormat) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline string range() const { DARABONBA_PTR_GET_DEFAULT(range_, "") };
    inline NotificationStrategyPushingSetting& setRange(string range) { DARABONBA_PTR_SET_VALUE(range_, range) };


    // targetUuids Field Functions 
    bool hasTargetUuids() const { return this->targetUuids_ != nullptr;};
    void deleteTargetUuids() { this->targetUuids_ = nullptr;};
    inline const vector<string> & targetUuids() const { DARABONBA_PTR_GET_CONST(targetUuids_, vector<string>) };
    inline vector<string> targetUuids() { DARABONBA_PTR_GET(targetUuids_, vector<string>) };
    inline NotificationStrategyPushingSetting& setTargetUuids(const vector<string> & targetUuids) { DARABONBA_PTR_SET_VALUE(targetUuids_, targetUuids) };
    inline NotificationStrategyPushingSetting& setTargetUuids(vector<string> && targetUuids) { DARABONBA_PTR_SET_RVALUE(targetUuids_, targetUuids) };


    // templateUuid Field Functions 
    bool hasTemplateUuid() const { return this->templateUuid_ != nullptr;};
    void deleteTemplateUuid() { this->templateUuid_ = nullptr;};
    inline string templateUuid() const { DARABONBA_PTR_GET_DEFAULT(templateUuid_, "") };
    inline NotificationStrategyPushingSetting& setTemplateUuid(string templateUuid) { DARABONBA_PTR_SET_VALUE(templateUuid_, templateUuid) };


  protected:
    std::shared_ptr<string> pushingDataFormat_ = nullptr;
    std::shared_ptr<string> range_ = nullptr;
    std::shared_ptr<vector<string>> targetUuids_ = nullptr;
    std::shared_ptr<string> templateUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
