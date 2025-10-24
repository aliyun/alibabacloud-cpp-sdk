// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMACHINESPECRESPONSEBODYTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMACHINESPECRESPONSEBODYTYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeMachineSpecResponseBodyTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMachineSpecResponseBodyTypes& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMachineSpecResponseBodyTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    DescribeMachineSpecResponseBodyTypes() = default ;
    DescribeMachineSpecResponseBodyTypes(const DescribeMachineSpecResponseBodyTypes &) = default ;
    DescribeMachineSpecResponseBodyTypes(DescribeMachineSpecResponseBodyTypes &&) = default ;
    DescribeMachineSpecResponseBodyTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMachineSpecResponseBodyTypes() = default ;
    DescribeMachineSpecResponseBodyTypes& operator=(const DescribeMachineSpecResponseBodyTypes &) = default ;
    DescribeMachineSpecResponseBodyTypes& operator=(DescribeMachineSpecResponseBodyTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPU_ == nullptr
        && return this->memory_ == nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline int32_t CPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0) };
    inline DescribeMachineSpecResponseBodyTypes& setCPU(int32_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline const vector<int32_t> & memory() const { DARABONBA_PTR_GET_CONST(memory_, vector<int32_t>) };
    inline vector<int32_t> memory() { DARABONBA_PTR_GET(memory_, vector<int32_t>) };
    inline DescribeMachineSpecResponseBodyTypes& setMemory(const vector<int32_t> & memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };
    inline DescribeMachineSpecResponseBodyTypes& setMemory(vector<int32_t> && memory) { DARABONBA_PTR_SET_RVALUE(memory_, memory) };


  protected:
    // Valid values:
    std::shared_ptr<int32_t> CPU_ = nullptr;
    // The optional values for memory when CPU is set to a specific value as above.
    std::shared_ptr<vector<int32_t>> memory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
