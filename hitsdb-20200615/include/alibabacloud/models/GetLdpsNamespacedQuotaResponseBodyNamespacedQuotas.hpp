// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLDPSNAMESPACEDQUOTARESPONSEBODYNAMESPACEDQUOTAS_HPP_
#define ALIBABACLOUD_MODELS_GETLDPSNAMESPACEDQUOTARESPONSEBODYNAMESPACEDQUOTAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas& obj) { 
      DARABONBA_PTR_TO_JSON(CpuAmount, cpuAmount_);
      DARABONBA_PTR_TO_JSON(MemoryAmount, memoryAmount_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UsedCpu, usedCpu_);
      DARABONBA_PTR_TO_JSON(UsedMemory, usedMemory_);
    };
    friend void from_json(const Darabonba::Json& j, GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuAmount, cpuAmount_);
      DARABONBA_PTR_FROM_JSON(MemoryAmount, memoryAmount_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UsedCpu, usedCpu_);
      DARABONBA_PTR_FROM_JSON(UsedMemory, usedMemory_);
    };
    GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas() = default ;
    GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas(const GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas &) = default ;
    GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas(GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas &&) = default ;
    GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas() = default ;
    GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas& operator=(const GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas &) = default ;
    GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas& operator=(GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuAmount_ == nullptr
        && return this->memoryAmount_ == nullptr && return this->name_ == nullptr && return this->usedCpu_ == nullptr && return this->usedMemory_ == nullptr; };
    // cpuAmount Field Functions 
    bool hasCpuAmount() const { return this->cpuAmount_ != nullptr;};
    void deleteCpuAmount() { this->cpuAmount_ = nullptr;};
    inline string cpuAmount() const { DARABONBA_PTR_GET_DEFAULT(cpuAmount_, "") };
    inline GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas& setCpuAmount(string cpuAmount) { DARABONBA_PTR_SET_VALUE(cpuAmount_, cpuAmount) };


    // memoryAmount Field Functions 
    bool hasMemoryAmount() const { return this->memoryAmount_ != nullptr;};
    void deleteMemoryAmount() { this->memoryAmount_ = nullptr;};
    inline string memoryAmount() const { DARABONBA_PTR_GET_DEFAULT(memoryAmount_, "") };
    inline GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas& setMemoryAmount(string memoryAmount) { DARABONBA_PTR_SET_VALUE(memoryAmount_, memoryAmount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // usedCpu Field Functions 
    bool hasUsedCpu() const { return this->usedCpu_ != nullptr;};
    void deleteUsedCpu() { this->usedCpu_ = nullptr;};
    inline string usedCpu() const { DARABONBA_PTR_GET_DEFAULT(usedCpu_, "") };
    inline GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas& setUsedCpu(string usedCpu) { DARABONBA_PTR_SET_VALUE(usedCpu_, usedCpu) };


    // usedMemory Field Functions 
    bool hasUsedMemory() const { return this->usedMemory_ != nullptr;};
    void deleteUsedMemory() { this->usedMemory_ = nullptr;};
    inline string usedMemory() const { DARABONBA_PTR_GET_DEFAULT(usedMemory_, "") };
    inline GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas& setUsedMemory(string usedMemory) { DARABONBA_PTR_SET_VALUE(usedMemory_, usedMemory) };


  protected:
    std::shared_ptr<string> cpuAmount_ = nullptr;
    std::shared_ptr<string> memoryAmount_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> usedCpu_ = nullptr;
    std::shared_ptr<string> usedMemory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
