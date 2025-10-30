// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICESFORUSERGROUPRESPONSEBODYUSERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICESFORUSERGROUPRESPONSEBODYUSERGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPolicesForUserGroupResponseBodyUserGroupsPolices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPolicesForUserGroupResponseBodyUserGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicesForUserGroupResponseBodyUserGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Polices, polices_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicesForUserGroupResponseBodyUserGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Polices, polices_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    ListPolicesForUserGroupResponseBodyUserGroups() = default ;
    ListPolicesForUserGroupResponseBodyUserGroups(const ListPolicesForUserGroupResponseBodyUserGroups &) = default ;
    ListPolicesForUserGroupResponseBodyUserGroups(ListPolicesForUserGroupResponseBodyUserGroups &&) = default ;
    ListPolicesForUserGroupResponseBodyUserGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicesForUserGroupResponseBodyUserGroups() = default ;
    ListPolicesForUserGroupResponseBodyUserGroups& operator=(const ListPolicesForUserGroupResponseBodyUserGroups &) = default ;
    ListPolicesForUserGroupResponseBodyUserGroups& operator=(ListPolicesForUserGroupResponseBodyUserGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->polices_ == nullptr
        && return this->userGroupId_ == nullptr; };
    // polices Field Functions 
    bool hasPolices() const { return this->polices_ != nullptr;};
    void deletePolices() { this->polices_ = nullptr;};
    inline const vector<Models::ListPolicesForUserGroupResponseBodyUserGroupsPolices> & polices() const { DARABONBA_PTR_GET_CONST(polices_, vector<Models::ListPolicesForUserGroupResponseBodyUserGroupsPolices>) };
    inline vector<Models::ListPolicesForUserGroupResponseBodyUserGroupsPolices> polices() { DARABONBA_PTR_GET(polices_, vector<Models::ListPolicesForUserGroupResponseBodyUserGroupsPolices>) };
    inline ListPolicesForUserGroupResponseBodyUserGroups& setPolices(const vector<Models::ListPolicesForUserGroupResponseBodyUserGroupsPolices> & polices) { DARABONBA_PTR_SET_VALUE(polices_, polices) };
    inline ListPolicesForUserGroupResponseBodyUserGroups& setPolices(vector<Models::ListPolicesForUserGroupResponseBodyUserGroupsPolices> && polices) { DARABONBA_PTR_SET_RVALUE(polices_, polices) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListPolicesForUserGroupResponseBodyUserGroups& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    std::shared_ptr<vector<Models::ListPolicesForUserGroupResponseBodyUserGroupsPolices>> polices_ = nullptr;
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
