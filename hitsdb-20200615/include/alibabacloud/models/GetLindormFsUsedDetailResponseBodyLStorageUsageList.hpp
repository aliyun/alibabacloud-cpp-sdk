// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMFSUSEDDETAILRESPONSEBODYLSTORAGEUSAGELIST_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMFSUSEDDETAILRESPONSEBODYLSTORAGEUSAGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormFsUsedDetailResponseBodyLStorageUsageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormFsUsedDetailResponseBodyLStorageUsageList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetLindormFsUsedDetailResponseBodyLStorageUsageList& obj) { 
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
    GetLindormFsUsedDetailResponseBodyLStorageUsageList() = default ;
    GetLindormFsUsedDetailResponseBodyLStorageUsageList(const GetLindormFsUsedDetailResponseBodyLStorageUsageList &) = default ;
    GetLindormFsUsedDetailResponseBodyLStorageUsageList(GetLindormFsUsedDetailResponseBodyLStorageUsageList &&) = default ;
    GetLindormFsUsedDetailResponseBodyLStorageUsageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormFsUsedDetailResponseBodyLStorageUsageList() = default ;
    GetLindormFsUsedDetailResponseBodyLStorageUsageList& operator=(const GetLindormFsUsedDetailResponseBodyLStorageUsageList &) = default ;
    GetLindormFsUsedDetailResponseBodyLStorageUsageList& operator=(GetLindormFsUsedDetailResponseBodyLStorageUsageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacity_ == nullptr
        && return this->diskType_ == nullptr && return this->used_ == nullptr && return this->usedLindormColumn3_ == nullptr && return this->usedLindormMessage3_ == nullptr && return this->usedLindormSearch_ == nullptr
        && return this->usedLindormSpark_ == nullptr && return this->usedLindormTable_ == nullptr && return this->usedLindormTsdb_ == nullptr && return this->usedLindormVector3_ == nullptr && return this->usedOther_ == nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline string capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, "") };
    inline GetLindormFsUsedDetailResponseBodyLStorageUsageList& setCapacity(string capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline GetLindormFsUsedDetailResponseBodyLStorageUsageList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // used Field Functions 
    bool hasUsed() const { return this->used_ != nullptr;};
    void deleteUsed() { this->used_ = nullptr;};
    inline string used() const { DARABONBA_PTR_GET_DEFAULT(used_, "") };
    inline GetLindormFsUsedDetailResponseBodyLStorageUsageList& setUsed(string used) { DARABONBA_PTR_SET_VALUE(used_, used) };


    // usedLindormColumn3 Field Functions 
    bool hasUsedLindormColumn3() const { return this->usedLindormColumn3_ != nullptr;};
    void deleteUsedLindormColumn3() { this->usedLindormColumn3_ = nullptr;};
    inline string usedLindormColumn3() const { DARABONBA_PTR_GET_DEFAULT(usedLindormColumn3_, "") };
    inline GetLindormFsUsedDetailResponseBodyLStorageUsageList& setUsedLindormColumn3(string usedLindormColumn3) { DARABONBA_PTR_SET_VALUE(usedLindormColumn3_, usedLindormColumn3) };


    // usedLindormMessage3 Field Functions 
    bool hasUsedLindormMessage3() const { return this->usedLindormMessage3_ != nullptr;};
    void deleteUsedLindormMessage3() { this->usedLindormMessage3_ = nullptr;};
    inline string usedLindormMessage3() const { DARABONBA_PTR_GET_DEFAULT(usedLindormMessage3_, "") };
    inline GetLindormFsUsedDetailResponseBodyLStorageUsageList& setUsedLindormMessage3(string usedLindormMessage3) { DARABONBA_PTR_SET_VALUE(usedLindormMessage3_, usedLindormMessage3) };


    // usedLindormSearch Field Functions 
    bool hasUsedLindormSearch() const { return this->usedLindormSearch_ != nullptr;};
    void deleteUsedLindormSearch() { this->usedLindormSearch_ = nullptr;};
    inline string usedLindormSearch() const { DARABONBA_PTR_GET_DEFAULT(usedLindormSearch_, "") };
    inline GetLindormFsUsedDetailResponseBodyLStorageUsageList& setUsedLindormSearch(string usedLindormSearch) { DARABONBA_PTR_SET_VALUE(usedLindormSearch_, usedLindormSearch) };


    // usedLindormSpark Field Functions 
    bool hasUsedLindormSpark() const { return this->usedLindormSpark_ != nullptr;};
    void deleteUsedLindormSpark() { this->usedLindormSpark_ = nullptr;};
    inline string usedLindormSpark() const { DARABONBA_PTR_GET_DEFAULT(usedLindormSpark_, "") };
    inline GetLindormFsUsedDetailResponseBodyLStorageUsageList& setUsedLindormSpark(string usedLindormSpark) { DARABONBA_PTR_SET_VALUE(usedLindormSpark_, usedLindormSpark) };


    // usedLindormTable Field Functions 
    bool hasUsedLindormTable() const { return this->usedLindormTable_ != nullptr;};
    void deleteUsedLindormTable() { this->usedLindormTable_ = nullptr;};
    inline string usedLindormTable() const { DARABONBA_PTR_GET_DEFAULT(usedLindormTable_, "") };
    inline GetLindormFsUsedDetailResponseBodyLStorageUsageList& setUsedLindormTable(string usedLindormTable) { DARABONBA_PTR_SET_VALUE(usedLindormTable_, usedLindormTable) };


    // usedLindormTsdb Field Functions 
    bool hasUsedLindormTsdb() const { return this->usedLindormTsdb_ != nullptr;};
    void deleteUsedLindormTsdb() { this->usedLindormTsdb_ = nullptr;};
    inline string usedLindormTsdb() const { DARABONBA_PTR_GET_DEFAULT(usedLindormTsdb_, "") };
    inline GetLindormFsUsedDetailResponseBodyLStorageUsageList& setUsedLindormTsdb(string usedLindormTsdb) { DARABONBA_PTR_SET_VALUE(usedLindormTsdb_, usedLindormTsdb) };


    // usedLindormVector3 Field Functions 
    bool hasUsedLindormVector3() const { return this->usedLindormVector3_ != nullptr;};
    void deleteUsedLindormVector3() { this->usedLindormVector3_ = nullptr;};
    inline string usedLindormVector3() const { DARABONBA_PTR_GET_DEFAULT(usedLindormVector3_, "") };
    inline GetLindormFsUsedDetailResponseBodyLStorageUsageList& setUsedLindormVector3(string usedLindormVector3) { DARABONBA_PTR_SET_VALUE(usedLindormVector3_, usedLindormVector3) };


    // usedOther Field Functions 
    bool hasUsedOther() const { return this->usedOther_ != nullptr;};
    void deleteUsedOther() { this->usedOther_ = nullptr;};
    inline string usedOther() const { DARABONBA_PTR_GET_DEFAULT(usedOther_, "") };
    inline GetLindormFsUsedDetailResponseBodyLStorageUsageList& setUsedOther(string usedOther) { DARABONBA_PTR_SET_VALUE(usedOther_, usedOther) };


  protected:
    // The total storage capacity. Unit: bytes.
    std::shared_ptr<string> capacity_ = nullptr;
    // The storage type of the cluster. Valid values:
    // 
    // *   StandardCloudStorage
    // *   PerformanceCloudStorage
    // *   CapacityCloudStorage
    // *   LocalSsdStorage
    // *   LocalHddStorage
    // *   LocalEbsStorage
    std::shared_ptr<string> diskType_ = nullptr;
    // The storage usage. Unit: bytes.
    std::shared_ptr<string> used_ = nullptr;
    std::shared_ptr<string> usedLindormColumn3_ = nullptr;
    std::shared_ptr<string> usedLindormMessage3_ = nullptr;
    // The storage usage of the search engine. Unit: bytes.
    std::shared_ptr<string> usedLindormSearch_ = nullptr;
    // The storage usage of the compute engine. Unit: bytes.
    std::shared_ptr<string> usedLindormSpark_ = nullptr;
    // The storage usage of the wide table engine. Unit: bytes.
    std::shared_ptr<string> usedLindormTable_ = nullptr;
    // The storage usage of the time series engine. Unit: bytes.
    std::shared_ptr<string> usedLindormTsdb_ = nullptr;
    std::shared_ptr<string> usedLindormVector3_ = nullptr;
    // The storage usage of other resources, such as logs and recycle bins. Unit: bytes.
    std::shared_ptr<string> usedOther_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
