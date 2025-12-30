// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAUSEPHYSICALNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PAUSEPHYSICALNODEREQUEST_HPP_
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
  class PausePhysicalNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PausePhysicalNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PauseCommand, pauseCommand_);
    };
    friend void from_json(const Darabonba::Json& j, PausePhysicalNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PauseCommand, pauseCommand_);
    };
    PausePhysicalNodeRequest() = default ;
    PausePhysicalNodeRequest(const PausePhysicalNodeRequest &) = default ;
    PausePhysicalNodeRequest(PausePhysicalNodeRequest &&) = default ;
    PausePhysicalNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PausePhysicalNodeRequest() = default ;
    PausePhysicalNodeRequest& operator=(const PausePhysicalNodeRequest &) = default ;
    PausePhysicalNodeRequest& operator=(PausePhysicalNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PauseCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PauseCommand& obj) { 
        DARABONBA_PTR_TO_JSON(NodeIdList, nodeIdList_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, PauseCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeIdList, nodeIdList_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      PauseCommand() = default ;
      PauseCommand(const PauseCommand &) = default ;
      PauseCommand(PauseCommand &&) = default ;
      PauseCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PauseCommand() = default ;
      PauseCommand& operator=(const PauseCommand &) = default ;
      PauseCommand& operator=(PauseCommand &&) = default ;
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
      inline PauseCommand& setNodeIdList(const vector<string> & nodeIdList) { DARABONBA_PTR_SET_VALUE(nodeIdList_, nodeIdList) };
      inline PauseCommand& setNodeIdList(vector<string> && nodeIdList) { DARABONBA_PTR_SET_RVALUE(nodeIdList_, nodeIdList) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline PauseCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // This parameter is required.
      shared_ptr<vector<string>> nodeIdList_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->env_ == nullptr
        && this->opTenantId_ == nullptr && this->pauseCommand_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline PausePhysicalNodeRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline PausePhysicalNodeRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // pauseCommand Field Functions 
    bool hasPauseCommand() const { return this->pauseCommand_ != nullptr;};
    void deletePauseCommand() { this->pauseCommand_ = nullptr;};
    inline const PausePhysicalNodeRequest::PauseCommand & getPauseCommand() const { DARABONBA_PTR_GET_CONST(pauseCommand_, PausePhysicalNodeRequest::PauseCommand) };
    inline PausePhysicalNodeRequest::PauseCommand getPauseCommand() { DARABONBA_PTR_GET(pauseCommand_, PausePhysicalNodeRequest::PauseCommand) };
    inline PausePhysicalNodeRequest& setPauseCommand(const PausePhysicalNodeRequest::PauseCommand & pauseCommand) { DARABONBA_PTR_SET_VALUE(pauseCommand_, pauseCommand) };
    inline PausePhysicalNodeRequest& setPauseCommand(PausePhysicalNodeRequest::PauseCommand && pauseCommand) { DARABONBA_PTR_SET_RVALUE(pauseCommand_, pauseCommand) };


  protected:
    shared_ptr<string> env_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<PausePhysicalNodeRequest::PauseCommand> pauseCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
