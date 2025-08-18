// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTENANTMEMBERSRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTTENANTMEMBERSRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTenantMembersResponseBodyPageResultUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListTenantMembersResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTenantMembersResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, ListTenantMembersResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    ListTenantMembersResponseBodyPageResult() = default ;
    ListTenantMembersResponseBodyPageResult(const ListTenantMembersResponseBodyPageResult &) = default ;
    ListTenantMembersResponseBodyPageResult(ListTenantMembersResponseBodyPageResult &&) = default ;
    ListTenantMembersResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTenantMembersResponseBodyPageResult() = default ;
    ListTenantMembersResponseBodyPageResult& operator=(const ListTenantMembersResponseBodyPageResult &) = default ;
    ListTenantMembersResponseBodyPageResult& operator=(ListTenantMembersResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->totalCount_ != nullptr
        && this->userList_ != nullptr; };
    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTenantMembersResponseBodyPageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<Models::ListTenantMembersResponseBodyPageResultUserList> & userList() const { DARABONBA_PTR_GET_CONST(userList_, vector<Models::ListTenantMembersResponseBodyPageResultUserList>) };
    inline vector<Models::ListTenantMembersResponseBodyPageResultUserList> userList() { DARABONBA_PTR_GET(userList_, vector<Models::ListTenantMembersResponseBodyPageResultUserList>) };
    inline ListTenantMembersResponseBodyPageResult& setUserList(const vector<Models::ListTenantMembersResponseBodyPageResultUserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline ListTenantMembersResponseBodyPageResult& setUserList(vector<Models::ListTenantMembersResponseBodyPageResultUserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<Models::ListTenantMembersResponseBodyPageResultUserList>> userList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
