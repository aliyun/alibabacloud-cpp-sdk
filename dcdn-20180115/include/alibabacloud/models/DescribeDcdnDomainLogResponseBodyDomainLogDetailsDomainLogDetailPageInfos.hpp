// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAILPAGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAILPAGEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos& obj) { 
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos() = default ;
    DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos(const DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos &) = default ;
    DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos(DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos &&) = default ;
    DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos() = default ;
    DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos& operator=(const DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos &) = default ;
    DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos& operator=(DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageIndex_ != nullptr
        && this->pageSize_ != nullptr && this->total_ != nullptr; };
    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int64_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
    inline DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int64_t> pageIndex_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
