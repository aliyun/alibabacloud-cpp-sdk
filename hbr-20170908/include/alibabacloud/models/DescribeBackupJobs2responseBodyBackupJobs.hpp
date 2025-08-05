// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2RESPONSEBODYBACKUPJOBS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2RESPONSEBODYBACKUPJOBS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupJobs2ResponseBodyBackupJobsBackupJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupJobs2ResponseBodyBackupJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupJobs2ResponseBodyBackupJobs& obj) { 
      DARABONBA_PTR_TO_JSON(BackupJob, backupJob_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupJobs2ResponseBodyBackupJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupJob, backupJob_);
    };
    DescribeBackupJobs2ResponseBodyBackupJobs() = default ;
    DescribeBackupJobs2ResponseBodyBackupJobs(const DescribeBackupJobs2ResponseBodyBackupJobs &) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobs(DescribeBackupJobs2ResponseBodyBackupJobs &&) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupJobs2ResponseBodyBackupJobs() = default ;
    DescribeBackupJobs2ResponseBodyBackupJobs& operator=(const DescribeBackupJobs2ResponseBodyBackupJobs &) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobs& operator=(DescribeBackupJobs2ResponseBodyBackupJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupJob_ != nullptr; };
    // backupJob Field Functions 
    bool hasBackupJob() const { return this->backupJob_ != nullptr;};
    void deleteBackupJob() { this->backupJob_ = nullptr;};
    inline const vector<Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJob> & backupJob() const { DARABONBA_PTR_GET_CONST(backupJob_, vector<Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJob>) };
    inline vector<Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJob> backupJob() { DARABONBA_PTR_GET(backupJob_, vector<Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJob>) };
    inline DescribeBackupJobs2ResponseBodyBackupJobs& setBackupJob(const vector<Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJob> & backupJob) { DARABONBA_PTR_SET_VALUE(backupJob_, backupJob) };
    inline DescribeBackupJobs2ResponseBodyBackupJobs& setBackupJob(vector<Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJob> && backupJob) { DARABONBA_PTR_SET_RVALUE(backupJob_, backupJob) };


  protected:
    std::shared_ptr<vector<Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJob>> backupJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
