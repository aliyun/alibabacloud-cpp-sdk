// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRUNNINGINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYRUNNINGINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryRunningInstanceResponseBodyDataChannel.hpp>
#include <alibabacloud/models/QueryRunningInstanceResponseBodyDataUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class QueryRunningInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRunningInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRunningInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    QueryRunningInstanceResponseBodyData() = default ;
    QueryRunningInstanceResponseBodyData(const QueryRunningInstanceResponseBodyData &) = default ;
    QueryRunningInstanceResponseBodyData(QueryRunningInstanceResponseBodyData &&) = default ;
    QueryRunningInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRunningInstanceResponseBodyData() = default ;
    QueryRunningInstanceResponseBodyData& operator=(const QueryRunningInstanceResponseBodyData &) = default ;
    QueryRunningInstanceResponseBodyData& operator=(QueryRunningInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr
        && this->sessionId_ != nullptr && this->token_ != nullptr && this->user_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline const Models::QueryRunningInstanceResponseBodyDataChannel & channel() const { DARABONBA_PTR_GET_CONST(channel_, Models::QueryRunningInstanceResponseBodyDataChannel) };
    inline Models::QueryRunningInstanceResponseBodyDataChannel channel() { DARABONBA_PTR_GET(channel_, Models::QueryRunningInstanceResponseBodyDataChannel) };
    inline QueryRunningInstanceResponseBodyData& setChannel(const Models::QueryRunningInstanceResponseBodyDataChannel & channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };
    inline QueryRunningInstanceResponseBodyData& setChannel(Models::QueryRunningInstanceResponseBodyDataChannel && channel) { DARABONBA_PTR_SET_RVALUE(channel_, channel) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline QueryRunningInstanceResponseBodyData& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline QueryRunningInstanceResponseBodyData& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const Models::QueryRunningInstanceResponseBodyDataUser & user() const { DARABONBA_PTR_GET_CONST(user_, Models::QueryRunningInstanceResponseBodyDataUser) };
    inline Models::QueryRunningInstanceResponseBodyDataUser user() { DARABONBA_PTR_GET(user_, Models::QueryRunningInstanceResponseBodyDataUser) };
    inline QueryRunningInstanceResponseBodyData& setUser(const Models::QueryRunningInstanceResponseBodyDataUser & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline QueryRunningInstanceResponseBodyData& setUser(Models::QueryRunningInstanceResponseBodyDataUser && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    std::shared_ptr<Models::QueryRunningInstanceResponseBodyDataChannel> channel_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<Models::QueryRunningInstanceResponseBodyDataUser> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
