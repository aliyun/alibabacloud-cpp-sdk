// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAALARMSRESPONSEBODYQUOTAALARMS_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAALARMSRESPONSEBODYQUOTAALARMS_HPP_
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
  class ListQuotaAlarmsResponseBodyQuotaAlarms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaAlarmsResponseBodyQuotaAlarms& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListQuotaAlarmsResponseBodyQuotaAlarms& obj) { 
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
    ListQuotaAlarmsResponseBodyQuotaAlarms() = default ;
    ListQuotaAlarmsResponseBodyQuotaAlarms(const ListQuotaAlarmsResponseBodyQuotaAlarms &) = default ;
    ListQuotaAlarmsResponseBodyQuotaAlarms(ListQuotaAlarmsResponseBodyQuotaAlarms &&) = default ;
    ListQuotaAlarmsResponseBodyQuotaAlarms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaAlarmsResponseBodyQuotaAlarms() = default ;
    ListQuotaAlarmsResponseBodyQuotaAlarms& operator=(const ListQuotaAlarmsResponseBodyQuotaAlarms &) = default ;
    ListQuotaAlarmsResponseBodyQuotaAlarms& operator=(ListQuotaAlarmsResponseBodyQuotaAlarms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmId_ != nullptr
        && this->alarmName_ != nullptr && this->createTime_ != nullptr && this->exceedThreshold_ != nullptr && this->notifyChannels_ != nullptr && this->notifyTarget_ != nullptr
        && this->productCode_ != nullptr && this->quotaActionCode_ != nullptr && this->quotaDimensions_ != nullptr && this->quotaUsage_ != nullptr && this->quotaValue_ != nullptr
        && this->threshold_ != nullptr && this->thresholdPercent_ != nullptr && this->thresholdType_ != nullptr && this->webHook_ != nullptr; };
    // alarmId Field Functions 
    bool hasAlarmId() const { return this->alarmId_ != nullptr;};
    void deleteAlarmId() { this->alarmId_ = nullptr;};
    inline string alarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, "") };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setAlarmId(string alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


    // alarmName Field Functions 
    bool hasAlarmName() const { return this->alarmName_ != nullptr;};
    void deleteAlarmName() { this->alarmName_ = nullptr;};
    inline string alarmName() const { DARABONBA_PTR_GET_DEFAULT(alarmName_, "") };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setAlarmName(string alarmName) { DARABONBA_PTR_SET_VALUE(alarmName_, alarmName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // exceedThreshold Field Functions 
    bool hasExceedThreshold() const { return this->exceedThreshold_ != nullptr;};
    void deleteExceedThreshold() { this->exceedThreshold_ = nullptr;};
    inline bool exceedThreshold() const { DARABONBA_PTR_GET_DEFAULT(exceedThreshold_, false) };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setExceedThreshold(bool exceedThreshold) { DARABONBA_PTR_SET_VALUE(exceedThreshold_, exceedThreshold) };


    // notifyChannels Field Functions 
    bool hasNotifyChannels() const { return this->notifyChannels_ != nullptr;};
    void deleteNotifyChannels() { this->notifyChannels_ = nullptr;};
    inline const vector<string> & notifyChannels() const { DARABONBA_PTR_GET_CONST(notifyChannels_, vector<string>) };
    inline vector<string> notifyChannels() { DARABONBA_PTR_GET(notifyChannels_, vector<string>) };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setNotifyChannels(const vector<string> & notifyChannels) { DARABONBA_PTR_SET_VALUE(notifyChannels_, notifyChannels) };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setNotifyChannels(vector<string> && notifyChannels) { DARABONBA_PTR_SET_RVALUE(notifyChannels_, notifyChannels) };


    // notifyTarget Field Functions 
    bool hasNotifyTarget() const { return this->notifyTarget_ != nullptr;};
    void deleteNotifyTarget() { this->notifyTarget_ = nullptr;};
    inline string notifyTarget() const { DARABONBA_PTR_GET_DEFAULT(notifyTarget_, "") };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setNotifyTarget(string notifyTarget) { DARABONBA_PTR_SET_VALUE(notifyTarget_, notifyTarget) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaDimensions Field Functions 
    bool hasQuotaDimensions() const { return this->quotaDimensions_ != nullptr;};
    void deleteQuotaDimensions() { this->quotaDimensions_ = nullptr;};
    inline     const Darabonba::Json & quotaDimensions() const { DARABONBA_GET(quotaDimensions_) };
    Darabonba::Json & quotaDimensions() { DARABONBA_GET(quotaDimensions_) };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setQuotaDimensions(const Darabonba::Json & quotaDimensions) { DARABONBA_SET_VALUE(quotaDimensions_, quotaDimensions) };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setQuotaDimensions(Darabonba::Json & quotaDimensions) { DARABONBA_SET_RVALUE(quotaDimensions_, quotaDimensions) };


    // quotaUsage Field Functions 
    bool hasQuotaUsage() const { return this->quotaUsage_ != nullptr;};
    void deleteQuotaUsage() { this->quotaUsage_ = nullptr;};
    inline float quotaUsage() const { DARABONBA_PTR_GET_DEFAULT(quotaUsage_, 0.0) };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setQuotaUsage(float quotaUsage) { DARABONBA_PTR_SET_VALUE(quotaUsage_, quotaUsage) };


    // quotaValue Field Functions 
    bool hasQuotaValue() const { return this->quotaValue_ != nullptr;};
    void deleteQuotaValue() { this->quotaValue_ = nullptr;};
    inline float quotaValue() const { DARABONBA_PTR_GET_DEFAULT(quotaValue_, 0.0) };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setQuotaValue(float quotaValue) { DARABONBA_PTR_SET_VALUE(quotaValue_, quotaValue) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // thresholdPercent Field Functions 
    bool hasThresholdPercent() const { return this->thresholdPercent_ != nullptr;};
    void deleteThresholdPercent() { this->thresholdPercent_ = nullptr;};
    inline float thresholdPercent() const { DARABONBA_PTR_GET_DEFAULT(thresholdPercent_, 0.0) };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setThresholdPercent(float thresholdPercent) { DARABONBA_PTR_SET_VALUE(thresholdPercent_, thresholdPercent) };


    // thresholdType Field Functions 
    bool hasThresholdType() const { return this->thresholdType_ != nullptr;};
    void deleteThresholdType() { this->thresholdType_ = nullptr;};
    inline string thresholdType() const { DARABONBA_PTR_GET_DEFAULT(thresholdType_, "") };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setThresholdType(string thresholdType) { DARABONBA_PTR_SET_VALUE(thresholdType_, thresholdType) };


    // webHook Field Functions 
    bool hasWebHook() const { return this->webHook_ != nullptr;};
    void deleteWebHook() { this->webHook_ = nullptr;};
    inline string webHook() const { DARABONBA_PTR_GET_DEFAULT(webHook_, "") };
    inline ListQuotaAlarmsResponseBodyQuotaAlarms& setWebHook(string webHook) { DARABONBA_PTR_SET_VALUE(webHook_, webHook) };


  protected:
    // The ID of the alert.
    std::shared_ptr<string> alarmId_ = nullptr;
    // The name of the alert event.
    std::shared_ptr<string> alarmName_ = nullptr;
    // The time when the quota alert was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether the alert threshold was reached. Valid values:
    // 
    // *   false
    // *   true
    std::shared_ptr<bool> exceedThreshold_ = nullptr;
    // The alert notification methods.
    std::shared_ptr<vector<string>> notifyChannels_ = nullptr;
    // The alert contact.
    // 
    // >  Valid value: accountContact. Only the account contact is supported.
    std::shared_ptr<string> notifyTarget_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the quota.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The quota dimensions.
    Darabonba::Json quotaDimensions_ = nullptr;
    // The used quota.
    std::shared_ptr<float> quotaUsage_ = nullptr;
    // The value of the quota.
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
    // The webhook URL.
    std::shared_ptr<string> webHook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
