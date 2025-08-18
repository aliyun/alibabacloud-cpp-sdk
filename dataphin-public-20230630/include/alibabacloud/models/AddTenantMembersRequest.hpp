// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTENANTMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTENANTMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddTenantMembersRequestAddCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddTenantMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTenantMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, AddTenantMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    AddTenantMembersRequest() = default ;
    AddTenantMembersRequest(const AddTenantMembersRequest &) = default ;
    AddTenantMembersRequest(AddTenantMembersRequest &&) = default ;
    AddTenantMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTenantMembersRequest() = default ;
    AddTenantMembersRequest& operator=(const AddTenantMembersRequest &) = default ;
    AddTenantMembersRequest& operator=(AddTenantMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addCommand_ != nullptr
        && this->opTenantId_ != nullptr; };
    // addCommand Field Functions 
    bool hasAddCommand() const { return this->addCommand_ != nullptr;};
    void deleteAddCommand() { this->addCommand_ = nullptr;};
    inline const AddTenantMembersRequestAddCommand & addCommand() const { DARABONBA_PTR_GET_CONST(addCommand_, AddTenantMembersRequestAddCommand) };
    inline AddTenantMembersRequestAddCommand addCommand() { DARABONBA_PTR_GET(addCommand_, AddTenantMembersRequestAddCommand) };
    inline AddTenantMembersRequest& setAddCommand(const AddTenantMembersRequestAddCommand & addCommand) { DARABONBA_PTR_SET_VALUE(addCommand_, addCommand) };
    inline AddTenantMembersRequest& setAddCommand(AddTenantMembersRequestAddCommand && addCommand) { DARABONBA_PTR_SET_RVALUE(addCommand_, addCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline AddTenantMembersRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<AddTenantMembersRequestAddCommand> addCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
