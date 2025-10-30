// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICEROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICEROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckServiceRoleRequestRoles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CheckServiceRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(roles, roles_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(roles, roles_);
    };
    CheckServiceRoleRequest() = default ;
    CheckServiceRoleRequest(const CheckServiceRoleRequest &) = default ;
    CheckServiceRoleRequest(CheckServiceRoleRequest &&) = default ;
    CheckServiceRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceRoleRequest() = default ;
    CheckServiceRoleRequest& operator=(const CheckServiceRoleRequest &) = default ;
    CheckServiceRoleRequest& operator=(CheckServiceRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roles_ == nullptr; };
    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<CheckServiceRoleRequestRoles> & roles() const { DARABONBA_PTR_GET_CONST(roles_, vector<CheckServiceRoleRequestRoles>) };
    inline vector<CheckServiceRoleRequestRoles> roles() { DARABONBA_PTR_GET(roles_, vector<CheckServiceRoleRequestRoles>) };
    inline CheckServiceRoleRequest& setRoles(const vector<CheckServiceRoleRequestRoles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline CheckServiceRoleRequest& setRoles(vector<CheckServiceRoleRequestRoles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


  protected:
    // The list of service roles you want to check.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CheckServiceRoleRequestRoles>> roles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
