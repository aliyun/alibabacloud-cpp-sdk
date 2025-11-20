// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPLUGINATTACHMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPLUGINATTACHMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdatePluginAttachmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePluginAttachmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(attachResourceIds, attachResourceIds_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(pluginConfig, pluginConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePluginAttachmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attachResourceIds, attachResourceIds_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(pluginConfig, pluginConfig_);
    };
    UpdatePluginAttachmentRequest() = default ;
    UpdatePluginAttachmentRequest(const UpdatePluginAttachmentRequest &) = default ;
    UpdatePluginAttachmentRequest(UpdatePluginAttachmentRequest &&) = default ;
    UpdatePluginAttachmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePluginAttachmentRequest() = default ;
    UpdatePluginAttachmentRequest& operator=(const UpdatePluginAttachmentRequest &) = default ;
    UpdatePluginAttachmentRequest& operator=(UpdatePluginAttachmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachResourceIds_ == nullptr
        && return this->enable_ == nullptr && return this->pluginConfig_ == nullptr; };
    // attachResourceIds Field Functions 
    bool hasAttachResourceIds() const { return this->attachResourceIds_ != nullptr;};
    void deleteAttachResourceIds() { this->attachResourceIds_ = nullptr;};
    inline const vector<string> & attachResourceIds() const { DARABONBA_PTR_GET_CONST(attachResourceIds_, vector<string>) };
    inline vector<string> attachResourceIds() { DARABONBA_PTR_GET(attachResourceIds_, vector<string>) };
    inline UpdatePluginAttachmentRequest& setAttachResourceIds(const vector<string> & attachResourceIds) { DARABONBA_PTR_SET_VALUE(attachResourceIds_, attachResourceIds) };
    inline UpdatePluginAttachmentRequest& setAttachResourceIds(vector<string> && attachResourceIds) { DARABONBA_PTR_SET_RVALUE(attachResourceIds_, attachResourceIds) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdatePluginAttachmentRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // pluginConfig Field Functions 
    bool hasPluginConfig() const { return this->pluginConfig_ != nullptr;};
    void deletePluginConfig() { this->pluginConfig_ = nullptr;};
    inline string pluginConfig() const { DARABONBA_PTR_GET_DEFAULT(pluginConfig_, "") };
    inline UpdatePluginAttachmentRequest& setPluginConfig(string pluginConfig) { DARABONBA_PTR_SET_VALUE(pluginConfig_, pluginConfig) };


  protected:
    // The IDs of the resources to which the plug-in is attached.
    std::shared_ptr<vector<string>> attachResourceIds_ = nullptr;
    // Specifies whether to enable the plug-in.
    std::shared_ptr<bool> enable_ = nullptr;
    // The Base64-encoded configurations of the plug-in.
    std::shared_ptr<string> pluginConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
