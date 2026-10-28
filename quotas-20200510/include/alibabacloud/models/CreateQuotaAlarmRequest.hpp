// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUOTAALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUOTAALARMREQUEST_HPP_
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
    class QuotaDimensions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaDimensions& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, QuotaDimensions& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      QuotaDimensions() = default ;
      QuotaDimensions(const QuotaDimensions &) = default ;
      QuotaDimensions(QuotaDimensions &&) = default ;
      QuotaDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaDimensions() = default ;
      QuotaDimensions& operator=(const QuotaDimensions &) = default ;
      QuotaDimensions& operator=(QuotaDimensions &&) = default ;
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
      inline QuotaDimensions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline QuotaDimensions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the quota dimension.
      // 
      // > You must specify both Dimensions.N.Key and Dimensions.N.Value. The value range of N depends on the number of dimensions supported by the cloud service. You can call the [ListProductQuotaDimensions](https://help.aliyun.com/document_detail/440553.html) operation to query the supported quota dimensions. The length of the returned array is the maximum value of N.
      shared_ptr<string> key_ {};
      // The value of the quota dimension.
      // 
      //  > You must specify both Dimensions.N.Key and Dimensions.N.Value. The value range of N depends on the number of dimensions supported by the cloud service. You can call the [ListProductQuotaDimensions](https://help.aliyun.com/document_detail/440553.html) operation to query the supported quota dimensions. The length of the returned array is the maximum value of N.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->alarmName_ == nullptr
        && this->originalContext_ == nullptr && this->productCode_ == nullptr && this->quotaActionCode_ == nullptr && this->quotaDimensions_ == nullptr && this->threshold_ == nullptr
        && this->thresholdPercent_ == nullptr && this->thresholdType_ == nullptr && this->webHook_ == nullptr; };
    // alarmName Field Functions 
    bool hasAlarmName() const { return this->alarmName_ != nullptr;};
    void deleteAlarmName() { this->alarmName_ = nullptr;};
    inline string getAlarmName() const { DARABONBA_PTR_GET_DEFAULT(alarmName_, "") };
    inline CreateQuotaAlarmRequest& setAlarmName(string alarmName) { DARABONBA_PTR_SET_VALUE(alarmName_, alarmName) };


    // originalContext Field Functions 
    bool hasOriginalContext() const { return this->originalContext_ != nullptr;};
    void deleteOriginalContext() { this->originalContext_ = nullptr;};
    inline string getOriginalContext() const { DARABONBA_PTR_GET_DEFAULT(originalContext_, "") };
    inline CreateQuotaAlarmRequest& setOriginalContext(string originalContext) { DARABONBA_PTR_SET_VALUE(originalContext_, originalContext) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateQuotaAlarmRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline CreateQuotaAlarmRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaDimensions Field Functions 
    bool hasQuotaDimensions() const { return this->quotaDimensions_ != nullptr;};
    void deleteQuotaDimensions() { this->quotaDimensions_ = nullptr;};
    inline const vector<CreateQuotaAlarmRequest::QuotaDimensions> & getQuotaDimensions() const { DARABONBA_PTR_GET_CONST(quotaDimensions_, vector<CreateQuotaAlarmRequest::QuotaDimensions>) };
    inline vector<CreateQuotaAlarmRequest::QuotaDimensions> getQuotaDimensions() { DARABONBA_PTR_GET(quotaDimensions_, vector<CreateQuotaAlarmRequest::QuotaDimensions>) };
    inline CreateQuotaAlarmRequest& setQuotaDimensions(const vector<CreateQuotaAlarmRequest::QuotaDimensions> & quotaDimensions) { DARABONBA_PTR_SET_VALUE(quotaDimensions_, quotaDimensions) };
    inline CreateQuotaAlarmRequest& setQuotaDimensions(vector<CreateQuotaAlarmRequest::QuotaDimensions> && quotaDimensions) { DARABONBA_PTR_SET_RVALUE(quotaDimensions_, quotaDimensions) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline CreateQuotaAlarmRequest& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // thresholdPercent Field Functions 
    bool hasThresholdPercent() const { return this->thresholdPercent_ != nullptr;};
    void deleteThresholdPercent() { this->thresholdPercent_ = nullptr;};
    inline float getThresholdPercent() const { DARABONBA_PTR_GET_DEFAULT(thresholdPercent_, 0.0) };
    inline CreateQuotaAlarmRequest& setThresholdPercent(float thresholdPercent) { DARABONBA_PTR_SET_VALUE(thresholdPercent_, thresholdPercent) };


    // thresholdType Field Functions 
    bool hasThresholdType() const { return this->thresholdType_ != nullptr;};
    void deleteThresholdType() { this->thresholdType_ = nullptr;};
    inline string getThresholdType() const { DARABONBA_PTR_GET_DEFAULT(thresholdType_, "") };
    inline CreateQuotaAlarmRequest& setThresholdType(string thresholdType) { DARABONBA_PTR_SET_VALUE(thresholdType_, thresholdType) };


    // webHook Field Functions 
    bool hasWebHook() const { return this->webHook_ != nullptr;};
    void deleteWebHook() { this->webHook_ = nullptr;};
    inline string getWebHook() const { DARABONBA_PTR_GET_DEFAULT(webHook_, "") };
    inline CreateQuotaAlarmRequest& setWebHook(string webHook) { DARABONBA_PTR_SET_VALUE(webHook_, webHook) };


  protected:
    // The name of the quota alert rule.
    // 
    // This parameter is required.
    shared_ptr<string> alarmName_ {};
    // The original context information.
    shared_ptr<string> originalContext_ {};
    // The abbreviation of the cloud service.
    // 
    // > For more information about how to obtain the abbreviation of a cloud service, see ProductCode in [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html).
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The quota ID.
    // 
    // > For more information about how to obtain the quota ID of a cloud service, see QuotaActionCode in [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html).
    // 
    // This parameter is required.
    shared_ptr<string> quotaActionCode_ {};
    // The quota dimensions.
    // The dimensions are properties of a quota item. A quota item is uniquely identified by Dimensions and QuotaActionCode.
    // > Some dimensions are required for specific cloud services. You can call the [ListProductQuotaDimensions](https://help.aliyun.com/document_detail/440553.html) operation to query the supported quota dimensions of a cloud service. The Requisite response parameter indicates whether a dimension is required.
    shared_ptr<vector<CreateQuotaAlarmRequest::QuotaDimensions>> quotaDimensions_ {};
    // The numeric value of the quota alert threshold. Valid values:
    // 
    // - If ThresholdType is set to used, you receive an alert notification when the used quota is greater than or equal to the specified value. The quota alert threshold must be greater than the used quota.
    // 
    // - If ThresholdType is set to usable, you receive an alert notification when the available quota is less than or equal to the specified value. The quota alert threshold must be less than the available quota.
    // 
    // > You must specify either this parameter or ThresholdPercent.
    shared_ptr<float> threshold_ {};
    // The percentage of the quota alert threshold. Valid values:
    // 
    // - If ThresholdType is set to used, you receive an alert notification when the used quota is greater than or equal to the specified percentage. Valid values: (50%, 100%].
    // 
    // - If ThresholdType is set to usable, you receive an alert notification when the available quota is less than or equal to the specified percentage. Valid values: (0%, 50%].
    // 
    // > You must specify either this parameter or Threshold.
    shared_ptr<float> thresholdPercent_ {};
    // The quota alert type. Valid values:
    // 
    // - used: alerts on the used quota. This is the default value.
    // - usable: alerts on the remaining available quota.
    shared_ptr<string> thresholdType_ {};
    // The public URL to which Quota Center sends alert notifications by using HTTP POST requests.
    shared_ptr<string> webHook_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
