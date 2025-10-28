// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTDEPLOYGROUPRESPONSEBODYDEPLOYGROUPENTITY_HPP_
#define ALIBABACLOUD_MODELS_INSERTDEPLOYGROUPRESPONSEBODYDEPLOYGROUPENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertDeployGroupResponseBodyDeployGroupEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertDeployGroupResponseBodyDeployGroupEntity& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppVersionId, appVersionId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PackageVersionId, packageVersionId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, InsertDeployGroupResponseBodyDeployGroupEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppVersionId, appVersionId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PackageVersionId, packageVersionId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    InsertDeployGroupResponseBodyDeployGroupEntity() = default ;
    InsertDeployGroupResponseBodyDeployGroupEntity(const InsertDeployGroupResponseBodyDeployGroupEntity &) = default ;
    InsertDeployGroupResponseBodyDeployGroupEntity(InsertDeployGroupResponseBodyDeployGroupEntity &&) = default ;
    InsertDeployGroupResponseBodyDeployGroupEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertDeployGroupResponseBodyDeployGroupEntity() = default ;
    InsertDeployGroupResponseBodyDeployGroupEntity& operator=(const InsertDeployGroupResponseBodyDeployGroupEntity &) = default ;
    InsertDeployGroupResponseBodyDeployGroupEntity& operator=(InsertDeployGroupResponseBodyDeployGroupEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appVersionId_ == nullptr && return this->clusterId_ == nullptr && return this->createTime_ == nullptr && return this->groupName_ == nullptr && return this->groupType_ == nullptr
        && return this->id_ == nullptr && return this->packageVersionId_ == nullptr && return this->updateTime_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline InsertDeployGroupResponseBodyDeployGroupEntity& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appVersionId Field Functions 
    bool hasAppVersionId() const { return this->appVersionId_ != nullptr;};
    void deleteAppVersionId() { this->appVersionId_ = nullptr;};
    inline string appVersionId() const { DARABONBA_PTR_GET_DEFAULT(appVersionId_, "") };
    inline InsertDeployGroupResponseBodyDeployGroupEntity& setAppVersionId(string appVersionId) { DARABONBA_PTR_SET_VALUE(appVersionId_, appVersionId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline InsertDeployGroupResponseBodyDeployGroupEntity& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline InsertDeployGroupResponseBodyDeployGroupEntity& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline InsertDeployGroupResponseBodyDeployGroupEntity& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline int32_t groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, 0) };
    inline InsertDeployGroupResponseBodyDeployGroupEntity& setGroupType(int32_t groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline InsertDeployGroupResponseBodyDeployGroupEntity& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // packageVersionId Field Functions 
    bool hasPackageVersionId() const { return this->packageVersionId_ != nullptr;};
    void deletePackageVersionId() { this->packageVersionId_ = nullptr;};
    inline string packageVersionId() const { DARABONBA_PTR_GET_DEFAULT(packageVersionId_, "") };
    inline InsertDeployGroupResponseBodyDeployGroupEntity& setPackageVersionId(string packageVersionId) { DARABONBA_PTR_SET_VALUE(packageVersionId_, packageVersionId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline InsertDeployGroupResponseBodyDeployGroupEntity& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The version of the deployment package for the application.
    // 
    // *   If the application is deployed, a string of random numbers is returned.
    // *   If the application is not deployed, the return value is empty.
    std::shared_ptr<string> appVersionId_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The time when the instance group was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The name of the instance group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The type of the instance group. Valid values:
    // 
    // *   0: the default group.
    // *   1: a group for which canary traffic management is not enabled.
    // *   2: a group for which canary traffic management is enabled.
    std::shared_ptr<int32_t> groupType_ = nullptr;
    // The ID of the instance group.
    std::shared_ptr<string> id_ = nullptr;
    // The version of the deployment package that was used to deploy an application in the instance group.
    // 
    // *   If an application is deployed in the instance group, a string of random numbers is returned.
    // *   If no application is deployed in the instance group, the return value is empty.
    std::shared_ptr<string> packageVersionId_ = nullptr;
    // The time when the instance group was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
