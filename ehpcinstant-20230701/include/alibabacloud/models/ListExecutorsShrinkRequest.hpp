// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTORSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTORSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListExecutorsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListExecutorsShrinkRequest() = default ;
    ListExecutorsShrinkRequest(const ListExecutorsShrinkRequest &) = default ;
    ListExecutorsShrinkRequest(ListExecutorsShrinkRequest &&) = default ;
    ListExecutorsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorsShrinkRequest() = default ;
    ListExecutorsShrinkRequest& operator=(const ListExecutorsShrinkRequest &) = default ;
    ListExecutorsShrinkRequest& operator=(ListExecutorsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterShrink_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string filterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline ListExecutorsShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListExecutorsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListExecutorsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Queries the Executor filter conditions.
    std::shared_ptr<string> filterShrink_ = nullptr;
    // The current page number.\\
    // Starting value: 1\\
    // Default value: 1
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. The number of entries returned per page. Default value: 50. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
