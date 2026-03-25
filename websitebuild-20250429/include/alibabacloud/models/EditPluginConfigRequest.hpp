// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITPLUGINCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITPLUGINCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class EditPluginConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditPluginConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(PluginConfig, pluginConfig_);
      DARABONBA_PTR_TO_JSON(PluginDesc, pluginDesc_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
    };
    friend void from_json(const Darabonba::Json& j, EditPluginConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(PluginConfig, pluginConfig_);
      DARABONBA_PTR_FROM_JSON(PluginDesc, pluginDesc_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
    };
    EditPluginConfigRequest() = default ;
    EditPluginConfigRequest(const EditPluginConfigRequest &) = default ;
    EditPluginConfigRequest(EditPluginConfigRequest &&) = default ;
    EditPluginConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditPluginConfigRequest() = default ;
    EditPluginConfigRequest& operator=(const EditPluginConfigRequest &) = default ;
    EditPluginConfigRequest& operator=(EditPluginConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->pluginConfig_ == nullptr && this->pluginDesc_ == nullptr && this->pluginId_ == nullptr && this->pluginName_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline EditPluginConfigRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // pluginConfig Field Functions 
    bool hasPluginConfig() const { return this->pluginConfig_ != nullptr;};
    void deletePluginConfig() { this->pluginConfig_ = nullptr;};
    inline string getPluginConfig() const { DARABONBA_PTR_GET_DEFAULT(pluginConfig_, "") };
    inline EditPluginConfigRequest& setPluginConfig(string pluginConfig) { DARABONBA_PTR_SET_VALUE(pluginConfig_, pluginConfig) };


    // pluginDesc Field Functions 
    bool hasPluginDesc() const { return this->pluginDesc_ != nullptr;};
    void deletePluginDesc() { this->pluginDesc_ = nullptr;};
    inline string getPluginDesc() const { DARABONBA_PTR_GET_DEFAULT(pluginDesc_, "") };
    inline EditPluginConfigRequest& setPluginDesc(string pluginDesc) { DARABONBA_PTR_SET_VALUE(pluginDesc_, pluginDesc) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline EditPluginConfigRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // pluginName Field Functions 
    bool hasPluginName() const { return this->pluginName_ != nullptr;};
    void deletePluginName() { this->pluginName_ = nullptr;};
    inline string getPluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
    inline EditPluginConfigRequest& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> pluginConfig_ {};
    shared_ptr<string> pluginDesc_ {};
    shared_ptr<string> pluginId_ {};
    shared_ptr<string> pluginName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
