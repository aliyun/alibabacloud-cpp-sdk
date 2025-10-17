// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOLIVESTREAMRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOLIVESTREAMRULEREQUEST_HPP_
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
  class CreateAutoLiveStreamRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoLiveStreamRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CallBack, callBack_);
      DARABONBA_PTR_TO_JSON(ChannelIdPrefixes, channelIdPrefixes_);
      DARABONBA_PTR_TO_JSON(ChannelIds, channelIds_);
      DARABONBA_PTR_TO_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlayDomain, playDomain_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoLiveStreamRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CallBack, callBack_);
      DARABONBA_PTR_FROM_JSON(ChannelIdPrefixes, channelIdPrefixes_);
      DARABONBA_PTR_FROM_JSON(ChannelIds, channelIds_);
      DARABONBA_PTR_FROM_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlayDomain, playDomain_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    CreateAutoLiveStreamRuleRequest() = default ;
    CreateAutoLiveStreamRuleRequest(const CreateAutoLiveStreamRuleRequest &) = default ;
    CreateAutoLiveStreamRuleRequest(CreateAutoLiveStreamRuleRequest &&) = default ;
    CreateAutoLiveStreamRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoLiveStreamRuleRequest() = default ;
    CreateAutoLiveStreamRuleRequest& operator=(const CreateAutoLiveStreamRuleRequest &) = default ;
    CreateAutoLiveStreamRuleRequest& operator=(CreateAutoLiveStreamRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->callBack_ == nullptr && return this->channelIdPrefixes_ == nullptr && return this->channelIds_ == nullptr && return this->mediaEncode_ == nullptr && return this->ownerId_ == nullptr
        && return this->playDomain_ == nullptr && return this->ruleName_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateAutoLiveStreamRuleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callBack Field Functions 
    bool hasCallBack() const { return this->callBack_ != nullptr;};
    void deleteCallBack() { this->callBack_ = nullptr;};
    inline string callBack() const { DARABONBA_PTR_GET_DEFAULT(callBack_, "") };
    inline CreateAutoLiveStreamRuleRequest& setCallBack(string callBack) { DARABONBA_PTR_SET_VALUE(callBack_, callBack) };


    // channelIdPrefixes Field Functions 
    bool hasChannelIdPrefixes() const { return this->channelIdPrefixes_ != nullptr;};
    void deleteChannelIdPrefixes() { this->channelIdPrefixes_ = nullptr;};
    inline const vector<string> & channelIdPrefixes() const { DARABONBA_PTR_GET_CONST(channelIdPrefixes_, vector<string>) };
    inline vector<string> channelIdPrefixes() { DARABONBA_PTR_GET(channelIdPrefixes_, vector<string>) };
    inline CreateAutoLiveStreamRuleRequest& setChannelIdPrefixes(const vector<string> & channelIdPrefixes) { DARABONBA_PTR_SET_VALUE(channelIdPrefixes_, channelIdPrefixes) };
    inline CreateAutoLiveStreamRuleRequest& setChannelIdPrefixes(vector<string> && channelIdPrefixes) { DARABONBA_PTR_SET_RVALUE(channelIdPrefixes_, channelIdPrefixes) };


    // channelIds Field Functions 
    bool hasChannelIds() const { return this->channelIds_ != nullptr;};
    void deleteChannelIds() { this->channelIds_ = nullptr;};
    inline const vector<string> & channelIds() const { DARABONBA_PTR_GET_CONST(channelIds_, vector<string>) };
    inline vector<string> channelIds() { DARABONBA_PTR_GET(channelIds_, vector<string>) };
    inline CreateAutoLiveStreamRuleRequest& setChannelIds(const vector<string> & channelIds) { DARABONBA_PTR_SET_VALUE(channelIds_, channelIds) };
    inline CreateAutoLiveStreamRuleRequest& setChannelIds(vector<string> && channelIds) { DARABONBA_PTR_SET_RVALUE(channelIds_, channelIds) };


    // mediaEncode Field Functions 
    bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
    void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
    inline int32_t mediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
    inline CreateAutoLiveStreamRuleRequest& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateAutoLiveStreamRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // playDomain Field Functions 
    bool hasPlayDomain() const { return this->playDomain_ != nullptr;};
    void deletePlayDomain() { this->playDomain_ = nullptr;};
    inline string playDomain() const { DARABONBA_PTR_GET_DEFAULT(playDomain_, "") };
    inline CreateAutoLiveStreamRuleRequest& setPlayDomain(string playDomain) { DARABONBA_PTR_SET_VALUE(playDomain_, playDomain) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateAutoLiveStreamRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> callBack_ = nullptr;
    std::shared_ptr<vector<string>> channelIdPrefixes_ = nullptr;
    std::shared_ptr<vector<string>> channelIds_ = nullptr;
    std::shared_ptr<int32_t> mediaEncode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> playDomain_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
