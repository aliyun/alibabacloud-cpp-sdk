// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLAVAILABLERESOURCERESPONSEBODYSALECONTROLAVAILABLERESOURCEAVAILABLESPEC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLAVAILABLERESOURCERESPONSEBODYSALECONTROLAVAILABLERESOURCEAVAILABLESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec& obj) { 
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(SpecName, specName_);
      DARABONBA_PTR_TO_JSON(SpecValue, specValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(SpecName, specName_);
      DARABONBA_PTR_FROM_JSON(SpecValue, specValue_);
    };
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec() = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec(const DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec &) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec(DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec &&) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec() = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec& operator=(const DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec &) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec& operator=(DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cores_ != nullptr
        && this->memory_ != nullptr && this->specName_ != nullptr && this->specValue_ != nullptr; };
    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline string cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, "") };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec& setCores(string cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // specName Field Functions 
    bool hasSpecName() const { return this->specName_ != nullptr;};
    void deleteSpecName() { this->specName_ = nullptr;};
    inline string specName() const { DARABONBA_PTR_GET_DEFAULT(specName_, "") };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec& setSpecName(string specName) { DARABONBA_PTR_SET_VALUE(specName_, specName) };


    // specValue Field Functions 
    bool hasSpecValue() const { return this->specValue_ != nullptr;};
    void deleteSpecValue() { this->specValue_ = nullptr;};
    inline string specValue() const { DARABONBA_PTR_GET_DEFAULT(specValue_, "") };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec& setSpecValue(string specValue) { DARABONBA_PTR_SET_VALUE(specValue_, specValue) };


  protected:
    std::shared_ptr<string> cores_ = nullptr;
    std::shared_ptr<string> memory_ = nullptr;
    std::shared_ptr<string> specName_ = nullptr;
    std::shared_ptr<string> specValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
