// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTEMPLATEQUOTAITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTEMPLATEQUOTAITEMREQUEST_HPP_
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
      // > - The value of N depends on the number of dimensions that are supported by the Alibaba Cloud service.
      // >
      // > - If you set `ProductCode` to a value such as `ecs`, `ecs-spec`, `actiontrail`, or `ess`, you must specify both the key and value of the quota dimension.
      shared_ptr<string> key_ {};
      // The value of the quota dimension.
      // 
      // > - The value of N depends on the number of dimensions that are supported by the Alibaba Cloud service.
      // >
      // > - If you set `ProductCode` to a value such as `ecs`, `ecs-spec`, `actiontrail`, or `ess`, you must specify both the key and value of the quota dimension.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->desireValue_ == nullptr
        && this->dimensions_ == nullptr && this->effectiveTime_ == nullptr && this->envLanguage_ == nullptr && this->expireTime_ == nullptr && this->id_ == nullptr
        && this->noticeType_ == nullptr && this->productCode_ == nullptr && this->quotaActionCode_ == nullptr && this->quotaCategory_ == nullptr; };
    // desireValue Field Functions 
    bool hasDesireValue() const { return this->desireValue_ != nullptr;};
    void deleteDesireValue() { this->desireValue_ = nullptr;};
    inline float getDesireValue() const { DARABONBA_PTR_GET_DEFAULT(desireValue_, 0.0) };
    inline ModifyTemplateQuotaItemRequest& setDesireValue(float desireValue) { DARABONBA_PTR_SET_VALUE(desireValue_, desireValue) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<ModifyTemplateQuotaItemRequest::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<ModifyTemplateQuotaItemRequest::Dimensions>) };
    inline vector<ModifyTemplateQuotaItemRequest::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<ModifyTemplateQuotaItemRequest::Dimensions>) };
    inline ModifyTemplateQuotaItemRequest& setDimensions(const vector<ModifyTemplateQuotaItemRequest::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline ModifyTemplateQuotaItemRequest& setDimensions(vector<ModifyTemplateQuotaItemRequest::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyTemplateQuotaItemRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // envLanguage Field Functions 
    bool hasEnvLanguage() const { return this->envLanguage_ != nullptr;};
    void deleteEnvLanguage() { this->envLanguage_ = nullptr;};
    inline string getEnvLanguage() const { DARABONBA_PTR_GET_DEFAULT(envLanguage_, "") };
    inline ModifyTemplateQuotaItemRequest& setEnvLanguage(string envLanguage) { DARABONBA_PTR_SET_VALUE(envLanguage_, envLanguage) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ModifyTemplateQuotaItemRequest& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyTemplateQuotaItemRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline int64_t getNoticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, 0L) };
    inline ModifyTemplateQuotaItemRequest& setNoticeType(int64_t noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ModifyTemplateQuotaItemRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ModifyTemplateQuotaItemRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string getQuotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline ModifyTemplateQuotaItemRequest& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


  protected:
    // The value of the quota that you want to apply for.
    // 
    // > - You can set this parameter based on the `TotalUsage` (quota usage) and `ApplicableRange` (the range of values for the quota) parameters of the target quota in [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html).
    // >
    // > - The quota application is reviewed by the technical support of each Alibaba Cloud service. To increase the success rate of your application, you must specify a reasonable quota value and a detailed reason when you submit the application.
    shared_ptr<float> desireValue_ {};
    // The quota dimensions.
    shared_ptr<vector<ModifyTemplateQuotaItemRequest::Dimensions>> dimensions_ {};
    // The UTC time when the quota takes effect.
    // This parameter is applicable only to privileges (WhiteListLabel).
    // 
    // > If you do not specify this parameter, the quota takes effect immediately.
    shared_ptr<string> effectiveTime_ {};
    // The language of the notification for a quota alert. Valid values:
    // 
    // - zh (default): Chinese.
    // 
    // - en: English.
    shared_ptr<string> envLanguage_ {};
    // The UTC time when the quota expires.
    // This parameter is applicable only to privileges (WhiteListLabel).
    // 
    // > If you do not specify this parameter, the quota does not expire.
    shared_ptr<string> expireTime_ {};
    // The ID of the quota template.
    // For more information about how to obtain the ID of a quota template, see [ListQuotaApplicationTemplates](https://help.aliyun.com/document_detail/450403.html).
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // Specifies whether to send a notification about the application result. Valid values:
    // 
    // - 0 (default): no.
    // 
    // - 3: yes.
    shared_ptr<int64_t> noticeType_ {};
    // The abbreviation of the Alibaba Cloud service name.
    // 
    // > For more information about how to obtain the abbreviation of an Alibaba Cloud service name, see the `ProductCode` parameter in [ListProducts](https://help.aliyun.com/document_detail/440555.html).
    shared_ptr<string> productCode_ {};
    // The quota ID.
    // 
    // > For more information about how to obtain the quota ID of an Alibaba Cloud service, see the `QuotaActionCode` parameter in [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html).
    shared_ptr<string> quotaActionCode_ {};
    // The quota type. Valid values:
    // 
    // - CommonQuota (default): general quota.
    // 
    // - WhiteListLabel: privilege.
    // 
    // - FlowControl: API rate limit.
    shared_ptr<string> quotaCategory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
