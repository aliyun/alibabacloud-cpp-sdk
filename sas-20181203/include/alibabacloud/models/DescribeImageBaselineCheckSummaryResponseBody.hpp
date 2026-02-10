// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINECHECKSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINECHECKSUMMARYRESPONSEBODY_HPP_
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
  class DescribeImageBaselineCheckSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineCheckSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineResultSummary, baselineResultSummary_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineCheckSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineResultSummary, baselineResultSummary_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageBaselineCheckSummaryResponseBody() = default ;
    DescribeImageBaselineCheckSummaryResponseBody(const DescribeImageBaselineCheckSummaryResponseBody &) = default ;
    DescribeImageBaselineCheckSummaryResponseBody(DescribeImageBaselineCheckSummaryResponseBody &&) = default ;
    DescribeImageBaselineCheckSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineCheckSummaryResponseBody() = default ;
    DescribeImageBaselineCheckSummaryResponseBody& operator=(const DescribeImageBaselineCheckSummaryResponseBody &) = default ;
    DescribeImageBaselineCheckSummaryResponseBody& operator=(DescribeImageBaselineCheckSummaryResponseBody &&) = default ;
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
      // The number of entries returned per page. Default value: **20**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class BaselineResultSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BaselineResultSummary& obj) { 
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
      friend void from_json(const Darabonba::Json& j, BaselineResultSummary& obj) { 
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
      BaselineResultSummary() = default ;
      BaselineResultSummary(const BaselineResultSummary &) = default ;
      BaselineResultSummary(BaselineResultSummary &&) = default ;
      BaselineResultSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BaselineResultSummary() = default ;
      BaselineResultSummary& operator=(const BaselineResultSummary &) = default ;
      BaselineResultSummary& operator=(BaselineResultSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->baselineClassAlias_ == nullptr
        && this->baselineClassKey_ == nullptr && this->baselineNameAlias_ == nullptr && this->baselineNameKey_ == nullptr && this->baselineNameLevel_ == nullptr && this->firstScanTime_ == nullptr
        && this->highRiskImage_ == nullptr && this->lastScanTime_ == nullptr && this->lowRiskImage_ == nullptr && this->middleRiskImage_ == nullptr && this->status_ == nullptr; };
      // baselineClassAlias Field Functions 
      bool hasBaselineClassAlias() const { return this->baselineClassAlias_ != nullptr;};
      void deleteBaselineClassAlias() { this->baselineClassAlias_ = nullptr;};
      inline string getBaselineClassAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineClassAlias_, "") };
      inline BaselineResultSummary& setBaselineClassAlias(string baselineClassAlias) { DARABONBA_PTR_SET_VALUE(baselineClassAlias_, baselineClassAlias) };


      // baselineClassKey Field Functions 
      bool hasBaselineClassKey() const { return this->baselineClassKey_ != nullptr;};
      void deleteBaselineClassKey() { this->baselineClassKey_ = nullptr;};
      inline string getBaselineClassKey() const { DARABONBA_PTR_GET_DEFAULT(baselineClassKey_, "") };
      inline BaselineResultSummary& setBaselineClassKey(string baselineClassKey) { DARABONBA_PTR_SET_VALUE(baselineClassKey_, baselineClassKey) };


      // baselineNameAlias Field Functions 
      bool hasBaselineNameAlias() const { return this->baselineNameAlias_ != nullptr;};
      void deleteBaselineNameAlias() { this->baselineNameAlias_ = nullptr;};
      inline string getBaselineNameAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineNameAlias_, "") };
      inline BaselineResultSummary& setBaselineNameAlias(string baselineNameAlias) { DARABONBA_PTR_SET_VALUE(baselineNameAlias_, baselineNameAlias) };


      // baselineNameKey Field Functions 
      bool hasBaselineNameKey() const { return this->baselineNameKey_ != nullptr;};
      void deleteBaselineNameKey() { this->baselineNameKey_ = nullptr;};
      inline string getBaselineNameKey() const { DARABONBA_PTR_GET_DEFAULT(baselineNameKey_, "") };
      inline BaselineResultSummary& setBaselineNameKey(string baselineNameKey) { DARABONBA_PTR_SET_VALUE(baselineNameKey_, baselineNameKey) };


      // baselineNameLevel Field Functions 
      bool hasBaselineNameLevel() const { return this->baselineNameLevel_ != nullptr;};
      void deleteBaselineNameLevel() { this->baselineNameLevel_ = nullptr;};
      inline string getBaselineNameLevel() const { DARABONBA_PTR_GET_DEFAULT(baselineNameLevel_, "") };
      inline BaselineResultSummary& setBaselineNameLevel(string baselineNameLevel) { DARABONBA_PTR_SET_VALUE(baselineNameLevel_, baselineNameLevel) };


      // firstScanTime Field Functions 
      bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
      void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
      inline int64_t getFirstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
      inline BaselineResultSummary& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


      // highRiskImage Field Functions 
      bool hasHighRiskImage() const { return this->highRiskImage_ != nullptr;};
      void deleteHighRiskImage() { this->highRiskImage_ = nullptr;};
      inline int32_t getHighRiskImage() const { DARABONBA_PTR_GET_DEFAULT(highRiskImage_, 0) };
      inline BaselineResultSummary& setHighRiskImage(int32_t highRiskImage) { DARABONBA_PTR_SET_VALUE(highRiskImage_, highRiskImage) };


      // lastScanTime Field Functions 
      bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
      void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
      inline int64_t getLastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
      inline BaselineResultSummary& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


      // lowRiskImage Field Functions 
      bool hasLowRiskImage() const { return this->lowRiskImage_ != nullptr;};
      void deleteLowRiskImage() { this->lowRiskImage_ = nullptr;};
      inline int32_t getLowRiskImage() const { DARABONBA_PTR_GET_DEFAULT(lowRiskImage_, 0) };
      inline BaselineResultSummary& setLowRiskImage(int32_t lowRiskImage) { DARABONBA_PTR_SET_VALUE(lowRiskImage_, lowRiskImage) };


      // middleRiskImage Field Functions 
      bool hasMiddleRiskImage() const { return this->middleRiskImage_ != nullptr;};
      void deleteMiddleRiskImage() { this->middleRiskImage_ = nullptr;};
      inline int32_t getMiddleRiskImage() const { DARABONBA_PTR_GET_DEFAULT(middleRiskImage_, 0) };
      inline BaselineResultSummary& setMiddleRiskImage(int32_t middleRiskImage) { DARABONBA_PTR_SET_VALUE(middleRiskImage_, middleRiskImage) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline BaselineResultSummary& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The category of the baseline.
      shared_ptr<string> baselineClassAlias_ {};
      // The keyword of the baseline category.
      shared_ptr<string> baselineClassKey_ {};
      // The name of the baseline.
      shared_ptr<string> baselineNameAlias_ {};
      // The keyword of the baseline name.
      shared_ptr<string> baselineNameKey_ {};
      // The severity of the image baseline. Valid values:
      // 
      // *   **high**
      // *   **medium**
      // *   **low**
      shared_ptr<string> baselineNameLevel_ {};
      // The timestamp generated when the first scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> firstScanTime_ {};
      // The number of images on which **high** baseline risks are detected.
      shared_ptr<int32_t> highRiskImage_ {};
      // The timestamp generated when the last scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> lastScanTime_ {};
      // The number of images on which **low** baseline risks are detected.
      shared_ptr<int32_t> lowRiskImage_ {};
      // The number of images on which **medium** baseline risks are detected.
      shared_ptr<int32_t> middleRiskImage_ {};
      // The status of the baseline risks. Valid values:
      // 
      // *   **0**: unfixed
      // *   **1**: fixed
      // *   **2**: pending verification
      // *   **3**: fixing failed
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->baselineResultSummary_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // baselineResultSummary Field Functions 
    bool hasBaselineResultSummary() const { return this->baselineResultSummary_ != nullptr;};
    void deleteBaselineResultSummary() { this->baselineResultSummary_ = nullptr;};
    inline const vector<DescribeImageBaselineCheckSummaryResponseBody::BaselineResultSummary> & getBaselineResultSummary() const { DARABONBA_PTR_GET_CONST(baselineResultSummary_, vector<DescribeImageBaselineCheckSummaryResponseBody::BaselineResultSummary>) };
    inline vector<DescribeImageBaselineCheckSummaryResponseBody::BaselineResultSummary> getBaselineResultSummary() { DARABONBA_PTR_GET(baselineResultSummary_, vector<DescribeImageBaselineCheckSummaryResponseBody::BaselineResultSummary>) };
    inline DescribeImageBaselineCheckSummaryResponseBody& setBaselineResultSummary(const vector<DescribeImageBaselineCheckSummaryResponseBody::BaselineResultSummary> & baselineResultSummary) { DARABONBA_PTR_SET_VALUE(baselineResultSummary_, baselineResultSummary) };
    inline DescribeImageBaselineCheckSummaryResponseBody& setBaselineResultSummary(vector<DescribeImageBaselineCheckSummaryResponseBody::BaselineResultSummary> && baselineResultSummary) { DARABONBA_PTR_SET_RVALUE(baselineResultSummary_, baselineResultSummary) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageBaselineCheckSummaryResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageBaselineCheckSummaryResponseBody::PageInfo) };
    inline DescribeImageBaselineCheckSummaryResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageBaselineCheckSummaryResponseBody::PageInfo) };
    inline DescribeImageBaselineCheckSummaryResponseBody& setPageInfo(const DescribeImageBaselineCheckSummaryResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageBaselineCheckSummaryResponseBody& setPageInfo(DescribeImageBaselineCheckSummaryResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageBaselineCheckSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the check results of image baselines.
    shared_ptr<vector<DescribeImageBaselineCheckSummaryResponseBody::BaselineResultSummary>> baselineResultSummary_ {};
    // The pagination information.
    shared_ptr<DescribeImageBaselineCheckSummaryResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
