// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RTCSIPMUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RTCSIPMUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RtcSipMuteRequestOperations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class RtcSipMuteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RtcSipMuteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(Operations, operations_);
    };
    friend void from_json(const Darabonba::Json& j, RtcSipMuteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(Operations, operations_);
    };
    RtcSipMuteRequest() = default ;
    RtcSipMuteRequest(const RtcSipMuteRequest &) = default ;
    RtcSipMuteRequest(RtcSipMuteRequest &&) = default ;
    RtcSipMuteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RtcSipMuteRequest() = default ;
    RtcSipMuteRequest& operator=(const RtcSipMuteRequest &) = default ;
    RtcSipMuteRequest& operator=(RtcSipMuteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->channelId_ == nullptr && return this->operations_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RtcSipMuteRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline RtcSipMuteRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // operations Field Functions 
    bool hasOperations() const { return this->operations_ != nullptr;};
    void deleteOperations() { this->operations_ = nullptr;};
    inline const vector<RtcSipMuteRequestOperations> & operations() const { DARABONBA_PTR_GET_CONST(operations_, vector<RtcSipMuteRequestOperations>) };
    inline vector<RtcSipMuteRequestOperations> operations() { DARABONBA_PTR_GET(operations_, vector<RtcSipMuteRequestOperations>) };
    inline RtcSipMuteRequest& setOperations(const vector<RtcSipMuteRequestOperations> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
    inline RtcSipMuteRequest& setOperations(vector<RtcSipMuteRequestOperations> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<RtcSipMuteRequestOperations>> operations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
