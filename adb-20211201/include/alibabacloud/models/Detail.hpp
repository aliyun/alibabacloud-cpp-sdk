// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETAIL_HPP_
#define ALIBABACLOUD_MODELS_DETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class Detail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Detail& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DurationInMillis, durationInMillis_);
      DARABONBA_PTR_TO_JSON(EstimateExecutionCpuTimeInSeconds, estimateExecutionCpuTimeInSeconds_);
      DARABONBA_PTR_TO_JSON(ExecutionDurationInMillis, executionDurationInMillis_);
      DARABONBA_PTR_TO_JSON(LastAttemptId, lastAttemptId_);
      DARABONBA_PTR_TO_JSON(LastUpdatedTimeInMillis, lastUpdatedTimeInMillis_);
      DARABONBA_PTR_TO_JSON(LogRootPath, logRootPath_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(ResourceProvisioningDurationInMillis, resourceProvisioningDurationInMillis_);
      DARABONBA_PTR_TO_JSON(RunningStartTimeInMillis, runningStartTimeInMillis_);
      DARABONBA_PTR_TO_JSON(StartedTimeInMillis, startedTimeInMillis_);
      DARABONBA_PTR_TO_JSON(SubmittedTimeInMillis, submittedTimeInMillis_);
      DARABONBA_PTR_TO_JSON(TerminatedTimeInMillis, terminatedTimeInMillis_);
      DARABONBA_PTR_TO_JSON(WebUiAddress, webUiAddress_);
    };
    friend void from_json(const Darabonba::Json& j, Detail& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DurationInMillis, durationInMillis_);
      DARABONBA_PTR_FROM_JSON(EstimateExecutionCpuTimeInSeconds, estimateExecutionCpuTimeInSeconds_);
      DARABONBA_PTR_FROM_JSON(ExecutionDurationInMillis, executionDurationInMillis_);
      DARABONBA_PTR_FROM_JSON(LastAttemptId, lastAttemptId_);
      DARABONBA_PTR_FROM_JSON(LastUpdatedTimeInMillis, lastUpdatedTimeInMillis_);
      DARABONBA_PTR_FROM_JSON(LogRootPath, logRootPath_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(ResourceProvisioningDurationInMillis, resourceProvisioningDurationInMillis_);
      DARABONBA_PTR_FROM_JSON(RunningStartTimeInMillis, runningStartTimeInMillis_);
      DARABONBA_PTR_FROM_JSON(StartedTimeInMillis, startedTimeInMillis_);
      DARABONBA_PTR_FROM_JSON(SubmittedTimeInMillis, submittedTimeInMillis_);
      DARABONBA_PTR_FROM_JSON(TerminatedTimeInMillis, terminatedTimeInMillis_);
      DARABONBA_PTR_FROM_JSON(WebUiAddress, webUiAddress_);
    };
    Detail() = default ;
    Detail(const Detail &) = default ;
    Detail(Detail &&) = default ;
    Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Detail() = default ;
    Detail& operator=(const Detail &) = default ;
    Detail& operator=(Detail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->DBClusterId_ != nullptr && this->data_ != nullptr && this->durationInMillis_ != nullptr && this->estimateExecutionCpuTimeInSeconds_ != nullptr && this->executionDurationInMillis_ != nullptr
        && this->lastAttemptId_ != nullptr && this->lastUpdatedTimeInMillis_ != nullptr && this->logRootPath_ != nullptr && this->resourceGroupName_ != nullptr && this->resourceProvisioningDurationInMillis_ != nullptr
        && this->runningStartTimeInMillis_ != nullptr && this->startedTimeInMillis_ != nullptr && this->submittedTimeInMillis_ != nullptr && this->terminatedTimeInMillis_ != nullptr && this->webUiAddress_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline Detail& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline Detail& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline Detail& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // durationInMillis Field Functions 
    bool hasDurationInMillis() const { return this->durationInMillis_ != nullptr;};
    void deleteDurationInMillis() { this->durationInMillis_ = nullptr;};
    inline int64_t durationInMillis() const { DARABONBA_PTR_GET_DEFAULT(durationInMillis_, 0L) };
    inline Detail& setDurationInMillis(int64_t durationInMillis) { DARABONBA_PTR_SET_VALUE(durationInMillis_, durationInMillis) };


    // estimateExecutionCpuTimeInSeconds Field Functions 
    bool hasEstimateExecutionCpuTimeInSeconds() const { return this->estimateExecutionCpuTimeInSeconds_ != nullptr;};
    void deleteEstimateExecutionCpuTimeInSeconds() { this->estimateExecutionCpuTimeInSeconds_ = nullptr;};
    inline int64_t estimateExecutionCpuTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(estimateExecutionCpuTimeInSeconds_, 0L) };
    inline Detail& setEstimateExecutionCpuTimeInSeconds(int64_t estimateExecutionCpuTimeInSeconds) { DARABONBA_PTR_SET_VALUE(estimateExecutionCpuTimeInSeconds_, estimateExecutionCpuTimeInSeconds) };


    // executionDurationInMillis Field Functions 
    bool hasExecutionDurationInMillis() const { return this->executionDurationInMillis_ != nullptr;};
    void deleteExecutionDurationInMillis() { this->executionDurationInMillis_ = nullptr;};
    inline int64_t executionDurationInMillis() const { DARABONBA_PTR_GET_DEFAULT(executionDurationInMillis_, 0L) };
    inline Detail& setExecutionDurationInMillis(int64_t executionDurationInMillis) { DARABONBA_PTR_SET_VALUE(executionDurationInMillis_, executionDurationInMillis) };


    // lastAttemptId Field Functions 
    bool hasLastAttemptId() const { return this->lastAttemptId_ != nullptr;};
    void deleteLastAttemptId() { this->lastAttemptId_ = nullptr;};
    inline string lastAttemptId() const { DARABONBA_PTR_GET_DEFAULT(lastAttemptId_, "") };
    inline Detail& setLastAttemptId(string lastAttemptId) { DARABONBA_PTR_SET_VALUE(lastAttemptId_, lastAttemptId) };


    // lastUpdatedTimeInMillis Field Functions 
    bool hasLastUpdatedTimeInMillis() const { return this->lastUpdatedTimeInMillis_ != nullptr;};
    void deleteLastUpdatedTimeInMillis() { this->lastUpdatedTimeInMillis_ = nullptr;};
    inline int64_t lastUpdatedTimeInMillis() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedTimeInMillis_, 0L) };
    inline Detail& setLastUpdatedTimeInMillis(int64_t lastUpdatedTimeInMillis) { DARABONBA_PTR_SET_VALUE(lastUpdatedTimeInMillis_, lastUpdatedTimeInMillis) };


    // logRootPath Field Functions 
    bool hasLogRootPath() const { return this->logRootPath_ != nullptr;};
    void deleteLogRootPath() { this->logRootPath_ = nullptr;};
    inline string logRootPath() const { DARABONBA_PTR_GET_DEFAULT(logRootPath_, "") };
    inline Detail& setLogRootPath(string logRootPath) { DARABONBA_PTR_SET_VALUE(logRootPath_, logRootPath) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline Detail& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // resourceProvisioningDurationInMillis Field Functions 
    bool hasResourceProvisioningDurationInMillis() const { return this->resourceProvisioningDurationInMillis_ != nullptr;};
    void deleteResourceProvisioningDurationInMillis() { this->resourceProvisioningDurationInMillis_ = nullptr;};
    inline int64_t resourceProvisioningDurationInMillis() const { DARABONBA_PTR_GET_DEFAULT(resourceProvisioningDurationInMillis_, 0L) };
    inline Detail& setResourceProvisioningDurationInMillis(int64_t resourceProvisioningDurationInMillis) { DARABONBA_PTR_SET_VALUE(resourceProvisioningDurationInMillis_, resourceProvisioningDurationInMillis) };


    // runningStartTimeInMillis Field Functions 
    bool hasRunningStartTimeInMillis() const { return this->runningStartTimeInMillis_ != nullptr;};
    void deleteRunningStartTimeInMillis() { this->runningStartTimeInMillis_ = nullptr;};
    inline int64_t runningStartTimeInMillis() const { DARABONBA_PTR_GET_DEFAULT(runningStartTimeInMillis_, 0L) };
    inline Detail& setRunningStartTimeInMillis(int64_t runningStartTimeInMillis) { DARABONBA_PTR_SET_VALUE(runningStartTimeInMillis_, runningStartTimeInMillis) };


    // startedTimeInMillis Field Functions 
    bool hasStartedTimeInMillis() const { return this->startedTimeInMillis_ != nullptr;};
    void deleteStartedTimeInMillis() { this->startedTimeInMillis_ = nullptr;};
    inline int64_t startedTimeInMillis() const { DARABONBA_PTR_GET_DEFAULT(startedTimeInMillis_, 0L) };
    inline Detail& setStartedTimeInMillis(int64_t startedTimeInMillis) { DARABONBA_PTR_SET_VALUE(startedTimeInMillis_, startedTimeInMillis) };


    // submittedTimeInMillis Field Functions 
    bool hasSubmittedTimeInMillis() const { return this->submittedTimeInMillis_ != nullptr;};
    void deleteSubmittedTimeInMillis() { this->submittedTimeInMillis_ = nullptr;};
    inline int64_t submittedTimeInMillis() const { DARABONBA_PTR_GET_DEFAULT(submittedTimeInMillis_, 0L) };
    inline Detail& setSubmittedTimeInMillis(int64_t submittedTimeInMillis) { DARABONBA_PTR_SET_VALUE(submittedTimeInMillis_, submittedTimeInMillis) };


    // terminatedTimeInMillis Field Functions 
    bool hasTerminatedTimeInMillis() const { return this->terminatedTimeInMillis_ != nullptr;};
    void deleteTerminatedTimeInMillis() { this->terminatedTimeInMillis_ = nullptr;};
    inline int64_t terminatedTimeInMillis() const { DARABONBA_PTR_GET_DEFAULT(terminatedTimeInMillis_, 0L) };
    inline Detail& setTerminatedTimeInMillis(int64_t terminatedTimeInMillis) { DARABONBA_PTR_SET_VALUE(terminatedTimeInMillis_, terminatedTimeInMillis) };


    // webUiAddress Field Functions 
    bool hasWebUiAddress() const { return this->webUiAddress_ != nullptr;};
    void deleteWebUiAddress() { this->webUiAddress_ = nullptr;};
    inline string webUiAddress() const { DARABONBA_PTR_GET_DEFAULT(webUiAddress_, "") };
    inline Detail& setWebUiAddress(string webUiAddress) { DARABONBA_PTR_SET_VALUE(webUiAddress_, webUiAddress) };


  protected:
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> data_ = nullptr;
    std::shared_ptr<int64_t> durationInMillis_ = nullptr;
    std::shared_ptr<int64_t> estimateExecutionCpuTimeInSeconds_ = nullptr;
    std::shared_ptr<int64_t> executionDurationInMillis_ = nullptr;
    std::shared_ptr<string> lastAttemptId_ = nullptr;
    std::shared_ptr<int64_t> lastUpdatedTimeInMillis_ = nullptr;
    std::shared_ptr<string> logRootPath_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    std::shared_ptr<int64_t> resourceProvisioningDurationInMillis_ = nullptr;
    std::shared_ptr<int64_t> runningStartTimeInMillis_ = nullptr;
    std::shared_ptr<int64_t> startedTimeInMillis_ = nullptr;
    std::shared_ptr<int64_t> submittedTimeInMillis_ = nullptr;
    std::shared_ptr<int64_t> terminatedTimeInMillis_ = nullptr;
    std::shared_ptr<string> webUiAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
