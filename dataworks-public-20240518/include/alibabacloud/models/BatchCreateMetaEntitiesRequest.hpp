// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEMETAENTITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEMETAENTITIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class BatchCreateMetaEntitiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateMetaEntitiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Entities, entities_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateMetaEntitiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Entities, entities_);
    };
    BatchCreateMetaEntitiesRequest() = default ;
    BatchCreateMetaEntitiesRequest(const BatchCreateMetaEntitiesRequest &) = default ;
    BatchCreateMetaEntitiesRequest(BatchCreateMetaEntitiesRequest &&) = default ;
    BatchCreateMetaEntitiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateMetaEntitiesRequest() = default ;
    BatchCreateMetaEntitiesRequest& operator=(const BatchCreateMetaEntitiesRequest &) = default ;
    BatchCreateMetaEntitiesRequest& operator=(BatchCreateMetaEntitiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entities& obj) { 
        DARABONBA_PTR_TO_JSON(Attributes, attributes_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(CustomAttributes, customAttributes_);
        DARABONBA_PTR_TO_JSON(EntityType, entityType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Entities& obj) { 
        DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(CustomAttributes, customAttributes_);
        DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Entities() = default ;
      Entities(const Entities &) = default ;
      Entities(Entities &&) = default ;
      Entities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entities() = default ;
      Entities& operator=(const Entities &) = default ;
      Entities& operator=(Entities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attributes_ == nullptr
        && this->comment_ == nullptr && this->customAttributes_ == nullptr && this->entityType_ == nullptr && this->name_ == nullptr; };
      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline const map<string, string> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, map<string, string>) };
      inline map<string, string> getAttributes() { DARABONBA_PTR_GET(attributes_, map<string, string>) };
      inline Entities& setAttributes(const map<string, string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
      inline Entities& setAttributes(map<string, string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Entities& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // customAttributes Field Functions 
      bool hasCustomAttributes() const { return this->customAttributes_ != nullptr;};
      void deleteCustomAttributes() { this->customAttributes_ = nullptr;};
      inline const map<string, vector<string>> & getCustomAttributes() const { DARABONBA_PTR_GET_CONST(customAttributes_, map<string, vector<string>>) };
      inline map<string, vector<string>> getCustomAttributes() { DARABONBA_PTR_GET(customAttributes_, map<string, vector<string>>) };
      inline Entities& setCustomAttributes(const map<string, vector<string>> & customAttributes) { DARABONBA_PTR_SET_VALUE(customAttributes_, customAttributes) };
      inline Entities& setCustomAttributes(map<string, vector<string>> && customAttributes) { DARABONBA_PTR_SET_RVALUE(customAttributes_, customAttributes) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline Entities& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Entities& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The entity attributes. Complex values must be serialized into a JSON string.
      shared_ptr<map<string, string>> attributes_ {};
      // The comment for the entity.
      shared_ptr<string> comment_ {};
      // The custom attribute values. The key is the identifier of the custom attribute, and the value is a single-element list.
      // >Notice: The custom attributes used here must be created in advance by using the CreateCustomAttribute API. For example, after you create a custom attribute with the ID `custom-attribute:owner_name`, you can configure the custom attribute by setting this parameter to {\\"owner_name\\": [\\"Bob\\"]}.
      shared_ptr<map<string, vector<string>>> customAttributes_ {};
      // The entity type. All entities in a batch must have the same type. The following types are supported:
      // 
      // - Custom types, such as `custom_entity-biz_api`.
      // 
      // - Extended table types. For example, if you have registered the `custom_dw-table` metadata entity type, you can create objects of the corresponding `custom_dw-database` (database) and `custom_dw-table` (table) types.
      // 
      // This parameter is required.
      shared_ptr<string> entityType_ {};
      // The entity name. The name can contain uppercase letters, lowercase letters, digits, and underscores (_). It must start with a letter and not exceed 64 characters.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->entities_ == nullptr; };
    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<BatchCreateMetaEntitiesRequest::Entities> & getEntities() const { DARABONBA_PTR_GET_CONST(entities_, vector<BatchCreateMetaEntitiesRequest::Entities>) };
    inline vector<BatchCreateMetaEntitiesRequest::Entities> getEntities() { DARABONBA_PTR_GET(entities_, vector<BatchCreateMetaEntitiesRequest::Entities>) };
    inline BatchCreateMetaEntitiesRequest& setEntities(const vector<BatchCreateMetaEntitiesRequest::Entities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline BatchCreateMetaEntitiesRequest& setEntities(vector<BatchCreateMetaEntitiesRequest::Entities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


  protected:
    // An entity list. You can create up to five entities in a batch. All entities in the batch must have the same `EntityType`.
    // 
    // This parameter is required.
    shared_ptr<vector<BatchCreateMetaEntitiesRequest::Entities>> entities_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
