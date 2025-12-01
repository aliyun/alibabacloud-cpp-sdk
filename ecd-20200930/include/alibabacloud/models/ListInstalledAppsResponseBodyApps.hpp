// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTALLEDAPPSRESPONSEBODYAPPS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTALLEDAPPSRESPONSEBODYAPPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListInstalledAppsResponseBodyApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstalledAppsResponseBodyApps& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstalledAppsResponseBodyApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
    };
    ListInstalledAppsResponseBodyApps() = default ;
    ListInstalledAppsResponseBodyApps(const ListInstalledAppsResponseBodyApps &) = default ;
    ListInstalledAppsResponseBodyApps(ListInstalledAppsResponseBodyApps &&) = default ;
    ListInstalledAppsResponseBodyApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstalledAppsResponseBodyApps() = default ;
    ListInstalledAppsResponseBodyApps& operator=(const ListInstalledAppsResponseBodyApps &) = default ;
    ListInstalledAppsResponseBodyApps& operator=(ListInstalledAppsResponseBodyApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->appVersion_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListInstalledAppsResponseBodyApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline ListInstalledAppsResponseBodyApps& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


  protected:
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The application version.
    std::shared_ptr<string> appVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
