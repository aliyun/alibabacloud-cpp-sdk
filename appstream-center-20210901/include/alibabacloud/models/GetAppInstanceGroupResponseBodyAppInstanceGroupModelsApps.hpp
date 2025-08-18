// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPINSTANCEGROUPRESPONSEBODYAPPINSTANCEGROUPMODELSAPPS_HPP_
#define ALIBABACLOUD_MODELS_GETAPPINSTANCEGROUPRESPONSEBODYAPPINSTANCEGROUPMODELSAPPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps& obj) { 
      DARABONBA_PTR_TO_JSON(AppIcon, appIcon_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(AppVersionName, appVersionName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIcon, appIcon_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(AppVersionName, appVersionName_);
    };
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps() = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps(const GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps &) = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps(GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps &&) = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps() = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps& operator=(const GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps &) = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps& operator=(GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appIcon_ != nullptr
        && this->appId_ != nullptr && this->appName_ != nullptr && this->appVersion_ != nullptr && this->appVersionName_ != nullptr; };
    // appIcon Field Functions 
    bool hasAppIcon() const { return this->appIcon_ != nullptr;};
    void deleteAppIcon() { this->appIcon_ = nullptr;};
    inline string appIcon() const { DARABONBA_PTR_GET_DEFAULT(appIcon_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps& setAppIcon(string appIcon) { DARABONBA_PTR_SET_VALUE(appIcon_, appIcon) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // appVersionName Field Functions 
    bool hasAppVersionName() const { return this->appVersionName_ != nullptr;};
    void deleteAppVersionName() { this->appVersionName_ = nullptr;};
    inline string appVersionName() const { DARABONBA_PTR_GET_DEFAULT(appVersionName_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps& setAppVersionName(string appVersionName) { DARABONBA_PTR_SET_VALUE(appVersionName_, appVersionName) };


  protected:
    std::shared_ptr<string> appIcon_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> appVersion_ = nullptr;
    std::shared_ptr<string> appVersionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
