// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTANDARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESTANDARDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteStandardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStandardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStandardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteStandardRequest() = default ;
    DeleteStandardRequest(const DeleteStandardRequest &) = default ;
    DeleteStandardRequest(DeleteStandardRequest &&) = default ;
    DeleteStandardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStandardRequest() = default ;
    DeleteStandardRequest& operator=(const DeleteStandardRequest &) = default ;
    DeleteStandardRequest& operator=(DeleteStandardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
      };
      DeleteCommand() = default ;
      DeleteCommand(const DeleteCommand &) = default ;
      DeleteCommand(DeleteCommand &&) = default ;
      DeleteCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteCommand() = default ;
      DeleteCommand& operator=(const DeleteCommand &) = default ;
      DeleteCommand& operator=(DeleteCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DeleteCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      // This parameter is required.
      shared_ptr<int64_t> id_ {};
    };

    virtual bool empty() const override { return this->deleteCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteCommand Field Functions 
    bool hasDeleteCommand() const { return this->deleteCommand_ != nullptr;};
    void deleteDeleteCommand() { this->deleteCommand_ = nullptr;};
    inline const DeleteStandardRequest::DeleteCommand & getDeleteCommand() const { DARABONBA_PTR_GET_CONST(deleteCommand_, DeleteStandardRequest::DeleteCommand) };
    inline DeleteStandardRequest::DeleteCommand getDeleteCommand() { DARABONBA_PTR_GET(deleteCommand_, DeleteStandardRequest::DeleteCommand) };
    inline DeleteStandardRequest& setDeleteCommand(const DeleteStandardRequest::DeleteCommand & deleteCommand) { DARABONBA_PTR_SET_VALUE(deleteCommand_, deleteCommand) };
    inline DeleteStandardRequest& setDeleteCommand(DeleteStandardRequest::DeleteCommand && deleteCommand) { DARABONBA_PTR_SET_RVALUE(deleteCommand_, deleteCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteStandardRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteStandardRequest::DeleteCommand> deleteCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
