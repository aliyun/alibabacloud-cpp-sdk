// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATEGORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCATEGORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetCategoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCategoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetCategoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetCategoriesRequest() = default ;
    GetCategoriesRequest(const GetCategoriesRequest &) = default ;
    GetCategoriesRequest(GetCategoriesRequest &&) = default ;
    GetCategoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCategoriesRequest() = default ;
    GetCategoriesRequest& operator=(const GetCategoriesRequest &) = default ;
    GetCategoriesRequest& operator=(GetCategoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cateId_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->sortBy_ == nullptr && this->type_ == nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline GetCategoriesRequest& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline GetCategoriesRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetCategoriesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline GetCategoriesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCategoriesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The category ID. If you specify this parameter, the information about the specified category is returned. Only a single category ID is supported. You can obtain the category ID by using the following methods:
    // - Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Asset Management Configuration** > **Category Management** to view the category ID.
    // - Obtain the category ID from the response of the [AddCategory](~~AddCategory~~) operation when you create a category.
    shared_ptr<int64_t> cateId_ {};
    // The page number of the subcategory list. Default value: **1**.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page of the subcategory list. Default value: **10**. Maximum value: **100**.
    shared_ptr<int64_t> pageSize_ {};
    // The method for sorting the query results. Valid values:
    // 
    // - **CreationTime:Desc** (default): sorts the results by creation time in descending order.
    // - **CreationTime:Asc**: sorts the results by creation time in ascending order.
    shared_ptr<string> sortBy_ {};
    // The categorization type. If you specify this parameter, a filtered query is performed to return categories of the specified type. Valid values:
    // - **default**: audio, video, and image categorization.
    // - **material**: short video material categorization.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
