// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALARMHISTORIESRESPONSEBODYALARMHISTORIES_HPP_
#define ALIBABACLOUD_MODELS_LISTALARMHISTORIESRESPONSEBODYALARMHISTORIES_HPP_
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
  class ListAlarmHistoriesResponseBodyAlarmHistories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlarmHistoriesResponseBodyAlarmHistories& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAlarmHistoriesResponseBodyAlarmHistories& obj) { 
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
    ListAlarmHistoriesResponseBodyAlarmHistories() = default ;
    ListAlarmHistoriesResponseBodyAlarmHistories(const ListAlarmHistoriesResponseBodyAlarmHistories &) = default ;
    ListAlarmHistoriesResponseBodyAlarmHistories(ListAlarmHistoriesResponseBodyAlarmHistories &&) = default ;
    ListAlarmHistoriesResponseBodyAlarmHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlarmHistoriesResponseBodyAlarmHistories() = default ;
    ListAlarmHistoriesResponseBodyAlarmHistories& operator=(const ListAlarmHistoriesResponseBodyAlarmHistories &) = default ;
    ListAlarmHistoriesResponseBodyAlarmHistories& operator=(ListAlarmHistoriesResponseBodyAlarmHistories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmName_ != nullptr
        && this->createTime_ != nullptr && this->notifyChannels_ != nullptr && this->notifyTarget_ != nullptr && this->productCode_ != nullptr && this->quotaActionCode_ != nullptr
        && this->quotaUsage_ != nullptr && this->threshold_ != nullptr && this->thresholdPercent_ != nullptr; };
    // alarmName Field Functions 
    bool hasAlarmName() const { return this->alarmName_ != nullptr;};
    void deleteAlarmName() { this->alarmName_ = nullptr;};
    inline string alarmName() const { DARABONBA_PTR_GET_DEFAULT(alarmName_, "") };
    inline ListAlarmHistoriesResponseBodyAlarmHistories& setAlarmName(string alarmName) { DARABONBA_PTR_SET_VALUE(alarmName_, alarmName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAlarmHistoriesResponseBodyAlarmHistories& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // notifyChannels Field Functions 
    bool hasNotifyChannels() const { return this->notifyChannels_ != nullptr;};
    void deleteNotifyChannels() { this->notifyChannels_ = nullptr;};
    inline const vector<string> & notifyChannels() const { DARABONBA_PTR_GET_CONST(notifyChannels_, vector<string>) };
    inline vector<string> notifyChannels() { DARABONBA_PTR_GET(notifyChannels_, vector<string>) };
    inline ListAlarmHistoriesResponseBodyAlarmHistories& setNotifyChannels(const vector<string> & notifyChannels) { DARABONBA_PTR_SET_VALUE(notifyChannels_, notifyChannels) };
    inline ListAlarmHistoriesResponseBodyAlarmHistories& setNotifyChannels(vector<string> && notifyChannels) { DARABONBA_PTR_SET_RVALUE(notifyChannels_, notifyChannels) };


    // notifyTarget Field Functions 
    bool hasNotifyTarget() const { return this->notifyTarget_ != nullptr;};
    void deleteNotifyTarget() { this->notifyTarget_ = nullptr;};
    inline string notifyTarget() const { DARABONBA_PTR_GET_DEFAULT(notifyTarget_, "") };
    inline ListAlarmHistoriesResponseBodyAlarmHistories& setNotifyTarget(string notifyTarget) { DARABONBA_PTR_SET_VALUE(notifyTarget_, notifyTarget) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListAlarmHistoriesResponseBodyAlarmHistories& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ListAlarmHistoriesResponseBodyAlarmHistories& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaUsage Field Functions 
    bool hasQuotaUsage() const { return this->quotaUsage_ != nullptr;};
    void deleteQuotaUsage() { this->quotaUsage_ = nullptr;};
    inline float quotaUsage() const { DARABONBA_PTR_GET_DEFAULT(quotaUsage_, 0.0) };
    inline ListAlarmHistoriesResponseBodyAlarmHistories& setQuotaUsage(float quotaUsage) { DARABONBA_PTR_SET_VALUE(quotaUsage_, quotaUsage) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline ListAlarmHistoriesResponseBodyAlarmHistories& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // thresholdPercent Field Functions 
    bool hasThresholdPercent() const { return this->thresholdPercent_ != nullptr;};
    void deleteThresholdPercent() { this->thresholdPercent_ = nullptr;};
    inline float thresholdPercent() const { DARABONBA_PTR_GET_DEFAULT(thresholdPercent_, 0.0) };
    inline ListAlarmHistoriesResponseBodyAlarmHistories& setThresholdPercent(float thresholdPercent) { DARABONBA_PTR_SET_VALUE(thresholdPercent_, thresholdPercent) };


  protected:
    // The name of the quota alert.
    std::shared_ptr<string> alarmName_ = nullptr;
    // The time when the quota alert rule was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The notification methods of the quota alert.
    std::shared_ptr<vector<string>> notifyChannels_ = nullptr;
    // The quota alert contact.
    std::shared_ptr<string> notifyTarget_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    std::shared_ptr<string> productCode_ = nullptr;
    // The quota ID.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The used quota.
    std::shared_ptr<float> quotaUsage_ = nullptr;
    // The threshold to trigger quota alerts.
    std::shared_ptr<float> threshold_ = nullptr;
    // The percentage of the quota alert threshold.
    std::shared_ptr<float> thresholdPercent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
