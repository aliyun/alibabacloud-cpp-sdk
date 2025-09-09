// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSSHARDINGDBSRESPONSEBODYSHARDINGDBSSHARDINGDB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSSHARDINGDBSRESPONSEBODYSHARDINGDBSSHARDINGDB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& obj) { 
      DARABONBA_PTR_TO_JSON(BlockingTimeout, blockingTimeout_);
      DARABONBA_PTR_TO_JSON(ConnectUrl, connectUrl_);
      DARABONBA_PTR_TO_JSON(ConnectionProperties, connectionProperties_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(DbStatus, dbStatus_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IdleTimeOut, idleTimeOut_);
      DARABONBA_PTR_TO_JSON(MaxPoolSize, maxPoolSize_);
      DARABONBA_PTR_TO_JSON(MinPoolSize, minPoolSize_);
      DARABONBA_PTR_TO_JSON(PreparedStatementCacheSize, preparedStatementCacheSize_);
      DARABONBA_PTR_TO_JSON(ShardingDbName, shardingDbName_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockingTimeout, blockingTimeout_);
      DARABONBA_PTR_FROM_JSON(ConnectUrl, connectUrl_);
      DARABONBA_PTR_FROM_JSON(ConnectionProperties, connectionProperties_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(DbStatus, dbStatus_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IdleTimeOut, idleTimeOut_);
      DARABONBA_PTR_FROM_JSON(MaxPoolSize, maxPoolSize_);
      DARABONBA_PTR_FROM_JSON(MinPoolSize, minPoolSize_);
      DARABONBA_PTR_FROM_JSON(PreparedStatementCacheSize, preparedStatementCacheSize_);
      DARABONBA_PTR_FROM_JSON(ShardingDbName, shardingDbName_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb() = default ;
    DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb(const DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb &) = default ;
    DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb(DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb &&) = default ;
    DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb() = default ;
    DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& operator=(const DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb &) = default ;
    DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& operator=(DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockingTimeout_ != nullptr
        && this->connectUrl_ != nullptr && this->connectionProperties_ != nullptr && this->dbInstanceId_ != nullptr && this->dbStatus_ != nullptr && this->dbType_ != nullptr
        && this->groupName_ != nullptr && this->idleTimeOut_ != nullptr && this->maxPoolSize_ != nullptr && this->minPoolSize_ != nullptr && this->preparedStatementCacheSize_ != nullptr
        && this->shardingDbName_ != nullptr && this->userName_ != nullptr; };
    // blockingTimeout Field Functions 
    bool hasBlockingTimeout() const { return this->blockingTimeout_ != nullptr;};
    void deleteBlockingTimeout() { this->blockingTimeout_ = nullptr;};
    inline int32_t blockingTimeout() const { DARABONBA_PTR_GET_DEFAULT(blockingTimeout_, 0) };
    inline DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& setBlockingTimeout(int32_t blockingTimeout) { DARABONBA_PTR_SET_VALUE(blockingTimeout_, blockingTimeout) };


    // connectUrl Field Functions 
    bool hasConnectUrl() const { return this->connectUrl_ != nullptr;};
    void deleteConnectUrl() { this->connectUrl_ = nullptr;};
    inline string connectUrl() const { DARABONBA_PTR_GET_DEFAULT(connectUrl_, "") };
    inline DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& setConnectUrl(string connectUrl) { DARABONBA_PTR_SET_VALUE(connectUrl_, connectUrl) };


    // connectionProperties Field Functions 
    bool hasConnectionProperties() const { return this->connectionProperties_ != nullptr;};
    void deleteConnectionProperties() { this->connectionProperties_ = nullptr;};
    inline string connectionProperties() const { DARABONBA_PTR_GET_DEFAULT(connectionProperties_, "") };
    inline DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& setConnectionProperties(string connectionProperties) { DARABONBA_PTR_SET_VALUE(connectionProperties_, connectionProperties) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // dbStatus Field Functions 
    bool hasDbStatus() const { return this->dbStatus_ != nullptr;};
    void deleteDbStatus() { this->dbStatus_ = nullptr;};
    inline string dbStatus() const { DARABONBA_PTR_GET_DEFAULT(dbStatus_, "") };
    inline DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& setDbStatus(string dbStatus) { DARABONBA_PTR_SET_VALUE(dbStatus_, dbStatus) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // idleTimeOut Field Functions 
    bool hasIdleTimeOut() const { return this->idleTimeOut_ != nullptr;};
    void deleteIdleTimeOut() { this->idleTimeOut_ = nullptr;};
    inline int32_t idleTimeOut() const { DARABONBA_PTR_GET_DEFAULT(idleTimeOut_, 0) };
    inline DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& setIdleTimeOut(int32_t idleTimeOut) { DARABONBA_PTR_SET_VALUE(idleTimeOut_, idleTimeOut) };


    // maxPoolSize Field Functions 
    bool hasMaxPoolSize() const { return this->maxPoolSize_ != nullptr;};
    void deleteMaxPoolSize() { this->maxPoolSize_ = nullptr;};
    inline int32_t maxPoolSize() const { DARABONBA_PTR_GET_DEFAULT(maxPoolSize_, 0) };
    inline DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& setMaxPoolSize(int32_t maxPoolSize) { DARABONBA_PTR_SET_VALUE(maxPoolSize_, maxPoolSize) };


    // minPoolSize Field Functions 
    bool hasMinPoolSize() const { return this->minPoolSize_ != nullptr;};
    void deleteMinPoolSize() { this->minPoolSize_ = nullptr;};
    inline int32_t minPoolSize() const { DARABONBA_PTR_GET_DEFAULT(minPoolSize_, 0) };
    inline DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& setMinPoolSize(int32_t minPoolSize) { DARABONBA_PTR_SET_VALUE(minPoolSize_, minPoolSize) };


    // preparedStatementCacheSize Field Functions 
    bool hasPreparedStatementCacheSize() const { return this->preparedStatementCacheSize_ != nullptr;};
    void deletePreparedStatementCacheSize() { this->preparedStatementCacheSize_ = nullptr;};
    inline int32_t preparedStatementCacheSize() const { DARABONBA_PTR_GET_DEFAULT(preparedStatementCacheSize_, 0) };
    inline DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& setPreparedStatementCacheSize(int32_t preparedStatementCacheSize) { DARABONBA_PTR_SET_VALUE(preparedStatementCacheSize_, preparedStatementCacheSize) };


    // shardingDbName Field Functions 
    bool hasShardingDbName() const { return this->shardingDbName_ != nullptr;};
    void deleteShardingDbName() { this->shardingDbName_ = nullptr;};
    inline string shardingDbName() const { DARABONBA_PTR_GET_DEFAULT(shardingDbName_, "") };
    inline DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& setShardingDbName(string shardingDbName) { DARABONBA_PTR_SET_VALUE(shardingDbName_, shardingDbName) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The timeout period for a transaction to wait for the release of the data lock.
    std::shared_ptr<int32_t> blockingTimeout_ = nullptr;
    // The URL that is used to access the Apsara RDS for MySQL instance.
    std::shared_ptr<string> connectUrl_ = nullptr;
    // The properties of the connection string.
    std::shared_ptr<string> connectionProperties_ = nullptr;
    // The ID of the Apsara RDS for MySQL instance that is used as the storage of the database shard.
    std::shared_ptr<string> dbInstanceId_ = nullptr;
    // The status of the database.
    std::shared_ptr<string> dbStatus_ = nullptr;
    // The engine of the database.
    std::shared_ptr<string> dbType_ = nullptr;
    // The name of group on which the database shard is stored.
    std::shared_ptr<string> groupName_ = nullptr;
    // The timeout period of an idle connection.
    std::shared_ptr<int32_t> idleTimeOut_ = nullptr;
    // The maximum size of the connection pool.
    std::shared_ptr<int32_t> maxPoolSize_ = nullptr;
    // The minimum size of the connection pool.
    std::shared_ptr<int32_t> minPoolSize_ = nullptr;
    // The size of cache for the returned results.
    std::shared_ptr<int32_t> preparedStatementCacheSize_ = nullptr;
    // The name of the database shard.
    std::shared_ptr<string> shardingDbName_ = nullptr;
    // The username that is used to connect to the ApsaraDB RDS for MySQL instance.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
