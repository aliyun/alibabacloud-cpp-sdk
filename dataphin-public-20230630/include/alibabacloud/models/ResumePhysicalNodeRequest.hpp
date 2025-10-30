// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMEPHYSICALNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESUMEPHYSICALNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResumePhysicalNodeRequestResumeCommand.hpp>
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
    virtual bool empty() const override { return this->env_ == nullptr
        && return this->opTenantId_ == nullptr && return this->resumeCommand_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ResumePhysicalNodeRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ResumePhysicalNodeRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // resumeCommand Field Functions 
    bool hasResumeCommand() const { return this->resumeCommand_ != nullptr;};
    void deleteResumeCommand() { this->resumeCommand_ = nullptr;};
    inline const ResumePhysicalNodeRequestResumeCommand & resumeCommand() const { DARABONBA_PTR_GET_CONST(resumeCommand_, ResumePhysicalNodeRequestResumeCommand) };
    inline ResumePhysicalNodeRequestResumeCommand resumeCommand() { DARABONBA_PTR_GET(resumeCommand_, ResumePhysicalNodeRequestResumeCommand) };
    inline ResumePhysicalNodeRequest& setResumeCommand(const ResumePhysicalNodeRequestResumeCommand & resumeCommand) { DARABONBA_PTR_SET_VALUE(resumeCommand_, resumeCommand) };
    inline ResumePhysicalNodeRequest& setResumeCommand(ResumePhysicalNodeRequestResumeCommand && resumeCommand) { DARABONBA_PTR_SET_RVALUE(resumeCommand_, resumeCommand) };


  protected:
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ResumePhysicalNodeRequestResumeCommand> resumeCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
