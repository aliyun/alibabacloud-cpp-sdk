// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTRESOURCEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTRESOURCEPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GrantResourcePermissionRequestGrantCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GrantResourcePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantResourcePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GrantCommand, grantCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GrantResourcePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantCommand, grantCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GrantResourcePermissionRequest() = default ;
    GrantResourcePermissionRequest(const GrantResourcePermissionRequest &) = default ;
    GrantResourcePermissionRequest(GrantResourcePermissionRequest &&) = default ;
    GrantResourcePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantResourcePermissionRequest() = default ;
    GrantResourcePermissionRequest& operator=(const GrantResourcePermissionRequest &) = default ;
    GrantResourcePermissionRequest& operator=(GrantResourcePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->grantCommand_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // grantCommand Field Functions 
    bool hasGrantCommand() const { return this->grantCommand_ != nullptr;};
    void deleteGrantCommand() { this->grantCommand_ = nullptr;};
    inline const GrantResourcePermissionRequestGrantCommand & grantCommand() const { DARABONBA_PTR_GET_CONST(grantCommand_, GrantResourcePermissionRequestGrantCommand) };
    inline GrantResourcePermissionRequestGrantCommand grantCommand() { DARABONBA_PTR_GET(grantCommand_, GrantResourcePermissionRequestGrantCommand) };
    inline GrantResourcePermissionRequest& setGrantCommand(const GrantResourcePermissionRequestGrantCommand & grantCommand) { DARABONBA_PTR_SET_VALUE(grantCommand_, grantCommand) };
    inline GrantResourcePermissionRequest& setGrantCommand(GrantResourcePermissionRequestGrantCommand && grantCommand) { DARABONBA_PTR_SET_RVALUE(grantCommand_, grantCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GrantResourcePermissionRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<GrantResourcePermissionRequestGrantCommand> grantCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
