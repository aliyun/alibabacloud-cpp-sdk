// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECOGNITIONENTITIESRESPONSEBODYENTITIESENTITY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECOGNITIONENTITIESRESPONSEBODYENTITIESENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListRecognitionEntitiesResponseBodyEntitiesEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecognitionEntitiesResponseBodyEntitiesEntity& obj) { 
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(EntityInfo, entityInfo_);
      DARABONBA_PTR_TO_JSON(EntityName, entityName_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecognitionEntitiesResponseBodyEntitiesEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(EntityInfo, entityInfo_);
      DARABONBA_PTR_FROM_JSON(EntityName, entityName_);
    };
    ListRecognitionEntitiesResponseBodyEntitiesEntity() = default ;
    ListRecognitionEntitiesResponseBodyEntitiesEntity(const ListRecognitionEntitiesResponseBodyEntitiesEntity &) = default ;
    ListRecognitionEntitiesResponseBodyEntitiesEntity(ListRecognitionEntitiesResponseBodyEntitiesEntity &&) = default ;
    ListRecognitionEntitiesResponseBodyEntitiesEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecognitionEntitiesResponseBodyEntitiesEntity() = default ;
    ListRecognitionEntitiesResponseBodyEntitiesEntity& operator=(const ListRecognitionEntitiesResponseBodyEntitiesEntity &) = default ;
    ListRecognitionEntitiesResponseBodyEntitiesEntity& operator=(ListRecognitionEntitiesResponseBodyEntitiesEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityId_ != nullptr
        && this->entityInfo_ != nullptr && this->entityName_ != nullptr; };
    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline ListRecognitionEntitiesResponseBodyEntitiesEntity& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityInfo Field Functions 
    bool hasEntityInfo() const { return this->entityInfo_ != nullptr;};
    void deleteEntityInfo() { this->entityInfo_ = nullptr;};
    inline string entityInfo() const { DARABONBA_PTR_GET_DEFAULT(entityInfo_, "") };
    inline ListRecognitionEntitiesResponseBodyEntitiesEntity& setEntityInfo(string entityInfo) { DARABONBA_PTR_SET_VALUE(entityInfo_, entityInfo) };


    // entityName Field Functions 
    bool hasEntityName() const { return this->entityName_ != nullptr;};
    void deleteEntityName() { this->entityName_ = nullptr;};
    inline string entityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
    inline ListRecognitionEntitiesResponseBodyEntitiesEntity& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


  protected:
    std::shared_ptr<string> entityId_ = nullptr;
    std::shared_ptr<string> entityInfo_ = nullptr;
    std::shared_ptr<string> entityName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
