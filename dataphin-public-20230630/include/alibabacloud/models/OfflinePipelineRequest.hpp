// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINEPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OFFLINEPIPELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OfflinePipelineRequestContext.hpp>
#include <alibabacloud/models/OfflinePipelineRequestOfflineCommand.hpp>
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
    virtual bool empty() const override { return this->context_ == nullptr
        && return this->offlineCommand_ == nullptr && return this->opTenantId_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const OfflinePipelineRequestContext & context() const { DARABONBA_PTR_GET_CONST(context_, OfflinePipelineRequestContext) };
    inline OfflinePipelineRequestContext context() { DARABONBA_PTR_GET(context_, OfflinePipelineRequestContext) };
    inline OfflinePipelineRequest& setContext(const OfflinePipelineRequestContext & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline OfflinePipelineRequest& setContext(OfflinePipelineRequestContext && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // offlineCommand Field Functions 
    bool hasOfflineCommand() const { return this->offlineCommand_ != nullptr;};
    void deleteOfflineCommand() { this->offlineCommand_ = nullptr;};
    inline const OfflinePipelineRequestOfflineCommand & offlineCommand() const { DARABONBA_PTR_GET_CONST(offlineCommand_, OfflinePipelineRequestOfflineCommand) };
    inline OfflinePipelineRequestOfflineCommand offlineCommand() { DARABONBA_PTR_GET(offlineCommand_, OfflinePipelineRequestOfflineCommand) };
    inline OfflinePipelineRequest& setOfflineCommand(const OfflinePipelineRequestOfflineCommand & offlineCommand) { DARABONBA_PTR_SET_VALUE(offlineCommand_, offlineCommand) };
    inline OfflinePipelineRequest& setOfflineCommand(OfflinePipelineRequestOfflineCommand && offlineCommand) { DARABONBA_PTR_SET_RVALUE(offlineCommand_, offlineCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline OfflinePipelineRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<OfflinePipelineRequestContext> context_ = nullptr;
    // This parameter is required.
    std::shared_ptr<OfflinePipelineRequestOfflineCommand> offlineCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
