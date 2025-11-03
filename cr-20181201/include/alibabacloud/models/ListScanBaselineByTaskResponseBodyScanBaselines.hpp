// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCANBASELINEBYTASKRESPONSEBODYSCANBASELINES_HPP_
#define ALIBABACLOUD_MODELS_LISTSCANBASELINEBYTASKRESPONSEBODYSCANBASELINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListScanBaselineByTaskResponseBodyScanBaselines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScanBaselineByTaskResponseBodyScanBaselines& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineClassAlias, baselineClassAlias_);
      DARABONBA_PTR_TO_JSON(BaselineDetailAdvice, baselineDetailAdvice_);
      DARABONBA_PTR_TO_JSON(BaselineDetailDescription, baselineDetailDescription_);
      DARABONBA_PTR_TO_JSON(BaselineDetailPrompt, baselineDetailPrompt_);
      DARABONBA_PTR_TO_JSON(BaselineItemCount, baselineItemCount_);
      DARABONBA_PTR_TO_JSON(BaselineNameAlias, baselineNameAlias_);
      DARABONBA_PTR_TO_JSON(BaselineNameKey, baselineNameKey_);
      DARABONBA_PTR_TO_JSON(BaselineNameLevel, baselineNameLevel_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FirstScanTime, firstScanTime_);
      DARABONBA_PTR_TO_JSON(HighRiskItemCount, highRiskItemCount_);
      DARABONBA_PTR_TO_JSON(LowRiskItemCount, lowRiskItemCount_);
      DARABONBA_PTR_TO_JSON(MiddleRiskItemCount, middleRiskItemCount_);
      DARABONBA_PTR_TO_JSON(ScanTaskId, scanTaskId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListScanBaselineByTaskResponseBodyScanBaselines& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineClassAlias, baselineClassAlias_);
      DARABONBA_PTR_FROM_JSON(BaselineDetailAdvice, baselineDetailAdvice_);
      DARABONBA_PTR_FROM_JSON(BaselineDetailDescription, baselineDetailDescription_);
      DARABONBA_PTR_FROM_JSON(BaselineDetailPrompt, baselineDetailPrompt_);
      DARABONBA_PTR_FROM_JSON(BaselineItemCount, baselineItemCount_);
      DARABONBA_PTR_FROM_JSON(BaselineNameAlias, baselineNameAlias_);
      DARABONBA_PTR_FROM_JSON(BaselineNameKey, baselineNameKey_);
      DARABONBA_PTR_FROM_JSON(BaselineNameLevel, baselineNameLevel_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FirstScanTime, firstScanTime_);
      DARABONBA_PTR_FROM_JSON(HighRiskItemCount, highRiskItemCount_);
      DARABONBA_PTR_FROM_JSON(LowRiskItemCount, lowRiskItemCount_);
      DARABONBA_PTR_FROM_JSON(MiddleRiskItemCount, middleRiskItemCount_);
      DARABONBA_PTR_FROM_JSON(ScanTaskId, scanTaskId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListScanBaselineByTaskResponseBodyScanBaselines() = default ;
    ListScanBaselineByTaskResponseBodyScanBaselines(const ListScanBaselineByTaskResponseBodyScanBaselines &) = default ;
    ListScanBaselineByTaskResponseBodyScanBaselines(ListScanBaselineByTaskResponseBodyScanBaselines &&) = default ;
    ListScanBaselineByTaskResponseBodyScanBaselines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScanBaselineByTaskResponseBodyScanBaselines() = default ;
    ListScanBaselineByTaskResponseBodyScanBaselines& operator=(const ListScanBaselineByTaskResponseBodyScanBaselines &) = default ;
    ListScanBaselineByTaskResponseBodyScanBaselines& operator=(ListScanBaselineByTaskResponseBodyScanBaselines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineClassAlias_ == nullptr
        && return this->baselineDetailAdvice_ == nullptr && return this->baselineDetailDescription_ == nullptr && return this->baselineDetailPrompt_ == nullptr && return this->baselineItemCount_ == nullptr && return this->baselineNameAlias_ == nullptr
        && return this->baselineNameKey_ == nullptr && return this->baselineNameLevel_ == nullptr && return this->createTime_ == nullptr && return this->firstScanTime_ == nullptr && return this->highRiskItemCount_ == nullptr
        && return this->lowRiskItemCount_ == nullptr && return this->middleRiskItemCount_ == nullptr && return this->scanTaskId_ == nullptr && return this->updateTime_ == nullptr; };
    // baselineClassAlias Field Functions 
    bool hasBaselineClassAlias() const { return this->baselineClassAlias_ != nullptr;};
    void deleteBaselineClassAlias() { this->baselineClassAlias_ = nullptr;};
    inline string baselineClassAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineClassAlias_, "") };
    inline ListScanBaselineByTaskResponseBodyScanBaselines& setBaselineClassAlias(string baselineClassAlias) { DARABONBA_PTR_SET_VALUE(baselineClassAlias_, baselineClassAlias) };


    // baselineDetailAdvice Field Functions 
    bool hasBaselineDetailAdvice() const { return this->baselineDetailAdvice_ != nullptr;};
    void deleteBaselineDetailAdvice() { this->baselineDetailAdvice_ = nullptr;};
    inline string baselineDetailAdvice() const { DARABONBA_PTR_GET_DEFAULT(baselineDetailAdvice_, "") };
    inline ListScanBaselineByTaskResponseBodyScanBaselines& setBaselineDetailAdvice(string baselineDetailAdvice) { DARABONBA_PTR_SET_VALUE(baselineDetailAdvice_, baselineDetailAdvice) };


    // baselineDetailDescription Field Functions 
    bool hasBaselineDetailDescription() const { return this->baselineDetailDescription_ != nullptr;};
    void deleteBaselineDetailDescription() { this->baselineDetailDescription_ = nullptr;};
    inline string baselineDetailDescription() const { DARABONBA_PTR_GET_DEFAULT(baselineDetailDescription_, "") };
    inline ListScanBaselineByTaskResponseBodyScanBaselines& setBaselineDetailDescription(string baselineDetailDescription) { DARABONBA_PTR_SET_VALUE(baselineDetailDescription_, baselineDetailDescription) };


    // baselineDetailPrompt Field Functions 
    bool hasBaselineDetailPrompt() const { return this->baselineDetailPrompt_ != nullptr;};
    void deleteBaselineDetailPrompt() { this->baselineDetailPrompt_ = nullptr;};
    inline string baselineDetailPrompt() const { DARABONBA_PTR_GET_DEFAULT(baselineDetailPrompt_, "") };
    inline ListScanBaselineByTaskResponseBodyScanBaselines& setBaselineDetailPrompt(string baselineDetailPrompt) { DARABONBA_PTR_SET_VALUE(baselineDetailPrompt_, baselineDetailPrompt) };


    // baselineItemCount Field Functions 
    bool hasBaselineItemCount() const { return this->baselineItemCount_ != nullptr;};
    void deleteBaselineItemCount() { this->baselineItemCount_ = nullptr;};
    inline int32_t baselineItemCount() const { DARABONBA_PTR_GET_DEFAULT(baselineItemCount_, 0) };
    inline ListScanBaselineByTaskResponseBodyScanBaselines& setBaselineItemCount(int32_t baselineItemCount) { DARABONBA_PTR_SET_VALUE(baselineItemCount_, baselineItemCount) };


    // baselineNameAlias Field Functions 
    bool hasBaselineNameAlias() const { return this->baselineNameAlias_ != nullptr;};
    void deleteBaselineNameAlias() { this->baselineNameAlias_ = nullptr;};
    inline string baselineNameAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineNameAlias_, "") };
    inline ListScanBaselineByTaskResponseBodyScanBaselines& setBaselineNameAlias(string baselineNameAlias) { DARABONBA_PTR_SET_VALUE(baselineNameAlias_, baselineNameAlias) };


    // baselineNameKey Field Functions 
    bool hasBaselineNameKey() const { return this->baselineNameKey_ != nullptr;};
    void deleteBaselineNameKey() { this->baselineNameKey_ = nullptr;};
    inline string baselineNameKey() const { DARABONBA_PTR_GET_DEFAULT(baselineNameKey_, "") };
    inline ListScanBaselineByTaskResponseBodyScanBaselines& setBaselineNameKey(string baselineNameKey) { DARABONBA_PTR_SET_VALUE(baselineNameKey_, baselineNameKey) };


    // baselineNameLevel Field Functions 
    bool hasBaselineNameLevel() const { return this->baselineNameLevel_ != nullptr;};
    void deleteBaselineNameLevel() { this->baselineNameLevel_ = nullptr;};
    inline string baselineNameLevel() const { DARABONBA_PTR_GET_DEFAULT(baselineNameLevel_, "") };
    inline ListScanBaselineByTaskResponseBodyScanBaselines& setBaselineNameLevel(string baselineNameLevel) { DARABONBA_PTR_SET_VALUE(baselineNameLevel_, baselineNameLevel) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListScanBaselineByTaskResponseBodyScanBaselines& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // firstScanTime Field Functions 
    bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
    void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
    inline int64_t firstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
    inline ListScanBaselineByTaskResponseBodyScanBaselines& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


    // highRiskItemCount Field Functions 
    bool hasHighRiskItemCount() const { return this->highRiskItemCount_ != nullptr;};
    void deleteHighRiskItemCount() { this->highRiskItemCount_ = nullptr;};
    inline int32_t highRiskItemCount() const { DARABONBA_PTR_GET_DEFAULT(highRiskItemCount_, 0) };
    inline ListScanBaselineByTaskResponseBodyScanBaselines& setHighRiskItemCount(int32_t highRiskItemCount) { DARABONBA_PTR_SET_VALUE(highRiskItemCount_, highRiskItemCount) };


    // lowRiskItemCount Field Functions 
    bool hasLowRiskItemCount() const { return this->lowRiskItemCount_ != nullptr;};
    void deleteLowRiskItemCount() { this->lowRiskItemCount_ = nullptr;};
    inline int32_t lowRiskItemCount() const { DARABONBA_PTR_GET_DEFAULT(lowRiskItemCount_, 0) };
    inline ListScanBaselineByTaskResponseBodyScanBaselines& setLowRiskItemCount(int32_t lowRiskItemCount) { DARABONBA_PTR_SET_VALUE(lowRiskItemCount_, lowRiskItemCount) };


    // middleRiskItemCount Field Functions 
    bool hasMiddleRiskItemCount() const { return this->middleRiskItemCount_ != nullptr;};
    void deleteMiddleRiskItemCount() { this->middleRiskItemCount_ = nullptr;};
    inline int32_t middleRiskItemCount() const { DARABONBA_PTR_GET_DEFAULT(middleRiskItemCount_, 0) };
    inline ListScanBaselineByTaskResponseBodyScanBaselines& setMiddleRiskItemCount(int32_t middleRiskItemCount) { DARABONBA_PTR_SET_VALUE(middleRiskItemCount_, middleRiskItemCount) };


    // scanTaskId Field Functions 
    bool hasScanTaskId() const { return this->scanTaskId_ != nullptr;};
    void deleteScanTaskId() { this->scanTaskId_ = nullptr;};
    inline string scanTaskId() const { DARABONBA_PTR_GET_DEFAULT(scanTaskId_, "") };
    inline ListScanBaselineByTaskResponseBodyScanBaselines& setScanTaskId(string scanTaskId) { DARABONBA_PTR_SET_VALUE(scanTaskId_, scanTaskId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListScanBaselineByTaskResponseBodyScanBaselines& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The category to which the baseline risk belongs.
    std::shared_ptr<string> baselineClassAlias_ = nullptr;
    // Suggestions about how to fix the baseline risk.
    std::shared_ptr<string> baselineDetailAdvice_ = nullptr;
    // The description of the baseline risk.
    std::shared_ptr<string> baselineDetailDescription_ = nullptr;
    // The path and content of the baseline risk.
    std::shared_ptr<string> baselineDetailPrompt_ = nullptr;
    // The number of baseline risks.
    std::shared_ptr<int32_t> baselineItemCount_ = nullptr;
    // The name of the baseline risk.
    std::shared_ptr<string> baselineNameAlias_ = nullptr;
    // The key of the baseline name.
    std::shared_ptr<string> baselineNameKey_ = nullptr;
    // The severity of the baseline risk.
    std::shared_ptr<string> baselineNameLevel_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The time of the first scan.
    std::shared_ptr<int64_t> firstScanTime_ = nullptr;
    // High risk quantity.
    std::shared_ptr<int32_t> highRiskItemCount_ = nullptr;
    // Low risk quantity.
    std::shared_ptr<int32_t> lowRiskItemCount_ = nullptr;
    // Medium risk quantity.
    std::shared_ptr<int32_t> middleRiskItemCount_ = nullptr;
    // The ID of the image scan task.
    std::shared_ptr<string> scanTaskId_ = nullptr;
    // The update time.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
