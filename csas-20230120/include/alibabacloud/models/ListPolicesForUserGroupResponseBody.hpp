// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICESFORUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICESFORUSERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPolicesForUserGroupResponseBodyUserGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPolicesForUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicesForUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicesForUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
    };
    ListPolicesForUserGroupResponseBody() = default ;
    ListPolicesForUserGroupResponseBody(const ListPolicesForUserGroupResponseBody &) = default ;
    ListPolicesForUserGroupResponseBody(ListPolicesForUserGroupResponseBody &&) = default ;
    ListPolicesForUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicesForUserGroupResponseBody() = default ;
    ListPolicesForUserGroupResponseBody& operator=(const ListPolicesForUserGroupResponseBody &) = default ;
    ListPolicesForUserGroupResponseBody& operator=(ListPolicesForUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->userGroups_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPolicesForUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userGroups Field Functions 
    bool hasUserGroups() const { return this->userGroups_ != nullptr;};
    void deleteUserGroups() { this->userGroups_ = nullptr;};
    inline const vector<ListPolicesForUserGroupResponseBodyUserGroups> & userGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<ListPolicesForUserGroupResponseBodyUserGroups>) };
    inline vector<ListPolicesForUserGroupResponseBodyUserGroups> userGroups() { DARABONBA_PTR_GET(userGroups_, vector<ListPolicesForUserGroupResponseBodyUserGroups>) };
    inline ListPolicesForUserGroupResponseBody& setUserGroups(const vector<ListPolicesForUserGroupResponseBodyUserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
    inline ListPolicesForUserGroupResponseBody& setUserGroups(vector<ListPolicesForUserGroupResponseBodyUserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListPolicesForUserGroupResponseBodyUserGroups>> userGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
