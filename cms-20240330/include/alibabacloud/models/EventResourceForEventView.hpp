// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTRESOURCEFOREVENTVIEW_HPP_
#define ALIBABACLOUD_MODELS_EVENTRESOURCEFOREVENTVIEW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class EventResourceForEventView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventResourceForEventView& obj) { 
      DARABONBA_PTR_TO_JSON(entity, entity_);
      DARABONBA_ANY_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, EventResourceForEventView& obj) { 
      DARABONBA_PTR_FROM_JSON(entity, entity_);
      DARABONBA_ANY_FROM_JSON(tags, tags_);
    };
    EventResourceForEventView() = default ;
    EventResourceForEventView(const EventResourceForEventView &) = default ;
    EventResourceForEventView(EventResourceForEventView &&) = default ;
    EventResourceForEventView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventResourceForEventView() = default ;
    EventResourceForEventView& operator=(const EventResourceForEventView &) = default ;
    EventResourceForEventView& operator=(EventResourceForEventView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entity& obj) { 
        DARABONBA_PTR_TO_JSON(domain, domain_);
        DARABONBA_PTR_TO_JSON(entityId, entityId_);
        DARABONBA_PTR_TO_JSON(entityType, entityType_);
        DARABONBA_ANY_TO_JSON(prop, prop_);
      };
      friend void from_json(const Darabonba::Json& j, Entity& obj) { 
        DARABONBA_PTR_FROM_JSON(domain, domain_);
        DARABONBA_PTR_FROM_JSON(entityId, entityId_);
        DARABONBA_PTR_FROM_JSON(entityType, entityType_);
        DARABONBA_ANY_FROM_JSON(prop, prop_);
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
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->entityId_ == nullptr && this->entityType_ == nullptr && this->prop_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Entity& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline Entity& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline Entity& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      // prop Field Functions 
      bool hasProp() const { return this->prop_ != nullptr;};
      void deleteProp() { this->prop_ = nullptr;};
      inline       const Darabonba::Json & getProp() const { DARABONBA_GET(prop_) };
      Darabonba::Json & getProp() { DARABONBA_GET(prop_) };
      inline Entity& setProp(const Darabonba::Json & prop) { DARABONBA_SET_VALUE(prop_, prop) };
      inline Entity& setProp(Darabonba::Json && prop) { DARABONBA_SET_RVALUE(prop_, prop) };


    protected:
      shared_ptr<string> domain_ {};
      shared_ptr<string> entityId_ {};
      shared_ptr<string> entityType_ {};
      Darabonba::Json prop_ {};
    };

    virtual bool empty() const override { return this->entity_ == nullptr
        && this->tags_ == nullptr; };
    // entity Field Functions 
    bool hasEntity() const { return this->entity_ != nullptr;};
    void deleteEntity() { this->entity_ = nullptr;};
    inline const EventResourceForEventView::Entity & getEntity() const { DARABONBA_PTR_GET_CONST(entity_, EventResourceForEventView::Entity) };
    inline EventResourceForEventView::Entity getEntity() { DARABONBA_PTR_GET(entity_, EventResourceForEventView::Entity) };
    inline EventResourceForEventView& setEntity(const EventResourceForEventView::Entity & entity) { DARABONBA_PTR_SET_VALUE(entity_, entity) };
    inline EventResourceForEventView& setEntity(EventResourceForEventView::Entity && entity) { DARABONBA_PTR_SET_RVALUE(entity_, entity) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline EventResourceForEventView& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline EventResourceForEventView& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    shared_ptr<EventResourceForEventView::Entity> entity_ {};
    Darabonba::Json tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
