// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATEALLRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATEALLRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeTemplateAllRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplateAllRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplateAllRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeTemplateAllRulesRequest() = default ;
    DescribeTemplateAllRulesRequest(const DescribeTemplateAllRulesRequest &) = default ;
    DescribeTemplateAllRulesRequest(DescribeTemplateAllRulesRequest &&) = default ;
    DescribeTemplateAllRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplateAllRulesRequest() = default ;
    DescribeTemplateAllRulesRequest& operator=(const DescribeTemplateAllRulesRequest &) = default ;
    DescribeTemplateAllRulesRequest& operator=(DescribeTemplateAllRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureType_ == nullptr
        && this->lang_ == nullptr && this->templateId_ == nullptr; };
    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline DescribeTemplateAllRulesRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeTemplateAllRulesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeTemplateAllRulesRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // This parameter is deprecated.
    shared_ptr<int32_t> featureType_ {};
    // The language type for the request and response, default is **zh_cn**. Values:
    // - **zh_cn**: Chinese.
    // - **en_us**: English.
    shared_ptr<string> lang_ {};
    // Industry template ID.
    // 
    // > You can obtain the industry template ID by calling [DescribeCategoryTemplateList](https://help.aliyun.com/document_detail/2399296.html). If this parameter is not provided, the model list of the primary template will be returned by default.
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
