// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINEBIZENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OFFLINEBIZENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OfflineBizEntityRequestOfflineCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OfflineBizEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OfflineBizEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OfflineCommand, offlineCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, OfflineBizEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OfflineCommand, offlineCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    OfflineBizEntityRequest() = default ;
    OfflineBizEntityRequest(const OfflineBizEntityRequest &) = default ;
    OfflineBizEntityRequest(OfflineBizEntityRequest &&) = default ;
    OfflineBizEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OfflineBizEntityRequest() = default ;
    OfflineBizEntityRequest& operator=(const OfflineBizEntityRequest &) = default ;
    OfflineBizEntityRequest& operator=(OfflineBizEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->offlineCommand_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // offlineCommand Field Functions 
    bool hasOfflineCommand() const { return this->offlineCommand_ != nullptr;};
    void deleteOfflineCommand() { this->offlineCommand_ = nullptr;};
    inline const OfflineBizEntityRequestOfflineCommand & offlineCommand() const { DARABONBA_PTR_GET_CONST(offlineCommand_, OfflineBizEntityRequestOfflineCommand) };
    inline OfflineBizEntityRequestOfflineCommand offlineCommand() { DARABONBA_PTR_GET(offlineCommand_, OfflineBizEntityRequestOfflineCommand) };
    inline OfflineBizEntityRequest& setOfflineCommand(const OfflineBizEntityRequestOfflineCommand & offlineCommand) { DARABONBA_PTR_SET_VALUE(offlineCommand_, offlineCommand) };
    inline OfflineBizEntityRequest& setOfflineCommand(OfflineBizEntityRequestOfflineCommand && offlineCommand) { DARABONBA_PTR_SET_RVALUE(offlineCommand_, offlineCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline OfflineBizEntityRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<OfflineBizEntityRequestOfflineCommand> offlineCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
