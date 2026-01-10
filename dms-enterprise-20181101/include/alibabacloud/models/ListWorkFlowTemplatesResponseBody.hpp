// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWTEMPLATESRESPONSEBODY_HPP_
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
  class ListWorkFlowTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkFlowTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(WorkFlowTemplates, workFlowTemplates_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkFlowTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(WorkFlowTemplates, workFlowTemplates_);
    };
    ListWorkFlowTemplatesResponseBody() = default ;
    ListWorkFlowTemplatesResponseBody(const ListWorkFlowTemplatesResponseBody &) = default ;
    ListWorkFlowTemplatesResponseBody(ListWorkFlowTemplatesResponseBody &&) = default ;
    ListWorkFlowTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkFlowTemplatesResponseBody() = default ;
    ListWorkFlowTemplatesResponseBody& operator=(const ListWorkFlowTemplatesResponseBody &) = default ;
    ListWorkFlowTemplatesResponseBody& operator=(ListWorkFlowTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkFlowTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkFlowTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(WorkFlowTemplate, workFlowTemplate_);
      };
      friend void from_json(const Darabonba::Json& j, WorkFlowTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(WorkFlowTemplate, workFlowTemplate_);
      };
      WorkFlowTemplates() = default ;
      WorkFlowTemplates(const WorkFlowTemplates &) = default ;
      WorkFlowTemplates(WorkFlowTemplates &&) = default ;
      WorkFlowTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkFlowTemplates() = default ;
      WorkFlowTemplates& operator=(const WorkFlowTemplates &) = default ;
      WorkFlowTemplates& operator=(WorkFlowTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WorkFlowTemplate : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WorkFlowTemplate& obj) { 
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(IsSystem, isSystem_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
          DARABONBA_PTR_TO_JSON(WorkflowNodes, workflowNodes_);
        };
        friend void from_json(const Darabonba::Json& j, WorkFlowTemplate& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(IsSystem, isSystem_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
          DARABONBA_PTR_FROM_JSON(WorkflowNodes, workflowNodes_);
        };
        WorkFlowTemplate() = default ;
        WorkFlowTemplate(const WorkFlowTemplate &) = default ;
        WorkFlowTemplate(WorkFlowTemplate &&) = default ;
        WorkFlowTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WorkFlowTemplate() = default ;
        WorkFlowTemplate& operator=(const WorkFlowTemplate &) = default ;
        WorkFlowTemplate& operator=(WorkFlowTemplate &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class WorkflowNodes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WorkflowNodes& obj) { 
            DARABONBA_PTR_TO_JSON(WorkflowNode, workflowNode_);
          };
          friend void from_json(const Darabonba::Json& j, WorkflowNodes& obj) { 
            DARABONBA_PTR_FROM_JSON(WorkflowNode, workflowNode_);
          };
          WorkflowNodes() = default ;
          WorkflowNodes(const WorkflowNodes &) = default ;
          WorkflowNodes(WorkflowNodes &&) = default ;
          WorkflowNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WorkflowNodes() = default ;
          WorkflowNodes& operator=(const WorkflowNodes &) = default ;
          WorkflowNodes& operator=(WorkflowNodes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class WorkflowNode : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const WorkflowNode& obj) { 
              DARABONBA_PTR_TO_JSON(Comment, comment_);
              DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
              DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
              DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
              DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
              DARABONBA_PTR_TO_JSON(Position, position_);
              DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
            };
            friend void from_json(const Darabonba::Json& j, WorkflowNode& obj) { 
              DARABONBA_PTR_FROM_JSON(Comment, comment_);
              DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
              DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
              DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
              DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
              DARABONBA_PTR_FROM_JSON(Position, position_);
              DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
            };
            WorkflowNode() = default ;
            WorkflowNode(const WorkflowNode &) = default ;
            WorkflowNode(WorkflowNode &&) = default ;
            WorkflowNode(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~WorkflowNode() = default ;
            WorkflowNode& operator=(const WorkflowNode &) = default ;
            WorkflowNode& operator=(WorkflowNode &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->comment_ == nullptr
        && this->createUserId_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeType_ == nullptr && this->position_ == nullptr
        && this->templateId_ == nullptr; };
            // comment Field Functions 
            bool hasComment() const { return this->comment_ != nullptr;};
            void deleteComment() { this->comment_ = nullptr;};
            inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
            inline WorkflowNode& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


            // createUserId Field Functions 
            bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
            void deleteCreateUserId() { this->createUserId_ = nullptr;};
            inline int64_t getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, 0L) };
            inline WorkflowNode& setCreateUserId(int64_t createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


            // nodeId Field Functions 
            bool hasNodeId() const { return this->nodeId_ != nullptr;};
            void deleteNodeId() { this->nodeId_ = nullptr;};
            inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
            inline WorkflowNode& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


            // nodeName Field Functions 
            bool hasNodeName() const { return this->nodeName_ != nullptr;};
            void deleteNodeName() { this->nodeName_ = nullptr;};
            inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
            inline WorkflowNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


            // nodeType Field Functions 
            bool hasNodeType() const { return this->nodeType_ != nullptr;};
            void deleteNodeType() { this->nodeType_ = nullptr;};
            inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
            inline WorkflowNode& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


            // position Field Functions 
            bool hasPosition() const { return this->position_ != nullptr;};
            void deletePosition() { this->position_ = nullptr;};
            inline int32_t getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
            inline WorkflowNode& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


            // templateId Field Functions 
            bool hasTemplateId() const { return this->templateId_ != nullptr;};
            void deleteTemplateId() { this->templateId_ = nullptr;};
            inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
            inline WorkflowNode& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


          protected:
            // The description of the approval node.
            shared_ptr<string> comment_ {};
            // The ID of the creator.
            shared_ptr<int64_t> createUserId_ {};
            // The ID of the approval node.
            shared_ptr<int64_t> nodeId_ {};
            // The name of the approval node.
            shared_ptr<string> nodeName_ {};
            // The type of the approval node. Valid values:
            // 
            // *   SYS: The approval node is predefined by the system.
            // *   USER_LIST: The approval node is created by a user.
            shared_ptr<string> nodeType_ {};
            // The position of the approval node.
            shared_ptr<int32_t> position_ {};
            // The ID of the template.
            shared_ptr<int64_t> templateId_ {};
          };

          virtual bool empty() const override { return this->workflowNode_ == nullptr; };
          // workflowNode Field Functions 
          bool hasWorkflowNode() const { return this->workflowNode_ != nullptr;};
          void deleteWorkflowNode() { this->workflowNode_ = nullptr;};
          inline const vector<WorkflowNodes::WorkflowNode> & getWorkflowNode() const { DARABONBA_PTR_GET_CONST(workflowNode_, vector<WorkflowNodes::WorkflowNode>) };
          inline vector<WorkflowNodes::WorkflowNode> getWorkflowNode() { DARABONBA_PTR_GET(workflowNode_, vector<WorkflowNodes::WorkflowNode>) };
          inline WorkflowNodes& setWorkflowNode(const vector<WorkflowNodes::WorkflowNode> & workflowNode) { DARABONBA_PTR_SET_VALUE(workflowNode_, workflowNode) };
          inline WorkflowNodes& setWorkflowNode(vector<WorkflowNodes::WorkflowNode> && workflowNode) { DARABONBA_PTR_SET_RVALUE(workflowNode_, workflowNode) };


        protected:
          shared_ptr<vector<WorkflowNodes::WorkflowNode>> workflowNode_ {};
        };

        virtual bool empty() const override { return this->comment_ == nullptr
        && this->createUserId_ == nullptr && this->enabled_ == nullptr && this->isSystem_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr
        && this->workflowNodes_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline WorkFlowTemplate& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // createUserId Field Functions 
        bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
        void deleteCreateUserId() { this->createUserId_ = nullptr;};
        inline int64_t getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, 0L) };
        inline WorkFlowTemplate& setCreateUserId(int64_t createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline string getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
        inline WorkFlowTemplate& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // isSystem Field Functions 
        bool hasIsSystem() const { return this->isSystem_ != nullptr;};
        void deleteIsSystem() { this->isSystem_ = nullptr;};
        inline int32_t getIsSystem() const { DARABONBA_PTR_GET_DEFAULT(isSystem_, 0) };
        inline WorkFlowTemplate& setIsSystem(int32_t isSystem) { DARABONBA_PTR_SET_VALUE(isSystem_, isSystem) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
        inline WorkFlowTemplate& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline WorkFlowTemplate& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        // workflowNodes Field Functions 
        bool hasWorkflowNodes() const { return this->workflowNodes_ != nullptr;};
        void deleteWorkflowNodes() { this->workflowNodes_ = nullptr;};
        inline const WorkFlowTemplate::WorkflowNodes & getWorkflowNodes() const { DARABONBA_PTR_GET_CONST(workflowNodes_, WorkFlowTemplate::WorkflowNodes) };
        inline WorkFlowTemplate::WorkflowNodes getWorkflowNodes() { DARABONBA_PTR_GET(workflowNodes_, WorkFlowTemplate::WorkflowNodes) };
        inline WorkFlowTemplate& setWorkflowNodes(const WorkFlowTemplate::WorkflowNodes & workflowNodes) { DARABONBA_PTR_SET_VALUE(workflowNodes_, workflowNodes) };
        inline WorkFlowTemplate& setWorkflowNodes(WorkFlowTemplate::WorkflowNodes && workflowNodes) { DARABONBA_PTR_SET_RVALUE(workflowNodes_, workflowNodes) };


      protected:
        // The description of the approval template.
        shared_ptr<string> comment_ {};
        // The ID of the creator.
        shared_ptr<int64_t> createUserId_ {};
        // Indicates whether the approval template is enabled. Valid values:
        // 
        // *   Y: The approval template is enabled.
        // *   N: The approval template is disabled.
        shared_ptr<string> enabled_ {};
        // Indicates whether the approval template is predefined by the system. Valid values:
        // 
        // *   1: The approval template is predefined by the system.
        // *   0: The approval template is not predefined by the system.
        shared_ptr<int32_t> isSystem_ {};
        // The ID of the approval template.
        shared_ptr<int64_t> templateId_ {};
        // The name of the approval template.
        shared_ptr<string> templateName_ {};
        // The details of approval nodes.
        shared_ptr<WorkFlowTemplate::WorkflowNodes> workflowNodes_ {};
      };

      virtual bool empty() const override { return this->workFlowTemplate_ == nullptr; };
      // workFlowTemplate Field Functions 
      bool hasWorkFlowTemplate() const { return this->workFlowTemplate_ != nullptr;};
      void deleteWorkFlowTemplate() { this->workFlowTemplate_ = nullptr;};
      inline const vector<WorkFlowTemplates::WorkFlowTemplate> & getWorkFlowTemplate() const { DARABONBA_PTR_GET_CONST(workFlowTemplate_, vector<WorkFlowTemplates::WorkFlowTemplate>) };
      inline vector<WorkFlowTemplates::WorkFlowTemplate> getWorkFlowTemplate() { DARABONBA_PTR_GET(workFlowTemplate_, vector<WorkFlowTemplates::WorkFlowTemplate>) };
      inline WorkFlowTemplates& setWorkFlowTemplate(const vector<WorkFlowTemplates::WorkFlowTemplate> & workFlowTemplate) { DARABONBA_PTR_SET_VALUE(workFlowTemplate_, workFlowTemplate) };
      inline WorkFlowTemplates& setWorkFlowTemplate(vector<WorkFlowTemplates::WorkFlowTemplate> && workFlowTemplate) { DARABONBA_PTR_SET_RVALUE(workFlowTemplate_, workFlowTemplate) };


    protected:
      shared_ptr<vector<WorkFlowTemplates::WorkFlowTemplate>> workFlowTemplate_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->workFlowTemplates_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListWorkFlowTemplatesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListWorkFlowTemplatesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkFlowTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListWorkFlowTemplatesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // workFlowTemplates Field Functions 
    bool hasWorkFlowTemplates() const { return this->workFlowTemplates_ != nullptr;};
    void deleteWorkFlowTemplates() { this->workFlowTemplates_ = nullptr;};
    inline const ListWorkFlowTemplatesResponseBody::WorkFlowTemplates & getWorkFlowTemplates() const { DARABONBA_PTR_GET_CONST(workFlowTemplates_, ListWorkFlowTemplatesResponseBody::WorkFlowTemplates) };
    inline ListWorkFlowTemplatesResponseBody::WorkFlowTemplates getWorkFlowTemplates() { DARABONBA_PTR_GET(workFlowTemplates_, ListWorkFlowTemplatesResponseBody::WorkFlowTemplates) };
    inline ListWorkFlowTemplatesResponseBody& setWorkFlowTemplates(const ListWorkFlowTemplatesResponseBody::WorkFlowTemplates & workFlowTemplates) { DARABONBA_PTR_SET_VALUE(workFlowTemplates_, workFlowTemplates) };
    inline ListWorkFlowTemplatesResponseBody& setWorkFlowTemplates(ListWorkFlowTemplatesResponseBody::WorkFlowTemplates && workFlowTemplates) { DARABONBA_PTR_SET_RVALUE(workFlowTemplates_, workFlowTemplates) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The approval templates.
    shared_ptr<ListWorkFlowTemplatesResponseBody::WorkFlowTemplates> workFlowTemplates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
