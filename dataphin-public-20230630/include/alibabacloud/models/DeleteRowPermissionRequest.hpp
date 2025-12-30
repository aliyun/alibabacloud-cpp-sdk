// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROWPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROWPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteRowPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRowPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteRowPermissionCommand, deleteRowPermissionCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRowPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteRowPermissionCommand, deleteRowPermissionCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteRowPermissionRequest() = default ;
    DeleteRowPermissionRequest(const DeleteRowPermissionRequest &) = default ;
    DeleteRowPermissionRequest(DeleteRowPermissionRequest &&) = default ;
    DeleteRowPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRowPermissionRequest() = default ;
    DeleteRowPermissionRequest& operator=(const DeleteRowPermissionRequest &) = default ;
    DeleteRowPermissionRequest& operator=(DeleteRowPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteRowPermissionCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteRowPermissionCommand& obj) { 
        DARABONBA_PTR_TO_JSON(RowPermissionId, rowPermissionId_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteRowPermissionCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(RowPermissionId, rowPermissionId_);
      };
      DeleteRowPermissionCommand() = default ;
      DeleteRowPermissionCommand(const DeleteRowPermissionCommand &) = default ;
      DeleteRowPermissionCommand(DeleteRowPermissionCommand &&) = default ;
      DeleteRowPermissionCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteRowPermissionCommand() = default ;
      DeleteRowPermissionCommand& operator=(const DeleteRowPermissionCommand &) = default ;
      DeleteRowPermissionCommand& operator=(DeleteRowPermissionCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->rowPermissionId_ == nullptr; };
      // rowPermissionId Field Functions 
      bool hasRowPermissionId() const { return this->rowPermissionId_ != nullptr;};
      void deleteRowPermissionId() { this->rowPermissionId_ = nullptr;};
      inline int64_t getRowPermissionId() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionId_, 0L) };
      inline DeleteRowPermissionCommand& setRowPermissionId(int64_t rowPermissionId) { DARABONBA_PTR_SET_VALUE(rowPermissionId_, rowPermissionId) };


    protected:
      // This parameter is required.
      shared_ptr<int64_t> rowPermissionId_ {};
    };

    virtual bool empty() const override { return this->deleteRowPermissionCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteRowPermissionCommand Field Functions 
    bool hasDeleteRowPermissionCommand() const { return this->deleteRowPermissionCommand_ != nullptr;};
    void deleteDeleteRowPermissionCommand() { this->deleteRowPermissionCommand_ = nullptr;};
    inline const DeleteRowPermissionRequest::DeleteRowPermissionCommand & getDeleteRowPermissionCommand() const { DARABONBA_PTR_GET_CONST(deleteRowPermissionCommand_, DeleteRowPermissionRequest::DeleteRowPermissionCommand) };
    inline DeleteRowPermissionRequest::DeleteRowPermissionCommand getDeleteRowPermissionCommand() { DARABONBA_PTR_GET(deleteRowPermissionCommand_, DeleteRowPermissionRequest::DeleteRowPermissionCommand) };
    inline DeleteRowPermissionRequest& setDeleteRowPermissionCommand(const DeleteRowPermissionRequest::DeleteRowPermissionCommand & deleteRowPermissionCommand) { DARABONBA_PTR_SET_VALUE(deleteRowPermissionCommand_, deleteRowPermissionCommand) };
    inline DeleteRowPermissionRequest& setDeleteRowPermissionCommand(DeleteRowPermissionRequest::DeleteRowPermissionCommand && deleteRowPermissionCommand) { DARABONBA_PTR_SET_RVALUE(deleteRowPermissionCommand_, deleteRowPermissionCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteRowPermissionRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteRowPermissionRequest::DeleteRowPermissionCommand> deleteRowPermissionCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
