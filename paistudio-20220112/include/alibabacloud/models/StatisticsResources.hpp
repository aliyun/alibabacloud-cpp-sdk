// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STATISTICSRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_STATISTICSRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class StatisticsResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StatisticsResources& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(GPU, GPU_);
      DARABONBA_PTR_TO_JSON(HyperNodeNum, hyperNodeNum_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NodeNum, nodeNum_);
    };
    friend void from_json(const Darabonba::Json& j, StatisticsResources& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(GPU, GPU_);
      DARABONBA_PTR_FROM_JSON(HyperNodeNum, hyperNodeNum_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NodeNum, nodeNum_);
    };
    StatisticsResources() = default ;
    StatisticsResources(const StatisticsResources &) = default ;
    StatisticsResources(StatisticsResources &&) = default ;
    StatisticsResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StatisticsResources() = default ;
    StatisticsResources& operator=(const StatisticsResources &) = default ;
    StatisticsResources& operator=(StatisticsResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPU_ == nullptr
        && this->GPU_ == nullptr && this->hyperNodeNum_ == nullptr && this->memory_ == nullptr && this->nodeNum_ == nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline string getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
    inline StatisticsResources& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline string getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
    inline StatisticsResources& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // hyperNodeNum Field Functions 
    bool hasHyperNodeNum() const { return this->hyperNodeNum_ != nullptr;};
    void deleteHyperNodeNum() { this->hyperNodeNum_ = nullptr;};
    inline int64_t getHyperNodeNum() const { DARABONBA_PTR_GET_DEFAULT(hyperNodeNum_, 0L) };
    inline StatisticsResources& setHyperNodeNum(int64_t hyperNodeNum) { DARABONBA_PTR_SET_VALUE(hyperNodeNum_, hyperNodeNum) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline StatisticsResources& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nodeNum Field Functions 
    bool hasNodeNum() const { return this->nodeNum_ != nullptr;};
    void deleteNodeNum() { this->nodeNum_ = nullptr;};
    inline int64_t getNodeNum() const { DARABONBA_PTR_GET_DEFAULT(nodeNum_, 0L) };
    inline StatisticsResources& setNodeNum(int64_t nodeNum) { DARABONBA_PTR_SET_VALUE(nodeNum_, nodeNum) };


  protected:
    shared_ptr<string> CPU_ {};
    shared_ptr<string> GPU_ {};
    shared_ptr<int64_t> hyperNodeNum_ {};
    shared_ptr<string> memory_ {};
    shared_ptr<int64_t> nodeNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
