// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINECHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINECHECKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineCheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineCheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineResult, baselineResult_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineCheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineResult, baselineResult_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageBaselineCheckResultResponseBody() = default ;
    DescribeImageBaselineCheckResultResponseBody(const DescribeImageBaselineCheckResultResponseBody &) = default ;
    DescribeImageBaselineCheckResultResponseBody(DescribeImageBaselineCheckResultResponseBody &&) = default ;
    DescribeImageBaselineCheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineCheckResultResponseBody() = default ;
    DescribeImageBaselineCheckResultResponseBody& operator=(const DescribeImageBaselineCheckResultResponseBody &) = default ;
    DescribeImageBaselineCheckResultResponseBody& operator=(DescribeImageBaselineCheckResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class BaselineResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BaselineResult& obj) { 
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
      friend void from_json(const Darabonba::Json& j, BaselineResult& obj) { 
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
      BaselineResult() = default ;
      BaselineResult(const BaselineResult &) = default ;
      BaselineResult(BaselineResult &&) = default ;
      BaselineResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BaselineResult() = default ;
      BaselineResult& operator=(const BaselineResult &) = default ;
      BaselineResult& operator=(BaselineResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->baselineClassAlias_ == nullptr
        && this->baselineItemCount_ == nullptr && this->baselineNameAlias_ == nullptr && this->baselineNameKey_ == nullptr && this->baselineNameLevel_ == nullptr && this->firstScanTime_ == nullptr
        && this->highRiskItemCount_ == nullptr && this->lastScanTime_ == nullptr && this->lowRiskItemCount_ == nullptr && this->middleRiskItemCount_ == nullptr && this->status_ == nullptr; };
      // baselineClassAlias Field Functions 
      bool hasBaselineClassAlias() const { return this->baselineClassAlias_ != nullptr;};
      void deleteBaselineClassAlias() { this->baselineClassAlias_ = nullptr;};
      inline string getBaselineClassAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineClassAlias_, "") };
      inline BaselineResult& setBaselineClassAlias(string baselineClassAlias) { DARABONBA_PTR_SET_VALUE(baselineClassAlias_, baselineClassAlias) };


      // baselineItemCount Field Functions 
      bool hasBaselineItemCount() const { return this->baselineItemCount_ != nullptr;};
      void deleteBaselineItemCount() { this->baselineItemCount_ = nullptr;};
      inline int32_t getBaselineItemCount() const { DARABONBA_PTR_GET_DEFAULT(baselineItemCount_, 0) };
      inline BaselineResult& setBaselineItemCount(int32_t baselineItemCount) { DARABONBA_PTR_SET_VALUE(baselineItemCount_, baselineItemCount) };


      // baselineNameAlias Field Functions 
      bool hasBaselineNameAlias() const { return this->baselineNameAlias_ != nullptr;};
      void deleteBaselineNameAlias() { this->baselineNameAlias_ = nullptr;};
      inline string getBaselineNameAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineNameAlias_, "") };
      inline BaselineResult& setBaselineNameAlias(string baselineNameAlias) { DARABONBA_PTR_SET_VALUE(baselineNameAlias_, baselineNameAlias) };


      // baselineNameKey Field Functions 
      bool hasBaselineNameKey() const { return this->baselineNameKey_ != nullptr;};
      void deleteBaselineNameKey() { this->baselineNameKey_ = nullptr;};
      inline string getBaselineNameKey() const { DARABONBA_PTR_GET_DEFAULT(baselineNameKey_, "") };
      inline BaselineResult& setBaselineNameKey(string baselineNameKey) { DARABONBA_PTR_SET_VALUE(baselineNameKey_, baselineNameKey) };


      // baselineNameLevel Field Functions 
      bool hasBaselineNameLevel() const { return this->baselineNameLevel_ != nullptr;};
      void deleteBaselineNameLevel() { this->baselineNameLevel_ = nullptr;};
      inline string getBaselineNameLevel() const { DARABONBA_PTR_GET_DEFAULT(baselineNameLevel_, "") };
      inline BaselineResult& setBaselineNameLevel(string baselineNameLevel) { DARABONBA_PTR_SET_VALUE(baselineNameLevel_, baselineNameLevel) };


      // firstScanTime Field Functions 
      bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
      void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
      inline int64_t getFirstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
      inline BaselineResult& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


      // highRiskItemCount Field Functions 
      bool hasHighRiskItemCount() const { return this->highRiskItemCount_ != nullptr;};
      void deleteHighRiskItemCount() { this->highRiskItemCount_ = nullptr;};
      inline int32_t getHighRiskItemCount() const { DARABONBA_PTR_GET_DEFAULT(highRiskItemCount_, 0) };
      inline BaselineResult& setHighRiskItemCount(int32_t highRiskItemCount) { DARABONBA_PTR_SET_VALUE(highRiskItemCount_, highRiskItemCount) };


      // lastScanTime Field Functions 
      bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
      void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
      inline int64_t getLastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
      inline BaselineResult& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


      // lowRiskItemCount Field Functions 
      bool hasLowRiskItemCount() const { return this->lowRiskItemCount_ != nullptr;};
      void deleteLowRiskItemCount() { this->lowRiskItemCount_ = nullptr;};
      inline int32_t getLowRiskItemCount() const { DARABONBA_PTR_GET_DEFAULT(lowRiskItemCount_, 0) };
      inline BaselineResult& setLowRiskItemCount(int32_t lowRiskItemCount) { DARABONBA_PTR_SET_VALUE(lowRiskItemCount_, lowRiskItemCount) };


      // middleRiskItemCount Field Functions 
      bool hasMiddleRiskItemCount() const { return this->middleRiskItemCount_ != nullptr;};
      void deleteMiddleRiskItemCount() { this->middleRiskItemCount_ = nullptr;};
      inline int32_t getMiddleRiskItemCount() const { DARABONBA_PTR_GET_DEFAULT(middleRiskItemCount_, 0) };
      inline BaselineResult& setMiddleRiskItemCount(int32_t middleRiskItemCount) { DARABONBA_PTR_SET_VALUE(middleRiskItemCount_, middleRiskItemCount) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline BaselineResult& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The key of the image baseline type.
      shared_ptr<string> baselineClassAlias_ {};
      // The number of baseline check items.
      shared_ptr<int32_t> baselineItemCount_ {};
      // The alias of the image baseline.
      shared_ptr<string> baselineNameAlias_ {};
      // The key of the image baseline.
      shared_ptr<string> baselineNameKey_ {};
      // The severity of the image baseline. Valid values:
      // 
      // *   **high**
      // *   **medium**
      // *   **low**
      shared_ptr<string> baselineNameLevel_ {};
      // The timestamp generated when the first scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> firstScanTime_ {};
      // The number of high-risk images that are affected.
      shared_ptr<int32_t> highRiskItemCount_ {};
      // The timestamp generated when the last scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> lastScanTime_ {};
      // The number of low-risk images that are affected.
      shared_ptr<int32_t> lowRiskItemCount_ {};
      // The number of medium-risk images that are affected.
      shared_ptr<int32_t> middleRiskItemCount_ {};
      // The status of the baseline risks. Valid values:
      // 
      // *   **0**: unfixed
      // *   **1**: fixed
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->baselineResult_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // baselineResult Field Functions 
    bool hasBaselineResult() const { return this->baselineResult_ != nullptr;};
    void deleteBaselineResult() { this->baselineResult_ = nullptr;};
    inline const vector<DescribeImageBaselineCheckResultResponseBody::BaselineResult> & getBaselineResult() const { DARABONBA_PTR_GET_CONST(baselineResult_, vector<DescribeImageBaselineCheckResultResponseBody::BaselineResult>) };
    inline vector<DescribeImageBaselineCheckResultResponseBody::BaselineResult> getBaselineResult() { DARABONBA_PTR_GET(baselineResult_, vector<DescribeImageBaselineCheckResultResponseBody::BaselineResult>) };
    inline DescribeImageBaselineCheckResultResponseBody& setBaselineResult(const vector<DescribeImageBaselineCheckResultResponseBody::BaselineResult> & baselineResult) { DARABONBA_PTR_SET_VALUE(baselineResult_, baselineResult) };
    inline DescribeImageBaselineCheckResultResponseBody& setBaselineResult(vector<DescribeImageBaselineCheckResultResponseBody::BaselineResult> && baselineResult) { DARABONBA_PTR_SET_RVALUE(baselineResult_, baselineResult) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageBaselineCheckResultResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageBaselineCheckResultResponseBody::PageInfo) };
    inline DescribeImageBaselineCheckResultResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageBaselineCheckResultResponseBody::PageInfo) };
    inline DescribeImageBaselineCheckResultResponseBody& setPageInfo(const DescribeImageBaselineCheckResultResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageBaselineCheckResultResponseBody& setPageInfo(DescribeImageBaselineCheckResultResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageBaselineCheckResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the check results of image baselines.
    shared_ptr<vector<DescribeImageBaselineCheckResultResponseBody::BaselineResult>> baselineResult_ {};
    // The pagination information.
    shared_ptr<DescribeImageBaselineCheckResultResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
