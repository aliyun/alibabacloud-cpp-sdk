// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONWITHSCHEDULEREQUESTTASKDEFINITIONJSONTASKPARAMS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONWITHSCHEDULEREQUESTTASKDEFINITIONJSONTASKPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams.hpp>
#include <alibabacloud/models/UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsSparkConf.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& obj) { 
      DARABONBA_PTR_TO_JSON(displaySparkVersion, displaySparkVersion_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(fusion, fusion_);
      DARABONBA_PTR_TO_JSON(localParams, localParams_);
      DARABONBA_PTR_TO_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_TO_JSON(sparkConf, sparkConf_);
      DARABONBA_PTR_TO_JSON(sparkDriverCores, sparkDriverCores_);
      DARABONBA_PTR_TO_JSON(sparkDriverMemory, sparkDriverMemory_);
      DARABONBA_PTR_TO_JSON(sparkExecutorCores, sparkExecutorCores_);
      DARABONBA_PTR_TO_JSON(sparkExecutorMemory, sparkExecutorMemory_);
      DARABONBA_PTR_TO_JSON(sparkLogLevel, sparkLogLevel_);
      DARABONBA_PTR_TO_JSON(sparkLogPath, sparkLogPath_);
      DARABONBA_PTR_TO_JSON(sparkVersion, sparkVersion_);
      DARABONBA_PTR_TO_JSON(taskBizId, taskBizId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(workspaceBizId, workspaceBizId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& obj) { 
      DARABONBA_PTR_FROM_JSON(displaySparkVersion, displaySparkVersion_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(fusion, fusion_);
      DARABONBA_PTR_FROM_JSON(localParams, localParams_);
      DARABONBA_PTR_FROM_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_FROM_JSON(sparkConf, sparkConf_);
      DARABONBA_PTR_FROM_JSON(sparkDriverCores, sparkDriverCores_);
      DARABONBA_PTR_FROM_JSON(sparkDriverMemory, sparkDriverMemory_);
      DARABONBA_PTR_FROM_JSON(sparkExecutorCores, sparkExecutorCores_);
      DARABONBA_PTR_FROM_JSON(sparkExecutorMemory, sparkExecutorMemory_);
      DARABONBA_PTR_FROM_JSON(sparkLogLevel, sparkLogLevel_);
      DARABONBA_PTR_FROM_JSON(sparkLogPath, sparkLogPath_);
      DARABONBA_PTR_FROM_JSON(sparkVersion, sparkVersion_);
      DARABONBA_PTR_FROM_JSON(taskBizId, taskBizId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(workspaceBizId, workspaceBizId_);
    };
    UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams() = default ;
    UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams(const UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams &) = default ;
    UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams(UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams &&) = default ;
    UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams() = default ;
    UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& operator=(const UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams &) = default ;
    UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& operator=(UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displaySparkVersion_ != nullptr
        && this->environmentId_ != nullptr && this->fusion_ != nullptr && this->localParams_ != nullptr && this->resourceQueueId_ != nullptr && this->sparkConf_ != nullptr
        && this->sparkDriverCores_ != nullptr && this->sparkDriverMemory_ != nullptr && this->sparkExecutorCores_ != nullptr && this->sparkExecutorMemory_ != nullptr && this->sparkLogLevel_ != nullptr
        && this->sparkLogPath_ != nullptr && this->sparkVersion_ != nullptr && this->taskBizId_ != nullptr && this->type_ != nullptr && this->workspaceBizId_ != nullptr; };
    // displaySparkVersion Field Functions 
    bool hasDisplaySparkVersion() const { return this->displaySparkVersion_ != nullptr;};
    void deleteDisplaySparkVersion() { this->displaySparkVersion_ = nullptr;};
    inline string displaySparkVersion() const { DARABONBA_PTR_GET_DEFAULT(displaySparkVersion_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setDisplaySparkVersion(string displaySparkVersion) { DARABONBA_PTR_SET_VALUE(displaySparkVersion_, displaySparkVersion) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // fusion Field Functions 
    bool hasFusion() const { return this->fusion_ != nullptr;};
    void deleteFusion() { this->fusion_ = nullptr;};
    inline bool fusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


    // localParams Field Functions 
    bool hasLocalParams() const { return this->localParams_ != nullptr;};
    void deleteLocalParams() { this->localParams_ = nullptr;};
    inline const vector<Models::UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams> & localParams() const { DARABONBA_PTR_GET_CONST(localParams_, vector<Models::UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams>) };
    inline vector<Models::UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams> localParams() { DARABONBA_PTR_GET(localParams_, vector<Models::UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams>) };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setLocalParams(const vector<Models::UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams> & localParams) { DARABONBA_PTR_SET_VALUE(localParams_, localParams) };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setLocalParams(vector<Models::UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams> && localParams) { DARABONBA_PTR_SET_RVALUE(localParams_, localParams) };


    // resourceQueueId Field Functions 
    bool hasResourceQueueId() const { return this->resourceQueueId_ != nullptr;};
    void deleteResourceQueueId() { this->resourceQueueId_ = nullptr;};
    inline string resourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(resourceQueueId_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setResourceQueueId(string resourceQueueId) { DARABONBA_PTR_SET_VALUE(resourceQueueId_, resourceQueueId) };


    // sparkConf Field Functions 
    bool hasSparkConf() const { return this->sparkConf_ != nullptr;};
    void deleteSparkConf() { this->sparkConf_ = nullptr;};
    inline const vector<Models::UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsSparkConf> & sparkConf() const { DARABONBA_PTR_GET_CONST(sparkConf_, vector<Models::UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsSparkConf>) };
    inline vector<Models::UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsSparkConf> sparkConf() { DARABONBA_PTR_GET(sparkConf_, vector<Models::UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsSparkConf>) };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setSparkConf(const vector<Models::UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsSparkConf> & sparkConf) { DARABONBA_PTR_SET_VALUE(sparkConf_, sparkConf) };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setSparkConf(vector<Models::UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsSparkConf> && sparkConf) { DARABONBA_PTR_SET_RVALUE(sparkConf_, sparkConf) };


    // sparkDriverCores Field Functions 
    bool hasSparkDriverCores() const { return this->sparkDriverCores_ != nullptr;};
    void deleteSparkDriverCores() { this->sparkDriverCores_ = nullptr;};
    inline int32_t sparkDriverCores() const { DARABONBA_PTR_GET_DEFAULT(sparkDriverCores_, 0) };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setSparkDriverCores(int32_t sparkDriverCores) { DARABONBA_PTR_SET_VALUE(sparkDriverCores_, sparkDriverCores) };


    // sparkDriverMemory Field Functions 
    bool hasSparkDriverMemory() const { return this->sparkDriverMemory_ != nullptr;};
    void deleteSparkDriverMemory() { this->sparkDriverMemory_ = nullptr;};
    inline int64_t sparkDriverMemory() const { DARABONBA_PTR_GET_DEFAULT(sparkDriverMemory_, 0L) };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setSparkDriverMemory(int64_t sparkDriverMemory) { DARABONBA_PTR_SET_VALUE(sparkDriverMemory_, sparkDriverMemory) };


    // sparkExecutorCores Field Functions 
    bool hasSparkExecutorCores() const { return this->sparkExecutorCores_ != nullptr;};
    void deleteSparkExecutorCores() { this->sparkExecutorCores_ = nullptr;};
    inline int32_t sparkExecutorCores() const { DARABONBA_PTR_GET_DEFAULT(sparkExecutorCores_, 0) };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setSparkExecutorCores(int32_t sparkExecutorCores) { DARABONBA_PTR_SET_VALUE(sparkExecutorCores_, sparkExecutorCores) };


    // sparkExecutorMemory Field Functions 
    bool hasSparkExecutorMemory() const { return this->sparkExecutorMemory_ != nullptr;};
    void deleteSparkExecutorMemory() { this->sparkExecutorMemory_ = nullptr;};
    inline int64_t sparkExecutorMemory() const { DARABONBA_PTR_GET_DEFAULT(sparkExecutorMemory_, 0L) };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setSparkExecutorMemory(int64_t sparkExecutorMemory) { DARABONBA_PTR_SET_VALUE(sparkExecutorMemory_, sparkExecutorMemory) };


    // sparkLogLevel Field Functions 
    bool hasSparkLogLevel() const { return this->sparkLogLevel_ != nullptr;};
    void deleteSparkLogLevel() { this->sparkLogLevel_ = nullptr;};
    inline string sparkLogLevel() const { DARABONBA_PTR_GET_DEFAULT(sparkLogLevel_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setSparkLogLevel(string sparkLogLevel) { DARABONBA_PTR_SET_VALUE(sparkLogLevel_, sparkLogLevel) };


    // sparkLogPath Field Functions 
    bool hasSparkLogPath() const { return this->sparkLogPath_ != nullptr;};
    void deleteSparkLogPath() { this->sparkLogPath_ = nullptr;};
    inline string sparkLogPath() const { DARABONBA_PTR_GET_DEFAULT(sparkLogPath_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setSparkLogPath(string sparkLogPath) { DARABONBA_PTR_SET_VALUE(sparkLogPath_, sparkLogPath) };


    // sparkVersion Field Functions 
    bool hasSparkVersion() const { return this->sparkVersion_ != nullptr;};
    void deleteSparkVersion() { this->sparkVersion_ = nullptr;};
    inline string sparkVersion() const { DARABONBA_PTR_GET_DEFAULT(sparkVersion_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setSparkVersion(string sparkVersion) { DARABONBA_PTR_SET_VALUE(sparkVersion_, sparkVersion) };


    // taskBizId Field Functions 
    bool hasTaskBizId() const { return this->taskBizId_ != nullptr;};
    void deleteTaskBizId() { this->taskBizId_ = nullptr;};
    inline string taskBizId() const { DARABONBA_PTR_GET_DEFAULT(taskBizId_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setTaskBizId(string taskBizId) { DARABONBA_PTR_SET_VALUE(taskBizId_, taskBizId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workspaceBizId Field Functions 
    bool hasWorkspaceBizId() const { return this->workspaceBizId_ != nullptr;};
    void deleteWorkspaceBizId() { this->workspaceBizId_ = nullptr;};
    inline string workspaceBizId() const { DARABONBA_PTR_GET_DEFAULT(workspaceBizId_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams& setWorkspaceBizId(string workspaceBizId) { DARABONBA_PTR_SET_VALUE(workspaceBizId_, workspaceBizId) };


  protected:
    // The displayed version of the Spark engine.
    std::shared_ptr<string> displaySparkVersion_ = nullptr;
    // The environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    // Specifies whether to enable Fusion engine for acceleration.
    std::shared_ptr<bool> fusion_ = nullptr;
    std::shared_ptr<vector<Models::UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams>> localParams_ = nullptr;
    // The name of the queue on which the job runs.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceQueueId_ = nullptr;
    // The configurations of the Spark jobs.
    std::shared_ptr<vector<Models::UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsSparkConf>> sparkConf_ = nullptr;
    // The number of driver cores of the Spark job.
    std::shared_ptr<int32_t> sparkDriverCores_ = nullptr;
    // The size of driver memory of the Spark job.
    std::shared_ptr<int64_t> sparkDriverMemory_ = nullptr;
    // The number of executor cores of the Spark job.
    std::shared_ptr<int32_t> sparkExecutorCores_ = nullptr;
    // The size of executor memory of the Spark job.
    std::shared_ptr<int64_t> sparkExecutorMemory_ = nullptr;
    // The level of the Spark log.
    std::shared_ptr<string> sparkLogLevel_ = nullptr;
    // The path where the operational logs of the Spark job are stored.
    std::shared_ptr<string> sparkLogPath_ = nullptr;
    // The version of the Spark engine.
    std::shared_ptr<string> sparkVersion_ = nullptr;
    // The ID of the data development job.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskBizId_ = nullptr;
    // The type of the Spark job.
    std::shared_ptr<string> type_ = nullptr;
    // The workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceBizId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
