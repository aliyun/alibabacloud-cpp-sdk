// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYCLASSIFYCATALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYCLASSIFYCATALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteSecurityClassifyCatalogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityClassifyCatalogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityClassifyCatalogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteSecurityClassifyCatalogRequest() = default ;
    DeleteSecurityClassifyCatalogRequest(const DeleteSecurityClassifyCatalogRequest &) = default ;
    DeleteSecurityClassifyCatalogRequest(DeleteSecurityClassifyCatalogRequest &&) = default ;
    DeleteSecurityClassifyCatalogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityClassifyCatalogRequest() = default ;
    DeleteSecurityClassifyCatalogRequest& operator=(const DeleteSecurityClassifyCatalogRequest &) = default ;
    DeleteSecurityClassifyCatalogRequest& operator=(DeleteSecurityClassifyCatalogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(ReturnRemovedDetails, returnRemovedDetails_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(ReturnRemovedDetails, returnRemovedDetails_);
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
      virtual bool empty() const override { return this->path_ == nullptr
        && this->returnRemovedDetails_ == nullptr; };
      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline DeleteCommand& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // returnRemovedDetails Field Functions 
      bool hasReturnRemovedDetails() const { return this->returnRemovedDetails_ != nullptr;};
      void deleteReturnRemovedDetails() { this->returnRemovedDetails_ = nullptr;};
      inline bool getReturnRemovedDetails() const { DARABONBA_PTR_GET_DEFAULT(returnRemovedDetails_, false) };
      inline DeleteCommand& setReturnRemovedDetails(bool returnRemovedDetails) { DARABONBA_PTR_SET_VALUE(returnRemovedDetails_, returnRemovedDetails) };


    protected:
      // This parameter is required.
      shared_ptr<string> path_ {};
      shared_ptr<bool> returnRemovedDetails_ {};
    };

    virtual bool empty() const override { return this->deleteCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteCommand Field Functions 
    bool hasDeleteCommand() const { return this->deleteCommand_ != nullptr;};
    void deleteDeleteCommand() { this->deleteCommand_ = nullptr;};
    inline const DeleteSecurityClassifyCatalogRequest::DeleteCommand & getDeleteCommand() const { DARABONBA_PTR_GET_CONST(deleteCommand_, DeleteSecurityClassifyCatalogRequest::DeleteCommand) };
    inline DeleteSecurityClassifyCatalogRequest::DeleteCommand getDeleteCommand() { DARABONBA_PTR_GET(deleteCommand_, DeleteSecurityClassifyCatalogRequest::DeleteCommand) };
    inline DeleteSecurityClassifyCatalogRequest& setDeleteCommand(const DeleteSecurityClassifyCatalogRequest::DeleteCommand & deleteCommand) { DARABONBA_PTR_SET_VALUE(deleteCommand_, deleteCommand) };
    inline DeleteSecurityClassifyCatalogRequest& setDeleteCommand(DeleteSecurityClassifyCatalogRequest::DeleteCommand && deleteCommand) { DARABONBA_PTR_SET_RVALUE(deleteCommand_, deleteCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteSecurityClassifyCatalogRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteSecurityClassifyCatalogRequest::DeleteCommand> deleteCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
