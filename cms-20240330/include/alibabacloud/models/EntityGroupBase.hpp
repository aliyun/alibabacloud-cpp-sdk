// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYGROUPBASE_HPP_
#define ALIBABACLOUD_MODELS_ENTITYGROUPBASE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EntityGroupBaseEntityQueries.hpp>
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
    virtual bool empty() const override { this->description_ != nullptr
        && this->entityGroupId_ != nullptr && this->entityGroupName_ != nullptr && this->entityQueries_ != nullptr && this->entityRules_ != nullptr && this->regionId_ != nullptr
        && this->userId_ != nullptr && this->workspace_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline EntityGroupBase& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // entityGroupId Field Functions 
    bool hasEntityGroupId() const { return this->entityGroupId_ != nullptr;};
    void deleteEntityGroupId() { this->entityGroupId_ = nullptr;};
    inline string entityGroupId() const { DARABONBA_PTR_GET_DEFAULT(entityGroupId_, "") };
    inline EntityGroupBase& setEntityGroupId(string entityGroupId) { DARABONBA_PTR_SET_VALUE(entityGroupId_, entityGroupId) };


    // entityGroupName Field Functions 
    bool hasEntityGroupName() const { return this->entityGroupName_ != nullptr;};
    void deleteEntityGroupName() { this->entityGroupName_ = nullptr;};
    inline string entityGroupName() const { DARABONBA_PTR_GET_DEFAULT(entityGroupName_, "") };
    inline EntityGroupBase& setEntityGroupName(string entityGroupName) { DARABONBA_PTR_SET_VALUE(entityGroupName_, entityGroupName) };


    // entityQueries Field Functions 
    bool hasEntityQueries() const { return this->entityQueries_ != nullptr;};
    void deleteEntityQueries() { this->entityQueries_ = nullptr;};
    inline const vector<EntityGroupBaseEntityQueries> & entityQueries() const { DARABONBA_PTR_GET_CONST(entityQueries_, vector<EntityGroupBaseEntityQueries>) };
    inline vector<EntityGroupBaseEntityQueries> entityQueries() { DARABONBA_PTR_GET(entityQueries_, vector<EntityGroupBaseEntityQueries>) };
    inline EntityGroupBase& setEntityQueries(const vector<EntityGroupBaseEntityQueries> & entityQueries) { DARABONBA_PTR_SET_VALUE(entityQueries_, entityQueries) };
    inline EntityGroupBase& setEntityQueries(vector<EntityGroupBaseEntityQueries> && entityQueries) { DARABONBA_PTR_SET_RVALUE(entityQueries_, entityQueries) };


    // entityRules Field Functions 
    bool hasEntityRules() const { return this->entityRules_ != nullptr;};
    void deleteEntityRules() { this->entityRules_ = nullptr;};
    inline const EntityDiscoverRule & entityRules() const { DARABONBA_PTR_GET_CONST(entityRules_, EntityDiscoverRule) };
    inline EntityDiscoverRule entityRules() { DARABONBA_PTR_GET(entityRules_, EntityDiscoverRule) };
    inline EntityGroupBase& setEntityRules(const EntityDiscoverRule & entityRules) { DARABONBA_PTR_SET_VALUE(entityRules_, entityRules) };
    inline EntityGroupBase& setEntityRules(EntityDiscoverRule && entityRules) { DARABONBA_PTR_SET_RVALUE(entityRules_, entityRules) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EntityGroupBase& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline EntityGroupBase& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline EntityGroupBase& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> entityGroupId_ = nullptr;
    std::shared_ptr<string> entityGroupName_ = nullptr;
    std::shared_ptr<vector<EntityGroupBaseEntityQueries>> entityQueries_ = nullptr;
    std::shared_ptr<EntityDiscoverRule> entityRules_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
