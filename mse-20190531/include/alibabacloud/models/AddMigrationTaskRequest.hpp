// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMIGRATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMIGRATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddMigrationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMigrationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
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
    friend void from_json(const Darabonba::Json& j, AddMigrationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
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
    AddMigrationTaskRequest() = default ;
    AddMigrationTaskRequest(const AddMigrationTaskRequest &) = default ;
    AddMigrationTaskRequest(AddMigrationTaskRequest &&) = default ;
    AddMigrationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMigrationTaskRequest() = default ;
    AddMigrationTaskRequest& operator=(const AddMigrationTaskRequest &) = default ;
    AddMigrationTaskRequest& operator=(AddMigrationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->clusterType_ == nullptr && this->originInstanceAddress_ == nullptr && this->originInstanceName_ == nullptr && this->originInstanceNamespace_ == nullptr && this->projectDesc_ == nullptr
        && this->requestPars_ == nullptr && this->syncType_ == nullptr && this->targetClusterName_ == nullptr && this->targetClusterUrl_ == nullptr && this->targetInstanceId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddMigrationTaskRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline AddMigrationTaskRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // originInstanceAddress Field Functions 
    bool hasOriginInstanceAddress() const { return this->originInstanceAddress_ != nullptr;};
    void deleteOriginInstanceAddress() { this->originInstanceAddress_ = nullptr;};
    inline string getOriginInstanceAddress() const { DARABONBA_PTR_GET_DEFAULT(originInstanceAddress_, "") };
    inline AddMigrationTaskRequest& setOriginInstanceAddress(string originInstanceAddress) { DARABONBA_PTR_SET_VALUE(originInstanceAddress_, originInstanceAddress) };


    // originInstanceName Field Functions 
    bool hasOriginInstanceName() const { return this->originInstanceName_ != nullptr;};
    void deleteOriginInstanceName() { this->originInstanceName_ = nullptr;};
    inline string getOriginInstanceName() const { DARABONBA_PTR_GET_DEFAULT(originInstanceName_, "") };
    inline AddMigrationTaskRequest& setOriginInstanceName(string originInstanceName) { DARABONBA_PTR_SET_VALUE(originInstanceName_, originInstanceName) };


    // originInstanceNamespace Field Functions 
    bool hasOriginInstanceNamespace() const { return this->originInstanceNamespace_ != nullptr;};
    void deleteOriginInstanceNamespace() { this->originInstanceNamespace_ = nullptr;};
    inline string getOriginInstanceNamespace() const { DARABONBA_PTR_GET_DEFAULT(originInstanceNamespace_, "") };
    inline AddMigrationTaskRequest& setOriginInstanceNamespace(string originInstanceNamespace) { DARABONBA_PTR_SET_VALUE(originInstanceNamespace_, originInstanceNamespace) };


    // projectDesc Field Functions 
    bool hasProjectDesc() const { return this->projectDesc_ != nullptr;};
    void deleteProjectDesc() { this->projectDesc_ = nullptr;};
    inline string getProjectDesc() const { DARABONBA_PTR_GET_DEFAULT(projectDesc_, "") };
    inline AddMigrationTaskRequest& setProjectDesc(string projectDesc) { DARABONBA_PTR_SET_VALUE(projectDesc_, projectDesc) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string getRequestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline AddMigrationTaskRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


    // syncType Field Functions 
    bool hasSyncType() const { return this->syncType_ != nullptr;};
    void deleteSyncType() { this->syncType_ = nullptr;};
    inline string getSyncType() const { DARABONBA_PTR_GET_DEFAULT(syncType_, "") };
    inline AddMigrationTaskRequest& setSyncType(string syncType) { DARABONBA_PTR_SET_VALUE(syncType_, syncType) };


    // targetClusterName Field Functions 
    bool hasTargetClusterName() const { return this->targetClusterName_ != nullptr;};
    void deleteTargetClusterName() { this->targetClusterName_ = nullptr;};
    inline string getTargetClusterName() const { DARABONBA_PTR_GET_DEFAULT(targetClusterName_, "") };
    inline AddMigrationTaskRequest& setTargetClusterName(string targetClusterName) { DARABONBA_PTR_SET_VALUE(targetClusterName_, targetClusterName) };


    // targetClusterUrl Field Functions 
    bool hasTargetClusterUrl() const { return this->targetClusterUrl_ != nullptr;};
    void deleteTargetClusterUrl() { this->targetClusterUrl_ = nullptr;};
    inline string getTargetClusterUrl() const { DARABONBA_PTR_GET_DEFAULT(targetClusterUrl_, "") };
    inline AddMigrationTaskRequest& setTargetClusterUrl(string targetClusterUrl) { DARABONBA_PTR_SET_VALUE(targetClusterUrl_, targetClusterUrl) };


    // targetInstanceId Field Functions 
    bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
    void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
    inline string getTargetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
    inline AddMigrationTaskRequest& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


  protected:
    // Language type of the returned information:
    // 
    // - zh: Chinese
    // - en: English
    shared_ptr<string> acceptLanguage_ {};
    // Cluster type.
    // 
    // - Nacos-Ans
    // - ZooKeeper
    // - Eureka
    shared_ptr<string> clusterType_ {};
    // Source instance node address.
    shared_ptr<string> originInstanceAddress_ {};
    // Source instance name.
    shared_ptr<string> originInstanceName_ {};
    // Namespace list, required when the source cluster is Nacos.
    shared_ptr<string> originInstanceNamespace_ {};
    // Description.
    shared_ptr<string> projectDesc_ {};
    // Extended request parameters, in JSON format.
    shared_ptr<string> requestPars_ {};
    // SyncType
    shared_ptr<string> syncType_ {};
    // Target instance name.
    shared_ptr<string> targetClusterName_ {};
    // Target instance URL.
    shared_ptr<string> targetClusterUrl_ {};
    // Target instance ID.
    shared_ptr<string> targetInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
