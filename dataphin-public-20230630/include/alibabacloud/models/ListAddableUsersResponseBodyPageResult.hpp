// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDABLEUSERSRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTADDABLEUSERSRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAddableUsersResponseBodyPageResultUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAddableUsersResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddableUsersResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddableUsersResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    ListAddableUsersResponseBodyPageResult() = default ;
    ListAddableUsersResponseBodyPageResult(const ListAddableUsersResponseBodyPageResult &) = default ;
    ListAddableUsersResponseBodyPageResult(ListAddableUsersResponseBodyPageResult &&) = default ;
    ListAddableUsersResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddableUsersResponseBodyPageResult() = default ;
    ListAddableUsersResponseBodyPageResult& operator=(const ListAddableUsersResponseBodyPageResult &) = default ;
    ListAddableUsersResponseBodyPageResult& operator=(ListAddableUsersResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->totalCount_ == nullptr
        && return this->userList_ == nullptr; };
    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAddableUsersResponseBodyPageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<Models::ListAddableUsersResponseBodyPageResultUserList> & userList() const { DARABONBA_PTR_GET_CONST(userList_, vector<Models::ListAddableUsersResponseBodyPageResultUserList>) };
    inline vector<Models::ListAddableUsersResponseBodyPageResultUserList> userList() { DARABONBA_PTR_GET(userList_, vector<Models::ListAddableUsersResponseBodyPageResultUserList>) };
    inline ListAddableUsersResponseBodyPageResult& setUserList(const vector<Models::ListAddableUsersResponseBodyPageResultUserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline ListAddableUsersResponseBodyPageResult& setUserList(vector<Models::ListAddableUsersResponseBodyPageResultUserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<Models::ListAddableUsersResponseBodyPageResultUserList>> userList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
