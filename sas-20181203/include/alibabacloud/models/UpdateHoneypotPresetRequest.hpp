// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHONEYPOTPRESETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHONEYPOTPRESETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateHoneypotPresetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHoneypotPresetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HoneypotImageName, honeypotImageName_);
      DARABONBA_PTR_TO_JSON(HoneypotPresetId, honeypotPresetId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Meta, meta_);
      DARABONBA_PTR_TO_JSON(PresetName, presetName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHoneypotPresetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HoneypotImageName, honeypotImageName_);
      DARABONBA_PTR_FROM_JSON(HoneypotPresetId, honeypotPresetId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Meta, meta_);
      DARABONBA_PTR_FROM_JSON(PresetName, presetName_);
    };
    UpdateHoneypotPresetRequest() = default ;
    UpdateHoneypotPresetRequest(const UpdateHoneypotPresetRequest &) = default ;
    UpdateHoneypotPresetRequest(UpdateHoneypotPresetRequest &&) = default ;
    UpdateHoneypotPresetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHoneypotPresetRequest() = default ;
    UpdateHoneypotPresetRequest& operator=(const UpdateHoneypotPresetRequest &) = default ;
    UpdateHoneypotPresetRequest& operator=(UpdateHoneypotPresetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->honeypotImageName_ != nullptr
        && this->honeypotPresetId_ != nullptr && this->lang_ != nullptr && this->meta_ != nullptr && this->presetName_ != nullptr; };
    // honeypotImageName Field Functions 
    bool hasHoneypotImageName() const { return this->honeypotImageName_ != nullptr;};
    void deleteHoneypotImageName() { this->honeypotImageName_ = nullptr;};
    inline string honeypotImageName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageName_, "") };
    inline UpdateHoneypotPresetRequest& setHoneypotImageName(string honeypotImageName) { DARABONBA_PTR_SET_VALUE(honeypotImageName_, honeypotImageName) };


    // honeypotPresetId Field Functions 
    bool hasHoneypotPresetId() const { return this->honeypotPresetId_ != nullptr;};
    void deleteHoneypotPresetId() { this->honeypotPresetId_ = nullptr;};
    inline string honeypotPresetId() const { DARABONBA_PTR_GET_DEFAULT(honeypotPresetId_, "") };
    inline UpdateHoneypotPresetRequest& setHoneypotPresetId(string honeypotPresetId) { DARABONBA_PTR_SET_VALUE(honeypotPresetId_, honeypotPresetId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateHoneypotPresetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline string meta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
    inline UpdateHoneypotPresetRequest& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


    // presetName Field Functions 
    bool hasPresetName() const { return this->presetName_ != nullptr;};
    void deletePresetName() { this->presetName_ = nullptr;};
    inline string presetName() const { DARABONBA_PTR_GET_DEFAULT(presetName_, "") };
    inline UpdateHoneypotPresetRequest& setPresetName(string presetName) { DARABONBA_PTR_SET_VALUE(presetName_, presetName) };


  protected:
    // The name of the image that is used for the honeypot.
    std::shared_ptr<string> honeypotImageName_ = nullptr;
    // The ID of the honeypot template.
    // 
    // > You can call the [ListHoneypotPreset](~~ListHoneypotPreset~~) operation to query the IDs of honeypot templates.
    // 
    // This parameter is required.
    std::shared_ptr<string> honeypotPresetId_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The custom configurations of the honeypot template. The value is a JSON string that contains the following fields:
    // 
    // *   **portrait_option**: Social Source Tracing
    // *   **burp**: Burp-specific Defense
    // *   **trojan_git**: Git-specific Defense
    std::shared_ptr<string> meta_ = nullptr;
    // The custom name of the honeypot template.
    std::shared_ptr<string> presetName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
