// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINEPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OFFLINEPIPELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OfflinePipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OfflinePipelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(OfflineCommand, offlineCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, OfflinePipelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(OfflineCommand, offlineCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    OfflinePipelineRequest() = default ;
    OfflinePipelineRequest(const OfflinePipelineRequest &) = default ;
    OfflinePipelineRequest(OfflinePipelineRequest &&) = default ;
    OfflinePipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OfflinePipelineRequest() = default ;
    OfflinePipelineRequest& operator=(const OfflinePipelineRequest &) = default ;
    OfflinePipelineRequest& operator=(OfflinePipelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OfflineCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OfflineCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Delete, delete_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      };
      friend void from_json(const Darabonba::Json& j, OfflineCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Delete, delete_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      };
      OfflineCommand() = default ;
      OfflineCommand(const OfflineCommand &) = default ;
      OfflineCommand(OfflineCommand &&) = default ;
      OfflineCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OfflineCommand() = default ;
      OfflineCommand& operator=(const OfflineCommand &) = default ;
      OfflineCommand& operator=(OfflineCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->delete_ == nullptr && this->fileId_ == nullptr && this->nodeId_ == nullptr && this->pipelineId_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline OfflineCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // delete Field Functions 
      bool hasDelete() const { return this->delete_ != nullptr;};
      void deleteDelete() { this->delete_ = nullptr;};
      inline bool getDelete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
      inline OfflineCommand& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
      inline OfflineCommand& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline OfflineCommand& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline int64_t getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
      inline OfflineCommand& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    protected:
      shared_ptr<string> comment_ {};
      // This parameter is required.
      shared_ptr<bool> delete_ {};
      shared_ptr<int64_t> fileId_ {};
      shared_ptr<string> nodeId_ {};
      shared_ptr<int64_t> pipelineId_ {};
    };

    class Context : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Context& obj) { 
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, Context& obj) { 
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      Context() = default ;
      Context(const Context &) = default ;
      Context(Context &&) = default ;
      Context(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Context() = default ;
      Context& operator=(const Context &) = default ;
      Context& operator=(Context &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->env_ == nullptr
        && this->projectId_ == nullptr; };
      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline Context& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Context& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // This parameter is required.
      shared_ptr<string> env_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->context_ == nullptr
        && this->offlineCommand_ == nullptr && this->opTenantId_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const OfflinePipelineRequest::Context & getContext() const { DARABONBA_PTR_GET_CONST(context_, OfflinePipelineRequest::Context) };
    inline OfflinePipelineRequest::Context getContext() { DARABONBA_PTR_GET(context_, OfflinePipelineRequest::Context) };
    inline OfflinePipelineRequest& setContext(const OfflinePipelineRequest::Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline OfflinePipelineRequest& setContext(OfflinePipelineRequest::Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // offlineCommand Field Functions 
    bool hasOfflineCommand() const { return this->offlineCommand_ != nullptr;};
    void deleteOfflineCommand() { this->offlineCommand_ = nullptr;};
    inline const OfflinePipelineRequest::OfflineCommand & getOfflineCommand() const { DARABONBA_PTR_GET_CONST(offlineCommand_, OfflinePipelineRequest::OfflineCommand) };
    inline OfflinePipelineRequest::OfflineCommand getOfflineCommand() { DARABONBA_PTR_GET(offlineCommand_, OfflinePipelineRequest::OfflineCommand) };
    inline OfflinePipelineRequest& setOfflineCommand(const OfflinePipelineRequest::OfflineCommand & offlineCommand) { DARABONBA_PTR_SET_VALUE(offlineCommand_, offlineCommand) };
    inline OfflinePipelineRequest& setOfflineCommand(OfflinePipelineRequest::OfflineCommand && offlineCommand) { DARABONBA_PTR_SET_RVALUE(offlineCommand_, offlineCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline OfflinePipelineRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<OfflinePipelineRequest::Context> context_ {};
    // This parameter is required.
    shared_ptr<OfflinePipelineRequest::OfflineCommand> offlineCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
