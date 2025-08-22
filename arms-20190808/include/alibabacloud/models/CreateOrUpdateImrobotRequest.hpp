// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEIMROBOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEIMROBOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateIMRobotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateIMRobotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CardTemplate, cardTemplate_);
      DARABONBA_PTR_TO_JSON(DailyNoc, dailyNoc_);
      DARABONBA_PTR_TO_JSON(DailyNocTime, dailyNocTime_);
      DARABONBA_PTR_TO_JSON(DingSignKey, dingSignKey_);
      DARABONBA_PTR_TO_JSON(EnableOutgoing, enableOutgoing_);
      DARABONBA_PTR_TO_JSON(RobotAddress, robotAddress_);
      DARABONBA_PTR_TO_JSON(RobotId, robotId_);
      DARABONBA_PTR_TO_JSON(RobotName, robotName_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateIMRobotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CardTemplate, cardTemplate_);
      DARABONBA_PTR_FROM_JSON(DailyNoc, dailyNoc_);
      DARABONBA_PTR_FROM_JSON(DailyNocTime, dailyNocTime_);
      DARABONBA_PTR_FROM_JSON(DingSignKey, dingSignKey_);
      DARABONBA_PTR_FROM_JSON(EnableOutgoing, enableOutgoing_);
      DARABONBA_PTR_FROM_JSON(RobotAddress, robotAddress_);
      DARABONBA_PTR_FROM_JSON(RobotId, robotId_);
      DARABONBA_PTR_FROM_JSON(RobotName, robotName_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateOrUpdateIMRobotRequest() = default ;
    CreateOrUpdateIMRobotRequest(const CreateOrUpdateIMRobotRequest &) = default ;
    CreateOrUpdateIMRobotRequest(CreateOrUpdateIMRobotRequest &&) = default ;
    CreateOrUpdateIMRobotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateIMRobotRequest() = default ;
    CreateOrUpdateIMRobotRequest& operator=(const CreateOrUpdateIMRobotRequest &) = default ;
    CreateOrUpdateIMRobotRequest& operator=(CreateOrUpdateIMRobotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cardTemplate_ != nullptr
        && this->dailyNoc_ != nullptr && this->dailyNocTime_ != nullptr && this->dingSignKey_ != nullptr && this->enableOutgoing_ != nullptr && this->robotAddress_ != nullptr
        && this->robotId_ != nullptr && this->robotName_ != nullptr && this->token_ != nullptr && this->type_ != nullptr; };
    // cardTemplate Field Functions 
    bool hasCardTemplate() const { return this->cardTemplate_ != nullptr;};
    void deleteCardTemplate() { this->cardTemplate_ = nullptr;};
    inline string cardTemplate() const { DARABONBA_PTR_GET_DEFAULT(cardTemplate_, "") };
    inline CreateOrUpdateIMRobotRequest& setCardTemplate(string cardTemplate) { DARABONBA_PTR_SET_VALUE(cardTemplate_, cardTemplate) };


    // dailyNoc Field Functions 
    bool hasDailyNoc() const { return this->dailyNoc_ != nullptr;};
    void deleteDailyNoc() { this->dailyNoc_ = nullptr;};
    inline bool dailyNoc() const { DARABONBA_PTR_GET_DEFAULT(dailyNoc_, false) };
    inline CreateOrUpdateIMRobotRequest& setDailyNoc(bool dailyNoc) { DARABONBA_PTR_SET_VALUE(dailyNoc_, dailyNoc) };


    // dailyNocTime Field Functions 
    bool hasDailyNocTime() const { return this->dailyNocTime_ != nullptr;};
    void deleteDailyNocTime() { this->dailyNocTime_ = nullptr;};
    inline string dailyNocTime() const { DARABONBA_PTR_GET_DEFAULT(dailyNocTime_, "") };
    inline CreateOrUpdateIMRobotRequest& setDailyNocTime(string dailyNocTime) { DARABONBA_PTR_SET_VALUE(dailyNocTime_, dailyNocTime) };


    // dingSignKey Field Functions 
    bool hasDingSignKey() const { return this->dingSignKey_ != nullptr;};
    void deleteDingSignKey() { this->dingSignKey_ = nullptr;};
    inline string dingSignKey() const { DARABONBA_PTR_GET_DEFAULT(dingSignKey_, "") };
    inline CreateOrUpdateIMRobotRequest& setDingSignKey(string dingSignKey) { DARABONBA_PTR_SET_VALUE(dingSignKey_, dingSignKey) };


    // enableOutgoing Field Functions 
    bool hasEnableOutgoing() const { return this->enableOutgoing_ != nullptr;};
    void deleteEnableOutgoing() { this->enableOutgoing_ = nullptr;};
    inline bool enableOutgoing() const { DARABONBA_PTR_GET_DEFAULT(enableOutgoing_, false) };
    inline CreateOrUpdateIMRobotRequest& setEnableOutgoing(bool enableOutgoing) { DARABONBA_PTR_SET_VALUE(enableOutgoing_, enableOutgoing) };


    // robotAddress Field Functions 
    bool hasRobotAddress() const { return this->robotAddress_ != nullptr;};
    void deleteRobotAddress() { this->robotAddress_ = nullptr;};
    inline string robotAddress() const { DARABONBA_PTR_GET_DEFAULT(robotAddress_, "") };
    inline CreateOrUpdateIMRobotRequest& setRobotAddress(string robotAddress) { DARABONBA_PTR_SET_VALUE(robotAddress_, robotAddress) };


    // robotId Field Functions 
    bool hasRobotId() const { return this->robotId_ != nullptr;};
    void deleteRobotId() { this->robotId_ = nullptr;};
    inline int64_t robotId() const { DARABONBA_PTR_GET_DEFAULT(robotId_, 0L) };
    inline CreateOrUpdateIMRobotRequest& setRobotId(int64_t robotId) { DARABONBA_PTR_SET_VALUE(robotId_, robotId) };


    // robotName Field Functions 
    bool hasRobotName() const { return this->robotName_ != nullptr;};
    void deleteRobotName() { this->robotName_ = nullptr;};
    inline string robotName() const { DARABONBA_PTR_GET_DEFAULT(robotName_, "") };
    inline CreateOrUpdateIMRobotRequest& setRobotName(string robotName) { DARABONBA_PTR_SET_VALUE(robotName_, robotName) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateOrUpdateIMRobotRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateOrUpdateIMRobotRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The configurations of the alert card template. For more information about the parameters in the template, see the following section.
    std::shared_ptr<string> cardTemplate_ = nullptr;
    // Specifies whether to send daily statistics. Valid values:
    // 
    // *   `false` (default): Daily statistics are not sent.
    // *   `true`: Daily statistics are sent. If you set the value to `true`, the **DailyNocTime** parameter is required.
    std::shared_ptr<bool> dailyNoc_ = nullptr;
    // The points in time at which the daily statistics are sent. Separate multiple points in time with commas (,). The points in time are in the HH:SS format. The information that ARMS sends at the specified points in time includes the total number of alerts generated on the current day, the number of cleared alerts, and the number of alerts to be cleared.
    std::shared_ptr<string> dailyNocTime_ = nullptr;
    // The signature key of DingTalk. If you specify a signature key, DingTalk authentication is performed by using the signature key. If you do not specify a signature key, a whitelist is used for authentication by default. The keyword of the whitelist is **Alert**.
    std::shared_ptr<string> dingSignKey_ = nullptr;
    // Specifies whether to enable the Outgoing feature.
    std::shared_ptr<bool> enableOutgoing_ = nullptr;
    // The webhook URL of the IM chatbot.
    // 
    // This parameter is required.
    std::shared_ptr<string> robotAddress_ = nullptr;
    // The ID of the IM chatbot.
    // > If you do not specify the parameter, a new IM chatbot is created.
    std::shared_ptr<int64_t> robotId_ = nullptr;
    // The name of the IM chatbot.
    // 
    // This parameter is required.
    std::shared_ptr<string> robotName_ = nullptr;
    // The token required to enable the Outgoing feature.
    std::shared_ptr<string> token_ = nullptr;
    // The type of the IM chatbot. Valid values:
    // 
    // *   `dingding`: DingTalk chatbot
    // *   `wechat`: WeCom chatbot
    // *   `feishu`: Lark chatbot
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
