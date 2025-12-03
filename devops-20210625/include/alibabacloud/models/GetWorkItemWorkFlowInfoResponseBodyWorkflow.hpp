// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMWORKFLOWINFORESPONSEBODYWORKFLOW_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMWORKFLOWINFORESPONSEBODYWORKFLOW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkItemWorkFlowInfoResponseBodyWorkflowStatuses.hpp>
#include <alibabacloud/models/GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkItemWorkFlowInfoResponseBodyWorkflow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemWorkFlowInfoResponseBodyWorkflow& obj) { 
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(defaultStatusIdentifier, defaultStatusIdentifier_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ownerSpaceIdentifier, ownerSpaceIdentifier_);
      DARABONBA_PTR_TO_JSON(ownerSpaceType, ownerSpaceType_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(statusOrder, statusOrder_);
      DARABONBA_PTR_TO_JSON(statuses, statuses_);
      DARABONBA_PTR_TO_JSON(workflowActions, workflowActions_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemWorkFlowInfoResponseBodyWorkflow& obj) { 
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(defaultStatusIdentifier, defaultStatusIdentifier_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ownerSpaceIdentifier, ownerSpaceIdentifier_);
      DARABONBA_PTR_FROM_JSON(ownerSpaceType, ownerSpaceType_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(statusOrder, statusOrder_);
      DARABONBA_PTR_FROM_JSON(statuses, statuses_);
      DARABONBA_PTR_FROM_JSON(workflowActions, workflowActions_);
    };
    GetWorkItemWorkFlowInfoResponseBodyWorkflow() = default ;
    GetWorkItemWorkFlowInfoResponseBodyWorkflow(const GetWorkItemWorkFlowInfoResponseBodyWorkflow &) = default ;
    GetWorkItemWorkFlowInfoResponseBodyWorkflow(GetWorkItemWorkFlowInfoResponseBodyWorkflow &&) = default ;
    GetWorkItemWorkFlowInfoResponseBodyWorkflow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemWorkFlowInfoResponseBodyWorkflow() = default ;
    GetWorkItemWorkFlowInfoResponseBodyWorkflow& operator=(const GetWorkItemWorkFlowInfoResponseBodyWorkflow &) = default ;
    GetWorkItemWorkFlowInfoResponseBodyWorkflow& operator=(GetWorkItemWorkFlowInfoResponseBodyWorkflow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && return this->defaultStatusIdentifier_ == nullptr && return this->description_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->identifier_ == nullptr
        && return this->modifier_ == nullptr && return this->name_ == nullptr && return this->ownerSpaceIdentifier_ == nullptr && return this->ownerSpaceType_ == nullptr && return this->resourceType_ == nullptr
        && return this->source_ == nullptr && return this->statusOrder_ == nullptr && return this->statuses_ == nullptr && return this->workflowActions_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // defaultStatusIdentifier Field Functions 
    bool hasDefaultStatusIdentifier() const { return this->defaultStatusIdentifier_ != nullptr;};
    void deleteDefaultStatusIdentifier() { this->defaultStatusIdentifier_ = nullptr;};
    inline string defaultStatusIdentifier() const { DARABONBA_PTR_GET_DEFAULT(defaultStatusIdentifier_, "") };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setDefaultStatusIdentifier(string defaultStatusIdentifier) { DARABONBA_PTR_SET_VALUE(defaultStatusIdentifier_, defaultStatusIdentifier) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerSpaceIdentifier Field Functions 
    bool hasOwnerSpaceIdentifier() const { return this->ownerSpaceIdentifier_ != nullptr;};
    void deleteOwnerSpaceIdentifier() { this->ownerSpaceIdentifier_ = nullptr;};
    inline string ownerSpaceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(ownerSpaceIdentifier_, "") };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setOwnerSpaceIdentifier(string ownerSpaceIdentifier) { DARABONBA_PTR_SET_VALUE(ownerSpaceIdentifier_, ownerSpaceIdentifier) };


    // ownerSpaceType Field Functions 
    bool hasOwnerSpaceType() const { return this->ownerSpaceType_ != nullptr;};
    void deleteOwnerSpaceType() { this->ownerSpaceType_ = nullptr;};
    inline string ownerSpaceType() const { DARABONBA_PTR_GET_DEFAULT(ownerSpaceType_, "") };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setOwnerSpaceType(string ownerSpaceType) { DARABONBA_PTR_SET_VALUE(ownerSpaceType_, ownerSpaceType) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // statusOrder Field Functions 
    bool hasStatusOrder() const { return this->statusOrder_ != nullptr;};
    void deleteStatusOrder() { this->statusOrder_ = nullptr;};
    inline string statusOrder() const { DARABONBA_PTR_GET_DEFAULT(statusOrder_, "") };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setStatusOrder(string statusOrder) { DARABONBA_PTR_SET_VALUE(statusOrder_, statusOrder) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<Models::GetWorkItemWorkFlowInfoResponseBodyWorkflowStatuses> & statuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<Models::GetWorkItemWorkFlowInfoResponseBodyWorkflowStatuses>) };
    inline vector<Models::GetWorkItemWorkFlowInfoResponseBodyWorkflowStatuses> statuses() { DARABONBA_PTR_GET(statuses_, vector<Models::GetWorkItemWorkFlowInfoResponseBodyWorkflowStatuses>) };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setStatuses(const vector<Models::GetWorkItemWorkFlowInfoResponseBodyWorkflowStatuses> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setStatuses(vector<Models::GetWorkItemWorkFlowInfoResponseBodyWorkflowStatuses> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


    // workflowActions Field Functions 
    bool hasWorkflowActions() const { return this->workflowActions_ != nullptr;};
    void deleteWorkflowActions() { this->workflowActions_ = nullptr;};
    inline const vector<Models::GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions> & workflowActions() const { DARABONBA_PTR_GET_CONST(workflowActions_, vector<Models::GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions>) };
    inline vector<Models::GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions> workflowActions() { DARABONBA_PTR_GET(workflowActions_, vector<Models::GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions>) };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setWorkflowActions(const vector<Models::GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions> & workflowActions) { DARABONBA_PTR_SET_VALUE(workflowActions_, workflowActions) };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflow& setWorkflowActions(vector<Models::GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions> && workflowActions) { DARABONBA_PTR_SET_RVALUE(workflowActions_, workflowActions) };


  protected:
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> defaultStatusIdentifier_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerSpaceIdentifier_ = nullptr;
    std::shared_ptr<string> ownerSpaceType_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> statusOrder_ = nullptr;
    std::shared_ptr<vector<Models::GetWorkItemWorkFlowInfoResponseBodyWorkflowStatuses>> statuses_ = nullptr;
    std::shared_ptr<vector<Models::GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions>> workflowActions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
