// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateUserSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLevels, alertLevels_);
      DARABONBA_PTR_TO_JSON(InvalidWarningKeepDays, invalidWarningKeepDays_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLevels, alertLevels_);
      DARABONBA_PTR_FROM_JSON(InvalidWarningKeepDays, invalidWarningKeepDays_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    CreateUserSettingRequest() = default ;
    CreateUserSettingRequest(const CreateUserSettingRequest &) = default ;
    CreateUserSettingRequest(CreateUserSettingRequest &&) = default ;
    CreateUserSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserSettingRequest() = default ;
    CreateUserSettingRequest& operator=(const CreateUserSettingRequest &) = default ;
    CreateUserSettingRequest& operator=(CreateUserSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertLevels_ != nullptr
        && this->invalidWarningKeepDays_ != nullptr && this->sourceIp_ != nullptr; };
    // alertLevels Field Functions 
    bool hasAlertLevels() const { return this->alertLevels_ != nullptr;};
    void deleteAlertLevels() { this->alertLevels_ = nullptr;};
    inline string alertLevels() const { DARABONBA_PTR_GET_DEFAULT(alertLevels_, "") };
    inline CreateUserSettingRequest& setAlertLevels(string alertLevels) { DARABONBA_PTR_SET_VALUE(alertLevels_, alertLevels) };


    // invalidWarningKeepDays Field Functions 
    bool hasInvalidWarningKeepDays() const { return this->invalidWarningKeepDays_ != nullptr;};
    void deleteInvalidWarningKeepDays() { this->invalidWarningKeepDays_ = nullptr;};
    inline int32_t invalidWarningKeepDays() const { DARABONBA_PTR_GET_DEFAULT(invalidWarningKeepDays_, 0) };
    inline CreateUserSettingRequest& setInvalidWarningKeepDays(int32_t invalidWarningKeepDays) { DARABONBA_PTR_SET_VALUE(invalidWarningKeepDays_, invalidWarningKeepDays) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline CreateUserSettingRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The severities of alerts.
    std::shared_ptr<string> alertLevels_ = nullptr;
    // The number of days during which you want to retain invalid alerts.
    std::shared_ptr<int32_t> invalidWarningKeepDays_ = nullptr;
    // The source IP address.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
