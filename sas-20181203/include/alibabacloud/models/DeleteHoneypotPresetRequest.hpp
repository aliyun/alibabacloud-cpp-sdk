// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHONEYPOTPRESETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHONEYPOTPRESETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteHoneypotPresetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHoneypotPresetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HoneypotPresetId, honeypotPresetId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHoneypotPresetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HoneypotPresetId, honeypotPresetId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DeleteHoneypotPresetRequest() = default ;
    DeleteHoneypotPresetRequest(const DeleteHoneypotPresetRequest &) = default ;
    DeleteHoneypotPresetRequest(DeleteHoneypotPresetRequest &&) = default ;
    DeleteHoneypotPresetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHoneypotPresetRequest() = default ;
    DeleteHoneypotPresetRequest& operator=(const DeleteHoneypotPresetRequest &) = default ;
    DeleteHoneypotPresetRequest& operator=(DeleteHoneypotPresetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->honeypotPresetId_ != nullptr
        && this->lang_ != nullptr; };
    // honeypotPresetId Field Functions 
    bool hasHoneypotPresetId() const { return this->honeypotPresetId_ != nullptr;};
    void deleteHoneypotPresetId() { this->honeypotPresetId_ = nullptr;};
    inline string honeypotPresetId() const { DARABONBA_PTR_GET_DEFAULT(honeypotPresetId_, "") };
    inline DeleteHoneypotPresetRequest& setHoneypotPresetId(string honeypotPresetId) { DARABONBA_PTR_SET_VALUE(honeypotPresetId_, honeypotPresetId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteHoneypotPresetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
