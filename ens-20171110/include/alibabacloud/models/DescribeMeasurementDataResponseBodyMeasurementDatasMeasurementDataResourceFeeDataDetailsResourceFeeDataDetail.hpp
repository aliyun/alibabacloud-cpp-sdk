// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEASUREMENTDATARESPONSEBODYMEASUREMENTDATASMEASUREMENTDATARESOURCEFEEDATADETAILSRESOURCEFEEDATADETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEASUREMENTDATARESPONSEBODYMEASUREMENTDATASMEASUREMENTDATARESOURCEFEEDATADETAILSRESOURCEFEEDATADETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CostCode, costCode_);
      DARABONBA_PTR_TO_JSON(CostName, costName_);
      DARABONBA_PTR_TO_JSON(CostVal, costVal_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCode, costCode_);
      DARABONBA_PTR_FROM_JSON(CostName, costName_);
      DARABONBA_PTR_FROM_JSON(CostVal, costVal_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail() = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail(const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail &) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail(DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail &&) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail() = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail& operator=(const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail &) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail& operator=(DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCode_ != nullptr
        && this->costName_ != nullptr && this->costVal_ != nullptr && this->resourceType_ != nullptr; };
    // costCode Field Functions 
    bool hasCostCode() const { return this->costCode_ != nullptr;};
    void deleteCostCode() { this->costCode_ = nullptr;};
    inline string costCode() const { DARABONBA_PTR_GET_DEFAULT(costCode_, "") };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail& setCostCode(string costCode) { DARABONBA_PTR_SET_VALUE(costCode_, costCode) };


    // costName Field Functions 
    bool hasCostName() const { return this->costName_ != nullptr;};
    void deleteCostName() { this->costName_ = nullptr;};
    inline string costName() const { DARABONBA_PTR_GET_DEFAULT(costName_, "") };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail& setCostName(string costName) { DARABONBA_PTR_SET_VALUE(costName_, costName) };


    // costVal Field Functions 
    bool hasCostVal() const { return this->costVal_ != nullptr;};
    void deleteCostVal() { this->costVal_ = nullptr;};
    inline int32_t costVal() const { DARABONBA_PTR_GET_DEFAULT(costVal_, 0) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail& setCostVal(int32_t costVal) { DARABONBA_PTR_SET_VALUE(costVal_, costVal) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The code of the resource.
    std::shared_ptr<string> costCode_ = nullptr;
    // The name of the resource.
    std::shared_ptr<string> costName_ = nullptr;
    // The consumption of the resource.
    // 
    // *   Memory unit: GB.
    // *   CPU unit: vCPU.
    // *   Storage unit: GB.
    std::shared_ptr<int32_t> costVal_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
