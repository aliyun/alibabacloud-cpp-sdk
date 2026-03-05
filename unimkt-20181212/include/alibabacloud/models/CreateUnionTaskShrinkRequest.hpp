// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUNIONTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUNIONTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UniMkt20181212
{
namespace Models
{
  class CreateUnionTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUnionTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnchorId, anchorId_);
      DARABONBA_PTR_TO_JSON(BrandUserId, brandUserId_);
      DARABONBA_PTR_TO_JSON(BrandUserNick, brandUserNick_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ChargePloy, chargePloy_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ContentId, contentId_);
      DARABONBA_PTR_TO_JSON(ContentUrl, contentUrl_);
      DARABONBA_PTR_TO_JSON(CustomCreativeType, customCreativeType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IndustryLabelBagId, industryLabelBagId_);
      DARABONBA_PTR_TO_JSON(MediaIdBlackList, mediaIdBlackListShrink_);
      DARABONBA_PTR_TO_JSON(MediaIdWhiteList, mediaIdWhiteListShrink_);
      DARABONBA_PTR_TO_JSON(MediaIndustry, mediaIndustry_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OptimizationSwitch, optimizationSwitch_);
      DARABONBA_PTR_TO_JSON(ProxyUserId, proxyUserId_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(QuotaDay, quotaDay_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskBizType, taskBizType_);
      DARABONBA_PTR_TO_JSON(TaskRuleType, taskRuleType_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUnionTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnchorId, anchorId_);
      DARABONBA_PTR_FROM_JSON(BrandUserId, brandUserId_);
      DARABONBA_PTR_FROM_JSON(BrandUserNick, brandUserNick_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ChargePloy, chargePloy_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ContentId, contentId_);
      DARABONBA_PTR_FROM_JSON(ContentUrl, contentUrl_);
      DARABONBA_PTR_FROM_JSON(CustomCreativeType, customCreativeType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IndustryLabelBagId, industryLabelBagId_);
      DARABONBA_PTR_FROM_JSON(MediaIdBlackList, mediaIdBlackListShrink_);
      DARABONBA_PTR_FROM_JSON(MediaIdWhiteList, mediaIdWhiteListShrink_);
      DARABONBA_PTR_FROM_JSON(MediaIndustry, mediaIndustry_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OptimizationSwitch, optimizationSwitch_);
      DARABONBA_PTR_FROM_JSON(ProxyUserId, proxyUserId_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(QuotaDay, quotaDay_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskBizType, taskBizType_);
      DARABONBA_PTR_FROM_JSON(TaskRuleType, taskRuleType_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    CreateUnionTaskShrinkRequest() = default ;
    CreateUnionTaskShrinkRequest(const CreateUnionTaskShrinkRequest &) = default ;
    CreateUnionTaskShrinkRequest(CreateUnionTaskShrinkRequest &&) = default ;
    CreateUnionTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUnionTaskShrinkRequest() = default ;
    CreateUnionTaskShrinkRequest& operator=(const CreateUnionTaskShrinkRequest &) = default ;
    CreateUnionTaskShrinkRequest& operator=(CreateUnionTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anchorId_ == nullptr
        && this->brandUserId_ == nullptr && this->brandUserNick_ == nullptr && this->channel_ == nullptr && this->channelId_ == nullptr && this->chargePloy_ == nullptr
        && this->chargeType_ == nullptr && this->clientToken_ == nullptr && this->contentId_ == nullptr && this->contentUrl_ == nullptr && this->customCreativeType_ == nullptr
        && this->endTime_ == nullptr && this->industryLabelBagId_ == nullptr && this->mediaIdBlackListShrink_ == nullptr && this->mediaIdWhiteListShrink_ == nullptr && this->mediaIndustry_ == nullptr
        && this->name_ == nullptr && this->optimizationSwitch_ == nullptr && this->proxyUserId_ == nullptr && this->quota_ == nullptr && this->quotaDay_ == nullptr
        && this->startTime_ == nullptr && this->taskBizType_ == nullptr && this->taskRuleType_ == nullptr && this->taskType_ == nullptr; };
    // anchorId Field Functions 
    bool hasAnchorId() const { return this->anchorId_ != nullptr;};
    void deleteAnchorId() { this->anchorId_ = nullptr;};
    inline string getAnchorId() const { DARABONBA_PTR_GET_DEFAULT(anchorId_, "") };
    inline CreateUnionTaskShrinkRequest& setAnchorId(string anchorId) { DARABONBA_PTR_SET_VALUE(anchorId_, anchorId) };


    // brandUserId Field Functions 
    bool hasBrandUserId() const { return this->brandUserId_ != nullptr;};
    void deleteBrandUserId() { this->brandUserId_ = nullptr;};
    inline int64_t getBrandUserId() const { DARABONBA_PTR_GET_DEFAULT(brandUserId_, 0L) };
    inline CreateUnionTaskShrinkRequest& setBrandUserId(int64_t brandUserId) { DARABONBA_PTR_SET_VALUE(brandUserId_, brandUserId) };


    // brandUserNick Field Functions 
    bool hasBrandUserNick() const { return this->brandUserNick_ != nullptr;};
    void deleteBrandUserNick() { this->brandUserNick_ = nullptr;};
    inline string getBrandUserNick() const { DARABONBA_PTR_GET_DEFAULT(brandUserNick_, "") };
    inline CreateUnionTaskShrinkRequest& setBrandUserNick(string brandUserNick) { DARABONBA_PTR_SET_VALUE(brandUserNick_, brandUserNick) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline CreateUnionTaskShrinkRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline CreateUnionTaskShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // chargePloy Field Functions 
    bool hasChargePloy() const { return this->chargePloy_ != nullptr;};
    void deleteChargePloy() { this->chargePloy_ = nullptr;};
    inline int64_t getChargePloy() const { DARABONBA_PTR_GET_DEFAULT(chargePloy_, 0L) };
    inline CreateUnionTaskShrinkRequest& setChargePloy(int64_t chargePloy) { DARABONBA_PTR_SET_VALUE(chargePloy_, chargePloy) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline int64_t getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, 0L) };
    inline CreateUnionTaskShrinkRequest& setChargeType(int64_t chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateUnionTaskShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // contentId Field Functions 
    bool hasContentId() const { return this->contentId_ != nullptr;};
    void deleteContentId() { this->contentId_ = nullptr;};
    inline int64_t getContentId() const { DARABONBA_PTR_GET_DEFAULT(contentId_, 0L) };
    inline CreateUnionTaskShrinkRequest& setContentId(int64_t contentId) { DARABONBA_PTR_SET_VALUE(contentId_, contentId) };


    // contentUrl Field Functions 
    bool hasContentUrl() const { return this->contentUrl_ != nullptr;};
    void deleteContentUrl() { this->contentUrl_ = nullptr;};
    inline string getContentUrl() const { DARABONBA_PTR_GET_DEFAULT(contentUrl_, "") };
    inline CreateUnionTaskShrinkRequest& setContentUrl(string contentUrl) { DARABONBA_PTR_SET_VALUE(contentUrl_, contentUrl) };


    // customCreativeType Field Functions 
    bool hasCustomCreativeType() const { return this->customCreativeType_ != nullptr;};
    void deleteCustomCreativeType() { this->customCreativeType_ = nullptr;};
    inline string getCustomCreativeType() const { DARABONBA_PTR_GET_DEFAULT(customCreativeType_, "") };
    inline CreateUnionTaskShrinkRequest& setCustomCreativeType(string customCreativeType) { DARABONBA_PTR_SET_VALUE(customCreativeType_, customCreativeType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateUnionTaskShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // industryLabelBagId Field Functions 
    bool hasIndustryLabelBagId() const { return this->industryLabelBagId_ != nullptr;};
    void deleteIndustryLabelBagId() { this->industryLabelBagId_ = nullptr;};
    inline int32_t getIndustryLabelBagId() const { DARABONBA_PTR_GET_DEFAULT(industryLabelBagId_, 0) };
    inline CreateUnionTaskShrinkRequest& setIndustryLabelBagId(int32_t industryLabelBagId) { DARABONBA_PTR_SET_VALUE(industryLabelBagId_, industryLabelBagId) };


    // mediaIdBlackListShrink Field Functions 
    bool hasMediaIdBlackListShrink() const { return this->mediaIdBlackListShrink_ != nullptr;};
    void deleteMediaIdBlackListShrink() { this->mediaIdBlackListShrink_ = nullptr;};
    inline string getMediaIdBlackListShrink() const { DARABONBA_PTR_GET_DEFAULT(mediaIdBlackListShrink_, "") };
    inline CreateUnionTaskShrinkRequest& setMediaIdBlackListShrink(string mediaIdBlackListShrink) { DARABONBA_PTR_SET_VALUE(mediaIdBlackListShrink_, mediaIdBlackListShrink) };


    // mediaIdWhiteListShrink Field Functions 
    bool hasMediaIdWhiteListShrink() const { return this->mediaIdWhiteListShrink_ != nullptr;};
    void deleteMediaIdWhiteListShrink() { this->mediaIdWhiteListShrink_ = nullptr;};
    inline string getMediaIdWhiteListShrink() const { DARABONBA_PTR_GET_DEFAULT(mediaIdWhiteListShrink_, "") };
    inline CreateUnionTaskShrinkRequest& setMediaIdWhiteListShrink(string mediaIdWhiteListShrink) { DARABONBA_PTR_SET_VALUE(mediaIdWhiteListShrink_, mediaIdWhiteListShrink) };


    // mediaIndustry Field Functions 
    bool hasMediaIndustry() const { return this->mediaIndustry_ != nullptr;};
    void deleteMediaIndustry() { this->mediaIndustry_ = nullptr;};
    inline string getMediaIndustry() const { DARABONBA_PTR_GET_DEFAULT(mediaIndustry_, "") };
    inline CreateUnionTaskShrinkRequest& setMediaIndustry(string mediaIndustry) { DARABONBA_PTR_SET_VALUE(mediaIndustry_, mediaIndustry) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateUnionTaskShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // optimizationSwitch Field Functions 
    bool hasOptimizationSwitch() const { return this->optimizationSwitch_ != nullptr;};
    void deleteOptimizationSwitch() { this->optimizationSwitch_ = nullptr;};
    inline int64_t getOptimizationSwitch() const { DARABONBA_PTR_GET_DEFAULT(optimizationSwitch_, 0L) };
    inline CreateUnionTaskShrinkRequest& setOptimizationSwitch(int64_t optimizationSwitch) { DARABONBA_PTR_SET_VALUE(optimizationSwitch_, optimizationSwitch) };


    // proxyUserId Field Functions 
    bool hasProxyUserId() const { return this->proxyUserId_ != nullptr;};
    void deleteProxyUserId() { this->proxyUserId_ = nullptr;};
    inline int64_t getProxyUserId() const { DARABONBA_PTR_GET_DEFAULT(proxyUserId_, 0L) };
    inline CreateUnionTaskShrinkRequest& setProxyUserId(int64_t proxyUserId) { DARABONBA_PTR_SET_VALUE(proxyUserId_, proxyUserId) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int64_t getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0L) };
    inline CreateUnionTaskShrinkRequest& setQuota(int64_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // quotaDay Field Functions 
    bool hasQuotaDay() const { return this->quotaDay_ != nullptr;};
    void deleteQuotaDay() { this->quotaDay_ = nullptr;};
    inline int64_t getQuotaDay() const { DARABONBA_PTR_GET_DEFAULT(quotaDay_, 0L) };
    inline CreateUnionTaskShrinkRequest& setQuotaDay(int64_t quotaDay) { DARABONBA_PTR_SET_VALUE(quotaDay_, quotaDay) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateUnionTaskShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskBizType Field Functions 
    bool hasTaskBizType() const { return this->taskBizType_ != nullptr;};
    void deleteTaskBizType() { this->taskBizType_ = nullptr;};
    inline string getTaskBizType() const { DARABONBA_PTR_GET_DEFAULT(taskBizType_, "") };
    inline CreateUnionTaskShrinkRequest& setTaskBizType(string taskBizType) { DARABONBA_PTR_SET_VALUE(taskBizType_, taskBizType) };


    // taskRuleType Field Functions 
    bool hasTaskRuleType() const { return this->taskRuleType_ != nullptr;};
    void deleteTaskRuleType() { this->taskRuleType_ = nullptr;};
    inline string getTaskRuleType() const { DARABONBA_PTR_GET_DEFAULT(taskRuleType_, "") };
    inline CreateUnionTaskShrinkRequest& setTaskRuleType(string taskRuleType) { DARABONBA_PTR_SET_VALUE(taskRuleType_, taskRuleType) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateUnionTaskShrinkRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    shared_ptr<string> anchorId_ {};
    shared_ptr<int64_t> brandUserId_ {};
    shared_ptr<string> brandUserNick_ {};
    shared_ptr<string> channel_ {};
    shared_ptr<string> channelId_ {};
    shared_ptr<int64_t> chargePloy_ {};
    shared_ptr<int64_t> chargeType_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<int64_t> contentId_ {};
    shared_ptr<string> contentUrl_ {};
    shared_ptr<string> customCreativeType_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<int32_t> industryLabelBagId_ {};
    shared_ptr<string> mediaIdBlackListShrink_ {};
    shared_ptr<string> mediaIdWhiteListShrink_ {};
    shared_ptr<string> mediaIndustry_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> optimizationSwitch_ {};
    shared_ptr<int64_t> proxyUserId_ {};
    shared_ptr<int64_t> quota_ {};
    shared_ptr<int64_t> quotaDay_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> taskBizType_ {};
    shared_ptr<string> taskRuleType_ {};
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UniMkt20181212
#endif
