// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENDFILERESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENDFILERESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeSendFileResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSendFileResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Invocations, invocations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSendFileResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Invocations, invocations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSendFileResultsResponseBody() = default ;
    DescribeSendFileResultsResponseBody(const DescribeSendFileResultsResponseBody &) = default ;
    DescribeSendFileResultsResponseBody(DescribeSendFileResultsResponseBody &&) = default ;
    DescribeSendFileResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSendFileResultsResponseBody() = default ;
    DescribeSendFileResultsResponseBody& operator=(const DescribeSendFileResultsResponseBody &) = default ;
    DescribeSendFileResultsResponseBody& operator=(DescribeSendFileResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Invocations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Invocations& obj) { 
        DARABONBA_PTR_TO_JSON(Invocation, invocation_);
      };
      friend void from_json(const Darabonba::Json& j, Invocations& obj) { 
        DARABONBA_PTR_FROM_JSON(Invocation, invocation_);
      };
      Invocations() = default ;
      Invocations(const Invocations &) = default ;
      Invocations(Invocations &&) = default ;
      Invocations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Invocations() = default ;
      Invocations& operator=(const Invocations &) = default ;
      Invocations& operator=(Invocations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Invocation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Invocation& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(ContentType, contentType_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FileGroup, fileGroup_);
          DARABONBA_PTR_TO_JSON(FileMode, fileMode_);
          DARABONBA_PTR_TO_JSON(FileOwner, fileOwner_);
          DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
          DARABONBA_PTR_TO_JSON(InvokeNodes, invokeNodes_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
          DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
          DARABONBA_PTR_TO_JSON(TargetDir, targetDir_);
        };
        friend void from_json(const Darabonba::Json& j, Invocation& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FileGroup, fileGroup_);
          DARABONBA_PTR_FROM_JSON(FileMode, fileMode_);
          DARABONBA_PTR_FROM_JSON(FileOwner, fileOwner_);
          DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
          DARABONBA_PTR_FROM_JSON(InvokeNodes, invokeNodes_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
          DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
          DARABONBA_PTR_FROM_JSON(TargetDir, targetDir_);
        };
        Invocation() = default ;
        Invocation(const Invocation &) = default ;
        Invocation(Invocation &&) = default ;
        Invocation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Invocation() = default ;
        Invocation& operator=(const Invocation &) = default ;
        Invocation& operator=(Invocation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InvokeNodes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InvokeNodes& obj) { 
            DARABONBA_PTR_TO_JSON(InvokeNode, invokeNode_);
          };
          friend void from_json(const Darabonba::Json& j, InvokeNodes& obj) { 
            DARABONBA_PTR_FROM_JSON(InvokeNode, invokeNode_);
          };
          InvokeNodes() = default ;
          InvokeNodes(const InvokeNodes &) = default ;
          InvokeNodes(InvokeNodes &&) = default ;
          InvokeNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InvokeNodes() = default ;
          InvokeNodes& operator=(const InvokeNodes &) = default ;
          InvokeNodes& operator=(InvokeNodes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class InvokeNode : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const InvokeNode& obj) { 
              DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
              DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
              DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
              DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
              DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
              DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
              DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
            };
            friend void from_json(const Darabonba::Json& j, InvokeNode& obj) { 
              DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
              DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
              DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
              DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
              DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
              DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
              DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
            };
            InvokeNode() = default ;
            InvokeNode(const InvokeNode &) = default ;
            InvokeNode(InvokeNode &&) = default ;
            InvokeNode(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~InvokeNode() = default ;
            InvokeNode& operator=(const InvokeNode &) = default ;
            InvokeNode& operator=(InvokeNode &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->errorCode_ == nullptr && this->errorInfo_ == nullptr && this->finishTime_ == nullptr && this->invocationStatus_ == nullptr && this->nodeId_ == nullptr
        && this->startTime_ == nullptr && this->updateTime_ == nullptr; };
            // creationTime Field Functions 
            bool hasCreationTime() const { return this->creationTime_ != nullptr;};
            void deleteCreationTime() { this->creationTime_ = nullptr;};
            inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
            inline InvokeNode& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


            // errorCode Field Functions 
            bool hasErrorCode() const { return this->errorCode_ != nullptr;};
            void deleteErrorCode() { this->errorCode_ = nullptr;};
            inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
            inline InvokeNode& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


            // errorInfo Field Functions 
            bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
            void deleteErrorInfo() { this->errorInfo_ = nullptr;};
            inline string getErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
            inline InvokeNode& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


            // finishTime Field Functions 
            bool hasFinishTime() const { return this->finishTime_ != nullptr;};
            void deleteFinishTime() { this->finishTime_ = nullptr;};
            inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
            inline InvokeNode& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


            // invocationStatus Field Functions 
            bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
            void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
            inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
            inline InvokeNode& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


            // nodeId Field Functions 
            bool hasNodeId() const { return this->nodeId_ != nullptr;};
            void deleteNodeId() { this->nodeId_ = nullptr;};
            inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
            inline InvokeNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline InvokeNode& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


            // updateTime Field Functions 
            bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
            void deleteUpdateTime() { this->updateTime_ = nullptr;};
            inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
            inline InvokeNode& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


          protected:
            // The time when the file sending task was created.
            shared_ptr<string> creationTime_ {};
            // The error code returned when the file failed to be sent to the instance. Valid values:
            // 
            // Null: The file is sent to the instance. NodeNotExists: The specified instance does not exist or has been released. NodeReleased: The instance was released while the file was being sent. NodeNotRunning: The instance was not running while the file sending task was being created. AccountNotExists: The specified account does not exist. ClientNotRunning: Cloud Assistant Agent is not running. ClientNotResponse: Cloud Assistant Agent did not respond. ClientIsUpgrading: Cloud Assistant Agent was being upgraded. ClientNeedUpgrade: Cloud Assistant Agent needs to be upgraded. DeliveryTimeout: The file sending task timed out. FileCreateFail: The file failed to be created. FileAlreadyExists: A file with the same name exists in the specified directory. FileContentInvalid: The file content is invalid. FileNameInvalid: The file name is invalid. FilePathInvalid: The specified directory is invalid. FileAuthorityInvalid: The specified permissions on the file are invalid. UserGroupNotExists: The specified user group does not exist.
            shared_ptr<string> errorCode_ {};
            // The error message returned if the command failed to be sent or run. Valid values:
            // 
            // *   null: The command is run as expected.
            // *   the specified instance does not exists: The specified instance does not exist or is released.
            // *   the node has released when create task: The instance is released when the command is being run.
            // *   the node is not running when create task: The instance is not in the Running state while the command is being run.
            // *   the command is not applicable: The command is not applicable to the specified instance.
            // *   the specified account does not exists: The specified account does not exist.
            // *   the specified directory does not exists: The specified directory does not exist.
            // *   the cron job expression is invalid: The cron expression that specifies the execution time is invalid.
            // *   the aliyun service is not running on the instance: Cloud Assistant Agent is not running.
            // *   the aliyun service in the instance does not response: Cloud Assistant Agent does not respond.
            // *   the aliyun service in the node is upgrading now: Cloud Assistant Agent is being upgraded.
            // *   the aliyun service in the node need upgrade: Cloud Assistant Agent needs to be upgraded.
            // *   the command delivery has been timeout: The request to send the command timed out.
            // *   the command execution has been timeout: The command execution timed out.
            // *   the command execution got an exception: An exception occurred when the command is being run.
            // *   the command execution has been interrupted: The command execution is interrupted.
            // *   the command execution exit code is not zero: The command execution completes, but the exit code is not 0.
            // *   the specified instance has been released: The instance is released while the file is being sent.
            shared_ptr<string> errorInfo_ {};
            // The time when the file sending task ends. The time is in the 2020-05-22T17:04:18 format.
            shared_ptr<string> finishTime_ {};
            // The status of the file sending task on an instance. Valid values:
            // 
            // *   Pending: The file is being verified or sent.
            // *   Invalid: The file is invalid.
            // *   Running: The file is being sent to the instance.
            // *   Aborted: The file failed to be sent to the instance.
            // *   Success: The file is sent.
            // *   Failed: The file failed to be created on the instance.
            // *   Error: An error occurred and interrupted the file sending task.
            // *   Timeout: The file sending task timed out.
            shared_ptr<string> invocationStatus_ {};
            // The node ID.
            shared_ptr<string> nodeId_ {};
            // The start time.
            shared_ptr<string> startTime_ {};
            // The update time.
            shared_ptr<string> updateTime_ {};
          };

          virtual bool empty() const override { return this->invokeNode_ == nullptr; };
          // invokeNode Field Functions 
          bool hasInvokeNode() const { return this->invokeNode_ != nullptr;};
          void deleteInvokeNode() { this->invokeNode_ = nullptr;};
          inline const vector<InvokeNodes::InvokeNode> & getInvokeNode() const { DARABONBA_PTR_GET_CONST(invokeNode_, vector<InvokeNodes::InvokeNode>) };
          inline vector<InvokeNodes::InvokeNode> getInvokeNode() { DARABONBA_PTR_GET(invokeNode_, vector<InvokeNodes::InvokeNode>) };
          inline InvokeNodes& setInvokeNode(const vector<InvokeNodes::InvokeNode> & invokeNode) { DARABONBA_PTR_SET_VALUE(invokeNode_, invokeNode) };
          inline InvokeNodes& setInvokeNode(vector<InvokeNodes::InvokeNode> && invokeNode) { DARABONBA_PTR_SET_RVALUE(invokeNode_, invokeNode) };


        protected:
          // The file sending records on a node.
          shared_ptr<vector<InvokeNodes::InvokeNode>> invokeNode_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->contentType_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->fileGroup_ == nullptr && this->fileMode_ == nullptr
        && this->fileOwner_ == nullptr && this->invocationStatus_ == nullptr && this->invokeNodes_ == nullptr && this->name_ == nullptr && this->nodeCount_ == nullptr
        && this->overwrite_ == nullptr && this->targetDir_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Invocation& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // contentType Field Functions 
        bool hasContentType() const { return this->contentType_ != nullptr;};
        void deleteContentType() { this->contentType_ = nullptr;};
        inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
        inline Invocation& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Invocation& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Invocation& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // fileGroup Field Functions 
        bool hasFileGroup() const { return this->fileGroup_ != nullptr;};
        void deleteFileGroup() { this->fileGroup_ = nullptr;};
        inline string getFileGroup() const { DARABONBA_PTR_GET_DEFAULT(fileGroup_, "") };
        inline Invocation& setFileGroup(string fileGroup) { DARABONBA_PTR_SET_VALUE(fileGroup_, fileGroup) };


        // fileMode Field Functions 
        bool hasFileMode() const { return this->fileMode_ != nullptr;};
        void deleteFileMode() { this->fileMode_ = nullptr;};
        inline string getFileMode() const { DARABONBA_PTR_GET_DEFAULT(fileMode_, "") };
        inline Invocation& setFileMode(string fileMode) { DARABONBA_PTR_SET_VALUE(fileMode_, fileMode) };


        // fileOwner Field Functions 
        bool hasFileOwner() const { return this->fileOwner_ != nullptr;};
        void deleteFileOwner() { this->fileOwner_ = nullptr;};
        inline string getFileOwner() const { DARABONBA_PTR_GET_DEFAULT(fileOwner_, "") };
        inline Invocation& setFileOwner(string fileOwner) { DARABONBA_PTR_SET_VALUE(fileOwner_, fileOwner) };


        // invocationStatus Field Functions 
        bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
        void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
        inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
        inline Invocation& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


        // invokeNodes Field Functions 
        bool hasInvokeNodes() const { return this->invokeNodes_ != nullptr;};
        void deleteInvokeNodes() { this->invokeNodes_ = nullptr;};
        inline const Invocation::InvokeNodes & getInvokeNodes() const { DARABONBA_PTR_GET_CONST(invokeNodes_, Invocation::InvokeNodes) };
        inline Invocation::InvokeNodes getInvokeNodes() { DARABONBA_PTR_GET(invokeNodes_, Invocation::InvokeNodes) };
        inline Invocation& setInvokeNodes(const Invocation::InvokeNodes & invokeNodes) { DARABONBA_PTR_SET_VALUE(invokeNodes_, invokeNodes) };
        inline Invocation& setInvokeNodes(Invocation::InvokeNodes && invokeNodes) { DARABONBA_PTR_SET_RVALUE(invokeNodes_, invokeNodes) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Invocation& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nodeCount Field Functions 
        bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
        void deleteNodeCount() { this->nodeCount_ = nullptr;};
        inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
        inline Invocation& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


        // overwrite Field Functions 
        bool hasOverwrite() const { return this->overwrite_ != nullptr;};
        void deleteOverwrite() { this->overwrite_ = nullptr;};
        inline bool getOverwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
        inline Invocation& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


        // targetDir Field Functions 
        bool hasTargetDir() const { return this->targetDir_ != nullptr;};
        void deleteTargetDir() { this->targetDir_ = nullptr;};
        inline string getTargetDir() const { DARABONBA_PTR_GET_DEFAULT(targetDir_, "") };
        inline Invocation& setTargetDir(string targetDir) { DARABONBA_PTR_SET_VALUE(targetDir_, targetDir) };


      protected:
        // The command output.
        // 
        // If ContentEncoding is set to PlainText in the request, the original command output is returned. If ContentEncoding is set to Base64 in the request, the Base64-encoded command output is returned.
        shared_ptr<string> content_ {};
        // The content type of the file.
        // 
        // PlainText: The file content is not encoded. Base64: The file content is encoded in Base64. Default value: PlainText.
        shared_ptr<string> contentType_ {};
        // The time when the file sending task was created.
        shared_ptr<string> creationTime_ {};
        // The command description.
        shared_ptr<string> description_ {};
        // The user group of the file.
        shared_ptr<string> fileGroup_ {};
        // The permissions on the file.
        shared_ptr<string> fileMode_ {};
        // The owner of the file.
        shared_ptr<string> fileOwner_ {};
        // The overall sending status of the file. The overall sending status of the file varies based on the sending status of the file on all destination instances. Valid values:
        // 
        // *   Pending: The file is being verified or sent. If the sending state of the file on at least one instance is Pending, the overall sending state of the file is Pending.
        // 
        // *   Running: The file is being sent to the instance. If the sending state of the file on at least one instance is Running, the overall sending state of the file is Running.
        // 
        // *   Success: If the sending state of the file on all instances is Success, the overall sending state of the file is Success.
        // 
        // *   Failed: If the sending state of the file on all instances is Failed, the overall sending state of the file is Failed. If the sending state of the file on one or more instances is one of the following values, the overall sending state of the file is Failed:
        // 
        //     *   Invalid: The file is invalid.
        //     *   Aborted: The file failed to be sent to the instances.
        //     *   Failed: The file failed to be created on the instances.
        //     *   Timeout: The file sending task timed out.
        //     *   Error: An error occurred and interrupted the file sending task.
        // 
        // *   PartialFailed: The file sending task was completed on some instances but failed on other instances. If the sending state of the file is Success on some instances and is Failed on other instances, the overall sending state of the file is PartialFailed.
        shared_ptr<string> invocationStatus_ {};
        // The file sending records.
        shared_ptr<Invocation::InvokeNodes> invokeNodes_ {};
        // The name of the file sending task.
        shared_ptr<string> name_ {};
        // The number of nodes.
        shared_ptr<int32_t> nodeCount_ {};
        // Indicates whether a file was overwritten in the destination directory if the file has the same name as the sent file.
        // 
        // *   true
        // *   false
        // 
        // Default value: false.
        shared_ptr<bool> overwrite_ {};
        // The destination directory.
        shared_ptr<string> targetDir_ {};
      };

      virtual bool empty() const override { return this->invocation_ == nullptr; };
      // invocation Field Functions 
      bool hasInvocation() const { return this->invocation_ != nullptr;};
      void deleteInvocation() { this->invocation_ = nullptr;};
      inline const vector<Invocations::Invocation> & getInvocation() const { DARABONBA_PTR_GET_CONST(invocation_, vector<Invocations::Invocation>) };
      inline vector<Invocations::Invocation> getInvocation() { DARABONBA_PTR_GET(invocation_, vector<Invocations::Invocation>) };
      inline Invocations& setInvocation(const vector<Invocations::Invocation> & invocation) { DARABONBA_PTR_SET_VALUE(invocation_, invocation) };
      inline Invocations& setInvocation(vector<Invocations::Invocation> && invocation) { DARABONBA_PTR_SET_RVALUE(invocation_, invocation) };


    protected:
      // The command execution ID.
      shared_ptr<vector<Invocations::Invocation>> invocation_ {};
    };

    virtual bool empty() const override { return this->invocations_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // invocations Field Functions 
    bool hasInvocations() const { return this->invocations_ != nullptr;};
    void deleteInvocations() { this->invocations_ = nullptr;};
    inline const DescribeSendFileResultsResponseBody::Invocations & getInvocations() const { DARABONBA_PTR_GET_CONST(invocations_, DescribeSendFileResultsResponseBody::Invocations) };
    inline DescribeSendFileResultsResponseBody::Invocations getInvocations() { DARABONBA_PTR_GET(invocations_, DescribeSendFileResultsResponseBody::Invocations) };
    inline DescribeSendFileResultsResponseBody& setInvocations(const DescribeSendFileResultsResponseBody::Invocations & invocations) { DARABONBA_PTR_SET_VALUE(invocations_, invocations) };
    inline DescribeSendFileResultsResponseBody& setInvocations(DescribeSendFileResultsResponseBody::Invocations && invocations) { DARABONBA_PTR_SET_RVALUE(invocations_, invocations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSendFileResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeSendFileResultsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The file sending records.
    shared_ptr<DescribeSendFileResultsResponseBody::Invocations> invocations_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of the commands.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
