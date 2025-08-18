// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPMEMBERSRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPMEMBERSRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserGroupMembersResponseBodyPageResultMemberList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListUserGroupMembersResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupMembersResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(MemberList, memberList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupMembersResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListUserGroupMembersResponseBodyPageResult() = default ;
    ListUserGroupMembersResponseBodyPageResult(const ListUserGroupMembersResponseBodyPageResult &) = default ;
    ListUserGroupMembersResponseBodyPageResult(ListUserGroupMembersResponseBodyPageResult &&) = default ;
    ListUserGroupMembersResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupMembersResponseBodyPageResult() = default ;
    ListUserGroupMembersResponseBodyPageResult& operator=(const ListUserGroupMembersResponseBodyPageResult &) = default ;
    ListUserGroupMembersResponseBodyPageResult& operator=(ListUserGroupMembersResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->memberList_ != nullptr
        && this->totalCount_ != nullptr; };
    // memberList Field Functions 
    bool hasMemberList() const { return this->memberList_ != nullptr;};
    void deleteMemberList() { this->memberList_ = nullptr;};
    inline const vector<Models::ListUserGroupMembersResponseBodyPageResultMemberList> & memberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<Models::ListUserGroupMembersResponseBodyPageResultMemberList>) };
    inline vector<Models::ListUserGroupMembersResponseBodyPageResultMemberList> memberList() { DARABONBA_PTR_GET(memberList_, vector<Models::ListUserGroupMembersResponseBodyPageResultMemberList>) };
    inline ListUserGroupMembersResponseBodyPageResult& setMemberList(const vector<Models::ListUserGroupMembersResponseBodyPageResultMemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
    inline ListUserGroupMembersResponseBodyPageResult& setMemberList(vector<Models::ListUserGroupMembersResponseBodyPageResultMemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUserGroupMembersResponseBodyPageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListUserGroupMembersResponseBodyPageResultMemberList>> memberList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
