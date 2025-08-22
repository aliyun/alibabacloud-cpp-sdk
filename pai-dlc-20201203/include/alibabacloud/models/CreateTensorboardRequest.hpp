// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETENSORBOARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETENSORBOARDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataSourceItem.hpp>
#include <alibabacloud/models/TensorboardDataSourceSpec.hpp>
#include <alibabacloud/models/TensorboardSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class CreateTensorboardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTensorboardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MaxRunningTimeMinutes, maxRunningTimeMinutes_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SummaryPath, summaryPath_);
      DARABONBA_PTR_TO_JSON(SummaryRelativePath, summaryRelativePath_);
      DARABONBA_PTR_TO_JSON(TensorboardDataSources, tensorboardDataSources_);
      DARABONBA_PTR_TO_JSON(TensorboardSpec, tensorboardSpec_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTensorboardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MaxRunningTimeMinutes, maxRunningTimeMinutes_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SummaryPath, summaryPath_);
      DARABONBA_PTR_FROM_JSON(SummaryRelativePath, summaryRelativePath_);
      DARABONBA_PTR_FROM_JSON(TensorboardDataSources, tensorboardDataSources_);
      DARABONBA_PTR_FROM_JSON(TensorboardSpec, tensorboardSpec_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateTensorboardRequest() = default ;
    CreateTensorboardRequest(const CreateTensorboardRequest &) = default ;
    CreateTensorboardRequest(CreateTensorboardRequest &&) = default ;
    CreateTensorboardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTensorboardRequest() = default ;
    CreateTensorboardRequest& operator=(const CreateTensorboardRequest &) = default ;
    CreateTensorboardRequest& operator=(CreateTensorboardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessibility_ != nullptr
        && this->cpu_ != nullptr && this->dataSourceId_ != nullptr && this->dataSourceType_ != nullptr && this->dataSources_ != nullptr && this->displayName_ != nullptr
        && this->jobId_ != nullptr && this->maxRunningTimeMinutes_ != nullptr && this->memory_ != nullptr && this->options_ != nullptr && this->priority_ != nullptr
        && this->quotaId_ != nullptr && this->sourceId_ != nullptr && this->sourceType_ != nullptr && this->summaryPath_ != nullptr && this->summaryRelativePath_ != nullptr
        && this->tensorboardDataSources_ != nullptr && this->tensorboardSpec_ != nullptr && this->uri_ != nullptr && this->workspaceId_ != nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateTensorboardRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int64_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
    inline CreateTensorboardRequest& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline CreateTensorboardRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline CreateTensorboardRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<DataSourceItem> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<DataSourceItem>) };
    inline vector<DataSourceItem> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<DataSourceItem>) };
    inline CreateTensorboardRequest& setDataSources(const vector<DataSourceItem> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline CreateTensorboardRequest& setDataSources(vector<DataSourceItem> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateTensorboardRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline CreateTensorboardRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // maxRunningTimeMinutes Field Functions 
    bool hasMaxRunningTimeMinutes() const { return this->maxRunningTimeMinutes_ != nullptr;};
    void deleteMaxRunningTimeMinutes() { this->maxRunningTimeMinutes_ = nullptr;};
    inline int64_t maxRunningTimeMinutes() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeMinutes_, 0L) };
    inline CreateTensorboardRequest& setMaxRunningTimeMinutes(int64_t maxRunningTimeMinutes) { DARABONBA_PTR_SET_VALUE(maxRunningTimeMinutes_, maxRunningTimeMinutes) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline CreateTensorboardRequest& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateTensorboardRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateTensorboardRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string quotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline CreateTensorboardRequest& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateTensorboardRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateTensorboardRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // summaryPath Field Functions 
    bool hasSummaryPath() const { return this->summaryPath_ != nullptr;};
    void deleteSummaryPath() { this->summaryPath_ = nullptr;};
    inline string summaryPath() const { DARABONBA_PTR_GET_DEFAULT(summaryPath_, "") };
    inline CreateTensorboardRequest& setSummaryPath(string summaryPath) { DARABONBA_PTR_SET_VALUE(summaryPath_, summaryPath) };


    // summaryRelativePath Field Functions 
    bool hasSummaryRelativePath() const { return this->summaryRelativePath_ != nullptr;};
    void deleteSummaryRelativePath() { this->summaryRelativePath_ = nullptr;};
    inline string summaryRelativePath() const { DARABONBA_PTR_GET_DEFAULT(summaryRelativePath_, "") };
    inline CreateTensorboardRequest& setSummaryRelativePath(string summaryRelativePath) { DARABONBA_PTR_SET_VALUE(summaryRelativePath_, summaryRelativePath) };


    // tensorboardDataSources Field Functions 
    bool hasTensorboardDataSources() const { return this->tensorboardDataSources_ != nullptr;};
    void deleteTensorboardDataSources() { this->tensorboardDataSources_ = nullptr;};
    inline const vector<TensorboardDataSourceSpec> & tensorboardDataSources() const { DARABONBA_PTR_GET_CONST(tensorboardDataSources_, vector<TensorboardDataSourceSpec>) };
    inline vector<TensorboardDataSourceSpec> tensorboardDataSources() { DARABONBA_PTR_GET(tensorboardDataSources_, vector<TensorboardDataSourceSpec>) };
    inline CreateTensorboardRequest& setTensorboardDataSources(const vector<TensorboardDataSourceSpec> & tensorboardDataSources) { DARABONBA_PTR_SET_VALUE(tensorboardDataSources_, tensorboardDataSources) };
    inline CreateTensorboardRequest& setTensorboardDataSources(vector<TensorboardDataSourceSpec> && tensorboardDataSources) { DARABONBA_PTR_SET_RVALUE(tensorboardDataSources_, tensorboardDataSources) };


    // tensorboardSpec Field Functions 
    bool hasTensorboardSpec() const { return this->tensorboardSpec_ != nullptr;};
    void deleteTensorboardSpec() { this->tensorboardSpec_ = nullptr;};
    inline const TensorboardSpec & tensorboardSpec() const { DARABONBA_PTR_GET_CONST(tensorboardSpec_, TensorboardSpec) };
    inline TensorboardSpec tensorboardSpec() { DARABONBA_PTR_GET(tensorboardSpec_, TensorboardSpec) };
    inline CreateTensorboardRequest& setTensorboardSpec(const TensorboardSpec & tensorboardSpec) { DARABONBA_PTR_SET_VALUE(tensorboardSpec_, tensorboardSpec) };
    inline CreateTensorboardRequest& setTensorboardSpec(TensorboardSpec && tensorboardSpec) { DARABONBA_PTR_SET_RVALUE(tensorboardSpec_, tensorboardSpec) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline CreateTensorboardRequest& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateTensorboardRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The job visibility. Valid values:
    // 
    // *   PUBLIC: Visible to all members in the workspace.
    // *   PRIVATE: Visible only to you and the administrator of the workspace.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The number of vCPU cores.
    std::shared_ptr<int64_t> cpu_ = nullptr;
    // The dataset ID.
    std::shared_ptr<string> dataSourceId_ = nullptr;
    // The dataset type. Valid values:
    // 
    // *   OSS
    // *   NAS
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // The configurations of the data source.
    std::shared_ptr<vector<DataSourceItem>> dataSources_ = nullptr;
    // The TensorBoard name
    std::shared_ptr<string> displayName_ = nullptr;
    // The job ID. For more information about how to query the job ID, see [ListJobs](https://help.aliyun.com/document_detail/459676.html).
    std::shared_ptr<string> jobId_ = nullptr;
    // The maximum running duration. Unit: minutes.
    std::shared_ptr<int64_t> maxRunningTimeMinutes_ = nullptr;
    // The memory size. Unit: GB.
    std::shared_ptr<int64_t> memory_ = nullptr;
    // The extended fields of the dataset are in the JSON format. MountPath: the path to mount the dataset.
    std::shared_ptr<string> options_ = nullptr;
    // The priority of the job. Default value: 1. Valid values: 1 to 9.
    // 
    // *   1 is the lowest priority.
    // *   9 is the highest priority.
    std::shared_ptr<string> priority_ = nullptr;
    // The resource quota ID. This parameter is required when you create a TensorBoard job by using a resource quota.
    // 
    // This feature is currently limited to whitelisted users. If you need to use this feature, contact us.
    std::shared_ptr<string> quotaId_ = nullptr;
    // The source ID.
    std::shared_ptr<string> sourceId_ = nullptr;
    // The source type.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The directory of summary.
    std::shared_ptr<string> summaryPath_ = nullptr;
    // The relative path of summary.
    std::shared_ptr<string> summaryRelativePath_ = nullptr;
    // The configurations of datasets mounted with the TensorBoard job.
    std::shared_ptr<vector<TensorboardDataSourceSpec>> tensorboardDataSources_ = nullptr;
    // The pay-as-you-go configuration of TensorBoard, which is used to create TensorBoard jobs that use pay-as-you-go resources.
    std::shared_ptr<TensorboardSpec> tensorboardSpec_ = nullptr;
    // The dataset URI:
    // 
    // *   Value format when DataSourceType is set to OSS: `oss://[oss-bucket].[endpoint]/[path]`.
    // *   Value format when DataSourceType is set to NAS:`nas://[nas-filesystem-id].[region]/[path]`.
    std::shared_ptr<string> uri_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
