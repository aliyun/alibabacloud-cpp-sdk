// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMEPHYSICALNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESUMEPHYSICALNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ResumePhysicalNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumePhysicalNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ResumeCommand, resumeCommand_);
    };
    friend void from_json(const Darabonba::Json& j, ResumePhysicalNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ResumeCommand, resumeCommand_);
    };
    ResumePhysicalNodeRequest() = default ;
    ResumePhysicalNodeRequest(const ResumePhysicalNodeRequest &) = default ;
    ResumePhysicalNodeRequest(ResumePhysicalNodeRequest &&) = default ;
    ResumePhysicalNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumePhysicalNodeRequest() = default ;
    ResumePhysicalNodeRequest& operator=(const ResumePhysicalNodeRequest &) = default ;
    ResumePhysicalNodeRequest& operator=(ResumePhysicalNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResumeCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResumeCommand& obj) { 
        DARABONBA_PTR_TO_JSON(NodeIdList, nodeIdList_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, ResumeCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeIdList, nodeIdList_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      ResumeCommand() = default ;
      ResumeCommand(const ResumeCommand &) = default ;
      ResumeCommand(ResumeCommand &&) = default ;
      ResumeCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResumeCommand() = default ;
      ResumeCommand& operator=(const ResumeCommand &) = default ;
      ResumeCommand& operator=(ResumeCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nodeIdList_ == nullptr
        && this->projectId_ == nullptr; };
      // nodeIdList Field Functions 
      bool hasNodeIdList() const { return this->nodeIdList_ != nullptr;};
      void deleteNodeIdList() { this->nodeIdList_ = nullptr;};
      inline const vector<string> & getNodeIdList() const { DARABONBA_PTR_GET_CONST(nodeIdList_, vector<string>) };
      inline vector<string> getNodeIdList() { DARABONBA_PTR_GET(nodeIdList_, vector<string>) };
      inline ResumeCommand& setNodeIdList(const vector<string> & nodeIdList) { DARABONBA_PTR_SET_VALUE(nodeIdList_, nodeIdList) };
      inline ResumeCommand& setNodeIdList(vector<string> && nodeIdList) { DARABONBA_PTR_SET_RVALUE(nodeIdList_, nodeIdList) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline ResumeCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // This parameter is required.
      shared_ptr<vector<string>> nodeIdList_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->env_ == nullptr
        && this->opTenantId_ == nullptr && this->resumeCommand_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ResumePhysicalNodeRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ResumePhysicalNodeRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // resumeCommand Field Functions 
    bool hasResumeCommand() const { return this->resumeCommand_ != nullptr;};
    void deleteResumeCommand() { this->resumeCommand_ = nullptr;};
    inline const ResumePhysicalNodeRequest::ResumeCommand & getResumeCommand() const { DARABONBA_PTR_GET_CONST(resumeCommand_, ResumePhysicalNodeRequest::ResumeCommand) };
    inline ResumePhysicalNodeRequest::ResumeCommand getResumeCommand() { DARABONBA_PTR_GET(resumeCommand_, ResumePhysicalNodeRequest::ResumeCommand) };
    inline ResumePhysicalNodeRequest& setResumeCommand(const ResumePhysicalNodeRequest::ResumeCommand & resumeCommand) { DARABONBA_PTR_SET_VALUE(resumeCommand_, resumeCommand) };
    inline ResumePhysicalNodeRequest& setResumeCommand(ResumePhysicalNodeRequest::ResumeCommand && resumeCommand) { DARABONBA_PTR_SET_RVALUE(resumeCommand_, resumeCommand) };


  protected:
    shared_ptr<string> env_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<ResumePhysicalNodeRequest::ResumeCommand> resumeCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
