// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKLEVELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKLEVELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeRiskLevelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskLevelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskLevelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeRiskLevelsRequest() = default ;
    DescribeRiskLevelsRequest(const DescribeRiskLevelsRequest &) = default ;
    DescribeRiskLevelsRequest(DescribeRiskLevelsRequest &&) = default ;
    DescribeRiskLevelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskLevelsRequest() = default ;
    DescribeRiskLevelsRequest& operator=(const DescribeRiskLevelsRequest &) = default ;
    DescribeRiskLevelsRequest& operator=(DescribeRiskLevelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureType_ != nullptr
        && this->lang_ != nullptr && this->templateId_ != nullptr; };
    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t featureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline DescribeRiskLevelsRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRiskLevelsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeRiskLevelsRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<int32_t> featureType_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   zh_cn: Chinese (default)
    // *   en_us: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the industry-specific rule template.
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
