// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFORESOURCESUSED_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFORESOURCESUSED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetJobResponseBodyJobInfoResourcesUsed : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfoResourcesUsed& obj) { 
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfoResourcesUsed& obj) { 
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    GetJobResponseBodyJobInfoResourcesUsed() = default ;
    GetJobResponseBodyJobInfoResourcesUsed(const GetJobResponseBodyJobInfoResourcesUsed &) = default ;
    GetJobResponseBodyJobInfoResourcesUsed(GetJobResponseBodyJobInfoResourcesUsed &&) = default ;
    GetJobResponseBodyJobInfoResourcesUsed(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfoResourcesUsed() = default ;
    GetJobResponseBodyJobInfoResourcesUsed& operator=(const GetJobResponseBodyJobInfoResourcesUsed &) = default ;
    GetJobResponseBodyJobInfoResourcesUsed& operator=(GetJobResponseBodyJobInfoResourcesUsed &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cores_ == nullptr
        && return this->memory_ == nullptr && return this->nodes_ == nullptr; };
    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline string cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, "") };
    inline GetJobResponseBodyJobInfoResourcesUsed& setCores(string cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline GetJobResponseBodyJobInfoResourcesUsed& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline string nodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, "") };
    inline GetJobResponseBodyJobInfoResourcesUsed& setNodes(string nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


  protected:
    // The number of vCPUs used by the job on each node.
    std::shared_ptr<string> cores_ = nullptr;
    // The memory size used by the job on each node.
    std::shared_ptr<string> memory_ = nullptr;
    // The number of nodes that are used to run the job.
    std::shared_ptr<string> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
