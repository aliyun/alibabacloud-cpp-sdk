// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMAPPINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRUMAPPINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRumAppInfoResponseBodyDataBonreeSDKConfig.hpp>
#include <vector>
#include <alibabacloud/models/GetRumAppInfoResponseBodyDataServiceDomainConfigs.hpp>
#include <alibabacloud/models/GetRumAppInfoResponseBodyDataTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumAppInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumAppInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_TO_JSON(AppGroup, appGroup_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(BackendServiceTraceRegion, backendServiceTraceRegion_);
      DARABONBA_PTR_TO_JSON(BonreeSDKConfig, bonreeSDKConfig_);
      DARABONBA_PTR_TO_JSON(CdnDomain, cdnDomain_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
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
    friend void from_json(const Darabonba::Json& j, GetRumAppInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_FROM_JSON(AppGroup, appGroup_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(BackendServiceTraceRegion, backendServiceTraceRegion_);
      DARABONBA_PTR_FROM_JSON(BonreeSDKConfig, bonreeSDKConfig_);
      DARABONBA_PTR_FROM_JSON(CdnDomain, cdnDomain_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
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
    GetRumAppInfoResponseBodyData() = default ;
    GetRumAppInfoResponseBodyData(const GetRumAppInfoResponseBodyData &) = default ;
    GetRumAppInfoResponseBodyData(GetRumAppInfoResponseBodyData &&) = default ;
    GetRumAppInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumAppInfoResponseBodyData() = default ;
    GetRumAppInfoResponseBodyData& operator=(const GetRumAppInfoResponseBodyData &) = default ;
    GetRumAppInfoResponseBodyData& operator=(GetRumAppInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appConfig_ != nullptr
        && this->appGroup_ != nullptr && this->appType_ != nullptr && this->backendServiceTraceRegion_ != nullptr && this->bonreeSDKConfig_ != nullptr && this->cdnDomain_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->endpoint_ != nullptr && this->isSubscription_ != nullptr && this->name_ != nullptr
        && this->nickName_ != nullptr && this->packageName_ != nullptr && this->pid_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->serviceDomainConfigs_ != nullptr && this->slsLogstore_ != nullptr && this->slsProject_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr
        && this->type_ != nullptr; };
    // appConfig Field Functions 
    bool hasAppConfig() const { return this->appConfig_ != nullptr;};
    void deleteAppConfig() { this->appConfig_ = nullptr;};
    inline string appConfig() const { DARABONBA_PTR_GET_DEFAULT(appConfig_, "") };
    inline GetRumAppInfoResponseBodyData& setAppConfig(string appConfig) { DARABONBA_PTR_SET_VALUE(appConfig_, appConfig) };


    // appGroup Field Functions 
    bool hasAppGroup() const { return this->appGroup_ != nullptr;};
    void deleteAppGroup() { this->appGroup_ = nullptr;};
    inline string appGroup() const { DARABONBA_PTR_GET_DEFAULT(appGroup_, "") };
    inline GetRumAppInfoResponseBodyData& setAppGroup(string appGroup) { DARABONBA_PTR_SET_VALUE(appGroup_, appGroup) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetRumAppInfoResponseBodyData& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // backendServiceTraceRegion Field Functions 
    bool hasBackendServiceTraceRegion() const { return this->backendServiceTraceRegion_ != nullptr;};
    void deleteBackendServiceTraceRegion() { this->backendServiceTraceRegion_ = nullptr;};
    inline string backendServiceTraceRegion() const { DARABONBA_PTR_GET_DEFAULT(backendServiceTraceRegion_, "") };
    inline GetRumAppInfoResponseBodyData& setBackendServiceTraceRegion(string backendServiceTraceRegion) { DARABONBA_PTR_SET_VALUE(backendServiceTraceRegion_, backendServiceTraceRegion) };


    // bonreeSDKConfig Field Functions 
    bool hasBonreeSDKConfig() const { return this->bonreeSDKConfig_ != nullptr;};
    void deleteBonreeSDKConfig() { this->bonreeSDKConfig_ = nullptr;};
    inline const Models::GetRumAppInfoResponseBodyDataBonreeSDKConfig & bonreeSDKConfig() const { DARABONBA_PTR_GET_CONST(bonreeSDKConfig_, Models::GetRumAppInfoResponseBodyDataBonreeSDKConfig) };
    inline Models::GetRumAppInfoResponseBodyDataBonreeSDKConfig bonreeSDKConfig() { DARABONBA_PTR_GET(bonreeSDKConfig_, Models::GetRumAppInfoResponseBodyDataBonreeSDKConfig) };
    inline GetRumAppInfoResponseBodyData& setBonreeSDKConfig(const Models::GetRumAppInfoResponseBodyDataBonreeSDKConfig & bonreeSDKConfig) { DARABONBA_PTR_SET_VALUE(bonreeSDKConfig_, bonreeSDKConfig) };
    inline GetRumAppInfoResponseBodyData& setBonreeSDKConfig(Models::GetRumAppInfoResponseBodyDataBonreeSDKConfig && bonreeSDKConfig) { DARABONBA_PTR_SET_RVALUE(bonreeSDKConfig_, bonreeSDKConfig) };


    // cdnDomain Field Functions 
    bool hasCdnDomain() const { return this->cdnDomain_ != nullptr;};
    void deleteCdnDomain() { this->cdnDomain_ = nullptr;};
    inline string cdnDomain() const { DARABONBA_PTR_GET_DEFAULT(cdnDomain_, "") };
    inline GetRumAppInfoResponseBodyData& setCdnDomain(string cdnDomain) { DARABONBA_PTR_SET_VALUE(cdnDomain_, cdnDomain) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetRumAppInfoResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetRumAppInfoResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetRumAppInfoResponseBodyData& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // isSubscription Field Functions 
    bool hasIsSubscription() const { return this->isSubscription_ != nullptr;};
    void deleteIsSubscription() { this->isSubscription_ = nullptr;};
    inline string isSubscription() const { DARABONBA_PTR_GET_DEFAULT(isSubscription_, "") };
    inline GetRumAppInfoResponseBodyData& setIsSubscription(string isSubscription) { DARABONBA_PTR_SET_VALUE(isSubscription_, isSubscription) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRumAppInfoResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline GetRumAppInfoResponseBodyData& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string packageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline GetRumAppInfoResponseBodyData& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetRumAppInfoResponseBodyData& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetRumAppInfoResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetRumAppInfoResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceDomainConfigs Field Functions 
    bool hasServiceDomainConfigs() const { return this->serviceDomainConfigs_ != nullptr;};
    void deleteServiceDomainConfigs() { this->serviceDomainConfigs_ = nullptr;};
    inline const vector<Models::GetRumAppInfoResponseBodyDataServiceDomainConfigs> & serviceDomainConfigs() const { DARABONBA_PTR_GET_CONST(serviceDomainConfigs_, vector<Models::GetRumAppInfoResponseBodyDataServiceDomainConfigs>) };
    inline vector<Models::GetRumAppInfoResponseBodyDataServiceDomainConfigs> serviceDomainConfigs() { DARABONBA_PTR_GET(serviceDomainConfigs_, vector<Models::GetRumAppInfoResponseBodyDataServiceDomainConfigs>) };
    inline GetRumAppInfoResponseBodyData& setServiceDomainConfigs(const vector<Models::GetRumAppInfoResponseBodyDataServiceDomainConfigs> & serviceDomainConfigs) { DARABONBA_PTR_SET_VALUE(serviceDomainConfigs_, serviceDomainConfigs) };
    inline GetRumAppInfoResponseBodyData& setServiceDomainConfigs(vector<Models::GetRumAppInfoResponseBodyDataServiceDomainConfigs> && serviceDomainConfigs) { DARABONBA_PTR_SET_RVALUE(serviceDomainConfigs_, serviceDomainConfigs) };


    // slsLogstore Field Functions 
    bool hasSlsLogstore() const { return this->slsLogstore_ != nullptr;};
    void deleteSlsLogstore() { this->slsLogstore_ = nullptr;};
    inline string slsLogstore() const { DARABONBA_PTR_GET_DEFAULT(slsLogstore_, "") };
    inline GetRumAppInfoResponseBodyData& setSlsLogstore(string slsLogstore) { DARABONBA_PTR_SET_VALUE(slsLogstore_, slsLogstore) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string slsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline GetRumAppInfoResponseBodyData& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRumAppInfoResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetRumAppInfoResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetRumAppInfoResponseBodyDataTags>) };
    inline vector<Models::GetRumAppInfoResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetRumAppInfoResponseBodyDataTags>) };
    inline GetRumAppInfoResponseBodyData& setTags(const vector<Models::GetRumAppInfoResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetRumAppInfoResponseBodyData& setTags(vector<Models::GetRumAppInfoResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetRumAppInfoResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The application configurations in the JSON format. This parameter is deprecated.
    std::shared_ptr<string> appConfig_ = nullptr;
    // The group to which the application belongs.
    std::shared_ptr<string> appGroup_ = nullptr;
    // The application type. Valid values: web, miniapp, ios, and android.
    std::shared_ptr<string> appType_ = nullptr;
    // The region where the backend is deployed.
    std::shared_ptr<string> backendServiceTraceRegion_ = nullptr;
    // The collection configurations.
    std::shared_ptr<Models::GetRumAppInfoResponseBodyDataBonreeSDKConfig> bonreeSDKConfig_ = nullptr;
    // The domain name of the SDK.
    std::shared_ptr<string> cdnDomain_ = nullptr;
    // The time when the application was created. The value is a timestamp. Unit: milliseconds.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The endpoint that is used to report application data.
    std::shared_ptr<string> endpoint_ = nullptr;
    // Indicates whether the application is subscribed. Valid values: true and false.
    std::shared_ptr<string> isSubscription_ = nullptr;
    // The application name.
    std::shared_ptr<string> name_ = nullptr;
    // The alias of the application.
    std::shared_ptr<string> nickName_ = nullptr;
    // The name of the application package.
    std::shared_ptr<string> packageName_ = nullptr;
    // The application ID.
    std::shared_ptr<string> pid_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The list of service domain configurations. Only mobile applications are supported.
    std::shared_ptr<vector<Models::GetRumAppInfoResponseBodyDataServiceDomainConfigs>> serviceDomainConfigs_ = nullptr;
    // The name of the Simple Log Service Logstore that stores application data.
    std::shared_ptr<string> slsLogstore_ = nullptr;
    // The name of the Simple Log Service project that stores application data.
    std::shared_ptr<string> slsProject_ = nullptr;
    // The status of the application. Valid values: created, running, and stopped.
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::GetRumAppInfoResponseBodyDataTags>> tags_ = nullptr;
    // The type of the application. Valid value: RUM.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
