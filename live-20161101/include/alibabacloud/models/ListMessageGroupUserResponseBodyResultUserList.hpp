// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGEGROUPUSERRESPONSEBODYRESULTUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGEGROUPUSERRESPONSEBODYRESULTUSERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMessageGroupUserResponseBodyResultUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageGroupUserResponseBodyResultUserList& obj) { 
      DARABONBA_PTR_TO_JSON(JoinTime, joinTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageGroupUserResponseBodyResultUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(JoinTime, joinTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListMessageGroupUserResponseBodyResultUserList() = default ;
    ListMessageGroupUserResponseBodyResultUserList(const ListMessageGroupUserResponseBodyResultUserList &) = default ;
    ListMessageGroupUserResponseBodyResultUserList(ListMessageGroupUserResponseBodyResultUserList &&) = default ;
    ListMessageGroupUserResponseBodyResultUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageGroupUserResponseBodyResultUserList() = default ;
    ListMessageGroupUserResponseBodyResultUserList& operator=(const ListMessageGroupUserResponseBodyResultUserList &) = default ;
    ListMessageGroupUserResponseBodyResultUserList& operator=(ListMessageGroupUserResponseBodyResultUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->joinTime_ != nullptr
        && this->userId_ != nullptr; };
    // joinTime Field Functions 
    bool hasJoinTime() const { return this->joinTime_ != nullptr;};
    void deleteJoinTime() { this->joinTime_ = nullptr;};
    inline int64_t joinTime() const { DARABONBA_PTR_GET_DEFAULT(joinTime_, 0L) };
    inline ListMessageGroupUserResponseBodyResultUserList& setJoinTime(int64_t joinTime) { DARABONBA_PTR_SET_VALUE(joinTime_, joinTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListMessageGroupUserResponseBodyResultUserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The time when the user joined the message group. The value is a UTC timestamp.
    std::shared_ptr<int64_t> joinTime_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
