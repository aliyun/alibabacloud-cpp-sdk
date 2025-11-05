// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEDICATEDBLOCKSTORAGECLUSTERINVENTORYDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEDICATEDBLOCKSTORAGECLUSTERINVENTORYDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class QueryDedicatedBlockStorageClusterInventoryDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDedicatedBlockStorageClusterInventoryDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DbscId, dbscId_);
      DARABONBA_PTR_TO_JSON(DbscName, dbscName_);
      DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDedicatedBlockStorageClusterInventoryDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DbscId, dbscId_);
      DARABONBA_PTR_FROM_JSON(DbscName, dbscName_);
      DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryDedicatedBlockStorageClusterInventoryDataResponseBody() = default ;
    QueryDedicatedBlockStorageClusterInventoryDataResponseBody(const QueryDedicatedBlockStorageClusterInventoryDataResponseBody &) = default ;
    QueryDedicatedBlockStorageClusterInventoryDataResponseBody(QueryDedicatedBlockStorageClusterInventoryDataResponseBody &&) = default ;
    QueryDedicatedBlockStorageClusterInventoryDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDedicatedBlockStorageClusterInventoryDataResponseBody() = default ;
    QueryDedicatedBlockStorageClusterInventoryDataResponseBody& operator=(const QueryDedicatedBlockStorageClusterInventoryDataResponseBody &) = default ;
    QueryDedicatedBlockStorageClusterInventoryDataResponseBody& operator=(QueryDedicatedBlockStorageClusterInventoryDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->dbscId_ == nullptr && return this->dbscName_ == nullptr && return this->diskCategory_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData>) };
    inline vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData>) };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBody& setData(const vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBody& setData(vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dbscId Field Functions 
    bool hasDbscId() const { return this->dbscId_ != nullptr;};
    void deleteDbscId() { this->dbscId_ = nullptr;};
    inline string dbscId() const { DARABONBA_PTR_GET_DEFAULT(dbscId_, "") };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBody& setDbscId(string dbscId) { DARABONBA_PTR_SET_VALUE(dbscId_, dbscId) };


    // dbscName Field Functions 
    bool hasDbscName() const { return this->dbscName_ != nullptr;};
    void deleteDbscName() { this->dbscName_ = nullptr;};
    inline string dbscName() const { DARABONBA_PTR_GET_DEFAULT(dbscName_, "") };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBody& setDbscName(string dbscName) { DARABONBA_PTR_SET_VALUE(dbscName_, dbscName) };


    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string diskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBody& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned data.
    std::shared_ptr<vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData>> data_ = nullptr;
    // The ID of the dedicated block storage cluster.
    std::shared_ptr<string> dbscId_ = nullptr;
    // The name of the dedicated block storage cluster.
    std::shared_ptr<string> dbscName_ = nullptr;
    // The type of the disk. Valid values:
    // 
    // *   cloud_essd: enhanced SSD (ESSD).
    std::shared_ptr<string> diskCategory_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
