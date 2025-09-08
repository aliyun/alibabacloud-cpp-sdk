// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODYDATABAGUSAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODYDATABAGUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeConfigurationPriceResponseBodyDataBagUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigurationPriceResponseBodyDataBagUsage& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Cu, cu_);
      DARABONBA_PTR_TO_JSON(Mem, mem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigurationPriceResponseBodyDataBagUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Cu, cu_);
      DARABONBA_PTR_FROM_JSON(Mem, mem_);
    };
    DescribeConfigurationPriceResponseBodyDataBagUsage() = default ;
    DescribeConfigurationPriceResponseBodyDataBagUsage(const DescribeConfigurationPriceResponseBodyDataBagUsage &) = default ;
    DescribeConfigurationPriceResponseBodyDataBagUsage(DescribeConfigurationPriceResponseBodyDataBagUsage &&) = default ;
    DescribeConfigurationPriceResponseBodyDataBagUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigurationPriceResponseBodyDataBagUsage() = default ;
    DescribeConfigurationPriceResponseBodyDataBagUsage& operator=(const DescribeConfigurationPriceResponseBodyDataBagUsage &) = default ;
    DescribeConfigurationPriceResponseBodyDataBagUsage& operator=(DescribeConfigurationPriceResponseBodyDataBagUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpu_ != nullptr
        && this->cu_ != nullptr && this->mem_ != nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline DescribeConfigurationPriceResponseBodyDataBagUsage& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline float cu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0.0) };
    inline DescribeConfigurationPriceResponseBodyDataBagUsage& setCu(float cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline float mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0.0) };
    inline DescribeConfigurationPriceResponseBodyDataBagUsage& setMem(float mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


  protected:
    // The available CPU capacity. Unit: cores \\*.
    std::shared_ptr<float> cpu_ = nullptr;
    std::shared_ptr<float> cu_ = nullptr;
    // The available memory size. Unit: GiB ×.
    std::shared_ptr<float> mem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
