// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADSEMANTICRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADSEMANTICRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DownloadSemanticResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadSemanticResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobRunId, jobRunId_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadSemanticResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobRunId, jobRunId_);
    };
    DownloadSemanticResultsRequest() = default ;
    DownloadSemanticResultsRequest(const DownloadSemanticResultsRequest &) = default ;
    DownloadSemanticResultsRequest(DownloadSemanticResultsRequest &&) = default ;
    DownloadSemanticResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadSemanticResultsRequest() = default ;
    DownloadSemanticResultsRequest& operator=(const DownloadSemanticResultsRequest &) = default ;
    DownloadSemanticResultsRequest& operator=(DownloadSemanticResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobName_ == nullptr
        && this->jobRunId_ == nullptr; };
    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline DownloadSemanticResultsRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobRunId Field Functions 
    bool hasJobRunId() const { return this->jobRunId_ != nullptr;};
    void deleteJobRunId() { this->jobRunId_ = nullptr;};
    inline string getJobRunId() const { DARABONBA_PTR_GET_DEFAULT(jobRunId_, "") };
    inline DownloadSemanticResultsRequest& setJobRunId(string jobRunId) { DARABONBA_PTR_SET_VALUE(jobRunId_, jobRunId) };


  protected:
    // The node name. Use the Data.Name value from the CreateSemanticJob response, the Name value from a ListSemanticJobs list item, or the JobName value from a ListSemanticJobRuns record.
    // 
    // This parameter is required.
    shared_ptr<string> jobName_ {};
    // The optional run ID. If you specify the Data.JobRunId value from the RunSemanticJob response or the JobRunId value from a ListSemanticJobRuns record, only the artifacts of that specific run are returned. If you do not specify this parameter, the artifacts of the latest run of the node are returned.
    shared_ptr<string> jobRunId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
