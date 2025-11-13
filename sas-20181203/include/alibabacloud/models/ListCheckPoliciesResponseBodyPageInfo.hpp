// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKPOLICIESRESPONSEBODYPAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKPOLICIESRESPONSEBODYPAGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckPoliciesResponseBodyPageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckPoliciesResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckPoliciesResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCheckPoliciesResponseBodyPageInfo() = default ;
    ListCheckPoliciesResponseBodyPageInfo(const ListCheckPoliciesResponseBodyPageInfo &) = default ;
    ListCheckPoliciesResponseBodyPageInfo(ListCheckPoliciesResponseBodyPageInfo &&) = default ;
    ListCheckPoliciesResponseBodyPageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckPoliciesResponseBodyPageInfo() = default ;
    ListCheckPoliciesResponseBodyPageInfo& operator=(const ListCheckPoliciesResponseBodyPageInfo &) = default ;
    ListCheckPoliciesResponseBodyPageInfo& operator=(ListCheckPoliciesResponseBodyPageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline ListCheckPoliciesResponseBodyPageInfo& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCheckPoliciesResponseBodyPageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCheckPoliciesResponseBodyPageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCheckPoliciesResponseBodyPageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // 分页查询时，当前页显示的数据条数。
    std::shared_ptr<string> count_ = nullptr;
    // The current page number displayed in the result.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The maximum number of data entries per page when performing a paginated query.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of policies queried.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
