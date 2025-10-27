// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINECHECKSUMMARYRESPONSEBODYBASELINERESULTSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINECHECKSUMMARYRESPONSEBODYBASELINERESULTSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineClassAlias, baselineClassAlias_);
      DARABONBA_PTR_TO_JSON(BaselineClassKey, baselineClassKey_);
      DARABONBA_PTR_TO_JSON(BaselineNameAlias, baselineNameAlias_);
      DARABONBA_PTR_TO_JSON(BaselineNameKey, baselineNameKey_);
      DARABONBA_PTR_TO_JSON(BaselineNameLevel, baselineNameLevel_);
      DARABONBA_PTR_TO_JSON(FirstScanTime, firstScanTime_);
      DARABONBA_PTR_TO_JSON(HighRiskImage, highRiskImage_);
      DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_TO_JSON(LowRiskImage, lowRiskImage_);
      DARABONBA_PTR_TO_JSON(MiddleRiskImage, middleRiskImage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineClassAlias, baselineClassAlias_);
      DARABONBA_PTR_FROM_JSON(BaselineClassKey, baselineClassKey_);
      DARABONBA_PTR_FROM_JSON(BaselineNameAlias, baselineNameAlias_);
      DARABONBA_PTR_FROM_JSON(BaselineNameKey, baselineNameKey_);
      DARABONBA_PTR_FROM_JSON(BaselineNameLevel, baselineNameLevel_);
      DARABONBA_PTR_FROM_JSON(FirstScanTime, firstScanTime_);
      DARABONBA_PTR_FROM_JSON(HighRiskImage, highRiskImage_);
      DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_FROM_JSON(LowRiskImage, lowRiskImage_);
      DARABONBA_PTR_FROM_JSON(MiddleRiskImage, middleRiskImage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary() = default ;
    DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary(const DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary &) = default ;
    DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary(DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary &&) = default ;
    DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary() = default ;
    DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary& operator=(const DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary &) = default ;
    DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary& operator=(DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineClassAlias_ == nullptr
        && return this->baselineClassKey_ == nullptr && return this->baselineNameAlias_ == nullptr && return this->baselineNameKey_ == nullptr && return this->baselineNameLevel_ == nullptr && return this->firstScanTime_ == nullptr
        && return this->highRiskImage_ == nullptr && return this->lastScanTime_ == nullptr && return this->lowRiskImage_ == nullptr && return this->middleRiskImage_ == nullptr && return this->status_ == nullptr; };
    // baselineClassAlias Field Functions 
    bool hasBaselineClassAlias() const { return this->baselineClassAlias_ != nullptr;};
    void deleteBaselineClassAlias() { this->baselineClassAlias_ = nullptr;};
    inline string baselineClassAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineClassAlias_, "") };
    inline DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary& setBaselineClassAlias(string baselineClassAlias) { DARABONBA_PTR_SET_VALUE(baselineClassAlias_, baselineClassAlias) };


    // baselineClassKey Field Functions 
    bool hasBaselineClassKey() const { return this->baselineClassKey_ != nullptr;};
    void deleteBaselineClassKey() { this->baselineClassKey_ = nullptr;};
    inline string baselineClassKey() const { DARABONBA_PTR_GET_DEFAULT(baselineClassKey_, "") };
    inline DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary& setBaselineClassKey(string baselineClassKey) { DARABONBA_PTR_SET_VALUE(baselineClassKey_, baselineClassKey) };


    // baselineNameAlias Field Functions 
    bool hasBaselineNameAlias() const { return this->baselineNameAlias_ != nullptr;};
    void deleteBaselineNameAlias() { this->baselineNameAlias_ = nullptr;};
    inline string baselineNameAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineNameAlias_, "") };
    inline DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary& setBaselineNameAlias(string baselineNameAlias) { DARABONBA_PTR_SET_VALUE(baselineNameAlias_, baselineNameAlias) };


    // baselineNameKey Field Functions 
    bool hasBaselineNameKey() const { return this->baselineNameKey_ != nullptr;};
    void deleteBaselineNameKey() { this->baselineNameKey_ = nullptr;};
    inline string baselineNameKey() const { DARABONBA_PTR_GET_DEFAULT(baselineNameKey_, "") };
    inline DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary& setBaselineNameKey(string baselineNameKey) { DARABONBA_PTR_SET_VALUE(baselineNameKey_, baselineNameKey) };


    // baselineNameLevel Field Functions 
    bool hasBaselineNameLevel() const { return this->baselineNameLevel_ != nullptr;};
    void deleteBaselineNameLevel() { this->baselineNameLevel_ = nullptr;};
    inline string baselineNameLevel() const { DARABONBA_PTR_GET_DEFAULT(baselineNameLevel_, "") };
    inline DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary& setBaselineNameLevel(string baselineNameLevel) { DARABONBA_PTR_SET_VALUE(baselineNameLevel_, baselineNameLevel) };


    // firstScanTime Field Functions 
    bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
    void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
    inline int64_t firstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
    inline DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


    // highRiskImage Field Functions 
    bool hasHighRiskImage() const { return this->highRiskImage_ != nullptr;};
    void deleteHighRiskImage() { this->highRiskImage_ = nullptr;};
    inline int32_t highRiskImage() const { DARABONBA_PTR_GET_DEFAULT(highRiskImage_, 0) };
    inline DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary& setHighRiskImage(int32_t highRiskImage) { DARABONBA_PTR_SET_VALUE(highRiskImage_, highRiskImage) };


    // lastScanTime Field Functions 
    bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
    void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
    inline int64_t lastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
    inline DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


    // lowRiskImage Field Functions 
    bool hasLowRiskImage() const { return this->lowRiskImage_ != nullptr;};
    void deleteLowRiskImage() { this->lowRiskImage_ = nullptr;};
    inline int32_t lowRiskImage() const { DARABONBA_PTR_GET_DEFAULT(lowRiskImage_, 0) };
    inline DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary& setLowRiskImage(int32_t lowRiskImage) { DARABONBA_PTR_SET_VALUE(lowRiskImage_, lowRiskImage) };


    // middleRiskImage Field Functions 
    bool hasMiddleRiskImage() const { return this->middleRiskImage_ != nullptr;};
    void deleteMiddleRiskImage() { this->middleRiskImage_ = nullptr;};
    inline int32_t middleRiskImage() const { DARABONBA_PTR_GET_DEFAULT(middleRiskImage_, 0) };
    inline DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary& setMiddleRiskImage(int32_t middleRiskImage) { DARABONBA_PTR_SET_VALUE(middleRiskImage_, middleRiskImage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The category of the baseline.
    std::shared_ptr<string> baselineClassAlias_ = nullptr;
    // The keyword of the baseline category.
    std::shared_ptr<string> baselineClassKey_ = nullptr;
    // The name of the baseline.
    std::shared_ptr<string> baselineNameAlias_ = nullptr;
    // The keyword of the baseline name.
    std::shared_ptr<string> baselineNameKey_ = nullptr;
    // The severity of the image baseline. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> baselineNameLevel_ = nullptr;
    // The timestamp generated when the first scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> firstScanTime_ = nullptr;
    // The number of images on which **high** baseline risks are detected.
    std::shared_ptr<int32_t> highRiskImage_ = nullptr;
    // The timestamp generated when the last scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> lastScanTime_ = nullptr;
    // The number of images on which **low** baseline risks are detected.
    std::shared_ptr<int32_t> lowRiskImage_ = nullptr;
    // The number of images on which **medium** baseline risks are detected.
    std::shared_ptr<int32_t> middleRiskImage_ = nullptr;
    // The status of the baseline risks. Valid values:
    // 
    // *   **0**: unfixed
    // *   **1**: fixed
    // *   **2**: pending verification
    // *   **3**: fixing failed
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
