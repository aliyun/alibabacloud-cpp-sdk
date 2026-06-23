// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METAENTITY_HPP_
#define ALIBABACLOUD_MODELS_METAENTITY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/MetaEntityDef.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class MetaEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetaEntity& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomAttributes, customAttributes_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MetaEntityDef, metaEntityDef_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, MetaEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomAttributes, customAttributes_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MetaEntityDef, metaEntityDef_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    MetaEntity() = default ;
    MetaEntity(const MetaEntity &) = default ;
    MetaEntity(MetaEntity &&) = default ;
    MetaEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetaEntity() = default ;
    MetaEntity& operator=(const MetaEntity &) = default ;
    MetaEntity& operator=(MetaEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && this->comment_ == nullptr && this->createTime_ == nullptr && this->customAttributes_ == nullptr && this->entityType_ == nullptr && this->id_ == nullptr
        && this->metaEntityDef_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->ownerId_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const map<string, string> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, map<string, string>) };
    inline map<string, string> getAttributes() { DARABONBA_PTR_GET(attributes_, map<string, string>) };
    inline MetaEntity& setAttributes(const map<string, string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline MetaEntity& setAttributes(map<string, string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline MetaEntity& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline MetaEntity& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customAttributes Field Functions 
    bool hasCustomAttributes() const { return this->customAttributes_ != nullptr;};
    void deleteCustomAttributes() { this->customAttributes_ = nullptr;};
    inline const map<string, vector<string>> & getCustomAttributes() const { DARABONBA_PTR_GET_CONST(customAttributes_, map<string, vector<string>>) };
    inline map<string, vector<string>> getCustomAttributes() { DARABONBA_PTR_GET(customAttributes_, map<string, vector<string>>) };
    inline MetaEntity& setCustomAttributes(const map<string, vector<string>> & customAttributes) { DARABONBA_PTR_SET_VALUE(customAttributes_, customAttributes) };
    inline MetaEntity& setCustomAttributes(map<string, vector<string>> && customAttributes) { DARABONBA_PTR_SET_RVALUE(customAttributes_, customAttributes) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline MetaEntity& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline MetaEntity& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metaEntityDef Field Functions 
    bool hasMetaEntityDef() const { return this->metaEntityDef_ != nullptr;};
    void deleteMetaEntityDef() { this->metaEntityDef_ = nullptr;};
    inline const MetaEntityDef & getMetaEntityDef() const { DARABONBA_PTR_GET_CONST(metaEntityDef_, MetaEntityDef) };
    inline MetaEntityDef getMetaEntityDef() { DARABONBA_PTR_GET(metaEntityDef_, MetaEntityDef) };
    inline MetaEntity& setMetaEntityDef(const MetaEntityDef & metaEntityDef) { DARABONBA_PTR_SET_VALUE(metaEntityDef_, metaEntityDef) };
    inline MetaEntity& setMetaEntityDef(MetaEntityDef && metaEntityDef) { DARABONBA_PTR_SET_RVALUE(metaEntityDef_, metaEntityDef) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline MetaEntity& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MetaEntity& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline MetaEntity& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // Entity attributes. Complex values are represented as JSON strings.
    shared_ptr<map<string, string>> attributes_ {};
    // Comment
    shared_ptr<string> comment_ {};
    // Creation time as a millisecond-level timestamp
    shared_ptr<int64_t> createTime_ {};
    // Custom attribute values. The key is the custom attribute identifier. The value is a list of attribute values.
    shared_ptr<map<string, vector<string>>> customAttributes_ {};
    // Entity type
    shared_ptr<string> entityType_ {};
    // Entity ID
    shared_ptr<string> id_ {};
    // Attribute definition of the custom entity.
    // >Notice: For historical reasons, this property is not returned and its value is empty. We recommend that you use the GetMetaEntityDef API to obtain the entity type definition.
    shared_ptr<MetaEntityDef> metaEntityDef_ {};
    // Modification time as a millisecond-level timestamp
    shared_ptr<int64_t> modifyTime_ {};
    // Entity name
    shared_ptr<string> name_ {};
    // Owner ID. The default value is the Alibaba Cloud UID of the creator.
    shared_ptr<string> ownerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
