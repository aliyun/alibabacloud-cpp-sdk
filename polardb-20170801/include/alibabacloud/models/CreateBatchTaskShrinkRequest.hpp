// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateBatchTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    CreateBatchTaskShrinkRequest() = default ;
    CreateBatchTaskShrinkRequest(const CreateBatchTaskShrinkRequest &) = default ;
    CreateBatchTaskShrinkRequest(CreateBatchTaskShrinkRequest &&) = default ;
    CreateBatchTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchTaskShrinkRequest() = default ;
    CreateBatchTaskShrinkRequest& operator=(const CreateBatchTaskShrinkRequest &) = default ;
    CreateBatchTaskShrinkRequest& operator=(CreateBatchTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationType_ == nullptr
        && this->instanceIdsShrink_ == nullptr && this->param_ == nullptr && this->regionId_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr; };
    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline CreateBatchTaskShrinkRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline CreateBatchTaskShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline CreateBatchTaskShrinkRequest& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateBatchTaskShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateBatchTaskShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateBatchTaskShrinkRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    shared_ptr<string> applicationType_ {};
    // The instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> instanceIdsShrink_ {};
    // The task parameters.
    shared_ptr<string> param_ {};
    // The region ID.
    // 
    // > Call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query the regions of all clusters in your account.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The name of the batch task.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // The task type.
    // 
    // This parameter is required.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
