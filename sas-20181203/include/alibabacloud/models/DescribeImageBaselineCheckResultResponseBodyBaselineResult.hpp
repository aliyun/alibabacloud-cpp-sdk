// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINECHECKRESULTRESPONSEBODYBASELINERESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINECHECKRESULTRESPONSEBODYBASELINERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineCheckResultResponseBodyBaselineResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineCheckResultResponseBodyBaselineResult& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineClassAlias, baselineClassAlias_);
      DARABONBA_PTR_TO_JSON(BaselineItemCount, baselineItemCount_);
      DARABONBA_PTR_TO_JSON(BaselineNameAlias, baselineNameAlias_);
      DARABONBA_PTR_TO_JSON(BaselineNameKey, baselineNameKey_);
      DARABONBA_PTR_TO_JSON(BaselineNameLevel, baselineNameLevel_);
      DARABONBA_PTR_TO_JSON(FirstScanTime, firstScanTime_);
      DARABONBA_PTR_TO_JSON(HighRiskItemCount, highRiskItemCount_);
      DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_TO_JSON(LowRiskItemCount, lowRiskItemCount_);
      DARABONBA_PTR_TO_JSON(MiddleRiskItemCount, middleRiskItemCount_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineCheckResultResponseBodyBaselineResult& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineClassAlias, baselineClassAlias_);
      DARABONBA_PTR_FROM_JSON(BaselineItemCount, baselineItemCount_);
      DARABONBA_PTR_FROM_JSON(BaselineNameAlias, baselineNameAlias_);
      DARABONBA_PTR_FROM_JSON(BaselineNameKey, baselineNameKey_);
      DARABONBA_PTR_FROM_JSON(BaselineNameLevel, baselineNameLevel_);
      DARABONBA_PTR_FROM_JSON(FirstScanTime, firstScanTime_);
      DARABONBA_PTR_FROM_JSON(HighRiskItemCount, highRiskItemCount_);
      DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_FROM_JSON(LowRiskItemCount, lowRiskItemCount_);
      DARABONBA_PTR_FROM_JSON(MiddleRiskItemCount, middleRiskItemCount_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeImageBaselineCheckResultResponseBodyBaselineResult() = default ;
    DescribeImageBaselineCheckResultResponseBodyBaselineResult(const DescribeImageBaselineCheckResultResponseBodyBaselineResult &) = default ;
    DescribeImageBaselineCheckResultResponseBodyBaselineResult(DescribeImageBaselineCheckResultResponseBodyBaselineResult &&) = default ;
    DescribeImageBaselineCheckResultResponseBodyBaselineResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineCheckResultResponseBodyBaselineResult() = default ;
    DescribeImageBaselineCheckResultResponseBodyBaselineResult& operator=(const DescribeImageBaselineCheckResultResponseBodyBaselineResult &) = default ;
    DescribeImageBaselineCheckResultResponseBodyBaselineResult& operator=(DescribeImageBaselineCheckResultResponseBodyBaselineResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineClassAlias_ == nullptr
        && return this->baselineItemCount_ == nullptr && return this->baselineNameAlias_ == nullptr && return this->baselineNameKey_ == nullptr && return this->baselineNameLevel_ == nullptr && return this->firstScanTime_ == nullptr
        && return this->highRiskItemCount_ == nullptr && return this->lastScanTime_ == nullptr && return this->lowRiskItemCount_ == nullptr && return this->middleRiskItemCount_ == nullptr && return this->status_ == nullptr; };
    // baselineClassAlias Field Functions 
    bool hasBaselineClassAlias() const { return this->baselineClassAlias_ != nullptr;};
    void deleteBaselineClassAlias() { this->baselineClassAlias_ = nullptr;};
    inline string baselineClassAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineClassAlias_, "") };
    inline DescribeImageBaselineCheckResultResponseBodyBaselineResult& setBaselineClassAlias(string baselineClassAlias) { DARABONBA_PTR_SET_VALUE(baselineClassAlias_, baselineClassAlias) };


    // baselineItemCount Field Functions 
    bool hasBaselineItemCount() const { return this->baselineItemCount_ != nullptr;};
    void deleteBaselineItemCount() { this->baselineItemCount_ = nullptr;};
    inline int32_t baselineItemCount() const { DARABONBA_PTR_GET_DEFAULT(baselineItemCount_, 0) };
    inline DescribeImageBaselineCheckResultResponseBodyBaselineResult& setBaselineItemCount(int32_t baselineItemCount) { DARABONBA_PTR_SET_VALUE(baselineItemCount_, baselineItemCount) };


    // baselineNameAlias Field Functions 
    bool hasBaselineNameAlias() const { return this->baselineNameAlias_ != nullptr;};
    void deleteBaselineNameAlias() { this->baselineNameAlias_ = nullptr;};
    inline string baselineNameAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineNameAlias_, "") };
    inline DescribeImageBaselineCheckResultResponseBodyBaselineResult& setBaselineNameAlias(string baselineNameAlias) { DARABONBA_PTR_SET_VALUE(baselineNameAlias_, baselineNameAlias) };


    // baselineNameKey Field Functions 
    bool hasBaselineNameKey() const { return this->baselineNameKey_ != nullptr;};
    void deleteBaselineNameKey() { this->baselineNameKey_ = nullptr;};
    inline string baselineNameKey() const { DARABONBA_PTR_GET_DEFAULT(baselineNameKey_, "") };
    inline DescribeImageBaselineCheckResultResponseBodyBaselineResult& setBaselineNameKey(string baselineNameKey) { DARABONBA_PTR_SET_VALUE(baselineNameKey_, baselineNameKey) };


    // baselineNameLevel Field Functions 
    bool hasBaselineNameLevel() const { return this->baselineNameLevel_ != nullptr;};
    void deleteBaselineNameLevel() { this->baselineNameLevel_ = nullptr;};
    inline string baselineNameLevel() const { DARABONBA_PTR_GET_DEFAULT(baselineNameLevel_, "") };
    inline DescribeImageBaselineCheckResultResponseBodyBaselineResult& setBaselineNameLevel(string baselineNameLevel) { DARABONBA_PTR_SET_VALUE(baselineNameLevel_, baselineNameLevel) };


    // firstScanTime Field Functions 
    bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
    void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
    inline int64_t firstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
    inline DescribeImageBaselineCheckResultResponseBodyBaselineResult& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


    // highRiskItemCount Field Functions 
    bool hasHighRiskItemCount() const { return this->highRiskItemCount_ != nullptr;};
    void deleteHighRiskItemCount() { this->highRiskItemCount_ = nullptr;};
    inline int32_t highRiskItemCount() const { DARABONBA_PTR_GET_DEFAULT(highRiskItemCount_, 0) };
    inline DescribeImageBaselineCheckResultResponseBodyBaselineResult& setHighRiskItemCount(int32_t highRiskItemCount) { DARABONBA_PTR_SET_VALUE(highRiskItemCount_, highRiskItemCount) };


    // lastScanTime Field Functions 
    bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
    void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
    inline int64_t lastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
    inline DescribeImageBaselineCheckResultResponseBodyBaselineResult& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


    // lowRiskItemCount Field Functions 
    bool hasLowRiskItemCount() const { return this->lowRiskItemCount_ != nullptr;};
    void deleteLowRiskItemCount() { this->lowRiskItemCount_ = nullptr;};
    inline int32_t lowRiskItemCount() const { DARABONBA_PTR_GET_DEFAULT(lowRiskItemCount_, 0) };
    inline DescribeImageBaselineCheckResultResponseBodyBaselineResult& setLowRiskItemCount(int32_t lowRiskItemCount) { DARABONBA_PTR_SET_VALUE(lowRiskItemCount_, lowRiskItemCount) };


    // middleRiskItemCount Field Functions 
    bool hasMiddleRiskItemCount() const { return this->middleRiskItemCount_ != nullptr;};
    void deleteMiddleRiskItemCount() { this->middleRiskItemCount_ = nullptr;};
    inline int32_t middleRiskItemCount() const { DARABONBA_PTR_GET_DEFAULT(middleRiskItemCount_, 0) };
    inline DescribeImageBaselineCheckResultResponseBodyBaselineResult& setMiddleRiskItemCount(int32_t middleRiskItemCount) { DARABONBA_PTR_SET_VALUE(middleRiskItemCount_, middleRiskItemCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeImageBaselineCheckResultResponseBodyBaselineResult& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The key of the image baseline type.
    std::shared_ptr<string> baselineClassAlias_ = nullptr;
    // The number of baseline check items.
    std::shared_ptr<int32_t> baselineItemCount_ = nullptr;
    // The alias of the image baseline.
    std::shared_ptr<string> baselineNameAlias_ = nullptr;
    // The key of the image baseline.
    std::shared_ptr<string> baselineNameKey_ = nullptr;
    // The severity of the image baseline. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> baselineNameLevel_ = nullptr;
    // The timestamp generated when the first scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> firstScanTime_ = nullptr;
    // The number of high-risk images that are affected.
    std::shared_ptr<int32_t> highRiskItemCount_ = nullptr;
    // The timestamp generated when the last scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> lastScanTime_ = nullptr;
    // The number of low-risk images that are affected.
    std::shared_ptr<int32_t> lowRiskItemCount_ = nullptr;
    // The number of medium-risk images that are affected.
    std::shared_ptr<int32_t> middleRiskItemCount_ = nullptr;
    // The status of the baseline risks. Valid values:
    // 
    // *   **0**: unfixed
    // *   **1**: fixed
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
