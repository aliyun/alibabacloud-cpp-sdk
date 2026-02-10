// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINEITEMLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINEITEMLISTRESPONSEBODY_HPP_
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
  class DescribeImageBaselineItemListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineItemListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineItemInfos, baselineItemInfos_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineItemListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineItemInfos, baselineItemInfos_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageBaselineItemListResponseBody() = default ;
    DescribeImageBaselineItemListResponseBody(const DescribeImageBaselineItemListResponseBody &) = default ;
    DescribeImageBaselineItemListResponseBody(DescribeImageBaselineItemListResponseBody &&) = default ;
    DescribeImageBaselineItemListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineItemListResponseBody() = default ;
    DescribeImageBaselineItemListResponseBody& operator=(const DescribeImageBaselineItemListResponseBody &) = default ;
    DescribeImageBaselineItemListResponseBody& operator=(DescribeImageBaselineItemListResponseBody &&) = default ;
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

    class BaselineItemInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BaselineItemInfos& obj) { 
        DARABONBA_PTR_TO_JSON(BaselineClassAlias, baselineClassAlias_);
        DARABONBA_PTR_TO_JSON(BaselineClassKey, baselineClassKey_);
        DARABONBA_PTR_TO_JSON(BaselineItemAlias, baselineItemAlias_);
        DARABONBA_PTR_TO_JSON(BaselineItemKey, baselineItemKey_);
        DARABONBA_PTR_TO_JSON(BaselineNameAlias, baselineNameAlias_);
        DARABONBA_PTR_TO_JSON(BaselineNameKey, baselineNameKey_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
      };
      friend void from_json(const Darabonba::Json& j, BaselineItemInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(BaselineClassAlias, baselineClassAlias_);
        DARABONBA_PTR_FROM_JSON(BaselineClassKey, baselineClassKey_);
        DARABONBA_PTR_FROM_JSON(BaselineItemAlias, baselineItemAlias_);
        DARABONBA_PTR_FROM_JSON(BaselineItemKey, baselineItemKey_);
        DARABONBA_PTR_FROM_JSON(BaselineNameAlias, baselineNameAlias_);
        DARABONBA_PTR_FROM_JSON(BaselineNameKey, baselineNameKey_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
      };
      BaselineItemInfos() = default ;
      BaselineItemInfos(const BaselineItemInfos &) = default ;
      BaselineItemInfos(BaselineItemInfos &&) = default ;
      BaselineItemInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BaselineItemInfos() = default ;
      BaselineItemInfos& operator=(const BaselineItemInfos &) = default ;
      BaselineItemInfos& operator=(BaselineItemInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->baselineClassAlias_ == nullptr
        && this->baselineClassKey_ == nullptr && this->baselineItemAlias_ == nullptr && this->baselineItemKey_ == nullptr && this->baselineNameAlias_ == nullptr && this->baselineNameKey_ == nullptr
        && this->status_ == nullptr && this->whiteList_ == nullptr; };
      // baselineClassAlias Field Functions 
      bool hasBaselineClassAlias() const { return this->baselineClassAlias_ != nullptr;};
      void deleteBaselineClassAlias() { this->baselineClassAlias_ = nullptr;};
      inline string getBaselineClassAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineClassAlias_, "") };
      inline BaselineItemInfos& setBaselineClassAlias(string baselineClassAlias) { DARABONBA_PTR_SET_VALUE(baselineClassAlias_, baselineClassAlias) };


      // baselineClassKey Field Functions 
      bool hasBaselineClassKey() const { return this->baselineClassKey_ != nullptr;};
      void deleteBaselineClassKey() { this->baselineClassKey_ = nullptr;};
      inline string getBaselineClassKey() const { DARABONBA_PTR_GET_DEFAULT(baselineClassKey_, "") };
      inline BaselineItemInfos& setBaselineClassKey(string baselineClassKey) { DARABONBA_PTR_SET_VALUE(baselineClassKey_, baselineClassKey) };


      // baselineItemAlias Field Functions 
      bool hasBaselineItemAlias() const { return this->baselineItemAlias_ != nullptr;};
      void deleteBaselineItemAlias() { this->baselineItemAlias_ = nullptr;};
      inline string getBaselineItemAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineItemAlias_, "") };
      inline BaselineItemInfos& setBaselineItemAlias(string baselineItemAlias) { DARABONBA_PTR_SET_VALUE(baselineItemAlias_, baselineItemAlias) };


      // baselineItemKey Field Functions 
      bool hasBaselineItemKey() const { return this->baselineItemKey_ != nullptr;};
      void deleteBaselineItemKey() { this->baselineItemKey_ = nullptr;};
      inline string getBaselineItemKey() const { DARABONBA_PTR_GET_DEFAULT(baselineItemKey_, "") };
      inline BaselineItemInfos& setBaselineItemKey(string baselineItemKey) { DARABONBA_PTR_SET_VALUE(baselineItemKey_, baselineItemKey) };


      // baselineNameAlias Field Functions 
      bool hasBaselineNameAlias() const { return this->baselineNameAlias_ != nullptr;};
      void deleteBaselineNameAlias() { this->baselineNameAlias_ = nullptr;};
      inline string getBaselineNameAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineNameAlias_, "") };
      inline BaselineItemInfos& setBaselineNameAlias(string baselineNameAlias) { DARABONBA_PTR_SET_VALUE(baselineNameAlias_, baselineNameAlias) };


      // baselineNameKey Field Functions 
      bool hasBaselineNameKey() const { return this->baselineNameKey_ != nullptr;};
      void deleteBaselineNameKey() { this->baselineNameKey_ = nullptr;};
      inline string getBaselineNameKey() const { DARABONBA_PTR_GET_DEFAULT(baselineNameKey_, "") };
      inline BaselineItemInfos& setBaselineNameKey(string baselineNameKey) { DARABONBA_PTR_SET_VALUE(baselineNameKey_, baselineNameKey) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline BaselineItemInfos& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // whiteList Field Functions 
      bool hasWhiteList() const { return this->whiteList_ != nullptr;};
      void deleteWhiteList() { this->whiteList_ = nullptr;};
      inline int32_t getWhiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, 0) };
      inline BaselineItemInfos& setWhiteList(int32_t whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


    protected:
      // The alias of the baseline type.
      shared_ptr<string> baselineClassAlias_ {};
      // The key of the baseline type.
      shared_ptr<string> baselineClassKey_ {};
      // The alias of the baseline check item.
      shared_ptr<string> baselineItemAlias_ {};
      // The key of the baseline check item.
      shared_ptr<string> baselineItemKey_ {};
      // The alias of the baseline.
      shared_ptr<string> baselineNameAlias_ {};
      // The key of the baseline name.
      shared_ptr<string> baselineNameKey_ {};
      // The status of the baseline risks. Valid values:
      // 
      // *   **0**: unfixed
      // *   **1**: fixed
      // *   **2**: pending verification
      // *   **3**: fixing failed
      shared_ptr<int32_t> status_ {};
      // Indicates whether the baseline check item is added to the whitelist. Valid values:
      // 
      // *   **0**: The baseline check item is not added to the whitelist.
      // *   **1**: The baseline check item is added to the whitelist.
      shared_ptr<int32_t> whiteList_ {};
    };

    virtual bool empty() const override { return this->baselineItemInfos_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // baselineItemInfos Field Functions 
    bool hasBaselineItemInfos() const { return this->baselineItemInfos_ != nullptr;};
    void deleteBaselineItemInfos() { this->baselineItemInfos_ = nullptr;};
    inline const vector<DescribeImageBaselineItemListResponseBody::BaselineItemInfos> & getBaselineItemInfos() const { DARABONBA_PTR_GET_CONST(baselineItemInfos_, vector<DescribeImageBaselineItemListResponseBody::BaselineItemInfos>) };
    inline vector<DescribeImageBaselineItemListResponseBody::BaselineItemInfos> getBaselineItemInfos() { DARABONBA_PTR_GET(baselineItemInfos_, vector<DescribeImageBaselineItemListResponseBody::BaselineItemInfos>) };
    inline DescribeImageBaselineItemListResponseBody& setBaselineItemInfos(const vector<DescribeImageBaselineItemListResponseBody::BaselineItemInfos> & baselineItemInfos) { DARABONBA_PTR_SET_VALUE(baselineItemInfos_, baselineItemInfos) };
    inline DescribeImageBaselineItemListResponseBody& setBaselineItemInfos(vector<DescribeImageBaselineItemListResponseBody::BaselineItemInfos> && baselineItemInfos) { DARABONBA_PTR_SET_RVALUE(baselineItemInfos_, baselineItemInfos) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageBaselineItemListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageBaselineItemListResponseBody::PageInfo) };
    inline DescribeImageBaselineItemListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageBaselineItemListResponseBody::PageInfo) };
    inline DescribeImageBaselineItemListResponseBody& setPageInfo(const DescribeImageBaselineItemListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageBaselineItemListResponseBody& setPageInfo(DescribeImageBaselineItemListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageBaselineItemListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of baseline check items.
    shared_ptr<vector<DescribeImageBaselineItemListResponseBody::BaselineItemInfos>> baselineItemInfos_ {};
    // The pagination information.
    shared_ptr<DescribeImageBaselineItemListResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
