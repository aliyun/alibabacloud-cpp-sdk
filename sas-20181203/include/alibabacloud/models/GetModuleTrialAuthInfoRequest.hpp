// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULETRIALAUTHINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMODULETRIALAUTHINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetModuleTrialAuthInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleTrialAuthInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetModuleTrialAuthInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
    };
    GetModuleTrialAuthInfoRequest() = default ;
    GetModuleTrialAuthInfoRequest(const GetModuleTrialAuthInfoRequest &) = default ;
    GetModuleTrialAuthInfoRequest(GetModuleTrialAuthInfoRequest &&) = default ;
    GetModuleTrialAuthInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleTrialAuthInfoRequest() = default ;
    GetModuleTrialAuthInfoRequest& operator=(const GetModuleTrialAuthInfoRequest &) = default ;
    GetModuleTrialAuthInfoRequest& operator=(GetModuleTrialAuthInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->moduleCode_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetModuleTrialAuthInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline GetModuleTrialAuthInfoRequest& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The code of the feature. Valid values:
    // 
    // *   **vulFix**: vulnerability fixing.
    // *   **cloudSiem**: threat analysis and response.
    std::shared_ptr<string> moduleCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
