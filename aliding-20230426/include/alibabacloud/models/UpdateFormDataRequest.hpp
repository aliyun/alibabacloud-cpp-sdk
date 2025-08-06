// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFORMDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFORMDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateFormDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFormDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(FormInstanceId, formInstanceId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_TO_JSON(UpdateFormDataJson, updateFormDataJson_);
      DARABONBA_PTR_TO_JSON(UseLatestVersion, useLatestVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFormDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(FormInstanceId, formInstanceId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_FROM_JSON(UpdateFormDataJson, updateFormDataJson_);
      DARABONBA_PTR_FROM_JSON(UseLatestVersion, useLatestVersion_);
    };
    UpdateFormDataRequest() = default ;
    UpdateFormDataRequest(const UpdateFormDataRequest &) = default ;
    UpdateFormDataRequest(UpdateFormDataRequest &&) = default ;
    UpdateFormDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFormDataRequest() = default ;
    UpdateFormDataRequest& operator=(const UpdateFormDataRequest &) = default ;
    UpdateFormDataRequest& operator=(UpdateFormDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->formInstanceId_ != nullptr && this->language_ != nullptr && this->systemToken_ != nullptr && this->updateFormDataJson_ != nullptr && this->useLatestVersion_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline UpdateFormDataRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // formInstanceId Field Functions 
    bool hasFormInstanceId() const { return this->formInstanceId_ != nullptr;};
    void deleteFormInstanceId() { this->formInstanceId_ = nullptr;};
    inline string formInstanceId() const { DARABONBA_PTR_GET_DEFAULT(formInstanceId_, "") };
    inline UpdateFormDataRequest& setFormInstanceId(string formInstanceId) { DARABONBA_PTR_SET_VALUE(formInstanceId_, formInstanceId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline UpdateFormDataRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline UpdateFormDataRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


    // updateFormDataJson Field Functions 
    bool hasUpdateFormDataJson() const { return this->updateFormDataJson_ != nullptr;};
    void deleteUpdateFormDataJson() { this->updateFormDataJson_ = nullptr;};
    inline string updateFormDataJson() const { DARABONBA_PTR_GET_DEFAULT(updateFormDataJson_, "") };
    inline UpdateFormDataRequest& setUpdateFormDataJson(string updateFormDataJson) { DARABONBA_PTR_SET_VALUE(updateFormDataJson_, updateFormDataJson) };


    // useLatestVersion Field Functions 
    bool hasUseLatestVersion() const { return this->useLatestVersion_ != nullptr;};
    void deleteUseLatestVersion() { this->useLatestVersion_ = nullptr;};
    inline bool useLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(useLatestVersion_, false) };
    inline UpdateFormDataRequest& setUseLatestVersion(bool useLatestVersion) { DARABONBA_PTR_SET_VALUE(useLatestVersion_, useLatestVersion) };


  protected:
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> formInstanceId_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> systemToken_ = nullptr;
    std::shared_ptr<string> updateFormDataJson_ = nullptr;
    std::shared_ptr<bool> useLatestVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
