// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONRECORDBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONRECORDBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetOperationRecordByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationRecordByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DetailCommand, detailCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationRecordByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailCommand, detailCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetOperationRecordByIdRequest() = default ;
    GetOperationRecordByIdRequest(const GetOperationRecordByIdRequest &) = default ;
    GetOperationRecordByIdRequest(GetOperationRecordByIdRequest &&) = default ;
    GetOperationRecordByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationRecordByIdRequest() = default ;
    GetOperationRecordByIdRequest& operator=(const GetOperationRecordByIdRequest &) = default ;
    GetOperationRecordByIdRequest& operator=(GetOperationRecordByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetailCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetailCommand& obj) { 
        DARABONBA_PTR_TO_JSON(OperationId, operationId_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, DetailCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      DetailCommand() = default ;
      DetailCommand(const DetailCommand &) = default ;
      DetailCommand(DetailCommand &&) = default ;
      DetailCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetailCommand() = default ;
      DetailCommand& operator=(const DetailCommand &) = default ;
      DetailCommand& operator=(DetailCommand &&) = default ;
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
      inline DetailCommand& setOperationId(int64_t operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline DetailCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // This parameter is required.
      shared_ptr<int64_t> operationId_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->detailCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // detailCommand Field Functions 
    bool hasDetailCommand() const { return this->detailCommand_ != nullptr;};
    void deleteDetailCommand() { this->detailCommand_ = nullptr;};
    inline const GetOperationRecordByIdRequest::DetailCommand & getDetailCommand() const { DARABONBA_PTR_GET_CONST(detailCommand_, GetOperationRecordByIdRequest::DetailCommand) };
    inline GetOperationRecordByIdRequest::DetailCommand getDetailCommand() { DARABONBA_PTR_GET(detailCommand_, GetOperationRecordByIdRequest::DetailCommand) };
    inline GetOperationRecordByIdRequest& setDetailCommand(const GetOperationRecordByIdRequest::DetailCommand & detailCommand) { DARABONBA_PTR_SET_VALUE(detailCommand_, detailCommand) };
    inline GetOperationRecordByIdRequest& setDetailCommand(GetOperationRecordByIdRequest::DetailCommand && detailCommand) { DARABONBA_PTR_SET_RVALUE(detailCommand_, detailCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetOperationRecordByIdRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<GetOperationRecordByIdRequest::DetailCommand> detailCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
