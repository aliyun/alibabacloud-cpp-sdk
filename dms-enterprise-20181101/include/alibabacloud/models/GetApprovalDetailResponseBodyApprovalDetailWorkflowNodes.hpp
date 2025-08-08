// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODYAPPROVALDETAILWORKFLOWNODES_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODYAPPROVALDETAILWORKFLOWNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes& obj) { 
      DARABONBA_PTR_TO_JSON(WorkflowNode, workflowNode_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkflowNode, workflowNode_);
    };
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes() = default ;
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes(const GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes &) = default ;
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes(GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes &&) = default ;
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes() = default ;
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes& operator=(const GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes &) = default ;
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes& operator=(GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->workflowNode_ != nullptr; };
    // workflowNode Field Functions 
    bool hasWorkflowNode() const { return this->workflowNode_ != nullptr;};
    void deleteWorkflowNode() { this->workflowNode_ = nullptr;};
    inline const vector<Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode> & workflowNode() const { DARABONBA_PTR_GET_CONST(workflowNode_, vector<Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode>) };
    inline vector<Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode> workflowNode() { DARABONBA_PTR_GET(workflowNode_, vector<Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode>) };
    inline GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes& setWorkflowNode(const vector<Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode> & workflowNode) { DARABONBA_PTR_SET_VALUE(workflowNode_, workflowNode) };
    inline GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes& setWorkflowNode(vector<Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode> && workflowNode) { DARABONBA_PTR_SET_RVALUE(workflowNode_, workflowNode) };


  protected:
    std::shared_ptr<vector<Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode>> workflowNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
