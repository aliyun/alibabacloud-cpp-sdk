// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataSourceRequestCreateCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateDataSourceRequest() = default ;
    CreateDataSourceRequest(const CreateDataSourceRequest &) = default ;
    CreateDataSourceRequest(CreateDataSourceRequest &&) = default ;
    CreateDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSourceRequest() = default ;
    CreateDataSourceRequest& operator=(const CreateDataSourceRequest &) = default ;
    CreateDataSourceRequest& operator=(CreateDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createCommand_ != nullptr
        && this->opTenantId_ != nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateDataSourceRequestCreateCommand & createCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateDataSourceRequestCreateCommand) };
    inline CreateDataSourceRequestCreateCommand createCommand() { DARABONBA_PTR_GET(createCommand_, CreateDataSourceRequestCreateCommand) };
    inline CreateDataSourceRequest& setCreateCommand(const CreateDataSourceRequestCreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateDataSourceRequest& setCreateCommand(CreateDataSourceRequestCreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateDataSourceRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    std::shared_ptr<CreateDataSourceRequestCreateCommand> createCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
