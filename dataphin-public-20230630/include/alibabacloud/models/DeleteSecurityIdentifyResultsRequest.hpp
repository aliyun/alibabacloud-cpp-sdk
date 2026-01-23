// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYIDENTIFYRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYIDENTIFYRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteSecurityIdentifyResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityIdentifyResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityIdentifyResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteSecurityIdentifyResultsRequest() = default ;
    DeleteSecurityIdentifyResultsRequest(const DeleteSecurityIdentifyResultsRequest &) = default ;
    DeleteSecurityIdentifyResultsRequest(DeleteSecurityIdentifyResultsRequest &&) = default ;
    DeleteSecurityIdentifyResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityIdentifyResultsRequest() = default ;
    DeleteSecurityIdentifyResultsRequest& operator=(const DeleteSecurityIdentifyResultsRequest &) = default ;
    DeleteSecurityIdentifyResultsRequest& operator=(DeleteSecurityIdentifyResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteCommand& obj) { 
        DARABONBA_PTR_TO_JSON(IdentifyResultIdList, identifyResultIdList_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(IdentifyResultIdList, identifyResultIdList_);
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
      virtual bool empty() const override { return this->identifyResultIdList_ == nullptr; };
      // identifyResultIdList Field Functions 
      bool hasIdentifyResultIdList() const { return this->identifyResultIdList_ != nullptr;};
      void deleteIdentifyResultIdList() { this->identifyResultIdList_ = nullptr;};
      inline const vector<int64_t> & getIdentifyResultIdList() const { DARABONBA_PTR_GET_CONST(identifyResultIdList_, vector<int64_t>) };
      inline vector<int64_t> getIdentifyResultIdList() { DARABONBA_PTR_GET(identifyResultIdList_, vector<int64_t>) };
      inline DeleteCommand& setIdentifyResultIdList(const vector<int64_t> & identifyResultIdList) { DARABONBA_PTR_SET_VALUE(identifyResultIdList_, identifyResultIdList) };
      inline DeleteCommand& setIdentifyResultIdList(vector<int64_t> && identifyResultIdList) { DARABONBA_PTR_SET_RVALUE(identifyResultIdList_, identifyResultIdList) };


    protected:
      shared_ptr<vector<int64_t>> identifyResultIdList_ {};
    };

    virtual bool empty() const override { return this->deleteCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteCommand Field Functions 
    bool hasDeleteCommand() const { return this->deleteCommand_ != nullptr;};
    void deleteDeleteCommand() { this->deleteCommand_ = nullptr;};
    inline const DeleteSecurityIdentifyResultsRequest::DeleteCommand & getDeleteCommand() const { DARABONBA_PTR_GET_CONST(deleteCommand_, DeleteSecurityIdentifyResultsRequest::DeleteCommand) };
    inline DeleteSecurityIdentifyResultsRequest::DeleteCommand getDeleteCommand() { DARABONBA_PTR_GET(deleteCommand_, DeleteSecurityIdentifyResultsRequest::DeleteCommand) };
    inline DeleteSecurityIdentifyResultsRequest& setDeleteCommand(const DeleteSecurityIdentifyResultsRequest::DeleteCommand & deleteCommand) { DARABONBA_PTR_SET_VALUE(deleteCommand_, deleteCommand) };
    inline DeleteSecurityIdentifyResultsRequest& setDeleteCommand(DeleteSecurityIdentifyResultsRequest::DeleteCommand && deleteCommand) { DARABONBA_PTR_SET_RVALUE(deleteCommand_, deleteCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteSecurityIdentifyResultsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteSecurityIdentifyResultsRequest::DeleteCommand> deleteCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
