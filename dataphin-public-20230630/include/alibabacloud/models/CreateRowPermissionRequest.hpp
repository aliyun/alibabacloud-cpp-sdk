// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROWPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROWPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRowPermissionRequestCreateRowPermissionCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateRowPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRowPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateRowPermissionCommand, createRowPermissionCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRowPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateRowPermissionCommand, createRowPermissionCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateRowPermissionRequest() = default ;
    CreateRowPermissionRequest(const CreateRowPermissionRequest &) = default ;
    CreateRowPermissionRequest(CreateRowPermissionRequest &&) = default ;
    CreateRowPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRowPermissionRequest() = default ;
    CreateRowPermissionRequest& operator=(const CreateRowPermissionRequest &) = default ;
    CreateRowPermissionRequest& operator=(CreateRowPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createRowPermissionCommand_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // createRowPermissionCommand Field Functions 
    bool hasCreateRowPermissionCommand() const { return this->createRowPermissionCommand_ != nullptr;};
    void deleteCreateRowPermissionCommand() { this->createRowPermissionCommand_ = nullptr;};
    inline const CreateRowPermissionRequestCreateRowPermissionCommand & createRowPermissionCommand() const { DARABONBA_PTR_GET_CONST(createRowPermissionCommand_, CreateRowPermissionRequestCreateRowPermissionCommand) };
    inline CreateRowPermissionRequestCreateRowPermissionCommand createRowPermissionCommand() { DARABONBA_PTR_GET(createRowPermissionCommand_, CreateRowPermissionRequestCreateRowPermissionCommand) };
    inline CreateRowPermissionRequest& setCreateRowPermissionCommand(const CreateRowPermissionRequestCreateRowPermissionCommand & createRowPermissionCommand) { DARABONBA_PTR_SET_VALUE(createRowPermissionCommand_, createRowPermissionCommand) };
    inline CreateRowPermissionRequest& setCreateRowPermissionCommand(CreateRowPermissionRequestCreateRowPermissionCommand && createRowPermissionCommand) { DARABONBA_PTR_SET_RVALUE(createRowPermissionCommand_, createRowPermissionCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateRowPermissionRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<CreateRowPermissionRequestCreateRowPermissionCommand> createRowPermissionCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
