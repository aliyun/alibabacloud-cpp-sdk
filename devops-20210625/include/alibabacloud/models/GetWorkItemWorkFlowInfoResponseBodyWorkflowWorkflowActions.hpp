// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMWORKFLOWINFORESPONSEBODYWORKFLOWWORKFLOWACTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMWORKFLOWINFORESPONSEBODYWORKFLOWWORKFLOWACTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nextWorkflowStatusIdentifier, nextWorkflowStatusIdentifier_);
      DARABONBA_PTR_TO_JSON(workflowIdentifier, workflowIdentifier_);
      DARABONBA_PTR_TO_JSON(workflowStatusIdentifier, workflowStatusIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nextWorkflowStatusIdentifier, nextWorkflowStatusIdentifier_);
      DARABONBA_PTR_FROM_JSON(workflowIdentifier, workflowIdentifier_);
      DARABONBA_PTR_FROM_JSON(workflowStatusIdentifier, workflowStatusIdentifier_);
    };
    GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions() = default ;
    GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions(const GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions &) = default ;
    GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions(GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions &&) = default ;
    GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions() = default ;
    GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions& operator=(const GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions &) = default ;
    GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions& operator=(GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr && return this->nextWorkflowStatusIdentifier_ == nullptr && return this->workflowIdentifier_ == nullptr && return this->workflowStatusIdentifier_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextWorkflowStatusIdentifier Field Functions 
    bool hasNextWorkflowStatusIdentifier() const { return this->nextWorkflowStatusIdentifier_ != nullptr;};
    void deleteNextWorkflowStatusIdentifier() { this->nextWorkflowStatusIdentifier_ = nullptr;};
    inline string nextWorkflowStatusIdentifier() const { DARABONBA_PTR_GET_DEFAULT(nextWorkflowStatusIdentifier_, "") };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions& setNextWorkflowStatusIdentifier(string nextWorkflowStatusIdentifier) { DARABONBA_PTR_SET_VALUE(nextWorkflowStatusIdentifier_, nextWorkflowStatusIdentifier) };


    // workflowIdentifier Field Functions 
    bool hasWorkflowIdentifier() const { return this->workflowIdentifier_ != nullptr;};
    void deleteWorkflowIdentifier() { this->workflowIdentifier_ = nullptr;};
    inline string workflowIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workflowIdentifier_, "") };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions& setWorkflowIdentifier(string workflowIdentifier) { DARABONBA_PTR_SET_VALUE(workflowIdentifier_, workflowIdentifier) };


    // workflowStatusIdentifier Field Functions 
    bool hasWorkflowStatusIdentifier() const { return this->workflowStatusIdentifier_ != nullptr;};
    void deleteWorkflowStatusIdentifier() { this->workflowStatusIdentifier_ = nullptr;};
    inline string workflowStatusIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workflowStatusIdentifier_, "") };
    inline GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions& setWorkflowStatusIdentifier(string workflowStatusIdentifier) { DARABONBA_PTR_SET_VALUE(workflowStatusIdentifier_, workflowStatusIdentifier) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nextWorkflowStatusIdentifier_ = nullptr;
    std::shared_ptr<string> workflowIdentifier_ = nullptr;
    std::shared_ptr<string> workflowStatusIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
