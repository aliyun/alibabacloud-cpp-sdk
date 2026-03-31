// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETYIKEUSERROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETYIKEUSERROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SetYikeUserRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetYikeUserRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(YikeUserId, yikeUserId_);
    };
    friend void from_json(const Darabonba::Json& j, SetYikeUserRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(YikeUserId, yikeUserId_);
    };
    SetYikeUserRoleRequest() = default ;
    SetYikeUserRoleRequest(const SetYikeUserRoleRequest &) = default ;
    SetYikeUserRoleRequest(SetYikeUserRoleRequest &&) = default ;
    SetYikeUserRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetYikeUserRoleRequest() = default ;
    SetYikeUserRoleRequest& operator=(const SetYikeUserRoleRequest &) = default ;
    SetYikeUserRoleRequest& operator=(SetYikeUserRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleName_ == nullptr
        && this->yikeUserId_ == nullptr; };
    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline SetYikeUserRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // yikeUserId Field Functions 
    bool hasYikeUserId() const { return this->yikeUserId_ != nullptr;};
    void deleteYikeUserId() { this->yikeUserId_ = nullptr;};
    inline string getYikeUserId() const { DARABONBA_PTR_GET_DEFAULT(yikeUserId_, "") };
    inline SetYikeUserRoleRequest& setYikeUserId(string yikeUserId) { DARABONBA_PTR_SET_VALUE(yikeUserId_, yikeUserId) };


  protected:
    shared_ptr<string> roleName_ {};
    shared_ptr<string> yikeUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
