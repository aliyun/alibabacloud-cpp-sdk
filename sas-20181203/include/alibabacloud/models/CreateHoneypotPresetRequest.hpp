// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHONEYPOTPRESETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHONEYPOTPRESETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateHoneypotPresetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHoneypotPresetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HoneypotImageName, honeypotImageName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Meta, meta_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PresetName, presetName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHoneypotPresetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HoneypotImageName, honeypotImageName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Meta, meta_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PresetName, presetName_);
    };
    CreateHoneypotPresetRequest() = default ;
    CreateHoneypotPresetRequest(const CreateHoneypotPresetRequest &) = default ;
    CreateHoneypotPresetRequest(CreateHoneypotPresetRequest &&) = default ;
    CreateHoneypotPresetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHoneypotPresetRequest() = default ;
    CreateHoneypotPresetRequest& operator=(const CreateHoneypotPresetRequest &) = default ;
    CreateHoneypotPresetRequest& operator=(CreateHoneypotPresetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->honeypotImageName_ == nullptr
        && return this->lang_ == nullptr && return this->meta_ == nullptr && return this->nodeId_ == nullptr && return this->presetName_ == nullptr; };
    // honeypotImageName Field Functions 
    bool hasHoneypotImageName() const { return this->honeypotImageName_ != nullptr;};
    void deleteHoneypotImageName() { this->honeypotImageName_ = nullptr;};
    inline string honeypotImageName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageName_, "") };
    inline CreateHoneypotPresetRequest& setHoneypotImageName(string honeypotImageName) { DARABONBA_PTR_SET_VALUE(honeypotImageName_, honeypotImageName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateHoneypotPresetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline string meta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
    inline CreateHoneypotPresetRequest& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateHoneypotPresetRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // presetName Field Functions 
    bool hasPresetName() const { return this->presetName_ != nullptr;};
    void deletePresetName() { this->presetName_ = nullptr;};
    inline string presetName() const { DARABONBA_PTR_GET_DEFAULT(presetName_, "") };
    inline CreateHoneypotPresetRequest& setPresetName(string presetName) { DARABONBA_PTR_SET_VALUE(presetName_, presetName) };


  protected:
    // The name of the honeypot image.
    // 
    // This parameter is required.
    std::shared_ptr<string> honeypotImageName_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The custom configurations of the honeypot template. The value is a JSON string that contains the following fields:
    // 
    // *   **portrait_option**: Social Source Tracing
    // *   **burp**: Burp-specific Defense
    // *   **trojan_git**: Git-specific Defense
    // 
    // This parameter is required.
    std::shared_ptr<string> meta_ = nullptr;
    // The ID of the management node to which you want to deploy honeypots.
    // 
    // > You can call the [ListHoneypotNode](~~ListHoneypotNode~~) operation to query the IDs of management nodes.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The custom name of the honeypot template.
    // 
    // This parameter is required.
    std::shared_ptr<string> presetName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
