// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTRESOURCEPERMISSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTRESOURCEPERMISSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GrantResourcePermissionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantResourcePermissionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GrantCommand, grantCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GrantResourcePermissionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantCommand, grantCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GrantResourcePermissionShrinkRequest() = default ;
    GrantResourcePermissionShrinkRequest(const GrantResourcePermissionShrinkRequest &) = default ;
    GrantResourcePermissionShrinkRequest(GrantResourcePermissionShrinkRequest &&) = default ;
    GrantResourcePermissionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantResourcePermissionShrinkRequest() = default ;
    GrantResourcePermissionShrinkRequest& operator=(const GrantResourcePermissionShrinkRequest &) = default ;
    GrantResourcePermissionShrinkRequest& operator=(GrantResourcePermissionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->grantCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr; };
    // grantCommandShrink Field Functions 
    bool hasGrantCommandShrink() const { return this->grantCommandShrink_ != nullptr;};
    void deleteGrantCommandShrink() { this->grantCommandShrink_ = nullptr;};
    inline string getGrantCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(grantCommandShrink_, "") };
    inline GrantResourcePermissionShrinkRequest& setGrantCommandShrink(string grantCommandShrink) { DARABONBA_PTR_SET_VALUE(grantCommandShrink_, grantCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GrantResourcePermissionShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<string> grantCommandShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
