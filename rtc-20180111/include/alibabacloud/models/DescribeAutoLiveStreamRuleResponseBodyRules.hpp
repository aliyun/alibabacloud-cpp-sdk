// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOLIVESTREAMRULERESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOLIVESTREAMRULERESPONSEBODYRULES_HPP_
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
  class DescribeAutoLiveStreamRuleResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoLiveStreamRuleResponseBodyRules& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeAutoLiveStreamRuleResponseBodyRules& obj) { 
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
    DescribeAutoLiveStreamRuleResponseBodyRules() = default ;
    DescribeAutoLiveStreamRuleResponseBodyRules(const DescribeAutoLiveStreamRuleResponseBodyRules &) = default ;
    DescribeAutoLiveStreamRuleResponseBodyRules(DescribeAutoLiveStreamRuleResponseBodyRules &&) = default ;
    DescribeAutoLiveStreamRuleResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoLiveStreamRuleResponseBodyRules() = default ;
    DescribeAutoLiveStreamRuleResponseBodyRules& operator=(const DescribeAutoLiveStreamRuleResponseBodyRules &) = default ;
    DescribeAutoLiveStreamRuleResponseBodyRules& operator=(DescribeAutoLiveStreamRuleResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callBack_ != nullptr
        && this->channelIdPrefixes_ != nullptr && this->channelIds_ != nullptr && this->createTime_ != nullptr && this->mediaEncode_ != nullptr && this->playDomain_ != nullptr
        && this->ruleId_ != nullptr && this->ruleName_ != nullptr && this->status_ != nullptr; };
    // callBack Field Functions 
    bool hasCallBack() const { return this->callBack_ != nullptr;};
    void deleteCallBack() { this->callBack_ = nullptr;};
    inline string callBack() const { DARABONBA_PTR_GET_DEFAULT(callBack_, "") };
    inline DescribeAutoLiveStreamRuleResponseBodyRules& setCallBack(string callBack) { DARABONBA_PTR_SET_VALUE(callBack_, callBack) };


    // channelIdPrefixes Field Functions 
    bool hasChannelIdPrefixes() const { return this->channelIdPrefixes_ != nullptr;};
    void deleteChannelIdPrefixes() { this->channelIdPrefixes_ = nullptr;};
    inline const vector<string> & channelIdPrefixes() const { DARABONBA_PTR_GET_CONST(channelIdPrefixes_, vector<string>) };
    inline vector<string> channelIdPrefixes() { DARABONBA_PTR_GET(channelIdPrefixes_, vector<string>) };
    inline DescribeAutoLiveStreamRuleResponseBodyRules& setChannelIdPrefixes(const vector<string> & channelIdPrefixes) { DARABONBA_PTR_SET_VALUE(channelIdPrefixes_, channelIdPrefixes) };
    inline DescribeAutoLiveStreamRuleResponseBodyRules& setChannelIdPrefixes(vector<string> && channelIdPrefixes) { DARABONBA_PTR_SET_RVALUE(channelIdPrefixes_, channelIdPrefixes) };


    // channelIds Field Functions 
    bool hasChannelIds() const { return this->channelIds_ != nullptr;};
    void deleteChannelIds() { this->channelIds_ = nullptr;};
    inline const vector<string> & channelIds() const { DARABONBA_PTR_GET_CONST(channelIds_, vector<string>) };
    inline vector<string> channelIds() { DARABONBA_PTR_GET(channelIds_, vector<string>) };
    inline DescribeAutoLiveStreamRuleResponseBodyRules& setChannelIds(const vector<string> & channelIds) { DARABONBA_PTR_SET_VALUE(channelIds_, channelIds) };
    inline DescribeAutoLiveStreamRuleResponseBodyRules& setChannelIds(vector<string> && channelIds) { DARABONBA_PTR_SET_RVALUE(channelIds_, channelIds) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAutoLiveStreamRuleResponseBodyRules& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // mediaEncode Field Functions 
    bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
    void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
    inline int32_t mediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
    inline DescribeAutoLiveStreamRuleResponseBodyRules& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


    // playDomain Field Functions 
    bool hasPlayDomain() const { return this->playDomain_ != nullptr;};
    void deletePlayDomain() { this->playDomain_ = nullptr;};
    inline string playDomain() const { DARABONBA_PTR_GET_DEFAULT(playDomain_, "") };
    inline DescribeAutoLiveStreamRuleResponseBodyRules& setPlayDomain(string playDomain) { DARABONBA_PTR_SET_VALUE(playDomain_, playDomain) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeAutoLiveStreamRuleResponseBodyRules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeAutoLiveStreamRuleResponseBodyRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAutoLiveStreamRuleResponseBodyRules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> callBack_ = nullptr;
    std::shared_ptr<vector<string>> channelIdPrefixes_ = nullptr;
    std::shared_ptr<vector<string>> channelIds_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int32_t> mediaEncode_ = nullptr;
    std::shared_ptr<string> playDomain_ = nullptr;
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
