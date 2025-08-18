// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEPROJECTMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEPROJECTMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RemoveProjectMemberRequestRemoveCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RemoveProjectMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveProjectMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(RemoveCommand, removeCommand_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveProjectMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(RemoveCommand, removeCommand_);
    };
    RemoveProjectMemberRequest() = default ;
    RemoveProjectMemberRequest(const RemoveProjectMemberRequest &) = default ;
    RemoveProjectMemberRequest(RemoveProjectMemberRequest &&) = default ;
    RemoveProjectMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveProjectMemberRequest() = default ;
    RemoveProjectMemberRequest& operator=(const RemoveProjectMemberRequest &) = default ;
    RemoveProjectMemberRequest& operator=(RemoveProjectMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->opTenantId_ != nullptr && this->removeCommand_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline RemoveProjectMemberRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RemoveProjectMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // removeCommand Field Functions 
    bool hasRemoveCommand() const { return this->removeCommand_ != nullptr;};
    void deleteRemoveCommand() { this->removeCommand_ = nullptr;};
    inline const RemoveProjectMemberRequestRemoveCommand & removeCommand() const { DARABONBA_PTR_GET_CONST(removeCommand_, RemoveProjectMemberRequestRemoveCommand) };
    inline RemoveProjectMemberRequestRemoveCommand removeCommand() { DARABONBA_PTR_GET(removeCommand_, RemoveProjectMemberRequestRemoveCommand) };
    inline RemoveProjectMemberRequest& setRemoveCommand(const RemoveProjectMemberRequestRemoveCommand & removeCommand) { DARABONBA_PTR_SET_VALUE(removeCommand_, removeCommand) };
    inline RemoveProjectMemberRequest& setRemoveCommand(RemoveProjectMemberRequestRemoveCommand && removeCommand) { DARABONBA_PTR_SET_RVALUE(removeCommand_, removeCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<RemoveProjectMemberRequestRemoveCommand> removeCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
