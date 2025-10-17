// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLAKESTORAGESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTLAKESTORAGESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLakeStoragesResponseBodyItemsPermissions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListLakeStoragesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLakeStoragesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatorUid, creatorUid_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(LakeStorageId, lakeStorageId_);
      DARABONBA_PTR_TO_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
      DARABONBA_PTR_TO_JSON(TotalRows, totalRows_);
      DARABONBA_PTR_TO_JSON(TotalStorage, totalStorage_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListLakeStoragesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatorUid, creatorUid_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(LakeStorageId, lakeStorageId_);
      DARABONBA_PTR_FROM_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
      DARABONBA_PTR_FROM_JSON(TotalRows, totalRows_);
      DARABONBA_PTR_FROM_JSON(TotalStorage, totalStorage_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListLakeStoragesResponseBodyItems() = default ;
    ListLakeStoragesResponseBodyItems(const ListLakeStoragesResponseBodyItems &) = default ;
    ListLakeStoragesResponseBodyItems(ListLakeStoragesResponseBodyItems &&) = default ;
    ListLakeStoragesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLakeStoragesResponseBodyItems() = default ;
    ListLakeStoragesResponseBodyItems& operator=(const ListLakeStoragesResponseBodyItems &) = default ;
    ListLakeStoragesResponseBodyItems& operator=(ListLakeStoragesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->creatorUid_ == nullptr && return this->DBClusterId_ == nullptr && return this->description_ == nullptr && return this->fileSize_ == nullptr && return this->lakeStorageId_ == nullptr
        && return this->operatorUid_ == nullptr && return this->ownerUid_ == nullptr && return this->permissions_ == nullptr && return this->regionId_ == nullptr && return this->tableCount_ == nullptr
        && return this->totalRows_ == nullptr && return this->totalStorage_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListLakeStoragesResponseBodyItems& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorUid Field Functions 
    bool hasCreatorUid() const { return this->creatorUid_ != nullptr;};
    void deleteCreatorUid() { this->creatorUid_ = nullptr;};
    inline string creatorUid() const { DARABONBA_PTR_GET_DEFAULT(creatorUid_, "") };
    inline ListLakeStoragesResponseBodyItems& setCreatorUid(string creatorUid) { DARABONBA_PTR_SET_VALUE(creatorUid_, creatorUid) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ListLakeStoragesResponseBodyItems& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListLakeStoragesResponseBodyItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline string fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
    inline ListLakeStoragesResponseBodyItems& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // lakeStorageId Field Functions 
    bool hasLakeStorageId() const { return this->lakeStorageId_ != nullptr;};
    void deleteLakeStorageId() { this->lakeStorageId_ = nullptr;};
    inline string lakeStorageId() const { DARABONBA_PTR_GET_DEFAULT(lakeStorageId_, "") };
    inline ListLakeStoragesResponseBodyItems& setLakeStorageId(string lakeStorageId) { DARABONBA_PTR_SET_VALUE(lakeStorageId_, lakeStorageId) };


    // operatorUid Field Functions 
    bool hasOperatorUid() const { return this->operatorUid_ != nullptr;};
    void deleteOperatorUid() { this->operatorUid_ = nullptr;};
    inline string operatorUid() const { DARABONBA_PTR_GET_DEFAULT(operatorUid_, "") };
    inline ListLakeStoragesResponseBodyItems& setOperatorUid(string operatorUid) { DARABONBA_PTR_SET_VALUE(operatorUid_, operatorUid) };


    // ownerUid Field Functions 
    bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
    void deleteOwnerUid() { this->ownerUid_ = nullptr;};
    inline string ownerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, "") };
    inline ListLakeStoragesResponseBodyItems& setOwnerUid(string ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<Models::ListLakeStoragesResponseBodyItemsPermissions> & permissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<Models::ListLakeStoragesResponseBodyItemsPermissions>) };
    inline vector<Models::ListLakeStoragesResponseBodyItemsPermissions> permissions() { DARABONBA_PTR_GET(permissions_, vector<Models::ListLakeStoragesResponseBodyItemsPermissions>) };
    inline ListLakeStoragesResponseBodyItems& setPermissions(const vector<Models::ListLakeStoragesResponseBodyItemsPermissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline ListLakeStoragesResponseBodyItems& setPermissions(vector<Models::ListLakeStoragesResponseBodyItemsPermissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListLakeStoragesResponseBodyItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tableCount Field Functions 
    bool hasTableCount() const { return this->tableCount_ != nullptr;};
    void deleteTableCount() { this->tableCount_ = nullptr;};
    inline int32_t tableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, 0) };
    inline ListLakeStoragesResponseBodyItems& setTableCount(int32_t tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


    // totalRows Field Functions 
    bool hasTotalRows() const { return this->totalRows_ != nullptr;};
    void deleteTotalRows() { this->totalRows_ = nullptr;};
    inline int64_t totalRows() const { DARABONBA_PTR_GET_DEFAULT(totalRows_, 0L) };
    inline ListLakeStoragesResponseBodyItems& setTotalRows(int64_t totalRows) { DARABONBA_PTR_SET_VALUE(totalRows_, totalRows) };


    // totalStorage Field Functions 
    bool hasTotalStorage() const { return this->totalStorage_ != nullptr;};
    void deleteTotalStorage() { this->totalStorage_ = nullptr;};
    inline string totalStorage() const { DARABONBA_PTR_GET_DEFAULT(totalStorage_, "") };
    inline ListLakeStoragesResponseBodyItems& setTotalStorage(string totalStorage) { DARABONBA_PTR_SET_VALUE(totalStorage_, totalStorage) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListLakeStoragesResponseBodyItems& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the lake storage was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The creator UID.
    std::shared_ptr<string> creatorUid_ = nullptr;
    // The ID of the AnalyticDB for MySQL cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The description of the lake storage.
    std::shared_ptr<string> description_ = nullptr;
    // The size of data files.
    std::shared_ptr<string> fileSize_ = nullptr;
    // The unique identifier of the lake storage.
    std::shared_ptr<string> lakeStorageId_ = nullptr;
    // The operator UID.
    std::shared_ptr<string> operatorUid_ = nullptr;
    // The queried lake storage.
    std::shared_ptr<string> ownerUid_ = nullptr;
    // The permissions on the lake storage.
    std::shared_ptr<vector<Models::ListLakeStoragesResponseBodyItemsPermissions>> permissions_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of tables.
    std::shared_ptr<int32_t> tableCount_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalRows_ = nullptr;
    // The total storage size.
    std::shared_ptr<string> totalStorage_ = nullptr;
    // The time when the lake storage was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
