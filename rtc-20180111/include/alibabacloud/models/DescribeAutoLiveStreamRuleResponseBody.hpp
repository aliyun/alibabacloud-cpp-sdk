// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOLIVESTREAMRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOLIVESTREAMRULERESPONSEBODY_HPP_
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
  class DescribeAutoLiveStreamRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoLiveStreamRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoLiveStreamRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeAutoLiveStreamRuleResponseBody() = default ;
    DescribeAutoLiveStreamRuleResponseBody(const DescribeAutoLiveStreamRuleResponseBody &) = default ;
    DescribeAutoLiveStreamRuleResponseBody(DescribeAutoLiveStreamRuleResponseBody &&) = default ;
    DescribeAutoLiveStreamRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoLiveStreamRuleResponseBody() = default ;
    DescribeAutoLiveStreamRuleResponseBody& operator=(const DescribeAutoLiveStreamRuleResponseBody &) = default ;
    DescribeAutoLiveStreamRuleResponseBody& operator=(DescribeAutoLiveStreamRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(CallBack, callBack_);
        DARABONBA_PTR_TO_JSON(ChannelIdPrefixes, channelIdPrefixes_);
        DARABONBA_PTR_TO_JSON(ChannelIds, channelIds_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(MediaEncode, mediaEncode_);
        DARABONBA_PTR_TO_JSON(PlayDomain, playDomain_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(CallBack, callBack_);
        DARABONBA_PTR_FROM_JSON(ChannelIdPrefixes, channelIdPrefixes_);
        DARABONBA_PTR_FROM_JSON(ChannelIds, channelIds_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(MediaEncode, mediaEncode_);
        DARABONBA_PTR_FROM_JSON(PlayDomain, playDomain_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->callBack_ == nullptr
        && this->channelIdPrefixes_ == nullptr && this->channelIds_ == nullptr && this->createTime_ == nullptr && this->mediaEncode_ == nullptr && this->playDomain_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->status_ == nullptr; };
      // callBack Field Functions 
      bool hasCallBack() const { return this->callBack_ != nullptr;};
      void deleteCallBack() { this->callBack_ = nullptr;};
      inline string getCallBack() const { DARABONBA_PTR_GET_DEFAULT(callBack_, "") };
      inline Rules& setCallBack(string callBack) { DARABONBA_PTR_SET_VALUE(callBack_, callBack) };


      // channelIdPrefixes Field Functions 
      bool hasChannelIdPrefixes() const { return this->channelIdPrefixes_ != nullptr;};
      void deleteChannelIdPrefixes() { this->channelIdPrefixes_ = nullptr;};
      inline const vector<string> & getChannelIdPrefixes() const { DARABONBA_PTR_GET_CONST(channelIdPrefixes_, vector<string>) };
      inline vector<string> getChannelIdPrefixes() { DARABONBA_PTR_GET(channelIdPrefixes_, vector<string>) };
      inline Rules& setChannelIdPrefixes(const vector<string> & channelIdPrefixes) { DARABONBA_PTR_SET_VALUE(channelIdPrefixes_, channelIdPrefixes) };
      inline Rules& setChannelIdPrefixes(vector<string> && channelIdPrefixes) { DARABONBA_PTR_SET_RVALUE(channelIdPrefixes_, channelIdPrefixes) };


      // channelIds Field Functions 
      bool hasChannelIds() const { return this->channelIds_ != nullptr;};
      void deleteChannelIds() { this->channelIds_ = nullptr;};
      inline const vector<string> & getChannelIds() const { DARABONBA_PTR_GET_CONST(channelIds_, vector<string>) };
      inline vector<string> getChannelIds() { DARABONBA_PTR_GET(channelIds_, vector<string>) };
      inline Rules& setChannelIds(const vector<string> & channelIds) { DARABONBA_PTR_SET_VALUE(channelIds_, channelIds) };
      inline Rules& setChannelIds(vector<string> && channelIds) { DARABONBA_PTR_SET_RVALUE(channelIds_, channelIds) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Rules& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // mediaEncode Field Functions 
      bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
      void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
      inline int32_t getMediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
      inline Rules& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


      // playDomain Field Functions 
      bool hasPlayDomain() const { return this->playDomain_ != nullptr;};
      void deletePlayDomain() { this->playDomain_ = nullptr;};
      inline string getPlayDomain() const { DARABONBA_PTR_GET_DEFAULT(playDomain_, "") };
      inline Rules& setPlayDomain(string playDomain) { DARABONBA_PTR_SET_VALUE(playDomain_, playDomain) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline Rules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Rules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Rules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> callBack_ {};
      shared_ptr<vector<string>> channelIdPrefixes_ {};
      shared_ptr<vector<string>> channelIds_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<int32_t> mediaEncode_ {};
      shared_ptr<string> playDomain_ {};
      shared_ptr<int64_t> ruleId_ {};
      shared_ptr<string> ruleName_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->rules_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoLiveStreamRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<DescribeAutoLiveStreamRuleResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<DescribeAutoLiveStreamRuleResponseBody::Rules>) };
    inline vector<DescribeAutoLiveStreamRuleResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<DescribeAutoLiveStreamRuleResponseBody::Rules>) };
    inline DescribeAutoLiveStreamRuleResponseBody& setRules(const vector<DescribeAutoLiveStreamRuleResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeAutoLiveStreamRuleResponseBody& setRules(vector<DescribeAutoLiveStreamRuleResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeAutoLiveStreamRuleResponseBody::Rules>> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
