// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAVIGATIONBYFORMTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNAVIGATIONBYFORMTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListNavigationByFormTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNavigationByFormTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(FormType, formType_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListNavigationByFormTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(FormType, formType_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    ListNavigationByFormTypeRequest() = default ;
    ListNavigationByFormTypeRequest(const ListNavigationByFormTypeRequest &) = default ;
    ListNavigationByFormTypeRequest(ListNavigationByFormTypeRequest &&) = default ;
    ListNavigationByFormTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNavigationByFormTypeRequest() = default ;
    ListNavigationByFormTypeRequest& operator=(const ListNavigationByFormTypeRequest &) = default ;
    ListNavigationByFormTypeRequest& operator=(ListNavigationByFormTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && return this->formType_ == nullptr && return this->language_ == nullptr && return this->systemToken_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline ListNavigationByFormTypeRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // formType Field Functions 
    bool hasFormType() const { return this->formType_ != nullptr;};
    void deleteFormType() { this->formType_ = nullptr;};
    inline string formType() const { DARABONBA_PTR_GET_DEFAULT(formType_, "") };
    inline ListNavigationByFormTypeRequest& setFormType(string formType) { DARABONBA_PTR_SET_VALUE(formType_, formType) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListNavigationByFormTypeRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline ListNavigationByFormTypeRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> formType_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
