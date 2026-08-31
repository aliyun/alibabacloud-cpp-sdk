// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENODEOPSOWNERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENODEOPSOWNERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateNodeOpsOwnerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNodeOpsOwnerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Command, commandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNodeOpsOwnerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, commandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    UpdateNodeOpsOwnerShrinkRequest() = default ;
    UpdateNodeOpsOwnerShrinkRequest(const UpdateNodeOpsOwnerShrinkRequest &) = default ;
    UpdateNodeOpsOwnerShrinkRequest(UpdateNodeOpsOwnerShrinkRequest &&) = default ;
    UpdateNodeOpsOwnerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNodeOpsOwnerShrinkRequest() = default ;
    UpdateNodeOpsOwnerShrinkRequest& operator=(const UpdateNodeOpsOwnerShrinkRequest &) = default ;
    UpdateNodeOpsOwnerShrinkRequest& operator=(UpdateNodeOpsOwnerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // commandShrink Field Functions 
    bool hasCommandShrink() const { return this->commandShrink_ != nullptr;};
    void deleteCommandShrink() { this->commandShrink_ = nullptr;};
    inline string getCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(commandShrink_, "") };
    inline UpdateNodeOpsOwnerShrinkRequest& setCommandShrink(string commandShrink) { DARABONBA_PTR_SET_VALUE(commandShrink_, commandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateNodeOpsOwnerShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline UpdateNodeOpsOwnerShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The command for updating O&M owners.
    // 
    // This parameter is required.
    shared_ptr<string> commandShrink_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
