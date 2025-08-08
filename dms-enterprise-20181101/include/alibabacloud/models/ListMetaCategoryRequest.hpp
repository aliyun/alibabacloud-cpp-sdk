// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETACATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMETACATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListMetaCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentCategoryId, parentCategoryId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListMetaCategoryRequest() = default ;
    ListMetaCategoryRequest(const ListMetaCategoryRequest &) = default ;
    ListMetaCategoryRequest(ListMetaCategoryRequest &&) = default ;
    ListMetaCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaCategoryRequest() = default ;
    ListMetaCategoryRequest& operator=(const ListMetaCategoryRequest &) = default ;
    ListMetaCategoryRequest& operator=(ListMetaCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->parentCategoryId_ != nullptr && this->tid_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMetaCategoryRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMetaCategoryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentCategoryId Field Functions 
    bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
    void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
    inline int64_t parentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, 0L) };
    inline ListMetaCategoryRequest& setParentCategoryId(int64_t parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListMetaCategoryRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> parentCategoryId_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
