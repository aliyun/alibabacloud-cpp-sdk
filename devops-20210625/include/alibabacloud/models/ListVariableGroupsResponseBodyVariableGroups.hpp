// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVARIABLEGROUPSRESPONSEBODYVARIABLEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTVARIABLEGROUPSRESPONSEBODYVARIABLEGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines.hpp>
#include <alibabacloud/models/ListVariableGroupsResponseBodyVariableGroupsVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListVariableGroupsResponseBodyVariableGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVariableGroupsResponseBodyVariableGroups& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(modifierAccountId, modifierAccountId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(relatedPipelines, relatedPipelines_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, ListVariableGroupsResponseBodyVariableGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(modifierAccountId, modifierAccountId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(relatedPipelines, relatedPipelines_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    ListVariableGroupsResponseBodyVariableGroups() = default ;
    ListVariableGroupsResponseBodyVariableGroups(const ListVariableGroupsResponseBodyVariableGroups &) = default ;
    ListVariableGroupsResponseBodyVariableGroups(ListVariableGroupsResponseBodyVariableGroups &&) = default ;
    ListVariableGroupsResponseBodyVariableGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVariableGroupsResponseBodyVariableGroups() = default ;
    ListVariableGroupsResponseBodyVariableGroups& operator=(const ListVariableGroupsResponseBodyVariableGroups &) = default ;
    ListVariableGroupsResponseBodyVariableGroups& operator=(ListVariableGroupsResponseBodyVariableGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->creatorAccountId_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->modifierAccountId_ == nullptr && return this->name_ == nullptr
        && return this->relatedPipelines_ == nullptr && return this->updateTime_ == nullptr && return this->variables_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListVariableGroupsResponseBodyVariableGroups& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorAccountId Field Functions 
    bool hasCreatorAccountId() const { return this->creatorAccountId_ != nullptr;};
    void deleteCreatorAccountId() { this->creatorAccountId_ = nullptr;};
    inline string creatorAccountId() const { DARABONBA_PTR_GET_DEFAULT(creatorAccountId_, "") };
    inline ListVariableGroupsResponseBodyVariableGroups& setCreatorAccountId(string creatorAccountId) { DARABONBA_PTR_SET_VALUE(creatorAccountId_, creatorAccountId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListVariableGroupsResponseBodyVariableGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListVariableGroupsResponseBodyVariableGroups& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifierAccountId Field Functions 
    bool hasModifierAccountId() const { return this->modifierAccountId_ != nullptr;};
    void deleteModifierAccountId() { this->modifierAccountId_ = nullptr;};
    inline string modifierAccountId() const { DARABONBA_PTR_GET_DEFAULT(modifierAccountId_, "") };
    inline ListVariableGroupsResponseBodyVariableGroups& setModifierAccountId(string modifierAccountId) { DARABONBA_PTR_SET_VALUE(modifierAccountId_, modifierAccountId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListVariableGroupsResponseBodyVariableGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // relatedPipelines Field Functions 
    bool hasRelatedPipelines() const { return this->relatedPipelines_ != nullptr;};
    void deleteRelatedPipelines() { this->relatedPipelines_ = nullptr;};
    inline const vector<Models::ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines> & relatedPipelines() const { DARABONBA_PTR_GET_CONST(relatedPipelines_, vector<Models::ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines>) };
    inline vector<Models::ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines> relatedPipelines() { DARABONBA_PTR_GET(relatedPipelines_, vector<Models::ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines>) };
    inline ListVariableGroupsResponseBodyVariableGroups& setRelatedPipelines(const vector<Models::ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines> & relatedPipelines) { DARABONBA_PTR_SET_VALUE(relatedPipelines_, relatedPipelines) };
    inline ListVariableGroupsResponseBodyVariableGroups& setRelatedPipelines(vector<Models::ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines> && relatedPipelines) { DARABONBA_PTR_SET_RVALUE(relatedPipelines_, relatedPipelines) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListVariableGroupsResponseBodyVariableGroups& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::ListVariableGroupsResponseBodyVariableGroupsVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::ListVariableGroupsResponseBodyVariableGroupsVariables>) };
    inline vector<Models::ListVariableGroupsResponseBodyVariableGroupsVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::ListVariableGroupsResponseBodyVariableGroupsVariables>) };
    inline ListVariableGroupsResponseBodyVariableGroups& setVariables(const vector<Models::ListVariableGroupsResponseBodyVariableGroupsVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline ListVariableGroupsResponseBodyVariableGroups& setVariables(vector<Models::ListVariableGroupsResponseBodyVariableGroupsVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> creatorAccountId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> modifierAccountId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines>> relatedPipelines_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    std::shared_ptr<vector<Models::ListVariableGroupsResponseBodyVariableGroupsVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
