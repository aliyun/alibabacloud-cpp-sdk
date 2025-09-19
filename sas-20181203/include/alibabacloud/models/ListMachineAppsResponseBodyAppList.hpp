// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMACHINEAPPSRESPONSEBODYAPPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMACHINEAPPSRESPONSEBODYAPPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListMachineAppsResponseBodyAppList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMachineAppsResponseBodyAppList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppRegionId, appRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMachineAppsResponseBodyAppList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppRegionId, appRegionId_);
    };
    ListMachineAppsResponseBodyAppList() = default ;
    ListMachineAppsResponseBodyAppList(const ListMachineAppsResponseBodyAppList &) = default ;
    ListMachineAppsResponseBodyAppList(ListMachineAppsResponseBodyAppList &&) = default ;
    ListMachineAppsResponseBodyAppList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMachineAppsResponseBodyAppList() = default ;
    ListMachineAppsResponseBodyAppList& operator=(const ListMachineAppsResponseBodyAppList &) = default ;
    ListMachineAppsResponseBodyAppList& operator=(ListMachineAppsResponseBodyAppList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->appRegionId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListMachineAppsResponseBodyAppList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListMachineAppsResponseBodyAppList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appRegionId Field Functions 
    bool hasAppRegionId() const { return this->appRegionId_ != nullptr;};
    void deleteAppRegionId() { this->appRegionId_ = nullptr;};
    inline string appRegionId() const { DARABONBA_PTR_GET_DEFAULT(appRegionId_, "") };
    inline ListMachineAppsResponseBodyAppList& setAppRegionId(string appRegionId) { DARABONBA_PTR_SET_VALUE(appRegionId_, appRegionId) };


  protected:
    // SAE application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // SAE application name.
    std::shared_ptr<string> appName_ = nullptr;
    // Region ID.
    std::shared_ptr<string> appRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
