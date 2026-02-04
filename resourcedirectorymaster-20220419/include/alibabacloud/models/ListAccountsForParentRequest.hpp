// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTSFORPARENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTSFORPARENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListAccountsForParentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountsForParentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncludeTags, includeTags_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_TO_JSON(QueryKeyword, queryKeyword_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountsForParentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncludeTags, includeTags_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_FROM_JSON(QueryKeyword, queryKeyword_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListAccountsForParentRequest() = default ;
    ListAccountsForParentRequest(const ListAccountsForParentRequest &) = default ;
    ListAccountsForParentRequest(ListAccountsForParentRequest &&) = default ;
    ListAccountsForParentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountsForParentRequest() = default ;
    ListAccountsForParentRequest& operator=(const ListAccountsForParentRequest &) = default ;
    ListAccountsForParentRequest& operator=(ListAccountsForParentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->includeTags_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->parentFolderId_ == nullptr && this->queryKeyword_ == nullptr && this->tag_ == nullptr; };
    // includeTags Field Functions 
    bool hasIncludeTags() const { return this->includeTags_ != nullptr;};
    void deleteIncludeTags() { this->includeTags_ = nullptr;};
    inline bool getIncludeTags() const { DARABONBA_PTR_GET_DEFAULT(includeTags_, false) };
    inline ListAccountsForParentRequest& setIncludeTags(bool includeTags) { DARABONBA_PTR_SET_VALUE(includeTags_, includeTags) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAccountsForParentRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAccountsForParentRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentFolderId Field Functions 
    bool hasParentFolderId() const { return this->parentFolderId_ != nullptr;};
    void deleteParentFolderId() { this->parentFolderId_ = nullptr;};
    inline string getParentFolderId() const { DARABONBA_PTR_GET_DEFAULT(parentFolderId_, "") };
    inline ListAccountsForParentRequest& setParentFolderId(string parentFolderId) { DARABONBA_PTR_SET_VALUE(parentFolderId_, parentFolderId) };


    // queryKeyword Field Functions 
    bool hasQueryKeyword() const { return this->queryKeyword_ != nullptr;};
    void deleteQueryKeyword() { this->queryKeyword_ = nullptr;};
    inline string getQueryKeyword() const { DARABONBA_PTR_GET_DEFAULT(queryKeyword_, "") };
    inline ListAccountsForParentRequest& setQueryKeyword(string queryKeyword) { DARABONBA_PTR_SET_VALUE(queryKeyword_, queryKeyword) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListAccountsForParentRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListAccountsForParentRequest::Tag>) };
    inline vector<ListAccountsForParentRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListAccountsForParentRequest::Tag>) };
    inline ListAccountsForParentRequest& setTag(const vector<ListAccountsForParentRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListAccountsForParentRequest& setTag(vector<ListAccountsForParentRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Specifies whether to return information about tags. Valid values:
    // 
    // *   false (default value)
    // *   true
    shared_ptr<bool> includeTags_ {};
    // The number of the page to return.
    // 
    // Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    // 
    // Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the folder.
    shared_ptr<string> parentFolderId_ {};
    // The keyword used for the query, such as the display name of a member.
    // 
    // Fuzzy match is supported.
    shared_ptr<string> queryKeyword_ {};
    // The tags. This parameter specifies a filter condition.
    shared_ptr<vector<ListAccountsForParentRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
