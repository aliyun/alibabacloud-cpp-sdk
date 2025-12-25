// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESRESPONSEBODYNAMESPACESRESOURCEUSED_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESRESPONSEBODYNAMESPACESRESOURCEUSED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class DescribeNamespacesResponseBodyNamespacesResourceUsed : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespacesResponseBodyNamespacesResourceUsed& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Cu, cu_);
      DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespacesResponseBodyNamespacesResourceUsed& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Cu, cu_);
      DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
    };
    DescribeNamespacesResponseBodyNamespacesResourceUsed() = default ;
    DescribeNamespacesResponseBodyNamespacesResourceUsed(const DescribeNamespacesResponseBodyNamespacesResourceUsed &) = default ;
    DescribeNamespacesResponseBodyNamespacesResourceUsed(DescribeNamespacesResponseBodyNamespacesResourceUsed &&) = default ;
    DescribeNamespacesResponseBodyNamespacesResourceUsed(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespacesResponseBodyNamespacesResourceUsed() = default ;
    DescribeNamespacesResponseBodyNamespacesResourceUsed& operator=(const DescribeNamespacesResponseBodyNamespacesResourceUsed &) = default ;
    DescribeNamespacesResponseBodyNamespacesResourceUsed& operator=(DescribeNamespacesResponseBodyNamespacesResourceUsed &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && return this->cu_ == nullptr && return this->memoryGB_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline DescribeNamespacesResponseBodyNamespacesResourceUsed& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline float cu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0.0) };
    inline DescribeNamespacesResponseBodyNamespacesResourceUsed& setCu(float cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // memoryGB Field Functions 
    bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
    void deleteMemoryGB() { this->memoryGB_ = nullptr;};
    inline float memoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0.0) };
    inline DescribeNamespacesResponseBodyNamespacesResourceUsed& setMemoryGB(float memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


  protected:
    std::shared_ptr<float> cpu_ = nullptr;
    std::shared_ptr<float> cu_ = nullptr;
    std::shared_ptr<float> memoryGB_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
