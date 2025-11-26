// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTRESOURCEFOREVENTVIEWENTITY_HPP_
#define ALIBABACLOUD_MODELS_EVENTRESOURCEFOREVENTVIEWENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class EventResourceForEventViewEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventResourceForEventViewEntity& obj) { 
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(entityId, entityId_);
      DARABONBA_PTR_TO_JSON(entityType, entityType_);
      DARABONBA_ANY_TO_JSON(prop, prop_);
    };
    friend void from_json(const Darabonba::Json& j, EventResourceForEventViewEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(entityId, entityId_);
      DARABONBA_PTR_FROM_JSON(entityType, entityType_);
      DARABONBA_ANY_FROM_JSON(prop, prop_);
    };
    EventResourceForEventViewEntity() = default ;
    EventResourceForEventViewEntity(const EventResourceForEventViewEntity &) = default ;
    EventResourceForEventViewEntity(EventResourceForEventViewEntity &&) = default ;
    EventResourceForEventViewEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventResourceForEventViewEntity() = default ;
    EventResourceForEventViewEntity& operator=(const EventResourceForEventViewEntity &) = default ;
    EventResourceForEventViewEntity& operator=(EventResourceForEventViewEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->entityId_ == nullptr && return this->entityType_ == nullptr && return this->prop_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline EventResourceForEventViewEntity& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline EventResourceForEventViewEntity& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline EventResourceForEventViewEntity& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // prop Field Functions 
    bool hasProp() const { return this->prop_ != nullptr;};
    void deleteProp() { this->prop_ = nullptr;};
    inline     const Darabonba::Json & prop() const { DARABONBA_GET(prop_) };
    Darabonba::Json & prop() { DARABONBA_GET(prop_) };
    inline EventResourceForEventViewEntity& setProp(const Darabonba::Json & prop) { DARABONBA_SET_VALUE(prop_, prop) };
    inline EventResourceForEventViewEntity& setProp(Darabonba::Json & prop) { DARABONBA_SET_RVALUE(prop_, prop) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> entityId_ = nullptr;
    std::shared_ptr<string> entityType_ = nullptr;
    Darabonba::Json prop_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
