// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETACOLLECTIONSRESPONSEBODYDATAMETACOLLECTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTMETACOLLECTIONSRESPONSEBODYDATAMETACOLLECTIONS_HPP_
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
  class ListMetaCollectionsResponseBodyDataMetaCollections : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaCollectionsResponseBodyDataMetaCollections& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListMetaCollectionsResponseBodyDataMetaCollections& obj) { 
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
    ListMetaCollectionsResponseBodyDataMetaCollections() = default ;
    ListMetaCollectionsResponseBodyDataMetaCollections(const ListMetaCollectionsResponseBodyDataMetaCollections &) = default ;
    ListMetaCollectionsResponseBodyDataMetaCollections(ListMetaCollectionsResponseBodyDataMetaCollections &&) = default ;
    ListMetaCollectionsResponseBodyDataMetaCollections(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaCollectionsResponseBodyDataMetaCollections() = default ;
    ListMetaCollectionsResponseBodyDataMetaCollections& operator=(const ListMetaCollectionsResponseBodyDataMetaCollections &) = default ;
    ListMetaCollectionsResponseBodyDataMetaCollections& operator=(ListMetaCollectionsResponseBodyDataMetaCollections &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->administrators_ == nullptr
        && return this->createTime_ == nullptr && return this->createUser_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->modifyTime_ == nullptr
        && return this->name_ == nullptr && return this->parentId_ == nullptr && return this->type_ == nullptr; };
    // administrators Field Functions 
    bool hasAdministrators() const { return this->administrators_ != nullptr;};
    void deleteAdministrators() { this->administrators_ = nullptr;};
    inline const vector<string> & administrators() const { DARABONBA_PTR_GET_CONST(administrators_, vector<string>) };
    inline vector<string> administrators() { DARABONBA_PTR_GET(administrators_, vector<string>) };
    inline ListMetaCollectionsResponseBodyDataMetaCollections& setAdministrators(const vector<string> & administrators) { DARABONBA_PTR_SET_VALUE(administrators_, administrators) };
    inline ListMetaCollectionsResponseBodyDataMetaCollections& setAdministrators(vector<string> && administrators) { DARABONBA_PTR_SET_RVALUE(administrators_, administrators) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListMetaCollectionsResponseBodyDataMetaCollections& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListMetaCollectionsResponseBodyDataMetaCollections& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListMetaCollectionsResponseBodyDataMetaCollections& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListMetaCollectionsResponseBodyDataMetaCollections& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListMetaCollectionsResponseBodyDataMetaCollections& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMetaCollectionsResponseBodyDataMetaCollections& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline ListMetaCollectionsResponseBodyDataMetaCollections& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMetaCollectionsResponseBodyDataMetaCollections& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The list of administrator IDs. Supported only for album types. Administrators must be users within the same tenant. Multiple administrators can be specified.
    std::shared_ptr<vector<string>> administrators_ = nullptr;
    // The creation time in milliseconds (timestamp).
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The creator user ID.
    std::shared_ptr<string> createUser_ = nullptr;
    // The collection description.
    std::shared_ptr<string> description_ = nullptr;
    // The collection name.
    std::shared_ptr<string> id_ = nullptr;
    // The modification time in milliseconds (timestamp).
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The collection name.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the parent collection. Can be empty.
    std::shared_ptr<string> parentId_ = nullptr;
    // The collection type. Valid values:
    // 
    // *   Category
    // *   Album
    // *   AlbumCategory: Album subcategory
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
