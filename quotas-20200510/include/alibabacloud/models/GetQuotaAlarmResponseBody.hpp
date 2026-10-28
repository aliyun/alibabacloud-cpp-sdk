// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAALARMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAALARMRESPONSEBODY_HPP_
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
  class GetQuotaAlarmResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaAlarmResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaAlarm, quotaAlarm_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaAlarmResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaAlarm, quotaAlarm_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetQuotaAlarmResponseBody() = default ;
    GetQuotaAlarmResponseBody(const GetQuotaAlarmResponseBody &) = default ;
    GetQuotaAlarmResponseBody(GetQuotaAlarmResponseBody &&) = default ;
    GetQuotaAlarmResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaAlarmResponseBody() = default ;
    GetQuotaAlarmResponseBody& operator=(const GetQuotaAlarmResponseBody &) = default ;
    GetQuotaAlarmResponseBody& operator=(GetQuotaAlarmResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuotaAlarm : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaAlarm& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
        DARABONBA_PTR_TO_JSON(AlarmName, alarmName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(NotifyChannels, notifyChannels_);
        DARABONBA_PTR_TO_JSON(NotifyTarget, notifyTarget_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
        DARABONBA_ANY_TO_JSON(QuotaDimension, quotaDimension_);
        DARABONBA_PTR_TO_JSON(QuotaUsage, quotaUsage_);
        DARABONBA_PTR_TO_JSON(QuotaValue, quotaValue_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        DARABONBA_PTR_TO_JSON(ThresholdPercent, thresholdPercent_);
        DARABONBA_PTR_TO_JSON(ThresholdType, thresholdType_);
        DARABONBA_PTR_TO_JSON(Webhook, webhook_);
      };
      friend void from_json(const Darabonba::Json& j, QuotaAlarm& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
        DARABONBA_PTR_FROM_JSON(AlarmName, alarmName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(NotifyChannels, notifyChannels_);
        DARABONBA_PTR_FROM_JSON(NotifyTarget, notifyTarget_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
        DARABONBA_ANY_FROM_JSON(QuotaDimension, quotaDimension_);
        DARABONBA_PTR_FROM_JSON(QuotaUsage, quotaUsage_);
        DARABONBA_PTR_FROM_JSON(QuotaValue, quotaValue_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        DARABONBA_PTR_FROM_JSON(ThresholdPercent, thresholdPercent_);
        DARABONBA_PTR_FROM_JSON(ThresholdType, thresholdType_);
        DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
      };
      QuotaAlarm() = default ;
      QuotaAlarm(const QuotaAlarm &) = default ;
      QuotaAlarm(QuotaAlarm &&) = default ;
      QuotaAlarm(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaAlarm() = default ;
      QuotaAlarm& operator=(const QuotaAlarm &) = default ;
      QuotaAlarm& operator=(QuotaAlarm &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmId_ == nullptr
        && this->alarmName_ == nullptr && this->createTime_ == nullptr && this->notifyChannels_ == nullptr && this->notifyTarget_ == nullptr && this->productCode_ == nullptr
        && this->quotaActionCode_ == nullptr && this->quotaDimension_ == nullptr && this->quotaUsage_ == nullptr && this->quotaValue_ == nullptr && this->threshold_ == nullptr
        && this->thresholdPercent_ == nullptr && this->thresholdType_ == nullptr && this->webhook_ == nullptr; };
      // alarmId Field Functions 
      bool hasAlarmId() const { return this->alarmId_ != nullptr;};
      void deleteAlarmId() { this->alarmId_ = nullptr;};
      inline string getAlarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, "") };
      inline QuotaAlarm& setAlarmId(string alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


      // alarmName Field Functions 
      bool hasAlarmName() const { return this->alarmName_ != nullptr;};
      void deleteAlarmName() { this->alarmName_ = nullptr;};
      inline string getAlarmName() const { DARABONBA_PTR_GET_DEFAULT(alarmName_, "") };
      inline QuotaAlarm& setAlarmName(string alarmName) { DARABONBA_PTR_SET_VALUE(alarmName_, alarmName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline QuotaAlarm& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // notifyChannels Field Functions 
      bool hasNotifyChannels() const { return this->notifyChannels_ != nullptr;};
      void deleteNotifyChannels() { this->notifyChannels_ = nullptr;};
      inline const vector<string> & getNotifyChannels() const { DARABONBA_PTR_GET_CONST(notifyChannels_, vector<string>) };
      inline vector<string> getNotifyChannels() { DARABONBA_PTR_GET(notifyChannels_, vector<string>) };
      inline QuotaAlarm& setNotifyChannels(const vector<string> & notifyChannels) { DARABONBA_PTR_SET_VALUE(notifyChannels_, notifyChannels) };
      inline QuotaAlarm& setNotifyChannels(vector<string> && notifyChannels) { DARABONBA_PTR_SET_RVALUE(notifyChannels_, notifyChannels) };


      // notifyTarget Field Functions 
      bool hasNotifyTarget() const { return this->notifyTarget_ != nullptr;};
      void deleteNotifyTarget() { this->notifyTarget_ = nullptr;};
      inline string getNotifyTarget() const { DARABONBA_PTR_GET_DEFAULT(notifyTarget_, "") };
      inline QuotaAlarm& setNotifyTarget(string notifyTarget) { DARABONBA_PTR_SET_VALUE(notifyTarget_, notifyTarget) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline QuotaAlarm& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // quotaActionCode Field Functions 
      bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
      void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
      inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
      inline QuotaAlarm& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


      // quotaDimension Field Functions 
      bool hasQuotaDimension() const { return this->quotaDimension_ != nullptr;};
      void deleteQuotaDimension() { this->quotaDimension_ = nullptr;};
      inline       const Darabonba::Json & getQuotaDimension() const { DARABONBA_GET(quotaDimension_) };
      Darabonba::Json & getQuotaDimension() { DARABONBA_GET(quotaDimension_) };
      inline QuotaAlarm& setQuotaDimension(const Darabonba::Json & quotaDimension) { DARABONBA_SET_VALUE(quotaDimension_, quotaDimension) };
      inline QuotaAlarm& setQuotaDimension(Darabonba::Json && quotaDimension) { DARABONBA_SET_RVALUE(quotaDimension_, quotaDimension) };


      // quotaUsage Field Functions 
      bool hasQuotaUsage() const { return this->quotaUsage_ != nullptr;};
      void deleteQuotaUsage() { this->quotaUsage_ = nullptr;};
      inline float getQuotaUsage() const { DARABONBA_PTR_GET_DEFAULT(quotaUsage_, 0.0) };
      inline QuotaAlarm& setQuotaUsage(float quotaUsage) { DARABONBA_PTR_SET_VALUE(quotaUsage_, quotaUsage) };


      // quotaValue Field Functions 
      bool hasQuotaValue() const { return this->quotaValue_ != nullptr;};
      void deleteQuotaValue() { this->quotaValue_ = nullptr;};
      inline float getQuotaValue() const { DARABONBA_PTR_GET_DEFAULT(quotaValue_, 0.0) };
      inline QuotaAlarm& setQuotaValue(float quotaValue) { DARABONBA_PTR_SET_VALUE(quotaValue_, quotaValue) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
      inline QuotaAlarm& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      // thresholdPercent Field Functions 
      bool hasThresholdPercent() const { return this->thresholdPercent_ != nullptr;};
      void deleteThresholdPercent() { this->thresholdPercent_ = nullptr;};
      inline float getThresholdPercent() const { DARABONBA_PTR_GET_DEFAULT(thresholdPercent_, 0.0) };
      inline QuotaAlarm& setThresholdPercent(float thresholdPercent) { DARABONBA_PTR_SET_VALUE(thresholdPercent_, thresholdPercent) };


      // thresholdType Field Functions 
      bool hasThresholdType() const { return this->thresholdType_ != nullptr;};
      void deleteThresholdType() { this->thresholdType_ = nullptr;};
      inline string getThresholdType() const { DARABONBA_PTR_GET_DEFAULT(thresholdType_, "") };
      inline QuotaAlarm& setThresholdType(string thresholdType) { DARABONBA_PTR_SET_VALUE(thresholdType_, thresholdType) };


      // webhook Field Functions 
      bool hasWebhook() const { return this->webhook_ != nullptr;};
      void deleteWebhook() { this->webhook_ = nullptr;};
      inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
      inline QuotaAlarm& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


    protected:
      // The ID of the quota alert.
      shared_ptr<string> alarmId_ {};
      // The name of the quota alert.
      shared_ptr<string> alarmName_ {};
      // The time when the quota alert was created.
      shared_ptr<string> createTime_ {};
      // The notification channels for the alert.
      shared_ptr<vector<string>> notifyChannels_ {};
      // The notification recipient of the quota alert.
      shared_ptr<string> notifyTarget_ {};
      // The abbreviation of the cloud service name.
      shared_ptr<string> productCode_ {};
      // The ID of the quota.
      shared_ptr<string> quotaActionCode_ {};
      // The quota dimension.
      Darabonba::Json quotaDimension_ {};
      // The quota usage.
      shared_ptr<float> quotaUsage_ {};
      // The quota value.
      shared_ptr<float> quotaValue_ {};
      // The numeric value of the quota alert threshold.
      shared_ptr<float> threshold_ {};
      // The percentage of the quota alert threshold.
      shared_ptr<float> thresholdPercent_ {};
      // The Alarm Metric of the quota alerting. Valid values:
      // 
      // - used: Alerting on the used quota usage.
      // - usable: Alerting on the remaining active quota.
      shared_ptr<string> thresholdType_ {};
      // The public URL to which Quota Center sends alert messages by using HTTP POST requests.
      shared_ptr<string> webhook_ {};
    };

    virtual bool empty() const override { return this->quotaAlarm_ == nullptr
        && this->requestId_ == nullptr; };
    // quotaAlarm Field Functions 
    bool hasQuotaAlarm() const { return this->quotaAlarm_ != nullptr;};
    void deleteQuotaAlarm() { this->quotaAlarm_ = nullptr;};
    inline const GetQuotaAlarmResponseBody::QuotaAlarm & getQuotaAlarm() const { DARABONBA_PTR_GET_CONST(quotaAlarm_, GetQuotaAlarmResponseBody::QuotaAlarm) };
    inline GetQuotaAlarmResponseBody::QuotaAlarm getQuotaAlarm() { DARABONBA_PTR_GET(quotaAlarm_, GetQuotaAlarmResponseBody::QuotaAlarm) };
    inline GetQuotaAlarmResponseBody& setQuotaAlarm(const GetQuotaAlarmResponseBody::QuotaAlarm & quotaAlarm) { DARABONBA_PTR_SET_VALUE(quotaAlarm_, quotaAlarm) };
    inline GetQuotaAlarmResponseBody& setQuotaAlarm(GetQuotaAlarmResponseBody::QuotaAlarm && quotaAlarm) { DARABONBA_PTR_SET_RVALUE(quotaAlarm_, quotaAlarm) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQuotaAlarmResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the quota alert.
    shared_ptr<GetQuotaAlarmResponseBody::QuotaAlarm> quotaAlarm_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
