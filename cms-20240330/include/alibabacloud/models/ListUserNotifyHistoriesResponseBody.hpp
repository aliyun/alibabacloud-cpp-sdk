// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERNOTIFYHISTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERNOTIFYHISTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListUserNotifyHistoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserNotifyHistoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(historyList, historyList_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserNotifyHistoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(historyList, historyList_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListUserNotifyHistoriesResponseBody() = default ;
    ListUserNotifyHistoriesResponseBody(const ListUserNotifyHistoriesResponseBody &) = default ;
    ListUserNotifyHistoriesResponseBody(ListUserNotifyHistoriesResponseBody &&) = default ;
    ListUserNotifyHistoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserNotifyHistoriesResponseBody() = default ;
    ListUserNotifyHistoriesResponseBody& operator=(const ListUserNotifyHistoriesResponseBody &) = default ;
    ListUserNotifyHistoriesResponseBody& operator=(ListUserNotifyHistoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HistoryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HistoryList& obj) { 
        DARABONBA_PTR_TO_JSON(channel, channel_);
        DARABONBA_PTR_TO_JSON(contacts, contacts_);
        DARABONBA_PTR_TO_JSON(groups, groups_);
        DARABONBA_PTR_TO_JSON(incidentId, incidentId_);
        DARABONBA_PTR_TO_JSON(jobId, jobId_);
        DARABONBA_PTR_TO_JSON(noChannel, noChannel_);
        DARABONBA_PTR_TO_JSON(notifyStrategyId, notifyStrategyId_);
        DARABONBA_PTR_TO_JSON(notifyStrategyName, notifyStrategyName_);
        DARABONBA_PTR_TO_JSON(receiver, receiver_);
        DARABONBA_PTR_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
        DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
        DARABONBA_PTR_TO_JSON(sendType, sendType_);
        DARABONBA_PTR_TO_JSON(severity, severity_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(subscriptionId, subscriptionId_);
        DARABONBA_PTR_TO_JSON(subscriptionName, subscriptionName_);
        DARABONBA_PTR_TO_JSON(success, success_);
        DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, HistoryList& obj) { 
        DARABONBA_PTR_FROM_JSON(channel, channel_);
        DARABONBA_PTR_FROM_JSON(contacts, contacts_);
        DARABONBA_PTR_FROM_JSON(groups, groups_);
        DARABONBA_PTR_FROM_JSON(incidentId, incidentId_);
        DARABONBA_PTR_FROM_JSON(jobId, jobId_);
        DARABONBA_PTR_FROM_JSON(noChannel, noChannel_);
        DARABONBA_PTR_FROM_JSON(notifyStrategyId, notifyStrategyId_);
        DARABONBA_PTR_FROM_JSON(notifyStrategyName, notifyStrategyName_);
        DARABONBA_PTR_FROM_JSON(receiver, receiver_);
        DARABONBA_PTR_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(sendType, sendType_);
        DARABONBA_PTR_FROM_JSON(severity, severity_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(subscriptionId, subscriptionId_);
        DARABONBA_PTR_FROM_JSON(subscriptionName, subscriptionName_);
        DARABONBA_PTR_FROM_JSON(success, success_);
        DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
      };
      HistoryList() = default ;
      HistoryList(const HistoryList &) = default ;
      HistoryList(HistoryList &&) = default ;
      HistoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HistoryList() = default ;
      HistoryList& operator=(const HistoryList &) = default ;
      HistoryList& operator=(HistoryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channel_ == nullptr
        && this->contacts_ == nullptr && this->groups_ == nullptr && this->incidentId_ == nullptr && this->jobId_ == nullptr && this->noChannel_ == nullptr
        && this->notifyStrategyId_ == nullptr && this->notifyStrategyName_ == nullptr && this->receiver_ == nullptr && this->result_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->sendType_ == nullptr && this->severity_ == nullptr && this->status_ == nullptr && this->subscriptionId_ == nullptr
        && this->subscriptionName_ == nullptr && this->success_ == nullptr && this->timestamp_ == nullptr && this->userId_ == nullptr; };
      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
      inline HistoryList& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


      // contacts Field Functions 
      bool hasContacts() const { return this->contacts_ != nullptr;};
      void deleteContacts() { this->contacts_ = nullptr;};
      inline string getContacts() const { DARABONBA_PTR_GET_DEFAULT(contacts_, "") };
      inline HistoryList& setContacts(string contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };


      // groups Field Functions 
      bool hasGroups() const { return this->groups_ != nullptr;};
      void deleteGroups() { this->groups_ = nullptr;};
      inline string getGroups() const { DARABONBA_PTR_GET_DEFAULT(groups_, "") };
      inline HistoryList& setGroups(string groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };


      // incidentId Field Functions 
      bool hasIncidentId() const { return this->incidentId_ != nullptr;};
      void deleteIncidentId() { this->incidentId_ = nullptr;};
      inline string getIncidentId() const { DARABONBA_PTR_GET_DEFAULT(incidentId_, "") };
      inline HistoryList& setIncidentId(string incidentId) { DARABONBA_PTR_SET_VALUE(incidentId_, incidentId) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline HistoryList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // noChannel Field Functions 
      bool hasNoChannel() const { return this->noChannel_ != nullptr;};
      void deleteNoChannel() { this->noChannel_ = nullptr;};
      inline bool getNoChannel() const { DARABONBA_PTR_GET_DEFAULT(noChannel_, false) };
      inline HistoryList& setNoChannel(bool noChannel) { DARABONBA_PTR_SET_VALUE(noChannel_, noChannel) };


      // notifyStrategyId Field Functions 
      bool hasNotifyStrategyId() const { return this->notifyStrategyId_ != nullptr;};
      void deleteNotifyStrategyId() { this->notifyStrategyId_ = nullptr;};
      inline string getNotifyStrategyId() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyId_, "") };
      inline HistoryList& setNotifyStrategyId(string notifyStrategyId) { DARABONBA_PTR_SET_VALUE(notifyStrategyId_, notifyStrategyId) };


      // notifyStrategyName Field Functions 
      bool hasNotifyStrategyName() const { return this->notifyStrategyName_ != nullptr;};
      void deleteNotifyStrategyName() { this->notifyStrategyName_ = nullptr;};
      inline string getNotifyStrategyName() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyName_, "") };
      inline HistoryList& setNotifyStrategyName(string notifyStrategyName) { DARABONBA_PTR_SET_VALUE(notifyStrategyName_, notifyStrategyName) };


      // receiver Field Functions 
      bool hasReceiver() const { return this->receiver_ != nullptr;};
      void deleteReceiver() { this->receiver_ = nullptr;};
      inline string getReceiver() const { DARABONBA_PTR_GET_DEFAULT(receiver_, "") };
      inline HistoryList& setReceiver(string receiver) { DARABONBA_PTR_SET_VALUE(receiver_, receiver) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline HistoryList& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline HistoryList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline HistoryList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // sendType Field Functions 
      bool hasSendType() const { return this->sendType_ != nullptr;};
      void deleteSendType() { this->sendType_ = nullptr;};
      inline string getSendType() const { DARABONBA_PTR_GET_DEFAULT(sendType_, "") };
      inline HistoryList& setSendType(string sendType) { DARABONBA_PTR_SET_VALUE(sendType_, sendType) };


      // severity Field Functions 
      bool hasSeverity() const { return this->severity_ != nullptr;};
      void deleteSeverity() { this->severity_ = nullptr;};
      inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
      inline HistoryList& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline HistoryList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subscriptionId Field Functions 
      bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
      void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
      inline string getSubscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
      inline HistoryList& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


      // subscriptionName Field Functions 
      bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
      void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
      inline string getSubscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
      inline HistoryList& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline HistoryList& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int32_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0) };
      inline HistoryList& setTimestamp(int32_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline HistoryList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> channel_ {};
      shared_ptr<string> contacts_ {};
      shared_ptr<string> groups_ {};
      shared_ptr<string> incidentId_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<bool> noChannel_ {};
      shared_ptr<string> notifyStrategyId_ {};
      shared_ptr<string> notifyStrategyName_ {};
      shared_ptr<string> receiver_ {};
      shared_ptr<string> result_ {};
      shared_ptr<string> ruleId_ {};
      shared_ptr<string> ruleName_ {};
      shared_ptr<string> sendType_ {};
      shared_ptr<string> severity_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> subscriptionId_ {};
      shared_ptr<string> subscriptionName_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<int32_t> timestamp_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->historyList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // historyList Field Functions 
    bool hasHistoryList() const { return this->historyList_ != nullptr;};
    void deleteHistoryList() { this->historyList_ = nullptr;};
    inline const vector<ListUserNotifyHistoriesResponseBody::HistoryList> & getHistoryList() const { DARABONBA_PTR_GET_CONST(historyList_, vector<ListUserNotifyHistoriesResponseBody::HistoryList>) };
    inline vector<ListUserNotifyHistoriesResponseBody::HistoryList> getHistoryList() { DARABONBA_PTR_GET(historyList_, vector<ListUserNotifyHistoriesResponseBody::HistoryList>) };
    inline ListUserNotifyHistoriesResponseBody& setHistoryList(const vector<ListUserNotifyHistoriesResponseBody::HistoryList> & historyList) { DARABONBA_PTR_SET_VALUE(historyList_, historyList) };
    inline ListUserNotifyHistoriesResponseBody& setHistoryList(vector<ListUserNotifyHistoriesResponseBody::HistoryList> && historyList) { DARABONBA_PTR_SET_RVALUE(historyList_, historyList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUserNotifyHistoriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserNotifyHistoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserNotifyHistoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListUserNotifyHistoriesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<ListUserNotifyHistoriesResponseBody::HistoryList>> historyList_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
