// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAALARMRESPONSEBODYQUOTAALARM_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAALARMRESPONSEBODYQUOTAALARM_HPP_
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
  class GetQuotaAlarmResponseBodyQuotaAlarm : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaAlarmResponseBodyQuotaAlarm& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetQuotaAlarmResponseBodyQuotaAlarm& obj) { 
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
    GetQuotaAlarmResponseBodyQuotaAlarm() = default ;
    GetQuotaAlarmResponseBodyQuotaAlarm(const GetQuotaAlarmResponseBodyQuotaAlarm &) = default ;
    GetQuotaAlarmResponseBodyQuotaAlarm(GetQuotaAlarmResponseBodyQuotaAlarm &&) = default ;
    GetQuotaAlarmResponseBodyQuotaAlarm(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaAlarmResponseBodyQuotaAlarm() = default ;
    GetQuotaAlarmResponseBodyQuotaAlarm& operator=(const GetQuotaAlarmResponseBodyQuotaAlarm &) = default ;
    GetQuotaAlarmResponseBodyQuotaAlarm& operator=(GetQuotaAlarmResponseBodyQuotaAlarm &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmId_ != nullptr
        && this->alarmName_ != nullptr && this->createTime_ != nullptr && this->notifyChannels_ != nullptr && this->notifyTarget_ != nullptr && this->productCode_ != nullptr
        && this->quotaActionCode_ != nullptr && this->quotaDimension_ != nullptr && this->quotaUsage_ != nullptr && this->quotaValue_ != nullptr && this->threshold_ != nullptr
        && this->thresholdPercent_ != nullptr && this->thresholdType_ != nullptr && this->webhook_ != nullptr; };
    // alarmId Field Functions 
    bool hasAlarmId() const { return this->alarmId_ != nullptr;};
    void deleteAlarmId() { this->alarmId_ = nullptr;};
    inline string alarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, "") };
    inline GetQuotaAlarmResponseBodyQuotaAlarm& setAlarmId(string alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


    // alarmName Field Functions 
    bool hasAlarmName() const { return this->alarmName_ != nullptr;};
    void deleteAlarmName() { this->alarmName_ = nullptr;};
    inline string alarmName() const { DARABONBA_PTR_GET_DEFAULT(alarmName_, "") };
    inline GetQuotaAlarmResponseBodyQuotaAlarm& setAlarmName(string alarmName) { DARABONBA_PTR_SET_VALUE(alarmName_, alarmName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetQuotaAlarmResponseBodyQuotaAlarm& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // notifyChannels Field Functions 
    bool hasNotifyChannels() const { return this->notifyChannels_ != nullptr;};
    void deleteNotifyChannels() { this->notifyChannels_ = nullptr;};
    inline const vector<string> & notifyChannels() const { DARABONBA_PTR_GET_CONST(notifyChannels_, vector<string>) };
    inline vector<string> notifyChannels() { DARABONBA_PTR_GET(notifyChannels_, vector<string>) };
    inline GetQuotaAlarmResponseBodyQuotaAlarm& setNotifyChannels(const vector<string> & notifyChannels) { DARABONBA_PTR_SET_VALUE(notifyChannels_, notifyChannels) };
    inline GetQuotaAlarmResponseBodyQuotaAlarm& setNotifyChannels(vector<string> && notifyChannels) { DARABONBA_PTR_SET_RVALUE(notifyChannels_, notifyChannels) };


    // notifyTarget Field Functions 
    bool hasNotifyTarget() const { return this->notifyTarget_ != nullptr;};
    void deleteNotifyTarget() { this->notifyTarget_ = nullptr;};
    inline string notifyTarget() const { DARABONBA_PTR_GET_DEFAULT(notifyTarget_, "") };
    inline GetQuotaAlarmResponseBodyQuotaAlarm& setNotifyTarget(string notifyTarget) { DARABONBA_PTR_SET_VALUE(notifyTarget_, notifyTarget) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetQuotaAlarmResponseBodyQuotaAlarm& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline GetQuotaAlarmResponseBodyQuotaAlarm& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaDimension Field Functions 
    bool hasQuotaDimension() const { return this->quotaDimension_ != nullptr;};
    void deleteQuotaDimension() { this->quotaDimension_ = nullptr;};
    inline     const Darabonba::Json & quotaDimension() const { DARABONBA_GET(quotaDimension_) };
    Darabonba::Json & quotaDimension() { DARABONBA_GET(quotaDimension_) };
    inline GetQuotaAlarmResponseBodyQuotaAlarm& setQuotaDimension(const Darabonba::Json & quotaDimension) { DARABONBA_SET_VALUE(quotaDimension_, quotaDimension) };
    inline GetQuotaAlarmResponseBodyQuotaAlarm& setQuotaDimension(Darabonba::Json & quotaDimension) { DARABONBA_SET_RVALUE(quotaDimension_, quotaDimension) };


    // quotaUsage Field Functions 
    bool hasQuotaUsage() const { return this->quotaUsage_ != nullptr;};
    void deleteQuotaUsage() { this->quotaUsage_ = nullptr;};
    inline float quotaUsage() const { DARABONBA_PTR_GET_DEFAULT(quotaUsage_, 0.0) };
    inline GetQuotaAlarmResponseBodyQuotaAlarm& setQuotaUsage(float quotaUsage) { DARABONBA_PTR_SET_VALUE(quotaUsage_, quotaUsage) };


    // quotaValue Field Functions 
    bool hasQuotaValue() const { return this->quotaValue_ != nullptr;};
    void deleteQuotaValue() { this->quotaValue_ = nullptr;};
    inline float quotaValue() const { DARABONBA_PTR_GET_DEFAULT(quotaValue_, 0.0) };
    inline GetQuotaAlarmResponseBodyQuotaAlarm& setQuotaValue(float quotaValue) { DARABONBA_PTR_SET_VALUE(quotaValue_, quotaValue) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline GetQuotaAlarmResponseBodyQuotaAlarm& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // thresholdPercent Field Functions 
    bool hasThresholdPercent() const { return this->thresholdPercent_ != nullptr;};
    void deleteThresholdPercent() { this->thresholdPercent_ = nullptr;};
    inline float thresholdPercent() const { DARABONBA_PTR_GET_DEFAULT(thresholdPercent_, 0.0) };
    inline GetQuotaAlarmResponseBodyQuotaAlarm& setThresholdPercent(float thresholdPercent) { DARABONBA_PTR_SET_VALUE(thresholdPercent_, thresholdPercent) };


    // thresholdType Field Functions 
    bool hasThresholdType() const { return this->thresholdType_ != nullptr;};
    void deleteThresholdType() { this->thresholdType_ = nullptr;};
    inline string thresholdType() const { DARABONBA_PTR_GET_DEFAULT(thresholdType_, "") };
    inline GetQuotaAlarmResponseBodyQuotaAlarm& setThresholdType(string thresholdType) { DARABONBA_PTR_SET_VALUE(thresholdType_, thresholdType) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline GetQuotaAlarmResponseBodyQuotaAlarm& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    // The ID of the quota alert.
    std::shared_ptr<string> alarmId_ = nullptr;
    // The name of the quota alert.
    std::shared_ptr<string> alarmName_ = nullptr;
    // The time when the quota alert was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The alert notification methods.
    std::shared_ptr<vector<string>> notifyChannels_ = nullptr;
    // The alert contact.
    std::shared_ptr<string> notifyTarget_ = nullptr;
    // The abbreviation of the cloud service name.
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the quota.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The quota dimension.
    Darabonba::Json quotaDimension_ = nullptr;
    // The used quota.
    std::shared_ptr<float> quotaUsage_ = nullptr;
    // The quota value.
    std::shared_ptr<float> quotaValue_ = nullptr;
    // The numeric value of the alert threshold.
    std::shared_ptr<float> threshold_ = nullptr;
    // The percentage of the alert threshold.
    std::shared_ptr<float> thresholdPercent_ = nullptr;
    // The type of the quota alert. Valid values:
    // 
    // *   used: The alert is created for the used quota.
    // *   usable: The alert is created for the available quota.
    std::shared_ptr<string> thresholdType_ = nullptr;
    // The webhook URL. Quota Center sends alert notifications to the specified URL by using HTTP POST requests.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
