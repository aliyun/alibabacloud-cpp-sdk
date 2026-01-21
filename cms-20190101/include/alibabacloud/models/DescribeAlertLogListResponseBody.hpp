// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertLogListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertLogListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLogList, alertLogList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertLogListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLogList, alertLogList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAlertLogListResponseBody() = default ;
    DescribeAlertLogListResponseBody(const DescribeAlertLogListResponseBody &) = default ;
    DescribeAlertLogListResponseBody(DescribeAlertLogListResponseBody &&) = default ;
    DescribeAlertLogListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertLogListResponseBody() = default ;
    DescribeAlertLogListResponseBody& operator=(const DescribeAlertLogListResponseBody &) = default ;
    DescribeAlertLogListResponseBody& operator=(DescribeAlertLogListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertLogList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertLogList& obj) { 
        DARABONBA_PTR_TO_JSON(AlertTime, alertTime_);
        DARABONBA_PTR_TO_JSON(BlackListDetail, blackListDetail_);
        DARABONBA_PTR_TO_JSON(BlackListName, blackListName_);
        DARABONBA_PTR_TO_JSON(BlackListUUID, blackListUUID_);
        DARABONBA_PTR_TO_JSON(ContactALIIWWList, contactALIIWWList_);
        DARABONBA_PTR_TO_JSON(ContactDingList, contactDingList_);
        DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
        DARABONBA_PTR_TO_JSON(ContactMailList, contactMailList_);
        DARABONBA_PTR_TO_JSON(ContactOnCallList, contactOnCallList_);
        DARABONBA_PTR_TO_JSON(ContactSMSList, contactSMSList_);
        DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_TO_JSON(DingdingWebhookList, dingdingWebhookList_);
        DARABONBA_PTR_TO_JSON(Escalation, escalation_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(ExtendedInfo, extendedInfo_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(LevelChange, levelChange_);
        DARABONBA_PTR_TO_JSON(LogId, logId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(Product, product_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(SendDetail, sendDetail_);
        DARABONBA_PTR_TO_JSON(SendResultList, sendResultList_);
        DARABONBA_PTR_TO_JSON(SendStatus, sendStatus_);
        DARABONBA_PTR_TO_JSON(WebhookList, webhookList_);
      };
      friend void from_json(const Darabonba::Json& j, AlertLogList& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertTime, alertTime_);
        DARABONBA_PTR_FROM_JSON(BlackListDetail, blackListDetail_);
        DARABONBA_PTR_FROM_JSON(BlackListName, blackListName_);
        DARABONBA_PTR_FROM_JSON(BlackListUUID, blackListUUID_);
        DARABONBA_PTR_FROM_JSON(ContactALIIWWList, contactALIIWWList_);
        DARABONBA_PTR_FROM_JSON(ContactDingList, contactDingList_);
        DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
        DARABONBA_PTR_FROM_JSON(ContactMailList, contactMailList_);
        DARABONBA_PTR_FROM_JSON(ContactOnCallList, contactOnCallList_);
        DARABONBA_PTR_FROM_JSON(ContactSMSList, contactSMSList_);
        DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_FROM_JSON(DingdingWebhookList, dingdingWebhookList_);
        DARABONBA_PTR_FROM_JSON(Escalation, escalation_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(ExtendedInfo, extendedInfo_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(LevelChange, levelChange_);
        DARABONBA_PTR_FROM_JSON(LogId, logId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(Product, product_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(SendDetail, sendDetail_);
        DARABONBA_PTR_FROM_JSON(SendResultList, sendResultList_);
        DARABONBA_PTR_FROM_JSON(SendStatus, sendStatus_);
        DARABONBA_PTR_FROM_JSON(WebhookList, webhookList_);
      };
      AlertLogList() = default ;
      AlertLogList(const AlertLogList &) = default ;
      AlertLogList(AlertLogList &&) = default ;
      AlertLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertLogList() = default ;
      AlertLogList& operator=(const AlertLogList &) = default ;
      AlertLogList& operator=(AlertLogList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WebhookList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WebhookList& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, WebhookList& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        WebhookList() = default ;
        WebhookList(const WebhookList &) = default ;
        WebhookList(WebhookList &&) = default ;
        WebhookList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WebhookList() = default ;
        WebhookList& operator=(const WebhookList &) = default ;
        WebhookList& operator=(WebhookList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->url_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline WebhookList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline WebhookList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline WebhookList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The status code of the alert callback.
        shared_ptr<string> code_ {};
        // The message returned for the alert callback.
        shared_ptr<string> message_ {};
        // The callback URL.
        shared_ptr<string> url_ {};
      };

      class SendResultList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SendResultList& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, SendResultList& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        SendResultList() = default ;
        SendResultList(const SendResultList &) = default ;
        SendResultList(SendResultList &&) = default ;
        SendResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SendResultList() = default ;
        SendResultList& operator=(const SendResultList &) = default ;
        SendResultList& operator=(SendResultList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline SendResultList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
        inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
        inline SendResultList& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
        inline SendResultList& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


      protected:
        // The category of the alert notification method. Valid values:
        // 
        // *   MAIL: email
        // *   ALIIM: TradeManager
        // *   SMS: text message
        // *   CALL: phone call
        // *   DING: DingTalk chatbot
        // *   Merged: alert merging
        shared_ptr<string> key_ {};
        // The notification object corresponding to the alert notification method.
        shared_ptr<vector<string>> value_ {};
      };

      class SendDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SendDetail& obj) { 
          DARABONBA_PTR_TO_JSON(ChannelResultList, channelResultList_);
          DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
        };
        friend void from_json(const Darabonba::Json& j, SendDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(ChannelResultList, channelResultList_);
          DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
        };
        SendDetail() = default ;
        SendDetail(const SendDetail &) = default ;
        SendDetail(SendDetail &&) = default ;
        SendDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SendDetail() = default ;
        SendDetail& operator=(const SendDetail &) = default ;
        SendDetail& operator=(SendDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ChannelResultList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ChannelResultList& obj) { 
            DARABONBA_PTR_TO_JSON(Channel, channel_);
            DARABONBA_PTR_TO_JSON(ResultList, resultList_);
          };
          friend void from_json(const Darabonba::Json& j, ChannelResultList& obj) { 
            DARABONBA_PTR_FROM_JSON(Channel, channel_);
            DARABONBA_PTR_FROM_JSON(ResultList, resultList_);
          };
          ChannelResultList() = default ;
          ChannelResultList(const ChannelResultList &) = default ;
          ChannelResultList(ChannelResultList &&) = default ;
          ChannelResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ChannelResultList() = default ;
          ChannelResultList& operator=(const ChannelResultList &) = default ;
          ChannelResultList& operator=(ChannelResultList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ResultList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ResultList& obj) { 
              DARABONBA_PTR_TO_JSON(Code, code_);
              DARABONBA_PTR_TO_JSON(Detail, detail_);
              DARABONBA_PTR_TO_JSON(RequestId, requestId_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(notifyTargetList, notifyTargetList_);
            };
            friend void from_json(const Darabonba::Json& j, ResultList& obj) { 
              DARABONBA_PTR_FROM_JSON(Code, code_);
              DARABONBA_PTR_FROM_JSON(Detail, detail_);
              DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(notifyTargetList, notifyTargetList_);
            };
            ResultList() = default ;
            ResultList(const ResultList &) = default ;
            ResultList(ResultList &&) = default ;
            ResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ResultList() = default ;
            ResultList& operator=(const ResultList &) = default ;
            ResultList& operator=(ResultList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->code_ == nullptr
        && this->detail_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->notifyTargetList_ == nullptr; };
            // code Field Functions 
            bool hasCode() const { return this->code_ != nullptr;};
            void deleteCode() { this->code_ = nullptr;};
            inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
            inline ResultList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


            // detail Field Functions 
            bool hasDetail() const { return this->detail_ != nullptr;};
            void deleteDetail() { this->detail_ = nullptr;};
            inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
            inline ResultList& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


            // requestId Field Functions 
            bool hasRequestId() const { return this->requestId_ != nullptr;};
            void deleteRequestId() { this->requestId_ = nullptr;};
            inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
            inline ResultList& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
            inline ResultList& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // notifyTargetList Field Functions 
            bool hasNotifyTargetList() const { return this->notifyTargetList_ != nullptr;};
            void deleteNotifyTargetList() { this->notifyTargetList_ = nullptr;};
            inline const vector<string> & getNotifyTargetList() const { DARABONBA_PTR_GET_CONST(notifyTargetList_, vector<string>) };
            inline vector<string> getNotifyTargetList() { DARABONBA_PTR_GET(notifyTargetList_, vector<string>) };
            inline ResultList& setNotifyTargetList(const vector<string> & notifyTargetList) { DARABONBA_PTR_SET_VALUE(notifyTargetList_, notifyTargetList) };
            inline ResultList& setNotifyTargetList(vector<string> && notifyTargetList) { DARABONBA_PTR_SET_RVALUE(notifyTargetList_, notifyTargetList) };


          protected:
            // The HTTP status code.
            // 
            // *   If the value of the `Channel` parameter is `WEBHOOK`, the status code is 200 or 500.
            // *   If the value of the `Channel` parameter is `MAIL`, `SMS`, `SLS`, `ONCALL`, `FC`, or `MNS`, this parameter is empty or not returned.
            shared_ptr<string> code_ {};
            // The details of the returned results.
            shared_ptr<string> detail_ {};
            // The request ID returned when CloudMonitor calls another cloud service.
            shared_ptr<string> requestId_ {};
            // Indicates whether the request was successful. Valid values:
            // 
            // *   true
            // *   false
            shared_ptr<bool> success_ {};
            shared_ptr<vector<string>> notifyTargetList_ {};
          };

          virtual bool empty() const override { return this->channel_ == nullptr
        && this->resultList_ == nullptr; };
          // channel Field Functions 
          bool hasChannel() const { return this->channel_ != nullptr;};
          void deleteChannel() { this->channel_ = nullptr;};
          inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
          inline ChannelResultList& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


          // resultList Field Functions 
          bool hasResultList() const { return this->resultList_ != nullptr;};
          void deleteResultList() { this->resultList_ = nullptr;};
          inline const vector<ChannelResultList::ResultList> & getResultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<ChannelResultList::ResultList>) };
          inline vector<ChannelResultList::ResultList> getResultList() { DARABONBA_PTR_GET(resultList_, vector<ChannelResultList::ResultList>) };
          inline ChannelResultList& setResultList(const vector<ChannelResultList::ResultList> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
          inline ChannelResultList& setResultList(vector<ChannelResultList::ResultList> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


        protected:
          // The method that is used to send alert notifications. Valid values:
          // 
          // *   MAIL: email
          // *   SMS: text message
          // *   WEBHOOK: alert callback
          // *   SLS: Simple Log Service
          // *   ONCALL: phone call
          // *   FC: Function Compute
          // *   MNS: Message Service queue
          shared_ptr<string> channel_ {};
          // The sending results of alert notifications.
          shared_ptr<vector<ChannelResultList::ResultList>> resultList_ {};
        };

        virtual bool empty() const override { return this->channelResultList_ == nullptr
        && this->resultCode_ == nullptr; };
        // channelResultList Field Functions 
        bool hasChannelResultList() const { return this->channelResultList_ != nullptr;};
        void deleteChannelResultList() { this->channelResultList_ = nullptr;};
        inline const vector<SendDetail::ChannelResultList> & getChannelResultList() const { DARABONBA_PTR_GET_CONST(channelResultList_, vector<SendDetail::ChannelResultList>) };
        inline vector<SendDetail::ChannelResultList> getChannelResultList() { DARABONBA_PTR_GET(channelResultList_, vector<SendDetail::ChannelResultList>) };
        inline SendDetail& setChannelResultList(const vector<SendDetail::ChannelResultList> & channelResultList) { DARABONBA_PTR_SET_VALUE(channelResultList_, channelResultList) };
        inline SendDetail& setChannelResultList(vector<SendDetail::ChannelResultList> && channelResultList) { DARABONBA_PTR_SET_RVALUE(channelResultList_, channelResultList) };


        // resultCode Field Functions 
        bool hasResultCode() const { return this->resultCode_ != nullptr;};
        void deleteResultCode() { this->resultCode_ = nullptr;};
        inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
        inline SendDetail& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


      protected:
        // The list of sending results that are categorized by notification method.
        shared_ptr<vector<SendDetail::ChannelResultList>> channelResultList_ {};
        // Indicates whether the alert notifications are sent.
        // 
        // *   If the alert notifications are sent, the value "success" is returned.
        // *   If the configuration is invalid, no alert notification is sent and an error code is returned.
        shared_ptr<string> resultCode_ {};
      };

      class ExtendedInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtendedInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ExtendedInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        ExtendedInfo() = default ;
        ExtendedInfo(const ExtendedInfo &) = default ;
        ExtendedInfo(ExtendedInfo &&) = default ;
        ExtendedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtendedInfo() = default ;
        ExtendedInfo& operator=(const ExtendedInfo &) = default ;
        ExtendedInfo& operator=(ExtendedInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ExtendedInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ExtendedInfo& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The name of the extended field.
        shared_ptr<string> name_ {};
        // The value of the extended field.
        shared_ptr<string> value_ {};
      };

      class Escalation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Escalation& obj) { 
          DARABONBA_PTR_TO_JSON(Expression, expression_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Times, times_);
        };
        friend void from_json(const Darabonba::Json& j, Escalation& obj) { 
          DARABONBA_PTR_FROM_JSON(Expression, expression_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Times, times_);
        };
        Escalation() = default ;
        Escalation(const Escalation &) = default ;
        Escalation(Escalation &&) = default ;
        Escalation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Escalation() = default ;
        Escalation& operator=(const Escalation &) = default ;
        Escalation& operator=(Escalation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->expression_ == nullptr
        && this->level_ == nullptr && this->times_ == nullptr; };
        // expression Field Functions 
        bool hasExpression() const { return this->expression_ != nullptr;};
        void deleteExpression() { this->expression_ = nullptr;};
        inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
        inline Escalation& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline Escalation& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // times Field Functions 
        bool hasTimes() const { return this->times_ != nullptr;};
        void deleteTimes() { this->times_ = nullptr;};
        inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
        inline Escalation& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


      protected:
        // The description of the alert rule.
        // 
        // >  The content of the alert rule. This parameter indicates the conditions that trigger an alert.
        shared_ptr<string> expression_ {};
        // The alert level and the methods that are used to send alert notifications. Valid values:
        // 
        // *   P4: Alert notifications are sent by using emails and DingTalk chatbots.
        // *   OK: No alert is generated.
        shared_ptr<string> level_ {};
        // The consecutive number of times for which the metric value meets the alert condition before an alert is triggered.
        shared_ptr<int32_t> times_ {};
      };

      class Dimensions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dimensions& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Dimensions& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Dimensions() = default ;
        Dimensions(const Dimensions &) = default ;
        Dimensions(Dimensions &&) = default ;
        Dimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dimensions() = default ;
        Dimensions& operator=(const Dimensions &) = default ;
        Dimensions& operator=(Dimensions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Dimensions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Dimensions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The key of the dimension.
        shared_ptr<string> key_ {};
        // The value of the dimension.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->alertTime_ == nullptr
        && this->blackListDetail_ == nullptr && this->blackListName_ == nullptr && this->blackListUUID_ == nullptr && this->contactALIIWWList_ == nullptr && this->contactDingList_ == nullptr
        && this->contactGroups_ == nullptr && this->contactMailList_ == nullptr && this->contactOnCallList_ == nullptr && this->contactSMSList_ == nullptr && this->dimensions_ == nullptr
        && this->dingdingWebhookList_ == nullptr && this->escalation_ == nullptr && this->eventName_ == nullptr && this->extendedInfo_ == nullptr && this->groupId_ == nullptr
        && this->groupName_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->level_ == nullptr && this->levelChange_ == nullptr
        && this->logId_ == nullptr && this->message_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->product_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->sendDetail_ == nullptr && this->sendResultList_ == nullptr && this->sendStatus_ == nullptr
        && this->webhookList_ == nullptr; };
      // alertTime Field Functions 
      bool hasAlertTime() const { return this->alertTime_ != nullptr;};
      void deleteAlertTime() { this->alertTime_ = nullptr;};
      inline string getAlertTime() const { DARABONBA_PTR_GET_DEFAULT(alertTime_, "") };
      inline AlertLogList& setAlertTime(string alertTime) { DARABONBA_PTR_SET_VALUE(alertTime_, alertTime) };


      // blackListDetail Field Functions 
      bool hasBlackListDetail() const { return this->blackListDetail_ != nullptr;};
      void deleteBlackListDetail() { this->blackListDetail_ = nullptr;};
      inline string getBlackListDetail() const { DARABONBA_PTR_GET_DEFAULT(blackListDetail_, "") };
      inline AlertLogList& setBlackListDetail(string blackListDetail) { DARABONBA_PTR_SET_VALUE(blackListDetail_, blackListDetail) };


      // blackListName Field Functions 
      bool hasBlackListName() const { return this->blackListName_ != nullptr;};
      void deleteBlackListName() { this->blackListName_ = nullptr;};
      inline string getBlackListName() const { DARABONBA_PTR_GET_DEFAULT(blackListName_, "") };
      inline AlertLogList& setBlackListName(string blackListName) { DARABONBA_PTR_SET_VALUE(blackListName_, blackListName) };


      // blackListUUID Field Functions 
      bool hasBlackListUUID() const { return this->blackListUUID_ != nullptr;};
      void deleteBlackListUUID() { this->blackListUUID_ = nullptr;};
      inline string getBlackListUUID() const { DARABONBA_PTR_GET_DEFAULT(blackListUUID_, "") };
      inline AlertLogList& setBlackListUUID(string blackListUUID) { DARABONBA_PTR_SET_VALUE(blackListUUID_, blackListUUID) };


      // contactALIIWWList Field Functions 
      bool hasContactALIIWWList() const { return this->contactALIIWWList_ != nullptr;};
      void deleteContactALIIWWList() { this->contactALIIWWList_ = nullptr;};
      inline const vector<string> & getContactALIIWWList() const { DARABONBA_PTR_GET_CONST(contactALIIWWList_, vector<string>) };
      inline vector<string> getContactALIIWWList() { DARABONBA_PTR_GET(contactALIIWWList_, vector<string>) };
      inline AlertLogList& setContactALIIWWList(const vector<string> & contactALIIWWList) { DARABONBA_PTR_SET_VALUE(contactALIIWWList_, contactALIIWWList) };
      inline AlertLogList& setContactALIIWWList(vector<string> && contactALIIWWList) { DARABONBA_PTR_SET_RVALUE(contactALIIWWList_, contactALIIWWList) };


      // contactDingList Field Functions 
      bool hasContactDingList() const { return this->contactDingList_ != nullptr;};
      void deleteContactDingList() { this->contactDingList_ = nullptr;};
      inline const vector<string> & getContactDingList() const { DARABONBA_PTR_GET_CONST(contactDingList_, vector<string>) };
      inline vector<string> getContactDingList() { DARABONBA_PTR_GET(contactDingList_, vector<string>) };
      inline AlertLogList& setContactDingList(const vector<string> & contactDingList) { DARABONBA_PTR_SET_VALUE(contactDingList_, contactDingList) };
      inline AlertLogList& setContactDingList(vector<string> && contactDingList) { DARABONBA_PTR_SET_RVALUE(contactDingList_, contactDingList) };


      // contactGroups Field Functions 
      bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
      void deleteContactGroups() { this->contactGroups_ = nullptr;};
      inline const vector<string> & getContactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, vector<string>) };
      inline vector<string> getContactGroups() { DARABONBA_PTR_GET(contactGroups_, vector<string>) };
      inline AlertLogList& setContactGroups(const vector<string> & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
      inline AlertLogList& setContactGroups(vector<string> && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


      // contactMailList Field Functions 
      bool hasContactMailList() const { return this->contactMailList_ != nullptr;};
      void deleteContactMailList() { this->contactMailList_ = nullptr;};
      inline const vector<string> & getContactMailList() const { DARABONBA_PTR_GET_CONST(contactMailList_, vector<string>) };
      inline vector<string> getContactMailList() { DARABONBA_PTR_GET(contactMailList_, vector<string>) };
      inline AlertLogList& setContactMailList(const vector<string> & contactMailList) { DARABONBA_PTR_SET_VALUE(contactMailList_, contactMailList) };
      inline AlertLogList& setContactMailList(vector<string> && contactMailList) { DARABONBA_PTR_SET_RVALUE(contactMailList_, contactMailList) };


      // contactOnCallList Field Functions 
      bool hasContactOnCallList() const { return this->contactOnCallList_ != nullptr;};
      void deleteContactOnCallList() { this->contactOnCallList_ = nullptr;};
      inline const vector<string> & getContactOnCallList() const { DARABONBA_PTR_GET_CONST(contactOnCallList_, vector<string>) };
      inline vector<string> getContactOnCallList() { DARABONBA_PTR_GET(contactOnCallList_, vector<string>) };
      inline AlertLogList& setContactOnCallList(const vector<string> & contactOnCallList) { DARABONBA_PTR_SET_VALUE(contactOnCallList_, contactOnCallList) };
      inline AlertLogList& setContactOnCallList(vector<string> && contactOnCallList) { DARABONBA_PTR_SET_RVALUE(contactOnCallList_, contactOnCallList) };


      // contactSMSList Field Functions 
      bool hasContactSMSList() const { return this->contactSMSList_ != nullptr;};
      void deleteContactSMSList() { this->contactSMSList_ = nullptr;};
      inline const vector<string> & getContactSMSList() const { DARABONBA_PTR_GET_CONST(contactSMSList_, vector<string>) };
      inline vector<string> getContactSMSList() { DARABONBA_PTR_GET(contactSMSList_, vector<string>) };
      inline AlertLogList& setContactSMSList(const vector<string> & contactSMSList) { DARABONBA_PTR_SET_VALUE(contactSMSList_, contactSMSList) };
      inline AlertLogList& setContactSMSList(vector<string> && contactSMSList) { DARABONBA_PTR_SET_RVALUE(contactSMSList_, contactSMSList) };


      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline const vector<AlertLogList::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<AlertLogList::Dimensions>) };
      inline vector<AlertLogList::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<AlertLogList::Dimensions>) };
      inline AlertLogList& setDimensions(const vector<AlertLogList::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
      inline AlertLogList& setDimensions(vector<AlertLogList::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


      // dingdingWebhookList Field Functions 
      bool hasDingdingWebhookList() const { return this->dingdingWebhookList_ != nullptr;};
      void deleteDingdingWebhookList() { this->dingdingWebhookList_ = nullptr;};
      inline const vector<string> & getDingdingWebhookList() const { DARABONBA_PTR_GET_CONST(dingdingWebhookList_, vector<string>) };
      inline vector<string> getDingdingWebhookList() { DARABONBA_PTR_GET(dingdingWebhookList_, vector<string>) };
      inline AlertLogList& setDingdingWebhookList(const vector<string> & dingdingWebhookList) { DARABONBA_PTR_SET_VALUE(dingdingWebhookList_, dingdingWebhookList) };
      inline AlertLogList& setDingdingWebhookList(vector<string> && dingdingWebhookList) { DARABONBA_PTR_SET_RVALUE(dingdingWebhookList_, dingdingWebhookList) };


      // escalation Field Functions 
      bool hasEscalation() const { return this->escalation_ != nullptr;};
      void deleteEscalation() { this->escalation_ = nullptr;};
      inline const AlertLogList::Escalation & getEscalation() const { DARABONBA_PTR_GET_CONST(escalation_, AlertLogList::Escalation) };
      inline AlertLogList::Escalation getEscalation() { DARABONBA_PTR_GET(escalation_, AlertLogList::Escalation) };
      inline AlertLogList& setEscalation(const AlertLogList::Escalation & escalation) { DARABONBA_PTR_SET_VALUE(escalation_, escalation) };
      inline AlertLogList& setEscalation(AlertLogList::Escalation && escalation) { DARABONBA_PTR_SET_RVALUE(escalation_, escalation) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline AlertLogList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // extendedInfo Field Functions 
      bool hasExtendedInfo() const { return this->extendedInfo_ != nullptr;};
      void deleteExtendedInfo() { this->extendedInfo_ = nullptr;};
      inline const vector<AlertLogList::ExtendedInfo> & getExtendedInfo() const { DARABONBA_PTR_GET_CONST(extendedInfo_, vector<AlertLogList::ExtendedInfo>) };
      inline vector<AlertLogList::ExtendedInfo> getExtendedInfo() { DARABONBA_PTR_GET(extendedInfo_, vector<AlertLogList::ExtendedInfo>) };
      inline AlertLogList& setExtendedInfo(const vector<AlertLogList::ExtendedInfo> & extendedInfo) { DARABONBA_PTR_SET_VALUE(extendedInfo_, extendedInfo) };
      inline AlertLogList& setExtendedInfo(vector<AlertLogList::ExtendedInfo> && extendedInfo) { DARABONBA_PTR_SET_RVALUE(extendedInfo_, extendedInfo) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline AlertLogList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline AlertLogList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AlertLogList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline AlertLogList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline AlertLogList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // levelChange Field Functions 
      bool hasLevelChange() const { return this->levelChange_ != nullptr;};
      void deleteLevelChange() { this->levelChange_ = nullptr;};
      inline string getLevelChange() const { DARABONBA_PTR_GET_DEFAULT(levelChange_, "") };
      inline AlertLogList& setLevelChange(string levelChange) { DARABONBA_PTR_SET_VALUE(levelChange_, levelChange) };


      // logId Field Functions 
      bool hasLogId() const { return this->logId_ != nullptr;};
      void deleteLogId() { this->logId_ = nullptr;};
      inline string getLogId() const { DARABONBA_PTR_GET_DEFAULT(logId_, "") };
      inline AlertLogList& setLogId(string logId) { DARABONBA_PTR_SET_VALUE(logId_, logId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline AlertLogList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline AlertLogList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline AlertLogList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline AlertLogList& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline AlertLogList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline AlertLogList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // sendDetail Field Functions 
      bool hasSendDetail() const { return this->sendDetail_ != nullptr;};
      void deleteSendDetail() { this->sendDetail_ = nullptr;};
      inline const AlertLogList::SendDetail & getSendDetail() const { DARABONBA_PTR_GET_CONST(sendDetail_, AlertLogList::SendDetail) };
      inline AlertLogList::SendDetail getSendDetail() { DARABONBA_PTR_GET(sendDetail_, AlertLogList::SendDetail) };
      inline AlertLogList& setSendDetail(const AlertLogList::SendDetail & sendDetail) { DARABONBA_PTR_SET_VALUE(sendDetail_, sendDetail) };
      inline AlertLogList& setSendDetail(AlertLogList::SendDetail && sendDetail) { DARABONBA_PTR_SET_RVALUE(sendDetail_, sendDetail) };


      // sendResultList Field Functions 
      bool hasSendResultList() const { return this->sendResultList_ != nullptr;};
      void deleteSendResultList() { this->sendResultList_ = nullptr;};
      inline const vector<AlertLogList::SendResultList> & getSendResultList() const { DARABONBA_PTR_GET_CONST(sendResultList_, vector<AlertLogList::SendResultList>) };
      inline vector<AlertLogList::SendResultList> getSendResultList() { DARABONBA_PTR_GET(sendResultList_, vector<AlertLogList::SendResultList>) };
      inline AlertLogList& setSendResultList(const vector<AlertLogList::SendResultList> & sendResultList) { DARABONBA_PTR_SET_VALUE(sendResultList_, sendResultList) };
      inline AlertLogList& setSendResultList(vector<AlertLogList::SendResultList> && sendResultList) { DARABONBA_PTR_SET_RVALUE(sendResultList_, sendResultList) };


      // sendStatus Field Functions 
      bool hasSendStatus() const { return this->sendStatus_ != nullptr;};
      void deleteSendStatus() { this->sendStatus_ = nullptr;};
      inline string getSendStatus() const { DARABONBA_PTR_GET_DEFAULT(sendStatus_, "") };
      inline AlertLogList& setSendStatus(string sendStatus) { DARABONBA_PTR_SET_VALUE(sendStatus_, sendStatus) };


      // webhookList Field Functions 
      bool hasWebhookList() const { return this->webhookList_ != nullptr;};
      void deleteWebhookList() { this->webhookList_ = nullptr;};
      inline const vector<AlertLogList::WebhookList> & getWebhookList() const { DARABONBA_PTR_GET_CONST(webhookList_, vector<AlertLogList::WebhookList>) };
      inline vector<AlertLogList::WebhookList> getWebhookList() { DARABONBA_PTR_GET(webhookList_, vector<AlertLogList::WebhookList>) };
      inline AlertLogList& setWebhookList(const vector<AlertLogList::WebhookList> & webhookList) { DARABONBA_PTR_SET_VALUE(webhookList_, webhookList) };
      inline AlertLogList& setWebhookList(vector<AlertLogList::WebhookList> && webhookList) { DARABONBA_PTR_SET_RVALUE(webhookList_, webhookList) };


    protected:
      // The timestamp that was generated when the alert was triggered.
      // 
      // Unit: milliseconds.
      shared_ptr<string> alertTime_ {};
      // The details of the blacklist policy.
      shared_ptr<string> blackListDetail_ {};
      // The name of the blacklist policy.
      shared_ptr<string> blackListName_ {};
      // The ID of the blacklist policy.
      shared_ptr<string> blackListUUID_ {};
      shared_ptr<vector<string>> contactALIIWWList_ {};
      shared_ptr<vector<string>> contactDingList_ {};
      shared_ptr<vector<string>> contactGroups_ {};
      shared_ptr<vector<string>> contactMailList_ {};
      shared_ptr<vector<string>> contactOnCallList_ {};
      shared_ptr<vector<string>> contactSMSList_ {};
      // The dimensions of the resource that triggered alerts.
      shared_ptr<vector<AlertLogList::Dimensions>> dimensions_ {};
      shared_ptr<vector<string>> dingdingWebhookList_ {};
      // The alert rule based on which the alert is triggered.
      shared_ptr<AlertLogList::Escalation> escalation_ {};
      // The event name.
      shared_ptr<string> eventName_ {};
      // The extended fields.
      shared_ptr<vector<AlertLogList::ExtendedInfo>> extendedInfo_ {};
      // The ID of the application group.
      shared_ptr<string> groupId_ {};
      // The name of the application group.
      shared_ptr<string> groupName_ {};
      // The resource ID.
      shared_ptr<string> instanceId_ {};
      // The resource name.
      shared_ptr<string> instanceName_ {};
      // The alert level and the methods that are used to send alert notifications. Valid values:
      // 
      // *   P4: Alert notifications are sent by using emails and DingTalk chatbots.
      // *   OK: No alert is generated.
      shared_ptr<string> level_ {};
      // Indicates whether the alert level was changed. Valid values:
      // 
      // *   `P4->OK`: The alert level was changed from P4 to OK.
      // *   `P4->P4`: The alert level was still P4.
      shared_ptr<string> levelChange_ {};
      // The log ID.
      shared_ptr<string> logId_ {};
      // The alert information in a JSON string.
      shared_ptr<string> message_ {};
      // The metric name.
      shared_ptr<string> metricName_ {};
      // The namespace of the cloud service.
      shared_ptr<string> namespace_ {};
      // The identifier of the cloud service. Valid values:
      // 
      // *   If the cloud service is provided by Alibaba Cloud, the abbreviation of the service name is returned. Example: ECS.
      // *   If the cloud service is not provided by Alibaba Cloud, a value in the `acs_Service keyword` format is returned. Example: acs_networkmonitor.
      shared_ptr<string> product_ {};
      // The ID of the alert rule.
      shared_ptr<string> ruleId_ {};
      // The name of the alert rule.
      shared_ptr<string> ruleName_ {};
      // The details about the sending results of alert notifications.
      shared_ptr<AlertLogList::SendDetail> sendDetail_ {};
      // The sending results of alert notifications.
      shared_ptr<vector<AlertLogList::SendResultList>> sendResultList_ {};
      // The status of the alert. Valid values:
      // 
      // *   0: The alert is triggered or cleared.
      // *   1: The alert is ineffective.
      // *   2: The alert is muted.
      // *   3: The host is restarting.
      // *   4: No alert notification is sent.
      // 
      // If the value of the SendStatus parameter is 0, the value P4 of the Level parameter indicates a triggered alert and the value OK indicates a cleared alert.
      shared_ptr<string> sendStatus_ {};
      // The callback URLs.
      shared_ptr<vector<AlertLogList::WebhookList>> webhookList_ {};
    };

    virtual bool empty() const override { return this->alertLogList_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // alertLogList Field Functions 
    bool hasAlertLogList() const { return this->alertLogList_ != nullptr;};
    void deleteAlertLogList() { this->alertLogList_ = nullptr;};
    inline const vector<DescribeAlertLogListResponseBody::AlertLogList> & getAlertLogList() const { DARABONBA_PTR_GET_CONST(alertLogList_, vector<DescribeAlertLogListResponseBody::AlertLogList>) };
    inline vector<DescribeAlertLogListResponseBody::AlertLogList> getAlertLogList() { DARABONBA_PTR_GET(alertLogList_, vector<DescribeAlertLogListResponseBody::AlertLogList>) };
    inline DescribeAlertLogListResponseBody& setAlertLogList(const vector<DescribeAlertLogListResponseBody::AlertLogList> & alertLogList) { DARABONBA_PTR_SET_VALUE(alertLogList_, alertLogList) };
    inline DescribeAlertLogListResponseBody& setAlertLogList(vector<DescribeAlertLogListResponseBody::AlertLogList> && alertLogList) { DARABONBA_PTR_SET_RVALUE(alertLogList_, alertLogList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAlertLogListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAlertLogListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAlertLogListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAlertLogListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlertLogListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAlertLogListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The queried alert logs.
    shared_ptr<vector<DescribeAlertLogListResponseBody::AlertLogList>> alertLogList_ {};
    // The HTTP status code.
    // 
    // > The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
