// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMIGRATIONTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMIGRATIONTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateMigrationTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMigrationTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OriginInstanceAddress, originInstanceAddress_);
      DARABONBA_PTR_TO_JSON(OriginInstanceName, originInstanceName_);
      DARABONBA_PTR_TO_JSON(OriginInstanceNamespace, originInstanceNamespace_);
      DARABONBA_PTR_TO_JSON(ProjectDesc, projectDesc_);
      DARABONBA_PTR_TO_JSON(SyncType, syncType_);
      DARABONBA_PTR_TO_JSON(TargetClusterName, targetClusterName_);
      DARABONBA_PTR_TO_JSON(TargetClusterUrl, targetClusterUrl_);
      DARABONBA_PTR_TO_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMigrationTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OriginInstanceAddress, originInstanceAddress_);
      DARABONBA_PTR_FROM_JSON(OriginInstanceName, originInstanceName_);
      DARABONBA_PTR_FROM_JSON(OriginInstanceNamespace, originInstanceNamespace_);
      DARABONBA_PTR_FROM_JSON(ProjectDesc, projectDesc_);
      DARABONBA_PTR_FROM_JSON(SyncType, syncType_);
      DARABONBA_PTR_FROM_JSON(TargetClusterName, targetClusterName_);
      DARABONBA_PTR_FROM_JSON(TargetClusterUrl, targetClusterUrl_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    UpdateMigrationTaskResponseBodyData() = default ;
    UpdateMigrationTaskResponseBodyData(const UpdateMigrationTaskResponseBodyData &) = default ;
    UpdateMigrationTaskResponseBodyData(UpdateMigrationTaskResponseBodyData &&) = default ;
    UpdateMigrationTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMigrationTaskResponseBodyData() = default ;
    UpdateMigrationTaskResponseBodyData& operator=(const UpdateMigrationTaskResponseBodyData &) = default ;
    UpdateMigrationTaskResponseBodyData& operator=(UpdateMigrationTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterType_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->originInstanceAddress_ == nullptr && return this->originInstanceName_ == nullptr
        && return this->originInstanceNamespace_ == nullptr && return this->projectDesc_ == nullptr && return this->syncType_ == nullptr && return this->targetClusterName_ == nullptr && return this->targetClusterUrl_ == nullptr
        && return this->targetInstanceId_ == nullptr && return this->userId_ == nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline UpdateMigrationTaskResponseBodyData& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline UpdateMigrationTaskResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline UpdateMigrationTaskResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateMigrationTaskResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // originInstanceAddress Field Functions 
    bool hasOriginInstanceAddress() const { return this->originInstanceAddress_ != nullptr;};
    void deleteOriginInstanceAddress() { this->originInstanceAddress_ = nullptr;};
    inline string originInstanceAddress() const { DARABONBA_PTR_GET_DEFAULT(originInstanceAddress_, "") };
    inline UpdateMigrationTaskResponseBodyData& setOriginInstanceAddress(string originInstanceAddress) { DARABONBA_PTR_SET_VALUE(originInstanceAddress_, originInstanceAddress) };


    // originInstanceName Field Functions 
    bool hasOriginInstanceName() const { return this->originInstanceName_ != nullptr;};
    void deleteOriginInstanceName() { this->originInstanceName_ = nullptr;};
    inline string originInstanceName() const { DARABONBA_PTR_GET_DEFAULT(originInstanceName_, "") };
    inline UpdateMigrationTaskResponseBodyData& setOriginInstanceName(string originInstanceName) { DARABONBA_PTR_SET_VALUE(originInstanceName_, originInstanceName) };


    // originInstanceNamespace Field Functions 
    bool hasOriginInstanceNamespace() const { return this->originInstanceNamespace_ != nullptr;};
    void deleteOriginInstanceNamespace() { this->originInstanceNamespace_ = nullptr;};
    inline string originInstanceNamespace() const { DARABONBA_PTR_GET_DEFAULT(originInstanceNamespace_, "") };
    inline UpdateMigrationTaskResponseBodyData& setOriginInstanceNamespace(string originInstanceNamespace) { DARABONBA_PTR_SET_VALUE(originInstanceNamespace_, originInstanceNamespace) };


    // projectDesc Field Functions 
    bool hasProjectDesc() const { return this->projectDesc_ != nullptr;};
    void deleteProjectDesc() { this->projectDesc_ = nullptr;};
    inline string projectDesc() const { DARABONBA_PTR_GET_DEFAULT(projectDesc_, "") };
    inline UpdateMigrationTaskResponseBodyData& setProjectDesc(string projectDesc) { DARABONBA_PTR_SET_VALUE(projectDesc_, projectDesc) };


    // syncType Field Functions 
    bool hasSyncType() const { return this->syncType_ != nullptr;};
    void deleteSyncType() { this->syncType_ = nullptr;};
    inline string syncType() const { DARABONBA_PTR_GET_DEFAULT(syncType_, "") };
    inline UpdateMigrationTaskResponseBodyData& setSyncType(string syncType) { DARABONBA_PTR_SET_VALUE(syncType_, syncType) };


    // targetClusterName Field Functions 
    bool hasTargetClusterName() const { return this->targetClusterName_ != nullptr;};
    void deleteTargetClusterName() { this->targetClusterName_ = nullptr;};
    inline string targetClusterName() const { DARABONBA_PTR_GET_DEFAULT(targetClusterName_, "") };
    inline UpdateMigrationTaskResponseBodyData& setTargetClusterName(string targetClusterName) { DARABONBA_PTR_SET_VALUE(targetClusterName_, targetClusterName) };


    // targetClusterUrl Field Functions 
    bool hasTargetClusterUrl() const { return this->targetClusterUrl_ != nullptr;};
    void deleteTargetClusterUrl() { this->targetClusterUrl_ = nullptr;};
    inline string targetClusterUrl() const { DARABONBA_PTR_GET_DEFAULT(targetClusterUrl_, "") };
    inline UpdateMigrationTaskResponseBodyData& setTargetClusterUrl(string targetClusterUrl) { DARABONBA_PTR_SET_VALUE(targetClusterUrl_, targetClusterUrl) };


    // targetInstanceId Field Functions 
    bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
    void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
    inline string targetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
    inline UpdateMigrationTaskResponseBodyData& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateMigrationTaskResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The type of the instance.
    // 
    // *   Nacos-Ans
    // *   ZooKeeper
    // *   Eureka
    std::shared_ptr<string> clusterType_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> id_ = nullptr;
    // The address of the source instance node.
    std::shared_ptr<string> originInstanceAddress_ = nullptr;
    // The name of the source instance.
    std::shared_ptr<string> originInstanceName_ = nullptr;
    // The list of namespaces. This parameter is optional if applications are migrated from a Nacos instance.
    std::shared_ptr<string> originInstanceNamespace_ = nullptr;
    // The description.
    std::shared_ptr<string> projectDesc_ = nullptr;
    std::shared_ptr<string> syncType_ = nullptr;
    // The name of the destination instance.
    std::shared_ptr<string> targetClusterName_ = nullptr;
    // The URL of the destination instance.
    std::shared_ptr<string> targetClusterUrl_ = nullptr;
    // The ID of the destination instance.
    std::shared_ptr<string> targetInstanceId_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
