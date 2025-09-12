// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMFSUSEDDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMFSUSEDDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLindormFsUsedDetailResponseBodyLStorageUsageList.hpp>
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
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->fsCapacity_ != nullptr && this->fsCapacityCold_ != nullptr && this->fsCapacityHot_ != nullptr && this->fsUsedCold_ != nullptr && this->fsUsedColdOnLindormSearch_ != nullptr
        && this->fsUsedColdOnLindormTSDB_ != nullptr && this->fsUsedColdOnLindormTable_ != nullptr && this->fsUsedHot_ != nullptr && this->fsUsedHotOnLindormSearch_ != nullptr && this->fsUsedHotOnLindormTSDB_ != nullptr
        && this->fsUsedHotOnLindormTable_ != nullptr && this->fsUsedOnLindormSearch_ != nullptr && this->fsUsedOnLindormTSDB_ != nullptr && this->fsUsedOnLindormTable_ != nullptr && this->fsUsedOnLindormTableData_ != nullptr
        && this->fsUsedOnLindormTableWAL_ != nullptr && this->LStorageUsageList_ != nullptr && this->requestId_ != nullptr && this->valid_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetLindormFsUsedDetailResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // fsCapacity Field Functions 
    bool hasFsCapacity() const { return this->fsCapacity_ != nullptr;};
    void deleteFsCapacity() { this->fsCapacity_ = nullptr;};
    inline string fsCapacity() const { DARABONBA_PTR_GET_DEFAULT(fsCapacity_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsCapacity(string fsCapacity) { DARABONBA_PTR_SET_VALUE(fsCapacity_, fsCapacity) };


    // fsCapacityCold Field Functions 
    bool hasFsCapacityCold() const { return this->fsCapacityCold_ != nullptr;};
    void deleteFsCapacityCold() { this->fsCapacityCold_ = nullptr;};
    inline string fsCapacityCold() const { DARABONBA_PTR_GET_DEFAULT(fsCapacityCold_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsCapacityCold(string fsCapacityCold) { DARABONBA_PTR_SET_VALUE(fsCapacityCold_, fsCapacityCold) };


    // fsCapacityHot Field Functions 
    bool hasFsCapacityHot() const { return this->fsCapacityHot_ != nullptr;};
    void deleteFsCapacityHot() { this->fsCapacityHot_ = nullptr;};
    inline string fsCapacityHot() const { DARABONBA_PTR_GET_DEFAULT(fsCapacityHot_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsCapacityHot(string fsCapacityHot) { DARABONBA_PTR_SET_VALUE(fsCapacityHot_, fsCapacityHot) };


    // fsUsedCold Field Functions 
    bool hasFsUsedCold() const { return this->fsUsedCold_ != nullptr;};
    void deleteFsUsedCold() { this->fsUsedCold_ = nullptr;};
    inline string fsUsedCold() const { DARABONBA_PTR_GET_DEFAULT(fsUsedCold_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedCold(string fsUsedCold) { DARABONBA_PTR_SET_VALUE(fsUsedCold_, fsUsedCold) };


    // fsUsedColdOnLindormSearch Field Functions 
    bool hasFsUsedColdOnLindormSearch() const { return this->fsUsedColdOnLindormSearch_ != nullptr;};
    void deleteFsUsedColdOnLindormSearch() { this->fsUsedColdOnLindormSearch_ = nullptr;};
    inline string fsUsedColdOnLindormSearch() const { DARABONBA_PTR_GET_DEFAULT(fsUsedColdOnLindormSearch_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedColdOnLindormSearch(string fsUsedColdOnLindormSearch) { DARABONBA_PTR_SET_VALUE(fsUsedColdOnLindormSearch_, fsUsedColdOnLindormSearch) };


    // fsUsedColdOnLindormTSDB Field Functions 
    bool hasFsUsedColdOnLindormTSDB() const { return this->fsUsedColdOnLindormTSDB_ != nullptr;};
    void deleteFsUsedColdOnLindormTSDB() { this->fsUsedColdOnLindormTSDB_ = nullptr;};
    inline string fsUsedColdOnLindormTSDB() const { DARABONBA_PTR_GET_DEFAULT(fsUsedColdOnLindormTSDB_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedColdOnLindormTSDB(string fsUsedColdOnLindormTSDB) { DARABONBA_PTR_SET_VALUE(fsUsedColdOnLindormTSDB_, fsUsedColdOnLindormTSDB) };


    // fsUsedColdOnLindormTable Field Functions 
    bool hasFsUsedColdOnLindormTable() const { return this->fsUsedColdOnLindormTable_ != nullptr;};
    void deleteFsUsedColdOnLindormTable() { this->fsUsedColdOnLindormTable_ = nullptr;};
    inline string fsUsedColdOnLindormTable() const { DARABONBA_PTR_GET_DEFAULT(fsUsedColdOnLindormTable_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedColdOnLindormTable(string fsUsedColdOnLindormTable) { DARABONBA_PTR_SET_VALUE(fsUsedColdOnLindormTable_, fsUsedColdOnLindormTable) };


    // fsUsedHot Field Functions 
    bool hasFsUsedHot() const { return this->fsUsedHot_ != nullptr;};
    void deleteFsUsedHot() { this->fsUsedHot_ = nullptr;};
    inline string fsUsedHot() const { DARABONBA_PTR_GET_DEFAULT(fsUsedHot_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedHot(string fsUsedHot) { DARABONBA_PTR_SET_VALUE(fsUsedHot_, fsUsedHot) };


    // fsUsedHotOnLindormSearch Field Functions 
    bool hasFsUsedHotOnLindormSearch() const { return this->fsUsedHotOnLindormSearch_ != nullptr;};
    void deleteFsUsedHotOnLindormSearch() { this->fsUsedHotOnLindormSearch_ = nullptr;};
    inline string fsUsedHotOnLindormSearch() const { DARABONBA_PTR_GET_DEFAULT(fsUsedHotOnLindormSearch_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedHotOnLindormSearch(string fsUsedHotOnLindormSearch) { DARABONBA_PTR_SET_VALUE(fsUsedHotOnLindormSearch_, fsUsedHotOnLindormSearch) };


    // fsUsedHotOnLindormTSDB Field Functions 
    bool hasFsUsedHotOnLindormTSDB() const { return this->fsUsedHotOnLindormTSDB_ != nullptr;};
    void deleteFsUsedHotOnLindormTSDB() { this->fsUsedHotOnLindormTSDB_ = nullptr;};
    inline string fsUsedHotOnLindormTSDB() const { DARABONBA_PTR_GET_DEFAULT(fsUsedHotOnLindormTSDB_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedHotOnLindormTSDB(string fsUsedHotOnLindormTSDB) { DARABONBA_PTR_SET_VALUE(fsUsedHotOnLindormTSDB_, fsUsedHotOnLindormTSDB) };


    // fsUsedHotOnLindormTable Field Functions 
    bool hasFsUsedHotOnLindormTable() const { return this->fsUsedHotOnLindormTable_ != nullptr;};
    void deleteFsUsedHotOnLindormTable() { this->fsUsedHotOnLindormTable_ = nullptr;};
    inline string fsUsedHotOnLindormTable() const { DARABONBA_PTR_GET_DEFAULT(fsUsedHotOnLindormTable_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedHotOnLindormTable(string fsUsedHotOnLindormTable) { DARABONBA_PTR_SET_VALUE(fsUsedHotOnLindormTable_, fsUsedHotOnLindormTable) };


    // fsUsedOnLindormSearch Field Functions 
    bool hasFsUsedOnLindormSearch() const { return this->fsUsedOnLindormSearch_ != nullptr;};
    void deleteFsUsedOnLindormSearch() { this->fsUsedOnLindormSearch_ = nullptr;};
    inline string fsUsedOnLindormSearch() const { DARABONBA_PTR_GET_DEFAULT(fsUsedOnLindormSearch_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedOnLindormSearch(string fsUsedOnLindormSearch) { DARABONBA_PTR_SET_VALUE(fsUsedOnLindormSearch_, fsUsedOnLindormSearch) };


    // fsUsedOnLindormTSDB Field Functions 
    bool hasFsUsedOnLindormTSDB() const { return this->fsUsedOnLindormTSDB_ != nullptr;};
    void deleteFsUsedOnLindormTSDB() { this->fsUsedOnLindormTSDB_ = nullptr;};
    inline string fsUsedOnLindormTSDB() const { DARABONBA_PTR_GET_DEFAULT(fsUsedOnLindormTSDB_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedOnLindormTSDB(string fsUsedOnLindormTSDB) { DARABONBA_PTR_SET_VALUE(fsUsedOnLindormTSDB_, fsUsedOnLindormTSDB) };


    // fsUsedOnLindormTable Field Functions 
    bool hasFsUsedOnLindormTable() const { return this->fsUsedOnLindormTable_ != nullptr;};
    void deleteFsUsedOnLindormTable() { this->fsUsedOnLindormTable_ = nullptr;};
    inline string fsUsedOnLindormTable() const { DARABONBA_PTR_GET_DEFAULT(fsUsedOnLindormTable_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedOnLindormTable(string fsUsedOnLindormTable) { DARABONBA_PTR_SET_VALUE(fsUsedOnLindormTable_, fsUsedOnLindormTable) };


    // fsUsedOnLindormTableData Field Functions 
    bool hasFsUsedOnLindormTableData() const { return this->fsUsedOnLindormTableData_ != nullptr;};
    void deleteFsUsedOnLindormTableData() { this->fsUsedOnLindormTableData_ = nullptr;};
    inline string fsUsedOnLindormTableData() const { DARABONBA_PTR_GET_DEFAULT(fsUsedOnLindormTableData_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedOnLindormTableData(string fsUsedOnLindormTableData) { DARABONBA_PTR_SET_VALUE(fsUsedOnLindormTableData_, fsUsedOnLindormTableData) };


    // fsUsedOnLindormTableWAL Field Functions 
    bool hasFsUsedOnLindormTableWAL() const { return this->fsUsedOnLindormTableWAL_ != nullptr;};
    void deleteFsUsedOnLindormTableWAL() { this->fsUsedOnLindormTableWAL_ = nullptr;};
    inline string fsUsedOnLindormTableWAL() const { DARABONBA_PTR_GET_DEFAULT(fsUsedOnLindormTableWAL_, "") };
    inline GetLindormFsUsedDetailResponseBody& setFsUsedOnLindormTableWAL(string fsUsedOnLindormTableWAL) { DARABONBA_PTR_SET_VALUE(fsUsedOnLindormTableWAL_, fsUsedOnLindormTableWAL) };


    // LStorageUsageList Field Functions 
    bool hasLStorageUsageList() const { return this->LStorageUsageList_ != nullptr;};
    void deleteLStorageUsageList() { this->LStorageUsageList_ = nullptr;};
    inline const vector<GetLindormFsUsedDetailResponseBodyLStorageUsageList> & LStorageUsageList() const { DARABONBA_PTR_GET_CONST(LStorageUsageList_, vector<GetLindormFsUsedDetailResponseBodyLStorageUsageList>) };
    inline vector<GetLindormFsUsedDetailResponseBodyLStorageUsageList> LStorageUsageList() { DARABONBA_PTR_GET(LStorageUsageList_, vector<GetLindormFsUsedDetailResponseBodyLStorageUsageList>) };
    inline GetLindormFsUsedDetailResponseBody& setLStorageUsageList(const vector<GetLindormFsUsedDetailResponseBodyLStorageUsageList> & LStorageUsageList) { DARABONBA_PTR_SET_VALUE(LStorageUsageList_, LStorageUsageList) };
    inline GetLindormFsUsedDetailResponseBody& setLStorageUsageList(vector<GetLindormFsUsedDetailResponseBodyLStorageUsageList> && LStorageUsageList) { DARABONBA_PTR_SET_RVALUE(LStorageUsageList_, LStorageUsageList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormFsUsedDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // valid Field Functions 
    bool hasValid() const { return this->valid_ != nullptr;};
    void deleteValid() { this->valid_ = nullptr;};
    inline string valid() const { DARABONBA_PTR_GET_DEFAULT(valid_, "") };
    inline GetLindormFsUsedDetailResponseBody& setValid(string valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


  protected:
    // The detailed reason why the access was denied.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The total storage space of the cluster. Unit: bytes.
    std::shared_ptr<string> fsCapacity_ = nullptr;
    // The cold storage space of the cluster. Unit: bytes.
    std::shared_ptr<string> fsCapacityCold_ = nullptr;
    // The hot storage space of the cluster. Unit: bytes.
    std::shared_ptr<string> fsCapacityHot_ = nullptr;
    // The cold storage usage of the cluster. Unit: bytes.
    std::shared_ptr<string> fsUsedCold_ = nullptr;
    // The cold storage usage of the table data of the search engine. Unit: bytes.
    std::shared_ptr<string> fsUsedColdOnLindormSearch_ = nullptr;
    // The cold storage usage of the table data of the time series engine. Unit: bytes.
    std::shared_ptr<string> fsUsedColdOnLindormTSDB_ = nullptr;
    // The cold storage usage of the table data of the wide table engine. Unit: bytes.
    std::shared_ptr<string> fsUsedColdOnLindormTable_ = nullptr;
    // The hot storage usage of the cluster. Unit: bytes.
    std::shared_ptr<string> fsUsedHot_ = nullptr;
    // The hot storage usage of the table data of the search engine. Unit: bytes.
    std::shared_ptr<string> fsUsedHotOnLindormSearch_ = nullptr;
    // The hot storage usage of the table data of the time series engine. Unit: bytes.
    std::shared_ptr<string> fsUsedHotOnLindormTSDB_ = nullptr;
    // The hot storage usage of the table data of the wide table engine. Unit: bytes.
    std::shared_ptr<string> fsUsedHotOnLindormTable_ = nullptr;
    // The storage usage of the search engine. Unit: bytes.
    std::shared_ptr<string> fsUsedOnLindormSearch_ = nullptr;
    // The storage usage of the time series engine. Unit: bytes.
    std::shared_ptr<string> fsUsedOnLindormTSDB_ = nullptr;
    // The space usage of the wide table engine. Unit: bytes.
    std::shared_ptr<string> fsUsedOnLindormTable_ = nullptr;
    // The storage usage of the table data of the wide table engine. Unit: bytes.
    std::shared_ptr<string> fsUsedOnLindormTableData_ = nullptr;
    // The storage usage of the log data of the wide table engine. Unit: bytes.
    std::shared_ptr<string> fsUsedOnLindormTableWAL_ = nullptr;
    // If the version of the underlying storage engine is 4.1.9 or later, the storage usage values returned for the LStorageUsageList parameter prevail. Storage details are returned based on the storage type.
    std::shared_ptr<vector<GetLindormFsUsedDetailResponseBodyLStorageUsageList>> LStorageUsageList_ = nullptr;
    // The request ID. Each request has a unique ID. You can use the request ID to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the return value is valid. Valid values: true and false. If a value of false is returned, you must provide the request ID for troubleshooting.
    std::shared_ptr<string> valid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
