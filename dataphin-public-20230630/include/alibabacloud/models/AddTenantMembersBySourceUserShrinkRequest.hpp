// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTENANTMEMBERSBYSOURCEUSERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTENANTMEMBERSBYSOURCEUSERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddTenantMembersBySourceUserShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTenantMembersBySourceUserShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddCommand, addCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, AddTenantMembersBySourceUserShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddCommand, addCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    AddTenantMembersBySourceUserShrinkRequest() = default ;
    AddTenantMembersBySourceUserShrinkRequest(const AddTenantMembersBySourceUserShrinkRequest &) = default ;
    AddTenantMembersBySourceUserShrinkRequest(AddTenantMembersBySourceUserShrinkRequest &&) = default ;
    AddTenantMembersBySourceUserShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTenantMembersBySourceUserShrinkRequest() = default ;
    AddTenantMembersBySourceUserShrinkRequest& operator=(const AddTenantMembersBySourceUserShrinkRequest &) = default ;
    AddTenantMembersBySourceUserShrinkRequest& operator=(AddTenantMembersBySourceUserShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr; };
    // addCommandShrink Field Functions 
    bool hasAddCommandShrink() const { return this->addCommandShrink_ != nullptr;};
    void deleteAddCommandShrink() { this->addCommandShrink_ = nullptr;};
    inline string getAddCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(addCommandShrink_, "") };
    inline AddTenantMembersBySourceUserShrinkRequest& setAddCommandShrink(string addCommandShrink) { DARABONBA_PTR_SET_VALUE(addCommandShrink_, addCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline AddTenantMembersBySourceUserShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<string> addCommandShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
