// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITOPERATIONTASKREQUESTOPERATIONTASKINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_SUBMITOPERATIONTASKREQUESTOPERATIONTASKINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SubmitOperationTaskRequestOperationTaskInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitOperationTaskRequestOperationTaskInstances& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitOperationTaskRequestOperationTaskInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    SubmitOperationTaskRequestOperationTaskInstances() = default ;
    SubmitOperationTaskRequestOperationTaskInstances(const SubmitOperationTaskRequestOperationTaskInstances &) = default ;
    SubmitOperationTaskRequestOperationTaskInstances(SubmitOperationTaskRequestOperationTaskInstances &&) = default ;
    SubmitOperationTaskRequestOperationTaskInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitOperationTaskRequestOperationTaskInstances() = default ;
    SubmitOperationTaskRequestOperationTaskInstances& operator=(const SubmitOperationTaskRequestOperationTaskInstances &) = default ;
    SubmitOperationTaskRequestOperationTaskInstances& operator=(SubmitOperationTaskRequestOperationTaskInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->regionId_ == nullptr && return this->taskId_ == nullptr && return this->vendor_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SubmitOperationTaskRequestOperationTaskInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SubmitOperationTaskRequestOperationTaskInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SubmitOperationTaskRequestOperationTaskInstances& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline SubmitOperationTaskRequestOperationTaskInstances& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The instance ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the server.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the task that you want to roll back
    std::shared_ptr<string> taskId_ = nullptr;
    // The service provider of the asset. Valid values:
    // 
    // *   **0**: an asset provided by Alibaba Cloud.
    // *   **1**: an asset outside Alibaba Cloud.
    // *   **2**: an asset in a data center.
    // *   **3**, **4**, **5**, and **7**: an asset from a third-party cloud service provider.
    // *   **8**: a lightweight asset.
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
