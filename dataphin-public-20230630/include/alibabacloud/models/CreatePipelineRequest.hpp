// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePipelineRequestContext.hpp>
#include <alibabacloud/models/CreatePipelineRequestCreateCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreatePipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreatePipelineRequest() = default ;
    CreatePipelineRequest(const CreatePipelineRequest &) = default ;
    CreatePipelineRequest(CreatePipelineRequest &&) = default ;
    CreatePipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineRequest() = default ;
    CreatePipelineRequest& operator=(const CreatePipelineRequest &) = default ;
    CreatePipelineRequest& operator=(CreatePipelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->context_ == nullptr
        && return this->createCommand_ == nullptr && return this->opTenantId_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const CreatePipelineRequestContext & context() const { DARABONBA_PTR_GET_CONST(context_, CreatePipelineRequestContext) };
    inline CreatePipelineRequestContext context() { DARABONBA_PTR_GET(context_, CreatePipelineRequestContext) };
    inline CreatePipelineRequest& setContext(const CreatePipelineRequestContext & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline CreatePipelineRequest& setContext(CreatePipelineRequestContext && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreatePipelineRequestCreateCommand & createCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreatePipelineRequestCreateCommand) };
    inline CreatePipelineRequestCreateCommand createCommand() { DARABONBA_PTR_GET(createCommand_, CreatePipelineRequestCreateCommand) };
    inline CreatePipelineRequest& setCreateCommand(const CreatePipelineRequestCreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreatePipelineRequest& setCreateCommand(CreatePipelineRequestCreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreatePipelineRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<CreatePipelineRequestContext> context_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreatePipelineRequestCreateCommand> createCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
