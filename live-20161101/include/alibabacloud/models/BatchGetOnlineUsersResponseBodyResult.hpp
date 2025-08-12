// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETONLINEUSERSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETONLINEUSERSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchGetOnlineUsersResponseBodyResultOnlineUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class BatchGetOnlineUsersResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetOnlineUsersResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(OnlineUsers, onlineUsers_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetOnlineUsersResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OnlineUsers, onlineUsers_);
    };
    BatchGetOnlineUsersResponseBodyResult() = default ;
    BatchGetOnlineUsersResponseBodyResult(const BatchGetOnlineUsersResponseBodyResult &) = default ;
    BatchGetOnlineUsersResponseBodyResult(BatchGetOnlineUsersResponseBodyResult &&) = default ;
    BatchGetOnlineUsersResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetOnlineUsersResponseBodyResult() = default ;
    BatchGetOnlineUsersResponseBodyResult& operator=(const BatchGetOnlineUsersResponseBodyResult &) = default ;
    BatchGetOnlineUsersResponseBodyResult& operator=(BatchGetOnlineUsersResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->onlineUsers_ != nullptr; };
    // onlineUsers Field Functions 
    bool hasOnlineUsers() const { return this->onlineUsers_ != nullptr;};
    void deleteOnlineUsers() { this->onlineUsers_ = nullptr;};
    inline const vector<Models::BatchGetOnlineUsersResponseBodyResultOnlineUsers> & onlineUsers() const { DARABONBA_PTR_GET_CONST(onlineUsers_, vector<Models::BatchGetOnlineUsersResponseBodyResultOnlineUsers>) };
    inline vector<Models::BatchGetOnlineUsersResponseBodyResultOnlineUsers> onlineUsers() { DARABONBA_PTR_GET(onlineUsers_, vector<Models::BatchGetOnlineUsersResponseBodyResultOnlineUsers>) };
    inline BatchGetOnlineUsersResponseBodyResult& setOnlineUsers(const vector<Models::BatchGetOnlineUsersResponseBodyResultOnlineUsers> & onlineUsers) { DARABONBA_PTR_SET_VALUE(onlineUsers_, onlineUsers) };
    inline BatchGetOnlineUsersResponseBodyResult& setOnlineUsers(vector<Models::BatchGetOnlineUsersResponseBodyResultOnlineUsers> && onlineUsers) { DARABONBA_PTR_SET_RVALUE(onlineUsers_, onlineUsers) };


  protected:
    // The information about users.
    std::shared_ptr<vector<Models::BatchGetOnlineUsersResponseBodyResultOnlineUsers>> onlineUsers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
