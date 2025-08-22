// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMAPPSRESPONSEBODYAPPLIST_HPP_
#define ALIBABACLOUD_MODELS_GETRUMAPPSRESPONSEBODYAPPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRumAppsResponseBodyAppListServiceDomainConfigs.hpp>
#include <alibabacloud/models/GetRumAppsResponseBodyAppListTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumAppsResponseBodyAppList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumAppsResponseBodyAppList& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_ANY_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(IsSubscription, isSubscription_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(PackageName, packageName_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceDomainConfigs, serviceDomainConfigs_);
      DARABONBA_PTR_TO_JSON(SlsLogstore, slsLogstore_);
      DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumAppsResponseBodyAppList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_ANY_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(IsSubscription, isSubscription_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceDomainConfigs, serviceDomainConfigs_);
      DARABONBA_PTR_FROM_JSON(SlsLogstore, slsLogstore_);
      DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetRumAppsResponseBodyAppList() = default ;
    GetRumAppsResponseBodyAppList(const GetRumAppsResponseBodyAppList &) = default ;
    GetRumAppsResponseBodyAppList(GetRumAppsResponseBodyAppList &&) = default ;
    GetRumAppsResponseBodyAppList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumAppsResponseBodyAppList() = default ;
    GetRumAppsResponseBodyAppList& operator=(const GetRumAppsResponseBodyAppList &) = default ;
    GetRumAppsResponseBodyAppList& operator=(GetRumAppsResponseBodyAppList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->endpoint_ != nullptr && this->isSubscription_ != nullptr && this->name_ != nullptr
        && this->nickName_ != nullptr && this->packageName_ != nullptr && this->pid_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->serviceDomainConfigs_ != nullptr && this->slsLogstore_ != nullptr && this->slsProject_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr
        && this->type_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetRumAppsResponseBodyAppList& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline     const Darabonba::Json & createTime() const { DARABONBA_GET(createTime_) };
    Darabonba::Json & createTime() { DARABONBA_GET(createTime_) };
    inline GetRumAppsResponseBodyAppList& setCreateTime(const Darabonba::Json & createTime) { DARABONBA_SET_VALUE(createTime_, createTime) };
    inline GetRumAppsResponseBodyAppList& setCreateTime(Darabonba::Json & createTime) { DARABONBA_SET_RVALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetRumAppsResponseBodyAppList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetRumAppsResponseBodyAppList& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // isSubscription Field Functions 
    bool hasIsSubscription() const { return this->isSubscription_ != nullptr;};
    void deleteIsSubscription() { this->isSubscription_ = nullptr;};
    inline bool isSubscription() const { DARABONBA_PTR_GET_DEFAULT(isSubscription_, false) };
    inline GetRumAppsResponseBodyAppList& setIsSubscription(bool isSubscription) { DARABONBA_PTR_SET_VALUE(isSubscription_, isSubscription) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRumAppsResponseBodyAppList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline GetRumAppsResponseBodyAppList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string packageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline GetRumAppsResponseBodyAppList& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetRumAppsResponseBodyAppList& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetRumAppsResponseBodyAppList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetRumAppsResponseBodyAppList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceDomainConfigs Field Functions 
    bool hasServiceDomainConfigs() const { return this->serviceDomainConfigs_ != nullptr;};
    void deleteServiceDomainConfigs() { this->serviceDomainConfigs_ = nullptr;};
    inline const vector<Models::GetRumAppsResponseBodyAppListServiceDomainConfigs> & serviceDomainConfigs() const { DARABONBA_PTR_GET_CONST(serviceDomainConfigs_, vector<Models::GetRumAppsResponseBodyAppListServiceDomainConfigs>) };
    inline vector<Models::GetRumAppsResponseBodyAppListServiceDomainConfigs> serviceDomainConfigs() { DARABONBA_PTR_GET(serviceDomainConfigs_, vector<Models::GetRumAppsResponseBodyAppListServiceDomainConfigs>) };
    inline GetRumAppsResponseBodyAppList& setServiceDomainConfigs(const vector<Models::GetRumAppsResponseBodyAppListServiceDomainConfigs> & serviceDomainConfigs) { DARABONBA_PTR_SET_VALUE(serviceDomainConfigs_, serviceDomainConfigs) };
    inline GetRumAppsResponseBodyAppList& setServiceDomainConfigs(vector<Models::GetRumAppsResponseBodyAppListServiceDomainConfigs> && serviceDomainConfigs) { DARABONBA_PTR_SET_RVALUE(serviceDomainConfigs_, serviceDomainConfigs) };


    // slsLogstore Field Functions 
    bool hasSlsLogstore() const { return this->slsLogstore_ != nullptr;};
    void deleteSlsLogstore() { this->slsLogstore_ = nullptr;};
    inline string slsLogstore() const { DARABONBA_PTR_GET_DEFAULT(slsLogstore_, "") };
    inline GetRumAppsResponseBodyAppList& setSlsLogstore(string slsLogstore) { DARABONBA_PTR_SET_VALUE(slsLogstore_, slsLogstore) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string slsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline GetRumAppsResponseBodyAppList& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRumAppsResponseBodyAppList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetRumAppsResponseBodyAppListTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetRumAppsResponseBodyAppListTags>) };
    inline vector<Models::GetRumAppsResponseBodyAppListTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetRumAppsResponseBodyAppListTags>) };
    inline GetRumAppsResponseBodyAppList& setTags(const vector<Models::GetRumAppsResponseBodyAppListTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetRumAppsResponseBodyAppList& setTags(vector<Models::GetRumAppsResponseBodyAppListTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetRumAppsResponseBodyAppList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The application type. Valid values: web, miniapp, ios, and android.
    std::shared_ptr<string> appType_ = nullptr;
    // The time when the application was created. The value is a timestamp.
    Darabonba::Json createTime_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The endpoint that is used to report application data.
    std::shared_ptr<string> endpoint_ = nullptr;
    // Indicates whether the application is subscribed. Valid values: true and false.
    std::shared_ptr<bool> isSubscription_ = nullptr;
    // The application name.
    std::shared_ptr<string> name_ = nullptr;
    // The alias of the application.
    std::shared_ptr<string> nickName_ = nullptr;
    // The package name of the Android application.
    std::shared_ptr<string> packageName_ = nullptr;
    // The application ID.
    std::shared_ptr<string> pid_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The list of service domain configurations. Only mobile applications are supported.
    std::shared_ptr<vector<Models::GetRumAppsResponseBodyAppListServiceDomainConfigs>> serviceDomainConfigs_ = nullptr;
    // The name of the Simple Log Service Logstore that stores application data.
    std::shared_ptr<string> slsLogstore_ = nullptr;
    // The name of the Simple Log Service project that stores application data.
    std::shared_ptr<string> slsProject_ = nullptr;
    // The status of the application. Valid values: created, running, and stopped.
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::GetRumAppsResponseBodyAppListTags>> tags_ = nullptr;
    // The type of the application. Valid value: RUM.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
