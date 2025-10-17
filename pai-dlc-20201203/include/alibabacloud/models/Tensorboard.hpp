// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TENSORBOARD_HPP_
#define ALIBABACLOUD_MODELS_TENSORBOARD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
  class Tensorboard : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Tensorboard& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MaxRunningTimeMinutes, maxRunningTimeMinutes_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SummaryPath, summaryPath_);
      DARABONBA_PTR_TO_JSON(SummaryRelativePath, summaryRelativePath_);
      DARABONBA_PTR_TO_JSON(TensorboardDataSources, tensorboardDataSources_);
      DARABONBA_PTR_TO_JSON(TensorboardId, tensorboardId_);
      DARABONBA_PTR_TO_JSON(TensorboardSpec, tensorboardSpec_);
      DARABONBA_PTR_TO_JSON(TensorboardUrl, tensorboardUrl_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, Tensorboard& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MaxRunningTimeMinutes, maxRunningTimeMinutes_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SummaryPath, summaryPath_);
      DARABONBA_PTR_FROM_JSON(SummaryRelativePath, summaryRelativePath_);
      DARABONBA_PTR_FROM_JSON(TensorboardDataSources, tensorboardDataSources_);
      DARABONBA_PTR_FROM_JSON(TensorboardId, tensorboardId_);
      DARABONBA_PTR_FROM_JSON(TensorboardSpec, tensorboardSpec_);
      DARABONBA_PTR_FROM_JSON(TensorboardUrl, tensorboardUrl_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    Tensorboard() = default ;
    Tensorboard(const Tensorboard &) = default ;
    Tensorboard(Tensorboard &&) = default ;
    Tensorboard(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Tensorboard() = default ;
    Tensorboard& operator=(const Tensorboard &) = default ;
    Tensorboard& operator=(Tensorboard &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->cpu_ == nullptr && return this->dataSourceId_ == nullptr && return this->dataSourceType_ == nullptr && return this->displayName_ == nullptr && return this->duration_ == nullptr
        && return this->gmtCreateTime_ == nullptr && return this->gmtFinishTime_ == nullptr && return this->gmtModifyTime_ == nullptr && return this->jobId_ == nullptr && return this->maxRunningTimeMinutes_ == nullptr
        && return this->memory_ == nullptr && return this->options_ == nullptr && return this->priority_ == nullptr && return this->quotaId_ == nullptr && return this->quotaName_ == nullptr
        && return this->reasonCode_ == nullptr && return this->reasonMessage_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->summaryPath_ == nullptr
        && return this->summaryRelativePath_ == nullptr && return this->tensorboardDataSources_ == nullptr && return this->tensorboardId_ == nullptr && return this->tensorboardSpec_ == nullptr && return this->tensorboardUrl_ == nullptr
        && return this->token_ == nullptr && return this->userId_ == nullptr && return this->username_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline Tensorboard& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int64_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
    inline Tensorboard& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline Tensorboard& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline Tensorboard& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline Tensorboard& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline Tensorboard& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline Tensorboard& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtFinishTime Field Functions 
    bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
    void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
    inline string gmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
    inline Tensorboard& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


    // gmtModifyTime Field Functions 
    bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
    void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
    inline string gmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
    inline Tensorboard& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline Tensorboard& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // maxRunningTimeMinutes Field Functions 
    bool hasMaxRunningTimeMinutes() const { return this->maxRunningTimeMinutes_ != nullptr;};
    void deleteMaxRunningTimeMinutes() { this->maxRunningTimeMinutes_ = nullptr;};
    inline int64_t maxRunningTimeMinutes() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeMinutes_, 0L) };
    inline Tensorboard& setMaxRunningTimeMinutes(int64_t maxRunningTimeMinutes) { DARABONBA_PTR_SET_VALUE(maxRunningTimeMinutes_, maxRunningTimeMinutes) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline Tensorboard& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline Tensorboard& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline Tensorboard& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string quotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline Tensorboard& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string quotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline Tensorboard& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline Tensorboard& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string reasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline Tensorboard& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Tensorboard& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Tensorboard& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // summaryPath Field Functions 
    bool hasSummaryPath() const { return this->summaryPath_ != nullptr;};
    void deleteSummaryPath() { this->summaryPath_ = nullptr;};
    inline string summaryPath() const { DARABONBA_PTR_GET_DEFAULT(summaryPath_, "") };
    inline Tensorboard& setSummaryPath(string summaryPath) { DARABONBA_PTR_SET_VALUE(summaryPath_, summaryPath) };


    // summaryRelativePath Field Functions 
    bool hasSummaryRelativePath() const { return this->summaryRelativePath_ != nullptr;};
    void deleteSummaryRelativePath() { this->summaryRelativePath_ = nullptr;};
    inline string summaryRelativePath() const { DARABONBA_PTR_GET_DEFAULT(summaryRelativePath_, "") };
    inline Tensorboard& setSummaryRelativePath(string summaryRelativePath) { DARABONBA_PTR_SET_VALUE(summaryRelativePath_, summaryRelativePath) };


    // tensorboardDataSources Field Functions 
    bool hasTensorboardDataSources() const { return this->tensorboardDataSources_ != nullptr;};
    void deleteTensorboardDataSources() { this->tensorboardDataSources_ = nullptr;};
    inline const vector<TensorboardDataSourceSpec> & tensorboardDataSources() const { DARABONBA_PTR_GET_CONST(tensorboardDataSources_, vector<TensorboardDataSourceSpec>) };
    inline vector<TensorboardDataSourceSpec> tensorboardDataSources() { DARABONBA_PTR_GET(tensorboardDataSources_, vector<TensorboardDataSourceSpec>) };
    inline Tensorboard& setTensorboardDataSources(const vector<TensorboardDataSourceSpec> & tensorboardDataSources) { DARABONBA_PTR_SET_VALUE(tensorboardDataSources_, tensorboardDataSources) };
    inline Tensorboard& setTensorboardDataSources(vector<TensorboardDataSourceSpec> && tensorboardDataSources) { DARABONBA_PTR_SET_RVALUE(tensorboardDataSources_, tensorboardDataSources) };


    // tensorboardId Field Functions 
    bool hasTensorboardId() const { return this->tensorboardId_ != nullptr;};
    void deleteTensorboardId() { this->tensorboardId_ = nullptr;};
    inline string tensorboardId() const { DARABONBA_PTR_GET_DEFAULT(tensorboardId_, "") };
    inline Tensorboard& setTensorboardId(string tensorboardId) { DARABONBA_PTR_SET_VALUE(tensorboardId_, tensorboardId) };


    // tensorboardSpec Field Functions 
    bool hasTensorboardSpec() const { return this->tensorboardSpec_ != nullptr;};
    void deleteTensorboardSpec() { this->tensorboardSpec_ = nullptr;};
    inline const TensorboardSpec & tensorboardSpec() const { DARABONBA_PTR_GET_CONST(tensorboardSpec_, TensorboardSpec) };
    inline TensorboardSpec tensorboardSpec() { DARABONBA_PTR_GET(tensorboardSpec_, TensorboardSpec) };
    inline Tensorboard& setTensorboardSpec(const TensorboardSpec & tensorboardSpec) { DARABONBA_PTR_SET_VALUE(tensorboardSpec_, tensorboardSpec) };
    inline Tensorboard& setTensorboardSpec(TensorboardSpec && tensorboardSpec) { DARABONBA_PTR_SET_RVALUE(tensorboardSpec_, tensorboardSpec) };


    // tensorboardUrl Field Functions 
    bool hasTensorboardUrl() const { return this->tensorboardUrl_ != nullptr;};
    void deleteTensorboardUrl() { this->tensorboardUrl_ = nullptr;};
    inline string tensorboardUrl() const { DARABONBA_PTR_GET_DEFAULT(tensorboardUrl_, "") };
    inline Tensorboard& setTensorboardUrl(string tensorboardUrl) { DARABONBA_PTR_SET_VALUE(tensorboardUrl_, tensorboardUrl) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline Tensorboard& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline Tensorboard& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline Tensorboard& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline Tensorboard& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    std::shared_ptr<int64_t> cpu_ = nullptr;
    std::shared_ptr<string> dataSourceId_ = nullptr;
    std::shared_ptr<string> dataSourceType_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtFinishTime_ = nullptr;
    std::shared_ptr<string> gmtModifyTime_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int64_t> maxRunningTimeMinutes_ = nullptr;
    std::shared_ptr<int64_t> memory_ = nullptr;
    std::shared_ptr<string> options_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    std::shared_ptr<string> quotaId_ = nullptr;
    std::shared_ptr<string> quotaName_ = nullptr;
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<string> reasonMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> summaryPath_ = nullptr;
    std::shared_ptr<string> summaryRelativePath_ = nullptr;
    std::shared_ptr<vector<TensorboardDataSourceSpec>> tensorboardDataSources_ = nullptr;
    std::shared_ptr<string> tensorboardId_ = nullptr;
    std::shared_ptr<TensorboardSpec> tensorboardSpec_ = nullptr;
    std::shared_ptr<string> tensorboardUrl_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
