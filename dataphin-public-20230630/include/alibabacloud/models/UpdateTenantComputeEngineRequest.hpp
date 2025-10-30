// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETENANTCOMPUTEENGINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETENANTCOMPUTEENGINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTenantComputeEngineRequestUpdateCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateTenantComputeEngineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTenantComputeEngineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTenantComputeEngineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateTenantComputeEngineRequest() = default ;
    UpdateTenantComputeEngineRequest(const UpdateTenantComputeEngineRequest &) = default ;
    UpdateTenantComputeEngineRequest(UpdateTenantComputeEngineRequest &&) = default ;
    UpdateTenantComputeEngineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTenantComputeEngineRequest() = default ;
    UpdateTenantComputeEngineRequest& operator=(const UpdateTenantComputeEngineRequest &) = default ;
    UpdateTenantComputeEngineRequest& operator=(UpdateTenantComputeEngineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateTenantComputeEngineRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateTenantComputeEngineRequestUpdateCommand & updateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateTenantComputeEngineRequestUpdateCommand) };
    inline UpdateTenantComputeEngineRequestUpdateCommand updateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateTenantComputeEngineRequestUpdateCommand) };
    inline UpdateTenantComputeEngineRequest& setUpdateCommand(const UpdateTenantComputeEngineRequestUpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateTenantComputeEngineRequest& setUpdateCommand(UpdateTenantComputeEngineRequestUpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<UpdateTenantComputeEngineRequestUpdateCommand> updateCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
