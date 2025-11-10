// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFOLDERSFORPARENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFOLDERSFORPARENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFoldersForParentRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListFoldersForParentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFoldersForParentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_TO_JSON(QueryKeyword, queryKeyword_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListFoldersForParentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_FROM_JSON(QueryKeyword, queryKeyword_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListFoldersForParentRequest() = default ;
    ListFoldersForParentRequest(const ListFoldersForParentRequest &) = default ;
    ListFoldersForParentRequest(ListFoldersForParentRequest &&) = default ;
    ListFoldersForParentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFoldersForParentRequest() = default ;
    ListFoldersForParentRequest& operator=(const ListFoldersForParentRequest &) = default ;
    ListFoldersForParentRequest& operator=(ListFoldersForParentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->parentFolderId_ == nullptr && return this->queryKeyword_ == nullptr && return this->tag_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFoldersForParentRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFoldersForParentRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentFolderId Field Functions 
    bool hasParentFolderId() const { return this->parentFolderId_ != nullptr;};
    void deleteParentFolderId() { this->parentFolderId_ = nullptr;};
    inline string parentFolderId() const { DARABONBA_PTR_GET_DEFAULT(parentFolderId_, "") };
    inline ListFoldersForParentRequest& setParentFolderId(string parentFolderId) { DARABONBA_PTR_SET_VALUE(parentFolderId_, parentFolderId) };


    // queryKeyword Field Functions 
    bool hasQueryKeyword() const { return this->queryKeyword_ != nullptr;};
    void deleteQueryKeyword() { this->queryKeyword_ = nullptr;};
    inline string queryKeyword() const { DARABONBA_PTR_GET_DEFAULT(queryKeyword_, "") };
    inline ListFoldersForParentRequest& setQueryKeyword(string queryKeyword) { DARABONBA_PTR_SET_VALUE(queryKeyword_, queryKeyword) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListFoldersForParentRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListFoldersForParentRequestTag>) };
    inline vector<ListFoldersForParentRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListFoldersForParentRequestTag>) };
    inline ListFoldersForParentRequest& setTag(const vector<ListFoldersForParentRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListFoldersForParentRequest& setTag(vector<ListFoldersForParentRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The number of the page to return.
    // 
    // Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    // 
    // Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the parent folder.
    // 
    // If you leave this parameter empty, the information of the first-level subfolders of the Root folder is queried.
    std::shared_ptr<string> parentFolderId_ = nullptr;
    // The keyword used for the query, such as a folder name.
    // 
    // Fuzzy match is supported.
    std::shared_ptr<string> queryKeyword_ = nullptr;
    // The tags. This parameter specifies a filter condition.
    std::shared_ptr<vector<ListFoldersForParentRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
