// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESOURCESTATICSRESPONSEBODYDATAREALTIMERES_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESOURCESTATICSRESPONSEBODYDATAREALTIMERES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class QueryResourceStaticsResponseBodyDataRealTimeRes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResourceStaticsResponseBodyDataRealTimeRes& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(EphemeralStorage, ephemeralStorage_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResourceStaticsResponseBodyDataRealTimeRes& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(EphemeralStorage, ephemeralStorage_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    QueryResourceStaticsResponseBodyDataRealTimeRes() = default ;
    QueryResourceStaticsResponseBodyDataRealTimeRes(const QueryResourceStaticsResponseBodyDataRealTimeRes &) = default ;
    QueryResourceStaticsResponseBodyDataRealTimeRes(QueryResourceStaticsResponseBodyDataRealTimeRes &&) = default ;
    QueryResourceStaticsResponseBodyDataRealTimeRes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResourceStaticsResponseBodyDataRealTimeRes() = default ;
    QueryResourceStaticsResponseBodyDataRealTimeRes& operator=(const QueryResourceStaticsResponseBodyDataRealTimeRes &) = default ;
    QueryResourceStaticsResponseBodyDataRealTimeRes& operator=(QueryResourceStaticsResponseBodyDataRealTimeRes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpu_ != nullptr
        && this->ephemeralStorage_ != nullptr && this->memory_ != nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline QueryResourceStaticsResponseBodyDataRealTimeRes& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // ephemeralStorage Field Functions 
    bool hasEphemeralStorage() const { return this->ephemeralStorage_ != nullptr;};
    void deleteEphemeralStorage() { this->ephemeralStorage_ = nullptr;};
    inline float ephemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(ephemeralStorage_, 0.0) };
    inline QueryResourceStaticsResponseBodyDataRealTimeRes& setEphemeralStorage(float ephemeralStorage) { DARABONBA_PTR_SET_VALUE(ephemeralStorage_, ephemeralStorage) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline QueryResourceStaticsResponseBodyDataRealTimeRes& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    // The CPU usage. Unit: core per minute.
    std::shared_ptr<float> cpu_ = nullptr;
    // The storage size of the temporary storage space. Unit: GiB.
    std::shared_ptr<float> ephemeralStorage_ = nullptr;
    // The memory usage. Unit: GiB per minute.
    std::shared_ptr<float> memory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
