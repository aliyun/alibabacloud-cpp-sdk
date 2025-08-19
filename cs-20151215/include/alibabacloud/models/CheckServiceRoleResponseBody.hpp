// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICEROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICEROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckServiceRoleResponseBodyRoles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CheckServiceRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(roles, roles_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(roles, roles_);
    };
    CheckServiceRoleResponseBody() = default ;
    CheckServiceRoleResponseBody(const CheckServiceRoleResponseBody &) = default ;
    CheckServiceRoleResponseBody(CheckServiceRoleResponseBody &&) = default ;
    CheckServiceRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceRoleResponseBody() = default ;
    CheckServiceRoleResponseBody& operator=(const CheckServiceRoleResponseBody &) = default ;
    CheckServiceRoleResponseBody& operator=(CheckServiceRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roles_ != nullptr; };
    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<CheckServiceRoleResponseBodyRoles> & roles() const { DARABONBA_PTR_GET_CONST(roles_, vector<CheckServiceRoleResponseBodyRoles>) };
    inline vector<CheckServiceRoleResponseBodyRoles> roles() { DARABONBA_PTR_GET(roles_, vector<CheckServiceRoleResponseBodyRoles>) };
    inline CheckServiceRoleResponseBody& setRoles(const vector<CheckServiceRoleResponseBodyRoles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline CheckServiceRoleResponseBody& setRoles(vector<CheckServiceRoleResponseBodyRoles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


  protected:
    // The check results.
    std::shared_ptr<vector<CheckServiceRoleResponseBodyRoles>> roles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
