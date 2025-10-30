// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASERVICEAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASERVICEAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataServiceApiRequestCreateCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateDataServiceApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataServiceApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataServiceApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateDataServiceApiRequest() = default ;
    CreateDataServiceApiRequest(const CreateDataServiceApiRequest &) = default ;
    CreateDataServiceApiRequest(CreateDataServiceApiRequest &&) = default ;
    CreateDataServiceApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataServiceApiRequest() = default ;
    CreateDataServiceApiRequest& operator=(const CreateDataServiceApiRequest &) = default ;
    CreateDataServiceApiRequest& operator=(CreateDataServiceApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createCommand_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateDataServiceApiRequestCreateCommand & createCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateDataServiceApiRequestCreateCommand) };
    inline CreateDataServiceApiRequestCreateCommand createCommand() { DARABONBA_PTR_GET(createCommand_, CreateDataServiceApiRequestCreateCommand) };
    inline CreateDataServiceApiRequest& setCreateCommand(const CreateDataServiceApiRequestCreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateDataServiceApiRequest& setCreateCommand(CreateDataServiceApiRequestCreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateDataServiceApiRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<CreateDataServiceApiRequestCreateCommand> createCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
