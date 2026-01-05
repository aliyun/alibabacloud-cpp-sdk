// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETACOLLECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETACOLLECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetMetaCollectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaCollectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetaCollection, metaCollection_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaCollectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaCollection, metaCollection_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMetaCollectionResponseBody() = default ;
    GetMetaCollectionResponseBody(const GetMetaCollectionResponseBody &) = default ;
    GetMetaCollectionResponseBody(GetMetaCollectionResponseBody &&) = default ;
    GetMetaCollectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaCollectionResponseBody() = default ;
    GetMetaCollectionResponseBody& operator=(const GetMetaCollectionResponseBody &) = default ;
    GetMetaCollectionResponseBody& operator=(GetMetaCollectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MetaCollection : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetaCollection& obj) { 
        DARABONBA_PTR_TO_JSON(Administrators, administrators_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, MetaCollection& obj) { 
        DARABONBA_PTR_FROM_JSON(Administrators, administrators_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      MetaCollection() = default ;
      MetaCollection(const MetaCollection &) = default ;
      MetaCollection(MetaCollection &&) = default ;
      MetaCollection(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetaCollection() = default ;
      MetaCollection& operator=(const MetaCollection &) = default ;
      MetaCollection& operator=(MetaCollection &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->administrators_ == nullptr
        && this->createTime_ == nullptr && this->createUser_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->modifyTime_ == nullptr
        && this->name_ == nullptr && this->parentId_ == nullptr && this->type_ == nullptr; };
      // administrators Field Functions 
      bool hasAdministrators() const { return this->administrators_ != nullptr;};
      void deleteAdministrators() { this->administrators_ = nullptr;};
      inline const vector<int64_t> & getAdministrators() const { DARABONBA_PTR_GET_CONST(administrators_, vector<int64_t>) };
      inline vector<int64_t> getAdministrators() { DARABONBA_PTR_GET(administrators_, vector<int64_t>) };
      inline MetaCollection& setAdministrators(const vector<int64_t> & administrators) { DARABONBA_PTR_SET_VALUE(administrators_, administrators) };
      inline MetaCollection& setAdministrators(vector<int64_t> && administrators) { DARABONBA_PTR_SET_RVALUE(administrators_, administrators) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline MetaCollection& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline MetaCollection& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline MetaCollection& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline MetaCollection& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline MetaCollection& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline MetaCollection& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline MetaCollection& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline MetaCollection& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The list of administrator IDs. Valid only for the album type. The IDs must belong to users in the same tenant. Multiple IDs can be specified.
      shared_ptr<vector<int64_t>> administrators_ {};
      // The creation time in milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the creator.
      shared_ptr<string> createUser_ {};
      // The collection description.
      shared_ptr<string> description_ {};
      // The collection ID.
      shared_ptr<string> id_ {};
      // The last modified time in milliseconds.
      shared_ptr<int64_t> modifyTime_ {};
      // The collection name.
      shared_ptr<string> name_ {};
      // The parent collection ID. This parameter can be empty.
      shared_ptr<string> parentId_ {};
      // The collection type. Valid values:
      // 
      // *   Category
      // *   Album
      // *   AlbumCategory: Album subcategory.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->metaCollection_ == nullptr
        && this->requestId_ == nullptr; };
    // metaCollection Field Functions 
    bool hasMetaCollection() const { return this->metaCollection_ != nullptr;};
    void deleteMetaCollection() { this->metaCollection_ = nullptr;};
    inline const GetMetaCollectionResponseBody::MetaCollection & getMetaCollection() const { DARABONBA_PTR_GET_CONST(metaCollection_, GetMetaCollectionResponseBody::MetaCollection) };
    inline GetMetaCollectionResponseBody::MetaCollection getMetaCollection() { DARABONBA_PTR_GET(metaCollection_, GetMetaCollectionResponseBody::MetaCollection) };
    inline GetMetaCollectionResponseBody& setMetaCollection(const GetMetaCollectionResponseBody::MetaCollection & metaCollection) { DARABONBA_PTR_SET_VALUE(metaCollection_, metaCollection) };
    inline GetMetaCollectionResponseBody& setMetaCollection(GetMetaCollectionResponseBody::MetaCollection && metaCollection) { DARABONBA_PTR_SET_RVALUE(metaCollection_, metaCollection) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaCollectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The collection details.
    shared_ptr<GetMetaCollectionResponseBody::MetaCollection> metaCollection_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
