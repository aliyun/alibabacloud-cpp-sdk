// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class ModifyDBClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterClass, DBClusterClass_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBNodeGroupCount, DBNodeGroupCount_);
      DARABONBA_PTR_TO_JSON(DBNodeStorage, DBNodeStorage_);
      DARABONBA_PTR_TO_JSON(DbNodeStorageType, dbNodeStorageType_);
      DARABONBA_PTR_TO_JSON(DisableWriteWindows, disableWriteWindows_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterClass, DBClusterClass_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBNodeGroupCount, DBNodeGroupCount_);
      DARABONBA_PTR_FROM_JSON(DBNodeStorage, DBNodeStorage_);
      DARABONBA_PTR_FROM_JSON(DbNodeStorageType, dbNodeStorageType_);
      DARABONBA_PTR_FROM_JSON(DisableWriteWindows, disableWriteWindows_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyDBClusterRequest() = default ;
    ModifyDBClusterRequest(const ModifyDBClusterRequest &) = default ;
    ModifyDBClusterRequest(ModifyDBClusterRequest &&) = default ;
    ModifyDBClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterRequest() = default ;
    ModifyDBClusterRequest& operator=(const ModifyDBClusterRequest &) = default ;
    ModifyDBClusterRequest& operator=(ModifyDBClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterClass_ == nullptr
        && this->DBClusterId_ == nullptr && this->DBNodeGroupCount_ == nullptr && this->DBNodeStorage_ == nullptr && this->dbNodeStorageType_ == nullptr && this->disableWriteWindows_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // DBClusterClass Field Functions 
    bool hasDBClusterClass() const { return this->DBClusterClass_ != nullptr;};
    void deleteDBClusterClass() { this->DBClusterClass_ = nullptr;};
    inline string getDBClusterClass() const { DARABONBA_PTR_GET_DEFAULT(DBClusterClass_, "") };
    inline ModifyDBClusterRequest& setDBClusterClass(string DBClusterClass) { DARABONBA_PTR_SET_VALUE(DBClusterClass_, DBClusterClass) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNodeGroupCount Field Functions 
    bool hasDBNodeGroupCount() const { return this->DBNodeGroupCount_ != nullptr;};
    void deleteDBNodeGroupCount() { this->DBNodeGroupCount_ = nullptr;};
    inline string getDBNodeGroupCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeGroupCount_, "") };
    inline ModifyDBClusterRequest& setDBNodeGroupCount(string DBNodeGroupCount) { DARABONBA_PTR_SET_VALUE(DBNodeGroupCount_, DBNodeGroupCount) };


    // DBNodeStorage Field Functions 
    bool hasDBNodeStorage() const { return this->DBNodeStorage_ != nullptr;};
    void deleteDBNodeStorage() { this->DBNodeStorage_ = nullptr;};
    inline string getDBNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStorage_, "") };
    inline ModifyDBClusterRequest& setDBNodeStorage(string DBNodeStorage) { DARABONBA_PTR_SET_VALUE(DBNodeStorage_, DBNodeStorage) };


    // dbNodeStorageType Field Functions 
    bool hasDbNodeStorageType() const { return this->dbNodeStorageType_ != nullptr;};
    void deleteDbNodeStorageType() { this->dbNodeStorageType_ = nullptr;};
    inline string getDbNodeStorageType() const { DARABONBA_PTR_GET_DEFAULT(dbNodeStorageType_, "") };
    inline ModifyDBClusterRequest& setDbNodeStorageType(string dbNodeStorageType) { DARABONBA_PTR_SET_VALUE(dbNodeStorageType_, dbNodeStorageType) };


    // disableWriteWindows Field Functions 
    bool hasDisableWriteWindows() const { return this->disableWriteWindows_ != nullptr;};
    void deleteDisableWriteWindows() { this->disableWriteWindows_ = nullptr;};
    inline string getDisableWriteWindows() const { DARABONBA_PTR_GET_DEFAULT(disableWriteWindows_, "") };
    inline ModifyDBClusterRequest& setDisableWriteWindows(string disableWriteWindows) { DARABONBA_PTR_SET_VALUE(disableWriteWindows_, disableWriteWindows) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The specifications of the cluster.
    // 
    // *   Valid values when the cluster is of Single-replica Edition:
    // 
    //     *   **S8**
    //     *   **S16**
    //     *   **S32**
    //     *   **S64**
    //     *   **S104**
    // 
    // *   Valid values when the cluster is of Double-replica Edition:
    // 
    //     *   **C8**
    //     *   **C16**
    //     *   **C32**
    //     *   **C64**
    //     *   **C104**
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterClass_ {};
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The number of nodes in the cluster.
    // 
    // *   If the cluster is of Single-replica Edition, the value must be an integer that ranges from 1 to 48.
    // *   If the cluster is of Double-replica Edition, the value must be an integer that ranges from 1 to 24.
    // 
    // This parameter is required.
    shared_ptr<string> DBNodeGroupCount_ {};
    // The storage capacity of a single node of the cluster. Unit: GB.
    // 
    // Valid values: 100 to 32000.
    // 
    // >  This value is a multiple of 100.
    // 
    // This parameter is required.
    shared_ptr<string> DBNodeStorage_ {};
    // The storage type of the cluster. Valid values:
    // 
    // *   **CloudESSD**: The cluster uses an Enterprise SSD (ESSD) of performance level 1 (PL1).
    // *   **CloudESSD_PL2**: The cluster uses an ESSD of PL2.
    // *   **CloudESSD_PL3**: The cluster uses an ESSD of PL3.
    // *   **CloudEfficiency**: The cluster uses an ultra disk.
    // *   **CloudSSD**: The cluster uses a standard SSD.
    shared_ptr<string> dbNodeStorageType_ {};
    // The time window during which write operations are stopped. Separate the start time and end time with commas (,). Specify the time in the ISO 8601 standard.
    shared_ptr<string> disableWriteWindows_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID You can call the [DescribeRegions](https://help.aliyun.com/document_detail/170875.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
