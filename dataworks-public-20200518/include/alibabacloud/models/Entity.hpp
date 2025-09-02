// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITY_HPP_
#define ALIBABACLOUD_MODELS_ENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class Entity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Entity& obj) { 
      DARABONBA_ANY_TO_JSON(EntityContent, entityContent_);
      DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, Entity& obj) { 
      DARABONBA_ANY_FROM_JSON(EntityContent, entityContent_);
      DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
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
    virtual bool empty() const override { this->entityContent_ != nullptr
        && this->qualifiedName_ != nullptr && this->tenantId_ != nullptr; };
    // entityContent Field Functions 
    bool hasEntityContent() const { return this->entityContent_ != nullptr;};
    void deleteEntityContent() { this->entityContent_ = nullptr;};
    inline     const Darabonba::Json & entityContent() const { DARABONBA_GET(entityContent_) };
    Darabonba::Json & entityContent() { DARABONBA_GET(entityContent_) };
    inline Entity& setEntityContent(const Darabonba::Json & entityContent) { DARABONBA_SET_VALUE(entityContent_, entityContent) };
    inline Entity& setEntityContent(Darabonba::Json & entityContent) { DARABONBA_SET_RVALUE(entityContent_, entityContent) };


    // qualifiedName Field Functions 
    bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
    void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
    inline string qualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
    inline Entity& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline Entity& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    Darabonba::Json entityContent_ = nullptr;
    std::shared_ptr<string> qualifiedName_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
