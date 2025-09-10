// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUOTAAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUOTAAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateQuotaApplicationRequestDimensions.hpp>
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
    virtual bool empty() const override { this->auditMode_ != nullptr
        && this->desireValue_ != nullptr && this->dimensions_ != nullptr && this->effectiveTime_ != nullptr && this->envLanguage_ != nullptr && this->expireTime_ != nullptr
        && this->noticeType_ != nullptr && this->productCode_ != nullptr && this->quotaActionCode_ != nullptr && this->quotaCategory_ != nullptr && this->reason_ != nullptr; };
    // auditMode Field Functions 
    bool hasAuditMode() const { return this->auditMode_ != nullptr;};
    void deleteAuditMode() { this->auditMode_ = nullptr;};
    inline string auditMode() const { DARABONBA_PTR_GET_DEFAULT(auditMode_, "") };
    inline CreateQuotaApplicationRequest& setAuditMode(string auditMode) { DARABONBA_PTR_SET_VALUE(auditMode_, auditMode) };


    // desireValue Field Functions 
    bool hasDesireValue() const { return this->desireValue_ != nullptr;};
    void deleteDesireValue() { this->desireValue_ = nullptr;};
    inline float desireValue() const { DARABONBA_PTR_GET_DEFAULT(desireValue_, 0.0) };
    inline CreateQuotaApplicationRequest& setDesireValue(float desireValue) { DARABONBA_PTR_SET_VALUE(desireValue_, desireValue) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<CreateQuotaApplicationRequestDimensions> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<CreateQuotaApplicationRequestDimensions>) };
    inline vector<CreateQuotaApplicationRequestDimensions> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<CreateQuotaApplicationRequestDimensions>) };
    inline CreateQuotaApplicationRequest& setDimensions(const vector<CreateQuotaApplicationRequestDimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline CreateQuotaApplicationRequest& setDimensions(vector<CreateQuotaApplicationRequestDimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline CreateQuotaApplicationRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // envLanguage Field Functions 
    bool hasEnvLanguage() const { return this->envLanguage_ != nullptr;};
    void deleteEnvLanguage() { this->envLanguage_ = nullptr;};
    inline string envLanguage() const { DARABONBA_PTR_GET_DEFAULT(envLanguage_, "") };
    inline CreateQuotaApplicationRequest& setEnvLanguage(string envLanguage) { DARABONBA_PTR_SET_VALUE(envLanguage_, envLanguage) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline CreateQuotaApplicationRequest& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline int32_t noticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, 0) };
    inline CreateQuotaApplicationRequest& setNoticeType(int32_t noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateQuotaApplicationRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline CreateQuotaApplicationRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string quotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline CreateQuotaApplicationRequest& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CreateQuotaApplicationRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // >  This parameter is deprecated and is not recommended.
    // 
    // The mode in which you want the application to be reviewed.
    // 
    // Valid values: 
    // *   Async
    // *   Sync
    std::shared_ptr<string> auditMode_ = nullptr;
    // The requested value of the quota.
    // 
    // > 
    // 
    // *   You can specify the DesireValue parameter based on the values of the `TotalUsage` and `ApplicableRange` parameters that are returned by the [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html) operation.
    // 
    // *   Applications are reviewed by the technical support team of each Alibaba Cloud service. To increase the success rate of your application, you must specify a reasonable quota value and detailed reasons when you submit an application to increase the value of the quota.
    // 
    // This parameter is required.
    std::shared_ptr<float> desireValue_ = nullptr;
    // The quota dimensions. A quota item is uniquely determined by the values of Dimensions and QuotaActionCode.
    // 
    // >  Some dimensions are required. You can call the [ListProductQuotaDimensions](~~ListProductQuotaDimensions~~) operation to query the quota dimensions that are supported by an Alibaba Cloud service. The value of `Requisite` in the response indicates whether a dimension is required.
    std::shared_ptr<vector<CreateQuotaApplicationRequestDimensions>> dimensions_ = nullptr;
    // The end time of the validity period of the quota. Specify the value in UTC. This parameter is valid only if you set the QuotaCategory parameter to WhiteListLabel.
    // 
    // >  If you do not specify an end time, the default end time is 99 years after the quota application is submitted.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The language of the quota alert notification.
    // 
    // Valid values:
    // 
    // *   en: English
    // *   zh: Chinese
    std::shared_ptr<string> envLanguage_ = nullptr;
    // The start time of the validity period of the quota. Specify the value in UTC. This parameter is valid only if you set the QuotaCategory parameter to WhiteListLabel.
    // 
    // >  If you do not specify a start time, the default start time is the time when the quota application is submitted.
    std::shared_ptr<string> expireTime_ = nullptr;
    // Specifies whether to send a notification about the application result. Valid values:
    // 
    // *   0 (default): no
    // *   3: sends a notification.
    std::shared_ptr<int32_t> noticeType_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    // 
    // >  To query the abbreviation of an Alibaba Cloud service name, check the `ProductCode` parameter that is described in [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // The quota ID.
    // 
    // >  To query the quota ID of an Alibaba Cloud service, check the `QuotaActionCode` parameter that is described in [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The type of the quota. Valid values:
    // 
    // Default value: CommonQuota.
    // 
    // Valid values:
    // 
    // *   FlowControl: API rate limit
    // *   WhiteListLabel: whitelist quota
    // *   CommonQuota: general quota
    std::shared_ptr<string> quotaCategory_ = nullptr;
    // The reason for the application.
    // 
    // > Applications are reviewed by the technical support team of each Alibaba Cloud service. To increase the success rate of your application, you must specify a reasonable quota value and detailed reasons when you submit an application to increase the value of the quota.
    // 
    // This parameter is required.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
