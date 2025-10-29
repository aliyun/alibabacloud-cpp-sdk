// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMUTEGROUPUSERRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMUTEGROUPUSERRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMuteGroupUserResponseBodyResultUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMuteGroupUserResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMuteGroupUserResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, ListMuteGroupUserResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    ListMuteGroupUserResponseBodyResult() = default ;
    ListMuteGroupUserResponseBodyResult(const ListMuteGroupUserResponseBodyResult &) = default ;
    ListMuteGroupUserResponseBodyResult(ListMuteGroupUserResponseBodyResult &&) = default ;
    ListMuteGroupUserResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMuteGroupUserResponseBodyResult() = default ;
    ListMuteGroupUserResponseBodyResult& operator=(const ListMuteGroupUserResponseBodyResult &) = default ;
    ListMuteGroupUserResponseBodyResult& operator=(ListMuteGroupUserResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasMore_ == nullptr
        && return this->total_ == nullptr && return this->userList_ == nullptr; };
    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListMuteGroupUserResponseBodyResult& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListMuteGroupUserResponseBodyResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<Models::ListMuteGroupUserResponseBodyResultUserList> & userList() const { DARABONBA_PTR_GET_CONST(userList_, vector<Models::ListMuteGroupUserResponseBodyResultUserList>) };
    inline vector<Models::ListMuteGroupUserResponseBodyResultUserList> userList() { DARABONBA_PTR_GET(userList_, vector<Models::ListMuteGroupUserResponseBodyResultUserList>) };
    inline ListMuteGroupUserResponseBodyResult& setUserList(const vector<Models::ListMuteGroupUserResponseBodyResultUserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline ListMuteGroupUserResponseBodyResult& setUserList(vector<Models::ListMuteGroupUserResponseBodyResultUserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    // Indicates whether the current page is followed by another page. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> hasMore_ = nullptr;
    // The total number of muted members.
    std::shared_ptr<int32_t> total_ = nullptr;
    // The list of muted users.
    std::shared_ptr<vector<Models::ListMuteGroupUserResponseBodyResultUserList>> userList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
