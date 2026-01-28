// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ExportJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ExportJobType, exportJobType_);
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
    };
    friend void from_json(const Darabonba::Json& j, ExportJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ExportJobType, exportJobType_);
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
    };
    ExportJobsRequest() = default ;
    ExportJobsRequest(const ExportJobsRequest &) = default ;
    ExportJobsRequest(ExportJobsRequest &&) = default ;
    ExportJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportJobsRequest() = default ;
    ExportJobsRequest& operator=(const ExportJobsRequest &) = default ;
    ExportJobsRequest& operator=(ExportJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->clusterId_ == nullptr && this->exportJobType_ == nullptr && this->jobIds_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ExportJobsRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ExportJobsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // exportJobType Field Functions 
    bool hasExportJobType() const { return this->exportJobType_ != nullptr;};
    void deleteExportJobType() { this->exportJobType_ = nullptr;};
    inline int32_t getExportJobType() const { DARABONBA_PTR_GET_DEFAULT(exportJobType_, 0) };
    inline ExportJobsRequest& setExportJobType(int32_t exportJobType) { DARABONBA_PTR_SET_VALUE(exportJobType_, exportJobType) };


    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline const vector<int64_t> & getJobIds() const { DARABONBA_PTR_GET_CONST(jobIds_, vector<int64_t>) };
    inline vector<int64_t> getJobIds() { DARABONBA_PTR_GET(jobIds_, vector<int64_t>) };
    inline ExportJobsRequest& setJobIds(const vector<int64_t> & jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };
    inline ExportJobsRequest& setJobIds(vector<int64_t> && jobIds) { DARABONBA_PTR_SET_RVALUE(jobIds_, jobIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    shared_ptr<int32_t> exportJobType_ {};
    // -
    shared_ptr<vector<int64_t>> jobIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
