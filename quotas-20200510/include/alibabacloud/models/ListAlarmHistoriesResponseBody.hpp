// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALARMHISTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALARMHISTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListAlarmHistoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlarmHistoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmHistories, alarmHistories_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlarmHistoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmHistories, alarmHistories_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAlarmHistoriesResponseBody() = default ;
    ListAlarmHistoriesResponseBody(const ListAlarmHistoriesResponseBody &) = default ;
    ListAlarmHistoriesResponseBody(ListAlarmHistoriesResponseBody &&) = default ;
    ListAlarmHistoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlarmHistoriesResponseBody() = default ;
    ListAlarmHistoriesResponseBody& operator=(const ListAlarmHistoriesResponseBody &) = default ;
    ListAlarmHistoriesResponseBody& operator=(ListAlarmHistoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlarmHistories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlarmHistories& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmName, alarmName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(NotifyChannels, notifyChannels_);
        DARABONBA_PTR_TO_JSON(NotifyTarget, notifyTarget_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
        DARABONBA_PTR_TO_JSON(QuotaUsage, quotaUsage_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        DARABONBA_PTR_TO_JSON(ThresholdPercent, thresholdPercent_);
      };
      friend void from_json(const Darabonba::Json& j, AlarmHistories& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmName, alarmName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(NotifyChannels, notifyChannels_);
        DARABONBA_PTR_FROM_JSON(NotifyTarget, notifyTarget_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
        DARABONBA_PTR_FROM_JSON(QuotaUsage, quotaUsage_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        DARABONBA_PTR_FROM_JSON(ThresholdPercent, thresholdPercent_);
      };
      AlarmHistories() = default ;
      AlarmHistories(const AlarmHistories &) = default ;
      AlarmHistories(AlarmHistories &&) = default ;
      AlarmHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlarmHistories() = default ;
      AlarmHistories& operator=(const AlarmHistories &) = default ;
      AlarmHistories& operator=(AlarmHistories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmName_ == nullptr
        && this->createTime_ == nullptr && this->notifyChannels_ == nullptr && this->notifyTarget_ == nullptr && this->productCode_ == nullptr && this->quotaActionCode_ == nullptr
        && this->quotaUsage_ == nullptr && this->threshold_ == nullptr && this->thresholdPercent_ == nullptr; };
      // alarmName Field Functions 
      bool hasAlarmName() const { return this->alarmName_ != nullptr;};
      void deleteAlarmName() { this->alarmName_ = nullptr;};
      inline string getAlarmName() const { DARABONBA_PTR_GET_DEFAULT(alarmName_, "") };
      inline AlarmHistories& setAlarmName(string alarmName) { DARABONBA_PTR_SET_VALUE(alarmName_, alarmName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AlarmHistories& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // notifyChannels Field Functions 
      bool hasNotifyChannels() const { return this->notifyChannels_ != nullptr;};
      void deleteNotifyChannels() { this->notifyChannels_ = nullptr;};
      inline const vector<string> & getNotifyChannels() const { DARABONBA_PTR_GET_CONST(notifyChannels_, vector<string>) };
      inline vector<string> getNotifyChannels() { DARABONBA_PTR_GET(notifyChannels_, vector<string>) };
      inline AlarmHistories& setNotifyChannels(const vector<string> & notifyChannels) { DARABONBA_PTR_SET_VALUE(notifyChannels_, notifyChannels) };
      inline AlarmHistories& setNotifyChannels(vector<string> && notifyChannels) { DARABONBA_PTR_SET_RVALUE(notifyChannels_, notifyChannels) };


      // notifyTarget Field Functions 
      bool hasNotifyTarget() const { return this->notifyTarget_ != nullptr;};
      void deleteNotifyTarget() { this->notifyTarget_ = nullptr;};
      inline string getNotifyTarget() const { DARABONBA_PTR_GET_DEFAULT(notifyTarget_, "") };
      inline AlarmHistories& setNotifyTarget(string notifyTarget) { DARABONBA_PTR_SET_VALUE(notifyTarget_, notifyTarget) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline AlarmHistories& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // quotaActionCode Field Functions 
      bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
      void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
      inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
      inline AlarmHistories& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


      // quotaUsage Field Functions 
      bool hasQuotaUsage() const { return this->quotaUsage_ != nullptr;};
      void deleteQuotaUsage() { this->quotaUsage_ = nullptr;};
      inline float getQuotaUsage() const { DARABONBA_PTR_GET_DEFAULT(quotaUsage_, 0.0) };
      inline AlarmHistories& setQuotaUsage(float quotaUsage) { DARABONBA_PTR_SET_VALUE(quotaUsage_, quotaUsage) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
      inline AlarmHistories& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      // thresholdPercent Field Functions 
      bool hasThresholdPercent() const { return this->thresholdPercent_ != nullptr;};
      void deleteThresholdPercent() { this->thresholdPercent_ = nullptr;};
      inline float getThresholdPercent() const { DARABONBA_PTR_GET_DEFAULT(thresholdPercent_, 0.0) };
      inline AlarmHistories& setThresholdPercent(float thresholdPercent) { DARABONBA_PTR_SET_VALUE(thresholdPercent_, thresholdPercent) };


    protected:
      // The name of the quota alert.
      shared_ptr<string> alarmName_ {};
      // The time when the quota alert was created.
      shared_ptr<string> createTime_ {};
      // The notification channels for the quota alert.
      shared_ptr<vector<string>> notifyChannels_ {};
      // The notification recipients of the quota alert.
      shared_ptr<string> notifyTarget_ {};
      // The abbreviation of the cloud service name.
      shared_ptr<string> productCode_ {};
      // The quota ID.
      shared_ptr<string> quotaActionCode_ {};
      // The quota usage.
      shared_ptr<float> quotaUsage_ {};
      // The value of the quota alert threshold.
      shared_ptr<float> threshold_ {};
      // The percentage of the quota alert threshold.
      shared_ptr<float> thresholdPercent_ {};
    };

    virtual bool empty() const override { return this->alarmHistories_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // alarmHistories Field Functions 
    bool hasAlarmHistories() const { return this->alarmHistories_ != nullptr;};
    void deleteAlarmHistories() { this->alarmHistories_ = nullptr;};
    inline const vector<ListAlarmHistoriesResponseBody::AlarmHistories> & getAlarmHistories() const { DARABONBA_PTR_GET_CONST(alarmHistories_, vector<ListAlarmHistoriesResponseBody::AlarmHistories>) };
    inline vector<ListAlarmHistoriesResponseBody::AlarmHistories> getAlarmHistories() { DARABONBA_PTR_GET(alarmHistories_, vector<ListAlarmHistoriesResponseBody::AlarmHistories>) };
    inline ListAlarmHistoriesResponseBody& setAlarmHistories(const vector<ListAlarmHistoriesResponseBody::AlarmHistories> & alarmHistories) { DARABONBA_PTR_SET_VALUE(alarmHistories_, alarmHistories) };
    inline ListAlarmHistoriesResponseBody& setAlarmHistories(vector<ListAlarmHistoriesResponseBody::AlarmHistories> && alarmHistories) { DARABONBA_PTR_SET_RVALUE(alarmHistories_, alarmHistories) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAlarmHistoriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAlarmHistoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlarmHistoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAlarmHistoriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the quota alert history records.
    shared_ptr<vector<ListAlarmHistoriesResponseBody::AlarmHistories>> alarmHistories_ {};
    // The maximum number of entries returned for the current query.
    shared_ptr<int32_t> maxResults_ {};
    // The token that marks the position of the returned query data. An empty value indicates that all data has been queried.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned for the current request.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
