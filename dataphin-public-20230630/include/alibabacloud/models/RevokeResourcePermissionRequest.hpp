// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKERESOURCEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKERESOURCEPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RevokeResourcePermissionRequestRevokeCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RevokeResourcePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeResourcePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(RevokeCommand, revokeCommand_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeResourcePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(RevokeCommand, revokeCommand_);
    };
    RevokeResourcePermissionRequest() = default ;
    RevokeResourcePermissionRequest(const RevokeResourcePermissionRequest &) = default ;
    RevokeResourcePermissionRequest(RevokeResourcePermissionRequest &&) = default ;
    RevokeResourcePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeResourcePermissionRequest() = default ;
    RevokeResourcePermissionRequest& operator=(const RevokeResourcePermissionRequest &) = default ;
    RevokeResourcePermissionRequest& operator=(RevokeResourcePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->opTenantId_ != nullptr
        && this->revokeCommand_ != nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RevokeResourcePermissionRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // revokeCommand Field Functions 
    bool hasRevokeCommand() const { return this->revokeCommand_ != nullptr;};
    void deleteRevokeCommand() { this->revokeCommand_ = nullptr;};
    inline const RevokeResourcePermissionRequestRevokeCommand & revokeCommand() const { DARABONBA_PTR_GET_CONST(revokeCommand_, RevokeResourcePermissionRequestRevokeCommand) };
    inline RevokeResourcePermissionRequestRevokeCommand revokeCommand() { DARABONBA_PTR_GET(revokeCommand_, RevokeResourcePermissionRequestRevokeCommand) };
    inline RevokeResourcePermissionRequest& setRevokeCommand(const RevokeResourcePermissionRequestRevokeCommand & revokeCommand) { DARABONBA_PTR_SET_VALUE(revokeCommand_, revokeCommand) };
    inline RevokeResourcePermissionRequest& setRevokeCommand(RevokeResourcePermissionRequestRevokeCommand && revokeCommand) { DARABONBA_PTR_SET_RVALUE(revokeCommand_, revokeCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<RevokeResourcePermissionRequestRevokeCommand> revokeCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
