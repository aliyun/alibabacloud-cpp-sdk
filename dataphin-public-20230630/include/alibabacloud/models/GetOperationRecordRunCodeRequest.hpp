// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONRECORDRUNCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONRECORDRUNCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetOperationRecordRunCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationRecordRunCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CodeCommand, codeCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationRecordRunCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeCommand, codeCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetOperationRecordRunCodeRequest() = default ;
    GetOperationRecordRunCodeRequest(const GetOperationRecordRunCodeRequest &) = default ;
    GetOperationRecordRunCodeRequest(GetOperationRecordRunCodeRequest &&) = default ;
    GetOperationRecordRunCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationRecordRunCodeRequest() = default ;
    GetOperationRecordRunCodeRequest& operator=(const GetOperationRecordRunCodeRequest &) = default ;
    GetOperationRecordRunCodeRequest& operator=(GetOperationRecordRunCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CodeCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CodeCommand& obj) { 
        DARABONBA_PTR_TO_JSON(OperationId, operationId_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, CodeCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      CodeCommand() = default ;
      CodeCommand(const CodeCommand &) = default ;
      CodeCommand(CodeCommand &&) = default ;
      CodeCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CodeCommand() = default ;
      CodeCommand& operator=(const CodeCommand &) = default ;
      CodeCommand& operator=(CodeCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->operationId_ == nullptr
        && this->projectId_ == nullptr; };
      // operationId Field Functions 
      bool hasOperationId() const { return this->operationId_ != nullptr;};
      void deleteOperationId() { this->operationId_ = nullptr;};
      inline int64_t getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, 0L) };
      inline CodeCommand& setOperationId(int64_t operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline CodeCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // The operation log ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> operationId_ {};
      // The project ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->codeCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // codeCommand Field Functions 
    bool hasCodeCommand() const { return this->codeCommand_ != nullptr;};
    void deleteCodeCommand() { this->codeCommand_ = nullptr;};
    inline const GetOperationRecordRunCodeRequest::CodeCommand & getCodeCommand() const { DARABONBA_PTR_GET_CONST(codeCommand_, GetOperationRecordRunCodeRequest::CodeCommand) };
    inline GetOperationRecordRunCodeRequest::CodeCommand getCodeCommand() { DARABONBA_PTR_GET(codeCommand_, GetOperationRecordRunCodeRequest::CodeCommand) };
    inline GetOperationRecordRunCodeRequest& setCodeCommand(const GetOperationRecordRunCodeRequest::CodeCommand & codeCommand) { DARABONBA_PTR_SET_VALUE(codeCommand_, codeCommand) };
    inline GetOperationRecordRunCodeRequest& setCodeCommand(GetOperationRecordRunCodeRequest::CodeCommand && codeCommand) { DARABONBA_PTR_SET_RVALUE(codeCommand_, codeCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetOperationRecordRunCodeRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // The query command.
    // 
    // This parameter is required.
    shared_ptr<GetOperationRecordRunCodeRequest::CodeCommand> codeCommand_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
