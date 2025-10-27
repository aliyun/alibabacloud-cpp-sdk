// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDCENTERINSTANCESRESPONSEBODYPAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDCENTERINSTANCESRESPONSEBODYPAGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCloudCenterInstancesResponseBodyPageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudCenterInstancesResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudCenterInstancesResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCloudCenterInstancesResponseBodyPageInfo() = default ;
    DescribeCloudCenterInstancesResponseBodyPageInfo(const DescribeCloudCenterInstancesResponseBodyPageInfo &) = default ;
    DescribeCloudCenterInstancesResponseBodyPageInfo(DescribeCloudCenterInstancesResponseBodyPageInfo &&) = default ;
    DescribeCloudCenterInstancesResponseBodyPageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudCenterInstancesResponseBodyPageInfo() = default ;
    DescribeCloudCenterInstancesResponseBodyPageInfo& operator=(const DescribeCloudCenterInstancesResponseBodyPageInfo &) = default ;
    DescribeCloudCenterInstancesResponseBodyPageInfo& operator=(DescribeCloudCenterInstancesResponseBodyPageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->currentPage_ == nullptr && return this->nextToken_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeCloudCenterInstancesResponseBodyPageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCloudCenterInstancesResponseBodyPageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCloudCenterInstancesResponseBodyPageInfo& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCloudCenterInstancesResponseBodyPageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCloudCenterInstancesResponseBodyPageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The value of NextToken that is returned when the NextToken method is used.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The number of entries returned per page. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
