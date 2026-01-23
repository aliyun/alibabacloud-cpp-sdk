// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYLEVELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYLEVELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteSecurityLevelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityLevelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityLevelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteSecurityLevelRequest() = default ;
    DeleteSecurityLevelRequest(const DeleteSecurityLevelRequest &) = default ;
    DeleteSecurityLevelRequest(DeleteSecurityLevelRequest &&) = default ;
    DeleteSecurityLevelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityLevelRequest() = default ;
    DeleteSecurityLevelRequest& operator=(const DeleteSecurityLevelRequest &) = default ;
    DeleteSecurityLevelRequest& operator=(DeleteSecurityLevelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
      virtual bool empty() const override { return this->index_ == nullptr
        && this->name_ == nullptr; };
      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline DeleteCommand& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DeleteCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<int64_t> index_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->deleteCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteCommand Field Functions 
    bool hasDeleteCommand() const { return this->deleteCommand_ != nullptr;};
    void deleteDeleteCommand() { this->deleteCommand_ = nullptr;};
    inline const DeleteSecurityLevelRequest::DeleteCommand & getDeleteCommand() const { DARABONBA_PTR_GET_CONST(deleteCommand_, DeleteSecurityLevelRequest::DeleteCommand) };
    inline DeleteSecurityLevelRequest::DeleteCommand getDeleteCommand() { DARABONBA_PTR_GET(deleteCommand_, DeleteSecurityLevelRequest::DeleteCommand) };
    inline DeleteSecurityLevelRequest& setDeleteCommand(const DeleteSecurityLevelRequest::DeleteCommand & deleteCommand) { DARABONBA_PTR_SET_VALUE(deleteCommand_, deleteCommand) };
    inline DeleteSecurityLevelRequest& setDeleteCommand(DeleteSecurityLevelRequest::DeleteCommand && deleteCommand) { DARABONBA_PTR_SET_RVALUE(deleteCommand_, deleteCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteSecurityLevelRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteSecurityLevelRequest::DeleteCommand> deleteCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
