// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListTagGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagGroups, tagGroups_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagGroups, tagGroups_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTagGroupResponseBody() = default ;
    ListTagGroupResponseBody(const ListTagGroupResponseBody &) = default ;
    ListTagGroupResponseBody(ListTagGroupResponseBody &&) = default ;
    ListTagGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagGroupResponseBody() = default ;
    ListTagGroupResponseBody& operator=(const ListTagGroupResponseBody &) = default ;
    ListTagGroupResponseBody& operator=(ListTagGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagGroups& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
        DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_TO_JSON(DefaultTagId, defaultTagId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ModifyUserId, modifyUserId_);
        DARABONBA_PTR_TO_JSON(ModifyUserName, modifyUserName_);
      };
      friend void from_json(const Darabonba::Json& j, TagGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
        DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_FROM_JSON(DefaultTagId, defaultTagId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ModifyUserId, modifyUserId_);
        DARABONBA_PTR_FROM_JSON(ModifyUserName, modifyUserName_);
      };
      TagGroups() = default ;
      TagGroups(const TagGroups &) = default ;
      TagGroups(TagGroups &&) = default ;
      TagGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagGroups() = default ;
      TagGroups& operator=(const TagGroups &) = default ;
      TagGroups& operator=(TagGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createUserId_ == nullptr && this->createUserName_ == nullptr && this->defaultTagId_ == nullptr && this->groupName_ == nullptr && this->id_ == nullptr
        && this->modifyTime_ == nullptr && this->modifyUserId_ == nullptr && this->modifyUserName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TagGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUserId Field Functions 
      bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
      void deleteCreateUserId() { this->createUserId_ = nullptr;};
      inline int64_t getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, 0L) };
      inline TagGroups& setCreateUserId(int64_t createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


      // createUserName Field Functions 
      bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
      void deleteCreateUserName() { this->createUserName_ = nullptr;};
      inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
      inline TagGroups& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


      // defaultTagId Field Functions 
      bool hasDefaultTagId() const { return this->defaultTagId_ != nullptr;};
      void deleteDefaultTagId() { this->defaultTagId_ = nullptr;};
      inline int64_t getDefaultTagId() const { DARABONBA_PTR_GET_DEFAULT(defaultTagId_, 0L) };
      inline TagGroups& setDefaultTagId(int64_t defaultTagId) { DARABONBA_PTR_SET_VALUE(defaultTagId_, defaultTagId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline TagGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline TagGroups& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline TagGroups& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // modifyUserId Field Functions 
      bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
      void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
      inline int64_t getModifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, 0L) };
      inline TagGroups& setModifyUserId(int64_t modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


      // modifyUserName Field Functions 
      bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
      void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
      inline string getModifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
      inline TagGroups& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<int64_t> createUserId_ {};
      shared_ptr<string> createUserName_ {};
      shared_ptr<int64_t> defaultTagId_ {};
      shared_ptr<string> groupName_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<int64_t> modifyUserId_ {};
      shared_ptr<string> modifyUserName_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->tagGroups_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTagGroupResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTagGroupResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagGroups Field Functions 
    bool hasTagGroups() const { return this->tagGroups_ != nullptr;};
    void deleteTagGroups() { this->tagGroups_ = nullptr;};
    inline const vector<ListTagGroupResponseBody::TagGroups> & getTagGroups() const { DARABONBA_PTR_GET_CONST(tagGroups_, vector<ListTagGroupResponseBody::TagGroups>) };
    inline vector<ListTagGroupResponseBody::TagGroups> getTagGroups() { DARABONBA_PTR_GET(tagGroups_, vector<ListTagGroupResponseBody::TagGroups>) };
    inline ListTagGroupResponseBody& setTagGroups(const vector<ListTagGroupResponseBody::TagGroups> & tagGroups) { DARABONBA_PTR_SET_VALUE(tagGroups_, tagGroups) };
    inline ListTagGroupResponseBody& setTagGroups(vector<ListTagGroupResponseBody::TagGroups> && tagGroups) { DARABONBA_PTR_SET_RVALUE(tagGroups_, tagGroups) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTagGroupResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListTagGroupResponseBody::TagGroups>> tagGroups_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
