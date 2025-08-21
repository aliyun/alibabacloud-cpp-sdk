// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCONTENTREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCONTENTREQUESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class SearchContentRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchContentRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cate, cate_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(QueryAlbum, queryAlbum_);
      DARABONBA_PTR_TO_JSON(SubCate, subCate_);
    };
    friend void from_json(const Darabonba::Json& j, SearchContentRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cate, cate_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(QueryAlbum, queryAlbum_);
      DARABONBA_PTR_FROM_JSON(SubCate, subCate_);
    };
    SearchContentRequestRequest() = default ;
    SearchContentRequestRequest(const SearchContentRequestRequest &) = default ;
    SearchContentRequestRequest(SearchContentRequestRequest &&) = default ;
    SearchContentRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchContentRequestRequest() = default ;
    SearchContentRequestRequest& operator=(const SearchContentRequestRequest &) = default ;
    SearchContentRequestRequest& operator=(SearchContentRequestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cate_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->query_ != nullptr && this->queryAlbum_ != nullptr && this->subCate_ != nullptr; };
    // cate Field Functions 
    bool hasCate() const { return this->cate_ != nullptr;};
    void deleteCate() { this->cate_ = nullptr;};
    inline string cate() const { DARABONBA_PTR_GET_DEFAULT(cate_, "") };
    inline SearchContentRequestRequest& setCate(string cate) { DARABONBA_PTR_SET_VALUE(cate_, cate) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline SearchContentRequestRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchContentRequestRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SearchContentRequestRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryAlbum Field Functions 
    bool hasQueryAlbum() const { return this->queryAlbum_ != nullptr;};
    void deleteQueryAlbum() { this->queryAlbum_ = nullptr;};
    inline bool queryAlbum() const { DARABONBA_PTR_GET_DEFAULT(queryAlbum_, false) };
    inline SearchContentRequestRequest& setQueryAlbum(bool queryAlbum) { DARABONBA_PTR_SET_VALUE(queryAlbum_, queryAlbum) };


    // subCate Field Functions 
    bool hasSubCate() const { return this->subCate_ != nullptr;};
    void deleteSubCate() { this->subCate_ = nullptr;};
    inline string subCate() const { DARABONBA_PTR_GET_DEFAULT(subCate_, "") };
    inline SearchContentRequestRequest& setSubCate(string subCate) { DARABONBA_PTR_SET_VALUE(subCate_, subCate) };


  protected:
    std::shared_ptr<string> cate_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<bool> queryAlbum_ = nullptr;
    std::shared_ptr<string> subCate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
