// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUOTAAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUOTAAPPLICATIONREQUEST_HPP_
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
  class CreateQuotaApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQuotaApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditMode, auditMode_);
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
    friend void from_json(const Darabonba::Json& j, CreateQuotaApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditMode, auditMode_);
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
    CreateQuotaApplicationRequest() = default ;
    CreateQuotaApplicationRequest(const CreateQuotaApplicationRequest &) = default ;
    CreateQuotaApplicationRequest(CreateQuotaApplicationRequest &&) = default ;
    CreateQuotaApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQuotaApplicationRequest() = default ;
    CreateQuotaApplicationRequest& operator=(const CreateQuotaApplicationRequest &) = default ;
    CreateQuotaApplicationRequest& operator=(CreateQuotaApplicationRequest &&) = default ;
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
      // > `Dimensions.N.Key` and `Dimensions.N.Value` must be specified together. The valid values of N depend on the number of dimensions supported by the cloud service. You can call [ListProductQuotaDimensions](~~ListProductQuotaDimensions~~) to query the quota dimensions supported by a cloud service. The length of the returned array is the value of N.
      shared_ptr<string> key_ {};
      // The value of the quota dimension.
      // 
      // > `Dimensions.N.Key` and `Dimensions.N.Value` must be specified together. The valid values of N depend on the number of dimensions supported by the cloud service. You can call [ListProductQuotaDimensions](~~ListProductQuotaDimensions~~) to query the quota dimensions supported by a cloud service. The length of the returned array is the value of N.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->auditMode_ == nullptr
        && this->desireValue_ == nullptr && this->dimensions_ == nullptr && this->effectiveTime_ == nullptr && this->envLanguage_ == nullptr && this->expireTime_ == nullptr
        && this->noticeType_ == nullptr && this->productCode_ == nullptr && this->quotaActionCode_ == nullptr && this->quotaCategory_ == nullptr && this->reason_ == nullptr; };
    // auditMode Field Functions 
    bool hasAuditMode() const { return this->auditMode_ != nullptr;};
    void deleteAuditMode() { this->auditMode_ = nullptr;};
    inline string getAuditMode() const { DARABONBA_PTR_GET_DEFAULT(auditMode_, "") };
    inline CreateQuotaApplicationRequest& setAuditMode(string auditMode) { DARABONBA_PTR_SET_VALUE(auditMode_, auditMode) };


    // desireValue Field Functions 
    bool hasDesireValue() const { return this->desireValue_ != nullptr;};
    void deleteDesireValue() { this->desireValue_ = nullptr;};
    inline float getDesireValue() const { DARABONBA_PTR_GET_DEFAULT(desireValue_, 0.0) };
    inline CreateQuotaApplicationRequest& setDesireValue(float desireValue) { DARABONBA_PTR_SET_VALUE(desireValue_, desireValue) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<CreateQuotaApplicationRequest::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<CreateQuotaApplicationRequest::Dimensions>) };
    inline vector<CreateQuotaApplicationRequest::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<CreateQuotaApplicationRequest::Dimensions>) };
    inline CreateQuotaApplicationRequest& setDimensions(const vector<CreateQuotaApplicationRequest::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline CreateQuotaApplicationRequest& setDimensions(vector<CreateQuotaApplicationRequest::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline CreateQuotaApplicationRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // envLanguage Field Functions 
    bool hasEnvLanguage() const { return this->envLanguage_ != nullptr;};
    void deleteEnvLanguage() { this->envLanguage_ = nullptr;};
    inline string getEnvLanguage() const { DARABONBA_PTR_GET_DEFAULT(envLanguage_, "") };
    inline CreateQuotaApplicationRequest& setEnvLanguage(string envLanguage) { DARABONBA_PTR_SET_VALUE(envLanguage_, envLanguage) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline CreateQuotaApplicationRequest& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline int32_t getNoticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, 0) };
    inline CreateQuotaApplicationRequest& setNoticeType(int32_t noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateQuotaApplicationRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline CreateQuotaApplicationRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string getQuotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline CreateQuotaApplicationRequest& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CreateQuotaApplicationRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // >Notice: This parameter is deprecated and is not recommended.
    // 
    // The quota review mode.
    shared_ptr<string> auditMode_ {};
    // The requested quota value.
    // 
    // > - Set the requested quota value based on the `TotalUsage` (quota usage) and `ApplicableRange` (applicable range of the quota) of the target quota in [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html).
    // > - Quota increase requests are reviewed by the technical support of each cloud service. To increase the chances of approval, provide a reasonable requested value and a detailed reason when you submit the request.
    // 
    // This parameter is required.
    shared_ptr<float> desireValue_ {};
    // The quota dimensions.
    // The dimensions are attributes of the quota. The combination of dimensions (Dimensions) and quota ID (QuotaActionCode) uniquely identifies a quota.
    // > Some cloud services require dimensions. You can call [ListProductQuotaDimensions](~~ListProductQuotaDimensions~~) to query the quota dimensions supported by a cloud service. The `Requisite` response parameter indicates whether a dimension is required.
    shared_ptr<vector<CreateQuotaApplicationRequest::Dimensions>> dimensions_ {};
    // The UTC time when the quota takes effect.
    // This parameter is applicable only to privileges (WhiteListLabel). 
    // 
    // > If you do not specify an effective period, the default value is 99 years from the start time of the current quota.
    shared_ptr<string> effectiveTime_ {};
    // The language of the quota alert notification.
    shared_ptr<string> envLanguage_ {};
    // The UTC time when the quota expires.
    // This parameter is applicable only to privileges (WhiteListLabel). 
    // 
    // > If you do not specify an expiration time, the default value is the submission time.
    shared_ptr<string> expireTime_ {};
    // Specifies whether to send a notification about the request result. Valid values:
    // 
    // - 0 (default): does not send a notification.
    // - 3: sends a notification.
    shared_ptr<int32_t> noticeType_ {};
    // The abbreviation of the cloud service name.
    // 
    // > For information about how to obtain the abbreviation of a cloud service name, see `ProductCode` in [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html).
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The quota ID.
    // 
    // > For information about how to obtain the quota ID of a cloud service, see `QuotaActionCode` in [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html).
    // 
    // This parameter is required.
    shared_ptr<string> quotaActionCode_ {};
    // The quota type.
    // 
    // Default value: CommonQuota.
    shared_ptr<string> quotaCategory_ {};
    // The reason for the quota increase request.
    // 
    // > Quota increase requests are reviewed by the technical support of each cloud service. To increase the chances of approval, provide a reasonable requested value and a detailed reason when you submit the request.
    // 
    // This parameter is required.
    shared_ptr<string> reason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
