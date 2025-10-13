// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONGROUPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONGROUPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationGroupsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Jdk, jdk_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_TO_JSON(PackageVersionId, packageVersionId_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(RunningInstances, runningInstances_);
      DARABONBA_PTR_TO_JSON(WebContainer, webContainer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Jdk, jdk_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_FROM_JSON(PackageVersionId, packageVersionId_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(RunningInstances, runningInstances_);
      DARABONBA_PTR_FROM_JSON(WebContainer, webContainer_);
    };
    DescribeApplicationGroupsResponseBodyData() = default ;
    DescribeApplicationGroupsResponseBodyData(const DescribeApplicationGroupsResponseBodyData &) = default ;
    DescribeApplicationGroupsResponseBodyData(DescribeApplicationGroupsResponseBodyData &&) = default ;
    DescribeApplicationGroupsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationGroupsResponseBodyData() = default ;
    DescribeApplicationGroupsResponseBodyData& operator=(const DescribeApplicationGroupsResponseBodyData &) = default ;
    DescribeApplicationGroupsResponseBodyData& operator=(DescribeApplicationGroupsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edasContainerVersion_ == nullptr
        && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->groupType_ == nullptr && return this->imageUrl_ == nullptr && return this->jdk_ == nullptr
        && return this->packageType_ == nullptr && return this->packageUrl_ == nullptr && return this->packageVersion_ == nullptr && return this->packageVersionId_ == nullptr && return this->replicas_ == nullptr
        && return this->runningInstances_ == nullptr && return this->webContainer_ == nullptr; };
    // edasContainerVersion Field Functions 
    bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
    void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
    inline string edasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
    inline DescribeApplicationGroupsResponseBodyData& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApplicationGroupsResponseBodyData& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApplicationGroupsResponseBodyData& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline int32_t groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, 0) };
    inline DescribeApplicationGroupsResponseBodyData& setGroupType(int32_t groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DescribeApplicationGroupsResponseBodyData& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // jdk Field Functions 
    bool hasJdk() const { return this->jdk_ != nullptr;};
    void deleteJdk() { this->jdk_ = nullptr;};
    inline string jdk() const { DARABONBA_PTR_GET_DEFAULT(jdk_, "") };
    inline DescribeApplicationGroupsResponseBodyData& setJdk(string jdk) { DARABONBA_PTR_SET_VALUE(jdk_, jdk) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline DescribeApplicationGroupsResponseBodyData& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string packageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline DescribeApplicationGroupsResponseBodyData& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string packageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline DescribeApplicationGroupsResponseBodyData& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // packageVersionId Field Functions 
    bool hasPackageVersionId() const { return this->packageVersionId_ != nullptr;};
    void deletePackageVersionId() { this->packageVersionId_ = nullptr;};
    inline string packageVersionId() const { DARABONBA_PTR_GET_DEFAULT(packageVersionId_, "") };
    inline DescribeApplicationGroupsResponseBodyData& setPackageVersionId(string packageVersionId) { DARABONBA_PTR_SET_VALUE(packageVersionId_, packageVersionId) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline DescribeApplicationGroupsResponseBodyData& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // runningInstances Field Functions 
    bool hasRunningInstances() const { return this->runningInstances_ != nullptr;};
    void deleteRunningInstances() { this->runningInstances_ = nullptr;};
    inline int32_t runningInstances() const { DARABONBA_PTR_GET_DEFAULT(runningInstances_, 0) };
    inline DescribeApplicationGroupsResponseBodyData& setRunningInstances(int32_t runningInstances) { DARABONBA_PTR_SET_VALUE(runningInstances_, runningInstances) };


    // webContainer Field Functions 
    bool hasWebContainer() const { return this->webContainer_ != nullptr;};
    void deleteWebContainer() { this->webContainer_ = nullptr;};
    inline string webContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
    inline DescribeApplicationGroupsResponseBodyData& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


  protected:
    // The version of the container, such as Ali-Tomcat, in which an application that is developed based on High-speed Service Framework (HSF) is deployed.
    std::shared_ptr<string> edasContainerVersion_ = nullptr;
    // The ID of the instance group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the instance group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The type of the instance group.
    std::shared_ptr<int32_t> groupType_ = nullptr;
    // The URL of the image. This parameter is returned only if the **PackageType** parameter is set to **Image**.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // The version of the JDK on which the deployment package of the application depends. This parameter is not returned if the **PackageType** parameter is set to **Image**.
    std::shared_ptr<string> jdk_ = nullptr;
    // The type of the deployment package. Valid values:
    // 
    // *   If you deploy a Java application, the value of this parameter can be **FatJar**, **War**, or **Image**.
    // 
    // *   If you deploy a PHP application, the value of this parameter can be one of the following values:
    // 
    //     *   **PhpZip**
    //     *   **IMAGE_PHP_5_4**
    //     *   **IMAGE_PHP_5_4_ALPINE**
    //     *   **IMAGE_PHP_5_5**
    //     *   **IMAGE_PHP_5_5_ALPINE**
    //     *   **IMAGE_PHP_5_6**
    //     *   **IMAGE_PHP_5_6_ALPINE**
    //     *   **IMAGE_PHP_7_0**
    //     *   **IMAGE_PHP_7_0_ALPINE**
    //     *   **IMAGE_PHP_7_1**
    //     *   **IMAGE_PHP_7_1_ALPINE**
    //     *   **IMAGE_PHP_7_2**
    //     *   **IMAGE_PHP_7_2_ALPINE**
    //     *   **IMAGE_PHP_7_3**
    //     *   **IMAGE_PHP_7_3_ALPINE**
    std::shared_ptr<string> packageType_ = nullptr;
    // The URL of the deployment package. This parameter is returned only if the **PackageType** parameter is set to **FatJar**, **War**, or **PhpZip**.
    std::shared_ptr<string> packageUrl_ = nullptr;
    // The version of the deployment package. This parameter is returned only if the **PackageType** parameter is set to **FatJar**, **War**, or **PhpZip**. The value of this parameter is automatically generated only if the **ImageUrl** is returned.
    std::shared_ptr<string> packageVersion_ = nullptr;
    std::shared_ptr<string> packageVersionId_ = nullptr;
    // The total number of instances.
    std::shared_ptr<int32_t> replicas_ = nullptr;
    // The number of running instances.
    std::shared_ptr<int32_t> runningInstances_ = nullptr;
    // The version of the Tomcat container on which the deployment package depends. This parameter is not returned if the **PackageType** parameter is set to **Image**.
    std::shared_ptr<string> webContainer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
