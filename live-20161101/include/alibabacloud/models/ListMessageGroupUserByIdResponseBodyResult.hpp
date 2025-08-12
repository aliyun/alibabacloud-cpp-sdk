// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGEGROUPUSERBYIDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGEGROUPUSERBYIDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMessageGroupUserByIdResponseBodyResultUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMessageGroupUserByIdResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageGroupUserByIdResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageGroupUserByIdResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    ListMessageGroupUserByIdResponseBodyResult() = default ;
    ListMessageGroupUserByIdResponseBodyResult(const ListMessageGroupUserByIdResponseBodyResult &) = default ;
    ListMessageGroupUserByIdResponseBodyResult(ListMessageGroupUserByIdResponseBodyResult &&) = default ;
    ListMessageGroupUserByIdResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageGroupUserByIdResponseBodyResult() = default ;
    ListMessageGroupUserByIdResponseBodyResult& operator=(const ListMessageGroupUserByIdResponseBodyResult &) = default ;
    ListMessageGroupUserByIdResponseBodyResult& operator=(ListMessageGroupUserByIdResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hasMore_ != nullptr
        && this->total_ != nullptr && this->userList_ != nullptr; };
    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListMessageGroupUserByIdResponseBodyResult& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListMessageGroupUserByIdResponseBodyResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<Models::ListMessageGroupUserByIdResponseBodyResultUserList> & userList() const { DARABONBA_PTR_GET_CONST(userList_, vector<Models::ListMessageGroupUserByIdResponseBodyResultUserList>) };
    inline vector<Models::ListMessageGroupUserByIdResponseBodyResultUserList> userList() { DARABONBA_PTR_GET(userList_, vector<Models::ListMessageGroupUserByIdResponseBodyResultUserList>) };
    inline ListMessageGroupUserByIdResponseBodyResult& setUserList(const vector<Models::ListMessageGroupUserByIdResponseBodyResultUserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline ListMessageGroupUserByIdResponseBodyResult& setUserList(vector<Models::ListMessageGroupUserByIdResponseBodyResultUserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    // Indicates whether the current page is followed by another page. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> hasMore_ = nullptr;
    // The total number of users returned.
    std::shared_ptr<int32_t> total_ = nullptr;
    // The list of users.
    std::shared_ptr<vector<Models::ListMessageGroupUserByIdResponseBodyResultUserList>> userList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
