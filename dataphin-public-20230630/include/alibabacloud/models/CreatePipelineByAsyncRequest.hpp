// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINEBYASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINEBYASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePipelineByAsyncRequestContext.hpp>
#include <alibabacloud/models/CreatePipelineByAsyncRequestCreateCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreatePipelineByAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineByAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineByAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreatePipelineByAsyncRequest() = default ;
    CreatePipelineByAsyncRequest(const CreatePipelineByAsyncRequest &) = default ;
    CreatePipelineByAsyncRequest(CreatePipelineByAsyncRequest &&) = default ;
    CreatePipelineByAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineByAsyncRequest() = default ;
    CreatePipelineByAsyncRequest& operator=(const CreatePipelineByAsyncRequest &) = default ;
    CreatePipelineByAsyncRequest& operator=(CreatePipelineByAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->context_ == nullptr
        && return this->createCommand_ == nullptr && return this->opTenantId_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const CreatePipelineByAsyncRequestContext & context() const { DARABONBA_PTR_GET_CONST(context_, CreatePipelineByAsyncRequestContext) };
    inline CreatePipelineByAsyncRequestContext context() { DARABONBA_PTR_GET(context_, CreatePipelineByAsyncRequestContext) };
    inline CreatePipelineByAsyncRequest& setContext(const CreatePipelineByAsyncRequestContext & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline CreatePipelineByAsyncRequest& setContext(CreatePipelineByAsyncRequestContext && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreatePipelineByAsyncRequestCreateCommand & createCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreatePipelineByAsyncRequestCreateCommand) };
    inline CreatePipelineByAsyncRequestCreateCommand createCommand() { DARABONBA_PTR_GET(createCommand_, CreatePipelineByAsyncRequestCreateCommand) };
    inline CreatePipelineByAsyncRequest& setCreateCommand(const CreatePipelineByAsyncRequestCreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreatePipelineByAsyncRequest& setCreateCommand(CreatePipelineByAsyncRequestCreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreatePipelineByAsyncRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<CreatePipelineByAsyncRequestContext> context_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreatePipelineByAsyncRequestCreateCommand> createCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
