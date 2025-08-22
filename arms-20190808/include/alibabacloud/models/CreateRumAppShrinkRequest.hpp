// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUMAPPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERUMAPPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateRumAppShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRumAppShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppGroup, appGroup_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(PackageName, packageName_);
      DARABONBA_PTR_TO_JSON(RealRegionId, realRegionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SiteType, siteType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRumAppShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGroup, appGroup_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
      DARABONBA_PTR_FROM_JSON(RealRegionId, realRegionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SiteType, siteType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    CreateRumAppShrinkRequest() = default ;
    CreateRumAppShrinkRequest(const CreateRumAppShrinkRequest &) = default ;
    CreateRumAppShrinkRequest(CreateRumAppShrinkRequest &&) = default ;
    CreateRumAppShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRumAppShrinkRequest() = default ;
    CreateRumAppShrinkRequest& operator=(const CreateRumAppShrinkRequest &) = default ;
    CreateRumAppShrinkRequest& operator=(CreateRumAppShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appGroup_ != nullptr
        && this->appName_ != nullptr && this->description_ != nullptr && this->language_ != nullptr && this->nickName_ != nullptr && this->packageName_ != nullptr
        && this->realRegionId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->siteType_ != nullptr && this->source_ != nullptr
        && this->tagShrink_ != nullptr; };
    // appGroup Field Functions 
    bool hasAppGroup() const { return this->appGroup_ != nullptr;};
    void deleteAppGroup() { this->appGroup_ = nullptr;};
    inline string appGroup() const { DARABONBA_PTR_GET_DEFAULT(appGroup_, "") };
    inline CreateRumAppShrinkRequest& setAppGroup(string appGroup) { DARABONBA_PTR_SET_VALUE(appGroup_, appGroup) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateRumAppShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRumAppShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateRumAppShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline CreateRumAppShrinkRequest& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string packageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline CreateRumAppShrinkRequest& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


    // realRegionId Field Functions 
    bool hasRealRegionId() const { return this->realRegionId_ != nullptr;};
    void deleteRealRegionId() { this->realRegionId_ = nullptr;};
    inline string realRegionId() const { DARABONBA_PTR_GET_DEFAULT(realRegionId_, "") };
    inline CreateRumAppShrinkRequest& setRealRegionId(string realRegionId) { DARABONBA_PTR_SET_VALUE(realRegionId_, realRegionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRumAppShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateRumAppShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // siteType Field Functions 
    bool hasSiteType() const { return this->siteType_ != nullptr;};
    void deleteSiteType() { this->siteType_ = nullptr;};
    inline string siteType() const { DARABONBA_PTR_GET_DEFAULT(siteType_, "") };
    inline CreateRumAppShrinkRequest& setSiteType(string siteType) { DARABONBA_PTR_SET_VALUE(siteType_, siteType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateRumAppShrinkRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string tagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline CreateRumAppShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // The name of the application group.
    std::shared_ptr<string> appGroup_ = nullptr;
    // The application name.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The language used by the client.
    std::shared_ptr<string> language_ = nullptr;
    // The nickname of the application.
    std::shared_ptr<string> nickName_ = nullptr;
    // The name of the Android application package. This parameter is required if you create an Android application.
    std::shared_ptr<string> packageName_ = nullptr;
    // The region where the application resides. You can leave this parameter empty or set it to China East 2 Finance.
    std::shared_ptr<string> realRegionId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The application type. Valid values: web, miniapp, ios, and android.
    // 
    // This parameter is required.
    std::shared_ptr<string> siteType_ = nullptr;
    // The source. This is a reserved parameter.
    std::shared_ptr<string> source_ = nullptr;
    // The list of tags. You can specify a maximum of 20 tags.
    std::shared_ptr<string> tagShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
