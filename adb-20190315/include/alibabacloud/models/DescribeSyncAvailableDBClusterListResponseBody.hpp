// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCAVAILABLEDBCLUSTERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCAVAILABLEDBCLUSTERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeSyncAvailableDBClusterListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncAvailableDBClusterListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SyncAvailableDBClusters, syncAvailableDBClusters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncAvailableDBClusterListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SyncAvailableDBClusters, syncAvailableDBClusters_);
    };
    DescribeSyncAvailableDBClusterListResponseBody() = default ;
    DescribeSyncAvailableDBClusterListResponseBody(const DescribeSyncAvailableDBClusterListResponseBody &) = default ;
    DescribeSyncAvailableDBClusterListResponseBody(DescribeSyncAvailableDBClusterListResponseBody &&) = default ;
    DescribeSyncAvailableDBClusterListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncAvailableDBClusterListResponseBody() = default ;
    DescribeSyncAvailableDBClusterListResponseBody& operator=(const DescribeSyncAvailableDBClusterListResponseBody &) = default ;
    DescribeSyncAvailableDBClusterListResponseBody& operator=(DescribeSyncAvailableDBClusterListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SyncAvailableDBClusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SyncAvailableDBClusters& obj) { 
        DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(DBType, DBType_);
        DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
        DARABONBA_PTR_TO_JSON(TableNumber, tableNumber_);
      };
      friend void from_json(const Darabonba::Json& j, SyncAvailableDBClusters& obj) { 
        DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(DBType, DBType_);
        DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
        DARABONBA_PTR_FROM_JSON(TableNumber, tableNumber_);
      };
      SyncAvailableDBClusters() = default ;
      SyncAvailableDBClusters(const SyncAvailableDBClusters &) = default ;
      SyncAvailableDBClusters(SyncAvailableDBClusters &&) = default ;
      SyncAvailableDBClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SyncAvailableDBClusters() = default ;
      SyncAvailableDBClusters& operator=(const SyncAvailableDBClusters &) = default ;
      SyncAvailableDBClusters& operator=(SyncAvailableDBClusters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBClusterDescription_ == nullptr
        && this->DBClusterId_ == nullptr && this->DBType_ == nullptr && this->storageSize_ == nullptr && this->tableNumber_ == nullptr; };
      // DBClusterDescription Field Functions 
      bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
      void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
      inline string getDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
      inline SyncAvailableDBClusters& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline SyncAvailableDBClusters& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // DBType Field Functions 
      bool hasDBType() const { return this->DBType_ != nullptr;};
      void deleteDBType() { this->DBType_ = nullptr;};
      inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
      inline SyncAvailableDBClusters& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline float getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0.0) };
      inline SyncAvailableDBClusters& setStorageSize(float storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      // tableNumber Field Functions 
      bool hasTableNumber() const { return this->tableNumber_ != nullptr;};
      void deleteTableNumber() { this->tableNumber_ = nullptr;};
      inline int32_t getTableNumber() const { DARABONBA_PTR_GET_DEFAULT(tableNumber_, 0) };
      inline SyncAvailableDBClusters& setTableNumber(int32_t tableNumber) { DARABONBA_PTR_SET_VALUE(tableNumber_, tableNumber) };


    protected:
      // The description of the instance or cluster.
      shared_ptr<string> DBClusterDescription_ {};
      // The instance or cluster ID.
      shared_ptr<string> DBClusterId_ {};
      // The database type of the instance or cluster.
      shared_ptr<string> DBType_ {};
      // The storage size.
      shared_ptr<float> storageSize_ {};
      // The number of tables.
      shared_ptr<int32_t> tableNumber_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->syncAvailableDBClusters_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSyncAvailableDBClusterListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syncAvailableDBClusters Field Functions 
    bool hasSyncAvailableDBClusters() const { return this->syncAvailableDBClusters_ != nullptr;};
    void deleteSyncAvailableDBClusters() { this->syncAvailableDBClusters_ = nullptr;};
    inline const vector<DescribeSyncAvailableDBClusterListResponseBody::SyncAvailableDBClusters> & getSyncAvailableDBClusters() const { DARABONBA_PTR_GET_CONST(syncAvailableDBClusters_, vector<DescribeSyncAvailableDBClusterListResponseBody::SyncAvailableDBClusters>) };
    inline vector<DescribeSyncAvailableDBClusterListResponseBody::SyncAvailableDBClusters> getSyncAvailableDBClusters() { DARABONBA_PTR_GET(syncAvailableDBClusters_, vector<DescribeSyncAvailableDBClusterListResponseBody::SyncAvailableDBClusters>) };
    inline DescribeSyncAvailableDBClusterListResponseBody& setSyncAvailableDBClusters(const vector<DescribeSyncAvailableDBClusterListResponseBody::SyncAvailableDBClusters> & syncAvailableDBClusters) { DARABONBA_PTR_SET_VALUE(syncAvailableDBClusters_, syncAvailableDBClusters) };
    inline DescribeSyncAvailableDBClusterListResponseBody& setSyncAvailableDBClusters(vector<DescribeSyncAvailableDBClusterListResponseBody::SyncAvailableDBClusters> && syncAvailableDBClusters) { DARABONBA_PTR_SET_RVALUE(syncAvailableDBClusters_, syncAvailableDBClusters) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried instances or clusters.
    shared_ptr<vector<DescribeSyncAvailableDBClusterListResponseBody::SyncAvailableDBClusters>> syncAvailableDBClusters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
