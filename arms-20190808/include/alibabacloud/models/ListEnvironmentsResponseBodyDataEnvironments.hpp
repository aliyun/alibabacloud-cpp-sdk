// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTSRESPONSEBODYDATAENVIRONMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTSRESPONSEBODYDATAENVIRONMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnvironmentsResponseBodyDataEnvironmentsAddons.hpp>
#include <alibabacloud/models/ListEnvironmentsResponseBodyDataEnvironmentsFeatures.hpp>
#include <alibabacloud/models/ListEnvironmentsResponseBodyDataEnvironmentsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentsResponseBodyDataEnvironments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentsResponseBodyDataEnvironments& obj) { 
      DARABONBA_PTR_TO_JSON(Addons, addons_);
      DARABONBA_PTR_TO_JSON(BindResourceId, bindResourceId_);
      DARABONBA_PTR_TO_JSON(BindResourceProfile, bindResourceProfile_);
      DARABONBA_PTR_TO_JSON(BindResourceType, bindResourceType_);
      DARABONBA_PTR_TO_JSON(BindVpcCidr, bindVpcCidr_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatedUserId, createdUserId_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(EnvironmentName, environmentName_);
      DARABONBA_PTR_TO_JSON(EnvironmentType, environmentType_);
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(FeePackage, feePackage_);
      DARABONBA_PTR_TO_JSON(GrafanaDatasourceUid, grafanaDatasourceUid_);
      DARABONBA_PTR_TO_JSON(GrafanaFolderTitle, grafanaFolderTitle_);
      DARABONBA_PTR_TO_JSON(GrafanaFolderUid, grafanaFolderUid_);
      DARABONBA_PTR_TO_JSON(LatestReleaseCreateTime, latestReleaseCreateTime_);
      DARABONBA_PTR_TO_JSON(ManagedType, managedType_);
      DARABONBA_PTR_TO_JSON(PrometheusId, prometheusId_);
      DARABONBA_PTR_TO_JSON(PrometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReleaseCount, releaseCount_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentsResponseBodyDataEnvironments& obj) { 
      DARABONBA_PTR_FROM_JSON(Addons, addons_);
      DARABONBA_PTR_FROM_JSON(BindResourceId, bindResourceId_);
      DARABONBA_PTR_FROM_JSON(BindResourceProfile, bindResourceProfile_);
      DARABONBA_PTR_FROM_JSON(BindResourceType, bindResourceType_);
      DARABONBA_PTR_FROM_JSON(BindVpcCidr, bindVpcCidr_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatedUserId, createdUserId_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(EnvironmentName, environmentName_);
      DARABONBA_PTR_FROM_JSON(EnvironmentType, environmentType_);
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(FeePackage, feePackage_);
      DARABONBA_PTR_FROM_JSON(GrafanaDatasourceUid, grafanaDatasourceUid_);
      DARABONBA_PTR_FROM_JSON(GrafanaFolderTitle, grafanaFolderTitle_);
      DARABONBA_PTR_FROM_JSON(GrafanaFolderUid, grafanaFolderUid_);
      DARABONBA_PTR_FROM_JSON(LatestReleaseCreateTime, latestReleaseCreateTime_);
      DARABONBA_PTR_FROM_JSON(ManagedType, managedType_);
      DARABONBA_PTR_FROM_JSON(PrometheusId, prometheusId_);
      DARABONBA_PTR_FROM_JSON(PrometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReleaseCount, releaseCount_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListEnvironmentsResponseBodyDataEnvironments() = default ;
    ListEnvironmentsResponseBodyDataEnvironments(const ListEnvironmentsResponseBodyDataEnvironments &) = default ;
    ListEnvironmentsResponseBodyDataEnvironments(ListEnvironmentsResponseBodyDataEnvironments &&) = default ;
    ListEnvironmentsResponseBodyDataEnvironments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentsResponseBodyDataEnvironments() = default ;
    ListEnvironmentsResponseBodyDataEnvironments& operator=(const ListEnvironmentsResponseBodyDataEnvironments &) = default ;
    ListEnvironmentsResponseBodyDataEnvironments& operator=(ListEnvironmentsResponseBodyDataEnvironments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addons_ != nullptr
        && this->bindResourceId_ != nullptr && this->bindResourceProfile_ != nullptr && this->bindResourceType_ != nullptr && this->bindVpcCidr_ != nullptr && this->createTime_ != nullptr
        && this->createdUserId_ != nullptr && this->environmentId_ != nullptr && this->environmentName_ != nullptr && this->environmentType_ != nullptr && this->features_ != nullptr
        && this->feePackage_ != nullptr && this->grafanaDatasourceUid_ != nullptr && this->grafanaFolderTitle_ != nullptr && this->grafanaFolderUid_ != nullptr && this->latestReleaseCreateTime_ != nullptr
        && this->managedType_ != nullptr && this->prometheusId_ != nullptr && this->prometheusInstanceId_ != nullptr && this->regionId_ != nullptr && this->releaseCount_ != nullptr
        && this->resourceGroupId_ != nullptr && this->tags_ != nullptr && this->userId_ != nullptr; };
    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsAddons> & addons() const { DARABONBA_PTR_GET_CONST(addons_, vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsAddons>) };
    inline vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsAddons> addons() { DARABONBA_PTR_GET(addons_, vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsAddons>) };
    inline ListEnvironmentsResponseBodyDataEnvironments& setAddons(const vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsAddons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline ListEnvironmentsResponseBodyDataEnvironments& setAddons(vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsAddons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


    // bindResourceId Field Functions 
    bool hasBindResourceId() const { return this->bindResourceId_ != nullptr;};
    void deleteBindResourceId() { this->bindResourceId_ = nullptr;};
    inline string bindResourceId() const { DARABONBA_PTR_GET_DEFAULT(bindResourceId_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setBindResourceId(string bindResourceId) { DARABONBA_PTR_SET_VALUE(bindResourceId_, bindResourceId) };


    // bindResourceProfile Field Functions 
    bool hasBindResourceProfile() const { return this->bindResourceProfile_ != nullptr;};
    void deleteBindResourceProfile() { this->bindResourceProfile_ = nullptr;};
    inline string bindResourceProfile() const { DARABONBA_PTR_GET_DEFAULT(bindResourceProfile_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setBindResourceProfile(string bindResourceProfile) { DARABONBA_PTR_SET_VALUE(bindResourceProfile_, bindResourceProfile) };


    // bindResourceType Field Functions 
    bool hasBindResourceType() const { return this->bindResourceType_ != nullptr;};
    void deleteBindResourceType() { this->bindResourceType_ = nullptr;};
    inline string bindResourceType() const { DARABONBA_PTR_GET_DEFAULT(bindResourceType_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setBindResourceType(string bindResourceType) { DARABONBA_PTR_SET_VALUE(bindResourceType_, bindResourceType) };


    // bindVpcCidr Field Functions 
    bool hasBindVpcCidr() const { return this->bindVpcCidr_ != nullptr;};
    void deleteBindVpcCidr() { this->bindVpcCidr_ = nullptr;};
    inline string bindVpcCidr() const { DARABONBA_PTR_GET_DEFAULT(bindVpcCidr_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setBindVpcCidr(string bindVpcCidr) { DARABONBA_PTR_SET_VALUE(bindVpcCidr_, bindVpcCidr) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createdUserId Field Functions 
    bool hasCreatedUserId() const { return this->createdUserId_ != nullptr;};
    void deleteCreatedUserId() { this->createdUserId_ = nullptr;};
    inline string createdUserId() const { DARABONBA_PTR_GET_DEFAULT(createdUserId_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setCreatedUserId(string createdUserId) { DARABONBA_PTR_SET_VALUE(createdUserId_, createdUserId) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // environmentName Field Functions 
    bool hasEnvironmentName() const { return this->environmentName_ != nullptr;};
    void deleteEnvironmentName() { this->environmentName_ = nullptr;};
    inline string environmentName() const { DARABONBA_PTR_GET_DEFAULT(environmentName_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setEnvironmentName(string environmentName) { DARABONBA_PTR_SET_VALUE(environmentName_, environmentName) };


    // environmentType Field Functions 
    bool hasEnvironmentType() const { return this->environmentType_ != nullptr;};
    void deleteEnvironmentType() { this->environmentType_ = nullptr;};
    inline string environmentType() const { DARABONBA_PTR_GET_DEFAULT(environmentType_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setEnvironmentType(string environmentType) { DARABONBA_PTR_SET_VALUE(environmentType_, environmentType) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsFeatures> & features() const { DARABONBA_PTR_GET_CONST(features_, vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsFeatures>) };
    inline vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsFeatures> features() { DARABONBA_PTR_GET(features_, vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsFeatures>) };
    inline ListEnvironmentsResponseBodyDataEnvironments& setFeatures(const vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsFeatures> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline ListEnvironmentsResponseBodyDataEnvironments& setFeatures(vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsFeatures> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // feePackage Field Functions 
    bool hasFeePackage() const { return this->feePackage_ != nullptr;};
    void deleteFeePackage() { this->feePackage_ = nullptr;};
    inline string feePackage() const { DARABONBA_PTR_GET_DEFAULT(feePackage_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setFeePackage(string feePackage) { DARABONBA_PTR_SET_VALUE(feePackage_, feePackage) };


    // grafanaDatasourceUid Field Functions 
    bool hasGrafanaDatasourceUid() const { return this->grafanaDatasourceUid_ != nullptr;};
    void deleteGrafanaDatasourceUid() { this->grafanaDatasourceUid_ = nullptr;};
    inline string grafanaDatasourceUid() const { DARABONBA_PTR_GET_DEFAULT(grafanaDatasourceUid_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setGrafanaDatasourceUid(string grafanaDatasourceUid) { DARABONBA_PTR_SET_VALUE(grafanaDatasourceUid_, grafanaDatasourceUid) };


    // grafanaFolderTitle Field Functions 
    bool hasGrafanaFolderTitle() const { return this->grafanaFolderTitle_ != nullptr;};
    void deleteGrafanaFolderTitle() { this->grafanaFolderTitle_ = nullptr;};
    inline string grafanaFolderTitle() const { DARABONBA_PTR_GET_DEFAULT(grafanaFolderTitle_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setGrafanaFolderTitle(string grafanaFolderTitle) { DARABONBA_PTR_SET_VALUE(grafanaFolderTitle_, grafanaFolderTitle) };


    // grafanaFolderUid Field Functions 
    bool hasGrafanaFolderUid() const { return this->grafanaFolderUid_ != nullptr;};
    void deleteGrafanaFolderUid() { this->grafanaFolderUid_ = nullptr;};
    inline string grafanaFolderUid() const { DARABONBA_PTR_GET_DEFAULT(grafanaFolderUid_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setGrafanaFolderUid(string grafanaFolderUid) { DARABONBA_PTR_SET_VALUE(grafanaFolderUid_, grafanaFolderUid) };


    // latestReleaseCreateTime Field Functions 
    bool hasLatestReleaseCreateTime() const { return this->latestReleaseCreateTime_ != nullptr;};
    void deleteLatestReleaseCreateTime() { this->latestReleaseCreateTime_ = nullptr;};
    inline string latestReleaseCreateTime() const { DARABONBA_PTR_GET_DEFAULT(latestReleaseCreateTime_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setLatestReleaseCreateTime(string latestReleaseCreateTime) { DARABONBA_PTR_SET_VALUE(latestReleaseCreateTime_, latestReleaseCreateTime) };


    // managedType Field Functions 
    bool hasManagedType() const { return this->managedType_ != nullptr;};
    void deleteManagedType() { this->managedType_ = nullptr;};
    inline string managedType() const { DARABONBA_PTR_GET_DEFAULT(managedType_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setManagedType(string managedType) { DARABONBA_PTR_SET_VALUE(managedType_, managedType) };


    // prometheusId Field Functions 
    bool hasPrometheusId() const { return this->prometheusId_ != nullptr;};
    void deletePrometheusId() { this->prometheusId_ = nullptr;};
    inline int64_t prometheusId() const { DARABONBA_PTR_GET_DEFAULT(prometheusId_, 0L) };
    inline ListEnvironmentsResponseBodyDataEnvironments& setPrometheusId(int64_t prometheusId) { DARABONBA_PTR_SET_VALUE(prometheusId_, prometheusId) };


    // prometheusInstanceId Field Functions 
    bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
    void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
    inline string prometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseCount Field Functions 
    bool hasReleaseCount() const { return this->releaseCount_ != nullptr;};
    void deleteReleaseCount() { this->releaseCount_ = nullptr;};
    inline int32_t releaseCount() const { DARABONBA_PTR_GET_DEFAULT(releaseCount_, 0) };
    inline ListEnvironmentsResponseBodyDataEnvironments& setReleaseCount(int32_t releaseCount) { DARABONBA_PTR_SET_VALUE(releaseCount_, releaseCount) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsTags>) };
    inline vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsTags>) };
    inline ListEnvironmentsResponseBodyDataEnvironments& setTags(const vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListEnvironmentsResponseBodyDataEnvironments& setTags(vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironments& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The add-ons.
    std::shared_ptr<vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsAddons>> addons_ = nullptr;
    // The ID of the resource bound to the environment instance. The resource can be a Kubernetes cluster or a VPC.
    std::shared_ptr<string> bindResourceId_ = nullptr;
    // The profile that is bound to the resource.
    std::shared_ptr<string> bindResourceProfile_ = nullptr;
    // The resource type.
    std::shared_ptr<string> bindResourceType_ = nullptr;
    // The CIDR block that is bound to the VPC.
    std::shared_ptr<string> bindVpcCidr_ = nullptr;
    // The time when the environment instance was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The user ID.
    std::shared_ptr<string> createdUserId_ = nullptr;
    // The ID of the environment instance.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The name of the environment instance.
    std::shared_ptr<string> environmentName_ = nullptr;
    // The type of the environment instance. Valid values:
    // 
    // *   CS: Container Service
    // *   ECS: Elastic Compute Service
    // *   Cloud: cloud service
    std::shared_ptr<string> environmentType_ = nullptr;
    // The parameters of the feature.
    std::shared_ptr<vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsFeatures>> features_ = nullptr;
    // The payable resource plan.
    // 
    // *   If the EnvironmentType parameter is set to CS, set the value to CS_Basic or CS_Pro.
    // *   Otherwise, leave the parameter empty.
    std::shared_ptr<string> feePackage_ = nullptr;
    // The unique ID of the Grafana data source.
    std::shared_ptr<string> grafanaDatasourceUid_ = nullptr;
    // The name of the Grafana directory.
    std::shared_ptr<string> grafanaFolderTitle_ = nullptr;
    // The unique ID of the Grafana directory.
    std::shared_ptr<string> grafanaFolderUid_ = nullptr;
    // The time when the last add-on was created.
    std::shared_ptr<string> latestReleaseCreateTime_ = nullptr;
    // Indicates whether agents or exporters are managed. Valid values:
    // 
    // *   none: No. By default, no managed agents or exporters are provided for ACK clusters.
    // *   agent: Agents are managed. By default, managed agents are provided for ASK clusters, ACS clusters, and ACK One clusters.
    // *   agent-exproter: Agents and exporters are managed. By default, managed agents and exporters are provided for cloud services.
    std::shared_ptr<string> managedType_ = nullptr;
    // The Prometheus ID.
    std::shared_ptr<int64_t> prometheusId_ = nullptr;
    // The ID of the Prometheus instance.
    std::shared_ptr<string> prometheusInstanceId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of installed add-ons.
    std::shared_ptr<int32_t> releaseCount_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags of the environment resource.
    std::shared_ptr<vector<Models::ListEnvironmentsResponseBodyDataEnvironmentsTags>> tags_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
