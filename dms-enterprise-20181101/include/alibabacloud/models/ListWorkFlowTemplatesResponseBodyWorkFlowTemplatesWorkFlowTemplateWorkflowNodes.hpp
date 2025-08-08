// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWTEMPLATESRESPONSEBODYWORKFLOWTEMPLATESWORKFLOWTEMPLATEWORKFLOWNODES_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWTEMPLATESRESPONSEBODYWORKFLOWTEMPLATESWORKFLOWTEMPLATEWORKFLOWNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes& obj) { 
      DARABONBA_PTR_TO_JSON(WorkflowNode, workflowNode_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkflowNode, workflowNode_);
    };
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes() = default ;
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes(const ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes &) = default ;
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes(ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes &&) = default ;
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes() = default ;
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes& operator=(const ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes &) = default ;
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes& operator=(ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->workflowNode_ != nullptr; };
    // workflowNode Field Functions 
    bool hasWorkflowNode() const { return this->workflowNode_ != nullptr;};
    void deleteWorkflowNode() { this->workflowNode_ = nullptr;};
    inline const vector<Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode> & workflowNode() const { DARABONBA_PTR_GET_CONST(workflowNode_, vector<Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode>) };
    inline vector<Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode> workflowNode() { DARABONBA_PTR_GET(workflowNode_, vector<Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode>) };
    inline ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes& setWorkflowNode(const vector<Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode> & workflowNode) { DARABONBA_PTR_SET_VALUE(workflowNode_, workflowNode) };
    inline ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes& setWorkflowNode(vector<Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode> && workflowNode) { DARABONBA_PTR_SET_RVALUE(workflowNode_, workflowNode) };


  protected:
    std::shared_ptr<vector<Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode>> workflowNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
