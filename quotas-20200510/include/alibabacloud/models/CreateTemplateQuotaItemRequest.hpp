// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEQUOTAITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEQUOTAITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTemplateQuotaItemRequestDimensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class CreateTemplateQuotaItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateQuotaItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesireValue, desireValue_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(EnvLanguage, envLanguage_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateQuotaItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesireValue, desireValue_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(EnvLanguage, envLanguage_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
    };
    CreateTemplateQuotaItemRequest() = default ;
    CreateTemplateQuotaItemRequest(const CreateTemplateQuotaItemRequest &) = default ;
    CreateTemplateQuotaItemRequest(CreateTemplateQuotaItemRequest &&) = default ;
    CreateTemplateQuotaItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateQuotaItemRequest() = default ;
    CreateTemplateQuotaItemRequest& operator=(const CreateTemplateQuotaItemRequest &) = default ;
    CreateTemplateQuotaItemRequest& operator=(CreateTemplateQuotaItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desireValue_ != nullptr
        && this->dimensions_ != nullptr && this->effectiveTime_ != nullptr && this->envLanguage_ != nullptr && this->expireTime_ != nullptr && this->noticeType_ != nullptr
        && this->productCode_ != nullptr && this->quotaActionCode_ != nullptr && this->quotaCategory_ != nullptr; };
    // desireValue Field Functions 
    bool hasDesireValue() const { return this->desireValue_ != nullptr;};
    void deleteDesireValue() { this->desireValue_ = nullptr;};
    inline float desireValue() const { DARABONBA_PTR_GET_DEFAULT(desireValue_, 0.0) };
    inline CreateTemplateQuotaItemRequest& setDesireValue(float desireValue) { DARABONBA_PTR_SET_VALUE(desireValue_, desireValue) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<CreateTemplateQuotaItemRequestDimensions> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<CreateTemplateQuotaItemRequestDimensions>) };
    inline vector<CreateTemplateQuotaItemRequestDimensions> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<CreateTemplateQuotaItemRequestDimensions>) };
    inline CreateTemplateQuotaItemRequest& setDimensions(const vector<CreateTemplateQuotaItemRequestDimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline CreateTemplateQuotaItemRequest& setDimensions(vector<CreateTemplateQuotaItemRequestDimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline CreateTemplateQuotaItemRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // envLanguage Field Functions 
    bool hasEnvLanguage() const { return this->envLanguage_ != nullptr;};
    void deleteEnvLanguage() { this->envLanguage_ = nullptr;};
    inline string envLanguage() const { DARABONBA_PTR_GET_DEFAULT(envLanguage_, "") };
    inline CreateTemplateQuotaItemRequest& setEnvLanguage(string envLanguage) { DARABONBA_PTR_SET_VALUE(envLanguage_, envLanguage) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline CreateTemplateQuotaItemRequest& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline int64_t noticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, 0L) };
    inline CreateTemplateQuotaItemRequest& setNoticeType(int64_t noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateTemplateQuotaItemRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline CreateTemplateQuotaItemRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string quotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline CreateTemplateQuotaItemRequest& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


  protected:
    // The requested value of the quota.
    // 
    // > 
    // 
    // *   You can specify DesireValue based on the values of `TotalUsage` and `ApplicableRange` in the response to the [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html) operation.
    // 
    // *   Applications are reviewed by the technical support team for each cloud service. To increase the success rate of your application, specify a reasonable quota value and a detailed reason.
    // 
    // This parameter is required.
    std::shared_ptr<float> desireValue_ = nullptr;
    // The quota dimensions.
    std::shared_ptr<vector<CreateTemplateQuotaItemRequestDimensions>> dimensions_ = nullptr;
    // The start time of the validity period of the quota. Specify the value in UTC. This parameter is valid only if you set the QuotaCategory parameter to WhiteListLabel.
    // 
    // > If you leave this parameter empty, the quota takes effect immediately.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The language of the quota alert notification. Valid values:
    // 
    // *   zh (default value): Chinese
    // *   en: English
    std::shared_ptr<string> envLanguage_ = nullptr;
    // The end time of the validity period of the quota. Specify the value in UTC. This parameter is valid only if you set the QuotaCategory parameter to WhiteListLabel.
    // 
    // > If you leave this parameter empty, no end time is specified.
    std::shared_ptr<string> expireTime_ = nullptr;
    // Specifies whether to send a notification about the application result. Valid values:
    // 
    // *   0 (default value): no
    // *   3: yes
    std::shared_ptr<int64_t> noticeType_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    // 
    // >  To query the abbreviation of an Alibaba Cloud service name, call the [ListProducts](https://help.aliyun.com/document_detail/440555.html) operation and check the value of `ProductCode` in the response.
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // The quota ID.
    // 
    // >  To obtain the quota ID of an Alibaba Cloud service, call the [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html) operation and check the value of `QuotaActionCode` in the response.
    // 
    // This parameter is required.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The quota type. Valid values:
    // 
    // *   CommonQuota: general quota
    // *   WhiteListLabel: privilege
    // *   FlowControl: API rate limit
    std::shared_ptr<string> quotaCategory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
