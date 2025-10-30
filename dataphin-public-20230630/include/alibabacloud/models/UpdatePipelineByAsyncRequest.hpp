// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPIPELINEBYASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPIPELINEBYASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdatePipelineByAsyncRequestContext.hpp>
#include <alibabacloud/models/UpdatePipelineByAsyncRequestUpdateCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdatePipelineByAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePipelineByAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePipelineByAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdatePipelineByAsyncRequest() = default ;
    UpdatePipelineByAsyncRequest(const UpdatePipelineByAsyncRequest &) = default ;
    UpdatePipelineByAsyncRequest(UpdatePipelineByAsyncRequest &&) = default ;
    UpdatePipelineByAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePipelineByAsyncRequest() = default ;
    UpdatePipelineByAsyncRequest& operator=(const UpdatePipelineByAsyncRequest &) = default ;
    UpdatePipelineByAsyncRequest& operator=(UpdatePipelineByAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->context_ == nullptr
        && return this->opTenantId_ == nullptr && return this->updateCommand_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const UpdatePipelineByAsyncRequestContext & context() const { DARABONBA_PTR_GET_CONST(context_, UpdatePipelineByAsyncRequestContext) };
    inline UpdatePipelineByAsyncRequestContext context() { DARABONBA_PTR_GET(context_, UpdatePipelineByAsyncRequestContext) };
    inline UpdatePipelineByAsyncRequest& setContext(const UpdatePipelineByAsyncRequestContext & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline UpdatePipelineByAsyncRequest& setContext(UpdatePipelineByAsyncRequestContext && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdatePipelineByAsyncRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdatePipelineByAsyncRequestUpdateCommand & updateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdatePipelineByAsyncRequestUpdateCommand) };
    inline UpdatePipelineByAsyncRequestUpdateCommand updateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdatePipelineByAsyncRequestUpdateCommand) };
    inline UpdatePipelineByAsyncRequest& setUpdateCommand(const UpdatePipelineByAsyncRequestUpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdatePipelineByAsyncRequest& setUpdateCommand(UpdatePipelineByAsyncRequestUpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<UpdatePipelineByAsyncRequestContext> context_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<UpdatePipelineByAsyncRequestUpdateCommand> updateCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
