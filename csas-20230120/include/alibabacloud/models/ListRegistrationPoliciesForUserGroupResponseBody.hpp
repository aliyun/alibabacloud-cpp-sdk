// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGISTRATIONPOLICIESFORUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREGISTRATIONPOLICIESFORUSERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRegistrationPoliciesForUserGroupResponseBodyUserGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListRegistrationPoliciesForUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegistrationPoliciesForUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegistrationPoliciesForUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
    };
    ListRegistrationPoliciesForUserGroupResponseBody() = default ;
    ListRegistrationPoliciesForUserGroupResponseBody(const ListRegistrationPoliciesForUserGroupResponseBody &) = default ;
    ListRegistrationPoliciesForUserGroupResponseBody(ListRegistrationPoliciesForUserGroupResponseBody &&) = default ;
    ListRegistrationPoliciesForUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegistrationPoliciesForUserGroupResponseBody() = default ;
    ListRegistrationPoliciesForUserGroupResponseBody& operator=(const ListRegistrationPoliciesForUserGroupResponseBody &) = default ;
    ListRegistrationPoliciesForUserGroupResponseBody& operator=(ListRegistrationPoliciesForUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->userGroups_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRegistrationPoliciesForUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userGroups Field Functions 
    bool hasUserGroups() const { return this->userGroups_ != nullptr;};
    void deleteUserGroups() { this->userGroups_ = nullptr;};
    inline const vector<ListRegistrationPoliciesForUserGroupResponseBodyUserGroups> & userGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<ListRegistrationPoliciesForUserGroupResponseBodyUserGroups>) };
    inline vector<ListRegistrationPoliciesForUserGroupResponseBodyUserGroups> userGroups() { DARABONBA_PTR_GET(userGroups_, vector<ListRegistrationPoliciesForUserGroupResponseBodyUserGroups>) };
    inline ListRegistrationPoliciesForUserGroupResponseBody& setUserGroups(const vector<ListRegistrationPoliciesForUserGroupResponseBodyUserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
    inline ListRegistrationPoliciesForUserGroupResponseBody& setUserGroups(vector<ListRegistrationPoliciesForUserGroupResponseBodyUserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListRegistrationPoliciesForUserGroupResponseBodyUserGroups>> userGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
