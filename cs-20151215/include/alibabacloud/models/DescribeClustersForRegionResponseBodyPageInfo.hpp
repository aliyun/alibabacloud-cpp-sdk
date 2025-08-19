// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSFORREGIONRESPONSEBODYPAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSFORREGIONRESPONSEBODYPAGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClustersForRegionResponseBodyPageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersForRegionResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(page_number, pageNumber_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(total_count, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersForRegionResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(page_number, pageNumber_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(total_count, totalCount_);
    };
    DescribeClustersForRegionResponseBodyPageInfo() = default ;
    DescribeClustersForRegionResponseBodyPageInfo(const DescribeClustersForRegionResponseBodyPageInfo &) = default ;
    DescribeClustersForRegionResponseBodyPageInfo(DescribeClustersForRegionResponseBodyPageInfo &&) = default ;
    DescribeClustersForRegionResponseBodyPageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersForRegionResponseBodyPageInfo() = default ;
    DescribeClustersForRegionResponseBodyPageInfo& operator=(const DescribeClustersForRegionResponseBodyPageInfo &) = default ;
    DescribeClustersForRegionResponseBodyPageInfo& operator=(DescribeClustersForRegionResponseBodyPageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeClustersForRegionResponseBodyPageInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeClustersForRegionResponseBodyPageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeClustersForRegionResponseBodyPageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of pages.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of records on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
