// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEDICATEDBLOCKSTORAGECLUSTERINVENTORYDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEDICATEDBLOCKSTORAGECLUSTERINVENTORYDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItems, monitorItems_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItems, monitorItems_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MonitorItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MonitorItems& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableSize, availableSize_);
          DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
        };
        friend void from_json(const Darabonba::Json& j, MonitorItems& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableSize, availableSize_);
          DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
        };
        MonitorItems() = default ;
        MonitorItems(const MonitorItems &) = default ;
        MonitorItems(MonitorItems &&) = default ;
        MonitorItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MonitorItems() = default ;
        MonitorItems& operator=(const MonitorItems &) = default ;
        MonitorItems& operator=(MonitorItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->availableSize_ == nullptr
        && this->totalSize_ == nullptr; };
        // availableSize Field Functions 
        bool hasAvailableSize() const { return this->availableSize_ != nullptr;};
        void deleteAvailableSize() { this->availableSize_ = nullptr;};
        inline int64_t getAvailableSize() const { DARABONBA_PTR_GET_DEFAULT(availableSize_, 0L) };
        inline MonitorItems& setAvailableSize(int64_t availableSize) { DARABONBA_PTR_SET_VALUE(availableSize_, availableSize) };


        // totalSize Field Functions 
        bool hasTotalSize() const { return this->totalSize_ != nullptr;};
        void deleteTotalSize() { this->totalSize_ = nullptr;};
        inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
        inline MonitorItems& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


      protected:
        // Available capacity size of the dedicated block storage cluster.
        shared_ptr<int64_t> availableSize_ {};
        // Total capacity size of the dedicated block storage cluster.
        shared_ptr<int64_t> totalSize_ {};
      };

      virtual bool empty() const override { return this->monitorItems_ == nullptr
        && this->resourceId_ == nullptr && this->timestamp_ == nullptr; };
      // monitorItems Field Functions 
      bool hasMonitorItems() const { return this->monitorItems_ != nullptr;};
      void deleteMonitorItems() { this->monitorItems_ = nullptr;};
      inline const Data::MonitorItems & getMonitorItems() const { DARABONBA_PTR_GET_CONST(monitorItems_, Data::MonitorItems) };
      inline Data::MonitorItems getMonitorItems() { DARABONBA_PTR_GET(monitorItems_, Data::MonitorItems) };
      inline Data& setMonitorItems(const Data::MonitorItems & monitorItems) { DARABONBA_PTR_SET_VALUE(monitorItems_, monitorItems) };
      inline Data& setMonitorItems(Data::MonitorItems && monitorItems) { DARABONBA_PTR_SET_RVALUE(monitorItems_, monitorItems) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Data& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline Data& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The returned metrics.
      shared_ptr<Data::MonitorItems> monitorItems_ {};
      // The ID list of the resource.
      shared_ptr<string> resourceId_ {};
      // The timestamp when the data is collected.
      shared_ptr<string> timestamp_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->dbscId_ == nullptr && this->dbscName_ == nullptr && this->diskCategory_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBody::Data>) };
    inline vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBody::Data>) };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBody& setData(const vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBody& setData(vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dbscId Field Functions 
    bool hasDbscId() const { return this->dbscId_ != nullptr;};
    void deleteDbscId() { this->dbscId_ = nullptr;};
    inline string getDbscId() const { DARABONBA_PTR_GET_DEFAULT(dbscId_, "") };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBody& setDbscId(string dbscId) { DARABONBA_PTR_SET_VALUE(dbscId_, dbscId) };


    // dbscName Field Functions 
    bool hasDbscName() const { return this->dbscName_ != nullptr;};
    void deleteDbscName() { this->dbscName_ = nullptr;};
    inline string getDbscName() const { DARABONBA_PTR_GET_DEFAULT(dbscName_, "") };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBody& setDbscName(string dbscName) { DARABONBA_PTR_SET_VALUE(dbscName_, dbscName) };


    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBody& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned data.
    shared_ptr<vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBody::Data>> data_ {};
    // The ID of the dedicated block storage cluster.
    shared_ptr<string> dbscId_ {};
    // The name of the dedicated block storage cluster.
    shared_ptr<string> dbscName_ {};
    // The type of the disk. Valid values:
    // 
    // *   cloud_essd: enhanced SSD (ESSD).
    shared_ptr<string> diskCategory_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
