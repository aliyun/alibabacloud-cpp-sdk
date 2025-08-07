// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompressStorage, compressStorage_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBNodeCrashList, DBNodeCrashList_);
      DARABONBA_PTR_TO_JSON(DataSyncMode, dataSyncMode_);
      DARABONBA_PTR_TO_JSON(FaultInjectionType, faultInjectionType_);
      DARABONBA_PTR_TO_JSON(FaultSimulateMode, faultSimulateMode_);
      DARABONBA_PTR_TO_JSON(ImciAutoIndex, imciAutoIndex_);
      DARABONBA_PTR_TO_JSON(ModifyRowCompression, modifyRowCompression_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StandbyHAMode, standbyHAMode_);
      DARABONBA_PTR_TO_JSON(StorageAutoScale, storageAutoScale_);
      DARABONBA_PTR_TO_JSON(StorageUpperBound, storageUpperBound_);
      DARABONBA_PTR_TO_JSON(TableMeta, tableMeta_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompressStorage, compressStorage_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBNodeCrashList, DBNodeCrashList_);
      DARABONBA_PTR_FROM_JSON(DataSyncMode, dataSyncMode_);
      DARABONBA_PTR_FROM_JSON(FaultInjectionType, faultInjectionType_);
      DARABONBA_PTR_FROM_JSON(FaultSimulateMode, faultSimulateMode_);
      DARABONBA_PTR_FROM_JSON(ImciAutoIndex, imciAutoIndex_);
      DARABONBA_PTR_FROM_JSON(ModifyRowCompression, modifyRowCompression_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StandbyHAMode, standbyHAMode_);
      DARABONBA_PTR_FROM_JSON(StorageAutoScale, storageAutoScale_);
      DARABONBA_PTR_FROM_JSON(StorageUpperBound, storageUpperBound_);
      DARABONBA_PTR_FROM_JSON(TableMeta, tableMeta_);
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
    virtual bool empty() const override { this->compressStorage_ != nullptr
        && this->DBClusterId_ != nullptr && this->DBNodeCrashList_ != nullptr && this->dataSyncMode_ != nullptr && this->faultInjectionType_ != nullptr && this->faultSimulateMode_ != nullptr
        && this->imciAutoIndex_ != nullptr && this->modifyRowCompression_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->standbyHAMode_ != nullptr && this->storageAutoScale_ != nullptr && this->storageUpperBound_ != nullptr && this->tableMeta_ != nullptr; };
    // compressStorage Field Functions 
    bool hasCompressStorage() const { return this->compressStorage_ != nullptr;};
    void deleteCompressStorage() { this->compressStorage_ = nullptr;};
    inline string compressStorage() const { DARABONBA_PTR_GET_DEFAULT(compressStorage_, "") };
    inline ModifyDBClusterRequest& setCompressStorage(string compressStorage) { DARABONBA_PTR_SET_VALUE(compressStorage_, compressStorage) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNodeCrashList Field Functions 
    bool hasDBNodeCrashList() const { return this->DBNodeCrashList_ != nullptr;};
    void deleteDBNodeCrashList() { this->DBNodeCrashList_ = nullptr;};
    inline string DBNodeCrashList() const { DARABONBA_PTR_GET_DEFAULT(DBNodeCrashList_, "") };
    inline ModifyDBClusterRequest& setDBNodeCrashList(string DBNodeCrashList) { DARABONBA_PTR_SET_VALUE(DBNodeCrashList_, DBNodeCrashList) };


    // dataSyncMode Field Functions 
    bool hasDataSyncMode() const { return this->dataSyncMode_ != nullptr;};
    void deleteDataSyncMode() { this->dataSyncMode_ = nullptr;};
    inline string dataSyncMode() const { DARABONBA_PTR_GET_DEFAULT(dataSyncMode_, "") };
    inline ModifyDBClusterRequest& setDataSyncMode(string dataSyncMode) { DARABONBA_PTR_SET_VALUE(dataSyncMode_, dataSyncMode) };


    // faultInjectionType Field Functions 
    bool hasFaultInjectionType() const { return this->faultInjectionType_ != nullptr;};
    void deleteFaultInjectionType() { this->faultInjectionType_ = nullptr;};
    inline string faultInjectionType() const { DARABONBA_PTR_GET_DEFAULT(faultInjectionType_, "") };
    inline ModifyDBClusterRequest& setFaultInjectionType(string faultInjectionType) { DARABONBA_PTR_SET_VALUE(faultInjectionType_, faultInjectionType) };


    // faultSimulateMode Field Functions 
    bool hasFaultSimulateMode() const { return this->faultSimulateMode_ != nullptr;};
    void deleteFaultSimulateMode() { this->faultSimulateMode_ = nullptr;};
    inline string faultSimulateMode() const { DARABONBA_PTR_GET_DEFAULT(faultSimulateMode_, "") };
    inline ModifyDBClusterRequest& setFaultSimulateMode(string faultSimulateMode) { DARABONBA_PTR_SET_VALUE(faultSimulateMode_, faultSimulateMode) };


    // imciAutoIndex Field Functions 
    bool hasImciAutoIndex() const { return this->imciAutoIndex_ != nullptr;};
    void deleteImciAutoIndex() { this->imciAutoIndex_ = nullptr;};
    inline string imciAutoIndex() const { DARABONBA_PTR_GET_DEFAULT(imciAutoIndex_, "") };
    inline ModifyDBClusterRequest& setImciAutoIndex(string imciAutoIndex) { DARABONBA_PTR_SET_VALUE(imciAutoIndex_, imciAutoIndex) };


    // modifyRowCompression Field Functions 
    bool hasModifyRowCompression() const { return this->modifyRowCompression_ != nullptr;};
    void deleteModifyRowCompression() { this->modifyRowCompression_ = nullptr;};
    inline string modifyRowCompression() const { DARABONBA_PTR_GET_DEFAULT(modifyRowCompression_, "") };
    inline ModifyDBClusterRequest& setModifyRowCompression(string modifyRowCompression) { DARABONBA_PTR_SET_VALUE(modifyRowCompression_, modifyRowCompression) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // standbyHAMode Field Functions 
    bool hasStandbyHAMode() const { return this->standbyHAMode_ != nullptr;};
    void deleteStandbyHAMode() { this->standbyHAMode_ = nullptr;};
    inline string standbyHAMode() const { DARABONBA_PTR_GET_DEFAULT(standbyHAMode_, "") };
    inline ModifyDBClusterRequest& setStandbyHAMode(string standbyHAMode) { DARABONBA_PTR_SET_VALUE(standbyHAMode_, standbyHAMode) };


    // storageAutoScale Field Functions 
    bool hasStorageAutoScale() const { return this->storageAutoScale_ != nullptr;};
    void deleteStorageAutoScale() { this->storageAutoScale_ = nullptr;};
    inline string storageAutoScale() const { DARABONBA_PTR_GET_DEFAULT(storageAutoScale_, "") };
    inline ModifyDBClusterRequest& setStorageAutoScale(string storageAutoScale) { DARABONBA_PTR_SET_VALUE(storageAutoScale_, storageAutoScale) };


    // storageUpperBound Field Functions 
    bool hasStorageUpperBound() const { return this->storageUpperBound_ != nullptr;};
    void deleteStorageUpperBound() { this->storageUpperBound_ = nullptr;};
    inline int64_t storageUpperBound() const { DARABONBA_PTR_GET_DEFAULT(storageUpperBound_, 0L) };
    inline ModifyDBClusterRequest& setStorageUpperBound(int64_t storageUpperBound) { DARABONBA_PTR_SET_VALUE(storageUpperBound_, storageUpperBound) };


    // tableMeta Field Functions 
    bool hasTableMeta() const { return this->tableMeta_ != nullptr;};
    void deleteTableMeta() { this->tableMeta_ = nullptr;};
    inline string tableMeta() const { DARABONBA_PTR_GET_DEFAULT(tableMeta_, "") };
    inline ModifyDBClusterRequest& setTableMeta(string tableMeta) { DARABONBA_PTR_SET_VALUE(tableMeta_, tableMeta) };


  protected:
    // Specifies whether to enable storage compression. Set the value to **ON**.
    std::shared_ptr<string> compressStorage_ = nullptr;
    // The cluster ID.
    // 
    // >  You can call the DescribeDBClusters operation to query information about all PolarDB clusters that are deployed in a specified region, such as cluster IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The list of nodes for the drill.
    // 
    // >  You can specify only one node for a node-level disaster recovery drill. For a primary zone-level disaster recovery drill, you can either choose not to specify this parameter or specify all nodes.
    std::shared_ptr<string> DBNodeCrashList_ = nullptr;
    // The method used to replicate data across zones. Valid values:
    // 
    // *   **AsyncSync**: the asynchronous mode.
    // *   **SemiSync**: the semi-synchronous mode.
    std::shared_ptr<string> dataSyncMode_ = nullptr;
    // The fault injection method. Valid values:
    // 
    // *   0: `Crash SQL`-based fault injection.
    // 
    // Enumerated values:
    // 
    // *   CrashSQLInjection: CrashSQLInjection.
    std::shared_ptr<string> faultInjectionType_ = nullptr;
    // The level of the disaster recovery drill. Valid values:
    // 
    // *   `0` or `FaultInjection`: The primary zone level.
    // *   `1`: The node level.
    // 
    // > 
    // 
    // *   In **primary zone-level disaster recovery drill** scenarios, all compute nodes in the primary zone are unavailable. Data loss occurs during failovers in the scenarios.
    // 
    // *   In **node-level disaster recovery drill** scenarios, you can specify only one compute node for the disaster recovery drill. You can use the `DBNodeCrashList` parameter to specify the name of the compute node that you want to use for the drill.
    // 
    // Enumerated values:
    // 
    // *   FaultInjectToPrimaryAz
    // *   FaultInjectToDbNode
    // *   FaultInjection
    // *   0
    // *   1
    std::shared_ptr<string> faultSimulateMode_ = nullptr;
    // Specifies whether to enable automatic IMCI-based query acceleration. IMCI is short for In-Memory Column Index. Valid values:
    // 
    // *   `ON`: enables automatic IMCI-based query acceleration.
    // *   `OFF`: disables automatic IMCI-based query acceleration.
    // 
    // > 
    // 
    // *   This parameter is supported only for PolarDB for MySQL clusters.
    // 
    // *   For information about the cluster version limits, see [Automatic IMCI-based query acceleration](https://help.aliyun.com/document_detail/2854119.html).
    std::shared_ptr<string> imciAutoIndex_ = nullptr;
    std::shared_ptr<string> modifyRowCompression_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Specifies whether to enable cross-zone automatic switchover. Valid values:
    // 
    // *   **ON**: enables cross-zone automatic switchover.
    // *   **OFF**: disables cross-zone automatic switchover.
    std::shared_ptr<string> standbyHAMode_ = nullptr;
    // Specifies whether to enable automatic storage scaling for the Standard Edition cluster. Valid values:
    // 
    // *   Enable
    // *   Disable
    std::shared_ptr<string> storageAutoScale_ = nullptr;
    // The maximum storage capacity of the cluster of Standard Edition in automatic scaling. Unit: GB.
    // 
    // >  The maximum value of this parameter is 32000.
    std::shared_ptr<int64_t> storageUpperBound_ = nullptr;
    std::shared_ptr<string> tableMeta_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
