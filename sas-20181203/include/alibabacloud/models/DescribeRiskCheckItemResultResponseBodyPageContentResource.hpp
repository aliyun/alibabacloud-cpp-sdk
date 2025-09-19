// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKCHECKITEMRESULTRESPONSEBODYPAGECONTENTRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKCHECKITEMRESULTRESPONSEBODYPAGECONTENTRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskCheckItemResultResponseBodyPageContentResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskCheckItemResultResponseBodyPageContentResource& obj) { 
      DARABONBA_ANY_TO_JSON(ContentResource, contentResource_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskCheckItemResultResponseBodyPageContentResource& obj) { 
      DARABONBA_ANY_FROM_JSON(ContentResource, contentResource_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRiskCheckItemResultResponseBodyPageContentResource() = default ;
    DescribeRiskCheckItemResultResponseBodyPageContentResource(const DescribeRiskCheckItemResultResponseBodyPageContentResource &) = default ;
    DescribeRiskCheckItemResultResponseBodyPageContentResource(DescribeRiskCheckItemResultResponseBodyPageContentResource &&) = default ;
    DescribeRiskCheckItemResultResponseBodyPageContentResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskCheckItemResultResponseBodyPageContentResource() = default ;
    DescribeRiskCheckItemResultResponseBodyPageContentResource& operator=(const DescribeRiskCheckItemResultResponseBodyPageContentResource &) = default ;
    DescribeRiskCheckItemResultResponseBodyPageContentResource& operator=(DescribeRiskCheckItemResultResponseBodyPageContentResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contentResource_ != nullptr
        && this->count_ != nullptr && this->currentPage_ != nullptr && this->pageCount_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // contentResource Field Functions 
    bool hasContentResource() const { return this->contentResource_ != nullptr;};
    void deleteContentResource() { this->contentResource_ = nullptr;};
    inline     const Darabonba::Json & contentResource() const { DARABONBA_GET(contentResource_) };
    Darabonba::Json & contentResource() { DARABONBA_GET(contentResource_) };
    inline DescribeRiskCheckItemResultResponseBodyPageContentResource& setContentResource(const Darabonba::Json & contentResource) { DARABONBA_SET_VALUE(contentResource_, contentResource) };
    inline DescribeRiskCheckItemResultResponseBodyPageContentResource& setContentResource(Darabonba::Json & contentResource) { DARABONBA_SET_RVALUE(contentResource_, contentResource) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeRiskCheckItemResultResponseBodyPageContentResource& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeRiskCheckItemResultResponseBodyPageContentResource& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int32_t pageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
    inline DescribeRiskCheckItemResultResponseBodyPageContentResource& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRiskCheckItemResultResponseBodyPageContentResource& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRiskCheckItemResultResponseBodyPageContentResource& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data of the affected assets on each page in a dynamic table.
    Darabonba::Json contentResource_ = nullptr;
    // The number of entries returned on the current page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The total number of pages returned.
    std::shared_ptr<int32_t> pageCount_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
