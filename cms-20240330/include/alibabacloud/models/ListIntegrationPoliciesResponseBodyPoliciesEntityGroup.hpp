// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESRESPONSEBODYPOLICIESENTITYGROUP_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESRESPONSEBODYPOLICIESENTITYGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPoliciesResponseBodyPoliciesEntityGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPoliciesResponseBodyPoliciesEntityGroup& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(entityGroupId, entityGroupId_);
      DARABONBA_PTR_TO_JSON(entityGroupName, entityGroupName_);
      DARABONBA_PTR_TO_JSON(entityRules, entityRules_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPoliciesResponseBodyPoliciesEntityGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(entityGroupId, entityGroupId_);
      DARABONBA_PTR_FROM_JSON(entityGroupName, entityGroupName_);
      DARABONBA_PTR_FROM_JSON(entityRules, entityRules_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListIntegrationPoliciesResponseBodyPoliciesEntityGroup() = default ;
    ListIntegrationPoliciesResponseBodyPoliciesEntityGroup(const ListIntegrationPoliciesResponseBodyPoliciesEntityGroup &) = default ;
    ListIntegrationPoliciesResponseBodyPoliciesEntityGroup(ListIntegrationPoliciesResponseBodyPoliciesEntityGroup &&) = default ;
    ListIntegrationPoliciesResponseBodyPoliciesEntityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPoliciesResponseBodyPoliciesEntityGroup() = default ;
    ListIntegrationPoliciesResponseBodyPoliciesEntityGroup& operator=(const ListIntegrationPoliciesResponseBodyPoliciesEntityGroup &) = default ;
    ListIntegrationPoliciesResponseBodyPoliciesEntityGroup& operator=(ListIntegrationPoliciesResponseBodyPoliciesEntityGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->entityGroupId_ == nullptr && return this->entityGroupName_ == nullptr && return this->entityRules_ == nullptr && return this->query_ == nullptr && return this->regionId_ == nullptr
        && return this->userId_ == nullptr && return this->workspace_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListIntegrationPoliciesResponseBodyPoliciesEntityGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // entityGroupId Field Functions 
    bool hasEntityGroupId() const { return this->entityGroupId_ != nullptr;};
    void deleteEntityGroupId() { this->entityGroupId_ = nullptr;};
    inline string entityGroupId() const { DARABONBA_PTR_GET_DEFAULT(entityGroupId_, "") };
    inline ListIntegrationPoliciesResponseBodyPoliciesEntityGroup& setEntityGroupId(string entityGroupId) { DARABONBA_PTR_SET_VALUE(entityGroupId_, entityGroupId) };


    // entityGroupName Field Functions 
    bool hasEntityGroupName() const { return this->entityGroupName_ != nullptr;};
    void deleteEntityGroupName() { this->entityGroupName_ = nullptr;};
    inline string entityGroupName() const { DARABONBA_PTR_GET_DEFAULT(entityGroupName_, "") };
    inline ListIntegrationPoliciesResponseBodyPoliciesEntityGroup& setEntityGroupName(string entityGroupName) { DARABONBA_PTR_SET_VALUE(entityGroupName_, entityGroupName) };


    // entityRules Field Functions 
    bool hasEntityRules() const { return this->entityRules_ != nullptr;};
    void deleteEntityRules() { this->entityRules_ = nullptr;};
    inline const Models::ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRules & entityRules() const { DARABONBA_PTR_GET_CONST(entityRules_, Models::ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRules) };
    inline Models::ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRules entityRules() { DARABONBA_PTR_GET(entityRules_, Models::ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRules) };
    inline ListIntegrationPoliciesResponseBodyPoliciesEntityGroup& setEntityRules(const Models::ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRules & entityRules) { DARABONBA_PTR_SET_VALUE(entityRules_, entityRules) };
    inline ListIntegrationPoliciesResponseBodyPoliciesEntityGroup& setEntityRules(Models::ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRules && entityRules) { DARABONBA_PTR_SET_RVALUE(entityRules_, entityRules) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListIntegrationPoliciesResponseBodyPoliciesEntityGroup& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIntegrationPoliciesResponseBodyPoliciesEntityGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListIntegrationPoliciesResponseBodyPoliciesEntityGroup& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListIntegrationPoliciesResponseBodyPoliciesEntityGroup& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Description.
    std::shared_ptr<string> description_ = nullptr;
    // Entity group ID
    std::shared_ptr<string> entityGroupId_ = nullptr;
    // Entity group name
    std::shared_ptr<string> entityGroupName_ = nullptr;
    // Entity group
    std::shared_ptr<Models::ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRules> entityRules_ = nullptr;
    // Search keyword, supports document library name and description
    std::shared_ptr<string> query_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // User ID
    std::shared_ptr<string> userId_ = nullptr;
    // Workspace.
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
