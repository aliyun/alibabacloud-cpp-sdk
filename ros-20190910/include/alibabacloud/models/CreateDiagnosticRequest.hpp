// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIAGNOSTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIAGNOSTICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class CreateDiagnosticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiagnosticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnosticKey, diagnosticKey_);
      DARABONBA_PTR_TO_JSON(DiagnosticType, diagnosticType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Product, product_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiagnosticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnosticKey, diagnosticKey_);
      DARABONBA_PTR_FROM_JSON(DiagnosticType, diagnosticType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
    };
    CreateDiagnosticRequest() = default ;
    CreateDiagnosticRequest(const CreateDiagnosticRequest &) = default ;
    CreateDiagnosticRequest(CreateDiagnosticRequest &&) = default ;
    CreateDiagnosticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiagnosticRequest() = default ;
    CreateDiagnosticRequest& operator=(const CreateDiagnosticRequest &) = default ;
    CreateDiagnosticRequest& operator=(CreateDiagnosticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diagnosticKey_ != nullptr
        && this->diagnosticType_ != nullptr && this->lang_ != nullptr && this->product_ != nullptr; };
    // diagnosticKey Field Functions 
    bool hasDiagnosticKey() const { return this->diagnosticKey_ != nullptr;};
    void deleteDiagnosticKey() { this->diagnosticKey_ = nullptr;};
    inline string diagnosticKey() const { DARABONBA_PTR_GET_DEFAULT(diagnosticKey_, "") };
    inline CreateDiagnosticRequest& setDiagnosticKey(string diagnosticKey) { DARABONBA_PTR_SET_VALUE(diagnosticKey_, diagnosticKey) };


    // diagnosticType Field Functions 
    bool hasDiagnosticType() const { return this->diagnosticType_ != nullptr;};
    void deleteDiagnosticType() { this->diagnosticType_ = nullptr;};
    inline string diagnosticType() const { DARABONBA_PTR_GET_DEFAULT(diagnosticType_, "") };
    inline CreateDiagnosticRequest& setDiagnosticType(string diagnosticType) { DARABONBA_PTR_SET_VALUE(diagnosticType_, diagnosticType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateDiagnosticRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline CreateDiagnosticRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


  protected:
    // The keyword in the diagnosis.
    // 
    // You can specify the ID of the stack that you want to diagnose.
    // 
    // This parameter is required.
    std::shared_ptr<string> diagnosticKey_ = nullptr;
    // The type of the item that is diagnosed. Set the value to Stack, which specifies that the stack is diagnosed.
    std::shared_ptr<string> diagnosticType_ = nullptr;
    // The language of the diagnostic report to be generated. Only Chinese and English are supported.
    // 
    // Valid values:
    // 
    // *   zh-cn
    // *   en
    std::shared_ptr<string> lang_ = nullptr;
    // The name of the product that is diagonosed.
    std::shared_ptr<string> product_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
