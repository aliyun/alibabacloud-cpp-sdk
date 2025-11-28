// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListBackupJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    ListBackupJobsRequest() = default ;
    ListBackupJobsRequest(const ListBackupJobsRequest &) = default ;
    ListBackupJobsRequest(ListBackupJobsRequest &&) = default ;
    ListBackupJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupJobsRequest() = default ;
    ListBackupJobsRequest& operator=(const ListBackupJobsRequest &) = default ;
    ListBackupJobsRequest& operator=(ListBackupJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupMode_ == nullptr
        && return this->DBInstanceId_ == nullptr; };
    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline ListBackupJobsRequest& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ListBackupJobsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    // The backup mode. Valid values:
    // 
    // *   Automated
    // *   Manual
    // 
    // If you do not specify this parameter, all backup sets are returned.
    std::shared_ptr<string> backupMode_ = nullptr;
    // The instance ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
