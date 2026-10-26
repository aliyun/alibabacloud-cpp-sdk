// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPLOGDOWNLOADLINKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPLOGDOWNLOADLINKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBackupLogDownloadLinksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupLogDownloadLinksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupLogIds, backupLogIds_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ExpireHours, expireHours_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupLogDownloadLinksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupLogIds, backupLogIds_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ExpireHours, expireHours_);
    };
    DescribeBackupLogDownloadLinksRequest() = default ;
    DescribeBackupLogDownloadLinksRequest(const DescribeBackupLogDownloadLinksRequest &) = default ;
    DescribeBackupLogDownloadLinksRequest(DescribeBackupLogDownloadLinksRequest &&) = default ;
    DescribeBackupLogDownloadLinksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupLogDownloadLinksRequest() = default ;
    DescribeBackupLogDownloadLinksRequest& operator=(const DescribeBackupLogDownloadLinksRequest &) = default ;
    DescribeBackupLogDownloadLinksRequest& operator=(DescribeBackupLogDownloadLinksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupLogIds_ == nullptr
        && this->DBClusterId_ == nullptr && this->expireHours_ == nullptr; };
    // backupLogIds Field Functions 
    bool hasBackupLogIds() const { return this->backupLogIds_ != nullptr;};
    void deleteBackupLogIds() { this->backupLogIds_ = nullptr;};
    inline string getBackupLogIds() const { DARABONBA_PTR_GET_DEFAULT(backupLogIds_, "") };
    inline DescribeBackupLogDownloadLinksRequest& setBackupLogIds(string backupLogIds) { DARABONBA_PTR_SET_VALUE(backupLogIds_, backupLogIds) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeBackupLogDownloadLinksRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // expireHours Field Functions 
    bool hasExpireHours() const { return this->expireHours_ != nullptr;};
    void deleteExpireHours() { this->expireHours_ = nullptr;};
    inline int32_t getExpireHours() const { DARABONBA_PTR_GET_DEFAULT(expireHours_, 0) };
    inline DescribeBackupLogDownloadLinksRequest& setExpireHours(int32_t expireHours) { DARABONBA_PTR_SET_VALUE(expireHours_, expireHours) };


  protected:
    // The IDs of the redo log backups.
    shared_ptr<string> backupLogIds_ {};
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The validity period of the download links in hours. Valid values: 1 to 596523.
    shared_ptr<int32_t> expireHours_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
