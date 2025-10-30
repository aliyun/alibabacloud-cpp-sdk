// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERGROUPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERGROUPMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddUserGroupMemberRequestAddCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddUserGroupMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserGroupMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserGroupMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    AddUserGroupMemberRequest() = default ;
    AddUserGroupMemberRequest(const AddUserGroupMemberRequest &) = default ;
    AddUserGroupMemberRequest(AddUserGroupMemberRequest &&) = default ;
    AddUserGroupMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserGroupMemberRequest() = default ;
    AddUserGroupMemberRequest& operator=(const AddUserGroupMemberRequest &) = default ;
    AddUserGroupMemberRequest& operator=(AddUserGroupMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addCommand_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // addCommand Field Functions 
    bool hasAddCommand() const { return this->addCommand_ != nullptr;};
    void deleteAddCommand() { this->addCommand_ = nullptr;};
    inline const AddUserGroupMemberRequestAddCommand & addCommand() const { DARABONBA_PTR_GET_CONST(addCommand_, AddUserGroupMemberRequestAddCommand) };
    inline AddUserGroupMemberRequestAddCommand addCommand() { DARABONBA_PTR_GET(addCommand_, AddUserGroupMemberRequestAddCommand) };
    inline AddUserGroupMemberRequest& setAddCommand(const AddUserGroupMemberRequestAddCommand & addCommand) { DARABONBA_PTR_SET_VALUE(addCommand_, addCommand) };
    inline AddUserGroupMemberRequest& setAddCommand(AddUserGroupMemberRequestAddCommand && addCommand) { DARABONBA_PTR_SET_RVALUE(addCommand_, addCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline AddUserGroupMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    std::shared_ptr<AddUserGroupMemberRequestAddCommand> addCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
