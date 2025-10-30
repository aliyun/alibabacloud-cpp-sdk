// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGISTRATIONPOLICIESFORUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREGISTRATIONPOLICIESFORUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListRegistrationPoliciesForUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegistrationPoliciesForUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegistrationPoliciesForUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
    };
    ListRegistrationPoliciesForUserGroupRequest() = default ;
    ListRegistrationPoliciesForUserGroupRequest(const ListRegistrationPoliciesForUserGroupRequest &) = default ;
    ListRegistrationPoliciesForUserGroupRequest(ListRegistrationPoliciesForUserGroupRequest &&) = default ;
    ListRegistrationPoliciesForUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegistrationPoliciesForUserGroupRequest() = default ;
    ListRegistrationPoliciesForUserGroupRequest& operator=(const ListRegistrationPoliciesForUserGroupRequest &) = default ;
    ListRegistrationPoliciesForUserGroupRequest& operator=(ListRegistrationPoliciesForUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userGroupIds_ == nullptr; };
    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline ListRegistrationPoliciesForUserGroupRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline ListRegistrationPoliciesForUserGroupRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> userGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
