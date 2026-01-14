// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMIGRATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMIGRATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateMigrationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMigrationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OriginInstanceAddress, originInstanceAddress_);
      DARABONBA_PTR_TO_JSON(OriginInstanceName, originInstanceName_);
      DARABONBA_PTR_TO_JSON(OriginInstanceNamespace, originInstanceNamespace_);
      DARABONBA_PTR_TO_JSON(ProjectDesc, projectDesc_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_TO_JSON(SyncType, syncType_);
      DARABONBA_PTR_TO_JSON(TargetClusterName, targetClusterName_);
      DARABONBA_PTR_TO_JSON(TargetClusterUrl, targetClusterUrl_);
      DARABONBA_PTR_TO_JSON(TargetInstanceId, targetInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMigrationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OriginInstanceAddress, originInstanceAddress_);
      DARABONBA_PTR_FROM_JSON(OriginInstanceName, originInstanceName_);
      DARABONBA_PTR_FROM_JSON(OriginInstanceNamespace, originInstanceNamespace_);
      DARABONBA_PTR_FROM_JSON(ProjectDesc, projectDesc_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_FROM_JSON(SyncType, syncType_);
      DARABONBA_PTR_FROM_JSON(TargetClusterName, targetClusterName_);
      DARABONBA_PTR_FROM_JSON(TargetClusterUrl, targetClusterUrl_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceId, targetInstanceId_);
    };
    UpdateMigrationTaskRequest() = default ;
    UpdateMigrationTaskRequest(const UpdateMigrationTaskRequest &) = default ;
    UpdateMigrationTaskRequest(UpdateMigrationTaskRequest &&) = default ;
    UpdateMigrationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMigrationTaskRequest() = default ;
    UpdateMigrationTaskRequest& operator=(const UpdateMigrationTaskRequest &) = default ;
    UpdateMigrationTaskRequest& operator=(UpdateMigrationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->clusterType_ == nullptr && this->id_ == nullptr && this->originInstanceAddress_ == nullptr && this->originInstanceName_ == nullptr && this->originInstanceNamespace_ == nullptr
        && this->projectDesc_ == nullptr && this->requestPars_ == nullptr && this->syncType_ == nullptr && this->targetClusterName_ == nullptr && this->targetClusterUrl_ == nullptr
        && this->targetInstanceId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateMigrationTaskRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline UpdateMigrationTaskRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateMigrationTaskRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // originInstanceAddress Field Functions 
    bool hasOriginInstanceAddress() const { return this->originInstanceAddress_ != nullptr;};
    void deleteOriginInstanceAddress() { this->originInstanceAddress_ = nullptr;};
    inline string getOriginInstanceAddress() const { DARABONBA_PTR_GET_DEFAULT(originInstanceAddress_, "") };
    inline UpdateMigrationTaskRequest& setOriginInstanceAddress(string originInstanceAddress) { DARABONBA_PTR_SET_VALUE(originInstanceAddress_, originInstanceAddress) };


    // originInstanceName Field Functions 
    bool hasOriginInstanceName() const { return this->originInstanceName_ != nullptr;};
    void deleteOriginInstanceName() { this->originInstanceName_ = nullptr;};
    inline string getOriginInstanceName() const { DARABONBA_PTR_GET_DEFAULT(originInstanceName_, "") };
    inline UpdateMigrationTaskRequest& setOriginInstanceName(string originInstanceName) { DARABONBA_PTR_SET_VALUE(originInstanceName_, originInstanceName) };


    // originInstanceNamespace Field Functions 
    bool hasOriginInstanceNamespace() const { return this->originInstanceNamespace_ != nullptr;};
    void deleteOriginInstanceNamespace() { this->originInstanceNamespace_ = nullptr;};
    inline string getOriginInstanceNamespace() const { DARABONBA_PTR_GET_DEFAULT(originInstanceNamespace_, "") };
    inline UpdateMigrationTaskRequest& setOriginInstanceNamespace(string originInstanceNamespace) { DARABONBA_PTR_SET_VALUE(originInstanceNamespace_, originInstanceNamespace) };


    // projectDesc Field Functions 
    bool hasProjectDesc() const { return this->projectDesc_ != nullptr;};
    void deleteProjectDesc() { this->projectDesc_ = nullptr;};
    inline string getProjectDesc() const { DARABONBA_PTR_GET_DEFAULT(projectDesc_, "") };
    inline UpdateMigrationTaskRequest& setProjectDesc(string projectDesc) { DARABONBA_PTR_SET_VALUE(projectDesc_, projectDesc) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string getRequestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline UpdateMigrationTaskRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


    // syncType Field Functions 
    bool hasSyncType() const { return this->syncType_ != nullptr;};
    void deleteSyncType() { this->syncType_ = nullptr;};
    inline string getSyncType() const { DARABONBA_PTR_GET_DEFAULT(syncType_, "") };
    inline UpdateMigrationTaskRequest& setSyncType(string syncType) { DARABONBA_PTR_SET_VALUE(syncType_, syncType) };


    // targetClusterName Field Functions 
    bool hasTargetClusterName() const { return this->targetClusterName_ != nullptr;};
    void deleteTargetClusterName() { this->targetClusterName_ = nullptr;};
    inline string getTargetClusterName() const { DARABONBA_PTR_GET_DEFAULT(targetClusterName_, "") };
    inline UpdateMigrationTaskRequest& setTargetClusterName(string targetClusterName) { DARABONBA_PTR_SET_VALUE(targetClusterName_, targetClusterName) };


    // targetClusterUrl Field Functions 
    bool hasTargetClusterUrl() const { return this->targetClusterUrl_ != nullptr;};
    void deleteTargetClusterUrl() { this->targetClusterUrl_ = nullptr;};
    inline string getTargetClusterUrl() const { DARABONBA_PTR_GET_DEFAULT(targetClusterUrl_, "") };
    inline UpdateMigrationTaskRequest& setTargetClusterUrl(string targetClusterUrl) { DARABONBA_PTR_SET_VALUE(targetClusterUrl_, targetClusterUrl) };


    // targetInstanceId Field Functions 
    bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
    void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
    inline string getTargetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
    inline UpdateMigrationTaskRequest& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The type of the instance. Valid values:
    // 
    // *   Nacos-Ans
    // *   ZooKeeper
    // *   Eureka
    shared_ptr<string> clusterType_ {};
    // The ID of the task.
    shared_ptr<string> id_ {};
    // The address of the source instance node.
    shared_ptr<string> originInstanceAddress_ {};
    // The name of the source instance.
    shared_ptr<string> originInstanceName_ {};
    // The list of namespaces. This parameter is optional if you want to migrate applications from a Nacos instance.
    shared_ptr<string> originInstanceNamespace_ {};
    // The description.
    shared_ptr<string> projectDesc_ {};
    // The extended request parameters in the JSON format.
    shared_ptr<string> requestPars_ {};
    shared_ptr<string> syncType_ {};
    // The name of the destination instance.
    shared_ptr<string> targetClusterName_ {};
    // The URL of the destination instance.
    shared_ptr<string> targetClusterUrl_ {};
    // The ID of the destination instance.
    shared_ptr<string> targetInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
