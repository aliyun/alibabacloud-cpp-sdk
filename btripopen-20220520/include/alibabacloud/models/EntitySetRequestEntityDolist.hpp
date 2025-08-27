// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYSETREQUESTENTITYDOLIST_HPP_
#define ALIBABACLOUD_MODELS_ENTITYSETREQUESTENTITYDOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class EntitySetRequestEntityDOList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntitySetRequestEntityDOList& obj) { 
      DARABONBA_PTR_TO_JSON(entity_id, entityId_);
      DARABONBA_PTR_TO_JSON(entity_type, entityType_);
    };
    friend void from_json(const Darabonba::Json& j, EntitySetRequestEntityDOList& obj) { 
      DARABONBA_PTR_FROM_JSON(entity_id, entityId_);
      DARABONBA_PTR_FROM_JSON(entity_type, entityType_);
    };
    EntitySetRequestEntityDOList() = default ;
    EntitySetRequestEntityDOList(const EntitySetRequestEntityDOList &) = default ;
    EntitySetRequestEntityDOList(EntitySetRequestEntityDOList &&) = default ;
    EntitySetRequestEntityDOList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntitySetRequestEntityDOList() = default ;
    EntitySetRequestEntityDOList& operator=(const EntitySetRequestEntityDOList &) = default ;
    EntitySetRequestEntityDOList& operator=(EntitySetRequestEntityDOList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityId_ != nullptr
        && this->entityType_ != nullptr; };
    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline EntitySetRequestEntityDOList& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline EntitySetRequestEntityDOList& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> entityId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> entityType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
