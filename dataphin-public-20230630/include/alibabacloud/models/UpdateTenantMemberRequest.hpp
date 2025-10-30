// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETENANTMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETENANTMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTenantMemberRequestUpdateCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateTenantMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTenantMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTenantMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateTenantMemberRequest() = default ;
    UpdateTenantMemberRequest(const UpdateTenantMemberRequest &) = default ;
    UpdateTenantMemberRequest(UpdateTenantMemberRequest &&) = default ;
    UpdateTenantMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTenantMemberRequest() = default ;
    UpdateTenantMemberRequest& operator=(const UpdateTenantMemberRequest &) = default ;
    UpdateTenantMemberRequest& operator=(UpdateTenantMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateTenantMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateTenantMemberRequestUpdateCommand & updateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateTenantMemberRequestUpdateCommand) };
    inline UpdateTenantMemberRequestUpdateCommand updateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateTenantMemberRequestUpdateCommand) };
    inline UpdateTenantMemberRequest& setUpdateCommand(const UpdateTenantMemberRequestUpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateTenantMemberRequest& setUpdateCommand(UpdateTenantMemberRequestUpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<UpdateTenantMemberRequestUpdateCommand> updateCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
