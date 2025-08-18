// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITELOGSRESPONSEBODYSITELOGDETAILSPAGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITELOGSRESPONSEBODYSITELOGDETAILSPAGEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteLogsResponseBodySiteLogDetailsPageInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteLogsResponseBodySiteLogDetailsPageInfos& obj) { 
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteLogsResponseBodySiteLogDetailsPageInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSiteLogsResponseBodySiteLogDetailsPageInfos() = default ;
    DescribeSiteLogsResponseBodySiteLogDetailsPageInfos(const DescribeSiteLogsResponseBodySiteLogDetailsPageInfos &) = default ;
    DescribeSiteLogsResponseBodySiteLogDetailsPageInfos(DescribeSiteLogsResponseBodySiteLogDetailsPageInfos &&) = default ;
    DescribeSiteLogsResponseBodySiteLogDetailsPageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteLogsResponseBodySiteLogDetailsPageInfos() = default ;
    DescribeSiteLogsResponseBodySiteLogDetailsPageInfos& operator=(const DescribeSiteLogsResponseBodySiteLogDetailsPageInfos &) = default ;
    DescribeSiteLogsResponseBodySiteLogDetailsPageInfos& operator=(DescribeSiteLogsResponseBodySiteLogDetailsPageInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageIndex_ != nullptr
        && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline DescribeSiteLogsResponseBodySiteLogDetailsPageInfos& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSiteLogsResponseBodySiteLogDetailsPageInfos& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSiteLogsResponseBodySiteLogDetailsPageInfos& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
