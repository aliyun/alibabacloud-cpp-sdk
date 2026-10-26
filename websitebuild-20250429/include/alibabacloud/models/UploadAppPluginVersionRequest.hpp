// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADAPPPLUGINVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADAPPPLUGINVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class UploadAppPluginVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadAppPluginVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Changelog, changelog_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(PluginVersion, pluginVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UploadAppPluginVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Changelog, changelog_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(PluginVersion, pluginVersion_);
    };
    UploadAppPluginVersionRequest() = default ;
    UploadAppPluginVersionRequest(const UploadAppPluginVersionRequest &) = default ;
    UploadAppPluginVersionRequest(UploadAppPluginVersionRequest &&) = default ;
    UploadAppPluginVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadAppPluginVersionRequest() = default ;
    UploadAppPluginVersionRequest& operator=(const UploadAppPluginVersionRequest &) = default ;
    UploadAppPluginVersionRequest& operator=(UploadAppPluginVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changelog_ == nullptr
        && this->description_ == nullptr && this->downloadUrl_ == nullptr && this->extend_ == nullptr && this->ossKey_ == nullptr && this->pluginId_ == nullptr
        && this->pluginVersion_ == nullptr; };
    // changelog Field Functions 
    bool hasChangelog() const { return this->changelog_ != nullptr;};
    void deleteChangelog() { this->changelog_ = nullptr;};
    inline string getChangelog() const { DARABONBA_PTR_GET_DEFAULT(changelog_, "") };
    inline UploadAppPluginVersionRequest& setChangelog(string changelog) { DARABONBA_PTR_SET_VALUE(changelog_, changelog) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UploadAppPluginVersionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline UploadAppPluginVersionRequest& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline UploadAppPluginVersionRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline UploadAppPluginVersionRequest& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline UploadAppPluginVersionRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // pluginVersion Field Functions 
    bool hasPluginVersion() const { return this->pluginVersion_ != nullptr;};
    void deletePluginVersion() { this->pluginVersion_ = nullptr;};
    inline string getPluginVersion() const { DARABONBA_PTR_GET_DEFAULT(pluginVersion_, "") };
    inline UploadAppPluginVersionRequest& setPluginVersion(string pluginVersion) { DARABONBA_PTR_SET_VALUE(pluginVersion_, pluginVersion) };


  protected:
    // The changelog.
    shared_ptr<string> changelog_ {};
    // The description. This parameter is optional. If this parameter is not empty, the description field in the primary table is updated accordingly.
    shared_ptr<string> description_ {};
    // The downloadable URL of the ZIP file. This parameter and OssKey are mutually exclusive.
    shared_ptr<string> downloadUrl_ {};
    // The extended JSON string. This parameter is optional and must be in the same format as the extend parameter synchronized from the sandbox. If this parameter is not empty, the extend field in the primary table is updated accordingly.
    shared_ptr<string> extend_ {};
    // The Object Storage Service (OSS) key after the file is directly uploaded from the frontend. This parameter and DownloadUrl are mutually exclusive.
    shared_ptr<string> ossKey_ {};
    // The ID of the gateway plugin.
    shared_ptr<string> pluginId_ {};
    // The new version number. The version number must follow the Semantic Versioning (SemVer) specification and be greater than the current version.
    shared_ptr<string> pluginVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
