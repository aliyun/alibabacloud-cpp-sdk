// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONTEMPLATESRESPONSEBODYQUOTAAPPLICATIONTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONTEMPLATESRESPONSEBODYQUOTAAPPLICATIONTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplatesPeriod.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicableRange, applicableRange_);
      DARABONBA_PTR_TO_JSON(ApplicableType, applicableType_);
      DARABONBA_PTR_TO_JSON(DesireValue, desireValue_);
      DARABONBA_ANY_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(EnvLanguage, envLanguage_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
      DARABONBA_PTR_TO_JSON(QuotaDescription, quotaDescription_);
      DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicableRange, applicableRange_);
      DARABONBA_PTR_FROM_JSON(ApplicableType, applicableType_);
      DARABONBA_PTR_FROM_JSON(DesireValue, desireValue_);
      DARABONBA_ANY_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(EnvLanguage, envLanguage_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
      DARABONBA_PTR_FROM_JSON(QuotaDescription, quotaDescription_);
      DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
    };
    ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates() = default ;
    ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates(const ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates &) = default ;
    ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates(ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates &&) = default ;
    ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates() = default ;
    ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& operator=(const ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates &) = default ;
    ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& operator=(ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicableRange_ != nullptr
        && this->applicableType_ != nullptr && this->desireValue_ != nullptr && this->dimensions_ != nullptr && this->effectiveTime_ != nullptr && this->envLanguage_ != nullptr
        && this->expireTime_ != nullptr && this->id_ != nullptr && this->noticeType_ != nullptr && this->period_ != nullptr && this->productCode_ != nullptr
        && this->quotaActionCode_ != nullptr && this->quotaCategory_ != nullptr && this->quotaDescription_ != nullptr && this->quotaName_ != nullptr; };
    // applicableRange Field Functions 
    bool hasApplicableRange() const { return this->applicableRange_ != nullptr;};
    void deleteApplicableRange() { this->applicableRange_ = nullptr;};
    inline const vector<float> & applicableRange() const { DARABONBA_PTR_GET_CONST(applicableRange_, vector<float>) };
    inline vector<float> applicableRange() { DARABONBA_PTR_GET(applicableRange_, vector<float>) };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setApplicableRange(const vector<float> & applicableRange) { DARABONBA_PTR_SET_VALUE(applicableRange_, applicableRange) };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setApplicableRange(vector<float> && applicableRange) { DARABONBA_PTR_SET_RVALUE(applicableRange_, applicableRange) };


    // applicableType Field Functions 
    bool hasApplicableType() const { return this->applicableType_ != nullptr;};
    void deleteApplicableType() { this->applicableType_ = nullptr;};
    inline string applicableType() const { DARABONBA_PTR_GET_DEFAULT(applicableType_, "") };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setApplicableType(string applicableType) { DARABONBA_PTR_SET_VALUE(applicableType_, applicableType) };


    // desireValue Field Functions 
    bool hasDesireValue() const { return this->desireValue_ != nullptr;};
    void deleteDesireValue() { this->desireValue_ = nullptr;};
    inline float desireValue() const { DARABONBA_PTR_GET_DEFAULT(desireValue_, 0.0) };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setDesireValue(float desireValue) { DARABONBA_PTR_SET_VALUE(desireValue_, desireValue) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline     const Darabonba::Json & dimensions() const { DARABONBA_GET(dimensions_) };
    Darabonba::Json & dimensions() { DARABONBA_GET(dimensions_) };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setDimensions(const Darabonba::Json & dimensions) { DARABONBA_SET_VALUE(dimensions_, dimensions) };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setDimensions(Darabonba::Json & dimensions) { DARABONBA_SET_RVALUE(dimensions_, dimensions) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // envLanguage Field Functions 
    bool hasEnvLanguage() const { return this->envLanguage_ != nullptr;};
    void deleteEnvLanguage() { this->envLanguage_ = nullptr;};
    inline string envLanguage() const { DARABONBA_PTR_GET_DEFAULT(envLanguage_, "") };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setEnvLanguage(string envLanguage) { DARABONBA_PTR_SET_VALUE(envLanguage_, envLanguage) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline int32_t noticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, 0) };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setNoticeType(int32_t noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline const Models::ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplatesPeriod & period() const { DARABONBA_PTR_GET_CONST(period_, Models::ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplatesPeriod) };
    inline Models::ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplatesPeriod period() { DARABONBA_PTR_GET(period_, Models::ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplatesPeriod) };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setPeriod(const Models::ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplatesPeriod & period) { DARABONBA_PTR_SET_VALUE(period_, period) };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setPeriod(Models::ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplatesPeriod && period) { DARABONBA_PTR_SET_RVALUE(period_, period) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string quotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


    // quotaDescription Field Functions 
    bool hasQuotaDescription() const { return this->quotaDescription_ != nullptr;};
    void deleteQuotaDescription() { this->quotaDescription_ = nullptr;};
    inline string quotaDescription() const { DARABONBA_PTR_GET_DEFAULT(quotaDescription_, "") };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setQuotaDescription(string quotaDescription) { DARABONBA_PTR_SET_VALUE(quotaDescription_, quotaDescription) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string quotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


  protected:
    // None.
    std::shared_ptr<vector<float>> applicableRange_ = nullptr;
    // The type of the adjustable value. Valid values:
    // 
    // *   continuous
    // *   discontinuous
    std::shared_ptr<string> applicableType_ = nullptr;
    // The requested value of the quota.
    std::shared_ptr<float> desireValue_ = nullptr;
    // The quota dimensions.
    // 
    // Format: {"regionId":"Region"}.
    Darabonba::Json dimensions_ = nullptr;
    // The start time of the validity period of the quota. The value is displayed in UTC.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The language of the quota alert notification. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> envLanguage_ = nullptr;
    // The end time of the validity period of the quota. The value is displayed in UTC.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The ID of the quota template.
    std::shared_ptr<string> id_ = nullptr;
    // Indicates whether Quota Center sends a notification about the application result. Valid values:
    // 
    // *   0: no
    // *   3: yes
    std::shared_ptr<int32_t> noticeType_ = nullptr;
    // The calculation cycle of the quota.
    std::shared_ptr<Models::ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplatesPeriod> period_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the quota.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The type of the quota. Valid values:
    // 
    // *   CommonQuota: general quota
    // *   FlowControl: API rate limit
    // *   WhiteListLabel: privilege
    std::shared_ptr<string> quotaCategory_ = nullptr;
    // The description of the quota.
    std::shared_ptr<string> quotaDescription_ = nullptr;
    // The name of the quota.
    std::shared_ptr<string> quotaName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
