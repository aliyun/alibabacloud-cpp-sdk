// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERALARMCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERALARMCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyUserAlarmConfigRequestAlarmConfig.hpp>
#include <alibabacloud/models/ModifyUserAlarmConfigRequestContactConfig.hpp>
#include <alibabacloud/models/ModifyUserAlarmConfigRequestNotifyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyUserAlarmConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserAlarmConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmConfig, alarmConfig_);
      DARABONBA_PTR_TO_JSON(AlarmLang, alarmLang_);
      DARABONBA_PTR_TO_JSON(ContactConfig, contactConfig_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NotifyConfig, notifyConfig_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(UseDefaultContact, useDefaultContact_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserAlarmConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmConfig, alarmConfig_);
      DARABONBA_PTR_FROM_JSON(AlarmLang, alarmLang_);
      DARABONBA_PTR_FROM_JSON(ContactConfig, contactConfig_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NotifyConfig, notifyConfig_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(UseDefaultContact, useDefaultContact_);
    };
    ModifyUserAlarmConfigRequest() = default ;
    ModifyUserAlarmConfigRequest(const ModifyUserAlarmConfigRequest &) = default ;
    ModifyUserAlarmConfigRequest(ModifyUserAlarmConfigRequest &&) = default ;
    ModifyUserAlarmConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserAlarmConfigRequest() = default ;
    ModifyUserAlarmConfigRequest& operator=(const ModifyUserAlarmConfigRequest &) = default ;
    ModifyUserAlarmConfigRequest& operator=(ModifyUserAlarmConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmConfig_ == nullptr
        && return this->alarmLang_ == nullptr && return this->contactConfig_ == nullptr && return this->lang_ == nullptr && return this->notifyConfig_ == nullptr && return this->sourceIp_ == nullptr
        && return this->useDefaultContact_ == nullptr; };
    // alarmConfig Field Functions 
    bool hasAlarmConfig() const { return this->alarmConfig_ != nullptr;};
    void deleteAlarmConfig() { this->alarmConfig_ = nullptr;};
    inline const vector<ModifyUserAlarmConfigRequestAlarmConfig> & alarmConfig() const { DARABONBA_PTR_GET_CONST(alarmConfig_, vector<ModifyUserAlarmConfigRequestAlarmConfig>) };
    inline vector<ModifyUserAlarmConfigRequestAlarmConfig> alarmConfig() { DARABONBA_PTR_GET(alarmConfig_, vector<ModifyUserAlarmConfigRequestAlarmConfig>) };
    inline ModifyUserAlarmConfigRequest& setAlarmConfig(const vector<ModifyUserAlarmConfigRequestAlarmConfig> & alarmConfig) { DARABONBA_PTR_SET_VALUE(alarmConfig_, alarmConfig) };
    inline ModifyUserAlarmConfigRequest& setAlarmConfig(vector<ModifyUserAlarmConfigRequestAlarmConfig> && alarmConfig) { DARABONBA_PTR_SET_RVALUE(alarmConfig_, alarmConfig) };


    // alarmLang Field Functions 
    bool hasAlarmLang() const { return this->alarmLang_ != nullptr;};
    void deleteAlarmLang() { this->alarmLang_ = nullptr;};
    inline string alarmLang() const { DARABONBA_PTR_GET_DEFAULT(alarmLang_, "") };
    inline ModifyUserAlarmConfigRequest& setAlarmLang(string alarmLang) { DARABONBA_PTR_SET_VALUE(alarmLang_, alarmLang) };


    // contactConfig Field Functions 
    bool hasContactConfig() const { return this->contactConfig_ != nullptr;};
    void deleteContactConfig() { this->contactConfig_ = nullptr;};
    inline const vector<ModifyUserAlarmConfigRequestContactConfig> & contactConfig() const { DARABONBA_PTR_GET_CONST(contactConfig_, vector<ModifyUserAlarmConfigRequestContactConfig>) };
    inline vector<ModifyUserAlarmConfigRequestContactConfig> contactConfig() { DARABONBA_PTR_GET(contactConfig_, vector<ModifyUserAlarmConfigRequestContactConfig>) };
    inline ModifyUserAlarmConfigRequest& setContactConfig(const vector<ModifyUserAlarmConfigRequestContactConfig> & contactConfig) { DARABONBA_PTR_SET_VALUE(contactConfig_, contactConfig) };
    inline ModifyUserAlarmConfigRequest& setContactConfig(vector<ModifyUserAlarmConfigRequestContactConfig> && contactConfig) { DARABONBA_PTR_SET_RVALUE(contactConfig_, contactConfig) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyUserAlarmConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // notifyConfig Field Functions 
    bool hasNotifyConfig() const { return this->notifyConfig_ != nullptr;};
    void deleteNotifyConfig() { this->notifyConfig_ = nullptr;};
    inline const vector<ModifyUserAlarmConfigRequestNotifyConfig> & notifyConfig() const { DARABONBA_PTR_GET_CONST(notifyConfig_, vector<ModifyUserAlarmConfigRequestNotifyConfig>) };
    inline vector<ModifyUserAlarmConfigRequestNotifyConfig> notifyConfig() { DARABONBA_PTR_GET(notifyConfig_, vector<ModifyUserAlarmConfigRequestNotifyConfig>) };
    inline ModifyUserAlarmConfigRequest& setNotifyConfig(const vector<ModifyUserAlarmConfigRequestNotifyConfig> & notifyConfig) { DARABONBA_PTR_SET_VALUE(notifyConfig_, notifyConfig) };
    inline ModifyUserAlarmConfigRequest& setNotifyConfig(vector<ModifyUserAlarmConfigRequestNotifyConfig> && notifyConfig) { DARABONBA_PTR_SET_RVALUE(notifyConfig_, notifyConfig) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyUserAlarmConfigRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // useDefaultContact Field Functions 
    bool hasUseDefaultContact() const { return this->useDefaultContact_ != nullptr;};
    void deleteUseDefaultContact() { this->useDefaultContact_ = nullptr;};
    inline int32_t useDefaultContact() const { DARABONBA_PTR_GET_DEFAULT(useDefaultContact_, 0) };
    inline ModifyUserAlarmConfigRequest& setUseDefaultContact(int32_t useDefaultContact) { DARABONBA_PTR_SET_VALUE(useDefaultContact_, useDefaultContact) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<ModifyUserAlarmConfigRequestAlarmConfig>> alarmConfig_ = nullptr;
    std::shared_ptr<string> alarmLang_ = nullptr;
    std::shared_ptr<vector<ModifyUserAlarmConfigRequestContactConfig>> contactConfig_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<vector<ModifyUserAlarmConfigRequestNotifyConfig>> notifyConfig_ = nullptr;
    std::shared_ptr<string> sourceIp_ = nullptr;
    std::shared_ptr<int32_t> useDefaultContact_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
