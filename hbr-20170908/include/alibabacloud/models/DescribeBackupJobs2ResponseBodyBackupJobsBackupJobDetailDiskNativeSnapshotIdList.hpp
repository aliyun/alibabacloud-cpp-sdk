// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2RESPONSEBODYBACKUPJOBSBACKUPJOBDETAILDISKNATIVESNAPSHOTIDLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2RESPONSEBODYBACKUPJOBSBACKUPJOBDETAILDISKNATIVESNAPSHOTIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList& obj) { 
      DARABONBA_PTR_TO_JSON(DiskNativeSnapshotId, diskNativeSnapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskNativeSnapshotId, diskNativeSnapshotId_);
    };
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList() = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList(const DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList &) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList(DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList &&) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList() = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList& operator=(const DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList &) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList& operator=(DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskNativeSnapshotId_ == nullptr; };
    // diskNativeSnapshotId Field Functions 
    bool hasDiskNativeSnapshotId() const { return this->diskNativeSnapshotId_ != nullptr;};
    void deleteDiskNativeSnapshotId() { this->diskNativeSnapshotId_ = nullptr;};
    inline const vector<string> & diskNativeSnapshotId() const { DARABONBA_PTR_GET_CONST(diskNativeSnapshotId_, vector<string>) };
    inline vector<string> diskNativeSnapshotId() { DARABONBA_PTR_GET(diskNativeSnapshotId_, vector<string>) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList& setDiskNativeSnapshotId(const vector<string> & diskNativeSnapshotId) { DARABONBA_PTR_SET_VALUE(diskNativeSnapshotId_, diskNativeSnapshotId) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList& setDiskNativeSnapshotId(vector<string> && diskNativeSnapshotId) { DARABONBA_PTR_SET_RVALUE(diskNativeSnapshotId_, diskNativeSnapshotId) };


  protected:
    std::shared_ptr<vector<string>> diskNativeSnapshotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
