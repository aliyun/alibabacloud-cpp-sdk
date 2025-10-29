// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWDEFINITIONSRESPONSEBODYPAGINGINFOWORKFLOWDEFINITIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWDEFINITIONSRESPONSEBODYPAGINGINFOWORKFLOWDEFINITIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions() = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions(const ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions &) = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions(ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions &&) = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions() = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions& operator=(const ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions &) = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions& operator=(ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->id_ == nullptr && return this->modifyTime_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr
        && return this->projectId_ == nullptr && return this->script_ == nullptr && return this->type_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline const Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript & script() const { DARABONBA_PTR_GET_CONST(script_, Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript) };
    inline Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript script() { DARABONBA_PTR_GET(script_, Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript) };
    inline ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions& setScript(const Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
    inline ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions& setScript(Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the workflow was created. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the workflow.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the workflow.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The time when the workflow was last modified. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The name of the workflow.
    std::shared_ptr<string> name_ = nullptr;
    // The owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The ID of the DataWorks workspace to which the workflow belongs.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The script information.
    std::shared_ptr<Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript> script_ = nullptr;
    // The type of the workflow.
    // 
    // Valid values:
    // 
    // *   CycleWorkflow
    // *   ManualWorkflow
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
