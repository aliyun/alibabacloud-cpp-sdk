// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEPROJECTMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEPROJECTMEMBERREQUEST_HPP_
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
  class RemoveProjectMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveProjectMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(RemoveCommand, removeCommand_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveProjectMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(RemoveCommand, removeCommand_);
    };
    RemoveProjectMemberRequest() = default ;
    RemoveProjectMemberRequest(const RemoveProjectMemberRequest &) = default ;
    RemoveProjectMemberRequest(RemoveProjectMemberRequest &&) = default ;
    RemoveProjectMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveProjectMemberRequest() = default ;
    RemoveProjectMemberRequest& operator=(const RemoveProjectMemberRequest &) = default ;
    RemoveProjectMemberRequest& operator=(RemoveProjectMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemoveCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoveCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(UserIdList, userIdList_);
      };
      friend void from_json(const Darabonba::Json& j, RemoveCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(UserIdList, userIdList_);
      };
      RemoveCommand() = default ;
      RemoveCommand(const RemoveCommand &) = default ;
      RemoveCommand(RemoveCommand &&) = default ;
      RemoveCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemoveCommand() = default ;
      RemoveCommand& operator=(const RemoveCommand &) = default ;
      RemoveCommand& operator=(RemoveCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->env_ == nullptr
        && this->userIdList_ == nullptr; };
      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline RemoveCommand& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // userIdList Field Functions 
      bool hasUserIdList() const { return this->userIdList_ != nullptr;};
      void deleteUserIdList() { this->userIdList_ = nullptr;};
      inline const vector<string> & getUserIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
      inline vector<string> getUserIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
      inline RemoveCommand& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
      inline RemoveCommand& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


    protected:
      // This parameter is required.
      shared_ptr<string> env_ {};
      shared_ptr<vector<string>> userIdList_ {};
    };

    virtual bool empty() const override { return this->id_ == nullptr
        && this->opTenantId_ == nullptr && this->removeCommand_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline RemoveProjectMemberRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RemoveProjectMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // removeCommand Field Functions 
    bool hasRemoveCommand() const { return this->removeCommand_ != nullptr;};
    void deleteRemoveCommand() { this->removeCommand_ = nullptr;};
    inline const RemoveProjectMemberRequest::RemoveCommand & getRemoveCommand() const { DARABONBA_PTR_GET_CONST(removeCommand_, RemoveProjectMemberRequest::RemoveCommand) };
    inline RemoveProjectMemberRequest::RemoveCommand getRemoveCommand() { DARABONBA_PTR_GET(removeCommand_, RemoveProjectMemberRequest::RemoveCommand) };
    inline RemoveProjectMemberRequest& setRemoveCommand(const RemoveProjectMemberRequest::RemoveCommand & removeCommand) { DARABONBA_PTR_SET_VALUE(removeCommand_, removeCommand) };
    inline RemoveProjectMemberRequest& setRemoveCommand(RemoveProjectMemberRequest::RemoveCommand && removeCommand) { DARABONBA_PTR_SET_RVALUE(removeCommand_, removeCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<RemoveProjectMemberRequest::RemoveCommand> removeCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
