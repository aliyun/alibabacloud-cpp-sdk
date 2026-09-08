// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAMASKINGCOLUMNCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAMASKINGCOLUMNCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class GetDataMaskingColumnCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataMaskingColumnCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProductIds, productIds_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataMaskingColumnCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProductIds, productIds_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    GetDataMaskingColumnCountRequest() = default ;
    GetDataMaskingColumnCountRequest(const GetDataMaskingColumnCountRequest &) = default ;
    GetDataMaskingColumnCountRequest(GetDataMaskingColumnCountRequest &&) = default ;
    GetDataMaskingColumnCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataMaskingColumnCountRequest() = default ;
    GetDataMaskingColumnCountRequest& operator=(const GetDataMaskingColumnCountRequest &) = default ;
    GetDataMaskingColumnCountRequest& operator=(GetDataMaskingColumnCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->productIds_ == nullptr && this->templateId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetDataMaskingColumnCountRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // productIds Field Functions 
    bool hasProductIds() const { return this->productIds_ != nullptr;};
    void deleteProductIds() { this->productIds_ = nullptr;};
    inline string getProductIds() const { DARABONBA_PTR_GET_DEFAULT(productIds_, "") };
    inline GetDataMaskingColumnCountRequest& setProductIds(string productIds) { DARABONBA_PTR_SET_VALUE(productIds_, productIds) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline GetDataMaskingColumnCountRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    shared_ptr<string> lang_ {};
    shared_ptr<string> productIds_ {};
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
