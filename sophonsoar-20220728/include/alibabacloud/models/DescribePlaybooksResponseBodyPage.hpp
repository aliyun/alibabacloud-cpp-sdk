// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKSRESPONSEBODYPAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKSRESPONSEBODYPAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybooksResponseBodyPage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybooksResponseBodyPage& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybooksResponseBodyPage& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePlaybooksResponseBodyPage() = default ;
    DescribePlaybooksResponseBodyPage(const DescribePlaybooksResponseBodyPage &) = default ;
    DescribePlaybooksResponseBodyPage(DescribePlaybooksResponseBodyPage &&) = default ;
    DescribePlaybooksResponseBodyPage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybooksResponseBodyPage() = default ;
    DescribePlaybooksResponseBodyPage& operator=(const DescribePlaybooksResponseBodyPage &) = default ;
    DescribePlaybooksResponseBodyPage& operator=(DescribePlaybooksResponseBodyPage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePlaybooksResponseBodyPage& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePlaybooksResponseBodyPage& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePlaybooksResponseBodyPage& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number in pagination queries.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of items per page in pagination queries.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of items found.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
