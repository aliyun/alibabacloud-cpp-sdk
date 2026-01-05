// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMessageAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
    };
    ListMessageAppRequest() = default ;
    ListMessageAppRequest(const ListMessageAppRequest &) = default ;
    ListMessageAppRequest(ListMessageAppRequest &&) = default ;
    ListMessageAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageAppRequest() = default ;
    ListMessageAppRequest& operator=(const ListMessageAppRequest &) = default ;
    ListMessageAppRequest& operator=(ListMessageAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNum_ == nullptr
        && this->pageSize_ == nullptr && this->sortType_ == nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListMessageAppRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMessageAppRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline int32_t getSortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, 0) };
    inline ListMessageAppRequest& setSortType(int32_t sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


  protected:
    // The number of the page to return. Default value: 1. Valid values: 1 to 100000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNum_ {};
    // The number of applications to return on each page. Default value: 20. Valid values: 1 to 50.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The sort order. Valid values:
    // 
    // *   0: ascending order by time
    // *   1: descending order by time
    shared_ptr<int32_t> sortType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
