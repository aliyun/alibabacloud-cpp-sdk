// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYGROUPBASE_HPP_
#define ALIBABACLOUD_MODELS_ENTITYGROUPBASE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EntityDiscoverRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class EntityGroupBase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntityGroupBase& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(entityGroupId, entityGroupId_);
      DARABONBA_PTR_TO_JSON(entityGroupName, entityGroupName_);
      DARABONBA_PTR_TO_JSON(entityQueries, entityQueries_);
      DARABONBA_PTR_TO_JSON(entityRules, entityRules_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, EntityGroupBase& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(entityGroupId, entityGroupId_);
      DARABONBA_PTR_FROM_JSON(entityGroupName, entityGroupName_);
      DARABONBA_PTR_FROM_JSON(entityQueries, entityQueries_);
      DARABONBA_PTR_FROM_JSON(entityRules, entityRules_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    EntityGroupBase() = default ;
    EntityGroupBase(const EntityGroupBase &) = default ;
    EntityGroupBase(EntityGroupBase &&) = default ;
    EntityGroupBase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntityGroupBase() = default ;
    EntityGroupBase& operator=(const EntityGroupBase &) = default ;
    EntityGroupBase& operator=(EntityGroupBase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EntityQueries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EntityQueries& obj) { 
        DARABONBA_PTR_TO_JSON(entityType, entityType_);
        DARABONBA_PTR_TO_JSON(spl, spl_);
      };
      friend void from_json(const Darabonba::Json& j, EntityQueries& obj) { 
        DARABONBA_PTR_FROM_JSON(entityType, entityType_);
        DARABONBA_PTR_FROM_JSON(spl, spl_);
      };
      EntityQueries() = default ;
      EntityQueries(const EntityQueries &) = default ;
      EntityQueries(EntityQueries &&) = default ;
      EntityQueries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EntityQueries() = default ;
      EntityQueries& operator=(const EntityQueries &) = default ;
      EntityQueries& operator=(EntityQueries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->entityType_ == nullptr
        && this->spl_ == nullptr; };
      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline EntityQueries& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      // spl Field Functions 
      bool hasSpl() const { return this->spl_ != nullptr;};
      void deleteSpl() { this->spl_ = nullptr;};
      inline string getSpl() const { DARABONBA_PTR_GET_DEFAULT(spl_, "") };
      inline EntityQueries& setSpl(string spl) { DARABONBA_PTR_SET_VALUE(spl_, spl) };


    protected:
      shared_ptr<string> entityType_ {};
      shared_ptr<string> spl_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->entityGroupId_ == nullptr && this->entityGroupName_ == nullptr && this->entityQueries_ == nullptr && this->entityRules_ == nullptr && this->regionId_ == nullptr
        && this->userId_ == nullptr && this->workspace_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline EntityGroupBase& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // entityGroupId Field Functions 
    bool hasEntityGroupId() const { return this->entityGroupId_ != nullptr;};
    void deleteEntityGroupId() { this->entityGroupId_ = nullptr;};
    inline string getEntityGroupId() const { DARABONBA_PTR_GET_DEFAULT(entityGroupId_, "") };
    inline EntityGroupBase& setEntityGroupId(string entityGroupId) { DARABONBA_PTR_SET_VALUE(entityGroupId_, entityGroupId) };


    // entityGroupName Field Functions 
    bool hasEntityGroupName() const { return this->entityGroupName_ != nullptr;};
    void deleteEntityGroupName() { this->entityGroupName_ = nullptr;};
    inline string getEntityGroupName() const { DARABONBA_PTR_GET_DEFAULT(entityGroupName_, "") };
    inline EntityGroupBase& setEntityGroupName(string entityGroupName) { DARABONBA_PTR_SET_VALUE(entityGroupName_, entityGroupName) };


    // entityQueries Field Functions 
    bool hasEntityQueries() const { return this->entityQueries_ != nullptr;};
    void deleteEntityQueries() { this->entityQueries_ = nullptr;};
    inline const vector<EntityGroupBase::EntityQueries> & getEntityQueries() const { DARABONBA_PTR_GET_CONST(entityQueries_, vector<EntityGroupBase::EntityQueries>) };
    inline vector<EntityGroupBase::EntityQueries> getEntityQueries() { DARABONBA_PTR_GET(entityQueries_, vector<EntityGroupBase::EntityQueries>) };
    inline EntityGroupBase& setEntityQueries(const vector<EntityGroupBase::EntityQueries> & entityQueries) { DARABONBA_PTR_SET_VALUE(entityQueries_, entityQueries) };
    inline EntityGroupBase& setEntityQueries(vector<EntityGroupBase::EntityQueries> && entityQueries) { DARABONBA_PTR_SET_RVALUE(entityQueries_, entityQueries) };


    // entityRules Field Functions 
    bool hasEntityRules() const { return this->entityRules_ != nullptr;};
    void deleteEntityRules() { this->entityRules_ = nullptr;};
    inline const EntityDiscoverRule & getEntityRules() const { DARABONBA_PTR_GET_CONST(entityRules_, EntityDiscoverRule) };
    inline EntityDiscoverRule getEntityRules() { DARABONBA_PTR_GET(entityRules_, EntityDiscoverRule) };
    inline EntityGroupBase& setEntityRules(const EntityDiscoverRule & entityRules) { DARABONBA_PTR_SET_VALUE(entityRules_, entityRules) };
    inline EntityGroupBase& setEntityRules(EntityDiscoverRule && entityRules) { DARABONBA_PTR_SET_RVALUE(entityRules_, entityRules) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EntityGroupBase& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline EntityGroupBase& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline EntityGroupBase& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> entityGroupId_ {};
    shared_ptr<string> entityGroupName_ {};
    shared_ptr<vector<EntityGroupBase::EntityQueries>> entityQueries_ {};
    shared_ptr<EntityDiscoverRule> entityRules_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
