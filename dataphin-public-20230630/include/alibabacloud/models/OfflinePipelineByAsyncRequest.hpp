// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINEPIPELINEBYASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OFFLINEPIPELINEBYASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OfflinePipelineByAsyncRequestContext.hpp>
#include <alibabacloud/models/OfflinePipelineByAsyncRequestOfflineCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OfflinePipelineByAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OfflinePipelineByAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(OfflineCommand, offlineCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, OfflinePipelineByAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(OfflineCommand, offlineCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    OfflinePipelineByAsyncRequest() = default ;
    OfflinePipelineByAsyncRequest(const OfflinePipelineByAsyncRequest &) = default ;
    OfflinePipelineByAsyncRequest(OfflinePipelineByAsyncRequest &&) = default ;
    OfflinePipelineByAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OfflinePipelineByAsyncRequest() = default ;
    OfflinePipelineByAsyncRequest& operator=(const OfflinePipelineByAsyncRequest &) = default ;
    OfflinePipelineByAsyncRequest& operator=(OfflinePipelineByAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->context_ == nullptr
        && return this->offlineCommand_ == nullptr && return this->opTenantId_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const OfflinePipelineByAsyncRequestContext & context() const { DARABONBA_PTR_GET_CONST(context_, OfflinePipelineByAsyncRequestContext) };
    inline OfflinePipelineByAsyncRequestContext context() { DARABONBA_PTR_GET(context_, OfflinePipelineByAsyncRequestContext) };
    inline OfflinePipelineByAsyncRequest& setContext(const OfflinePipelineByAsyncRequestContext & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline OfflinePipelineByAsyncRequest& setContext(OfflinePipelineByAsyncRequestContext && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // offlineCommand Field Functions 
    bool hasOfflineCommand() const { return this->offlineCommand_ != nullptr;};
    void deleteOfflineCommand() { this->offlineCommand_ = nullptr;};
    inline const OfflinePipelineByAsyncRequestOfflineCommand & offlineCommand() const { DARABONBA_PTR_GET_CONST(offlineCommand_, OfflinePipelineByAsyncRequestOfflineCommand) };
    inline OfflinePipelineByAsyncRequestOfflineCommand offlineCommand() { DARABONBA_PTR_GET(offlineCommand_, OfflinePipelineByAsyncRequestOfflineCommand) };
    inline OfflinePipelineByAsyncRequest& setOfflineCommand(const OfflinePipelineByAsyncRequestOfflineCommand & offlineCommand) { DARABONBA_PTR_SET_VALUE(offlineCommand_, offlineCommand) };
    inline OfflinePipelineByAsyncRequest& setOfflineCommand(OfflinePipelineByAsyncRequestOfflineCommand && offlineCommand) { DARABONBA_PTR_SET_RVALUE(offlineCommand_, offlineCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline OfflinePipelineByAsyncRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<OfflinePipelineByAsyncRequestContext> context_ = nullptr;
    // This parameter is required.
    std::shared_ptr<OfflinePipelineByAsyncRequestOfflineCommand> offlineCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
