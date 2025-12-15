// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBSJOBSPECRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBSJOBSPECRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListJobsResponseBodyJobsJobSpecResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyJobsJobSpecResources& obj) { 
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(Gpus, gpus_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyJobsJobSpecResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(Gpus, gpus_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    ListJobsResponseBodyJobsJobSpecResources() = default ;
    ListJobsResponseBodyJobsJobSpecResources(const ListJobsResponseBodyJobsJobSpecResources &) = default ;
    ListJobsResponseBodyJobsJobSpecResources(ListJobsResponseBodyJobsJobSpecResources &&) = default ;
    ListJobsResponseBodyJobsJobSpecResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBodyJobsJobSpecResources() = default ;
    ListJobsResponseBodyJobsJobSpecResources& operator=(const ListJobsResponseBodyJobsJobSpecResources &) = default ;
    ListJobsResponseBodyJobsJobSpecResources& operator=(ListJobsResponseBodyJobsJobSpecResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cores_ == nullptr
        && return this->gpus_ == nullptr && return this->memory_ == nullptr && return this->nodes_ == nullptr; };
    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline string cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, "") };
    inline ListJobsResponseBodyJobsJobSpecResources& setCores(string cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // gpus Field Functions 
    bool hasGpus() const { return this->gpus_ != nullptr;};
    void deleteGpus() { this->gpus_ = nullptr;};
    inline string gpus() const { DARABONBA_PTR_GET_DEFAULT(gpus_, "") };
    inline ListJobsResponseBodyJobsJobSpecResources& setGpus(string gpus) { DARABONBA_PTR_SET_VALUE(gpus_, gpus) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline ListJobsResponseBodyJobsJobSpecResources& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline string nodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, "") };
    inline ListJobsResponseBodyJobsJobSpecResources& setNodes(string nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


  protected:
    // The number of vCPUs that were used to run the job.
    std::shared_ptr<string> cores_ = nullptr;
    // The number of GPUs that were used to run the job.
    std::shared_ptr<string> gpus_ = nullptr;
    // The size of memory that was used to run the job.
    std::shared_ptr<string> memory_ = nullptr;
    // The number of compute nodes that were used to run the job.
    std::shared_ptr<string> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
