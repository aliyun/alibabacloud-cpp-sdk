// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEFORMDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEFORMDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SaveFormDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveFormDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(FormDataJson, formDataJson_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, SaveFormDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(FormDataJson, formDataJson_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    SaveFormDataRequest() = default ;
    SaveFormDataRequest(const SaveFormDataRequest &) = default ;
    SaveFormDataRequest(SaveFormDataRequest &&) = default ;
    SaveFormDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveFormDataRequest() = default ;
    SaveFormDataRequest& operator=(const SaveFormDataRequest &) = default ;
    SaveFormDataRequest& operator=(SaveFormDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && this->formDataJson_ == nullptr && this->formUuid_ == nullptr && this->language_ == nullptr && this->systemToken_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline SaveFormDataRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // formDataJson Field Functions 
    bool hasFormDataJson() const { return this->formDataJson_ != nullptr;};
    void deleteFormDataJson() { this->formDataJson_ = nullptr;};
    inline string getFormDataJson() const { DARABONBA_PTR_GET_DEFAULT(formDataJson_, "") };
    inline SaveFormDataRequest& setFormDataJson(string formDataJson) { DARABONBA_PTR_SET_VALUE(formDataJson_, formDataJson) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string getFormUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline SaveFormDataRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SaveFormDataRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string getSystemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline SaveFormDataRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> appType_ {};
    // This parameter is required.
    shared_ptr<string> formDataJson_ {};
    // This parameter is required.
    shared_ptr<string> formUuid_ {};
    shared_ptr<string> language_ {};
    // This parameter is required.
    shared_ptr<string> systemToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
