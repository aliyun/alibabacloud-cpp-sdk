// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONINSTANCERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONINSTANCERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFunctionInstanceResponseBodyResultBelongs.hpp>
#include <vector>
#include <alibabacloud/models/GetFunctionInstanceResponseBodyResultCreateParameters.hpp>
#include <alibabacloud/models/GetFunctionInstanceResponseBodyResultTask.hpp>
#include <alibabacloud/models/GetFunctionInstanceResponseBodyResultUsageParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionInstanceResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionInstanceResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Belongs, belongs_);
      DARABONBA_PTR_TO_JSON(CreateParameters, createParameters_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Cron, cron_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Task, task_);
      DARABONBA_PTR_TO_JSON(UsageParameters, usageParameters_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionInstanceResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Belongs, belongs_);
      DARABONBA_PTR_FROM_JSON(CreateParameters, createParameters_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Cron, cron_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
      DARABONBA_PTR_FROM_JSON(UsageParameters, usageParameters_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    GetFunctionInstanceResponseBodyResult() = default ;
    GetFunctionInstanceResponseBodyResult(const GetFunctionInstanceResponseBodyResult &) = default ;
    GetFunctionInstanceResponseBodyResult(GetFunctionInstanceResponseBodyResult &&) = default ;
    GetFunctionInstanceResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionInstanceResponseBodyResult() = default ;
    GetFunctionInstanceResponseBodyResult& operator=(const GetFunctionInstanceResponseBodyResult &) = default ;
    GetFunctionInstanceResponseBodyResult& operator=(GetFunctionInstanceResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->belongs_ == nullptr
        && return this->createParameters_ == nullptr && return this->createTime_ == nullptr && return this->cron_ == nullptr && return this->description_ == nullptr && return this->extendInfo_ == nullptr
        && return this->functionName_ == nullptr && return this->functionType_ == nullptr && return this->instanceName_ == nullptr && return this->modelType_ == nullptr && return this->source_ == nullptr
        && return this->status_ == nullptr && return this->task_ == nullptr && return this->usageParameters_ == nullptr && return this->versionId_ == nullptr; };
    // belongs Field Functions 
    bool hasBelongs() const { return this->belongs_ != nullptr;};
    void deleteBelongs() { this->belongs_ = nullptr;};
    inline const Models::GetFunctionInstanceResponseBodyResultBelongs & belongs() const { DARABONBA_PTR_GET_CONST(belongs_, Models::GetFunctionInstanceResponseBodyResultBelongs) };
    inline Models::GetFunctionInstanceResponseBodyResultBelongs belongs() { DARABONBA_PTR_GET(belongs_, Models::GetFunctionInstanceResponseBodyResultBelongs) };
    inline GetFunctionInstanceResponseBodyResult& setBelongs(const Models::GetFunctionInstanceResponseBodyResultBelongs & belongs) { DARABONBA_PTR_SET_VALUE(belongs_, belongs) };
    inline GetFunctionInstanceResponseBodyResult& setBelongs(Models::GetFunctionInstanceResponseBodyResultBelongs && belongs) { DARABONBA_PTR_SET_RVALUE(belongs_, belongs) };


    // createParameters Field Functions 
    bool hasCreateParameters() const { return this->createParameters_ != nullptr;};
    void deleteCreateParameters() { this->createParameters_ = nullptr;};
    inline const vector<Models::GetFunctionInstanceResponseBodyResultCreateParameters> & createParameters() const { DARABONBA_PTR_GET_CONST(createParameters_, vector<Models::GetFunctionInstanceResponseBodyResultCreateParameters>) };
    inline vector<Models::GetFunctionInstanceResponseBodyResultCreateParameters> createParameters() { DARABONBA_PTR_GET(createParameters_, vector<Models::GetFunctionInstanceResponseBodyResultCreateParameters>) };
    inline GetFunctionInstanceResponseBodyResult& setCreateParameters(const vector<Models::GetFunctionInstanceResponseBodyResultCreateParameters> & createParameters) { DARABONBA_PTR_SET_VALUE(createParameters_, createParameters) };
    inline GetFunctionInstanceResponseBodyResult& setCreateParameters(vector<Models::GetFunctionInstanceResponseBodyResultCreateParameters> && createParameters) { DARABONBA_PTR_SET_RVALUE(createParameters_, createParameters) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetFunctionInstanceResponseBodyResult& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // cron Field Functions 
    bool hasCron() const { return this->cron_ != nullptr;};
    void deleteCron() { this->cron_ = nullptr;};
    inline string cron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
    inline GetFunctionInstanceResponseBodyResult& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetFunctionInstanceResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline GetFunctionInstanceResponseBodyResult& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline GetFunctionInstanceResponseBodyResult& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string functionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline GetFunctionInstanceResponseBodyResult& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetFunctionInstanceResponseBodyResult& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline GetFunctionInstanceResponseBodyResult& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetFunctionInstanceResponseBodyResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetFunctionInstanceResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const Models::GetFunctionInstanceResponseBodyResultTask & task() const { DARABONBA_PTR_GET_CONST(task_, Models::GetFunctionInstanceResponseBodyResultTask) };
    inline Models::GetFunctionInstanceResponseBodyResultTask task() { DARABONBA_PTR_GET(task_, Models::GetFunctionInstanceResponseBodyResultTask) };
    inline GetFunctionInstanceResponseBodyResult& setTask(const Models::GetFunctionInstanceResponseBodyResultTask & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline GetFunctionInstanceResponseBodyResult& setTask(Models::GetFunctionInstanceResponseBodyResultTask && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


    // usageParameters Field Functions 
    bool hasUsageParameters() const { return this->usageParameters_ != nullptr;};
    void deleteUsageParameters() { this->usageParameters_ = nullptr;};
    inline const vector<Models::GetFunctionInstanceResponseBodyResultUsageParameters> & usageParameters() const { DARABONBA_PTR_GET_CONST(usageParameters_, vector<Models::GetFunctionInstanceResponseBodyResultUsageParameters>) };
    inline vector<Models::GetFunctionInstanceResponseBodyResultUsageParameters> usageParameters() { DARABONBA_PTR_GET(usageParameters_, vector<Models::GetFunctionInstanceResponseBodyResultUsageParameters>) };
    inline GetFunctionInstanceResponseBodyResult& setUsageParameters(const vector<Models::GetFunctionInstanceResponseBodyResultUsageParameters> & usageParameters) { DARABONBA_PTR_SET_VALUE(usageParameters_, usageParameters) };
    inline GetFunctionInstanceResponseBodyResult& setUsageParameters(vector<Models::GetFunctionInstanceResponseBodyResultUsageParameters> && usageParameters) { DARABONBA_PTR_SET_RVALUE(usageParameters_, usageParameters) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline int64_t versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, 0L) };
    inline GetFunctionInstanceResponseBodyResult& setVersionId(int64_t versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The information about the instance.
    std::shared_ptr<Models::GetFunctionInstanceResponseBodyResultBelongs> belongs_ = nullptr;
    // The parameters that are used to create the instance.
    std::shared_ptr<vector<Models::GetFunctionInstanceResponseBodyResultCreateParameters>> createParameters_ = nullptr;
    // The time when the task was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The cron expression used to schedule training, in the format of (Minutes Hours DayofMonth Month DayofWeek). If the value is empty, it indicates that no periodic training is performed.
    std::shared_ptr<string> cron_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> description_ = nullptr;
    // The extended information, which is a JSON string.
    std::shared_ptr<string> extendInfo_ = nullptr;
    // The name of the feature.
    std::shared_ptr<string> functionName_ = nullptr;
    // The type of the feature.
    std::shared_ptr<string> functionType_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The type of the model.
    std::shared_ptr<string> modelType_ = nullptr;
    // How the instance is created. Valid values:
    // 
    // *   user: The instance is created by user.
    // *   builtin: The instance is created by the system.
    std::shared_ptr<string> source_ = nullptr;
    // The status of the instance. Valid values:
    // 
    // 1.  unavailable: No model is available. Models must be trained before you can use them.
    // 2.  available: Models can be used.
    std::shared_ptr<string> status_ = nullptr;
    // The information about the training task. This parameter is not displayed if no task is available.
    std::shared_ptr<Models::GetFunctionInstanceResponseBodyResultTask> task_ = nullptr;
    // The parameters that are used.
    std::shared_ptr<vector<Models::GetFunctionInstanceResponseBodyResultUsageParameters>> usageParameters_ = nullptr;
    // The ID of the version.
    std::shared_ptr<int64_t> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
