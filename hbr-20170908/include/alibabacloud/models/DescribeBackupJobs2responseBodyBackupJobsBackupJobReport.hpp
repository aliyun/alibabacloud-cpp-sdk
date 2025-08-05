// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2RESPONSEBODYBACKUPJOBSBACKUPJOBREPORT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2RESPONSEBODYBACKUPJOBSBACKUPJOBREPORT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport& obj) { 
      DARABONBA_PTR_TO_JSON(FailedFiles, failedFiles_);
      DARABONBA_PTR_TO_JSON(ReportTaskStatus, reportTaskStatus_);
      DARABONBA_PTR_TO_JSON(SkippedFiles, skippedFiles_);
      DARABONBA_PTR_TO_JSON(SuccessFiles, successFiles_);
      DARABONBA_PTR_TO_JSON(TotalFiles, totalFiles_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedFiles, failedFiles_);
      DARABONBA_PTR_FROM_JSON(ReportTaskStatus, reportTaskStatus_);
      DARABONBA_PTR_FROM_JSON(SkippedFiles, skippedFiles_);
      DARABONBA_PTR_FROM_JSON(SuccessFiles, successFiles_);
      DARABONBA_PTR_FROM_JSON(TotalFiles, totalFiles_);
    };
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport() = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport(const DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport &) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport(DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport &&) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport() = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport& operator=(const DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport &) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport& operator=(DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedFiles_ != nullptr
        && this->reportTaskStatus_ != nullptr && this->skippedFiles_ != nullptr && this->successFiles_ != nullptr && this->totalFiles_ != nullptr; };
    // failedFiles Field Functions 
    bool hasFailedFiles() const { return this->failedFiles_ != nullptr;};
    void deleteFailedFiles() { this->failedFiles_ = nullptr;};
    inline string failedFiles() const { DARABONBA_PTR_GET_DEFAULT(failedFiles_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport& setFailedFiles(string failedFiles) { DARABONBA_PTR_SET_VALUE(failedFiles_, failedFiles) };


    // reportTaskStatus Field Functions 
    bool hasReportTaskStatus() const { return this->reportTaskStatus_ != nullptr;};
    void deleteReportTaskStatus() { this->reportTaskStatus_ = nullptr;};
    inline string reportTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(reportTaskStatus_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport& setReportTaskStatus(string reportTaskStatus) { DARABONBA_PTR_SET_VALUE(reportTaskStatus_, reportTaskStatus) };


    // skippedFiles Field Functions 
    bool hasSkippedFiles() const { return this->skippedFiles_ != nullptr;};
    void deleteSkippedFiles() { this->skippedFiles_ = nullptr;};
    inline string skippedFiles() const { DARABONBA_PTR_GET_DEFAULT(skippedFiles_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport& setSkippedFiles(string skippedFiles) { DARABONBA_PTR_SET_VALUE(skippedFiles_, skippedFiles) };


    // successFiles Field Functions 
    bool hasSuccessFiles() const { return this->successFiles_ != nullptr;};
    void deleteSuccessFiles() { this->successFiles_ = nullptr;};
    inline string successFiles() const { DARABONBA_PTR_GET_DEFAULT(successFiles_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport& setSuccessFiles(string successFiles) { DARABONBA_PTR_SET_VALUE(successFiles_, successFiles) };


    // totalFiles Field Functions 
    bool hasTotalFiles() const { return this->totalFiles_ != nullptr;};
    void deleteTotalFiles() { this->totalFiles_ = nullptr;};
    inline string totalFiles() const { DARABONBA_PTR_GET_DEFAULT(totalFiles_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport& setTotalFiles(string totalFiles) { DARABONBA_PTR_SET_VALUE(totalFiles_, totalFiles) };


  protected:
    // List of failed files
    std::shared_ptr<string> failedFiles_ = nullptr;
    // Report generation status.
    std::shared_ptr<string> reportTaskStatus_ = nullptr;
    // List of skipped files
    std::shared_ptr<string> skippedFiles_ = nullptr;
    // List of successful files.
    std::shared_ptr<string> successFiles_ = nullptr;
    // List of all files. (This field is not returned for data synchronization)
    std::shared_ptr<string> totalFiles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
