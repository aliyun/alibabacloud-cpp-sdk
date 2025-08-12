// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyHybridMonitorTaskRequestAttachLabels.hpp>
#include <alibabacloud/models/ModifyHybridMonitorTaskRequestSLSProcessConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyHybridMonitorTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridMonitorTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachLabels, attachLabels_);
      DARABONBA_PTR_TO_JSON(CollectInterval, collectInterval_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SLSProcessConfig, SLSProcessConfig_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridMonitorTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachLabels, attachLabels_);
      DARABONBA_PTR_FROM_JSON(CollectInterval, collectInterval_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SLSProcessConfig, SLSProcessConfig_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    ModifyHybridMonitorTaskRequest() = default ;
    ModifyHybridMonitorTaskRequest(const ModifyHybridMonitorTaskRequest &) = default ;
    ModifyHybridMonitorTaskRequest(ModifyHybridMonitorTaskRequest &&) = default ;
    ModifyHybridMonitorTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridMonitorTaskRequest() = default ;
    ModifyHybridMonitorTaskRequest& operator=(const ModifyHybridMonitorTaskRequest &) = default ;
    ModifyHybridMonitorTaskRequest& operator=(ModifyHybridMonitorTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachLabels_ != nullptr
        && this->collectInterval_ != nullptr && this->description_ != nullptr && this->regionId_ != nullptr && this->SLSProcessConfig_ != nullptr && this->taskId_ != nullptr
        && this->taskName_ != nullptr; };
    // attachLabels Field Functions 
    bool hasAttachLabels() const { return this->attachLabels_ != nullptr;};
    void deleteAttachLabels() { this->attachLabels_ = nullptr;};
    inline const vector<ModifyHybridMonitorTaskRequestAttachLabels> & attachLabels() const { DARABONBA_PTR_GET_CONST(attachLabels_, vector<ModifyHybridMonitorTaskRequestAttachLabels>) };
    inline vector<ModifyHybridMonitorTaskRequestAttachLabels> attachLabels() { DARABONBA_PTR_GET(attachLabels_, vector<ModifyHybridMonitorTaskRequestAttachLabels>) };
    inline ModifyHybridMonitorTaskRequest& setAttachLabels(const vector<ModifyHybridMonitorTaskRequestAttachLabels> & attachLabels) { DARABONBA_PTR_SET_VALUE(attachLabels_, attachLabels) };
    inline ModifyHybridMonitorTaskRequest& setAttachLabels(vector<ModifyHybridMonitorTaskRequestAttachLabels> && attachLabels) { DARABONBA_PTR_SET_RVALUE(attachLabels_, attachLabels) };


    // collectInterval Field Functions 
    bool hasCollectInterval() const { return this->collectInterval_ != nullptr;};
    void deleteCollectInterval() { this->collectInterval_ = nullptr;};
    inline string collectInterval() const { DARABONBA_PTR_GET_DEFAULT(collectInterval_, "") };
    inline ModifyHybridMonitorTaskRequest& setCollectInterval(string collectInterval) { DARABONBA_PTR_SET_VALUE(collectInterval_, collectInterval) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyHybridMonitorTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHybridMonitorTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // SLSProcessConfig Field Functions 
    bool hasSLSProcessConfig() const { return this->SLSProcessConfig_ != nullptr;};
    void deleteSLSProcessConfig() { this->SLSProcessConfig_ = nullptr;};
    inline const ModifyHybridMonitorTaskRequestSLSProcessConfig & SLSProcessConfig() const { DARABONBA_PTR_GET_CONST(SLSProcessConfig_, ModifyHybridMonitorTaskRequestSLSProcessConfig) };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfig SLSProcessConfig() { DARABONBA_PTR_GET(SLSProcessConfig_, ModifyHybridMonitorTaskRequestSLSProcessConfig) };
    inline ModifyHybridMonitorTaskRequest& setSLSProcessConfig(const ModifyHybridMonitorTaskRequestSLSProcessConfig & SLSProcessConfig) { DARABONBA_PTR_SET_VALUE(SLSProcessConfig_, SLSProcessConfig) };
    inline ModifyHybridMonitorTaskRequest& setSLSProcessConfig(ModifyHybridMonitorTaskRequestSLSProcessConfig && SLSProcessConfig) { DARABONBA_PTR_SET_RVALUE(SLSProcessConfig_, SLSProcessConfig) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModifyHybridMonitorTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ModifyHybridMonitorTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The tags of the metric.
    std::shared_ptr<vector<ModifyHybridMonitorTaskRequestAttachLabels>> attachLabels_ = nullptr;
    // The collection period of the metric. Valid values:
    // 
    // *   15
    // *   60
    // 
    // Unit: seconds.
    std::shared_ptr<string> collectInterval_ = nullptr;
    // The description of the metric import task.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The configurations of the logs that are imported from Simple Log Service.
    std::shared_ptr<ModifyHybridMonitorTaskRequestSLSProcessConfig> SLSProcessConfig_ = nullptr;
    // The ID of the metric import task.
    // 
    // For information about how to obtain the ID of a metric import task, see [DescribeHybridMonitorTaskList](https://help.aliyun.com/document_detail/428624.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // The name of the metric import task.
    // 
    // For information about how to obtain the ID of a metric import task, see [DescribeHybridMonitorTaskList](https://help.aliyun.com/document_detail/428624.html).
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
