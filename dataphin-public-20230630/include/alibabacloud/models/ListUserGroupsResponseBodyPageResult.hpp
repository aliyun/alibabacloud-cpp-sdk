// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserGroupsResponseBodyPageResultUserGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListUserGroupsResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserGroupList, userGroupList_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserGroupList, userGroupList_);
    };
    ListUserGroupsResponseBodyPageResult() = default ;
    ListUserGroupsResponseBodyPageResult(const ListUserGroupsResponseBodyPageResult &) = default ;
    ListUserGroupsResponseBodyPageResult(ListUserGroupsResponseBodyPageResult &&) = default ;
    ListUserGroupsResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsResponseBodyPageResult() = default ;
    ListUserGroupsResponseBodyPageResult& operator=(const ListUserGroupsResponseBodyPageResult &) = default ;
    ListUserGroupsResponseBodyPageResult& operator=(ListUserGroupsResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->totalCount_ == nullptr
        && return this->userGroupList_ == nullptr; };
    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUserGroupsResponseBodyPageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userGroupList Field Functions 
    bool hasUserGroupList() const { return this->userGroupList_ != nullptr;};
    void deleteUserGroupList() { this->userGroupList_ = nullptr;};
    inline const vector<Models::ListUserGroupsResponseBodyPageResultUserGroupList> & userGroupList() const { DARABONBA_PTR_GET_CONST(userGroupList_, vector<Models::ListUserGroupsResponseBodyPageResultUserGroupList>) };
    inline vector<Models::ListUserGroupsResponseBodyPageResultUserGroupList> userGroupList() { DARABONBA_PTR_GET(userGroupList_, vector<Models::ListUserGroupsResponseBodyPageResultUserGroupList>) };
    inline ListUserGroupsResponseBodyPageResult& setUserGroupList(const vector<Models::ListUserGroupsResponseBodyPageResultUserGroupList> & userGroupList) { DARABONBA_PTR_SET_VALUE(userGroupList_, userGroupList) };
    inline ListUserGroupsResponseBodyPageResult& setUserGroupList(vector<Models::ListUserGroupsResponseBodyPageResultUserGroupList> && userGroupList) { DARABONBA_PTR_SET_RVALUE(userGroupList_, userGroupList) };


  protected:
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<Models::ListUserGroupsResponseBodyPageResultUserGroupList>> userGroupList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
