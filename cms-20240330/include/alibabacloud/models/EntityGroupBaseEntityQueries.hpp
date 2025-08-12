// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYGROUPBASEENTITYQUERIES_HPP_
#define ALIBABACLOUD_MODELS_ENTITYGROUPBASEENTITYQUERIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class EntityGroupBaseEntityQueries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntityGroupBaseEntityQueries& obj) { 
      DARABONBA_PTR_TO_JSON(entityType, entityType_);
      DARABONBA_PTR_TO_JSON(spl, spl_);
    };
    friend void from_json(const Darabonba::Json& j, EntityGroupBaseEntityQueries& obj) { 
      DARABONBA_PTR_FROM_JSON(entityType, entityType_);
      DARABONBA_PTR_FROM_JSON(spl, spl_);
    };
    EntityGroupBaseEntityQueries() = default ;
    EntityGroupBaseEntityQueries(const EntityGroupBaseEntityQueries &) = default ;
    EntityGroupBaseEntityQueries(EntityGroupBaseEntityQueries &&) = default ;
    EntityGroupBaseEntityQueries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntityGroupBaseEntityQueries() = default ;
    EntityGroupBaseEntityQueries& operator=(const EntityGroupBaseEntityQueries &) = default ;
    EntityGroupBaseEntityQueries& operator=(EntityGroupBaseEntityQueries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityType_ != nullptr
        && this->spl_ != nullptr; };
    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline EntityGroupBaseEntityQueries& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // spl Field Functions 
    bool hasSpl() const { return this->spl_ != nullptr;};
    void deleteSpl() { this->spl_ = nullptr;};
    inline string spl() const { DARABONBA_PTR_GET_DEFAULT(spl_, "") };
    inline EntityGroupBaseEntityQueries& setSpl(string spl) { DARABONBA_PTR_SET_VALUE(spl_, spl) };


  protected:
    std::shared_ptr<string> entityType_ = nullptr;
    std::shared_ptr<string> spl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
