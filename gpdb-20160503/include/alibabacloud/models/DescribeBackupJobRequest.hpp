// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeBackupJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupJobId, backupJobId_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupJobId, backupJobId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    DescribeBackupJobRequest() = default ;
    DescribeBackupJobRequest(const DescribeBackupJobRequest &) = default ;
    DescribeBackupJobRequest(DescribeBackupJobRequest &&) = default ;
    DescribeBackupJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupJobRequest() = default ;
    DescribeBackupJobRequest& operator=(const DescribeBackupJobRequest &) = default ;
    DescribeBackupJobRequest& operator=(DescribeBackupJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupJobId_ == nullptr
        && return this->DBInstanceId_ == nullptr; };
    // backupJobId Field Functions 
    bool hasBackupJobId() const { return this->backupJobId_ != nullptr;};
    void deleteBackupJobId() { this->backupJobId_ = nullptr;};
    inline int64_t backupJobId() const { DARABONBA_PTR_GET_DEFAULT(backupJobId_, 0L) };
    inline DescribeBackupJobRequest& setBackupJobId(int64_t backupJobId) { DARABONBA_PTR_SET_VALUE(backupJobId_, backupJobId) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeBackupJobRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    // The backup job ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> backupJobId_ = nullptr;
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
