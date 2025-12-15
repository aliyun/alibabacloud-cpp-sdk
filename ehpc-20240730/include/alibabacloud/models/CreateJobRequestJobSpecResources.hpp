// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTJOBSPECRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTJOBSPECRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateJobRequestJobSpecResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestJobSpecResources& obj) { 
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(Gpus, gpus_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestJobSpecResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(Gpus, gpus_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    CreateJobRequestJobSpecResources() = default ;
    CreateJobRequestJobSpecResources(const CreateJobRequestJobSpecResources &) = default ;
    CreateJobRequestJobSpecResources(CreateJobRequestJobSpecResources &&) = default ;
    CreateJobRequestJobSpecResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestJobSpecResources() = default ;
    CreateJobRequestJobSpecResources& operator=(const CreateJobRequestJobSpecResources &) = default ;
    CreateJobRequestJobSpecResources& operator=(CreateJobRequestJobSpecResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cores_ == nullptr
        && return this->gpus_ == nullptr && return this->memory_ == nullptr && return this->nodes_ == nullptr; };
    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int32_t cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
    inline CreateJobRequestJobSpecResources& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // gpus Field Functions 
    bool hasGpus() const { return this->gpus_ != nullptr;};
    void deleteGpus() { this->gpus_ = nullptr;};
    inline int32_t gpus() const { DARABONBA_PTR_GET_DEFAULT(gpus_, 0) };
    inline CreateJobRequestJobSpecResources& setGpus(int32_t gpus) { DARABONBA_PTR_SET_VALUE(gpus_, gpus) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline CreateJobRequestJobSpecResources& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline int32_t nodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, 0) };
    inline CreateJobRequestJobSpecResources& setNodes(int32_t nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


  protected:
    // The number of vCPUs to be allocated to each compute node.
    std::shared_ptr<int32_t> cores_ = nullptr;
    // The number of GPUs to be allocated to each compute node.
    std::shared_ptr<int32_t> gpus_ = nullptr;
    // The memory size to be allocated to each compute node. The memory size is in string format. Unit: MB or GB.
    std::shared_ptr<string> memory_ = nullptr;
    // The number of compute nodes to be allocated to the job.
    std::shared_ptr<int32_t> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
