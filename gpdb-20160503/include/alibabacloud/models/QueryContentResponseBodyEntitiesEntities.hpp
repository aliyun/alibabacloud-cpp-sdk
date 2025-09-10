// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYENTITIESENTITIES_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYENTITIESENTITIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryContentResponseBodyEntitiesEntities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContentResponseBodyEntitiesEntities& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Entity, entity_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContentResponseBodyEntitiesEntities& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Entity, entity_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryContentResponseBodyEntitiesEntities() = default ;
    QueryContentResponseBodyEntitiesEntities(const QueryContentResponseBodyEntitiesEntities &) = default ;
    QueryContentResponseBodyEntitiesEntities(QueryContentResponseBodyEntitiesEntities &&) = default ;
    QueryContentResponseBodyEntitiesEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContentResponseBodyEntitiesEntities() = default ;
    QueryContentResponseBodyEntitiesEntities& operator=(const QueryContentResponseBodyEntitiesEntities &) = default ;
    QueryContentResponseBodyEntitiesEntities& operator=(QueryContentResponseBodyEntitiesEntities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->entity_ != nullptr && this->fileName_ != nullptr && this->id_ != nullptr && this->type_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryContentResponseBodyEntitiesEntities& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // entity Field Functions 
    bool hasEntity() const { return this->entity_ != nullptr;};
    void deleteEntity() { this->entity_ = nullptr;};
    inline string entity() const { DARABONBA_PTR_GET_DEFAULT(entity_, "") };
    inline QueryContentResponseBodyEntitiesEntities& setEntity(string entity) { DARABONBA_PTR_SET_VALUE(entity_, entity) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline QueryContentResponseBodyEntitiesEntities& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryContentResponseBodyEntitiesEntities& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryContentResponseBodyEntitiesEntities& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> entity_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
