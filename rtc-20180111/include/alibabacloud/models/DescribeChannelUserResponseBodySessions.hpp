// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELUSERRESPONSEBODYSESSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELUSERRESPONSEBODYSESSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelUserResponseBodySessions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelUserResponseBodySessions& obj) { 
      DARABONBA_PTR_TO_JSON(Joined, joined_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelUserResponseBodySessions& obj) { 
      DARABONBA_PTR_FROM_JSON(Joined, joined_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeChannelUserResponseBodySessions() = default ;
    DescribeChannelUserResponseBodySessions(const DescribeChannelUserResponseBodySessions &) = default ;
    DescribeChannelUserResponseBodySessions(DescribeChannelUserResponseBodySessions &&) = default ;
    DescribeChannelUserResponseBodySessions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelUserResponseBodySessions() = default ;
    DescribeChannelUserResponseBodySessions& operator=(const DescribeChannelUserResponseBodySessions &) = default ;
    DescribeChannelUserResponseBodySessions& operator=(DescribeChannelUserResponseBodySessions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->joined_ == nullptr
        && return this->sessionId_ == nullptr && return this->userId_ == nullptr; };
    // joined Field Functions 
    bool hasJoined() const { return this->joined_ != nullptr;};
    void deleteJoined() { this->joined_ = nullptr;};
    inline int64_t joined() const { DARABONBA_PTR_GET_DEFAULT(joined_, 0L) };
    inline DescribeChannelUserResponseBodySessions& setJoined(int64_t joined) { DARABONBA_PTR_SET_VALUE(joined_, joined) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribeChannelUserResponseBodySessions& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeChannelUserResponseBodySessions& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> joined_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
