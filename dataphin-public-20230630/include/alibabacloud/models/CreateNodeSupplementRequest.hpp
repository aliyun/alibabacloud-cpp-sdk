// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODESUPPLEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENODESUPPLEMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateNodeSupplementRequestCreateCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateNodeSupplementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeSupplementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeSupplementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateNodeSupplementRequest() = default ;
    CreateNodeSupplementRequest(const CreateNodeSupplementRequest &) = default ;
    CreateNodeSupplementRequest(CreateNodeSupplementRequest &&) = default ;
    CreateNodeSupplementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeSupplementRequest() = default ;
    CreateNodeSupplementRequest& operator=(const CreateNodeSupplementRequest &) = default ;
    CreateNodeSupplementRequest& operator=(CreateNodeSupplementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createCommand_ != nullptr
        && this->env_ != nullptr && this->opTenantId_ != nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateNodeSupplementRequestCreateCommand & createCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateNodeSupplementRequestCreateCommand) };
    inline CreateNodeSupplementRequestCreateCommand createCommand() { DARABONBA_PTR_GET(createCommand_, CreateNodeSupplementRequestCreateCommand) };
    inline CreateNodeSupplementRequest& setCreateCommand(const CreateNodeSupplementRequestCreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateNodeSupplementRequest& setCreateCommand(CreateNodeSupplementRequestCreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline CreateNodeSupplementRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateNodeSupplementRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<CreateNodeSupplementRequestCreateCommand> createCommand_ = nullptr;
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
