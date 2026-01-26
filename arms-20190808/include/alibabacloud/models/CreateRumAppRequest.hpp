// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUMAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERUMAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateRumAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRumAppRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRumAppRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateRumAppRequest() = default ;
    CreateRumAppRequest(const CreateRumAppRequest &) = default ;
    CreateRumAppRequest(CreateRumAppRequest &&) = default ;
    CreateRumAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRumAppRequest() = default ;
    CreateRumAppRequest& operator=(const CreateRumAppRequest &) = default ;
    CreateRumAppRequest& operator=(CreateRumAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->appGroup_ == nullptr
        && this->appName_ == nullptr && this->description_ == nullptr && this->language_ == nullptr && this->nickName_ == nullptr && this->packageName_ == nullptr
        && this->realRegionId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->siteType_ == nullptr && this->source_ == nullptr
        && this->tag_ == nullptr; };
    // appGroup Field Functions 
    bool hasAppGroup() const { return this->appGroup_ != nullptr;};
    void deleteAppGroup() { this->appGroup_ = nullptr;};
    inline string getAppGroup() const { DARABONBA_PTR_GET_DEFAULT(appGroup_, "") };
    inline CreateRumAppRequest& setAppGroup(string appGroup) { DARABONBA_PTR_SET_VALUE(appGroup_, appGroup) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateRumAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRumAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateRumAppRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline CreateRumAppRequest& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string getPackageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline CreateRumAppRequest& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


    // realRegionId Field Functions 
    bool hasRealRegionId() const { return this->realRegionId_ != nullptr;};
    void deleteRealRegionId() { this->realRegionId_ = nullptr;};
    inline string getRealRegionId() const { DARABONBA_PTR_GET_DEFAULT(realRegionId_, "") };
    inline CreateRumAppRequest& setRealRegionId(string realRegionId) { DARABONBA_PTR_SET_VALUE(realRegionId_, realRegionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRumAppRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateRumAppRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // siteType Field Functions 
    bool hasSiteType() const { return this->siteType_ != nullptr;};
    void deleteSiteType() { this->siteType_ = nullptr;};
    inline string getSiteType() const { DARABONBA_PTR_GET_DEFAULT(siteType_, "") };
    inline CreateRumAppRequest& setSiteType(string siteType) { DARABONBA_PTR_SET_VALUE(siteType_, siteType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateRumAppRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateRumAppRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateRumAppRequest::Tag>) };
    inline vector<CreateRumAppRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateRumAppRequest::Tag>) };
    inline CreateRumAppRequest& setTag(const vector<CreateRumAppRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateRumAppRequest& setTag(vector<CreateRumAppRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The name of the application group.
    shared_ptr<string> appGroup_ {};
    // The application name.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The description of the application.
    shared_ptr<string> description_ {};
    // The language used by the client.
    shared_ptr<string> language_ {};
    // The nickname of the application.
    shared_ptr<string> nickName_ {};
    // The name of the Android application package. This parameter is required if you create an Android application.
    shared_ptr<string> packageName_ {};
    // The region where the application resides. You can leave this parameter empty or set it to China East 2 Finance.
    shared_ptr<string> realRegionId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The application type. Valid values: web, miniapp, ios, and android.
    // 
    // This parameter is required.
    shared_ptr<string> siteType_ {};
    // The source. This is a reserved parameter.
    shared_ptr<string> source_ {};
    // The list of tags. You can specify a maximum of 20 tags.
    shared_ptr<vector<CreateRumAppRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
