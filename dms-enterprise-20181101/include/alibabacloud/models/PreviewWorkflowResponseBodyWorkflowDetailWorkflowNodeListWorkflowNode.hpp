// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWWORKFLOWRESPONSEBODYWORKFLOWDETAILWORKFLOWNODELISTWORKFLOWNODE_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWWORKFLOWRESPONSEBODYWORKFLOWDETAILWORKFLOWNODELISTWORKFLOWNODE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode& obj) { 
      DARABONBA_PTR_TO_JSON(AuditUserList, auditUserList_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditUserList, auditUserList_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
    };
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode() = default ;
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode(const PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode &) = default ;
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode(PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode &&) = default ;
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode() = default ;
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode& operator=(const PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode &) = default ;
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode& operator=(PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->auditUserList_ != nullptr
        && this->comment_ != nullptr && this->nodeName_ != nullptr && this->nodeType_ != nullptr; };
    // auditUserList Field Functions 
    bool hasAuditUserList() const { return this->auditUserList_ != nullptr;};
    void deleteAuditUserList() { this->auditUserList_ = nullptr;};
    inline const Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList & auditUserList() const { DARABONBA_PTR_GET_CONST(auditUserList_, Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList) };
    inline Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList auditUserList() { DARABONBA_PTR_GET(auditUserList_, Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList) };
    inline PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode& setAuditUserList(const Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList & auditUserList) { DARABONBA_PTR_SET_VALUE(auditUserList_, auditUserList) };
    inline PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode& setAuditUserList(Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList && auditUserList) { DARABONBA_PTR_SET_RVALUE(auditUserList_, auditUserList) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNode& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    std::shared_ptr<Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList> auditUserList_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
