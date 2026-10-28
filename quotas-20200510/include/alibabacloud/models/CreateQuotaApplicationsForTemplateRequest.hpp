// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUOTAAPPLICATIONSFORTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUOTAAPPLICATIONSFORTEMPLATEREQUEST_HPP_
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
  class CreateQuotaApplicationsForTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQuotaApplicationsForTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunUids, aliyunUids_);
      DARABONBA_PTR_TO_JSON(DesireValue, desireValue_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(EnvLanguage, envLanguage_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQuotaApplicationsForTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunUids, aliyunUids_);
      DARABONBA_PTR_FROM_JSON(DesireValue, desireValue_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(EnvLanguage, envLanguage_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    CreateQuotaApplicationsForTemplateRequest() = default ;
    CreateQuotaApplicationsForTemplateRequest(const CreateQuotaApplicationsForTemplateRequest &) = default ;
    CreateQuotaApplicationsForTemplateRequest(CreateQuotaApplicationsForTemplateRequest &&) = default ;
    CreateQuotaApplicationsForTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQuotaApplicationsForTemplateRequest() = default ;
    CreateQuotaApplicationsForTemplateRequest& operator=(const CreateQuotaApplicationsForTemplateRequest &) = default ;
    CreateQuotaApplicationsForTemplateRequest& operator=(CreateQuotaApplicationsForTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Dimensions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Dimensions& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Dimensions& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Dimensions() = default ;
      Dimensions(const Dimensions &) = default ;
      Dimensions(Dimensions &&) = default ;
      Dimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Dimensions() = default ;
      Dimensions& operator=(const Dimensions &) = default ;
      Dimensions& operator=(Dimensions &&) = default ;
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
      inline Dimensions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Dimensions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the quota dimension.
      // 
      // > - The value range of N depends on the number of dimensions supported by the cloud service.
      // > - When `ProductCode` is set to `ecs`, `ecs-spec`, `actiontrail`, or `ess`, you must specify both the key and the value of the quota dimension.
      shared_ptr<string> key_ {};
      // The value of the quota dimension.
      // 
      // > - The value range of N depends on the number of dimensions supported by the cloud service.
      // > - When `ProductCode` is set to `ecs`, `ecs-spec`, `actiontrail`, or `ess`, you must specify both the key and the value of the quota dimension.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->aliyunUids_ == nullptr
        && this->desireValue_ == nullptr && this->dimensions_ == nullptr && this->effectiveTime_ == nullptr && this->envLanguage_ == nullptr && this->expireTime_ == nullptr
        && this->noticeType_ == nullptr && this->productCode_ == nullptr && this->quotaActionCode_ == nullptr && this->quotaCategory_ == nullptr && this->reason_ == nullptr; };
    // aliyunUids Field Functions 
    bool hasAliyunUids() const { return this->aliyunUids_ != nullptr;};
    void deleteAliyunUids() { this->aliyunUids_ = nullptr;};
    inline const vector<string> & getAliyunUids() const { DARABONBA_PTR_GET_CONST(aliyunUids_, vector<string>) };
    inline vector<string> getAliyunUids() { DARABONBA_PTR_GET(aliyunUids_, vector<string>) };
    inline CreateQuotaApplicationsForTemplateRequest& setAliyunUids(const vector<string> & aliyunUids) { DARABONBA_PTR_SET_VALUE(aliyunUids_, aliyunUids) };
    inline CreateQuotaApplicationsForTemplateRequest& setAliyunUids(vector<string> && aliyunUids) { DARABONBA_PTR_SET_RVALUE(aliyunUids_, aliyunUids) };


    // desireValue Field Functions 
    bool hasDesireValue() const { return this->desireValue_ != nullptr;};
    void deleteDesireValue() { this->desireValue_ = nullptr;};
    inline double getDesireValue() const { DARABONBA_PTR_GET_DEFAULT(desireValue_, 0.0) };
    inline CreateQuotaApplicationsForTemplateRequest& setDesireValue(double desireValue) { DARABONBA_PTR_SET_VALUE(desireValue_, desireValue) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<CreateQuotaApplicationsForTemplateRequest::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<CreateQuotaApplicationsForTemplateRequest::Dimensions>) };
    inline vector<CreateQuotaApplicationsForTemplateRequest::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<CreateQuotaApplicationsForTemplateRequest::Dimensions>) };
    inline CreateQuotaApplicationsForTemplateRequest& setDimensions(const vector<CreateQuotaApplicationsForTemplateRequest::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline CreateQuotaApplicationsForTemplateRequest& setDimensions(vector<CreateQuotaApplicationsForTemplateRequest::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline CreateQuotaApplicationsForTemplateRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // envLanguage Field Functions 
    bool hasEnvLanguage() const { return this->envLanguage_ != nullptr;};
    void deleteEnvLanguage() { this->envLanguage_ = nullptr;};
    inline string getEnvLanguage() const { DARABONBA_PTR_GET_DEFAULT(envLanguage_, "") };
    inline CreateQuotaApplicationsForTemplateRequest& setEnvLanguage(string envLanguage) { DARABONBA_PTR_SET_VALUE(envLanguage_, envLanguage) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline CreateQuotaApplicationsForTemplateRequest& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline int32_t getNoticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, 0) };
    inline CreateQuotaApplicationsForTemplateRequest& setNoticeType(int32_t noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateQuotaApplicationsForTemplateRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline CreateQuotaApplicationsForTemplateRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string getQuotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline CreateQuotaApplicationsForTemplateRequest& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CreateQuotaApplicationsForTemplateRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // The list of Alibaba Cloud accounts that belong to the resource directory members for which you want to apply for quotas.
    // 
    // > You can apply for quota increases for a maximum of 50 members at a time. For more information about the members of a resource directory, see [ListAccounts](https://help.aliyun.com/document_detail/604207.html).
    // 
    // This parameter is required.
    shared_ptr<vector<string>> aliyunUids_ {};
    // The requested quota value.
    // 
    // > - Set the requested quota value based on the `TotalUsage` (quota usage) and `ApplicableRange` (applicable range for quota application) of the target quota in [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html).
    // > - Quota applications are reviewed and approved by the technical support team of each cloud service. To increase the approval rate, specify a reasonable requested value and provide a detailed reason when you submit a quota application.
    // 
    // This parameter is required.
    shared_ptr<double> desireValue_ {};
    // The quota dimensions.
    shared_ptr<vector<CreateQuotaApplicationsForTemplateRequest::Dimensions>> dimensions_ {};
    // The UTC time when the quota takes effect. This parameter applies only to privileges (WhiteListLabel).
    //  
    // > If you do not specify an effective period for the current account, the commit time is used by default.
    shared_ptr<string> effectiveTime_ {};
    // The language of the notification for the quota application result. Valid values:
    // 
    // - zh (default): Chinese.
    // - en: English.
    shared_ptr<string> envLanguage_ {};
    // The UTC time when the quota expires. This parameter applies only to privileges (WhiteListLabel). 
    // 
    // > If you do not specify an expiration time for the current account, the expiration time is set to 99 years after the effective period of the current quota.
    shared_ptr<string> expireTime_ {};
    // Specifies whether to send notifications for quota application results. Valid values:
    // 
    // - 0 (default): no.
    // - 3: yes.
    shared_ptr<int32_t> noticeType_ {};
    // The abbreviated name of the cloud service.
    // 
    // > For more information about how to obtain the abbreviated name of a cloud service, see `ProductCode` in [ListProducts](https://help.aliyun.com/document_detail/440555.html).
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The quota ID.
    // 
    // > For more information about how to obtain the quota ID of a cloud service, see `QuotaActionCode` in [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html).
    // 
    // This parameter is required.
    shared_ptr<string> quotaActionCode_ {};
    // The quota type. Valid values:
    // - CommonQuota: general quota.
    // - FlowControl: API rate limit.
    // - WhiteListLabel: privilege.
    // 
    // This parameter is required.
    shared_ptr<string> quotaCategory_ {};
    // The reason for the quota application.
    // 
    // > Quota applications are reviewed and approved by the technical support team of each cloud service. To increase the approval rate, specify a reasonable requested value and provide a detailed reason when you submit a quota application.
    // 
    // This parameter is required.
    shared_ptr<string> reason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
