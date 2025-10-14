// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCHEDULECONFSETTINGSREQUESTSCHEDULECONFSETTINGMODELMOZICONFVIRTUALEXTRASETTINGMOZICONFEXTENSIONAPPSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCHEDULECONFSETTINGSREQUESTSCHEDULECONFSETTINGMODELMOZICONFVIRTUALEXTRASETTINGMOZICONFEXTENSIONAPPSETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings& obj) { 
      DARABONBA_PTR_TO_JSON(AutoOpenMode, autoOpenMode_);
      DARABONBA_PTR_TO_JSON(CoolAppCode, coolAppCode_);
      DARABONBA_PTR_TO_JSON(ExtensionAppBizData, extensionAppBizData_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoOpenMode, autoOpenMode_);
      DARABONBA_PTR_FROM_JSON(CoolAppCode, coolAppCode_);
      DARABONBA_PTR_FROM_JSON(ExtensionAppBizData, extensionAppBizData_);
    };
    UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings() = default ;
    UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings(const UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings &) = default ;
    UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings(UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings &&) = default ;
    UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings() = default ;
    UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings& operator=(const UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings &) = default ;
    UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings& operator=(UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoOpenMode_ == nullptr
        && return this->coolAppCode_ == nullptr && return this->extensionAppBizData_ == nullptr; };
    // autoOpenMode Field Functions 
    bool hasAutoOpenMode() const { return this->autoOpenMode_ != nullptr;};
    void deleteAutoOpenMode() { this->autoOpenMode_ = nullptr;};
    inline int32_t autoOpenMode() const { DARABONBA_PTR_GET_DEFAULT(autoOpenMode_, 0) };
    inline UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings& setAutoOpenMode(int32_t autoOpenMode) { DARABONBA_PTR_SET_VALUE(autoOpenMode_, autoOpenMode) };


    // coolAppCode Field Functions 
    bool hasCoolAppCode() const { return this->coolAppCode_ != nullptr;};
    void deleteCoolAppCode() { this->coolAppCode_ = nullptr;};
    inline string coolAppCode() const { DARABONBA_PTR_GET_DEFAULT(coolAppCode_, "") };
    inline UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings& setCoolAppCode(string coolAppCode) { DARABONBA_PTR_SET_VALUE(coolAppCode_, coolAppCode) };


    // extensionAppBizData Field Functions 
    bool hasExtensionAppBizData() const { return this->extensionAppBizData_ != nullptr;};
    void deleteExtensionAppBizData() { this->extensionAppBizData_ = nullptr;};
    inline string extensionAppBizData() const { DARABONBA_PTR_GET_DEFAULT(extensionAppBizData_, "") };
    inline UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings& setExtensionAppBizData(string extensionAppBizData) { DARABONBA_PTR_SET_VALUE(extensionAppBizData_, extensionAppBizData) };


  protected:
    std::shared_ptr<int32_t> autoOpenMode_ = nullptr;
    std::shared_ptr<string> coolAppCode_ = nullptr;
    std::shared_ptr<string> extensionAppBizData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
