// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATEGORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCATEGORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
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
    virtual bool empty() const override { this->cateId_ != nullptr
        && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->sortBy_ != nullptr && this->type_ != nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline GetCategoriesRequest& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline GetCategoriesRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetCategoriesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline GetCategoriesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCategoriesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The category ID. You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [Intelligent Media Services (IMS) console](https://ims.console.aliyun.com) and choose **Media Asset Management** > **Category Management** to view the category ID.
    // *   View the value of CateId returned by the AddCategory operation that you called to create a category.
    // *   View the value of CateId returned by the GetCategories operation that you called to query a category.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The page number. Default value: 1
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page. Valid values: 10 to 100.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The sorting rule of results. Valid values:
    // 
    // \\- CreationTime:Desc (default): The results are sorted in reverse chronological order based on the creation time.
    // 
    // \\- CreationTime:Asc: The results are sorted in chronological order based on the creation time.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The type of the category. Valid values: default and material. A value of default indicates audio, video, and image files. This is the default value. A value of material indicates short video materials.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
