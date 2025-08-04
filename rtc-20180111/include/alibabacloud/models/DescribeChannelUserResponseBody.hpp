// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeChannelUserResponseBodySessions.hpp>
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
    virtual bool empty() const override { this->channelExist_ != nullptr
        && this->inChannel_ != nullptr && this->requestId_ != nullptr && this->sessions_ != nullptr; };
    // channelExist Field Functions 
    bool hasChannelExist() const { return this->channelExist_ != nullptr;};
    void deleteChannelExist() { this->channelExist_ = nullptr;};
    inline bool channelExist() const { DARABONBA_PTR_GET_DEFAULT(channelExist_, false) };
    inline DescribeChannelUserResponseBody& setChannelExist(bool channelExist) { DARABONBA_PTR_SET_VALUE(channelExist_, channelExist) };


    // inChannel Field Functions 
    bool hasInChannel() const { return this->inChannel_ != nullptr;};
    void deleteInChannel() { this->inChannel_ = nullptr;};
    inline bool inChannel() const { DARABONBA_PTR_GET_DEFAULT(inChannel_, false) };
    inline DescribeChannelUserResponseBody& setInChannel(bool inChannel) { DARABONBA_PTR_SET_VALUE(inChannel_, inChannel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<DescribeChannelUserResponseBodySessions> & sessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<DescribeChannelUserResponseBodySessions>) };
    inline vector<DescribeChannelUserResponseBodySessions> sessions() { DARABONBA_PTR_GET(sessions_, vector<DescribeChannelUserResponseBodySessions>) };
    inline DescribeChannelUserResponseBody& setSessions(const vector<DescribeChannelUserResponseBodySessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline DescribeChannelUserResponseBody& setSessions(vector<DescribeChannelUserResponseBodySessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


  protected:
    std::shared_ptr<bool> channelExist_ = nullptr;
    std::shared_ptr<bool> inChannel_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeChannelUserResponseBodySessions>> sessions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
