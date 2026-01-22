// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMFSUSEDDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMFSUSEDDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormFsUsedDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormFsUsedDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(FsCapacity, fsCapacity_);
      DARABONBA_PTR_TO_JSON(FsCapacityCold, fsCapacityCold_);
      DARABONBA_PTR_TO_JSON(FsCapacityHot, fsCapacityHot_);
      DARABONBA_PTR_TO_JSON(FsUsedCold, fsUsedCold_);
      DARABONBA_PTR_TO_JSON(FsUsedColdOnLindormSearch, fsUsedColdOnLindormSearch_);
      DARABONBA_PTR_TO_JSON(FsUsedColdOnLindormTSDB, fsUsedColdOnLindormTSDB_);
      DARABONBA_PTR_TO_JSON(FsUsedColdOnLindormTable, fsUsedColdOnLindormTable_);
      DARABONBA_PTR_TO_JSON(FsUsedHot, fsUsedHot_);
      DARABONBA_PTR_TO_JSON(FsUsedHotOnLindormSearch, fsUsedHotOnLindormSearch_);
      DARABONBA_PTR_TO_JSON(FsUsedHotOnLindormTSDB, fsUsedHotOnLindormTSDB_);
      DARABONBA_PTR_TO_JSON(FsUsedHotOnLindormTable, fsUsedHotOnLindormTable_);
      DARABONBA_PTR_TO_JSON(FsUsedOnLindormSearch, fsUsedOnLindormSearch_);
      DARABONBA_PTR_TO_JSON(FsUsedOnLindormTSDB, fsUsedOnLindormTSDB_);
      DARABONBA_PTR_TO_JSON(FsUsedOnLindormTable, fsUsedOnLindormTable_);
      DARABONBA_PTR_TO_JSON(FsUsedOnLindormTableData, fsUsedOnLindormTableData_);
      DARABONBA_PTR_TO_JSON(FsUsedOnLindormTableWAL, fsUsedOnLindormTableWAL_);
      DARABONBA_PTR_TO_JSON(LStorageUsageList, LStorageUsageList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Valid, valid_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormFsUsedDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(FsCapacity, fsCapacity_);
      DARABONBA_PTR_FROM_JSON(FsCapacityCold, fsCapacityCold_);
      DARABONBA_PTR_FROM_JSON(FsCapacityHot, fsCapacityHot_);
      DARABONBA_PTR_FROM_JSON(FsUsedCold, fsUsedCold_);
      DARABONBA_PTR_FROM_JSON(FsUsedColdOnLindormSearch, fsUsedColdOnLindormSearch_);
      DARABONBA_PTR_FROM_JSON(FsUsedColdOnLindormTSDB, fsUsedColdOnLindormTSDB_);
      DARABONBA_PTR_FROM_JSON(FsUsedColdOnLindormTable, fsUsedColdOnLindormTable_);
      DARABONBA_PTR_FROM_JSON(FsUsedHot, fsUsedHot_);
      DARABONBA_PTR_FROM_JSON(FsUsedHotOnLindormSearch, fsUsedHotOnLindormSearch_);
      DARABONBA_PTR_FROM_JSON(FsUsedHotOnLindormTSDB, fsUsedHotOnLindormTSDB_);
      DARABONBA_PTR_FROM_JSON(FsUsedHotOnLindormTable, fsUsedHotOnLindormTable_);
      DARABONBA_PTR_FROM_JSON(FsUsedOnLindormSearch, fsUsedOnLindormSearch_);
      DARABONBA_PTR_FROM_JSON(FsUsedOnLindormTSDB, fsUsedOnLindormTSDB_);
      DARABONBA_PTR_FROM_JSON(FsUsedOnLindormTable, fsUsedOnLindormTable_);
      DARABONBA_PTR_FROM_JSON(FsUsedOnLindormTableData, fsUsedOnLindormTableData_);
      DARABONBA_PTR_FROM_JSON(FsUsedOnLindormTableWAL, fsUsedOnLindormTableWAL_);
      DARABONBA_PTR_FROM_JSON(LStorageUsageList, LStorageUsageList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Valid, valid_);
    };
    GetLindormFsUsedDetailResponseBody() = default ;
    GetLindormFsUsedDetailResponseBody(const GetLindormFsUsedDetailResponseBody &) = default ;
    GetLindormFsUsedDetailResponseBody(GetLindormFsUsedDetailResponseBody &&) = default ;
    GetLindormFsUsedDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormFsUsedDetailResponseBody() = default ;
    GetLindormFsUsedDetailResponseBody& operator=(const GetLindormFsUsedDetailResponseBody &) = default ;
    GetLindormFsUsedDetailResponseBody& operator=(GetLindormFsUsedDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LStorageUsageList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LStorageUsageList& obj) { 
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        DARABONBA_PTR_TO_JSON(Used, used_);
        DARABONBA_PTR_TO_JSON(UsedLindormColumn3, usedLindormColumn3_);
        DARABONBA_PTR_TO_JSON(UsedLindormMessage3, usedLindormMessage3_);
        DARABONBA_PTR_TO_JSON(UsedLindormSearch, usedLindormSearch_);
        DARABONBA_PTR_TO_JSON(UsedLindormSpark, usedLindormSpark_);
        DARABONBA_PTR_TO_JSON(UsedLindormTable, usedLindormTable_);
        DARABONBA_PTR_TO_JSON(UsedLindormTsdb, usedLindormTsdb_);
        DARABONBA_PTR_TO_JSON(UsedLindormVector3, usedLindormVector3_);
        DARABONBA_PTR_TO_JSON(UsedOther, usedOther_);
      };
      friend void from_json(const Darabonba::Json& j, LStorageUsageList& obj) { 
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        DARABONBA_PTR_FROM_JSON(Used, used_);
        DARABONBA_PTR_FROM_JSON(UsedLindormColumn3, usedLindormColumn3_);
        DARABONBA_PTR_FROM_JSON(UsedLindormMessage3, usedLindormMessage3_);
        DARABONBA_PTR_FROM_JSON(UsedLindormSearch, usedLindormSearch_);
        DARABONBA_PTR_FROM_JSON(UsedLindormSpark, usedLindormSpark_);
        DARABONBA_PTR_FROM_JSON(UsedLindormTable, usedLindormTable_);
        DARABONBA_PTR_FROM_JSON(UsedLindormTsdb, usedLindormTsdb_);
        DARABONBA_PTR_FROM_JSON(UsedLindormVector3, usedLindormVector3_);
        DARABONBA_PTR_FROM_JSON(UsedOther, usedOther_);
      };
      LStorageUsageList() = default ;
      LStorageUsageList(const LStorageUsageList &) = default ;
      LStorageUsageList(LStorageUsageList &&) = default ;
      LStorageUsageList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LStorageUsageList() = default ;
      LStorageUsageList& operator=(const LStorageUsageList &) = default ;
      LStorageUsageList& operator=(LStorageUsageList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capacity_ == nullptr
        && this->diskType_ == nullptr && this->used_ == nullptr && this->usedLindormColumn3_ == nullptr && this->usedLindormMessage3_ == nullptr && this->usedLindormSearch_ == nullptr
        && this->usedLindormSpark_ == nullptr && this->usedLindormTable_ == nullptr && this->usedLindormTsdb_ == nullptr && this->usedLindormVector3_ == nullptr && this->usedOther_ == nullptr; };
      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline string getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, "") };
      inline LStorageUsageList& setCapacity(string capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // diskType Field Functions 
      bool hasDiskType() const { return this->diskType_ != nullptr;};
      void deleteDiskType() { this->diskType_ = nullptr;};
      inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
      inline LStorageUsageList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      // used Field Functions 
      bool hasUsed() const { return this->used_ != nullptr;};
      void deleteUsed() { this->used_ = nullptr;};
      inline string getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, "") };
      inline LStorageUsageList& setUsed(string used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      // usedLindormColumn3 Field Functions 
      bool hasUsedLindormColumn3() const { return this->usedLindormColumn3_ != nullptr;};
      void deleteUsedLindormColumn3() { this->usedLindormColumn3_ = nullptr;};
      inline string getUsedLindormColumn3() const { DARABONBA_PTR_GET_DEFAULT(usedLindormColumn3_, "") };
      inline LStorageUsageList& setUsedLindormColumn3(string usedLindormColumn3) { DARABONBA_PTR_SET_VALUE(usedLindormColumn3_, usedLindormColumn3) };


      // usedLindormMessage3 Field Functions 
      bool hasUsedLindormMessage3() const { return this->usedLindormMessage3_ != nullptr;};
      void deleteUsedLindormMessage3() { this->usedLindormMessage3_ = nullptr;};
      inline string getUsedLindormMessage3() const { DARABONBA_PTR_GET_DEFAULT(usedLindormMessage3_, "") };
      inline LStorageUsageList& setUsedLindormMessage3(string usedLindormMessage3) { DARABONBA_PTR_SET_VALUE(usedLindormMessage3_, usedLindormMessage3) };


      // usedLindormSearch Field Functions 
      bool hasUsedLindormSearch() const { return this->usedLindormSearch_ != nullptr;};
      void deleteUsedLindormSearch() { this->usedLindormSearch_ = nullptr;};
      inline string getUsedLindormSearch() const { DARABONBA_PTR_GET_DEFAULT(usedLindormSearch_, "") };
      inline LStorageUsageList& setUsedLindormSearch(string usedLindormSearch) { DARABONBA_PTR_SET_VALUE(usedLindormSearch_, usedLindormSearch) };


      // usedLindormSpark Field Functions 
      bool hasUsedLindormSpark() const { return this->usedLindormSpark_ != nullptr;};
      void deleteUsedLindormSpark() { this->usedLindormSpark_ = nullptr;};
      inline string getUsedLindormSpark() const { DARABONBA_PTR_GET_DEFAULT(usedLindormSpark_, "") };
      inline LStorageUsageList& setUsedLindormSpark(string usedLindormSpark) { DARABONBA_PTR_SET_VALUE(usedLindormSpark_, usedLindormSpark) };


      // usedLindormTable Field Functions 
      bool hasUsedLindormTable() const { return this->usedLindormTable_ != nullptr;};
      void deleteUsedLindormTable() { this->usedLindormTable_ = nullptr;};
      inline string getUsedLindormTable() const { DARABONBA_PTR_GET_DEFAULT(usedLindormTable_, "") };
      inline LStorageUsageList& setUsedLindormTable(string usedLindormTable) { DARABONBA_PTR_SET_VALUE(usedLindormTable_, usedLindormTable) };


      // usedLindormTsdb Field Functions 
      bool hasUsedLindormTsdb() const { return this->usedLindormTsdb_ != nullptr;};
      void deleteUsedLindormTsdb() { this->usedLindormTsdb_ = nullptr;};
      inline string getUsedLindormTsdb() const { DARABONBA_PTR_GET_DEFAULT(usedLindormTsdb_, "") };
      inline LStorageUsageList& setUsedLindormTsdb(string usedLindormTsdb) { DARABONBA_PTR_SET_VALUE(usedLindormTsdb_, usedLindormTsdb) };


      // usedLindormVector3 Field Functions 
      bool hasUsedLindormVector3() const { return this->usedLindormVector3_ != nullptr;};
      void deleteUsedLindormVector3() { this->usedLindormVector3_ = nullptr;};
      inline string getUsedLindormVector3() const { DARABONBA_PTR_GET_DEFAULT(usedLindormVector3_, "") };
      inline LStorageUsageList& setUsedLindormVector3(string usedLindormVector3) { DARABONBA_PTR_SET_VALUE(usedLindormVector3_, usedLindormVector3) };


      // usedOther Field Functions 
      bool hasUsedOther() const { return this->usedOther_ != nullptr;};
      void deleteUsedOther() { this->usedOther_ = nullptr;};
      inline string getUsedOther() const { DARABONBA_PTR_GET_DEFAULT(usedOther_, "") };
      inline LStorageUsageList& setUsedOther(string usedOther) { DARABONBA_PTR_SET_VALUE(usedOther_, usedOther) };


    protected:
      // The total storage capacity. Unit: bytes.
      shared_ptr<string> capacity_ {};
      // The storage type of the cluster. Valid values:
      // 
      // *   StandardCloudStorage
      // *   PerformanceCloudStorage
      // *   CapacityCloudStorage
      // *   LocalSsdStorage
      // *   LocalHddStorage
      // *   LocalEbsStorage
      shared_ptr<string> diskType_ {};
      // The storage usage. Unit: bytes.
      shared_ptr<string> used_ {};
      shared_ptr<string> usedLindormColumn3_ {};
      shared_ptr<string> usedLindormMessage3_ {};
      // The storage usage of the search engine. Unit: bytes.
      shared_ptr<string> usedLindormSearch_ {};
      // The storage usage of the compute engine. Unit: bytes.
      shared_ptr<string> usedLindormSpark_ {};
      // The storage usage of the wide table engine. Unit: bytes.
      shared_ptr<string> usedLindormTable_ {};
      // The storage usage of the time series engine. Unit: bytes.
      shared_ptr<string> usedLindormTsdb_ {};
      shared_ptr<string> usedLindormVector3_ {};
      // The storage usage of other resources, such as logs and recycle bins. Unit: bytes.
      shared_ptr<string> usedOther_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->fsCapacity_ == nullptr && this->fsCapacityCold_ == nullptr && this->fsCapacityHot_ == nullptr && this->fsUsedCold_ == nullptr && this->fsUsedColdOnLindormSearch_ == nullptr
        && this->fsUsedColdOnLindormTSDB_ == nullptr && this->fsUsedColdOnLindormTable_ == nullptr && this->fsUsedHot_ == nullptr && this->fsUsedHotOnLindormSearch_ == nullptr && this->fsUsedHotOnLindormTSDB_ == nullptr
        && this->fsUsedHotOnLindormTable_ == nullptr && this->fsUsedOnLindormSearch_ == nullptr && this->fsUsedOnLindormTSDB_ == nullptr && this->fsUsedOnLindormTable_ == nullptr && this->fsUsedOnLindormTableData_ == nullptr
        && this->fsUsedOnLindormTableWAL_ == nullptr && this->LStorageUsageList_ == nullptr && this->requestId_ == nullptr && this->valid_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetLindormFsUsedDetailResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // fsCapacity Field Functions 
    bool hasFsCapacity() const { return this->fsCapacity_ != nullptr;};
    void deleteFsCapacity() { this->fsCapacity_ = nullptr;};
    inline string getFsCapacity() const { DARABONBA_PTR_GET_DEFAULT(fsCapacity_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsCapacity(string fsCapacity) { DARABONBA_PTR_SET_VALUE(fsCapacity_, fsCapacity) };


    // fsCapacityCold Field Functions 
    bool hasFsCapacityCold() const { return this->fsCapacityCold_ != nullptr;};
    void deleteFsCapacityCold() { this->fsCapacityCold_ = nullptr;};
    inline string getFsCapacityCold() const { DARABONBA_PTR_GET_DEFAULT(fsCapacityCold_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsCapacityCold(string fsCapacityCold) { DARABONBA_PTR_SET_VALUE(fsCapacityCold_, fsCapacityCold) };


    // fsCapacityHot Field Functions 
    bool hasFsCapacityHot() const { return this->fsCapacityHot_ != nullptr;};
    void deleteFsCapacityHot() { this->fsCapacityHot_ = nullptr;};
    inline string getFsCapacityHot() const { DARABONBA_PTR_GET_DEFAULT(fsCapacityHot_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsCapacityHot(string fsCapacityHot) { DARABONBA_PTR_SET_VALUE(fsCapacityHot_, fsCapacityHot) };


    // fsUsedCold Field Functions 
    bool hasFsUsedCold() const { return this->fsUsedCold_ != nullptr;};
    void deleteFsUsedCold() { this->fsUsedCold_ = nullptr;};
    inline string getFsUsedCold() const { DARABONBA_PTR_GET_DEFAULT(fsUsedCold_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedCold(string fsUsedCold) { DARABONBA_PTR_SET_VALUE(fsUsedCold_, fsUsedCold) };


    // fsUsedColdOnLindormSearch Field Functions 
    bool hasFsUsedColdOnLindormSearch() const { return this->fsUsedColdOnLindormSearch_ != nullptr;};
    void deleteFsUsedColdOnLindormSearch() { this->fsUsedColdOnLindormSearch_ = nullptr;};
    inline string getFsUsedColdOnLindormSearch() const { DARABONBA_PTR_GET_DEFAULT(fsUsedColdOnLindormSearch_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedColdOnLindormSearch(string fsUsedColdOnLindormSearch) { DARABONBA_PTR_SET_VALUE(fsUsedColdOnLindormSearch_, fsUsedColdOnLindormSearch) };


    // fsUsedColdOnLindormTSDB Field Functions 
    bool hasFsUsedColdOnLindormTSDB() const { return this->fsUsedColdOnLindormTSDB_ != nullptr;};
    void deleteFsUsedColdOnLindormTSDB() { this->fsUsedColdOnLindormTSDB_ = nullptr;};
    inline string getFsUsedColdOnLindormTSDB() const { DARABONBA_PTR_GET_DEFAULT(fsUsedColdOnLindormTSDB_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedColdOnLindormTSDB(string fsUsedColdOnLindormTSDB) { DARABONBA_PTR_SET_VALUE(fsUsedColdOnLindormTSDB_, fsUsedColdOnLindormTSDB) };


    // fsUsedColdOnLindormTable Field Functions 
    bool hasFsUsedColdOnLindormTable() const { return this->fsUsedColdOnLindormTable_ != nullptr;};
    void deleteFsUsedColdOnLindormTable() { this->fsUsedColdOnLindormTable_ = nullptr;};
    inline string getFsUsedColdOnLindormTable() const { DARABONBA_PTR_GET_DEFAULT(fsUsedColdOnLindormTable_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedColdOnLindormTable(string fsUsedColdOnLindormTable) { DARABONBA_PTR_SET_VALUE(fsUsedColdOnLindormTable_, fsUsedColdOnLindormTable) };


    // fsUsedHot Field Functions 
    bool hasFsUsedHot() const { return this->fsUsedHot_ != nullptr;};
    void deleteFsUsedHot() { this->fsUsedHot_ = nullptr;};
    inline string getFsUsedHot() const { DARABONBA_PTR_GET_DEFAULT(fsUsedHot_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedHot(string fsUsedHot) { DARABONBA_PTR_SET_VALUE(fsUsedHot_, fsUsedHot) };


    // fsUsedHotOnLindormSearch Field Functions 
    bool hasFsUsedHotOnLindormSearch() const { return this->fsUsedHotOnLindormSearch_ != nullptr;};
    void deleteFsUsedHotOnLindormSearch() { this->fsUsedHotOnLindormSearch_ = nullptr;};
    inline string getFsUsedHotOnLindormSearch() const { DARABONBA_PTR_GET_DEFAULT(fsUsedHotOnLindormSearch_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedHotOnLindormSearch(string fsUsedHotOnLindormSearch) { DARABONBA_PTR_SET_VALUE(fsUsedHotOnLindormSearch_, fsUsedHotOnLindormSearch) };


    // fsUsedHotOnLindormTSDB Field Functions 
    bool hasFsUsedHotOnLindormTSDB() const { return this->fsUsedHotOnLindormTSDB_ != nullptr;};
    void deleteFsUsedHotOnLindormTSDB() { this->fsUsedHotOnLindormTSDB_ = nullptr;};
    inline string getFsUsedHotOnLindormTSDB() const { DARABONBA_PTR_GET_DEFAULT(fsUsedHotOnLindormTSDB_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedHotOnLindormTSDB(string fsUsedHotOnLindormTSDB) { DARABONBA_PTR_SET_VALUE(fsUsedHotOnLindormTSDB_, fsUsedHotOnLindormTSDB) };


    // fsUsedHotOnLindormTable Field Functions 
    bool hasFsUsedHotOnLindormTable() const { return this->fsUsedHotOnLindormTable_ != nullptr;};
    void deleteFsUsedHotOnLindormTable() { this->fsUsedHotOnLindormTable_ = nullptr;};
    inline string getFsUsedHotOnLindormTable() const { DARABONBA_PTR_GET_DEFAULT(fsUsedHotOnLindormTable_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedHotOnLindormTable(string fsUsedHotOnLindormTable) { DARABONBA_PTR_SET_VALUE(fsUsedHotOnLindormTable_, fsUsedHotOnLindormTable) };


    // fsUsedOnLindormSearch Field Functions 
    bool hasFsUsedOnLindormSearch() const { return this->fsUsedOnLindormSearch_ != nullptr;};
    void deleteFsUsedOnLindormSearch() { this->fsUsedOnLindormSearch_ = nullptr;};
    inline string getFsUsedOnLindormSearch() const { DARABONBA_PTR_GET_DEFAULT(fsUsedOnLindormSearch_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedOnLindormSearch(string fsUsedOnLindormSearch) { DARABONBA_PTR_SET_VALUE(fsUsedOnLindormSearch_, fsUsedOnLindormSearch) };


    // fsUsedOnLindormTSDB Field Functions 
    bool hasFsUsedOnLindormTSDB() const { return this->fsUsedOnLindormTSDB_ != nullptr;};
    void deleteFsUsedOnLindormTSDB() { this->fsUsedOnLindormTSDB_ = nullptr;};
    inline string getFsUsedOnLindormTSDB() const { DARABONBA_PTR_GET_DEFAULT(fsUsedOnLindormTSDB_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedOnLindormTSDB(string fsUsedOnLindormTSDB) { DARABONBA_PTR_SET_VALUE(fsUsedOnLindormTSDB_, fsUsedOnLindormTSDB) };


    // fsUsedOnLindormTable Field Functions 
    bool hasFsUsedOnLindormTable() const { return this->fsUsedOnLindormTable_ != nullptr;};
    void deleteFsUsedOnLindormTable() { this->fsUsedOnLindormTable_ = nullptr;};
    inline string getFsUsedOnLindormTable() const { DARABONBA_PTR_GET_DEFAULT(fsUsedOnLindormTable_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedOnLindormTable(string fsUsedOnLindormTable) { DARABONBA_PTR_SET_VALUE(fsUsedOnLindormTable_, fsUsedOnLindormTable) };


    // fsUsedOnLindormTableData Field Functions 
    bool hasFsUsedOnLindormTableData() const { return this->fsUsedOnLindormTableData_ != nullptr;};
    void deleteFsUsedOnLindormTableData() { this->fsUsedOnLindormTableData_ = nullptr;};
    inline string getFsUsedOnLindormTableData() const { DARABONBA_PTR_GET_DEFAULT(fsUsedOnLindormTableData_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedOnLindormTableData(string fsUsedOnLindormTableData) { DARABONBA_PTR_SET_VALUE(fsUsedOnLindormTableData_, fsUsedOnLindormTableData) };


    // fsUsedOnLindormTableWAL Field Functions 
    bool hasFsUsedOnLindormTableWAL() const { return this->fsUsedOnLindormTableWAL_ != nullptr;};
    void deleteFsUsedOnLindormTableWAL() { this->fsUsedOnLindormTableWAL_ = nullptr;};
    inline string getFsUsedOnLindormTableWAL() const { DARABONBA_PTR_GET_DEFAULT(fsUsedOnLindormTableWAL_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedOnLindormTableWAL(string fsUsedOnLindormTableWAL) { DARABONBA_PTR_SET_VALUE(fsUsedOnLindormTableWAL_, fsUsedOnLindormTableWAL) };


    // LStorageUsageList Field Functions 
    bool hasLStorageUsageList() const { return this->LStorageUsageList_ != nullptr;};
    void deleteLStorageUsageList() { this->LStorageUsageList_ = nullptr;};
    inline const vector<GetLindormFsUsedDetailResponseBody::LStorageUsageList> & getLStorageUsageList() const { DARABONBA_PTR_GET_CONST(LStorageUsageList_, vector<GetLindormFsUsedDetailResponseBody::LStorageUsageList>) };
    inline vector<GetLindormFsUsedDetailResponseBody::LStorageUsageList> getLStorageUsageList() { DARABONBA_PTR_GET(LStorageUsageList_, vector<GetLindormFsUsedDetailResponseBody::LStorageUsageList>) };
    inline GetLindormFsUsedDetailResponseBody& setLStorageUsageList(const vector<GetLindormFsUsedDetailResponseBody::LStorageUsageList> & lStorageUsageList) { DARABONBA_PTR_SET_VALUE(LStorageUsageList_, lStorageUsageList) };
    inline GetLindormFsUsedDetailResponseBody& setLStorageUsageList(vector<GetLindormFsUsedDetailResponseBody::LStorageUsageList> && lStorageUsageList) { DARABONBA_PTR_SET_RVALUE(LStorageUsageList_, lStorageUsageList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormFsUsedDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // valid Field Functions 
    bool hasValid() const { return this->valid_ != nullptr;};
    void deleteValid() { this->valid_ = nullptr;};
    inline string getValid() const { DARABONBA_PTR_GET_DEFAULT(valid_, "") };
    inline GetLindormFsUsedDetailResponseBody& setValid(string valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


  protected:
    // The detailed reason why the access was denied.
    shared_ptr<string> accessDeniedDetail_ {};
    // The total storage space of the cluster. Unit: bytes.
    shared_ptr<string> fsCapacity_ {};
    // The cold storage space of the cluster. Unit: bytes.
    shared_ptr<string> fsCapacityCold_ {};
    // The hot storage space of the cluster. Unit: bytes.
    shared_ptr<string> fsCapacityHot_ {};
    // The cold storage usage of the cluster. Unit: bytes.
    shared_ptr<string> fsUsedCold_ {};
    // The cold storage usage of the table data of the search engine. Unit: bytes.
    shared_ptr<string> fsUsedColdOnLindormSearch_ {};
    // The cold storage usage of the table data of the time series engine. Unit: bytes.
    shared_ptr<string> fsUsedColdOnLindormTSDB_ {};
    // The cold storage usage of the table data of the wide table engine. Unit: bytes.
    shared_ptr<string> fsUsedColdOnLindormTable_ {};
    // The hot storage usage of the cluster. Unit: bytes.
    shared_ptr<string> fsUsedHot_ {};
    // The hot storage usage of the table data of the search engine. Unit: bytes.
    shared_ptr<string> fsUsedHotOnLindormSearch_ {};
    // The hot storage usage of the table data of the time series engine. Unit: bytes.
    shared_ptr<string> fsUsedHotOnLindormTSDB_ {};
    // The hot storage usage of the table data of the wide table engine. Unit: bytes.
    shared_ptr<string> fsUsedHotOnLindormTable_ {};
    // The storage usage of the search engine. Unit: bytes.
    shared_ptr<string> fsUsedOnLindormSearch_ {};
    // The storage usage of the time series engine. Unit: bytes.
    shared_ptr<string> fsUsedOnLindormTSDB_ {};
    // The space usage of the wide table engine. Unit: bytes.
    shared_ptr<string> fsUsedOnLindormTable_ {};
    // The storage usage of the table data of the wide table engine. Unit: bytes.
    shared_ptr<string> fsUsedOnLindormTableData_ {};
    // The storage usage of the log data of the wide table engine. Unit: bytes.
    shared_ptr<string> fsUsedOnLindormTableWAL_ {};
    // If the version of the underlying storage engine is 4.1.9 or later, the storage usage values returned for the LStorageUsageList parameter prevail. Storage details are returned based on the storage type.
    shared_ptr<vector<GetLindormFsUsedDetailResponseBody::LStorageUsageList>> LStorageUsageList_ {};
    // The request ID. Each request has a unique ID. You can use the request ID to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the return value is valid. Valid values: true and false. If a value of false is returned, you must provide the request ID for troubleshooting.
    shared_ptr<string> valid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
