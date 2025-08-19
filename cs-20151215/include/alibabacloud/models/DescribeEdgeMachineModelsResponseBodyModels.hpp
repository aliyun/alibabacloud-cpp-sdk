// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGEMACHINEMODELSRESPONSEBODYMODELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGEMACHINEMODELSRESPONSEBODYMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeEdgeMachineModelsResponseBodyModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeMachineModelsResponseBodyModels& obj) { 
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(cpu_arch, cpuArch_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(manage_runtime, manageRuntime_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(model_id, modelId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeMachineModelsResponseBodyModels& obj) { 
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(cpu_arch, cpuArch_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(manage_runtime, manageRuntime_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(model_id, modelId_);
    };
    DescribeEdgeMachineModelsResponseBodyModels() = default ;
    DescribeEdgeMachineModelsResponseBodyModels(const DescribeEdgeMachineModelsResponseBodyModels &) = default ;
    DescribeEdgeMachineModelsResponseBodyModels(DescribeEdgeMachineModelsResponseBodyModels &&) = default ;
    DescribeEdgeMachineModelsResponseBodyModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeMachineModelsResponseBodyModels() = default ;
    DescribeEdgeMachineModelsResponseBodyModels& operator=(const DescribeEdgeMachineModelsResponseBodyModels &) = default ;
    DescribeEdgeMachineModelsResponseBodyModels& operator=(DescribeEdgeMachineModelsResponseBodyModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpu_ != nullptr
        && this->cpuArch_ != nullptr && this->created_ != nullptr && this->description_ != nullptr && this->manageRuntime_ != nullptr && this->memory_ != nullptr
        && this->model_ != nullptr && this->modelId_ != nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeEdgeMachineModelsResponseBodyModels& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // cpuArch Field Functions 
    bool hasCpuArch() const { return this->cpuArch_ != nullptr;};
    void deleteCpuArch() { this->cpuArch_ = nullptr;};
    inline string cpuArch() const { DARABONBA_PTR_GET_DEFAULT(cpuArch_, "") };
    inline DescribeEdgeMachineModelsResponseBodyModels& setCpuArch(string cpuArch) { DARABONBA_PTR_SET_VALUE(cpuArch_, cpuArch) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeEdgeMachineModelsResponseBodyModels& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEdgeMachineModelsResponseBodyModels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // manageRuntime Field Functions 
    bool hasManageRuntime() const { return this->manageRuntime_ != nullptr;};
    void deleteManageRuntime() { this->manageRuntime_ = nullptr;};
    inline int32_t manageRuntime() const { DARABONBA_PTR_GET_DEFAULT(manageRuntime_, 0) };
    inline DescribeEdgeMachineModelsResponseBodyModels& setManageRuntime(int32_t manageRuntime) { DARABONBA_PTR_SET_VALUE(manageRuntime_, manageRuntime) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeEdgeMachineModelsResponseBodyModels& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline DescribeEdgeMachineModelsResponseBodyModels& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline DescribeEdgeMachineModelsResponseBodyModels& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


  protected:
    // The number of vCores.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The CPU architecture.
    std::shared_ptr<string> cpuArch_ = nullptr;
    // The time when the cloud-native box was created.
    std::shared_ptr<string> created_ = nullptr;
    // The description of the cloud-native box.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the cloud-native box model manages the Docker runtime.
    std::shared_ptr<int32_t> manageRuntime_ = nullptr;
    // The memory. Unit: GB.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // The model of the cloud-native box.
    std::shared_ptr<string> model_ = nullptr;
    // The ID of the cloud-native box.
    std::shared_ptr<string> modelId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
