// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCAVAILABLEDBCLUSTERLISTRESPONSEBODYSYNCAVAILABLEDBCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCAVAILABLEDBCLUSTERLISTRESPONSEBODYSYNCAVAILABLEDBCLUSTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(TableNumber, tableNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(TableNumber, tableNumber_);
    };
    DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters() = default ;
    DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters(const DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters &) = default ;
    DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters(DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters &&) = default ;
    DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters() = default ;
    DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters& operator=(const DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters &) = default ;
    DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters& operator=(DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterDescription_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->DBType_ == nullptr && return this->storageSize_ == nullptr && return this->tableNumber_ == nullptr; };
    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline float storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0.0) };
    inline DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters& setStorageSize(float storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // tableNumber Field Functions 
    bool hasTableNumber() const { return this->tableNumber_ != nullptr;};
    void deleteTableNumber() { this->tableNumber_ = nullptr;};
    inline int32_t tableNumber() const { DARABONBA_PTR_GET_DEFAULT(tableNumber_, 0) };
    inline DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters& setTableNumber(int32_t tableNumber) { DARABONBA_PTR_SET_VALUE(tableNumber_, tableNumber) };


  protected:
    // The description of the instance or cluster.
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    // The instance or cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The database type of the instance or cluster.
    std::shared_ptr<string> DBType_ = nullptr;
    // The storage size.
    std::shared_ptr<float> storageSize_ = nullptr;
    // The number of tables.
    std::shared_ptr<int32_t> tableNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
