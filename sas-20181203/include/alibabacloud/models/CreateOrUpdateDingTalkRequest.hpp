// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEDINGTALKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEDINGTALKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateOrUpdateDingTalkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateDingTalkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(DingTalkLang, dingTalkLang_);
      DARABONBA_PTR_TO_JSON(GroupIdList, groupIdList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IntervalTime, intervalTime_);
      DARABONBA_PTR_TO_JSON(RuleActionName, ruleActionName_);
      DARABONBA_PTR_TO_JSON(SendUrl, sendUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateDingTalkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(DingTalkLang, dingTalkLang_);
      DARABONBA_PTR_FROM_JSON(GroupIdList, groupIdList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IntervalTime, intervalTime_);
      DARABONBA_PTR_FROM_JSON(RuleActionName, ruleActionName_);
      DARABONBA_PTR_FROM_JSON(SendUrl, sendUrl_);
    };
    CreateOrUpdateDingTalkRequest() = default ;
    CreateOrUpdateDingTalkRequest(const CreateOrUpdateDingTalkRequest &) = default ;
    CreateOrUpdateDingTalkRequest(CreateOrUpdateDingTalkRequest &&) = default ;
    CreateOrUpdateDingTalkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateDingTalkRequest() = default ;
    CreateOrUpdateDingTalkRequest& operator=(const CreateOrUpdateDingTalkRequest &) = default ;
    CreateOrUpdateDingTalkRequest& operator=(CreateOrUpdateDingTalkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configList_ == nullptr
        && this->dingTalkLang_ == nullptr && this->groupIdList_ == nullptr && this->id_ == nullptr && this->intervalTime_ == nullptr && this->ruleActionName_ == nullptr
        && this->sendUrl_ == nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline string getConfigList() const { DARABONBA_PTR_GET_DEFAULT(configList_, "") };
    inline CreateOrUpdateDingTalkRequest& setConfigList(string configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };


    // dingTalkLang Field Functions 
    bool hasDingTalkLang() const { return this->dingTalkLang_ != nullptr;};
    void deleteDingTalkLang() { this->dingTalkLang_ = nullptr;};
    inline string getDingTalkLang() const { DARABONBA_PTR_GET_DEFAULT(dingTalkLang_, "") };
    inline CreateOrUpdateDingTalkRequest& setDingTalkLang(string dingTalkLang) { DARABONBA_PTR_SET_VALUE(dingTalkLang_, dingTalkLang) };


    // groupIdList Field Functions 
    bool hasGroupIdList() const { return this->groupIdList_ != nullptr;};
    void deleteGroupIdList() { this->groupIdList_ = nullptr;};
    inline string getGroupIdList() const { DARABONBA_PTR_GET_DEFAULT(groupIdList_, "") };
    inline CreateOrUpdateDingTalkRequest& setGroupIdList(string groupIdList) { DARABONBA_PTR_SET_VALUE(groupIdList_, groupIdList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateOrUpdateDingTalkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // intervalTime Field Functions 
    bool hasIntervalTime() const { return this->intervalTime_ != nullptr;};
    void deleteIntervalTime() { this->intervalTime_ = nullptr;};
    inline int64_t getIntervalTime() const { DARABONBA_PTR_GET_DEFAULT(intervalTime_, 0L) };
    inline CreateOrUpdateDingTalkRequest& setIntervalTime(int64_t intervalTime) { DARABONBA_PTR_SET_VALUE(intervalTime_, intervalTime) };


    // ruleActionName Field Functions 
    bool hasRuleActionName() const { return this->ruleActionName_ != nullptr;};
    void deleteRuleActionName() { this->ruleActionName_ = nullptr;};
    inline string getRuleActionName() const { DARABONBA_PTR_GET_DEFAULT(ruleActionName_, "") };
    inline CreateOrUpdateDingTalkRequest& setRuleActionName(string ruleActionName) { DARABONBA_PTR_SET_VALUE(ruleActionName_, ruleActionName) };


    // sendUrl Field Functions 
    bool hasSendUrl() const { return this->sendUrl_ != nullptr;};
    void deleteSendUrl() { this->sendUrl_ = nullptr;};
    inline string getSendUrl() const { DARABONBA_PTR_GET_DEFAULT(sendUrl_, "") };
    inline CreateOrUpdateDingTalkRequest& setSendUrl(string sendUrl) { DARABONBA_PTR_SET_VALUE(sendUrl_, sendUrl) };


  protected:
    // The alerts for which you want the chatbot to send notifications. The value is a JSON array that contains the following fields:
    // 
    // *   **type**: the types of alerts. The valid values are listed in the "Additional description of parameters" section in this topic.
    // 
    // *   **configItemList**: the list of check items. The value is a JSON array that contains the following fields:
    // 
    //     *   **key**: the key of the check item.
    //     *   **valueList**: the values of the check item. The value of valueList is a JSON array.
    // 
    // > For more information about the value of this parameter, see the "Addition description of parameters" section in this topic.
    shared_ptr<string> configList_ {};
    // The language of the notifications. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> dingTalkLang_ {};
    // The IDs of asset groups for which you want the chatbot to send notifications. The value is a JSON array.
    // 
    // > You can call the [DescribeGroupStruct](~~DescribeGroupStruct~~) operation to query the IDs of asset groups.
    shared_ptr<string> groupIdList_ {};
    // The ID of the chatbot.
    // 
    // > You can call the [DescribeDingTalk](https://www.alibabacloud.com/help/en/security-center/developer-reference/api-sas-2018-12-03-describedingtalk/?spm=a2c63.p38356.0.0.681e4360Qd1eb1) operation to query the IDs of chatbots.
    shared_ptr<int64_t> id_ {};
    // The time interval at which the chatbot sends notifications.
    // 
    // > The value **0** indicates unlimited.
    shared_ptr<int64_t> intervalTime_ {};
    // The name of the chatbot.
    // 
    // > The name of a chatbot must be 2 to 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> ruleActionName_ {};
    // The webhook URL.
    // 
    // This parameter is required.
    shared_ptr<string> sendUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
