// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEALERTNOTIFICATION_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEALERTNOTIFICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceAlertNotification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceAlertNotification& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isArms, isArms_);
      DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sendReminder, sendReminder_);
      DARABONBA_PTR_TO_JSON(settings, settings_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceAlertNotification& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isArms, isArms_);
      DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sendReminder, sendReminder_);
      DARABONBA_PTR_FROM_JSON(settings, settings_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
    };
    GrafanaWorkspaceAlertNotification() = default ;
    GrafanaWorkspaceAlertNotification(const GrafanaWorkspaceAlertNotification &) = default ;
    GrafanaWorkspaceAlertNotification(GrafanaWorkspaceAlertNotification &&) = default ;
    GrafanaWorkspaceAlertNotification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceAlertNotification() = default ;
    GrafanaWorkspaceAlertNotification& operator=(const GrafanaWorkspaceAlertNotification &) = default ;
    GrafanaWorkspaceAlertNotification& operator=(GrafanaWorkspaceAlertNotification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->isArms_ != nullptr && this->isDefault_ != nullptr && this->name_ != nullptr && this->sendReminder_ != nullptr && this->settings_ != nullptr
        && this->type_ != nullptr && this->uid_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GrafanaWorkspaceAlertNotification& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isArms Field Functions 
    bool hasIsArms() const { return this->isArms_ != nullptr;};
    void deleteIsArms() { this->isArms_ = nullptr;};
    inline bool isArms() const { DARABONBA_PTR_GET_DEFAULT(isArms_, false) };
    inline GrafanaWorkspaceAlertNotification& setIsArms(bool isArms) { DARABONBA_PTR_SET_VALUE(isArms_, isArms) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline GrafanaWorkspaceAlertNotification& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GrafanaWorkspaceAlertNotification& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sendReminder Field Functions 
    bool hasSendReminder() const { return this->sendReminder_ != nullptr;};
    void deleteSendReminder() { this->sendReminder_ = nullptr;};
    inline bool sendReminder() const { DARABONBA_PTR_GET_DEFAULT(sendReminder_, false) };
    inline GrafanaWorkspaceAlertNotification& setSendReminder(bool sendReminder) { DARABONBA_PTR_SET_VALUE(sendReminder_, sendReminder) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline string settings() const { DARABONBA_PTR_GET_DEFAULT(settings_, "") };
    inline GrafanaWorkspaceAlertNotification& setSettings(string settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GrafanaWorkspaceAlertNotification& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GrafanaWorkspaceAlertNotification& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<bool> isArms_ = nullptr;
    std::shared_ptr<bool> isDefault_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> sendReminder_ = nullptr;
    std::shared_ptr<string> settings_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
