// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEIMROBOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEIMROBOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateIMRobotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateIMRobotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertRobot, alertRobot_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateIMRobotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertRobot, alertRobot_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOrUpdateIMRobotResponseBody() = default ;
    CreateOrUpdateIMRobotResponseBody(const CreateOrUpdateIMRobotResponseBody &) = default ;
    CreateOrUpdateIMRobotResponseBody(CreateOrUpdateIMRobotResponseBody &&) = default ;
    CreateOrUpdateIMRobotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateIMRobotResponseBody() = default ;
    CreateOrUpdateIMRobotResponseBody& operator=(const CreateOrUpdateIMRobotResponseBody &) = default ;
    CreateOrUpdateIMRobotResponseBody& operator=(CreateOrUpdateIMRobotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertRobot : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertRobot& obj) { 
        DARABONBA_PTR_TO_JSON(CardTemplate, cardTemplate_);
        DARABONBA_PTR_TO_JSON(DailyNoc, dailyNoc_);
        DARABONBA_PTR_TO_JSON(DailyNocTime, dailyNocTime_);
        DARABONBA_PTR_TO_JSON(EnableOutgoing, enableOutgoing_);
        DARABONBA_PTR_TO_JSON(RobotAddress, robotAddress_);
        DARABONBA_PTR_TO_JSON(RobotId, robotId_);
        DARABONBA_PTR_TO_JSON(RobotName, robotName_);
        DARABONBA_PTR_TO_JSON(Token, token_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AlertRobot& obj) { 
        DARABONBA_PTR_FROM_JSON(CardTemplate, cardTemplate_);
        DARABONBA_PTR_FROM_JSON(DailyNoc, dailyNoc_);
        DARABONBA_PTR_FROM_JSON(DailyNocTime, dailyNocTime_);
        DARABONBA_PTR_FROM_JSON(EnableOutgoing, enableOutgoing_);
        DARABONBA_PTR_FROM_JSON(RobotAddress, robotAddress_);
        DARABONBA_PTR_FROM_JSON(RobotId, robotId_);
        DARABONBA_PTR_FROM_JSON(RobotName, robotName_);
        DARABONBA_PTR_FROM_JSON(Token, token_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      AlertRobot() = default ;
      AlertRobot(const AlertRobot &) = default ;
      AlertRobot(AlertRobot &&) = default ;
      AlertRobot(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertRobot() = default ;
      AlertRobot& operator=(const AlertRobot &) = default ;
      AlertRobot& operator=(AlertRobot &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cardTemplate_ == nullptr
        && this->dailyNoc_ == nullptr && this->dailyNocTime_ == nullptr && this->enableOutgoing_ == nullptr && this->robotAddress_ == nullptr && this->robotId_ == nullptr
        && this->robotName_ == nullptr && this->token_ == nullptr && this->type_ == nullptr; };
      // cardTemplate Field Functions 
      bool hasCardTemplate() const { return this->cardTemplate_ != nullptr;};
      void deleteCardTemplate() { this->cardTemplate_ = nullptr;};
      inline string getCardTemplate() const { DARABONBA_PTR_GET_DEFAULT(cardTemplate_, "") };
      inline AlertRobot& setCardTemplate(string cardTemplate) { DARABONBA_PTR_SET_VALUE(cardTemplate_, cardTemplate) };


      // dailyNoc Field Functions 
      bool hasDailyNoc() const { return this->dailyNoc_ != nullptr;};
      void deleteDailyNoc() { this->dailyNoc_ = nullptr;};
      inline bool getDailyNoc() const { DARABONBA_PTR_GET_DEFAULT(dailyNoc_, false) };
      inline AlertRobot& setDailyNoc(bool dailyNoc) { DARABONBA_PTR_SET_VALUE(dailyNoc_, dailyNoc) };


      // dailyNocTime Field Functions 
      bool hasDailyNocTime() const { return this->dailyNocTime_ != nullptr;};
      void deleteDailyNocTime() { this->dailyNocTime_ = nullptr;};
      inline string getDailyNocTime() const { DARABONBA_PTR_GET_DEFAULT(dailyNocTime_, "") };
      inline AlertRobot& setDailyNocTime(string dailyNocTime) { DARABONBA_PTR_SET_VALUE(dailyNocTime_, dailyNocTime) };


      // enableOutgoing Field Functions 
      bool hasEnableOutgoing() const { return this->enableOutgoing_ != nullptr;};
      void deleteEnableOutgoing() { this->enableOutgoing_ = nullptr;};
      inline bool getEnableOutgoing() const { DARABONBA_PTR_GET_DEFAULT(enableOutgoing_, false) };
      inline AlertRobot& setEnableOutgoing(bool enableOutgoing) { DARABONBA_PTR_SET_VALUE(enableOutgoing_, enableOutgoing) };


      // robotAddress Field Functions 
      bool hasRobotAddress() const { return this->robotAddress_ != nullptr;};
      void deleteRobotAddress() { this->robotAddress_ = nullptr;};
      inline string getRobotAddress() const { DARABONBA_PTR_GET_DEFAULT(robotAddress_, "") };
      inline AlertRobot& setRobotAddress(string robotAddress) { DARABONBA_PTR_SET_VALUE(robotAddress_, robotAddress) };


      // robotId Field Functions 
      bool hasRobotId() const { return this->robotId_ != nullptr;};
      void deleteRobotId() { this->robotId_ = nullptr;};
      inline float getRobotId() const { DARABONBA_PTR_GET_DEFAULT(robotId_, 0.0) };
      inline AlertRobot& setRobotId(float robotId) { DARABONBA_PTR_SET_VALUE(robotId_, robotId) };


      // robotName Field Functions 
      bool hasRobotName() const { return this->robotName_ != nullptr;};
      void deleteRobotName() { this->robotName_ = nullptr;};
      inline string getRobotName() const { DARABONBA_PTR_GET_DEFAULT(robotName_, "") };
      inline AlertRobot& setRobotName(string robotName) { DARABONBA_PTR_SET_VALUE(robotName_, robotName) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline AlertRobot& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AlertRobot& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The configurations of the alert card template.
      shared_ptr<string> cardTemplate_ {};
      // Indicates whether daily statistics are sent. Valid values:
      // 
      // *   `false` (default): Daily statistics are not sent.
      // *   `true`: Daily statistics are sent.
      shared_ptr<bool> dailyNoc_ {};
      // The point in time at which the daily statistics are sent. The information that ARMS sends at the specified points in time includes the total number of alerts generated on the current day, the number of cleared alerts, and the number of alerts to be cleared.
      shared_ptr<string> dailyNocTime_ {};
      // Indicates whether the Outgoing feature is enabled.
      shared_ptr<bool> enableOutgoing_ {};
      // The webhook URL of the IM chatbot.
      shared_ptr<string> robotAddress_ {};
      // The ID of the IM chatbot.
      shared_ptr<float> robotId_ {};
      // The name of the IM chatbot.
      shared_ptr<string> robotName_ {};
      // The token required to enable the Outgoing feature.
      shared_ptr<string> token_ {};
      // The type of the IM chatbot. Valid values:
      // 
      // *   `dingding`: DingTalk chatbot
      // *   `wechat`: WeCom chatbot
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->alertRobot_ == nullptr
        && this->requestId_ == nullptr; };
    // alertRobot Field Functions 
    bool hasAlertRobot() const { return this->alertRobot_ != nullptr;};
    void deleteAlertRobot() { this->alertRobot_ = nullptr;};
    inline const CreateOrUpdateIMRobotResponseBody::AlertRobot & getAlertRobot() const { DARABONBA_PTR_GET_CONST(alertRobot_, CreateOrUpdateIMRobotResponseBody::AlertRobot) };
    inline CreateOrUpdateIMRobotResponseBody::AlertRobot getAlertRobot() { DARABONBA_PTR_GET(alertRobot_, CreateOrUpdateIMRobotResponseBody::AlertRobot) };
    inline CreateOrUpdateIMRobotResponseBody& setAlertRobot(const CreateOrUpdateIMRobotResponseBody::AlertRobot & alertRobot) { DARABONBA_PTR_SET_VALUE(alertRobot_, alertRobot) };
    inline CreateOrUpdateIMRobotResponseBody& setAlertRobot(CreateOrUpdateIMRobotResponseBody::AlertRobot && alertRobot) { DARABONBA_PTR_SET_RVALUE(alertRobot_, alertRobot) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateIMRobotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the IM chatbot.
    shared_ptr<CreateOrUpdateIMRobotResponseBody::AlertRobot> alertRobot_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
