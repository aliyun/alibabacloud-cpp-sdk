// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERALARMCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERALARMCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyUserAlarmConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserAlarmConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmConfig, alarmConfig_);
      DARABONBA_PTR_TO_JSON(AlarmLang, alarmLang_);
      DARABONBA_PTR_TO_JSON(ContactConfig, contactConfigShrink_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(UseDefaultContact, useDefaultContact_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserAlarmConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmConfig, alarmConfig_);
      DARABONBA_PTR_FROM_JSON(AlarmLang, alarmLang_);
      DARABONBA_PTR_FROM_JSON(ContactConfig, contactConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(UseDefaultContact, useDefaultContact_);
    };
    ModifyUserAlarmConfigShrinkRequest() = default ;
    ModifyUserAlarmConfigShrinkRequest(const ModifyUserAlarmConfigShrinkRequest &) = default ;
    ModifyUserAlarmConfigShrinkRequest(ModifyUserAlarmConfigShrinkRequest &&) = default ;
    ModifyUserAlarmConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserAlarmConfigShrinkRequest() = default ;
    ModifyUserAlarmConfigShrinkRequest& operator=(const ModifyUserAlarmConfigShrinkRequest &) = default ;
    ModifyUserAlarmConfigShrinkRequest& operator=(ModifyUserAlarmConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlarmConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlarmConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmHour, alarmHour_);
        DARABONBA_PTR_TO_JSON(AlarmNotify, alarmNotify_);
        DARABONBA_PTR_TO_JSON(AlarmPeriod, alarmPeriod_);
        DARABONBA_PTR_TO_JSON(AlarmType, alarmType_);
        DARABONBA_PTR_TO_JSON(AlarmValue, alarmValue_);
        DARABONBA_PTR_TO_JSON(AlarmWeekDay, alarmWeekDay_);
      };
      friend void from_json(const Darabonba::Json& j, AlarmConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmHour, alarmHour_);
        DARABONBA_PTR_FROM_JSON(AlarmNotify, alarmNotify_);
        DARABONBA_PTR_FROM_JSON(AlarmPeriod, alarmPeriod_);
        DARABONBA_PTR_FROM_JSON(AlarmType, alarmType_);
        DARABONBA_PTR_FROM_JSON(AlarmValue, alarmValue_);
        DARABONBA_PTR_FROM_JSON(AlarmWeekDay, alarmWeekDay_);
      };
      AlarmConfig() = default ;
      AlarmConfig(const AlarmConfig &) = default ;
      AlarmConfig(AlarmConfig &&) = default ;
      AlarmConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlarmConfig() = default ;
      AlarmConfig& operator=(const AlarmConfig &) = default ;
      AlarmConfig& operator=(AlarmConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmHour_ == nullptr
        && this->alarmNotify_ == nullptr && this->alarmPeriod_ == nullptr && this->alarmType_ == nullptr && this->alarmValue_ == nullptr && this->alarmWeekDay_ == nullptr; };
      // alarmHour Field Functions 
      bool hasAlarmHour() const { return this->alarmHour_ != nullptr;};
      void deleteAlarmHour() { this->alarmHour_ = nullptr;};
      inline string getAlarmHour() const { DARABONBA_PTR_GET_DEFAULT(alarmHour_, "") };
      inline AlarmConfig& setAlarmHour(string alarmHour) { DARABONBA_PTR_SET_VALUE(alarmHour_, alarmHour) };


      // alarmNotify Field Functions 
      bool hasAlarmNotify() const { return this->alarmNotify_ != nullptr;};
      void deleteAlarmNotify() { this->alarmNotify_ = nullptr;};
      inline string getAlarmNotify() const { DARABONBA_PTR_GET_DEFAULT(alarmNotify_, "") };
      inline AlarmConfig& setAlarmNotify(string alarmNotify) { DARABONBA_PTR_SET_VALUE(alarmNotify_, alarmNotify) };


      // alarmPeriod Field Functions 
      bool hasAlarmPeriod() const { return this->alarmPeriod_ != nullptr;};
      void deleteAlarmPeriod() { this->alarmPeriod_ = nullptr;};
      inline string getAlarmPeriod() const { DARABONBA_PTR_GET_DEFAULT(alarmPeriod_, "") };
      inline AlarmConfig& setAlarmPeriod(string alarmPeriod) { DARABONBA_PTR_SET_VALUE(alarmPeriod_, alarmPeriod) };


      // alarmType Field Functions 
      bool hasAlarmType() const { return this->alarmType_ != nullptr;};
      void deleteAlarmType() { this->alarmType_ = nullptr;};
      inline string getAlarmType() const { DARABONBA_PTR_GET_DEFAULT(alarmType_, "") };
      inline AlarmConfig& setAlarmType(string alarmType) { DARABONBA_PTR_SET_VALUE(alarmType_, alarmType) };


      // alarmValue Field Functions 
      bool hasAlarmValue() const { return this->alarmValue_ != nullptr;};
      void deleteAlarmValue() { this->alarmValue_ = nullptr;};
      inline string getAlarmValue() const { DARABONBA_PTR_GET_DEFAULT(alarmValue_, "") };
      inline AlarmConfig& setAlarmValue(string alarmValue) { DARABONBA_PTR_SET_VALUE(alarmValue_, alarmValue) };


      // alarmWeekDay Field Functions 
      bool hasAlarmWeekDay() const { return this->alarmWeekDay_ != nullptr;};
      void deleteAlarmWeekDay() { this->alarmWeekDay_ = nullptr;};
      inline string getAlarmWeekDay() const { DARABONBA_PTR_GET_DEFAULT(alarmWeekDay_, "") };
      inline AlarmConfig& setAlarmWeekDay(string alarmWeekDay) { DARABONBA_PTR_SET_VALUE(alarmWeekDay_, alarmWeekDay) };


    protected:
      // Hour for alert notifications.
      shared_ptr<string> alarmHour_ {};
      // Notification method.
      shared_ptr<string> alarmNotify_ {};
      // Alert period.
      shared_ptr<string> alarmPeriod_ {};
      // Alarm metric.
      shared_ptr<string> alarmType_ {};
      // Alert notification message.
      shared_ptr<string> alarmValue_ {};
      // Day of the week for alert notifications.
      shared_ptr<string> alarmWeekDay_ {};
    };

    virtual bool empty() const override { return this->alarmConfig_ == nullptr
        && this->alarmLang_ == nullptr && this->contactConfigShrink_ == nullptr && this->lang_ == nullptr && this->sourceIp_ == nullptr && this->useDefaultContact_ == nullptr; };
    // alarmConfig Field Functions 
    bool hasAlarmConfig() const { return this->alarmConfig_ != nullptr;};
    void deleteAlarmConfig() { this->alarmConfig_ = nullptr;};
    inline const vector<ModifyUserAlarmConfigShrinkRequest::AlarmConfig> & getAlarmConfig() const { DARABONBA_PTR_GET_CONST(alarmConfig_, vector<ModifyUserAlarmConfigShrinkRequest::AlarmConfig>) };
    inline vector<ModifyUserAlarmConfigShrinkRequest::AlarmConfig> getAlarmConfig() { DARABONBA_PTR_GET(alarmConfig_, vector<ModifyUserAlarmConfigShrinkRequest::AlarmConfig>) };
    inline ModifyUserAlarmConfigShrinkRequest& setAlarmConfig(const vector<ModifyUserAlarmConfigShrinkRequest::AlarmConfig> & alarmConfig) { DARABONBA_PTR_SET_VALUE(alarmConfig_, alarmConfig) };
    inline ModifyUserAlarmConfigShrinkRequest& setAlarmConfig(vector<ModifyUserAlarmConfigShrinkRequest::AlarmConfig> && alarmConfig) { DARABONBA_PTR_SET_RVALUE(alarmConfig_, alarmConfig) };


    // alarmLang Field Functions 
    bool hasAlarmLang() const { return this->alarmLang_ != nullptr;};
    void deleteAlarmLang() { this->alarmLang_ = nullptr;};
    inline string getAlarmLang() const { DARABONBA_PTR_GET_DEFAULT(alarmLang_, "") };
    inline ModifyUserAlarmConfigShrinkRequest& setAlarmLang(string alarmLang) { DARABONBA_PTR_SET_VALUE(alarmLang_, alarmLang) };


    // contactConfigShrink Field Functions 
    bool hasContactConfigShrink() const { return this->contactConfigShrink_ != nullptr;};
    void deleteContactConfigShrink() { this->contactConfigShrink_ = nullptr;};
    inline string getContactConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(contactConfigShrink_, "") };
    inline ModifyUserAlarmConfigShrinkRequest& setContactConfigShrink(string contactConfigShrink) { DARABONBA_PTR_SET_VALUE(contactConfigShrink_, contactConfigShrink) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyUserAlarmConfigShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyUserAlarmConfigShrinkRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // useDefaultContact Field Functions 
    bool hasUseDefaultContact() const { return this->useDefaultContact_ != nullptr;};
    void deleteUseDefaultContact() { this->useDefaultContact_ = nullptr;};
    inline int32_t getUseDefaultContact() const { DARABONBA_PTR_GET_DEFAULT(useDefaultContact_, 0) };
    inline ModifyUserAlarmConfigShrinkRequest& setUseDefaultContact(int32_t useDefaultContact) { DARABONBA_PTR_SET_VALUE(useDefaultContact_, useDefaultContact) };


  protected:
    // Alert configuration.
    // 
    // This parameter is required.
    shared_ptr<vector<ModifyUserAlarmConfigShrinkRequest::AlarmConfig>> alarmConfig_ {};
    // Language for message notifications.
    shared_ptr<string> alarmLang_ {};
    // Contact configuration.
    shared_ptr<string> contactConfigShrink_ {};
    // Language used for requests and responses.
    shared_ptr<string> lang_ {};
    // Source IP address of the requester.
    shared_ptr<string> sourceIp_ {};
    // Use default contact method.
    shared_ptr<int32_t> useDefaultContact_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
