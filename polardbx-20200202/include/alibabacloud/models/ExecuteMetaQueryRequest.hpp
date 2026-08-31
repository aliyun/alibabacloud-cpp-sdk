// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEMETAQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEMETAQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ExecuteMetaQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteMetaQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(MaxResultRows, maxResultRows_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
      DARABONBA_PTR_TO_JSON(StorageInstId, storageInstId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteMetaQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(MaxResultRows, maxResultRows_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
      DARABONBA_PTR_FROM_JSON(StorageInstId, storageInstId_);
    };
    ExecuteMetaQueryRequest() = default ;
    ExecuteMetaQueryRequest(const ExecuteMetaQueryRequest &) = default ;
    ExecuteMetaQueryRequest(ExecuteMetaQueryRequest &&) = default ;
    ExecuteMetaQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteMetaQueryRequest() = default ;
    ExecuteMetaQueryRequest& operator=(const ExecuteMetaQueryRequest &) = default ;
    ExecuteMetaQueryRequest& operator=(ExecuteMetaQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->maxResultRows_ == nullptr && this->regionId_ == nullptr && this->sql_ == nullptr && this->storageInstId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ExecuteMetaQueryRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // maxResultRows Field Functions 
    bool hasMaxResultRows() const { return this->maxResultRows_ != nullptr;};
    void deleteMaxResultRows() { this->maxResultRows_ = nullptr;};
    inline int64_t getMaxResultRows() const { DARABONBA_PTR_GET_DEFAULT(maxResultRows_, 0L) };
    inline ExecuteMetaQueryRequest& setMaxResultRows(int64_t maxResultRows) { DARABONBA_PTR_SET_VALUE(maxResultRows_, maxResultRows) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExecuteMetaQueryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline ExecuteMetaQueryRequest& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // storageInstId Field Functions 
    bool hasStorageInstId() const { return this->storageInstId_ != nullptr;};
    void deleteStorageInstId() { this->storageInstId_ = nullptr;};
    inline string getStorageInstId() const { DARABONBA_PTR_GET_DEFAULT(storageInstId_, "") };
    inline ExecuteMetaQueryRequest& setStorageInstId(string storageInstId) { DARABONBA_PTR_SET_VALUE(storageInstId_, storageInstId) };


  protected:
    // The primary instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The maximum number of rows to return. Default value: 100. Valid values: 1 to 1000. The actual number of returned rows is the minimum value among the code hard limit, the Biz DB limit, and the outermost LIMIT clause in the SQL statement. To retrieve data continuously, implement pagination in the SQL statement.
    shared_ptr<int64_t> maxResultRows_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The SQL statement to execute.
    // 
    // This parameter is required.
    shared_ptr<string> sql_ {};
    // The data node (DN) instance ID.
    shared_ptr<string> storageInstId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
