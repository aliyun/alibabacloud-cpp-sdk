// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYIDENTIFYRESULTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYIDENTIFYRESULTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteSecurityIdentifyResultsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityIdentifyResultsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteCommand, deleteCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityIdentifyResultsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteCommand, deleteCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    DeleteSecurityIdentifyResultsShrinkRequest() = default ;
    DeleteSecurityIdentifyResultsShrinkRequest(const DeleteSecurityIdentifyResultsShrinkRequest &) = default ;
    DeleteSecurityIdentifyResultsShrinkRequest(DeleteSecurityIdentifyResultsShrinkRequest &&) = default ;
    DeleteSecurityIdentifyResultsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityIdentifyResultsShrinkRequest() = default ;
    DeleteSecurityIdentifyResultsShrinkRequest& operator=(const DeleteSecurityIdentifyResultsShrinkRequest &) = default ;
    DeleteSecurityIdentifyResultsShrinkRequest& operator=(DeleteSecurityIdentifyResultsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // deleteCommandShrink Field Functions 
    bool hasDeleteCommandShrink() const { return this->deleteCommandShrink_ != nullptr;};
    void deleteDeleteCommandShrink() { this->deleteCommandShrink_ = nullptr;};
    inline string getDeleteCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(deleteCommandShrink_, "") };
    inline DeleteSecurityIdentifyResultsShrinkRequest& setDeleteCommandShrink(string deleteCommandShrink) { DARABONBA_PTR_SET_VALUE(deleteCommandShrink_, deleteCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteSecurityIdentifyResultsShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline DeleteSecurityIdentifyResultsShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The delete instruction.
    // 
    // This parameter is required.
    shared_ptr<string> deleteCommandShrink_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
