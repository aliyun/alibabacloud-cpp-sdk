// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRESOURCEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKRESOURCEPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CheckResourcePermissionRequestCheckCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CheckResourcePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckResourcePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCommand, checkCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckResourcePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCommand, checkCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CheckResourcePermissionRequest() = default ;
    CheckResourcePermissionRequest(const CheckResourcePermissionRequest &) = default ;
    CheckResourcePermissionRequest(CheckResourcePermissionRequest &&) = default ;
    CheckResourcePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckResourcePermissionRequest() = default ;
    CheckResourcePermissionRequest& operator=(const CheckResourcePermissionRequest &) = default ;
    CheckResourcePermissionRequest& operator=(CheckResourcePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkCommand_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // checkCommand Field Functions 
    bool hasCheckCommand() const { return this->checkCommand_ != nullptr;};
    void deleteCheckCommand() { this->checkCommand_ = nullptr;};
    inline const CheckResourcePermissionRequestCheckCommand & checkCommand() const { DARABONBA_PTR_GET_CONST(checkCommand_, CheckResourcePermissionRequestCheckCommand) };
    inline CheckResourcePermissionRequestCheckCommand checkCommand() { DARABONBA_PTR_GET(checkCommand_, CheckResourcePermissionRequestCheckCommand) };
    inline CheckResourcePermissionRequest& setCheckCommand(const CheckResourcePermissionRequestCheckCommand & checkCommand) { DARABONBA_PTR_SET_VALUE(checkCommand_, checkCommand) };
    inline CheckResourcePermissionRequest& setCheckCommand(CheckResourcePermissionRequestCheckCommand && checkCommand) { DARABONBA_PTR_SET_RVALUE(checkCommand_, checkCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CheckResourcePermissionRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<CheckResourcePermissionRequestCheckCommand> checkCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
