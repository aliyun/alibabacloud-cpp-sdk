// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserGroupsResponseBodyUserGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
    };
    ListUserGroupsResponseBody() = default ;
    ListUserGroupsResponseBody(const ListUserGroupsResponseBody &) = default ;
    ListUserGroupsResponseBody(ListUserGroupsResponseBody &&) = default ;
    ListUserGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsResponseBody() = default ;
    ListUserGroupsResponseBody& operator=(const ListUserGroupsResponseBody &) = default ;
    ListUserGroupsResponseBody& operator=(ListUserGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->totalNum_ != nullptr && this->userGroups_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListUserGroupsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // userGroups Field Functions 
    bool hasUserGroups() const { return this->userGroups_ != nullptr;};
    void deleteUserGroups() { this->userGroups_ = nullptr;};
    inline const vector<ListUserGroupsResponseBodyUserGroups> & userGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<ListUserGroupsResponseBodyUserGroups>) };
    inline vector<ListUserGroupsResponseBodyUserGroups> userGroups() { DARABONBA_PTR_GET(userGroups_, vector<ListUserGroupsResponseBodyUserGroups>) };
    inline ListUserGroupsResponseBody& setUserGroups(const vector<ListUserGroupsResponseBodyUserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
    inline ListUserGroupsResponseBody& setUserGroups(vector<ListUserGroupsResponseBodyUserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalNum_ = nullptr;
    std::shared_ptr<vector<ListUserGroupsResponseBodyUserGroups>> userGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
