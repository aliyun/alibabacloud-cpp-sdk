// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEASUREMENTDATARESPONSEBODYMEASUREMENTDATASMEASUREMENTDATARESOURCEFEEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEASUREMENTDATARESPONSEBODYMEASUREMENTDATASMEASUREMENTDATARESOURCEFEEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData& obj) { 
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
      DARABONBA_PTR_TO_JSON(Vcpu, vcpu_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData& obj) { 
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
      DARABONBA_PTR_FROM_JSON(Vcpu, vcpu_);
    };
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData() = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData(const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData &) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData(DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData &&) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData() = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData& operator=(const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData &) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData& operator=(DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->memory_ != nullptr
        && this->storage_ != nullptr && this->vcpu_ != nullptr; };
    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline int32_t storage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    // vcpu Field Functions 
    bool hasVcpu() const { return this->vcpu_ != nullptr;};
    void deleteVcpu() { this->vcpu_ = nullptr;};
    inline int32_t vcpu() const { DARABONBA_PTR_GET_DEFAULT(vcpu_, 0) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData& setVcpu(int32_t vcpu) { DARABONBA_PTR_SET_VALUE(vcpu_, vcpu) };


  protected:
    // The memory size. Unit: GB.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // The storage capacity. Unit: GB.
    std::shared_ptr<int32_t> storage_ = nullptr;
    // The number of vCPUs.
    std::shared_ptr<int32_t> vcpu_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
