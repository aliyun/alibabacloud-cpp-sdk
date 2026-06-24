// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECDATAMASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECDATAMASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class ExecDatamaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecDatamaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecDatamaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    ExecDatamaskRequest() = default ;
    ExecDatamaskRequest(const ExecDatamaskRequest &) = default ;
    ExecDatamaskRequest(ExecDatamaskRequest &&) = default ;
    ExecDatamaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecDatamaskRequest() = default ;
    ExecDatamaskRequest& operator=(const ExecDatamaskRequest &) = default ;
    ExecDatamaskRequest& operator=(ExecDatamaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->featureType_ == nullptr && this->lang_ == nullptr && this->templateId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ExecDatamaskRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline ExecDatamaskRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ExecDatamaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ExecDatamaskRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The data that you want to mask. The data must be a string in JSON format and include the following fields:
    // 
    // - **dataHeaderList**: The column names of the data. The order of the column names must correspond to the order of the data that you want to mask.
    // 
    // - **dataList**: The data that you want to mask.
    // 
    // - **ruleList**: A list of sensitive data type IDs. The order of the IDs must correspond to the order of the data that you want to mask. Each ID is a number that represents a sensitive data type. You can call the [DescribeRules](https://help.aliyun.com/document_detail/410141.html) operation to obtain the IDs.
    // 
    // This parameter is required.
    shared_ptr<string> data_ {};
    // This parameter is deprecated.
    shared_ptr<int32_t> featureType_ {};
    // The language of the request and response. Default value: **zh_cn**. Valid values:
    // 
    // - **zh_cn**: Simplified Chinese
    // 
    // - **en_us**: English (US)
    shared_ptr<string> lang_ {};
    // The ID of the data masking template. A template ID is generated after you create a template in the [Data Security Center console](https://yundun.console.aliyun.com/?p=sddp#/dm/dmConfig/cn-zhangjiakou). You can find the **Template ID** on the **Data Masking** > **Masking Configuration** > **Masking Template** page.
    // 
    // - If the matching type of the data masking template is **Field Name**, the system matches the data against **dataHeaderList** in **Data**.
    // 
    // - If the matching type of the data masking template is **Sensitive Data Type**, the system matches the data against **ruleList** in **Data**.
    // 
    // This parameter is required.
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
