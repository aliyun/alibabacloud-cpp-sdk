// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTEMPLATEQUOTAITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTEMPLATEQUOTAITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyTemplateQuotaItemRequestDimensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ModifyTemplateQuotaItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTemplateQuotaItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesireValue, desireValue_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(EnvLanguage, envLanguage_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTemplateQuotaItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesireValue, desireValue_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(EnvLanguage, envLanguage_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
    };
    ModifyTemplateQuotaItemRequest() = default ;
    ModifyTemplateQuotaItemRequest(const ModifyTemplateQuotaItemRequest &) = default ;
    ModifyTemplateQuotaItemRequest(ModifyTemplateQuotaItemRequest &&) = default ;
    ModifyTemplateQuotaItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTemplateQuotaItemRequest() = default ;
    ModifyTemplateQuotaItemRequest& operator=(const ModifyTemplateQuotaItemRequest &) = default ;
    ModifyTemplateQuotaItemRequest& operator=(ModifyTemplateQuotaItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desireValue_ != nullptr
        && this->dimensions_ != nullptr && this->effectiveTime_ != nullptr && this->envLanguage_ != nullptr && this->expireTime_ != nullptr && this->id_ != nullptr
        && this->noticeType_ != nullptr && this->productCode_ != nullptr && this->quotaActionCode_ != nullptr && this->quotaCategory_ != nullptr; };
    // desireValue Field Functions 
    bool hasDesireValue() const { return this->desireValue_ != nullptr;};
    void deleteDesireValue() { this->desireValue_ = nullptr;};
    inline float desireValue() const { DARABONBA_PTR_GET_DEFAULT(desireValue_, 0.0) };
    inline ModifyTemplateQuotaItemRequest& setDesireValue(float desireValue) { DARABONBA_PTR_SET_VALUE(desireValue_, desireValue) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<ModifyTemplateQuotaItemRequestDimensions> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<ModifyTemplateQuotaItemRequestDimensions>) };
    inline vector<ModifyTemplateQuotaItemRequestDimensions> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<ModifyTemplateQuotaItemRequestDimensions>) };
    inline ModifyTemplateQuotaItemRequest& setDimensions(const vector<ModifyTemplateQuotaItemRequestDimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline ModifyTemplateQuotaItemRequest& setDimensions(vector<ModifyTemplateQuotaItemRequestDimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyTemplateQuotaItemRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // envLanguage Field Functions 
    bool hasEnvLanguage() const { return this->envLanguage_ != nullptr;};
    void deleteEnvLanguage() { this->envLanguage_ = nullptr;};
    inline string envLanguage() const { DARABONBA_PTR_GET_DEFAULT(envLanguage_, "") };
    inline ModifyTemplateQuotaItemRequest& setEnvLanguage(string envLanguage) { DARABONBA_PTR_SET_VALUE(envLanguage_, envLanguage) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ModifyTemplateQuotaItemRequest& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyTemplateQuotaItemRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline int64_t noticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, 0L) };
    inline ModifyTemplateQuotaItemRequest& setNoticeType(int64_t noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ModifyTemplateQuotaItemRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ModifyTemplateQuotaItemRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string quotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline ModifyTemplateQuotaItemRequest& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


  protected:
    std::shared_ptr<float> desireValue_ = nullptr;
    std::shared_ptr<vector<ModifyTemplateQuotaItemRequestDimensions>> dimensions_ = nullptr;
    std::shared_ptr<string> effectiveTime_ = nullptr;
    std::shared_ptr<string> envLanguage_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> noticeType_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    std::shared_ptr<string> quotaCategory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
