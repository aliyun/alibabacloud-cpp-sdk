// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTREAMBATCHJOBMAPPINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTREAMBATCHJOBMAPPINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateStreamBatchJobMappingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStreamBatchJobMappingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(StreamBatchJobMappingCreateCommand, streamBatchJobMappingCreateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStreamBatchJobMappingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(StreamBatchJobMappingCreateCommand, streamBatchJobMappingCreateCommand_);
    };
    CreateStreamBatchJobMappingRequest() = default ;
    CreateStreamBatchJobMappingRequest(const CreateStreamBatchJobMappingRequest &) = default ;
    CreateStreamBatchJobMappingRequest(CreateStreamBatchJobMappingRequest &&) = default ;
    CreateStreamBatchJobMappingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStreamBatchJobMappingRequest() = default ;
    CreateStreamBatchJobMappingRequest& operator=(const CreateStreamBatchJobMappingRequest &) = default ;
    CreateStreamBatchJobMappingRequest& operator=(CreateStreamBatchJobMappingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->opTenantId_ != nullptr
        && this->streamBatchJobMappingCreateCommand_ != nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateStreamBatchJobMappingRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // streamBatchJobMappingCreateCommand Field Functions 
    bool hasStreamBatchJobMappingCreateCommand() const { return this->streamBatchJobMappingCreateCommand_ != nullptr;};
    void deleteStreamBatchJobMappingCreateCommand() { this->streamBatchJobMappingCreateCommand_ = nullptr;};
    inline const CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand & streamBatchJobMappingCreateCommand() const { DARABONBA_PTR_GET_CONST(streamBatchJobMappingCreateCommand_, CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand) };
    inline CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand streamBatchJobMappingCreateCommand() { DARABONBA_PTR_GET(streamBatchJobMappingCreateCommand_, CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand) };
    inline CreateStreamBatchJobMappingRequest& setStreamBatchJobMappingCreateCommand(const CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand & streamBatchJobMappingCreateCommand) { DARABONBA_PTR_SET_VALUE(streamBatchJobMappingCreateCommand_, streamBatchJobMappingCreateCommand) };
    inline CreateStreamBatchJobMappingRequest& setStreamBatchJobMappingCreateCommand(CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand && streamBatchJobMappingCreateCommand) { DARABONBA_PTR_SET_RVALUE(streamBatchJobMappingCreateCommand_, streamBatchJobMappingCreateCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand> streamBatchJobMappingCreateCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
