// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETDIRECTORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETDIRECTORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAssetDirectoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetDirectoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetDirectoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    ListAssetDirectoriesRequest() = default ;
    ListAssetDirectoriesRequest(const ListAssetDirectoriesRequest &) = default ;
    ListAssetDirectoriesRequest(ListAssetDirectoriesRequest &&) = default ;
    ListAssetDirectoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetDirectoriesRequest() = default ;
    ListAssetDirectoriesRequest& operator=(const ListAssetDirectoriesRequest &) = default ;
    ListAssetDirectoriesRequest& operator=(ListAssetDirectoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(MaxLevel, maxLevel_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ParentDirectoryId, parentDirectoryId_);
        DARABONBA_PTR_TO_JSON(TopicId, topicId_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(MaxLevel, maxLevel_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ParentDirectoryId, parentDirectoryId_);
        DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
      };
      ListQuery() = default ;
      ListQuery(const ListQuery &) = default ;
      ListQuery(ListQuery &&) = default ;
      ListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListQuery() = default ;
      ListQuery& operator=(const ListQuery &) = default ;
      ListQuery& operator=(ListQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->keyword_ == nullptr
        && this->maxLevel_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->parentDirectoryId_ == nullptr && this->topicId_ == nullptr; };
      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // maxLevel Field Functions 
      bool hasMaxLevel() const { return this->maxLevel_ != nullptr;};
      void deleteMaxLevel() { this->maxLevel_ = nullptr;};
      inline int32_t getMaxLevel() const { DARABONBA_PTR_GET_DEFAULT(maxLevel_, 0) };
      inline ListQuery& setMaxLevel(int32_t maxLevel) { DARABONBA_PTR_SET_VALUE(maxLevel_, maxLevel) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline ListQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // parentDirectoryId Field Functions 
      bool hasParentDirectoryId() const { return this->parentDirectoryId_ != nullptr;};
      void deleteParentDirectoryId() { this->parentDirectoryId_ = nullptr;};
      inline int64_t getParentDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(parentDirectoryId_, 0L) };
      inline ListQuery& setParentDirectoryId(int64_t parentDirectoryId) { DARABONBA_PTR_SET_VALUE(parentDirectoryId_, parentDirectoryId) };


      // topicId Field Functions 
      bool hasTopicId() const { return this->topicId_ != nullptr;};
      void deleteTopicId() { this->topicId_ = nullptr;};
      inline int64_t getTopicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
      inline ListQuery& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


    protected:
      // The folder name keyword. Maximum length: 128 characters.
      shared_ptr<string> keyword_ {};
      // The maximum number of expansion levels. This parameter takes effect only in browse mode. Valid values: 1 to 10.
      shared_ptr<int32_t> maxLevel_ {};
      // The page number. Default value: 1.
      shared_ptr<int32_t> page_ {};
      // The number of entries per page. Default value: 50. Valid values: 1 to 200.
      shared_ptr<int32_t> pageSize_ {};
      // The parent folder ID. This parameter takes effect only in browse mode.
      shared_ptr<int64_t> parentDirectoryId_ {};
      // The topic ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> topicId_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListAssetDirectoriesRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListAssetDirectoriesRequest::ListQuery) };
    inline ListAssetDirectoriesRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListAssetDirectoriesRequest::ListQuery) };
    inline ListAssetDirectoriesRequest& setListQuery(const ListAssetDirectoriesRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListAssetDirectoriesRequest& setListQuery(ListAssetDirectoriesRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListAssetDirectoriesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListAssetDirectoriesRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The query parameters.
    // 
    // This parameter is required.
    shared_ptr<ListAssetDirectoriesRequest::ListQuery> listQuery_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
