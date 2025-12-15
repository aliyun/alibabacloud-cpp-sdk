// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBSJOBSPECRESOURCESACTUALOCCUPIED_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBSJOBSPECRESOURCESACTUALOCCUPIED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListJobsResponseBodyJobsJobSpecResourcesActualOccupied : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyJobsJobSpecResourcesActualOccupied& obj) { 
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(Gpus, gpus_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyJobsJobSpecResourcesActualOccupied& obj) { 
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(Gpus, gpus_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    ListJobsResponseBodyJobsJobSpecResourcesActualOccupied() = default ;
    ListJobsResponseBodyJobsJobSpecResourcesActualOccupied(const ListJobsResponseBodyJobsJobSpecResourcesActualOccupied &) = default ;
    ListJobsResponseBodyJobsJobSpecResourcesActualOccupied(ListJobsResponseBodyJobsJobSpecResourcesActualOccupied &&) = default ;
    ListJobsResponseBodyJobsJobSpecResourcesActualOccupied(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBodyJobsJobSpecResourcesActualOccupied() = default ;
    ListJobsResponseBodyJobsJobSpecResourcesActualOccupied& operator=(const ListJobsResponseBodyJobsJobSpecResourcesActualOccupied &) = default ;
    ListJobsResponseBodyJobsJobSpecResourcesActualOccupied& operator=(ListJobsResponseBodyJobsJobSpecResourcesActualOccupied &&) = default ;
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
    inline ListJobsResponseBodyJobsJobSpecResourcesActualOccupied& setCores(string cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // gpus Field Functions 
    bool hasGpus() const { return this->gpus_ != nullptr;};
    void deleteGpus() { this->gpus_ = nullptr;};
    inline string gpus() const { DARABONBA_PTR_GET_DEFAULT(gpus_, "") };
    inline ListJobsResponseBodyJobsJobSpecResourcesActualOccupied& setGpus(string gpus) { DARABONBA_PTR_SET_VALUE(gpus_, gpus) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline ListJobsResponseBodyJobsJobSpecResourcesActualOccupied& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline string nodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, "") };
    inline ListJobsResponseBodyJobsJobSpecResourcesActualOccupied& setNodes(string nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


  protected:
    // Number of CPU cores.
    std::shared_ptr<string> cores_ = nullptr;
    // Number of CPUs
    std::shared_ptr<string> gpus_ = nullptr;
    // Number of memory.
    std::shared_ptr<string> memory_ = nullptr;
    // Number of compute nodes.
    std::shared_ptr<string> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
