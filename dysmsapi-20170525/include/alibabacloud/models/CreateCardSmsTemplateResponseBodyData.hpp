// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECARDSMSTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATECARDSMSTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateCardSmsTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCardSmsTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCardSmsTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    CreateCardSmsTemplateResponseBodyData() = default ;
    CreateCardSmsTemplateResponseBodyData(const CreateCardSmsTemplateResponseBodyData &) = default ;
    CreateCardSmsTemplateResponseBodyData(CreateCardSmsTemplateResponseBodyData &&) = default ;
    CreateCardSmsTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCardSmsTemplateResponseBodyData() = default ;
    CreateCardSmsTemplateResponseBodyData& operator=(const CreateCardSmsTemplateResponseBodyData &) = default ;
    CreateCardSmsTemplateResponseBodyData& operator=(CreateCardSmsTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateCode_ == nullptr; };
    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline CreateCardSmsTemplateResponseBodyData& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // The code of the message template.
    // 
    // You can view the template code in the **Template Code** column on the **Templates** tab of the **Go China** page in the [Alibaba Cloud SMS console](https://dysms.console.aliyun.com/dysms.htm?spm=5176.12818093.categories-n-products.ddysms.3b2816d0xml2NA#/overview).
    // 
    // > Make sure that the message template has been approved.
    std::shared_ptr<string> templateCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
