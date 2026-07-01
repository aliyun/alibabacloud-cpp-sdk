// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONRECORDDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONRECORDDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetOperationRecordDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationRecordDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(RecordDetailCommand, recordDetailCommand_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationRecordDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(RecordDetailCommand, recordDetailCommand_);
    };
    GetOperationRecordDetailRequest() = default ;
    GetOperationRecordDetailRequest(const GetOperationRecordDetailRequest &) = default ;
    GetOperationRecordDetailRequest(GetOperationRecordDetailRequest &&) = default ;
    GetOperationRecordDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationRecordDetailRequest() = default ;
    GetOperationRecordDetailRequest& operator=(const GetOperationRecordDetailRequest &) = default ;
    GetOperationRecordDetailRequest& operator=(GetOperationRecordDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordDetailCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordDetailCommand& obj) { 
        DARABONBA_PTR_TO_JSON(OperationId, operationId_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, RecordDetailCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      RecordDetailCommand() = default ;
      RecordDetailCommand(const RecordDetailCommand &) = default ;
      RecordDetailCommand(RecordDetailCommand &&) = default ;
      RecordDetailCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordDetailCommand() = default ;
      RecordDetailCommand& operator=(const RecordDetailCommand &) = default ;
      RecordDetailCommand& operator=(RecordDetailCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->operationId_ == nullptr
        && this->projectId_ == nullptr; };
      // operationId Field Functions 
      bool hasOperationId() const { return this->operationId_ != nullptr;};
      void deleteOperationId() { this->operationId_ = nullptr;};
      inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
      inline RecordDetailCommand& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline RecordDetailCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // The operation record ID.
      // 
      // This parameter is required.
      shared_ptr<string> operationId_ {};
      // The project ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->recordDetailCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetOperationRecordDetailRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // recordDetailCommand Field Functions 
    bool hasRecordDetailCommand() const { return this->recordDetailCommand_ != nullptr;};
    void deleteRecordDetailCommand() { this->recordDetailCommand_ = nullptr;};
    inline const GetOperationRecordDetailRequest::RecordDetailCommand & getRecordDetailCommand() const { DARABONBA_PTR_GET_CONST(recordDetailCommand_, GetOperationRecordDetailRequest::RecordDetailCommand) };
    inline GetOperationRecordDetailRequest::RecordDetailCommand getRecordDetailCommand() { DARABONBA_PTR_GET(recordDetailCommand_, GetOperationRecordDetailRequest::RecordDetailCommand) };
    inline GetOperationRecordDetailRequest& setRecordDetailCommand(const GetOperationRecordDetailRequest::RecordDetailCommand & recordDetailCommand) { DARABONBA_PTR_SET_VALUE(recordDetailCommand_, recordDetailCommand) };
    inline GetOperationRecordDetailRequest& setRecordDetailCommand(GetOperationRecordDetailRequest::RecordDetailCommand && recordDetailCommand) { DARABONBA_PTR_SET_RVALUE(recordDetailCommand_, recordDetailCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The query command.
    // 
    // This parameter is required.
    shared_ptr<GetOperationRecordDetailRequest::RecordDetailCommand> recordDetailCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
