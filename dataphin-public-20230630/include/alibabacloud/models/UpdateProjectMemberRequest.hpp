// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateProjectMemberRequestUpdateCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateProjectMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateProjectMemberRequest() = default ;
    UpdateProjectMemberRequest(const UpdateProjectMemberRequest &) = default ;
    UpdateProjectMemberRequest(UpdateProjectMemberRequest &&) = default ;
    UpdateProjectMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectMemberRequest() = default ;
    UpdateProjectMemberRequest& operator=(const UpdateProjectMemberRequest &) = default ;
    UpdateProjectMemberRequest& operator=(UpdateProjectMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->opTenantId_ == nullptr && return this->updateCommand_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateProjectMemberRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateProjectMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateProjectMemberRequestUpdateCommand & updateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateProjectMemberRequestUpdateCommand) };
    inline UpdateProjectMemberRequestUpdateCommand updateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateProjectMemberRequestUpdateCommand) };
    inline UpdateProjectMemberRequest& setUpdateCommand(const UpdateProjectMemberRequestUpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateProjectMemberRequest& setUpdateCommand(UpdateProjectMemberRequestUpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<UpdateProjectMemberRequestUpdateCommand> updateCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
