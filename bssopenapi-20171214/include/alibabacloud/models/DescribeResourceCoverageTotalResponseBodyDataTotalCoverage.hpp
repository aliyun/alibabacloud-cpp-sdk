// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCECOVERAGETOTALRESPONSEBODYDATATOTALCOVERAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCECOVERAGETOTALRESPONSEBODYDATATOTALCOVERAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourceCoverageTotalResponseBodyDataTotalCoverage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceCoverageTotalResponseBodyDataTotalCoverage& obj) { 
      DARABONBA_PTR_TO_JSON(CapacityUnit, capacityUnit_);
      DARABONBA_PTR_TO_JSON(CoveragePercentage, coveragePercentage_);
      DARABONBA_PTR_TO_JSON(DeductQuantity, deductQuantity_);
      DARABONBA_PTR_TO_JSON(TotalQuantity, totalQuantity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceCoverageTotalResponseBodyDataTotalCoverage& obj) { 
      DARABONBA_PTR_FROM_JSON(CapacityUnit, capacityUnit_);
      DARABONBA_PTR_FROM_JSON(CoveragePercentage, coveragePercentage_);
      DARABONBA_PTR_FROM_JSON(DeductQuantity, deductQuantity_);
      DARABONBA_PTR_FROM_JSON(TotalQuantity, totalQuantity_);
    };
    DescribeResourceCoverageTotalResponseBodyDataTotalCoverage() = default ;
    DescribeResourceCoverageTotalResponseBodyDataTotalCoverage(const DescribeResourceCoverageTotalResponseBodyDataTotalCoverage &) = default ;
    DescribeResourceCoverageTotalResponseBodyDataTotalCoverage(DescribeResourceCoverageTotalResponseBodyDataTotalCoverage &&) = default ;
    DescribeResourceCoverageTotalResponseBodyDataTotalCoverage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceCoverageTotalResponseBodyDataTotalCoverage() = default ;
    DescribeResourceCoverageTotalResponseBodyDataTotalCoverage& operator=(const DescribeResourceCoverageTotalResponseBodyDataTotalCoverage &) = default ;
    DescribeResourceCoverageTotalResponseBodyDataTotalCoverage& operator=(DescribeResourceCoverageTotalResponseBodyDataTotalCoverage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capacityUnit_ != nullptr
        && this->coveragePercentage_ != nullptr && this->deductQuantity_ != nullptr && this->totalQuantity_ != nullptr; };
    // capacityUnit Field Functions 
    bool hasCapacityUnit() const { return this->capacityUnit_ != nullptr;};
    void deleteCapacityUnit() { this->capacityUnit_ = nullptr;};
    inline string capacityUnit() const { DARABONBA_PTR_GET_DEFAULT(capacityUnit_, "") };
    inline DescribeResourceCoverageTotalResponseBodyDataTotalCoverage& setCapacityUnit(string capacityUnit) { DARABONBA_PTR_SET_VALUE(capacityUnit_, capacityUnit) };


    // coveragePercentage Field Functions 
    bool hasCoveragePercentage() const { return this->coveragePercentage_ != nullptr;};
    void deleteCoveragePercentage() { this->coveragePercentage_ = nullptr;};
    inline float coveragePercentage() const { DARABONBA_PTR_GET_DEFAULT(coveragePercentage_, 0.0) };
    inline DescribeResourceCoverageTotalResponseBodyDataTotalCoverage& setCoveragePercentage(float coveragePercentage) { DARABONBA_PTR_SET_VALUE(coveragePercentage_, coveragePercentage) };


    // deductQuantity Field Functions 
    bool hasDeductQuantity() const { return this->deductQuantity_ != nullptr;};
    void deleteDeductQuantity() { this->deductQuantity_ = nullptr;};
    inline float deductQuantity() const { DARABONBA_PTR_GET_DEFAULT(deductQuantity_, 0.0) };
    inline DescribeResourceCoverageTotalResponseBodyDataTotalCoverage& setDeductQuantity(float deductQuantity) { DARABONBA_PTR_SET_VALUE(deductQuantity_, deductQuantity) };


    // totalQuantity Field Functions 
    bool hasTotalQuantity() const { return this->totalQuantity_ != nullptr;};
    void deleteTotalQuantity() { this->totalQuantity_ = nullptr;};
    inline float totalQuantity() const { DARABONBA_PTR_GET_DEFAULT(totalQuantity_, 0.0) };
    inline DescribeResourceCoverageTotalResponseBodyDataTotalCoverage& setTotalQuantity(float totalQuantity) { DARABONBA_PTR_SET_VALUE(totalQuantity_, totalQuantity) };


  protected:
    // The unit that is used to measure the resources deducted from deduction plans.
    std::shared_ptr<string> capacityUnit_ = nullptr;
    // The total coverage rate of deduction plans.
    std::shared_ptr<float> coveragePercentage_ = nullptr;
    // The total amount of the resources deducted from deduction plans.
    std::shared_ptr<float> deductQuantity_ = nullptr;
    // The total amount of resources consumed.
    std::shared_ptr<float> totalQuantity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
