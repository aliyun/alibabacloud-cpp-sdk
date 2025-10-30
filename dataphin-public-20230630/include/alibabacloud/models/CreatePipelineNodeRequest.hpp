// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINENODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINENODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePipelineNodeRequestCreatePipelineNodeCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreatePipelineNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreatePipelineNodeCommand, createPipelineNodeCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatePipelineNodeCommand, createPipelineNodeCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreatePipelineNodeRequest() = default ;
    CreatePipelineNodeRequest(const CreatePipelineNodeRequest &) = default ;
    CreatePipelineNodeRequest(CreatePipelineNodeRequest &&) = default ;
    CreatePipelineNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineNodeRequest() = default ;
    CreatePipelineNodeRequest& operator=(const CreatePipelineNodeRequest &) = default ;
    CreatePipelineNodeRequest& operator=(CreatePipelineNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createPipelineNodeCommand_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // createPipelineNodeCommand Field Functions 
    bool hasCreatePipelineNodeCommand() const { return this->createPipelineNodeCommand_ != nullptr;};
    void deleteCreatePipelineNodeCommand() { this->createPipelineNodeCommand_ = nullptr;};
    inline const CreatePipelineNodeRequestCreatePipelineNodeCommand & createPipelineNodeCommand() const { DARABONBA_PTR_GET_CONST(createPipelineNodeCommand_, CreatePipelineNodeRequestCreatePipelineNodeCommand) };
    inline CreatePipelineNodeRequestCreatePipelineNodeCommand createPipelineNodeCommand() { DARABONBA_PTR_GET(createPipelineNodeCommand_, CreatePipelineNodeRequestCreatePipelineNodeCommand) };
    inline CreatePipelineNodeRequest& setCreatePipelineNodeCommand(const CreatePipelineNodeRequestCreatePipelineNodeCommand & createPipelineNodeCommand) { DARABONBA_PTR_SET_VALUE(createPipelineNodeCommand_, createPipelineNodeCommand) };
    inline CreatePipelineNodeRequest& setCreatePipelineNodeCommand(CreatePipelineNodeRequestCreatePipelineNodeCommand && createPipelineNodeCommand) { DARABONBA_PTR_SET_RVALUE(createPipelineNodeCommand_, createPipelineNodeCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreatePipelineNodeRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<CreatePipelineNodeRequestCreatePipelineNodeCommand> createPipelineNodeCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
