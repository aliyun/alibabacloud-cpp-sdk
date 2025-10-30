// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDREGISTERLINEAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDREGISTERLINEAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddRegisterLineageRequestAddRegisterLineageCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddRegisterLineageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRegisterLineageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddRegisterLineageCommand, addRegisterLineageCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, AddRegisterLineageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddRegisterLineageCommand, addRegisterLineageCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    AddRegisterLineageRequest() = default ;
    AddRegisterLineageRequest(const AddRegisterLineageRequest &) = default ;
    AddRegisterLineageRequest(AddRegisterLineageRequest &&) = default ;
    AddRegisterLineageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRegisterLineageRequest() = default ;
    AddRegisterLineageRequest& operator=(const AddRegisterLineageRequest &) = default ;
    AddRegisterLineageRequest& operator=(AddRegisterLineageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addRegisterLineageCommand_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // addRegisterLineageCommand Field Functions 
    bool hasAddRegisterLineageCommand() const { return this->addRegisterLineageCommand_ != nullptr;};
    void deleteAddRegisterLineageCommand() { this->addRegisterLineageCommand_ = nullptr;};
    inline const AddRegisterLineageRequestAddRegisterLineageCommand & addRegisterLineageCommand() const { DARABONBA_PTR_GET_CONST(addRegisterLineageCommand_, AddRegisterLineageRequestAddRegisterLineageCommand) };
    inline AddRegisterLineageRequestAddRegisterLineageCommand addRegisterLineageCommand() { DARABONBA_PTR_GET(addRegisterLineageCommand_, AddRegisterLineageRequestAddRegisterLineageCommand) };
    inline AddRegisterLineageRequest& setAddRegisterLineageCommand(const AddRegisterLineageRequestAddRegisterLineageCommand & addRegisterLineageCommand) { DARABONBA_PTR_SET_VALUE(addRegisterLineageCommand_, addRegisterLineageCommand) };
    inline AddRegisterLineageRequest& setAddRegisterLineageCommand(AddRegisterLineageRequestAddRegisterLineageCommand && addRegisterLineageCommand) { DARABONBA_PTR_SET_RVALUE(addRegisterLineageCommand_, addRegisterLineageCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline AddRegisterLineageRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<AddRegisterLineageRequestAddRegisterLineageCommand> addRegisterLineageCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
