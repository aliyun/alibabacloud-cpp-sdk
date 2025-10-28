// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DeployApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppEnv, appEnv_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Batch, batch_);
      DARABONBA_PTR_TO_JSON(BatchWaitTime, batchWaitTime_);
      DARABONBA_PTR_TO_JSON(BuildPackId, buildPackId_);
      DARABONBA_PTR_TO_JSON(ComponentIds, componentIds_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Gray, gray_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_TO_JSON(ReleaseType, releaseType_);
      DARABONBA_PTR_TO_JSON(TrafficControlStrategy, trafficControlStrategy_);
      DARABONBA_PTR_TO_JSON(WarUrl, warUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DeployApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppEnv, appEnv_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Batch, batch_);
      DARABONBA_PTR_FROM_JSON(BatchWaitTime, batchWaitTime_);
      DARABONBA_PTR_FROM_JSON(BuildPackId, buildPackId_);
      DARABONBA_PTR_FROM_JSON(ComponentIds, componentIds_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Gray, gray_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_FROM_JSON(ReleaseType, releaseType_);
      DARABONBA_PTR_FROM_JSON(TrafficControlStrategy, trafficControlStrategy_);
      DARABONBA_PTR_FROM_JSON(WarUrl, warUrl_);
    };
    DeployApplicationRequest() = default ;
    DeployApplicationRequest(const DeployApplicationRequest &) = default ;
    DeployApplicationRequest(DeployApplicationRequest &&) = default ;
    DeployApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployApplicationRequest() = default ;
    DeployApplicationRequest& operator=(const DeployApplicationRequest &) = default ;
    DeployApplicationRequest& operator=(DeployApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appEnv_ == nullptr
        && return this->appId_ == nullptr && return this->batch_ == nullptr && return this->batchWaitTime_ == nullptr && return this->buildPackId_ == nullptr && return this->componentIds_ == nullptr
        && return this->deployType_ == nullptr && return this->desc_ == nullptr && return this->gray_ == nullptr && return this->groupId_ == nullptr && return this->imageUrl_ == nullptr
        && return this->packageVersion_ == nullptr && return this->releaseType_ == nullptr && return this->trafficControlStrategy_ == nullptr && return this->warUrl_ == nullptr; };
    // appEnv Field Functions 
    bool hasAppEnv() const { return this->appEnv_ != nullptr;};
    void deleteAppEnv() { this->appEnv_ = nullptr;};
    inline string appEnv() const { DARABONBA_PTR_GET_DEFAULT(appEnv_, "") };
    inline DeployApplicationRequest& setAppEnv(string appEnv) { DARABONBA_PTR_SET_VALUE(appEnv_, appEnv) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeployApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // batch Field Functions 
    bool hasBatch() const { return this->batch_ != nullptr;};
    void deleteBatch() { this->batch_ = nullptr;};
    inline int32_t batch() const { DARABONBA_PTR_GET_DEFAULT(batch_, 0) };
    inline DeployApplicationRequest& setBatch(int32_t batch) { DARABONBA_PTR_SET_VALUE(batch_, batch) };


    // batchWaitTime Field Functions 
    bool hasBatchWaitTime() const { return this->batchWaitTime_ != nullptr;};
    void deleteBatchWaitTime() { this->batchWaitTime_ = nullptr;};
    inline int32_t batchWaitTime() const { DARABONBA_PTR_GET_DEFAULT(batchWaitTime_, 0) };
    inline DeployApplicationRequest& setBatchWaitTime(int32_t batchWaitTime) { DARABONBA_PTR_SET_VALUE(batchWaitTime_, batchWaitTime) };


    // buildPackId Field Functions 
    bool hasBuildPackId() const { return this->buildPackId_ != nullptr;};
    void deleteBuildPackId() { this->buildPackId_ = nullptr;};
    inline int64_t buildPackId() const { DARABONBA_PTR_GET_DEFAULT(buildPackId_, 0L) };
    inline DeployApplicationRequest& setBuildPackId(int64_t buildPackId) { DARABONBA_PTR_SET_VALUE(buildPackId_, buildPackId) };


    // componentIds Field Functions 
    bool hasComponentIds() const { return this->componentIds_ != nullptr;};
    void deleteComponentIds() { this->componentIds_ = nullptr;};
    inline string componentIds() const { DARABONBA_PTR_GET_DEFAULT(componentIds_, "") };
    inline DeployApplicationRequest& setComponentIds(string componentIds) { DARABONBA_PTR_SET_VALUE(componentIds_, componentIds) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline string deployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
    inline DeployApplicationRequest& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DeployApplicationRequest& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // gray Field Functions 
    bool hasGray() const { return this->gray_ != nullptr;};
    void deleteGray() { this->gray_ = nullptr;};
    inline bool gray() const { DARABONBA_PTR_GET_DEFAULT(gray_, false) };
    inline DeployApplicationRequest& setGray(bool gray) { DARABONBA_PTR_SET_VALUE(gray_, gray) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DeployApplicationRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DeployApplicationRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string packageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline DeployApplicationRequest& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // releaseType Field Functions 
    bool hasReleaseType() const { return this->releaseType_ != nullptr;};
    void deleteReleaseType() { this->releaseType_ = nullptr;};
    inline int64_t releaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, 0L) };
    inline DeployApplicationRequest& setReleaseType(int64_t releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


    // trafficControlStrategy Field Functions 
    bool hasTrafficControlStrategy() const { return this->trafficControlStrategy_ != nullptr;};
    void deleteTrafficControlStrategy() { this->trafficControlStrategy_ = nullptr;};
    inline string trafficControlStrategy() const { DARABONBA_PTR_GET_DEFAULT(trafficControlStrategy_, "") };
    inline DeployApplicationRequest& setTrafficControlStrategy(string trafficControlStrategy) { DARABONBA_PTR_SET_VALUE(trafficControlStrategy_, trafficControlStrategy) };


    // warUrl Field Functions 
    bool hasWarUrl() const { return this->warUrl_ != nullptr;};
    void deleteWarUrl() { this->warUrl_ = nullptr;};
    inline string warUrl() const { DARABONBA_PTR_GET_DEFAULT(warUrl_, "") };
    inline DeployApplicationRequest& setWarUrl(string warUrl) { DARABONBA_PTR_SET_VALUE(warUrl_, warUrl) };


  protected:
    // The environment variables of the application. Specify each environment variable by using two key-value pairs. Example: `{"name":"x","value":"y"},{"name":"x2","value":"y2"}`. The `keys` of the two key-value pairs are `name` and `value`.
    std::shared_ptr<string> appEnv_ = nullptr;
    // The ID of the application. You can call the ListApplication operation to query the application ID. For more information, see [ListApplication](https://help.aliyun.com/document_detail/423162.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The number of batches per instance group.
    // 
    // *   If you specify an ID when you set the GroupId parameter, the application is deployed to the specified instance group. The minimum number of batches that can be specified is 1. The maximum number of batches is the maximum number of ECS instances in the Normal state in the instance group. The actual value falls in the range of [1, specified number]. The specified number of batches equals the number of ECS instances in the specified instance group.
    // *   If you set the GroupId parameter to all, the application is deployed to all instance groups. The minimum number of batches that can be specified is 1. The maximum number of batches is the number of ECS instances in the instance group that has the largest number of ECS instances in the Normal state.
    std::shared_ptr<int32_t> batch_ = nullptr;
    // The wait time between deployment batches for the application. Unit: minutes.
    // 
    // *   Default value: 0. If no wait time between deployment batches is needed, set this parameter to 0.
    // *   Maximum value: 5.
    // 
    // If many deployment batches are needed, we recommend that you specify a small value for this parameter. Otherwise, the application deployment is time-consuming.
    std::shared_ptr<int32_t> batchWaitTime_ = nullptr;
    // The build package number of EDAS Container.
    // 
    // *   You do not need to set the parameter if you do not need to change the EDAS Container version during the deployment.
    // *   Set the parameter if you need to update the EDAS Container version of the application during the deployment.
    // 
    // You can query the build package number by using one of the following methods:
    // 
    // *   Call the ListBuildPack operation. For more information, see [ListBuildPack](https://help.aliyun.com/document_detail/149391.html).
    // *   Obtain the value in the **Build package number** column of the [Release notes for EDAS Container](https://help.aliyun.com/document_detail/92614.html) topic. For example, `59` indicates `EDAS Container 3.5.8`.
    std::shared_ptr<int64_t> buildPackId_ = nullptr;
    // The IDs of the components used by the application. The parameter is not applicable to High-Speed Framework (HSF) applications. You can call the ListComponents operation to query the component IDs. For more information, see [ListComponents](https://help.aliyun.com/document_detail/423223.html).
    // 
    // *   If you have specified the component IDs when you create the application, you do not need to set the parameter when you deploy the application.
    // *   Set the parameter if you need to update the component versions for the application during the deployment.
    // 
    // Valid values for common application components:
    // 
    // *   4: Apache Tomcat 7.0.91
    // *   7: Apache Tomcat 8.5.42
    // *   5: OpenJDK 1.8.x
    // *   6: OpenJDK 1.7.x
    // 
    // For more information, see the Common application parameters section of the [InsertApplication](https://help.aliyun.com/document_detail/423185.html) topic.
    std::shared_ptr<string> componentIds_ = nullptr;
    // The deployment mode of the application. Valid values: `url` and `image`. The image value is deprecated. You can deploy an application to a Swarm cluster only by using an image.``
    // 
    // This parameter is required.
    std::shared_ptr<string> deployType_ = nullptr;
    // The description of the application deployment.
    std::shared_ptr<string> desc_ = nullptr;
    // Specifies whether canary release is selected as the deployment method. Valid values:
    // 
    // *   true: Canary release is selected.
    // 
    //     *   To implement a canary release, specify the GroupId parameter, which specifies the ID of the instance group for the canary release.
    //     *   Canary release can be selected as the deployment method for only one batch.
    //     *   After the canary release is complete, the application is released in regular mode. The Batch parameter specifies the number of batches.
    // 
    // *   false: Single-batch release or phased release is selected.
    std::shared_ptr<bool> gray_ = nullptr;
    // The ID of the instance group to which the application is deployed. You can call the ListDeployGroup operation to query the ID of the instance group. For more information, see [ListDeployGroup](https://help.aliyun.com/document_detail/423184.html).
    // 
    // Set the parameter to `all` if you want to deploy the application to all instance groups.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The URL of the application image that is used to deploy the application in a Swarm cluster. We recommend that you use an image that is stored in Alibaba Cloud Container Registry. This parameter is deprecated.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // The version of the application deployment package. The value can be up to 64 characters in length. We recommend that you use a timestamp.
    // 
    // This parameter is required.
    std::shared_ptr<string> packageVersion_ = nullptr;
    // The mode in which the deployment batches are triggered. Valid values:
    // 
    // *   0: automatic.
    // *   1: You must manually trigger the next batch. You can manually click **Proceed to Next Batch** in the console or call the ContinuePipeline operation to proceed to the next batch. We recommend that you choose the automatic mode when you call an API operation to deploy the application. For more information, see [ContinuePipeline](https://help.aliyun.com/document_detail/126990.html).
    std::shared_ptr<int64_t> releaseType_ = nullptr;
    // The canary release policy. For more information about canary release policies, see [DeployK8sApplication](https://help.aliyun.com/document_detail/423212.html).
    std::shared_ptr<string> trafficControlStrategy_ = nullptr;
    // The URL of the application deployment package. The package can be a WAR or JAR package. This parameter is required if you set the **DeployType** parameter to `url`. We recommend that you specify the URL of an application deployment package that is stored in an Object Storage Service (OSS) bucket.
    std::shared_ptr<string> warUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
