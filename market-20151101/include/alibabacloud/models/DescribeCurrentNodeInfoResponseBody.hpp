// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECURRENTNODEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECURRENTNODEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeCurrentNodeInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCurrentNodeInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCurrentNodeInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCurrentNodeInfoResponseBody() = default ;
    DescribeCurrentNodeInfoResponseBody(const DescribeCurrentNodeInfoResponseBody &) = default ;
    DescribeCurrentNodeInfoResponseBody(DescribeCurrentNodeInfoResponseBody &&) = default ;
    DescribeCurrentNodeInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCurrentNodeInfoResponseBody() = default ;
    DescribeCurrentNodeInfoResponseBody& operator=(const DescribeCurrentNodeInfoResponseBody &) = default ;
    DescribeCurrentNodeInfoResponseBody& operator=(DescribeCurrentNodeInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AllowRollbackNode, allowRollbackNode_);
        DARABONBA_PTR_TO_JSON(AutoFinishNode, autoFinishNode_);
        DARABONBA_PTR_TO_JSON(FinalStepNo, finalStepNo_);
        DARABONBA_PTR_TO_JSON(GmtExpired, gmtExpired_);
        DARABONBA_PTR_TO_JSON(GmtFinished, gmtFinished_);
        DARABONBA_PTR_TO_JSON(GmtStart, gmtStart_);
        DARABONBA_PTR_TO_JSON(NeedAttachment, needAttachment_);
        DARABONBA_PTR_TO_JSON(NextNodeId, nextNodeId_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
        DARABONBA_PTR_TO_JSON(OperatorRole, operatorRole_);
        DARABONBA_PTR_TO_JSON(ParentNodeId, parentNodeId_);
        DARABONBA_PTR_TO_JSON(PreviousNodeId, previousNodeId_);
        DARABONBA_PTR_TO_JSON(StepNo, stepNo_);
        DARABONBA_PTR_TO_JSON(TemplateForm, templateForm_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowRollbackNode, allowRollbackNode_);
        DARABONBA_PTR_FROM_JSON(AutoFinishNode, autoFinishNode_);
        DARABONBA_PTR_FROM_JSON(FinalStepNo, finalStepNo_);
        DARABONBA_PTR_FROM_JSON(GmtExpired, gmtExpired_);
        DARABONBA_PTR_FROM_JSON(GmtFinished, gmtFinished_);
        DARABONBA_PTR_FROM_JSON(GmtStart, gmtStart_);
        DARABONBA_PTR_FROM_JSON(NeedAttachment, needAttachment_);
        DARABONBA_PTR_FROM_JSON(NextNodeId, nextNodeId_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
        DARABONBA_PTR_FROM_JSON(OperatorRole, operatorRole_);
        DARABONBA_PTR_FROM_JSON(ParentNodeId, parentNodeId_);
        DARABONBA_PTR_FROM_JSON(PreviousNodeId, previousNodeId_);
        DARABONBA_PTR_FROM_JSON(StepNo, stepNo_);
        DARABONBA_PTR_FROM_JSON(TemplateForm, templateForm_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowRollbackNode_ == nullptr
        && this->autoFinishNode_ == nullptr && this->finalStepNo_ == nullptr && this->gmtExpired_ == nullptr && this->gmtFinished_ == nullptr && this->gmtStart_ == nullptr
        && this->needAttachment_ == nullptr && this->nextNodeId_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeStatus_ == nullptr
        && this->operatorRole_ == nullptr && this->parentNodeId_ == nullptr && this->previousNodeId_ == nullptr && this->stepNo_ == nullptr && this->templateForm_ == nullptr; };
      // allowRollbackNode Field Functions 
      bool hasAllowRollbackNode() const { return this->allowRollbackNode_ != nullptr;};
      void deleteAllowRollbackNode() { this->allowRollbackNode_ = nullptr;};
      inline bool getAllowRollbackNode() const { DARABONBA_PTR_GET_DEFAULT(allowRollbackNode_, false) };
      inline Result& setAllowRollbackNode(bool allowRollbackNode) { DARABONBA_PTR_SET_VALUE(allowRollbackNode_, allowRollbackNode) };


      // autoFinishNode Field Functions 
      bool hasAutoFinishNode() const { return this->autoFinishNode_ != nullptr;};
      void deleteAutoFinishNode() { this->autoFinishNode_ = nullptr;};
      inline bool getAutoFinishNode() const { DARABONBA_PTR_GET_DEFAULT(autoFinishNode_, false) };
      inline Result& setAutoFinishNode(bool autoFinishNode) { DARABONBA_PTR_SET_VALUE(autoFinishNode_, autoFinishNode) };


      // finalStepNo Field Functions 
      bool hasFinalStepNo() const { return this->finalStepNo_ != nullptr;};
      void deleteFinalStepNo() { this->finalStepNo_ = nullptr;};
      inline int32_t getFinalStepNo() const { DARABONBA_PTR_GET_DEFAULT(finalStepNo_, 0) };
      inline Result& setFinalStepNo(int32_t finalStepNo) { DARABONBA_PTR_SET_VALUE(finalStepNo_, finalStepNo) };


      // gmtExpired Field Functions 
      bool hasGmtExpired() const { return this->gmtExpired_ != nullptr;};
      void deleteGmtExpired() { this->gmtExpired_ = nullptr;};
      inline int64_t getGmtExpired() const { DARABONBA_PTR_GET_DEFAULT(gmtExpired_, 0L) };
      inline Result& setGmtExpired(int64_t gmtExpired) { DARABONBA_PTR_SET_VALUE(gmtExpired_, gmtExpired) };


      // gmtFinished Field Functions 
      bool hasGmtFinished() const { return this->gmtFinished_ != nullptr;};
      void deleteGmtFinished() { this->gmtFinished_ = nullptr;};
      inline int64_t getGmtFinished() const { DARABONBA_PTR_GET_DEFAULT(gmtFinished_, 0L) };
      inline Result& setGmtFinished(int64_t gmtFinished) { DARABONBA_PTR_SET_VALUE(gmtFinished_, gmtFinished) };


      // gmtStart Field Functions 
      bool hasGmtStart() const { return this->gmtStart_ != nullptr;};
      void deleteGmtStart() { this->gmtStart_ = nullptr;};
      inline int64_t getGmtStart() const { DARABONBA_PTR_GET_DEFAULT(gmtStart_, 0L) };
      inline Result& setGmtStart(int64_t gmtStart) { DARABONBA_PTR_SET_VALUE(gmtStart_, gmtStart) };


      // needAttachment Field Functions 
      bool hasNeedAttachment() const { return this->needAttachment_ != nullptr;};
      void deleteNeedAttachment() { this->needAttachment_ = nullptr;};
      inline bool getNeedAttachment() const { DARABONBA_PTR_GET_DEFAULT(needAttachment_, false) };
      inline Result& setNeedAttachment(bool needAttachment) { DARABONBA_PTR_SET_VALUE(needAttachment_, needAttachment) };


      // nextNodeId Field Functions 
      bool hasNextNodeId() const { return this->nextNodeId_ != nullptr;};
      void deleteNextNodeId() { this->nextNodeId_ = nullptr;};
      inline int64_t getNextNodeId() const { DARABONBA_PTR_GET_DEFAULT(nextNodeId_, 0L) };
      inline Result& setNextNodeId(int64_t nextNodeId) { DARABONBA_PTR_SET_VALUE(nextNodeId_, nextNodeId) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
      inline Result& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline Result& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // nodeStatus Field Functions 
      bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
      void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
      inline string getNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, "") };
      inline Result& setNodeStatus(string nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


      // operatorRole Field Functions 
      bool hasOperatorRole() const { return this->operatorRole_ != nullptr;};
      void deleteOperatorRole() { this->operatorRole_ = nullptr;};
      inline string getOperatorRole() const { DARABONBA_PTR_GET_DEFAULT(operatorRole_, "") };
      inline Result& setOperatorRole(string operatorRole) { DARABONBA_PTR_SET_VALUE(operatorRole_, operatorRole) };


      // parentNodeId Field Functions 
      bool hasParentNodeId() const { return this->parentNodeId_ != nullptr;};
      void deleteParentNodeId() { this->parentNodeId_ = nullptr;};
      inline int64_t getParentNodeId() const { DARABONBA_PTR_GET_DEFAULT(parentNodeId_, 0L) };
      inline Result& setParentNodeId(int64_t parentNodeId) { DARABONBA_PTR_SET_VALUE(parentNodeId_, parentNodeId) };


      // previousNodeId Field Functions 
      bool hasPreviousNodeId() const { return this->previousNodeId_ != nullptr;};
      void deletePreviousNodeId() { this->previousNodeId_ = nullptr;};
      inline int64_t getPreviousNodeId() const { DARABONBA_PTR_GET_DEFAULT(previousNodeId_, 0L) };
      inline Result& setPreviousNodeId(int64_t previousNodeId) { DARABONBA_PTR_SET_VALUE(previousNodeId_, previousNodeId) };


      // stepNo Field Functions 
      bool hasStepNo() const { return this->stepNo_ != nullptr;};
      void deleteStepNo() { this->stepNo_ = nullptr;};
      inline int32_t getStepNo() const { DARABONBA_PTR_GET_DEFAULT(stepNo_, 0) };
      inline Result& setStepNo(int32_t stepNo) { DARABONBA_PTR_SET_VALUE(stepNo_, stepNo) };


      // templateForm Field Functions 
      bool hasTemplateForm() const { return this->templateForm_ != nullptr;};
      void deleteTemplateForm() { this->templateForm_ = nullptr;};
      inline string getTemplateForm() const { DARABONBA_PTR_GET_DEFAULT(templateForm_, "") };
      inline Result& setTemplateForm(string templateForm) { DARABONBA_PTR_SET_VALUE(templateForm_, templateForm) };


    protected:
      shared_ptr<bool> allowRollbackNode_ {};
      shared_ptr<bool> autoFinishNode_ {};
      shared_ptr<int32_t> finalStepNo_ {};
      shared_ptr<int64_t> gmtExpired_ {};
      shared_ptr<int64_t> gmtFinished_ {};
      shared_ptr<int64_t> gmtStart_ {};
      shared_ptr<bool> needAttachment_ {};
      shared_ptr<int64_t> nextNodeId_ {};
      shared_ptr<int64_t> nodeId_ {};
      shared_ptr<string> nodeName_ {};
      shared_ptr<string> nodeStatus_ {};
      shared_ptr<string> operatorRole_ {};
      shared_ptr<int64_t> parentNodeId_ {};
      shared_ptr<int64_t> previousNodeId_ {};
      shared_ptr<int32_t> stepNo_ {};
      shared_ptr<string> templateForm_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCurrentNodeInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeCurrentNodeInfoResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribeCurrentNodeInfoResponseBody::Result) };
    inline DescribeCurrentNodeInfoResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribeCurrentNodeInfoResponseBody::Result) };
    inline DescribeCurrentNodeInfoResponseBody& setResult(const DescribeCurrentNodeInfoResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeCurrentNodeInfoResponseBody& setResult(DescribeCurrentNodeInfoResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCurrentNodeInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeCurrentNodeInfoResponseBody::Result> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
