// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICESFORUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICESFORUSERGROUPREQUEST_HPP_
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
  class ListPolicesForUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicesForUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicesForUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
    };
    ListPolicesForUserGroupRequest() = default ;
    ListPolicesForUserGroupRequest(const ListPolicesForUserGroupRequest &) = default ;
    ListPolicesForUserGroupRequest(ListPolicesForUserGroupRequest &&) = default ;
    ListPolicesForUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicesForUserGroupRequest() = default ;
    ListPolicesForUserGroupRequest& operator=(const ListPolicesForUserGroupRequest &) = default ;
    ListPolicesForUserGroupRequest& operator=(ListPolicesForUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userGroupIds_ != nullptr; };
    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline ListPolicesForUserGroupRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline ListPolicesForUserGroupRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> userGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
