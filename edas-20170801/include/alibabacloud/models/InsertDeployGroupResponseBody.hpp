// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTDEPLOYGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSERTDEPLOYGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertDeployGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertDeployGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DeployGroupEntity, deployGroupEntity_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertDeployGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DeployGroupEntity, deployGroupEntity_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    InsertDeployGroupResponseBody() = default ;
    InsertDeployGroupResponseBody(const InsertDeployGroupResponseBody &) = default ;
    InsertDeployGroupResponseBody(InsertDeployGroupResponseBody &&) = default ;
    InsertDeployGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertDeployGroupResponseBody() = default ;
    InsertDeployGroupResponseBody& operator=(const InsertDeployGroupResponseBody &) = default ;
    InsertDeployGroupResponseBody& operator=(InsertDeployGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeployGroupEntity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeployGroupEntity& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DeployGroupEntity& obj) { 
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
      DeployGroupEntity() = default ;
      DeployGroupEntity(const DeployGroupEntity &) = default ;
      DeployGroupEntity(DeployGroupEntity &&) = default ;
      DeployGroupEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeployGroupEntity() = default ;
      DeployGroupEntity& operator=(const DeployGroupEntity &) = default ;
      DeployGroupEntity& operator=(DeployGroupEntity &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appVersionId_ == nullptr && this->clusterId_ == nullptr && this->createTime_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr
        && this->id_ == nullptr && this->packageVersionId_ == nullptr && this->updateTime_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline DeployGroupEntity& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appVersionId Field Functions 
      bool hasAppVersionId() const { return this->appVersionId_ != nullptr;};
      void deleteAppVersionId() { this->appVersionId_ = nullptr;};
      inline string getAppVersionId() const { DARABONBA_PTR_GET_DEFAULT(appVersionId_, "") };
      inline DeployGroupEntity& setAppVersionId(string appVersionId) { DARABONBA_PTR_SET_VALUE(appVersionId_, appVersionId) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline DeployGroupEntity& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DeployGroupEntity& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline DeployGroupEntity& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // groupType Field Functions 
      bool hasGroupType() const { return this->groupType_ != nullptr;};
      void deleteGroupType() { this->groupType_ = nullptr;};
      inline int32_t getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, 0) };
      inline DeployGroupEntity& setGroupType(int32_t groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DeployGroupEntity& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // packageVersionId Field Functions 
      bool hasPackageVersionId() const { return this->packageVersionId_ != nullptr;};
      void deletePackageVersionId() { this->packageVersionId_ = nullptr;};
      inline string getPackageVersionId() const { DARABONBA_PTR_GET_DEFAULT(packageVersionId_, "") };
      inline DeployGroupEntity& setPackageVersionId(string packageVersionId) { DARABONBA_PTR_SET_VALUE(packageVersionId_, packageVersionId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline DeployGroupEntity& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The version of the deployment package for the application.
      // 
      // - If the application is deployed, a string of random numbers is returned.
      // 
      // - If the application is not deployed, the return value is empty.
      shared_ptr<string> appVersionId_ {};
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
      // The time when the instance group was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> createTime_ {};
      // The name of the instance group.
      shared_ptr<string> groupName_ {};
      // The type of the instance group. Valid values:
      // 
      // - 0: the default group.
      // 
      // - 1: a group for which canary traffic management is not enabled.
      // 
      // - 2: a group for which canary traffic management is enabled.
      shared_ptr<int32_t> groupType_ {};
      // The ID of the instance group.
      shared_ptr<string> id_ {};
      // The version of the deployment package that was used to deploy an application in the instance group.
      // 
      // - If an application is deployed in the instance group, a string of random numbers is returned.
      // 
      // - If no application is deployed in the instance group, the return value is empty.
      shared_ptr<string> packageVersionId_ {};
      // The time when the instance group was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->deployGroupEntity_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline InsertDeployGroupResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // deployGroupEntity Field Functions 
    bool hasDeployGroupEntity() const { return this->deployGroupEntity_ != nullptr;};
    void deleteDeployGroupEntity() { this->deployGroupEntity_ = nullptr;};
    inline const InsertDeployGroupResponseBody::DeployGroupEntity & getDeployGroupEntity() const { DARABONBA_PTR_GET_CONST(deployGroupEntity_, InsertDeployGroupResponseBody::DeployGroupEntity) };
    inline InsertDeployGroupResponseBody::DeployGroupEntity getDeployGroupEntity() { DARABONBA_PTR_GET(deployGroupEntity_, InsertDeployGroupResponseBody::DeployGroupEntity) };
    inline InsertDeployGroupResponseBody& setDeployGroupEntity(const InsertDeployGroupResponseBody::DeployGroupEntity & deployGroupEntity) { DARABONBA_PTR_SET_VALUE(deployGroupEntity_, deployGroupEntity) };
    inline InsertDeployGroupResponseBody& setDeployGroupEntity(InsertDeployGroupResponseBody::DeployGroupEntity && deployGroupEntity) { DARABONBA_PTR_SET_RVALUE(deployGroupEntity_, deployGroupEntity) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InsertDeployGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InsertDeployGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The information about the instance group.
    shared_ptr<InsertDeployGroupResponseBody::DeployGroupEntity> deployGroupEntity_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
