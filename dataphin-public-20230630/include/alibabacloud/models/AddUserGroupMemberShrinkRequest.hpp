// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERGROUPMEMBERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERGROUPMEMBERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddUserGroupMemberShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserGroupMemberShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddCommand, addCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserGroupMemberShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddCommand, addCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    AddUserGroupMemberShrinkRequest() = default ;
    AddUserGroupMemberShrinkRequest(const AddUserGroupMemberShrinkRequest &) = default ;
    AddUserGroupMemberShrinkRequest(AddUserGroupMemberShrinkRequest &&) = default ;
    AddUserGroupMemberShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserGroupMemberShrinkRequest() = default ;
    AddUserGroupMemberShrinkRequest& operator=(const AddUserGroupMemberShrinkRequest &) = default ;
    AddUserGroupMemberShrinkRequest& operator=(AddUserGroupMemberShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addCommandShrink_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // addCommandShrink Field Functions 
    bool hasAddCommandShrink() const { return this->addCommandShrink_ != nullptr;};
    void deleteAddCommandShrink() { this->addCommandShrink_ = nullptr;};
    inline string addCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(addCommandShrink_, "") };
    inline AddUserGroupMemberShrinkRequest& setAddCommandShrink(string addCommandShrink) { DARABONBA_PTR_SET_VALUE(addCommandShrink_, addCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline AddUserGroupMemberShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    std::shared_ptr<string> addCommandShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
