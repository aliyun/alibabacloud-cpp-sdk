// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTITIESINMETACOLLECTIONRESPONSEBODYPAGINGINFOENTITIES_HPP_
#define ALIBABACLOUD_MODELS_LISTENTITIESINMETACOLLECTIONRESPONSEBODYPAGINGINFOENTITIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities() = default ;
    ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities(const ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities &) = default ;
    ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities(ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities &&) = default ;
    ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities() = default ;
    ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities& operator=(const ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities &) = default ;
    ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities& operator=(ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->id_ != nullptr && this->modifyTime_ != nullptr && this->name_ != nullptr
        && this->type_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // The entity ID. Entities can only be tables. This parameter is left empty if the entity is deleted.
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // The type of the entity.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
