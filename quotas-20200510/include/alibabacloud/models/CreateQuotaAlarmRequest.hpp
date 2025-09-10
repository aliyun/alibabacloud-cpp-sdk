// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUOTAALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUOTAALARMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateQuotaAlarmRequestQuotaDimensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class CreateQuotaAlarmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQuotaAlarmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmName, alarmName_);
      DARABONBA_PTR_TO_JSON(OriginalContext, originalContext_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_TO_JSON(QuotaDimensions, quotaDimensions_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(ThresholdPercent, thresholdPercent_);
      DARABONBA_PTR_TO_JSON(ThresholdType, thresholdType_);
      DARABONBA_PTR_TO_JSON(WebHook, webHook_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQuotaAlarmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmName, alarmName_);
      DARABONBA_PTR_FROM_JSON(OriginalContext, originalContext_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_FROM_JSON(QuotaDimensions, quotaDimensions_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(ThresholdPercent, thresholdPercent_);
      DARABONBA_PTR_FROM_JSON(ThresholdType, thresholdType_);
      DARABONBA_PTR_FROM_JSON(WebHook, webHook_);
    };
    CreateQuotaAlarmRequest() = default ;
    CreateQuotaAlarmRequest(const CreateQuotaAlarmRequest &) = default ;
    CreateQuotaAlarmRequest(CreateQuotaAlarmRequest &&) = default ;
    CreateQuotaAlarmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQuotaAlarmRequest() = default ;
    CreateQuotaAlarmRequest& operator=(const CreateQuotaAlarmRequest &) = default ;
    CreateQuotaAlarmRequest& operator=(CreateQuotaAlarmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmName_ != nullptr
        && this->originalContext_ != nullptr && this->productCode_ != nullptr && this->quotaActionCode_ != nullptr && this->quotaDimensions_ != nullptr && this->threshold_ != nullptr
        && this->thresholdPercent_ != nullptr && this->thresholdType_ != nullptr && this->webHook_ != nullptr; };
    // alarmName Field Functions 
    bool hasAlarmName() const { return this->alarmName_ != nullptr;};
    void deleteAlarmName() { this->alarmName_ = nullptr;};
    inline string alarmName() const { DARABONBA_PTR_GET_DEFAULT(alarmName_, "") };
    inline CreateQuotaAlarmRequest& setAlarmName(string alarmName) { DARABONBA_PTR_SET_VALUE(alarmName_, alarmName) };


    // originalContext Field Functions 
    bool hasOriginalContext() const { return this->originalContext_ != nullptr;};
    void deleteOriginalContext() { this->originalContext_ = nullptr;};
    inline string originalContext() const { DARABONBA_PTR_GET_DEFAULT(originalContext_, "") };
    inline CreateQuotaAlarmRequest& setOriginalContext(string originalContext) { DARABONBA_PTR_SET_VALUE(originalContext_, originalContext) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateQuotaAlarmRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline CreateQuotaAlarmRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaDimensions Field Functions 
    bool hasQuotaDimensions() const { return this->quotaDimensions_ != nullptr;};
    void deleteQuotaDimensions() { this->quotaDimensions_ = nullptr;};
    inline const vector<CreateQuotaAlarmRequestQuotaDimensions> & quotaDimensions() const { DARABONBA_PTR_GET_CONST(quotaDimensions_, vector<CreateQuotaAlarmRequestQuotaDimensions>) };
    inline vector<CreateQuotaAlarmRequestQuotaDimensions> quotaDimensions() { DARABONBA_PTR_GET(quotaDimensions_, vector<CreateQuotaAlarmRequestQuotaDimensions>) };
    inline CreateQuotaAlarmRequest& setQuotaDimensions(const vector<CreateQuotaAlarmRequestQuotaDimensions> & quotaDimensions) { DARABONBA_PTR_SET_VALUE(quotaDimensions_, quotaDimensions) };
    inline CreateQuotaAlarmRequest& setQuotaDimensions(vector<CreateQuotaAlarmRequestQuotaDimensions> && quotaDimensions) { DARABONBA_PTR_SET_RVALUE(quotaDimensions_, quotaDimensions) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline CreateQuotaAlarmRequest& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // thresholdPercent Field Functions 
    bool hasThresholdPercent() const { return this->thresholdPercent_ != nullptr;};
    void deleteThresholdPercent() { this->thresholdPercent_ = nullptr;};
    inline float thresholdPercent() const { DARABONBA_PTR_GET_DEFAULT(thresholdPercent_, 0.0) };
    inline CreateQuotaAlarmRequest& setThresholdPercent(float thresholdPercent) { DARABONBA_PTR_SET_VALUE(thresholdPercent_, thresholdPercent) };


    // thresholdType Field Functions 
    bool hasThresholdType() const { return this->thresholdType_ != nullptr;};
    void deleteThresholdType() { this->thresholdType_ = nullptr;};
    inline string thresholdType() const { DARABONBA_PTR_GET_DEFAULT(thresholdType_, "") };
    inline CreateQuotaAlarmRequest& setThresholdType(string thresholdType) { DARABONBA_PTR_SET_VALUE(thresholdType_, thresholdType) };


    // webHook Field Functions 
    bool hasWebHook() const { return this->webHook_ != nullptr;};
    void deleteWebHook() { this->webHook_ = nullptr;};
    inline string webHook() const { DARABONBA_PTR_GET_DEFAULT(webHook_, "") };
    inline CreateQuotaAlarmRequest& setWebHook(string webHook) { DARABONBA_PTR_SET_VALUE(webHook_, webHook) };


  protected:
    // Quota alarm name
    // 
    // This parameter is required.
    std::shared_ptr<string> alarmName_ = nullptr;
    std::shared_ptr<string> originalContext_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    // 
    // >  To query the abbreviation of an Alibaba Cloud service name, check the `ProductCode` parameter that is described in [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // The quota ID.
    // 
    // >  To obtain the quota ID of an Alibaba Cloud service, call the [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html) operation and check the value of `QuotaActionCode` in the response.
    // 
    // This parameter is required.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The quota dimensions. A quota item is uniquely identified by the values of `Dimensions` and `QuotaActionCode`.
    // 
    // >  This parameter is required for specific Alibaba Cloud services. You can call the [ListProductQuotaDimensions](https://help.aliyun.com/document_detail/440553.html) operation to query the quota dimensions that are supported by an Alibaba Cloud service. The value of `Requisite` in the response indicates whether a dimension is required.
    std::shared_ptr<vector<CreateQuotaAlarmRequestQuotaDimensions>> quotaDimensions_ = nullptr;
    // The numerical value of the quota alarm threshold. Value settings:
    // - When `ThresholdType` is set to `used`, an alarm notification will be sent if the used amount of the quota is greater than or equal to the preset value. The quota alarm threshold must be greater than the used amount of the quota.
    // - When `ThresholdType` is set to `usable`, an alarm notification will be sent if the remaining available amount of the quota is less than or equal to the preset value. The quota alarm threshold must be less than the remaining available amount of the quota.
    // > One of this parameter and ThresholdPercent must be set.
    std::shared_ptr<float> threshold_ = nullptr;
    // The percentage of the quota alert threshold. Values:
    // - When `ThresholdType` is set to `used`, you will receive an alert notification if the used amount of the quota is greater than or equal to the preset percentage. The value range is (50%, 100%].
    // - When `ThresholdType` is set to `usable`, you will receive an alert notification if the remaining available amount of the quota is less than or equal to the preset percentage. The value range is (0%, 50%].
    // > One of this parameter and Threshold must be set.
    std::shared_ptr<float> thresholdPercent_ = nullptr;
    // The type of the quota alert. Valid values:
    // 
    // *   used (default): The alert is created for the used quota.
    // *   usable: The alert is created for the available quota.
    std::shared_ptr<string> thresholdType_ = nullptr;
    // The quota center sends alert information to the specified public URL address via a POST request using the HTTP protocol.
    std::shared_ptr<string> webHook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
