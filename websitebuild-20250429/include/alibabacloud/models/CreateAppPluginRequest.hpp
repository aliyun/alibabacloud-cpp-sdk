// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPPLUGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPPLUGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateAppPluginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppPluginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
      DARABONBA_PTR_TO_JSON(PluginVersion, pluginVersion_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppPluginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
      DARABONBA_PTR_FROM_JSON(PluginVersion, pluginVersion_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    CreateAppPluginRequest() = default ;
    CreateAppPluginRequest(const CreateAppPluginRequest &) = default ;
    CreateAppPluginRequest(CreateAppPluginRequest &&) = default ;
    CreateAppPluginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppPluginRequest() = default ;
    CreateAppPluginRequest& operator=(const CreateAppPluginRequest &) = default ;
    CreateAppPluginRequest& operator=(CreateAppPluginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->description_ == nullptr && this->downloadUrl_ == nullptr && this->extend_ == nullptr && this->icon_ == nullptr && this->ossKey_ == nullptr
        && this->pluginId_ == nullptr && this->pluginName_ == nullptr && this->pluginVersion_ == nullptr && this->tags_ == nullptr && this->visibility_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateAppPluginRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAppPluginRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline CreateAppPluginRequest& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline CreateAppPluginRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline CreateAppPluginRequest& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline CreateAppPluginRequest& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline CreateAppPluginRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // pluginName Field Functions 
    bool hasPluginName() const { return this->pluginName_ != nullptr;};
    void deletePluginName() { this->pluginName_ = nullptr;};
    inline string getPluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
    inline CreateAppPluginRequest& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


    // pluginVersion Field Functions 
    bool hasPluginVersion() const { return this->pluginVersion_ != nullptr;};
    void deletePluginVersion() { this->pluginVersion_ = nullptr;};
    inline string getPluginVersion() const { DARABONBA_PTR_GET_DEFAULT(pluginVersion_, "") };
    inline CreateAppPluginRequest& setPluginVersion(string pluginVersion) { DARABONBA_PTR_SET_VALUE(pluginVersion_, pluginVersion) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreateAppPluginRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline CreateAppPluginRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The category of the plug-in.
    shared_ptr<string> category_ {};
    // The description of the plug-in. The value must be 10 to 512 characters in length.
    shared_ptr<string> description_ {};
    // The downloadable ZIP URL. This parameter is mutually exclusive with OssKey.
    shared_ptr<string> downloadUrl_ {};
    // The extended JSON. This parameter is optional and uses the same format as the extend field in sandbox synchronization. If this parameter is not empty, the value is written to the database.
    shared_ptr<string> extend_ {};
    // The URL of the icon.
    shared_ptr<string> icon_ {};
    // The OSS key after frontend direct upload. This parameter is mutually exclusive with DownloadUrl.
    shared_ptr<string> ossKey_ {};
    // The unique identifier of the plug-in. The value can contain lowercase letters, digits, and hyphens (-), and must be 3 to 64 characters in length.
    shared_ptr<string> pluginId_ {};
    // The name of the plug-in. The value must be 2 to 64 characters in length.
    shared_ptr<string> pluginName_ {};
    // The version number in semver format. Default value: 0.1.0.
    shared_ptr<string> pluginVersion_ {};
    // The tags, separated by commas (,).
    shared_ptr<string> tags_ {};
    // The visibility of the plug-in. Default value: private.
    shared_ptr<string> visibility_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
