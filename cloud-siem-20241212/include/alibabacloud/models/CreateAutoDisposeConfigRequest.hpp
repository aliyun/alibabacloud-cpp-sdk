// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTODISPOSECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTODISPOSECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CreateAutoDisposeConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoDisposeConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoDecisionStatus, autoDecisionStatus_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoDisposeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoDecisionStatus, autoDecisionStatus_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    CreateAutoDisposeConfigRequest() = default ;
    CreateAutoDisposeConfigRequest(const CreateAutoDisposeConfigRequest &) = default ;
    CreateAutoDisposeConfigRequest(CreateAutoDisposeConfigRequest &&) = default ;
    CreateAutoDisposeConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoDisposeConfigRequest() = default ;
    CreateAutoDisposeConfigRequest& operator=(const CreateAutoDisposeConfigRequest &) = default ;
    CreateAutoDisposeConfigRequest& operator=(CreateAutoDisposeConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoDecisionStatus_ == nullptr
        && this->lang_ == nullptr && this->productCode_ == nullptr; };
    // autoDecisionStatus Field Functions 
    bool hasAutoDecisionStatus() const { return this->autoDecisionStatus_ != nullptr;};
    void deleteAutoDecisionStatus() { this->autoDecisionStatus_ = nullptr;};
    inline string getAutoDecisionStatus() const { DARABONBA_PTR_GET_DEFAULT(autoDecisionStatus_, "") };
    inline CreateAutoDisposeConfigRequest& setAutoDecisionStatus(string autoDecisionStatus) { DARABONBA_PTR_SET_VALUE(autoDecisionStatus_, autoDecisionStatus) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateAutoDisposeConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateAutoDisposeConfigRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // This parameter is required.
    shared_ptr<string> autoDecisionStatus_ {};
    // This parameter is required.
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<string> productCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
