// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTPRESETRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTPRESETRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotPresetResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotPresetResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(ControlNodeName, controlNodeName_);
      DARABONBA_PTR_TO_JSON(HoneypotImageDisplayName, honeypotImageDisplayName_);
      DARABONBA_PTR_TO_JSON(HoneypotImageName, honeypotImageName_);
      DARABONBA_PTR_TO_JSON(HoneypotPresetId, honeypotPresetId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PresetName, presetName_);
      DARABONBA_PTR_TO_JSON(PresetType, presetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotPresetResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlNodeName, controlNodeName_);
      DARABONBA_PTR_FROM_JSON(HoneypotImageDisplayName, honeypotImageDisplayName_);
      DARABONBA_PTR_FROM_JSON(HoneypotImageName, honeypotImageName_);
      DARABONBA_PTR_FROM_JSON(HoneypotPresetId, honeypotPresetId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PresetName, presetName_);
      DARABONBA_PTR_FROM_JSON(PresetType, presetType_);
    };
    ListHoneypotPresetResponseBodyList() = default ;
    ListHoneypotPresetResponseBodyList(const ListHoneypotPresetResponseBodyList &) = default ;
    ListHoneypotPresetResponseBodyList(ListHoneypotPresetResponseBodyList &&) = default ;
    ListHoneypotPresetResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotPresetResponseBodyList() = default ;
    ListHoneypotPresetResponseBodyList& operator=(const ListHoneypotPresetResponseBodyList &) = default ;
    ListHoneypotPresetResponseBodyList& operator=(ListHoneypotPresetResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->controlNodeName_ != nullptr
        && this->honeypotImageDisplayName_ != nullptr && this->honeypotImageName_ != nullptr && this->honeypotPresetId_ != nullptr && this->nodeId_ != nullptr && this->presetName_ != nullptr
        && this->presetType_ != nullptr; };
    // controlNodeName Field Functions 
    bool hasControlNodeName() const { return this->controlNodeName_ != nullptr;};
    void deleteControlNodeName() { this->controlNodeName_ = nullptr;};
    inline string controlNodeName() const { DARABONBA_PTR_GET_DEFAULT(controlNodeName_, "") };
    inline ListHoneypotPresetResponseBodyList& setControlNodeName(string controlNodeName) { DARABONBA_PTR_SET_VALUE(controlNodeName_, controlNodeName) };


    // honeypotImageDisplayName Field Functions 
    bool hasHoneypotImageDisplayName() const { return this->honeypotImageDisplayName_ != nullptr;};
    void deleteHoneypotImageDisplayName() { this->honeypotImageDisplayName_ = nullptr;};
    inline string honeypotImageDisplayName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageDisplayName_, "") };
    inline ListHoneypotPresetResponseBodyList& setHoneypotImageDisplayName(string honeypotImageDisplayName) { DARABONBA_PTR_SET_VALUE(honeypotImageDisplayName_, honeypotImageDisplayName) };


    // honeypotImageName Field Functions 
    bool hasHoneypotImageName() const { return this->honeypotImageName_ != nullptr;};
    void deleteHoneypotImageName() { this->honeypotImageName_ = nullptr;};
    inline string honeypotImageName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageName_, "") };
    inline ListHoneypotPresetResponseBodyList& setHoneypotImageName(string honeypotImageName) { DARABONBA_PTR_SET_VALUE(honeypotImageName_, honeypotImageName) };


    // honeypotPresetId Field Functions 
    bool hasHoneypotPresetId() const { return this->honeypotPresetId_ != nullptr;};
    void deleteHoneypotPresetId() { this->honeypotPresetId_ = nullptr;};
    inline string honeypotPresetId() const { DARABONBA_PTR_GET_DEFAULT(honeypotPresetId_, "") };
    inline ListHoneypotPresetResponseBodyList& setHoneypotPresetId(string honeypotPresetId) { DARABONBA_PTR_SET_VALUE(honeypotPresetId_, honeypotPresetId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListHoneypotPresetResponseBodyList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // presetName Field Functions 
    bool hasPresetName() const { return this->presetName_ != nullptr;};
    void deletePresetName() { this->presetName_ = nullptr;};
    inline string presetName() const { DARABONBA_PTR_GET_DEFAULT(presetName_, "") };
    inline ListHoneypotPresetResponseBodyList& setPresetName(string presetName) { DARABONBA_PTR_SET_VALUE(presetName_, presetName) };


    // presetType Field Functions 
    bool hasPresetType() const { return this->presetType_ != nullptr;};
    void deletePresetType() { this->presetType_ = nullptr;};
    inline string presetType() const { DARABONBA_PTR_GET_DEFAULT(presetType_, "") };
    inline ListHoneypotPresetResponseBodyList& setPresetType(string presetType) { DARABONBA_PTR_SET_VALUE(presetType_, presetType) };


  protected:
    // The name of the management node.
    std::shared_ptr<string> controlNodeName_ = nullptr;
    // The display name of the honeypot image.
    std::shared_ptr<string> honeypotImageDisplayName_ = nullptr;
    // The name of the honeypot image.
    std::shared_ptr<string> honeypotImageName_ = nullptr;
    // The ID of the honeypot template.
    std::shared_ptr<string> honeypotPresetId_ = nullptr;
    // The ID of the management node.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The custom name of the honeypot template.
    std::shared_ptr<string> presetName_ = nullptr;
    // The type of the honeypot template. Valid values:
    // 
    // *   **TEMP**: automatically generated template
    // *   **CUSTOM**: custom template
    // *   **DEFAULT**: default template
    std::shared_ptr<string> presetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
