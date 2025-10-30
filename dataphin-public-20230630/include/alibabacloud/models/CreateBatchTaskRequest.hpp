// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateBatchTaskRequestCreateCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateBatchTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateBatchTaskRequest() = default ;
    CreateBatchTaskRequest(const CreateBatchTaskRequest &) = default ;
    CreateBatchTaskRequest(CreateBatchTaskRequest &&) = default ;
    CreateBatchTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchTaskRequest() = default ;
    CreateBatchTaskRequest& operator=(const CreateBatchTaskRequest &) = default ;
    CreateBatchTaskRequest& operator=(CreateBatchTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createCommand_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateBatchTaskRequestCreateCommand & createCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateBatchTaskRequestCreateCommand) };
    inline CreateBatchTaskRequestCreateCommand createCommand() { DARABONBA_PTR_GET(createCommand_, CreateBatchTaskRequestCreateCommand) };
    inline CreateBatchTaskRequest& setCreateCommand(const CreateBatchTaskRequestCreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateBatchTaskRequest& setCreateCommand(CreateBatchTaskRequestCreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateBatchTaskRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<CreateBatchTaskRequestCreateCommand> createCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
