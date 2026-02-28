// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelExist, channelExist_);
      DARABONBA_PTR_TO_JSON(InChannel, inChannel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelExist, channelExist_);
      DARABONBA_PTR_FROM_JSON(InChannel, inChannel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
    };
    DescribeChannelUserResponseBody() = default ;
    DescribeChannelUserResponseBody(const DescribeChannelUserResponseBody &) = default ;
    DescribeChannelUserResponseBody(DescribeChannelUserResponseBody &&) = default ;
    DescribeChannelUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelUserResponseBody() = default ;
    DescribeChannelUserResponseBody& operator=(const DescribeChannelUserResponseBody &) = default ;
    DescribeChannelUserResponseBody& operator=(DescribeChannelUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Sessions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sessions& obj) { 
        DARABONBA_PTR_TO_JSON(Joined, joined_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Sessions& obj) { 
        DARABONBA_PTR_FROM_JSON(Joined, joined_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Sessions() = default ;
      Sessions(const Sessions &) = default ;
      Sessions(Sessions &&) = default ;
      Sessions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sessions() = default ;
      Sessions& operator=(const Sessions &) = default ;
      Sessions& operator=(Sessions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->joined_ == nullptr
        && this->sessionId_ == nullptr && this->userId_ == nullptr; };
      // joined Field Functions 
      bool hasJoined() const { return this->joined_ != nullptr;};
      void deleteJoined() { this->joined_ = nullptr;};
      inline int64_t getJoined() const { DARABONBA_PTR_GET_DEFAULT(joined_, 0L) };
      inline Sessions& setJoined(int64_t joined) { DARABONBA_PTR_SET_VALUE(joined_, joined) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Sessions& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Sessions& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<int64_t> joined_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->channelExist_ == nullptr
        && this->inChannel_ == nullptr && this->requestId_ == nullptr && this->sessions_ == nullptr; };
    // channelExist Field Functions 
    bool hasChannelExist() const { return this->channelExist_ != nullptr;};
    void deleteChannelExist() { this->channelExist_ = nullptr;};
    inline bool getChannelExist() const { DARABONBA_PTR_GET_DEFAULT(channelExist_, false) };
    inline DescribeChannelUserResponseBody& setChannelExist(bool channelExist) { DARABONBA_PTR_SET_VALUE(channelExist_, channelExist) };


    // inChannel Field Functions 
    bool hasInChannel() const { return this->inChannel_ != nullptr;};
    void deleteInChannel() { this->inChannel_ = nullptr;};
    inline bool getInChannel() const { DARABONBA_PTR_GET_DEFAULT(inChannel_, false) };
    inline DescribeChannelUserResponseBody& setInChannel(bool inChannel) { DARABONBA_PTR_SET_VALUE(inChannel_, inChannel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<DescribeChannelUserResponseBody::Sessions> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<DescribeChannelUserResponseBody::Sessions>) };
    inline vector<DescribeChannelUserResponseBody::Sessions> getSessions() { DARABONBA_PTR_GET(sessions_, vector<DescribeChannelUserResponseBody::Sessions>) };
    inline DescribeChannelUserResponseBody& setSessions(const vector<DescribeChannelUserResponseBody::Sessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline DescribeChannelUserResponseBody& setSessions(vector<DescribeChannelUserResponseBody::Sessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


  protected:
    shared_ptr<bool> channelExist_ {};
    shared_ptr<bool> inChannel_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeChannelUserResponseBody::Sessions>> sessions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
