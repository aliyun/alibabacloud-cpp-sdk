// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZESKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZESKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AuthorizeSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PermissionCodes, permissionCodes_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PermissionCodes, permissionCodes_);
    };
    AuthorizeSkillRequest() = default ;
    AuthorizeSkillRequest(const AuthorizeSkillRequest &) = default ;
    AuthorizeSkillRequest(AuthorizeSkillRequest &&) = default ;
    AuthorizeSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeSkillRequest() = default ;
    AuthorizeSkillRequest& operator=(const AuthorizeSkillRequest &) = default ;
    AuthorizeSkillRequest& operator=(AuthorizeSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->permissionCodes_ == nullptr; };
    // permissionCodes Field Functions 
    bool hasPermissionCodes() const { return this->permissionCodes_ != nullptr;};
    void deletePermissionCodes() { this->permissionCodes_ = nullptr;};
    inline const vector<string> & getPermissionCodes() const { DARABONBA_PTR_GET_CONST(permissionCodes_, vector<string>) };
    inline vector<string> getPermissionCodes() { DARABONBA_PTR_GET(permissionCodes_, vector<string>) };
    inline AuthorizeSkillRequest& setPermissionCodes(const vector<string> & permissionCodes) { DARABONBA_PTR_SET_VALUE(permissionCodes_, permissionCodes) };
    inline AuthorizeSkillRequest& setPermissionCodes(vector<string> && permissionCodes) { DARABONBA_PTR_SET_RVALUE(permissionCodes_, permissionCodes) };


  protected:
    shared_ptr<vector<string>> permissionCodes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
