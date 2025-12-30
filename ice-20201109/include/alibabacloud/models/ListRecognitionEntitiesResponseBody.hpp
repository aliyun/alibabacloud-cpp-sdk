// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECOGNITIONENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECOGNITIONENTITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListRecognitionEntitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecognitionEntitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entities, entities_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecognitionEntitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entities, entities_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRecognitionEntitiesResponseBody() = default ;
    ListRecognitionEntitiesResponseBody(const ListRecognitionEntitiesResponseBody &) = default ;
    ListRecognitionEntitiesResponseBody(ListRecognitionEntitiesResponseBody &&) = default ;
    ListRecognitionEntitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecognitionEntitiesResponseBody() = default ;
    ListRecognitionEntitiesResponseBody& operator=(const ListRecognitionEntitiesResponseBody &) = default ;
    ListRecognitionEntitiesResponseBody& operator=(ListRecognitionEntitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entities& obj) { 
        DARABONBA_PTR_TO_JSON(Entity, entity_);
      };
      friend void from_json(const Darabonba::Json& j, Entities& obj) { 
        DARABONBA_PTR_FROM_JSON(Entity, entity_);
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
      class Entity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Entity& obj) { 
          DARABONBA_PTR_TO_JSON(EntityId, entityId_);
          DARABONBA_PTR_TO_JSON(EntityInfo, entityInfo_);
          DARABONBA_PTR_TO_JSON(EntityName, entityName_);
        };
        friend void from_json(const Darabonba::Json& j, Entity& obj) { 
          DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
          DARABONBA_PTR_FROM_JSON(EntityInfo, entityInfo_);
          DARABONBA_PTR_FROM_JSON(EntityName, entityName_);
        };
        Entity() = default ;
        Entity(const Entity &) = default ;
        Entity(Entity &&) = default ;
        Entity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Entity() = default ;
        Entity& operator=(const Entity &) = default ;
        Entity& operator=(Entity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->entityId_ == nullptr
        && this->entityInfo_ == nullptr && this->entityName_ == nullptr; };
        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline Entity& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // entityInfo Field Functions 
        bool hasEntityInfo() const { return this->entityInfo_ != nullptr;};
        void deleteEntityInfo() { this->entityInfo_ = nullptr;};
        inline string getEntityInfo() const { DARABONBA_PTR_GET_DEFAULT(entityInfo_, "") };
        inline Entity& setEntityInfo(string entityInfo) { DARABONBA_PTR_SET_VALUE(entityInfo_, entityInfo) };


        // entityName Field Functions 
        bool hasEntityName() const { return this->entityName_ != nullptr;};
        void deleteEntityName() { this->entityName_ = nullptr;};
        inline string getEntityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
        inline Entity& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


      protected:
        // The ID of the entity.
        shared_ptr<string> entityId_ {};
        // The additional information of the entity, in JSON format.
        shared_ptr<string> entityInfo_ {};
        // The name of the entity.
        shared_ptr<string> entityName_ {};
      };

      virtual bool empty() const override { return this->entity_ == nullptr; };
      // entity Field Functions 
      bool hasEntity() const { return this->entity_ != nullptr;};
      void deleteEntity() { this->entity_ = nullptr;};
      inline const vector<Entities::Entity> & getEntity() const { DARABONBA_PTR_GET_CONST(entity_, vector<Entities::Entity>) };
      inline vector<Entities::Entity> getEntity() { DARABONBA_PTR_GET(entity_, vector<Entities::Entity>) };
      inline Entities& setEntity(const vector<Entities::Entity> & entity) { DARABONBA_PTR_SET_VALUE(entity_, entity) };
      inline Entities& setEntity(vector<Entities::Entity> && entity) { DARABONBA_PTR_SET_RVALUE(entity_, entity) };


    protected:
      shared_ptr<vector<Entities::Entity>> entity_ {};
    };

    virtual bool empty() const override { return this->entities_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const ListRecognitionEntitiesResponseBody::Entities & getEntities() const { DARABONBA_PTR_GET_CONST(entities_, ListRecognitionEntitiesResponseBody::Entities) };
    inline ListRecognitionEntitiesResponseBody::Entities getEntities() { DARABONBA_PTR_GET(entities_, ListRecognitionEntitiesResponseBody::Entities) };
    inline ListRecognitionEntitiesResponseBody& setEntities(const ListRecognitionEntitiesResponseBody::Entities & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline ListRecognitionEntitiesResponseBody& setEntities(ListRecognitionEntitiesResponseBody::Entities && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRecognitionEntitiesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRecognitionEntitiesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecognitionEntitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRecognitionEntitiesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The entities.
    shared_ptr<ListRecognitionEntitiesResponseBody::Entities> entities_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // **Request ID**
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
