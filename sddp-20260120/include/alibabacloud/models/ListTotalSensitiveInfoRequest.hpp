// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOTALSENSITIVEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTOTALSENSITIVEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class ListTotalSensitiveInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTotalSensitiveInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CountType, countType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductCodeList, productCodeList_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTotalSensitiveInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CountType, countType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductCodeList, productCodeList_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    ListTotalSensitiveInfoRequest() = default ;
    ListTotalSensitiveInfoRequest(const ListTotalSensitiveInfoRequest &) = default ;
    ListTotalSensitiveInfoRequest(ListTotalSensitiveInfoRequest &&) = default ;
    ListTotalSensitiveInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTotalSensitiveInfoRequest() = default ;
    ListTotalSensitiveInfoRequest& operator=(const ListTotalSensitiveInfoRequest &) = default ;
    ListTotalSensitiveInfoRequest& operator=(ListTotalSensitiveInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->countType_ == nullptr
        && this->lang_ == nullptr && this->productCode_ == nullptr && this->productCodeList_ == nullptr && this->templateId_ == nullptr; };
    // countType Field Functions 
    bool hasCountType() const { return this->countType_ != nullptr;};
    void deleteCountType() { this->countType_ = nullptr;};
    inline int32_t getCountType() const { DARABONBA_PTR_GET_DEFAULT(countType_, 0) };
    inline ListTotalSensitiveInfoRequest& setCountType(int32_t countType) { DARABONBA_PTR_SET_VALUE(countType_, countType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListTotalSensitiveInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListTotalSensitiveInfoRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productCodeList Field Functions 
    bool hasProductCodeList() const { return this->productCodeList_ != nullptr;};
    void deleteProductCodeList() { this->productCodeList_ = nullptr;};
    inline string getProductCodeList() const { DARABONBA_PTR_GET_DEFAULT(productCodeList_, "") };
    inline ListTotalSensitiveInfoRequest& setProductCodeList(string productCodeList) { DARABONBA_PTR_SET_VALUE(productCodeList_, productCodeList) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ListTotalSensitiveInfoRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    shared_ptr<int32_t> countType_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<string> productCodeList_ {};
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
