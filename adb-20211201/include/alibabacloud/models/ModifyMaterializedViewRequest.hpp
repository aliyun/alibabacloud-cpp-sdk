// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMATERIALIZEDVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMATERIALIZEDVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyMaterializedViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMaterializedViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(EnableDelayAlert, enableDelayAlert_);
      DARABONBA_PTR_TO_JSON(EnableFailureAlert, enableFailureAlert_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(LatencyTolerance, latencyTolerance_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QueryWrite, queryWrite_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ViewName, viewName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMaterializedViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(EnableDelayAlert, enableDelayAlert_);
      DARABONBA_PTR_FROM_JSON(EnableFailureAlert, enableFailureAlert_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(LatencyTolerance, latencyTolerance_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QueryWrite, queryWrite_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ViewName, viewName_);
    };
    ModifyMaterializedViewRequest() = default ;
    ModifyMaterializedViewRequest(const ModifyMaterializedViewRequest &) = default ;
    ModifyMaterializedViewRequest(ModifyMaterializedViewRequest &&) = default ;
    ModifyMaterializedViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMaterializedViewRequest() = default ;
    ModifyMaterializedViewRequest& operator=(const ModifyMaterializedViewRequest &) = default ;
    ModifyMaterializedViewRequest& operator=(ModifyMaterializedViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->dbName_ == nullptr && this->enableDelayAlert_ == nullptr && this->enableFailureAlert_ == nullptr && this->groupName_ == nullptr && this->latencyTolerance_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->queryWrite_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->viewName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyMaterializedViewRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ModifyMaterializedViewRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // enableDelayAlert Field Functions 
    bool hasEnableDelayAlert() const { return this->enableDelayAlert_ != nullptr;};
    void deleteEnableDelayAlert() { this->enableDelayAlert_ = nullptr;};
    inline bool getEnableDelayAlert() const { DARABONBA_PTR_GET_DEFAULT(enableDelayAlert_, false) };
    inline ModifyMaterializedViewRequest& setEnableDelayAlert(bool enableDelayAlert) { DARABONBA_PTR_SET_VALUE(enableDelayAlert_, enableDelayAlert) };


    // enableFailureAlert Field Functions 
    bool hasEnableFailureAlert() const { return this->enableFailureAlert_ != nullptr;};
    void deleteEnableFailureAlert() { this->enableFailureAlert_ = nullptr;};
    inline bool getEnableFailureAlert() const { DARABONBA_PTR_GET_DEFAULT(enableFailureAlert_, false) };
    inline ModifyMaterializedViewRequest& setEnableFailureAlert(bool enableFailureAlert) { DARABONBA_PTR_SET_VALUE(enableFailureAlert_, enableFailureAlert) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyMaterializedViewRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // latencyTolerance Field Functions 
    bool hasLatencyTolerance() const { return this->latencyTolerance_ != nullptr;};
    void deleteLatencyTolerance() { this->latencyTolerance_ = nullptr;};
    inline int32_t getLatencyTolerance() const { DARABONBA_PTR_GET_DEFAULT(latencyTolerance_, 0) };
    inline ModifyMaterializedViewRequest& setLatencyTolerance(int32_t latencyTolerance) { DARABONBA_PTR_SET_VALUE(latencyTolerance_, latencyTolerance) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyMaterializedViewRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyMaterializedViewRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // queryWrite Field Functions 
    bool hasQueryWrite() const { return this->queryWrite_ != nullptr;};
    void deleteQueryWrite() { this->queryWrite_ = nullptr;};
    inline bool getQueryWrite() const { DARABONBA_PTR_GET_DEFAULT(queryWrite_, false) };
    inline ModifyMaterializedViewRequest& setQueryWrite(bool queryWrite) { DARABONBA_PTR_SET_VALUE(queryWrite_, queryWrite) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyMaterializedViewRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyMaterializedViewRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyMaterializedViewRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // viewName Field Functions 
    bool hasViewName() const { return this->viewName_ != nullptr;};
    void deleteViewName() { this->viewName_ = nullptr;};
    inline string getViewName() const { DARABONBA_PTR_GET_DEFAULT(viewName_, "") };
    inline ModifyMaterializedViewRequest& setViewName(string viewName) { DARABONBA_PTR_SET_VALUE(viewName_, viewName) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The name of the database where the materialized view resides.
    // 
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // Enable the refresh delay alert. Valid values:
    // 
    // *   true: Enables alert.
    // *   false: Disables alert.
    shared_ptr<bool> enableDelayAlert_ {};
    // Specifies whether to send alerts when the refresh task fails. Valid values:
    // 
    // *   true: Send alerts.
    // *   false: Alerts disabled.
    shared_ptr<bool> enableFailureAlert_ {};
    // The name of the resource group to which the materialized view is bound.
    shared_ptr<string> groupName_ {};
    // Refresh delay tolerance (in minutes).
    shared_ptr<int32_t> latencyTolerance_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies whether to enable query rewrite. Valid values:
    // 
    // *   true: Enables query rewrite.
    // *   false: Disables query rewrite.
    shared_ptr<bool> queryWrite_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The name of the materialized view.
    // 
    // This parameter is required.
    shared_ptr<string> viewName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
