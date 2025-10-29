// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETONLINEUSERSRESPONSEBODYRESULTONLINEUSERS_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETONLINEUSERSRESPONSEBODYRESULTONLINEUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class BatchGetOnlineUsersResponseBodyResultOnlineUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetOnlineUsersResponseBodyResultOnlineUsers& obj) { 
      DARABONBA_PTR_TO_JSON(JoinTime, joinTime_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetOnlineUsersResponseBodyResultOnlineUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(JoinTime, joinTime_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    BatchGetOnlineUsersResponseBodyResultOnlineUsers() = default ;
    BatchGetOnlineUsersResponseBodyResultOnlineUsers(const BatchGetOnlineUsersResponseBodyResultOnlineUsers &) = default ;
    BatchGetOnlineUsersResponseBodyResultOnlineUsers(BatchGetOnlineUsersResponseBodyResultOnlineUsers &&) = default ;
    BatchGetOnlineUsersResponseBodyResultOnlineUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetOnlineUsersResponseBodyResultOnlineUsers() = default ;
    BatchGetOnlineUsersResponseBodyResultOnlineUsers& operator=(const BatchGetOnlineUsersResponseBodyResultOnlineUsers &) = default ;
    BatchGetOnlineUsersResponseBodyResultOnlineUsers& operator=(BatchGetOnlineUsersResponseBodyResultOnlineUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->joinTime_ == nullptr
        && return this->online_ == nullptr && return this->userId_ == nullptr; };
    // joinTime Field Functions 
    bool hasJoinTime() const { return this->joinTime_ != nullptr;};
    void deleteJoinTime() { this->joinTime_ = nullptr;};
    inline int64_t joinTime() const { DARABONBA_PTR_GET_DEFAULT(joinTime_, 0L) };
    inline BatchGetOnlineUsersResponseBodyResultOnlineUsers& setJoinTime(int64_t joinTime) { DARABONBA_PTR_SET_VALUE(joinTime_, joinTime) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline BatchGetOnlineUsersResponseBodyResultOnlineUsers& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline BatchGetOnlineUsersResponseBodyResultOnlineUsers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The time when the user joined the group. The value is a UTC timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> joinTime_ = nullptr;
    // Indicates whether the user is online. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> online_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
