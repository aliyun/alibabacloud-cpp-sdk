// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCANBASELINEBYTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCANBASELINEBYTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListScanBaselineByTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScanBaselineByTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScanBaselines, scanBaselines_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListScanBaselineByTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScanBaselines, scanBaselines_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListScanBaselineByTaskResponseBody() = default ;
    ListScanBaselineByTaskResponseBody(const ListScanBaselineByTaskResponseBody &) = default ;
    ListScanBaselineByTaskResponseBody(ListScanBaselineByTaskResponseBody &&) = default ;
    ListScanBaselineByTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScanBaselineByTaskResponseBody() = default ;
    ListScanBaselineByTaskResponseBody& operator=(const ListScanBaselineByTaskResponseBody &) = default ;
    ListScanBaselineByTaskResponseBody& operator=(ListScanBaselineByTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScanBaselines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScanBaselines& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ScanBaselines& obj) { 
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
      ScanBaselines() = default ;
      ScanBaselines(const ScanBaselines &) = default ;
      ScanBaselines(ScanBaselines &&) = default ;
      ScanBaselines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScanBaselines() = default ;
      ScanBaselines& operator=(const ScanBaselines &) = default ;
      ScanBaselines& operator=(ScanBaselines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->baselineClassAlias_ == nullptr
        && this->baselineDetailAdvice_ == nullptr && this->baselineDetailDescription_ == nullptr && this->baselineDetailPrompt_ == nullptr && this->baselineItemCount_ == nullptr && this->baselineNameAlias_ == nullptr
        && this->baselineNameKey_ == nullptr && this->baselineNameLevel_ == nullptr && this->createTime_ == nullptr && this->firstScanTime_ == nullptr && this->highRiskItemCount_ == nullptr
        && this->lowRiskItemCount_ == nullptr && this->middleRiskItemCount_ == nullptr && this->scanTaskId_ == nullptr && this->updateTime_ == nullptr; };
      // baselineClassAlias Field Functions 
      bool hasBaselineClassAlias() const { return this->baselineClassAlias_ != nullptr;};
      void deleteBaselineClassAlias() { this->baselineClassAlias_ = nullptr;};
      inline string getBaselineClassAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineClassAlias_, "") };
      inline ScanBaselines& setBaselineClassAlias(string baselineClassAlias) { DARABONBA_PTR_SET_VALUE(baselineClassAlias_, baselineClassAlias) };


      // baselineDetailAdvice Field Functions 
      bool hasBaselineDetailAdvice() const { return this->baselineDetailAdvice_ != nullptr;};
      void deleteBaselineDetailAdvice() { this->baselineDetailAdvice_ = nullptr;};
      inline string getBaselineDetailAdvice() const { DARABONBA_PTR_GET_DEFAULT(baselineDetailAdvice_, "") };
      inline ScanBaselines& setBaselineDetailAdvice(string baselineDetailAdvice) { DARABONBA_PTR_SET_VALUE(baselineDetailAdvice_, baselineDetailAdvice) };


      // baselineDetailDescription Field Functions 
      bool hasBaselineDetailDescription() const { return this->baselineDetailDescription_ != nullptr;};
      void deleteBaselineDetailDescription() { this->baselineDetailDescription_ = nullptr;};
      inline string getBaselineDetailDescription() const { DARABONBA_PTR_GET_DEFAULT(baselineDetailDescription_, "") };
      inline ScanBaselines& setBaselineDetailDescription(string baselineDetailDescription) { DARABONBA_PTR_SET_VALUE(baselineDetailDescription_, baselineDetailDescription) };


      // baselineDetailPrompt Field Functions 
      bool hasBaselineDetailPrompt() const { return this->baselineDetailPrompt_ != nullptr;};
      void deleteBaselineDetailPrompt() { this->baselineDetailPrompt_ = nullptr;};
      inline string getBaselineDetailPrompt() const { DARABONBA_PTR_GET_DEFAULT(baselineDetailPrompt_, "") };
      inline ScanBaselines& setBaselineDetailPrompt(string baselineDetailPrompt) { DARABONBA_PTR_SET_VALUE(baselineDetailPrompt_, baselineDetailPrompt) };


      // baselineItemCount Field Functions 
      bool hasBaselineItemCount() const { return this->baselineItemCount_ != nullptr;};
      void deleteBaselineItemCount() { this->baselineItemCount_ = nullptr;};
      inline int32_t getBaselineItemCount() const { DARABONBA_PTR_GET_DEFAULT(baselineItemCount_, 0) };
      inline ScanBaselines& setBaselineItemCount(int32_t baselineItemCount) { DARABONBA_PTR_SET_VALUE(baselineItemCount_, baselineItemCount) };


      // baselineNameAlias Field Functions 
      bool hasBaselineNameAlias() const { return this->baselineNameAlias_ != nullptr;};
      void deleteBaselineNameAlias() { this->baselineNameAlias_ = nullptr;};
      inline string getBaselineNameAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineNameAlias_, "") };
      inline ScanBaselines& setBaselineNameAlias(string baselineNameAlias) { DARABONBA_PTR_SET_VALUE(baselineNameAlias_, baselineNameAlias) };


      // baselineNameKey Field Functions 
      bool hasBaselineNameKey() const { return this->baselineNameKey_ != nullptr;};
      void deleteBaselineNameKey() { this->baselineNameKey_ = nullptr;};
      inline string getBaselineNameKey() const { DARABONBA_PTR_GET_DEFAULT(baselineNameKey_, "") };
      inline ScanBaselines& setBaselineNameKey(string baselineNameKey) { DARABONBA_PTR_SET_VALUE(baselineNameKey_, baselineNameKey) };


      // baselineNameLevel Field Functions 
      bool hasBaselineNameLevel() const { return this->baselineNameLevel_ != nullptr;};
      void deleteBaselineNameLevel() { this->baselineNameLevel_ = nullptr;};
      inline string getBaselineNameLevel() const { DARABONBA_PTR_GET_DEFAULT(baselineNameLevel_, "") };
      inline ScanBaselines& setBaselineNameLevel(string baselineNameLevel) { DARABONBA_PTR_SET_VALUE(baselineNameLevel_, baselineNameLevel) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ScanBaselines& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // firstScanTime Field Functions 
      bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
      void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
      inline int64_t getFirstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
      inline ScanBaselines& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


      // highRiskItemCount Field Functions 
      bool hasHighRiskItemCount() const { return this->highRiskItemCount_ != nullptr;};
      void deleteHighRiskItemCount() { this->highRiskItemCount_ = nullptr;};
      inline int32_t getHighRiskItemCount() const { DARABONBA_PTR_GET_DEFAULT(highRiskItemCount_, 0) };
      inline ScanBaselines& setHighRiskItemCount(int32_t highRiskItemCount) { DARABONBA_PTR_SET_VALUE(highRiskItemCount_, highRiskItemCount) };


      // lowRiskItemCount Field Functions 
      bool hasLowRiskItemCount() const { return this->lowRiskItemCount_ != nullptr;};
      void deleteLowRiskItemCount() { this->lowRiskItemCount_ = nullptr;};
      inline int32_t getLowRiskItemCount() const { DARABONBA_PTR_GET_DEFAULT(lowRiskItemCount_, 0) };
      inline ScanBaselines& setLowRiskItemCount(int32_t lowRiskItemCount) { DARABONBA_PTR_SET_VALUE(lowRiskItemCount_, lowRiskItemCount) };


      // middleRiskItemCount Field Functions 
      bool hasMiddleRiskItemCount() const { return this->middleRiskItemCount_ != nullptr;};
      void deleteMiddleRiskItemCount() { this->middleRiskItemCount_ = nullptr;};
      inline int32_t getMiddleRiskItemCount() const { DARABONBA_PTR_GET_DEFAULT(middleRiskItemCount_, 0) };
      inline ScanBaselines& setMiddleRiskItemCount(int32_t middleRiskItemCount) { DARABONBA_PTR_SET_VALUE(middleRiskItemCount_, middleRiskItemCount) };


      // scanTaskId Field Functions 
      bool hasScanTaskId() const { return this->scanTaskId_ != nullptr;};
      void deleteScanTaskId() { this->scanTaskId_ = nullptr;};
      inline string getScanTaskId() const { DARABONBA_PTR_GET_DEFAULT(scanTaskId_, "") };
      inline ScanBaselines& setScanTaskId(string scanTaskId) { DARABONBA_PTR_SET_VALUE(scanTaskId_, scanTaskId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ScanBaselines& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The category to which the baseline risk belongs.
      shared_ptr<string> baselineClassAlias_ {};
      // Suggestions about how to fix the baseline risk.
      shared_ptr<string> baselineDetailAdvice_ {};
      // The description of the baseline risk.
      shared_ptr<string> baselineDetailDescription_ {};
      // The path and content of the baseline risk.
      shared_ptr<string> baselineDetailPrompt_ {};
      // The number of baseline risks.
      shared_ptr<int32_t> baselineItemCount_ {};
      // The name of the baseline risk.
      shared_ptr<string> baselineNameAlias_ {};
      // The key of the baseline name.
      shared_ptr<string> baselineNameKey_ {};
      // The severity of the baseline risk.
      shared_ptr<string> baselineNameLevel_ {};
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The time of the first scan.
      shared_ptr<int64_t> firstScanTime_ {};
      // High risk quantity.
      shared_ptr<int32_t> highRiskItemCount_ {};
      // Low risk quantity.
      shared_ptr<int32_t> lowRiskItemCount_ {};
      // Medium risk quantity.
      shared_ptr<int32_t> middleRiskItemCount_ {};
      // The ID of the image scan task.
      shared_ptr<string> scanTaskId_ {};
      // The update time.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->scanBaselines_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListScanBaselineByTaskResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListScanBaselineByTaskResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListScanBaselineByTaskResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListScanBaselineByTaskResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScanBaselineByTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanBaselines Field Functions 
    bool hasScanBaselines() const { return this->scanBaselines_ != nullptr;};
    void deleteScanBaselines() { this->scanBaselines_ = nullptr;};
    inline const vector<ListScanBaselineByTaskResponseBody::ScanBaselines> & getScanBaselines() const { DARABONBA_PTR_GET_CONST(scanBaselines_, vector<ListScanBaselineByTaskResponseBody::ScanBaselines>) };
    inline vector<ListScanBaselineByTaskResponseBody::ScanBaselines> getScanBaselines() { DARABONBA_PTR_GET(scanBaselines_, vector<ListScanBaselineByTaskResponseBody::ScanBaselines>) };
    inline ListScanBaselineByTaskResponseBody& setScanBaselines(const vector<ListScanBaselineByTaskResponseBody::ScanBaselines> & scanBaselines) { DARABONBA_PTR_SET_VALUE(scanBaselines_, scanBaselines) };
    inline ListScanBaselineByTaskResponseBody& setScanBaselines(vector<ListScanBaselineByTaskResponseBody::ScanBaselines> && scanBaselines) { DARABONBA_PTR_SET_RVALUE(scanBaselines_, scanBaselines) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListScanBaselineByTaskResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The return value.
    shared_ptr<int32_t> code_ {};
    // Indicates whether the API request was successful. Valid values:
    // 
    // *   `true`: successful
    // *   `false`: failed
    shared_ptr<bool> isSuccess_ {};
    // The page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The scanned baseline risks.
    shared_ptr<vector<ListScanBaselineByTaskResponseBody::ScanBaselines>> scanBaselines_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
