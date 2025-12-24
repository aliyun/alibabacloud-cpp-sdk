// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOMPONENTASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOMPONENTASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class ModifyComponentAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyComponentAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetConfig, assetConfig_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyComponentAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetConfig, assetConfig_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    ModifyComponentAssetRequest() = default ;
    ModifyComponentAssetRequest(const ModifyComponentAssetRequest &) = default ;
    ModifyComponentAssetRequest(ModifyComponentAssetRequest &&) = default ;
    ModifyComponentAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyComponentAssetRequest() = default ;
    ModifyComponentAssetRequest& operator=(const ModifyComponentAssetRequest &) = default ;
    ModifyComponentAssetRequest& operator=(ModifyComponentAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetConfig_ == nullptr
        && return this->lang_ == nullptr; };
    // assetConfig Field Functions 
    bool hasAssetConfig() const { return this->assetConfig_ != nullptr;};
    void deleteAssetConfig() { this->assetConfig_ = nullptr;};
    inline string assetConfig() const { DARABONBA_PTR_GET_DEFAULT(assetConfig_, "") };
    inline ModifyComponentAssetRequest& setAssetConfig(string assetConfig) { DARABONBA_PTR_SET_VALUE(assetConfig_, assetConfig) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyComponentAssetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The configuration of the asset. The value is a JSON object.
    // 
    // This parameter is required.
    std::shared_ptr<string> assetConfig_ = nullptr;
    // The language of the content within the request and response.
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
