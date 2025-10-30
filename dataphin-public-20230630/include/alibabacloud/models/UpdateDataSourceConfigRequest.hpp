// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASOURCECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASOURCECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDataSourceConfigRequestUpdateCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateDataSourceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSourceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSourceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateDataSourceConfigRequest() = default ;
    UpdateDataSourceConfigRequest(const UpdateDataSourceConfigRequest &) = default ;
    UpdateDataSourceConfigRequest(UpdateDataSourceConfigRequest &&) = default ;
    UpdateDataSourceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSourceConfigRequest() = default ;
    UpdateDataSourceConfigRequest& operator=(const UpdateDataSourceConfigRequest &) = default ;
    UpdateDataSourceConfigRequest& operator=(UpdateDataSourceConfigRequest &&) = default ;
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
    inline UpdateDataSourceConfigRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateDataSourceConfigRequestUpdateCommand & updateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateDataSourceConfigRequestUpdateCommand) };
    inline UpdateDataSourceConfigRequestUpdateCommand updateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateDataSourceConfigRequestUpdateCommand) };
    inline UpdateDataSourceConfigRequest& setUpdateCommand(const UpdateDataSourceConfigRequestUpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateDataSourceConfigRequest& setUpdateCommand(UpdateDataSourceConfigRequestUpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<UpdateDataSourceConfigRequestUpdateCommand> updateCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
