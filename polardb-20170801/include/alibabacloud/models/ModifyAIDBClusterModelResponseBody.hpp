// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAIDBCLUSTERMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAIDBCLUSTERMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyAIDBClusterModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAIDBClusterModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TargetModelName, targetModelName_);
      DARABONBA_PTR_TO_JSON(TargetOssPath, targetOssPath_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TotalBatches, totalBatches_);
      DARABONBA_PTR_TO_JSON(TotalMsds, totalMsds_);
      DARABONBA_PTR_TO_JSON(Warnings, warnings_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAIDBClusterModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TargetModelName, targetModelName_);
      DARABONBA_PTR_FROM_JSON(TargetOssPath, targetOssPath_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TotalBatches, totalBatches_);
      DARABONBA_PTR_FROM_JSON(TotalMsds, totalMsds_);
      DARABONBA_PTR_FROM_JSON(Warnings, warnings_);
    };
    ModifyAIDBClusterModelResponseBody() = default ;
    ModifyAIDBClusterModelResponseBody(const ModifyAIDBClusterModelResponseBody &) = default ;
    ModifyAIDBClusterModelResponseBody(ModifyAIDBClusterModelResponseBody &&) = default ;
    ModifyAIDBClusterModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAIDBClusterModelResponseBody() = default ;
    ModifyAIDBClusterModelResponseBody& operator=(const ModifyAIDBClusterModelResponseBody &) = default ;
    ModifyAIDBClusterModelResponseBody& operator=(ModifyAIDBClusterModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->modelType_ == nullptr && this->requestId_ == nullptr && this->targetModelName_ == nullptr && this->targetOssPath_ == nullptr && this->taskId_ == nullptr
        && this->totalBatches_ == nullptr && this->totalMsds_ == nullptr && this->warnings_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyAIDBClusterModelResponseBody& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ModifyAIDBClusterModelResponseBody& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyAIDBClusterModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targetModelName Field Functions 
    bool hasTargetModelName() const { return this->targetModelName_ != nullptr;};
    void deleteTargetModelName() { this->targetModelName_ = nullptr;};
    inline string getTargetModelName() const { DARABONBA_PTR_GET_DEFAULT(targetModelName_, "") };
    inline ModifyAIDBClusterModelResponseBody& setTargetModelName(string targetModelName) { DARABONBA_PTR_SET_VALUE(targetModelName_, targetModelName) };


    // targetOssPath Field Functions 
    bool hasTargetOssPath() const { return this->targetOssPath_ != nullptr;};
    void deleteTargetOssPath() { this->targetOssPath_ = nullptr;};
    inline string getTargetOssPath() const { DARABONBA_PTR_GET_DEFAULT(targetOssPath_, "") };
    inline ModifyAIDBClusterModelResponseBody& setTargetOssPath(string targetOssPath) { DARABONBA_PTR_SET_VALUE(targetOssPath_, targetOssPath) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline ModifyAIDBClusterModelResponseBody& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // totalBatches Field Functions 
    bool hasTotalBatches() const { return this->totalBatches_ != nullptr;};
    void deleteTotalBatches() { this->totalBatches_ = nullptr;};
    inline int64_t getTotalBatches() const { DARABONBA_PTR_GET_DEFAULT(totalBatches_, 0L) };
    inline ModifyAIDBClusterModelResponseBody& setTotalBatches(int64_t totalBatches) { DARABONBA_PTR_SET_VALUE(totalBatches_, totalBatches) };


    // totalMsds Field Functions 
    bool hasTotalMsds() const { return this->totalMsds_ != nullptr;};
    void deleteTotalMsds() { this->totalMsds_ = nullptr;};
    inline int64_t getTotalMsds() const { DARABONBA_PTR_GET_DEFAULT(totalMsds_, 0L) };
    inline ModifyAIDBClusterModelResponseBody& setTotalMsds(int64_t totalMsds) { DARABONBA_PTR_SET_VALUE(totalMsds_, totalMsds) };


    // warnings Field Functions 
    bool hasWarnings() const { return this->warnings_ != nullptr;};
    void deleteWarnings() { this->warnings_ = nullptr;};
    inline const vector<string> & getWarnings() const { DARABONBA_PTR_GET_CONST(warnings_, vector<string>) };
    inline vector<string> getWarnings() { DARABONBA_PTR_GET(warnings_, vector<string>) };
    inline ModifyAIDBClusterModelResponseBody& setWarnings(const vector<string> & warnings) { DARABONBA_PTR_SET_VALUE(warnings_, warnings) };
    inline ModifyAIDBClusterModelResponseBody& setWarnings(vector<string> && warnings) { DARABONBA_PTR_SET_RVALUE(warnings_, warnings) };


  protected:
    // Indicates whether the request is a dry-run request.
    shared_ptr<bool> dryRun_ {};
    // The model type of the instance.
    shared_ptr<string> modelType_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The resolved target model name.
    shared_ptr<string> targetModelName_ {};
    // The resolved target OSS path.
    shared_ptr<string> targetOssPath_ {};
    // The ID of the asynchronous task. This parameter is empty when DryRun is set to true.
    shared_ptr<int32_t> taskId_ {};
    // The number of change batches.
    shared_ptr<int64_t> totalBatches_ {};
    // The number of affected model serving instances.
    shared_ptr<int64_t> totalMsds_ {};
    // The change warnings returned by the upstream. The caller must display these warnings.
    shared_ptr<vector<string>> warnings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
