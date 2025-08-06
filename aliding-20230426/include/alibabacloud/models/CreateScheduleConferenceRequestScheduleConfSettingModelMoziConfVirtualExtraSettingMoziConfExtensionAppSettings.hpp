// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULECONFERENCEREQUESTSCHEDULECONFSETTINGMODELMOZICONFVIRTUALEXTRASETTINGMOZICONFEXTENSIONAPPSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULECONFERENCEREQUESTSCHEDULECONFSETTINGMODELMOZICONFVIRTUALEXTRASETTINGMOZICONFEXTENSIONAPPSETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings& obj) { 
      DARABONBA_PTR_TO_JSON(AutoOpenMode, autoOpenMode_);
      DARABONBA_PTR_TO_JSON(CoolAppCode, coolAppCode_);
      DARABONBA_PTR_TO_JSON(ExtensionAppBizData, extensionAppBizData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoOpenMode, autoOpenMode_);
      DARABONBA_PTR_FROM_JSON(CoolAppCode, coolAppCode_);
      DARABONBA_PTR_FROM_JSON(ExtensionAppBizData, extensionAppBizData_);
    };
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings() = default ;
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings(const CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings &) = default ;
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings(CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings &&) = default ;
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings() = default ;
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings& operator=(const CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings &) = default ;
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings& operator=(CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoOpenMode_ != nullptr
        && this->coolAppCode_ != nullptr && this->extensionAppBizData_ != nullptr; };
    // autoOpenMode Field Functions 
    bool hasAutoOpenMode() const { return this->autoOpenMode_ != nullptr;};
    void deleteAutoOpenMode() { this->autoOpenMode_ = nullptr;};
    inline int32_t autoOpenMode() const { DARABONBA_PTR_GET_DEFAULT(autoOpenMode_, 0) };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings& setAutoOpenMode(int32_t autoOpenMode) { DARABONBA_PTR_SET_VALUE(autoOpenMode_, autoOpenMode) };


    // coolAppCode Field Functions 
    bool hasCoolAppCode() const { return this->coolAppCode_ != nullptr;};
    void deleteCoolAppCode() { this->coolAppCode_ = nullptr;};
    inline string coolAppCode() const { DARABONBA_PTR_GET_DEFAULT(coolAppCode_, "") };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings& setCoolAppCode(string coolAppCode) { DARABONBA_PTR_SET_VALUE(coolAppCode_, coolAppCode) };


    // extensionAppBizData Field Functions 
    bool hasExtensionAppBizData() const { return this->extensionAppBizData_ != nullptr;};
    void deleteExtensionAppBizData() { this->extensionAppBizData_ = nullptr;};
    inline string extensionAppBizData() const { DARABONBA_PTR_GET_DEFAULT(extensionAppBizData_, "") };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings& setExtensionAppBizData(string extensionAppBizData) { DARABONBA_PTR_SET_VALUE(extensionAppBizData_, extensionAppBizData) };


  protected:
    std::shared_ptr<int32_t> autoOpenMode_ = nullptr;
    std::shared_ptr<string> coolAppCode_ = nullptr;
    std::shared_ptr<string> extensionAppBizData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
