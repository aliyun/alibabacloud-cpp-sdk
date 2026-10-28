// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEQUOTAALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEQUOTAALARMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class UpdateQuotaAlarmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateQuotaAlarmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
      DARABONBA_PTR_TO_JSON(AlarmName, alarmName_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(ThresholdPercent, thresholdPercent_);
      DARABONBA_PTR_TO_JSON(ThresholdType, thresholdType_);
      DARABONBA_PTR_TO_JSON(WebHook, webHook_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateQuotaAlarmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
      DARABONBA_PTR_FROM_JSON(AlarmName, alarmName_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(ThresholdPercent, thresholdPercent_);
      DARABONBA_PTR_FROM_JSON(ThresholdType, thresholdType_);
      DARABONBA_PTR_FROM_JSON(WebHook, webHook_);
    };
    UpdateQuotaAlarmRequest() = default ;
    UpdateQuotaAlarmRequest(const UpdateQuotaAlarmRequest &) = default ;
    UpdateQuotaAlarmRequest(UpdateQuotaAlarmRequest &&) = default ;
    UpdateQuotaAlarmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateQuotaAlarmRequest() = default ;
    UpdateQuotaAlarmRequest& operator=(const UpdateQuotaAlarmRequest &) = default ;
    UpdateQuotaAlarmRequest& operator=(UpdateQuotaAlarmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmId_ == nullptr
        && this->alarmName_ == nullptr && this->threshold_ == nullptr && this->thresholdPercent_ == nullptr && this->thresholdType_ == nullptr && this->webHook_ == nullptr; };
    // alarmId Field Functions 
    bool hasAlarmId() const { return this->alarmId_ != nullptr;};
    void deleteAlarmId() { this->alarmId_ = nullptr;};
    inline string getAlarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, "") };
    inline UpdateQuotaAlarmRequest& setAlarmId(string alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


    // alarmName Field Functions 
    bool hasAlarmName() const { return this->alarmName_ != nullptr;};
    void deleteAlarmName() { this->alarmName_ = nullptr;};
    inline string getAlarmName() const { DARABONBA_PTR_GET_DEFAULT(alarmName_, "") };
    inline UpdateQuotaAlarmRequest& setAlarmName(string alarmName) { DARABONBA_PTR_SET_VALUE(alarmName_, alarmName) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline UpdateQuotaAlarmRequest& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // thresholdPercent Field Functions 
    bool hasThresholdPercent() const { return this->thresholdPercent_ != nullptr;};
    void deleteThresholdPercent() { this->thresholdPercent_ = nullptr;};
    inline float getThresholdPercent() const { DARABONBA_PTR_GET_DEFAULT(thresholdPercent_, 0.0) };
    inline UpdateQuotaAlarmRequest& setThresholdPercent(float thresholdPercent) { DARABONBA_PTR_SET_VALUE(thresholdPercent_, thresholdPercent) };


    // thresholdType Field Functions 
    bool hasThresholdType() const { return this->thresholdType_ != nullptr;};
    void deleteThresholdType() { this->thresholdType_ = nullptr;};
    inline string getThresholdType() const { DARABONBA_PTR_GET_DEFAULT(thresholdType_, "") };
    inline UpdateQuotaAlarmRequest& setThresholdType(string thresholdType) { DARABONBA_PTR_SET_VALUE(thresholdType_, thresholdType) };


    // webHook Field Functions 
    bool hasWebHook() const { return this->webHook_ != nullptr;};
    void deleteWebHook() { this->webHook_ = nullptr;};
    inline string getWebHook() const { DARABONBA_PTR_GET_DEFAULT(webHook_, "") };
    inline UpdateQuotaAlarmRequest& setWebHook(string webHook) { DARABONBA_PTR_SET_VALUE(webHook_, webHook) };


  protected:
    // The ID of the quota alert.
    // 
    // > For more information about how to obtain the ID of a quota alert, see [ListQuotaAlarms](https://help.aliyun.com/document_detail/440561.html).
    // 
    // This parameter is required.
    shared_ptr<string> alarmId_ {};
    // The name of the quota alert.
    // 
    // > For more information about how to obtain the name of a quota alert, see [ListQuotaAlarms](https://help.aliyun.com/document_detail/440561.html).
    // 
    // This parameter is required.
    shared_ptr<string> alarmName_ {};
    // The numeric value of the alert threshold. Valid values:
    // 
    // - If you set `ThresholdType` to `used`, an alert is triggered when the used quota is greater than or equal to this value. The alert threshold must be greater than the current used quota.
    // 
    // - If you set `ThresholdType` to `usable`, an alert is triggered when the usable quota is less than or equal to this value. The alert threshold must be less than the current usable quota.
    // 
    // > You must set either Threshold or ThresholdPercent.
    shared_ptr<float> threshold_ {};
    // The percentage of the alert threshold. Valid values:
    // 
    // - If you set `ThresholdType` to `used`, an alert is triggered when the percentage of the used quota is greater than or equal to this value. The value must be in the range of (50%, 100%].
    // 
    // - If you set `ThresholdType` to `usable`, an alert is triggered when the percentage of the usable quota is less than or equal to this value. The value must be in the range of (0%, 50%].
    // 
    // > You must set either Threshold or ThresholdPercent.
    shared_ptr<float> thresholdPercent_ {};
    // The type of the quota alert. Valid values:
    // 
    // - used (default): The alert is triggered based on the used quota.
    // 
    // - usable: The alert is triggered based on the usable quota.
    shared_ptr<string> thresholdType_ {};
    // The webhook URL. Quota Center sends alert notifications to this URL using an HTTP POST request.
    shared_ptr<string> webHook_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
