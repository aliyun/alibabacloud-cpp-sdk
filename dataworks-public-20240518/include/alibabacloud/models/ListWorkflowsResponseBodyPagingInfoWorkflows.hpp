// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWSRESPONSEBODYPAGINGINFOWORKFLOWS_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWSRESPONSEBODYPAGINGINFOWORKFLOWS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkflowsResponseBodyPagingInfoWorkflowsTags.hpp>
#include <alibabacloud/models/ListWorkflowsResponseBodyPagingInfoWorkflowsTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListWorkflowsResponseBodyPagingInfoWorkflows : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowsResponseBodyPagingInfoWorkflows& obj) { 
      DARABONBA_PTR_TO_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowsResponseBodyPagingInfoWorkflows& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    ListWorkflowsResponseBodyPagingInfoWorkflows() = default ;
    ListWorkflowsResponseBodyPagingInfoWorkflows(const ListWorkflowsResponseBodyPagingInfoWorkflows &) = default ;
    ListWorkflowsResponseBodyPagingInfoWorkflows(ListWorkflowsResponseBodyPagingInfoWorkflows &&) = default ;
    ListWorkflowsResponseBodyPagingInfoWorkflows(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowsResponseBodyPagingInfoWorkflows() = default ;
    ListWorkflowsResponseBodyPagingInfoWorkflows& operator=(const ListWorkflowsResponseBodyPagingInfoWorkflows &) = default ;
    ListWorkflowsResponseBodyPagingInfoWorkflows& operator=(ListWorkflowsResponseBodyPagingInfoWorkflows &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientUniqueCode_ == nullptr
        && return this->createTime_ == nullptr && return this->createUser_ == nullptr && return this->description_ == nullptr && return this->envType_ == nullptr && return this->id_ == nullptr
        && return this->modifyTime_ == nullptr && return this->modifyUser_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr && return this->parameters_ == nullptr
        && return this->projectId_ == nullptr && return this->tags_ == nullptr && return this->trigger_ == nullptr; };
    // clientUniqueCode Field Functions 
    bool hasClientUniqueCode() const { return this->clientUniqueCode_ != nullptr;};
    void deleteClientUniqueCode() { this->clientUniqueCode_ = nullptr;};
    inline string clientUniqueCode() const { DARABONBA_PTR_GET_DEFAULT(clientUniqueCode_, "") };
    inline ListWorkflowsResponseBodyPagingInfoWorkflows& setClientUniqueCode(string clientUniqueCode) { DARABONBA_PTR_SET_VALUE(clientUniqueCode_, clientUniqueCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListWorkflowsResponseBodyPagingInfoWorkflows& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListWorkflowsResponseBodyPagingInfoWorkflows& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListWorkflowsResponseBodyPagingInfoWorkflows& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListWorkflowsResponseBodyPagingInfoWorkflows& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListWorkflowsResponseBodyPagingInfoWorkflows& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListWorkflowsResponseBodyPagingInfoWorkflows& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline ListWorkflowsResponseBodyPagingInfoWorkflows& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWorkflowsResponseBodyPagingInfoWorkflows& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListWorkflowsResponseBodyPagingInfoWorkflows& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ListWorkflowsResponseBodyPagingInfoWorkflows& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListWorkflowsResponseBodyPagingInfoWorkflows& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListWorkflowsResponseBodyPagingInfoWorkflowsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListWorkflowsResponseBodyPagingInfoWorkflowsTags>) };
    inline vector<Models::ListWorkflowsResponseBodyPagingInfoWorkflowsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListWorkflowsResponseBodyPagingInfoWorkflowsTags>) };
    inline ListWorkflowsResponseBodyPagingInfoWorkflows& setTags(const vector<Models::ListWorkflowsResponseBodyPagingInfoWorkflowsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListWorkflowsResponseBodyPagingInfoWorkflows& setTags(vector<Models::ListWorkflowsResponseBodyPagingInfoWorkflowsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const Models::ListWorkflowsResponseBodyPagingInfoWorkflowsTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, Models::ListWorkflowsResponseBodyPagingInfoWorkflowsTrigger) };
    inline Models::ListWorkflowsResponseBodyPagingInfoWorkflowsTrigger trigger() { DARABONBA_PTR_GET(trigger_, Models::ListWorkflowsResponseBodyPagingInfoWorkflowsTrigger) };
    inline ListWorkflowsResponseBodyPagingInfoWorkflows& setTrigger(const Models::ListWorkflowsResponseBodyPagingInfoWorkflowsTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline ListWorkflowsResponseBodyPagingInfoWorkflows& setTrigger(Models::ListWorkflowsResponseBodyPagingInfoWorkflowsTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The unique code of the client. This parameter is used to create a workflow asynchronously and implement the idempotence of the workflow. If you do not specify this parameter when you create the workflow, the system automatically generates a unique code. The unique code is uniquely associated with the workflow ID. If you specify this parameter when you update or delete the workflow, the value of this parameter must be the unique code that is used to create the workflow.
    std::shared_ptr<string> clientUniqueCode_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The account ID of the creator.
    std::shared_ptr<string> createUser_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The environment of the workspace. Valid values:
    // 
    // *   Prod
    // *   Dev
    std::shared_ptr<string> envType_ = nullptr;
    // The workflow ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The modification time.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The account ID of the modifier.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // The name.
    std::shared_ptr<string> name_ = nullptr;
    // The account ID of the owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The parameters.
    std::shared_ptr<string> parameters_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The task tag.
    std::shared_ptr<vector<Models::ListWorkflowsResponseBodyPagingInfoWorkflowsTags>> tags_ = nullptr;
    // The trigger method.
    std::shared_ptr<Models::ListWorkflowsResponseBodyPagingInfoWorkflowsTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
