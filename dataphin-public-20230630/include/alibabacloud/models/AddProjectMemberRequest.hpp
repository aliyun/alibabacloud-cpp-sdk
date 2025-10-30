// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROJECTMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPROJECTMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddProjectMemberRequestAddCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddProjectMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddProjectMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, AddProjectMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    AddProjectMemberRequest() = default ;
    AddProjectMemberRequest(const AddProjectMemberRequest &) = default ;
    AddProjectMemberRequest(AddProjectMemberRequest &&) = default ;
    AddProjectMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddProjectMemberRequest() = default ;
    AddProjectMemberRequest& operator=(const AddProjectMemberRequest &) = default ;
    AddProjectMemberRequest& operator=(AddProjectMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addCommand_ == nullptr
        && return this->id_ == nullptr && return this->opTenantId_ == nullptr; };
    // addCommand Field Functions 
    bool hasAddCommand() const { return this->addCommand_ != nullptr;};
    void deleteAddCommand() { this->addCommand_ = nullptr;};
    inline const AddProjectMemberRequestAddCommand & addCommand() const { DARABONBA_PTR_GET_CONST(addCommand_, AddProjectMemberRequestAddCommand) };
    inline AddProjectMemberRequestAddCommand addCommand() { DARABONBA_PTR_GET(addCommand_, AddProjectMemberRequestAddCommand) };
    inline AddProjectMemberRequest& setAddCommand(const AddProjectMemberRequestAddCommand & addCommand) { DARABONBA_PTR_SET_VALUE(addCommand_, addCommand) };
    inline AddProjectMemberRequest& setAddCommand(AddProjectMemberRequestAddCommand && addCommand) { DARABONBA_PTR_SET_RVALUE(addCommand_, addCommand) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AddProjectMemberRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline AddProjectMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<AddProjectMemberRequestAddCommand> addCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
