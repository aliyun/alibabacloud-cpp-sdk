// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBS2RESPONSEBODYRESTOREJOBSRESTOREJOBREPORT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBS2RESPONSEBODYRESTOREJOBSRESTOREJOBREPORT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport& obj) { 
      DARABONBA_PTR_TO_JSON(FailedFiles, failedFiles_);
      DARABONBA_PTR_TO_JSON(ReportTaskStatus, reportTaskStatus_);
      DARABONBA_PTR_TO_JSON(SkippedFiles, skippedFiles_);
      DARABONBA_PTR_TO_JSON(SuccessFiles, successFiles_);
      DARABONBA_PTR_TO_JSON(TotalFiles, totalFiles_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedFiles, failedFiles_);
      DARABONBA_PTR_FROM_JSON(ReportTaskStatus, reportTaskStatus_);
      DARABONBA_PTR_FROM_JSON(SkippedFiles, skippedFiles_);
      DARABONBA_PTR_FROM_JSON(SuccessFiles, successFiles_);
      DARABONBA_PTR_FROM_JSON(TotalFiles, totalFiles_);
    };
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport() = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport(const DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport &) = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport(DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport &&) = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport() = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport& operator=(const DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport &) = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport& operator=(DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport &&) = default ;
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
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport& setFailedFiles(string failedFiles) { DARABONBA_PTR_SET_VALUE(failedFiles_, failedFiles) };


    // reportTaskStatus Field Functions 
    bool hasReportTaskStatus() const { return this->reportTaskStatus_ != nullptr;};
    void deleteReportTaskStatus() { this->reportTaskStatus_ = nullptr;};
    inline string reportTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(reportTaskStatus_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport& setReportTaskStatus(string reportTaskStatus) { DARABONBA_PTR_SET_VALUE(reportTaskStatus_, reportTaskStatus) };


    // skippedFiles Field Functions 
    bool hasSkippedFiles() const { return this->skippedFiles_ != nullptr;};
    void deleteSkippedFiles() { this->skippedFiles_ = nullptr;};
    inline string skippedFiles() const { DARABONBA_PTR_GET_DEFAULT(skippedFiles_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport& setSkippedFiles(string skippedFiles) { DARABONBA_PTR_SET_VALUE(skippedFiles_, skippedFiles) };


    // successFiles Field Functions 
    bool hasSuccessFiles() const { return this->successFiles_ != nullptr;};
    void deleteSuccessFiles() { this->successFiles_ = nullptr;};
    inline string successFiles() const { DARABONBA_PTR_GET_DEFAULT(successFiles_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport& setSuccessFiles(string successFiles) { DARABONBA_PTR_SET_VALUE(successFiles_, successFiles) };


    // totalFiles Field Functions 
    bool hasTotalFiles() const { return this->totalFiles_ != nullptr;};
    void deleteTotalFiles() { this->totalFiles_ = nullptr;};
    inline string totalFiles() const { DARABONBA_PTR_GET_DEFAULT(totalFiles_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport& setTotalFiles(string totalFiles) { DARABONBA_PTR_SET_VALUE(totalFiles_, totalFiles) };


  protected:
    // The files that failed to be executed.
    std::shared_ptr<string> failedFiles_ = nullptr;
    // The status of the report generation.
    std::shared_ptr<string> reportTaskStatus_ = nullptr;
    // The skipped files.
    std::shared_ptr<string> skippedFiles_ = nullptr;
    // The files that are successfully executed.
    std::shared_ptr<string> successFiles_ = nullptr;
    // The full files that are restored based on the file list.
    std::shared_ptr<string> totalFiles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
