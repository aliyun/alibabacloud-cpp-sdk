// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAALARMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAALARMSRESPONSEBODY_HPP_
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
  class ListQuotaAlarmsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaAlarmsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QuotaAlarms, quotaAlarms_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaAlarmsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QuotaAlarms, quotaAlarms_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListQuotaAlarmsResponseBody() = default ;
    ListQuotaAlarmsResponseBody(const ListQuotaAlarmsResponseBody &) = default ;
    ListQuotaAlarmsResponseBody(ListQuotaAlarmsResponseBody &&) = default ;
    ListQuotaAlarmsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaAlarmsResponseBody() = default ;
    ListQuotaAlarmsResponseBody& operator=(const ListQuotaAlarmsResponseBody &) = default ;
    ListQuotaAlarmsResponseBody& operator=(ListQuotaAlarmsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuotaAlarms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaAlarms& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
        DARABONBA_PTR_TO_JSON(AlarmName, alarmName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ExceedThreshold, exceedThreshold_);
        DARABONBA_PTR_TO_JSON(NotifyChannels, notifyChannels_);
        DARABONBA_PTR_TO_JSON(NotifyTarget, notifyTarget_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
        DARABONBA_ANY_TO_JSON(QuotaDimensions, quotaDimensions_);
        DARABONBA_PTR_TO_JSON(QuotaUsage, quotaUsage_);
        DARABONBA_PTR_TO_JSON(QuotaValue, quotaValue_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        DARABONBA_PTR_TO_JSON(ThresholdPercent, thresholdPercent_);
        DARABONBA_PTR_TO_JSON(ThresholdType, thresholdType_);
        DARABONBA_PTR_TO_JSON(WebHook, webHook_);
      };
      friend void from_json(const Darabonba::Json& j, QuotaAlarms& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
        DARABONBA_PTR_FROM_JSON(AlarmName, alarmName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ExceedThreshold, exceedThreshold_);
        DARABONBA_PTR_FROM_JSON(NotifyChannels, notifyChannels_);
        DARABONBA_PTR_FROM_JSON(NotifyTarget, notifyTarget_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
        DARABONBA_ANY_FROM_JSON(QuotaDimensions, quotaDimensions_);
        DARABONBA_PTR_FROM_JSON(QuotaUsage, quotaUsage_);
        DARABONBA_PTR_FROM_JSON(QuotaValue, quotaValue_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        DARABONBA_PTR_FROM_JSON(ThresholdPercent, thresholdPercent_);
        DARABONBA_PTR_FROM_JSON(ThresholdType, thresholdType_);
        DARABONBA_PTR_FROM_JSON(WebHook, webHook_);
      };
      QuotaAlarms() = default ;
      QuotaAlarms(const QuotaAlarms &) = default ;
      QuotaAlarms(QuotaAlarms &&) = default ;
      QuotaAlarms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaAlarms() = default ;
      QuotaAlarms& operator=(const QuotaAlarms &) = default ;
      QuotaAlarms& operator=(QuotaAlarms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmId_ == nullptr
        && this->alarmName_ == nullptr && this->createTime_ == nullptr && this->exceedThreshold_ == nullptr && this->notifyChannels_ == nullptr && this->notifyTarget_ == nullptr
        && this->productCode_ == nullptr && this->quotaActionCode_ == nullptr && this->quotaDimensions_ == nullptr && this->quotaUsage_ == nullptr && this->quotaValue_ == nullptr
        && this->threshold_ == nullptr && this->thresholdPercent_ == nullptr && this->thresholdType_ == nullptr && this->webHook_ == nullptr; };
      // alarmId Field Functions 
      bool hasAlarmId() const { return this->alarmId_ != nullptr;};
      void deleteAlarmId() { this->alarmId_ = nullptr;};
      inline string getAlarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, "") };
      inline QuotaAlarms& setAlarmId(string alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


      // alarmName Field Functions 
      bool hasAlarmName() const { return this->alarmName_ != nullptr;};
      void deleteAlarmName() { this->alarmName_ = nullptr;};
      inline string getAlarmName() const { DARABONBA_PTR_GET_DEFAULT(alarmName_, "") };
      inline QuotaAlarms& setAlarmName(string alarmName) { DARABONBA_PTR_SET_VALUE(alarmName_, alarmName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline QuotaAlarms& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // exceedThreshold Field Functions 
      bool hasExceedThreshold() const { return this->exceedThreshold_ != nullptr;};
      void deleteExceedThreshold() { this->exceedThreshold_ = nullptr;};
      inline bool getExceedThreshold() const { DARABONBA_PTR_GET_DEFAULT(exceedThreshold_, false) };
      inline QuotaAlarms& setExceedThreshold(bool exceedThreshold) { DARABONBA_PTR_SET_VALUE(exceedThreshold_, exceedThreshold) };


      // notifyChannels Field Functions 
      bool hasNotifyChannels() const { return this->notifyChannels_ != nullptr;};
      void deleteNotifyChannels() { this->notifyChannels_ = nullptr;};
      inline const vector<string> & getNotifyChannels() const { DARABONBA_PTR_GET_CONST(notifyChannels_, vector<string>) };
      inline vector<string> getNotifyChannels() { DARABONBA_PTR_GET(notifyChannels_, vector<string>) };
      inline QuotaAlarms& setNotifyChannels(const vector<string> & notifyChannels) { DARABONBA_PTR_SET_VALUE(notifyChannels_, notifyChannels) };
      inline QuotaAlarms& setNotifyChannels(vector<string> && notifyChannels) { DARABONBA_PTR_SET_RVALUE(notifyChannels_, notifyChannels) };


      // notifyTarget Field Functions 
      bool hasNotifyTarget() const { return this->notifyTarget_ != nullptr;};
      void deleteNotifyTarget() { this->notifyTarget_ = nullptr;};
      inline string getNotifyTarget() const { DARABONBA_PTR_GET_DEFAULT(notifyTarget_, "") };
      inline QuotaAlarms& setNotifyTarget(string notifyTarget) { DARABONBA_PTR_SET_VALUE(notifyTarget_, notifyTarget) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline QuotaAlarms& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // quotaActionCode Field Functions 
      bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
      void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
      inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
      inline QuotaAlarms& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


      // quotaDimensions Field Functions 
      bool hasQuotaDimensions() const { return this->quotaDimensions_ != nullptr;};
      void deleteQuotaDimensions() { this->quotaDimensions_ = nullptr;};
      inline       const Darabonba::Json & getQuotaDimensions() const { DARABONBA_GET(quotaDimensions_) };
      Darabonba::Json & getQuotaDimensions() { DARABONBA_GET(quotaDimensions_) };
      inline QuotaAlarms& setQuotaDimensions(const Darabonba::Json & quotaDimensions) { DARABONBA_SET_VALUE(quotaDimensions_, quotaDimensions) };
      inline QuotaAlarms& setQuotaDimensions(Darabonba::Json && quotaDimensions) { DARABONBA_SET_RVALUE(quotaDimensions_, quotaDimensions) };


      // quotaUsage Field Functions 
      bool hasQuotaUsage() const { return this->quotaUsage_ != nullptr;};
      void deleteQuotaUsage() { this->quotaUsage_ = nullptr;};
      inline float getQuotaUsage() const { DARABONBA_PTR_GET_DEFAULT(quotaUsage_, 0.0) };
      inline QuotaAlarms& setQuotaUsage(float quotaUsage) { DARABONBA_PTR_SET_VALUE(quotaUsage_, quotaUsage) };


      // quotaValue Field Functions 
      bool hasQuotaValue() const { return this->quotaValue_ != nullptr;};
      void deleteQuotaValue() { this->quotaValue_ = nullptr;};
      inline float getQuotaValue() const { DARABONBA_PTR_GET_DEFAULT(quotaValue_, 0.0) };
      inline QuotaAlarms& setQuotaValue(float quotaValue) { DARABONBA_PTR_SET_VALUE(quotaValue_, quotaValue) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
      inline QuotaAlarms& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      // thresholdPercent Field Functions 
      bool hasThresholdPercent() const { return this->thresholdPercent_ != nullptr;};
      void deleteThresholdPercent() { this->thresholdPercent_ = nullptr;};
      inline float getThresholdPercent() const { DARABONBA_PTR_GET_DEFAULT(thresholdPercent_, 0.0) };
      inline QuotaAlarms& setThresholdPercent(float thresholdPercent) { DARABONBA_PTR_SET_VALUE(thresholdPercent_, thresholdPercent) };


      // thresholdType Field Functions 
      bool hasThresholdType() const { return this->thresholdType_ != nullptr;};
      void deleteThresholdType() { this->thresholdType_ = nullptr;};
      inline string getThresholdType() const { DARABONBA_PTR_GET_DEFAULT(thresholdType_, "") };
      inline QuotaAlarms& setThresholdType(string thresholdType) { DARABONBA_PTR_SET_VALUE(thresholdType_, thresholdType) };


      // webHook Field Functions 
      bool hasWebHook() const { return this->webHook_ != nullptr;};
      void deleteWebHook() { this->webHook_ = nullptr;};
      inline string getWebHook() const { DARABONBA_PTR_GET_DEFAULT(webHook_, "") };
      inline QuotaAlarms& setWebHook(string webHook) { DARABONBA_PTR_SET_VALUE(webHook_, webHook) };


    protected:
      // The alert ID.
      shared_ptr<string> alarmId_ {};
      // The alert name.
      shared_ptr<string> alarmName_ {};
      // The time when the quota usage alert was created.
      shared_ptr<string> createTime_ {};
      // Indicates whether the quota usage exceeds the alert threshold. Valid values:
      // 
      // - false
      // 
      // - true
      shared_ptr<bool> exceedThreshold_ {};
      // The notification channels of the quota alert.
      shared_ptr<vector<string>> notifyChannels_ {};
      // The notification object of the alert.
      // 
      // > The value can only be accountContact, which specifies the contacts of the account.
      shared_ptr<string> notifyTarget_ {};
      // The abbreviation of the Alibaba Cloud service name.
      shared_ptr<string> productCode_ {};
      // The quota ID.
      shared_ptr<string> quotaActionCode_ {};
      // The quota dimensions.
      Darabonba::Json quotaDimensions_ {};
      // The used quota.
      shared_ptr<float> quotaUsage_ {};
      // The quota value.
      shared_ptr<float> quotaValue_ {};
      // The numeric value of the alert threshold.
      shared_ptr<float> threshold_ {};
      // The percentage of the alert threshold.
      shared_ptr<float> thresholdPercent_ {};
      // The type of the quota alert. Valid values:
      // 
      // - used: an alert for the used quota.
      // 
      // - usable: an alert for the available quota.
      shared_ptr<string> thresholdType_ {};
      // The webhook URL.
      shared_ptr<string> webHook_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->quotaAlarms_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQuotaAlarmsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQuotaAlarmsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // quotaAlarms Field Functions 
    bool hasQuotaAlarms() const { return this->quotaAlarms_ != nullptr;};
    void deleteQuotaAlarms() { this->quotaAlarms_ = nullptr;};
    inline const vector<ListQuotaAlarmsResponseBody::QuotaAlarms> & getQuotaAlarms() const { DARABONBA_PTR_GET_CONST(quotaAlarms_, vector<ListQuotaAlarmsResponseBody::QuotaAlarms>) };
    inline vector<ListQuotaAlarmsResponseBody::QuotaAlarms> getQuotaAlarms() { DARABONBA_PTR_GET(quotaAlarms_, vector<ListQuotaAlarmsResponseBody::QuotaAlarms>) };
    inline ListQuotaAlarmsResponseBody& setQuotaAlarms(const vector<ListQuotaAlarmsResponseBody::QuotaAlarms> & quotaAlarms) { DARABONBA_PTR_SET_VALUE(quotaAlarms_, quotaAlarms) };
    inline ListQuotaAlarmsResponseBody& setQuotaAlarms(vector<ListQuotaAlarmsResponseBody::QuotaAlarms> && quotaAlarms) { DARABONBA_PTR_SET_RVALUE(quotaAlarms_, quotaAlarms) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQuotaAlarmsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListQuotaAlarmsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of records returned for the current query.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    // 
    // > If this parameter is empty, all results have been returned.
    shared_ptr<string> nextToken_ {};
    // The details of the quota usage alerts.
    shared_ptr<vector<ListQuotaAlarmsResponseBody::QuotaAlarms>> quotaAlarms_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of quota usage alerts.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
