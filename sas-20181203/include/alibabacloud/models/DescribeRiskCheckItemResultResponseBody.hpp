// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKCHECKITEMRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKCHECKITEMRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskCheckItemResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskCheckItemResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageContentResource, pageContentResource_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskCheckItemResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageContentResource, pageContentResource_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRiskCheckItemResultResponseBody() = default ;
    DescribeRiskCheckItemResultResponseBody(const DescribeRiskCheckItemResultResponseBody &) = default ;
    DescribeRiskCheckItemResultResponseBody(DescribeRiskCheckItemResultResponseBody &&) = default ;
    DescribeRiskCheckItemResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskCheckItemResultResponseBody() = default ;
    DescribeRiskCheckItemResultResponseBody& operator=(const DescribeRiskCheckItemResultResponseBody &) = default ;
    DescribeRiskCheckItemResultResponseBody& operator=(DescribeRiskCheckItemResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageContentResource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageContentResource& obj) { 
        DARABONBA_ANY_TO_JSON(ContentResource, contentResource_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageContentResource& obj) { 
        DARABONBA_ANY_FROM_JSON(ContentResource, contentResource_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageContentResource() = default ;
      PageContentResource(const PageContentResource &) = default ;
      PageContentResource(PageContentResource &&) = default ;
      PageContentResource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageContentResource() = default ;
      PageContentResource& operator=(const PageContentResource &) = default ;
      PageContentResource& operator=(PageContentResource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contentResource_ == nullptr
        && this->count_ == nullptr && this->currentPage_ == nullptr && this->pageCount_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // contentResource Field Functions 
      bool hasContentResource() const { return this->contentResource_ != nullptr;};
      void deleteContentResource() { this->contentResource_ = nullptr;};
      inline       const Darabonba::Json & getContentResource() const { DARABONBA_GET(contentResource_) };
      Darabonba::Json & getContentResource() { DARABONBA_GET(contentResource_) };
      inline PageContentResource& setContentResource(const Darabonba::Json & contentResource) { DARABONBA_SET_VALUE(contentResource_, contentResource) };
      inline PageContentResource& setContentResource(Darabonba::Json && contentResource) { DARABONBA_SET_RVALUE(contentResource_, contentResource) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageContentResource& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageContentResource& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageCount Field Functions 
      bool hasPageCount() const { return this->pageCount_ != nullptr;};
      void deletePageCount() { this->pageCount_ = nullptr;};
      inline int32_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
      inline PageContentResource& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageContentResource& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageContentResource& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The data of the affected assets on each page in a dynamic table.
      Darabonba::Json contentResource_ {};
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The total number of pages returned.
      shared_ptr<int32_t> pageCount_ {};
      // The number of entries returned on each page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageContentResource_ == nullptr
        && this->requestId_ == nullptr; };
    // pageContentResource Field Functions 
    bool hasPageContentResource() const { return this->pageContentResource_ != nullptr;};
    void deletePageContentResource() { this->pageContentResource_ = nullptr;};
    inline const DescribeRiskCheckItemResultResponseBody::PageContentResource & getPageContentResource() const { DARABONBA_PTR_GET_CONST(pageContentResource_, DescribeRiskCheckItemResultResponseBody::PageContentResource) };
    inline DescribeRiskCheckItemResultResponseBody::PageContentResource getPageContentResource() { DARABONBA_PTR_GET(pageContentResource_, DescribeRiskCheckItemResultResponseBody::PageContentResource) };
    inline DescribeRiskCheckItemResultResponseBody& setPageContentResource(const DescribeRiskCheckItemResultResponseBody::PageContentResource & pageContentResource) { DARABONBA_PTR_SET_VALUE(pageContentResource_, pageContentResource) };
    inline DescribeRiskCheckItemResultResponseBody& setPageContentResource(DescribeRiskCheckItemResultResponseBody::PageContentResource && pageContentResource) { DARABONBA_PTR_SET_RVALUE(pageContentResource_, pageContentResource) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskCheckItemResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<DescribeRiskCheckItemResultResponseBody::PageContentResource> pageContentResource_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
