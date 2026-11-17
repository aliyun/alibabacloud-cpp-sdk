// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEDITQUEUESPEC_HPP_
#define ALIBABACLOUD_MODELS_BATCHEDITQUEUESPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ResourceSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class BatchEditQueueSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEditQueueSpec& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(environments, environments_);
      DARABONBA_PTR_TO_JSON(gpuSpec, gpuSpec_);
      DARABONBA_PTR_TO_JSON(resourceSpec, resourceSpec_);
      DARABONBA_PTR_TO_JSON(workspaceQueueName, workspaceQueueName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEditQueueSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(environments, environments_);
      DARABONBA_PTR_FROM_JSON(gpuSpec, gpuSpec_);
      DARABONBA_PTR_FROM_JSON(resourceSpec, resourceSpec_);
      DARABONBA_PTR_FROM_JSON(workspaceQueueName, workspaceQueueName_);
    };
    BatchEditQueueSpec() = default ;
    BatchEditQueueSpec(const BatchEditQueueSpec &) = default ;
    BatchEditQueueSpec(BatchEditQueueSpec &&) = default ;
    BatchEditQueueSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEditQueueSpec() = default ;
    BatchEditQueueSpec& operator=(const BatchEditQueueSpec &) = default ;
    BatchEditQueueSpec& operator=(BatchEditQueueSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->environments_ == nullptr && this->gpuSpec_ == nullptr && this->resourceSpec_ == nullptr && this->workspaceQueueName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline BatchEditQueueSpec& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline const vector<string> & getEnvironments() const { DARABONBA_PTR_GET_CONST(environments_, vector<string>) };
    inline vector<string> getEnvironments() { DARABONBA_PTR_GET(environments_, vector<string>) };
    inline BatchEditQueueSpec& setEnvironments(const vector<string> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
    inline BatchEditQueueSpec& setEnvironments(vector<string> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


    // gpuSpec Field Functions 
    bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
    void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
    inline const vector<string> & getGpuSpec() const { DARABONBA_PTR_GET_CONST(gpuSpec_, vector<string>) };
    inline vector<string> getGpuSpec() { DARABONBA_PTR_GET(gpuSpec_, vector<string>) };
    inline BatchEditQueueSpec& setGpuSpec(const vector<string> & gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };
    inline BatchEditQueueSpec& setGpuSpec(vector<string> && gpuSpec) { DARABONBA_PTR_SET_RVALUE(gpuSpec_, gpuSpec) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const ResourceSpec & getResourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, ResourceSpec) };
    inline ResourceSpec getResourceSpec() { DARABONBA_PTR_GET(resourceSpec_, ResourceSpec) };
    inline BatchEditQueueSpec& setResourceSpec(const ResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline BatchEditQueueSpec& setResourceSpec(ResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


    // workspaceQueueName Field Functions 
    bool hasWorkspaceQueueName() const { return this->workspaceQueueName_ != nullptr;};
    void deleteWorkspaceQueueName() { this->workspaceQueueName_ = nullptr;};
    inline string getWorkspaceQueueName() const { DARABONBA_PTR_GET_DEFAULT(workspaceQueueName_, "") };
    inline BatchEditQueueSpec& setWorkspaceQueueName(string workspaceQueueName) { DARABONBA_PTR_SET_VALUE(workspaceQueueName_, workspaceQueueName) };


  protected:
    // The description of the queue. If this parameter is not specified, the description is not modified.
    shared_ptr<string> description_ {};
    // The runtime environments. If this parameter is not specified, the runtime environments are not modified.
    shared_ptr<vector<string>> environments_ {};
    // The list of GPU instance types. If this parameter is not specified, the GPU specifications are not modified.
    shared_ptr<vector<string>> gpuSpec_ {};
    // The resource specifications, which represent the absolute target value. If this parameter is not specified, only the description, environments, or GPU specifications are modified, and the quota is not recalculated.
    shared_ptr<ResourceSpec> resourceSpec_ {};
    // The name of the queue.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceQueueName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
