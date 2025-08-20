// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELAKESTORAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATELAKESTORAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateLakeStorageResponseBodyDataPermissions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class UpdateLakeStorageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLakeStorageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatorUid, creatorUid_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(LakeStorageId, lakeStorageId_);
      DARABONBA_PTR_TO_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_TO_JSON(PartitionCount, partitionCount_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
      DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLakeStorageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatorUid, creatorUid_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(LakeStorageId, lakeStorageId_);
      DARABONBA_PTR_FROM_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_FROM_JSON(PartitionCount, partitionCount_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
      DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    UpdateLakeStorageResponseBodyData() = default ;
    UpdateLakeStorageResponseBodyData(const UpdateLakeStorageResponseBodyData &) = default ;
    UpdateLakeStorageResponseBodyData(UpdateLakeStorageResponseBodyData &&) = default ;
    UpdateLakeStorageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLakeStorageResponseBodyData() = default ;
    UpdateLakeStorageResponseBodyData& operator=(const UpdateLakeStorageResponseBodyData &) = default ;
    UpdateLakeStorageResponseBodyData& operator=(UpdateLakeStorageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->creatorUid_ != nullptr && this->DBClusterId_ != nullptr && this->description_ != nullptr && this->fileSize_ != nullptr && this->lakeStorageId_ != nullptr
        && this->operatorUid_ != nullptr && this->ownerUid_ != nullptr && this->partitionCount_ != nullptr && this->permissions_ != nullptr && this->regionId_ != nullptr
        && this->rowCount_ != nullptr && this->tableCount_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline UpdateLakeStorageResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorUid Field Functions 
    bool hasCreatorUid() const { return this->creatorUid_ != nullptr;};
    void deleteCreatorUid() { this->creatorUid_ = nullptr;};
    inline string creatorUid() const { DARABONBA_PTR_GET_DEFAULT(creatorUid_, "") };
    inline UpdateLakeStorageResponseBodyData& setCreatorUid(string creatorUid) { DARABONBA_PTR_SET_VALUE(creatorUid_, creatorUid) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UpdateLakeStorageResponseBodyData& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateLakeStorageResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline string fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
    inline UpdateLakeStorageResponseBodyData& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // lakeStorageId Field Functions 
    bool hasLakeStorageId() const { return this->lakeStorageId_ != nullptr;};
    void deleteLakeStorageId() { this->lakeStorageId_ = nullptr;};
    inline string lakeStorageId() const { DARABONBA_PTR_GET_DEFAULT(lakeStorageId_, "") };
    inline UpdateLakeStorageResponseBodyData& setLakeStorageId(string lakeStorageId) { DARABONBA_PTR_SET_VALUE(lakeStorageId_, lakeStorageId) };


    // operatorUid Field Functions 
    bool hasOperatorUid() const { return this->operatorUid_ != nullptr;};
    void deleteOperatorUid() { this->operatorUid_ = nullptr;};
    inline string operatorUid() const { DARABONBA_PTR_GET_DEFAULT(operatorUid_, "") };
    inline UpdateLakeStorageResponseBodyData& setOperatorUid(string operatorUid) { DARABONBA_PTR_SET_VALUE(operatorUid_, operatorUid) };


    // ownerUid Field Functions 
    bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
    void deleteOwnerUid() { this->ownerUid_ = nullptr;};
    inline string ownerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, "") };
    inline UpdateLakeStorageResponseBodyData& setOwnerUid(string ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


    // partitionCount Field Functions 
    bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
    void deletePartitionCount() { this->partitionCount_ = nullptr;};
    inline string partitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, "") };
    inline UpdateLakeStorageResponseBodyData& setPartitionCount(string partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<Models::UpdateLakeStorageResponseBodyDataPermissions> & permissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<Models::UpdateLakeStorageResponseBodyDataPermissions>) };
    inline vector<Models::UpdateLakeStorageResponseBodyDataPermissions> permissions() { DARABONBA_PTR_GET(permissions_, vector<Models::UpdateLakeStorageResponseBodyDataPermissions>) };
    inline UpdateLakeStorageResponseBodyData& setPermissions(const vector<Models::UpdateLakeStorageResponseBodyDataPermissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline UpdateLakeStorageResponseBodyData& setPermissions(vector<Models::UpdateLakeStorageResponseBodyDataPermissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLakeStorageResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rowCount Field Functions 
    bool hasRowCount() const { return this->rowCount_ != nullptr;};
    void deleteRowCount() { this->rowCount_ = nullptr;};
    inline int64_t rowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
    inline UpdateLakeStorageResponseBodyData& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


    // tableCount Field Functions 
    bool hasTableCount() const { return this->tableCount_ != nullptr;};
    void deleteTableCount() { this->tableCount_ = nullptr;};
    inline int32_t tableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, 0) };
    inline UpdateLakeStorageResponseBodyData& setTableCount(int32_t tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline UpdateLakeStorageResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the lake storage was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The creator UID.
    std::shared_ptr<string> creatorUid_ = nullptr;
    // The ID of the AnalyticDB for MySQL cluster that is associated with the lake storage.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The description of the lake storage.
    std::shared_ptr<string> description_ = nullptr;
    // The total storage size.
    std::shared_ptr<string> fileSize_ = nullptr;
    // The unique identifier of the lake storage.
    std::shared_ptr<string> lakeStorageId_ = nullptr;
    // The operator UID.
    std::shared_ptr<string> operatorUid_ = nullptr;
    // The owner UID.
    std::shared_ptr<string> ownerUid_ = nullptr;
    // The number of partitions.
    std::shared_ptr<string> partitionCount_ = nullptr;
    // The permissions on the lake storage.
    std::shared_ptr<vector<Models::UpdateLakeStorageResponseBodyDataPermissions>> permissions_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> rowCount_ = nullptr;
    // The number of tables.
    std::shared_ptr<int32_t> tableCount_ = nullptr;
    // The time when the lake storage was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
