// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEDESIGNPROJECTFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEDESIGNPROJECTFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableDesignProjectFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableDesignProjectFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ProjectFlow, projectFlow_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableDesignProjectFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ProjectFlow, projectFlow_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTableDesignProjectFlowResponseBody() = default ;
    GetTableDesignProjectFlowResponseBody(const GetTableDesignProjectFlowResponseBody &) = default ;
    GetTableDesignProjectFlowResponseBody(GetTableDesignProjectFlowResponseBody &&) = default ;
    GetTableDesignProjectFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableDesignProjectFlowResponseBody() = default ;
    GetTableDesignProjectFlowResponseBody& operator=(const GetTableDesignProjectFlowResponseBody &) = default ;
    GetTableDesignProjectFlowResponseBody& operator=(GetTableDesignProjectFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProjectFlow : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProjectFlow& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPosition, currentPosition_);
        DARABONBA_PTR_TO_JSON(FlowNodeArray, flowNodeArray_);
        DARABONBA_PTR_TO_JSON(RuleComment, ruleComment_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      };
      friend void from_json(const Darabonba::Json& j, ProjectFlow& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPosition, currentPosition_);
        DARABONBA_PTR_FROM_JSON(FlowNodeArray, flowNodeArray_);
        DARABONBA_PTR_FROM_JSON(RuleComment, ruleComment_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      };
      ProjectFlow() = default ;
      ProjectFlow(const ProjectFlow &) = default ;
      ProjectFlow(ProjectFlow &&) = default ;
      ProjectFlow(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProjectFlow() = default ;
      ProjectFlow& operator=(const ProjectFlow &) = default ;
      ProjectFlow& operator=(ProjectFlow &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FlowNodeArray : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlowNodeArray& obj) { 
          DARABONBA_PTR_TO_JSON(BackToDesign, backToDesign_);
          DARABONBA_PTR_TO_JSON(CanSkip, canSkip_);
          DARABONBA_PTR_TO_JSON(NodeRole, nodeRole_);
          DARABONBA_PTR_TO_JSON(NodeTitle, nodeTitle_);
          DARABONBA_PTR_TO_JSON(Position, position_);
          DARABONBA_PTR_TO_JSON(PublishAnchor, publishAnchor_);
          DARABONBA_PTR_TO_JSON(PublishStrategies, publishStrategies_);
        };
        friend void from_json(const Darabonba::Json& j, FlowNodeArray& obj) { 
          DARABONBA_PTR_FROM_JSON(BackToDesign, backToDesign_);
          DARABONBA_PTR_FROM_JSON(CanSkip, canSkip_);
          DARABONBA_PTR_FROM_JSON(NodeRole, nodeRole_);
          DARABONBA_PTR_FROM_JSON(NodeTitle, nodeTitle_);
          DARABONBA_PTR_FROM_JSON(Position, position_);
          DARABONBA_PTR_FROM_JSON(PublishAnchor, publishAnchor_);
          DARABONBA_PTR_FROM_JSON(PublishStrategies, publishStrategies_);
        };
        FlowNodeArray() = default ;
        FlowNodeArray(const FlowNodeArray &) = default ;
        FlowNodeArray(FlowNodeArray &&) = default ;
        FlowNodeArray(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlowNodeArray() = default ;
        FlowNodeArray& operator=(const FlowNodeArray &) = default ;
        FlowNodeArray& operator=(FlowNodeArray &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backToDesign_ == nullptr
        && this->canSkip_ == nullptr && this->nodeRole_ == nullptr && this->nodeTitle_ == nullptr && this->position_ == nullptr && this->publishAnchor_ == nullptr
        && this->publishStrategies_ == nullptr; };
        // backToDesign Field Functions 
        bool hasBackToDesign() const { return this->backToDesign_ != nullptr;};
        void deleteBackToDesign() { this->backToDesign_ = nullptr;};
        inline bool getBackToDesign() const { DARABONBA_PTR_GET_DEFAULT(backToDesign_, false) };
        inline FlowNodeArray& setBackToDesign(bool backToDesign) { DARABONBA_PTR_SET_VALUE(backToDesign_, backToDesign) };


        // canSkip Field Functions 
        bool hasCanSkip() const { return this->canSkip_ != nullptr;};
        void deleteCanSkip() { this->canSkip_ = nullptr;};
        inline bool getCanSkip() const { DARABONBA_PTR_GET_DEFAULT(canSkip_, false) };
        inline FlowNodeArray& setCanSkip(bool canSkip) { DARABONBA_PTR_SET_VALUE(canSkip_, canSkip) };


        // nodeRole Field Functions 
        bool hasNodeRole() const { return this->nodeRole_ != nullptr;};
        void deleteNodeRole() { this->nodeRole_ = nullptr;};
        inline string getNodeRole() const { DARABONBA_PTR_GET_DEFAULT(nodeRole_, "") };
        inline FlowNodeArray& setNodeRole(string nodeRole) { DARABONBA_PTR_SET_VALUE(nodeRole_, nodeRole) };


        // nodeTitle Field Functions 
        bool hasNodeTitle() const { return this->nodeTitle_ != nullptr;};
        void deleteNodeTitle() { this->nodeTitle_ = nullptr;};
        inline string getNodeTitle() const { DARABONBA_PTR_GET_DEFAULT(nodeTitle_, "") };
        inline FlowNodeArray& setNodeTitle(string nodeTitle) { DARABONBA_PTR_SET_VALUE(nodeTitle_, nodeTitle) };


        // position Field Functions 
        bool hasPosition() const { return this->position_ != nullptr;};
        void deletePosition() { this->position_ = nullptr;};
        inline int32_t getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
        inline FlowNodeArray& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


        // publishAnchor Field Functions 
        bool hasPublishAnchor() const { return this->publishAnchor_ != nullptr;};
        void deletePublishAnchor() { this->publishAnchor_ = nullptr;};
        inline bool getPublishAnchor() const { DARABONBA_PTR_GET_DEFAULT(publishAnchor_, false) };
        inline FlowNodeArray& setPublishAnchor(bool publishAnchor) { DARABONBA_PTR_SET_VALUE(publishAnchor_, publishAnchor) };


        // publishStrategies Field Functions 
        bool hasPublishStrategies() const { return this->publishStrategies_ != nullptr;};
        void deletePublishStrategies() { this->publishStrategies_ = nullptr;};
        inline const vector<string> & getPublishStrategies() const { DARABONBA_PTR_GET_CONST(publishStrategies_, vector<string>) };
        inline vector<string> getPublishStrategies() { DARABONBA_PTR_GET(publishStrategies_, vector<string>) };
        inline FlowNodeArray& setPublishStrategies(const vector<string> & publishStrategies) { DARABONBA_PTR_SET_VALUE(publishStrategies_, publishStrategies) };
        inline FlowNodeArray& setPublishStrategies(vector<string> && publishStrategies) { DARABONBA_PTR_SET_RVALUE(publishStrategies_, publishStrategies) };


      protected:
        // Indicates whether the ticket can be returned to the schema design node. Valid values:
        // 
        // *   **1**: The ticket can be returned to the schema design node.
        // *   **0**: The ticket cannot be returned to the schema design node. This value can be returned only for the PUBLISH node.
        shared_ptr<bool> backToDesign_ {};
        // Indicates whether the current node can be skipped. Valid values:
        // 
        // *   **1**: The current node can be skipped.
        // *   **0**: The current node cannot be skipped. This value can be returned only for the PUBLISH node.
        shared_ptr<bool> canSkip_ {};
        // The role of the node in the process.
        // 
        // *   START: The ticket was created.
        // *   DESIGN: The schema is being created.
        // *   PUBLISH: The schema is published.
        // *   END: The ticket is complete.
        shared_ptr<string> nodeRole_ {};
        // The title of the node.
        shared_ptr<string> nodeTitle_ {};
        // The position of the node in the process. The value starts from 1.
        shared_ptr<int32_t> position_ {};
        // Indicates whether the node is the anchor node. A schema design process has only one anchor node, on which the schema is published. After the schema is published on the anchor node, a post-publish image is generated and the DDL metadata lock is released.
        shared_ptr<bool> publishAnchor_ {};
        // The available publishing strategies.
        shared_ptr<vector<string>> publishStrategies_ {};
      };

      virtual bool empty() const override { return this->currentPosition_ == nullptr
        && this->flowNodeArray_ == nullptr && this->ruleComment_ == nullptr && this->ruleName_ == nullptr; };
      // currentPosition Field Functions 
      bool hasCurrentPosition() const { return this->currentPosition_ != nullptr;};
      void deleteCurrentPosition() { this->currentPosition_ = nullptr;};
      inline int32_t getCurrentPosition() const { DARABONBA_PTR_GET_DEFAULT(currentPosition_, 0) };
      inline ProjectFlow& setCurrentPosition(int32_t currentPosition) { DARABONBA_PTR_SET_VALUE(currentPosition_, currentPosition) };


      // flowNodeArray Field Functions 
      bool hasFlowNodeArray() const { return this->flowNodeArray_ != nullptr;};
      void deleteFlowNodeArray() { this->flowNodeArray_ = nullptr;};
      inline const vector<ProjectFlow::FlowNodeArray> & getFlowNodeArray() const { DARABONBA_PTR_GET_CONST(flowNodeArray_, vector<ProjectFlow::FlowNodeArray>) };
      inline vector<ProjectFlow::FlowNodeArray> getFlowNodeArray() { DARABONBA_PTR_GET(flowNodeArray_, vector<ProjectFlow::FlowNodeArray>) };
      inline ProjectFlow& setFlowNodeArray(const vector<ProjectFlow::FlowNodeArray> & flowNodeArray) { DARABONBA_PTR_SET_VALUE(flowNodeArray_, flowNodeArray) };
      inline ProjectFlow& setFlowNodeArray(vector<ProjectFlow::FlowNodeArray> && flowNodeArray) { DARABONBA_PTR_SET_RVALUE(flowNodeArray_, flowNodeArray) };


      // ruleComment Field Functions 
      bool hasRuleComment() const { return this->ruleComment_ != nullptr;};
      void deleteRuleComment() { this->ruleComment_ = nullptr;};
      inline string getRuleComment() const { DARABONBA_PTR_GET_DEFAULT(ruleComment_, "") };
      inline ProjectFlow& setRuleComment(string ruleComment) { DARABONBA_PTR_SET_VALUE(ruleComment_, ruleComment) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline ProjectFlow& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    protected:
      // The position of the current node in the process.
      shared_ptr<int32_t> currentPosition_ {};
      // The nodes in the process.
      shared_ptr<vector<ProjectFlow::FlowNodeArray>> flowNodeArray_ {};
      // The description of the security rule set that is applied to the schema design ticket.
      shared_ptr<string> ruleComment_ {};
      // The name of the security rule set that is applied to the schema design ticket.
      shared_ptr<string> ruleName_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->projectFlow_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTableDesignProjectFlowResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTableDesignProjectFlowResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // projectFlow Field Functions 
    bool hasProjectFlow() const { return this->projectFlow_ != nullptr;};
    void deleteProjectFlow() { this->projectFlow_ = nullptr;};
    inline const GetTableDesignProjectFlowResponseBody::ProjectFlow & getProjectFlow() const { DARABONBA_PTR_GET_CONST(projectFlow_, GetTableDesignProjectFlowResponseBody::ProjectFlow) };
    inline GetTableDesignProjectFlowResponseBody::ProjectFlow getProjectFlow() { DARABONBA_PTR_GET(projectFlow_, GetTableDesignProjectFlowResponseBody::ProjectFlow) };
    inline GetTableDesignProjectFlowResponseBody& setProjectFlow(const GetTableDesignProjectFlowResponseBody::ProjectFlow & projectFlow) { DARABONBA_PTR_SET_VALUE(projectFlow_, projectFlow) };
    inline GetTableDesignProjectFlowResponseBody& setProjectFlow(GetTableDesignProjectFlowResponseBody::ProjectFlow && projectFlow) { DARABONBA_PTR_SET_RVALUE(projectFlow_, projectFlow) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTableDesignProjectFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTableDesignProjectFlowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The information about the schema design process.
    shared_ptr<GetTableDesignProjectFlowResponseBody::ProjectFlow> projectFlow_ {};
    // The request ID. You can use the request ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
