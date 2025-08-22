// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMAPPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRUMAPPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRumAppsRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumAppsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumAppsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppGroup, appGroup_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumAppsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGroup, appGroup_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetRumAppsRequest() = default ;
    GetRumAppsRequest(const GetRumAppsRequest &) = default ;
    GetRumAppsRequest(GetRumAppsRequest &&) = default ;
    GetRumAppsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumAppsRequest() = default ;
    GetRumAppsRequest& operator=(const GetRumAppsRequest &) = default ;
    GetRumAppsRequest& operator=(GetRumAppsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appGroup_ != nullptr
        && this->appId_ != nullptr && this->appName_ != nullptr && this->appType_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->tags_ != nullptr; };
    // appGroup Field Functions 
    bool hasAppGroup() const { return this->appGroup_ != nullptr;};
    void deleteAppGroup() { this->appGroup_ = nullptr;};
    inline string appGroup() const { DARABONBA_PTR_GET_DEFAULT(appGroup_, "") };
    inline GetRumAppsRequest& setAppGroup(string appGroup) { DARABONBA_PTR_SET_VALUE(appGroup_, appGroup) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetRumAppsRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetRumAppsRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetRumAppsRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetRumAppsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetRumAppsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetRumAppsRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetRumAppsRequestTags>) };
    inline vector<GetRumAppsRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetRumAppsRequestTags>) };
    inline GetRumAppsRequest& setTags(const vector<GetRumAppsRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetRumAppsRequest& setTags(vector<GetRumAppsRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The group to which the application belongs.
    std::shared_ptr<string> appGroup_ = nullptr;
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application. You can specify only one application name in each request.
    std::shared_ptr<string> appName_ = nullptr;
    // The application type. Currently, supported application types include: web, mini program, Android, iOS, Windows, macOS, and HarmonyOS.
    std::shared_ptr<string> appType_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<GetRumAppsRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
