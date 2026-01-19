// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGECACHESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGECACHESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
namespace Models
{
  class CreateImageCacheShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageCacheShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcrRegistryInfos, acrRegistryInfos_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ImageCacheName, imageCacheName_);
      DARABONBA_PTR_TO_JSON(ImageRegistryCredentials, imageRegistryCredentials_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(NetworkConfig, networkConfigShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageCacheShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrRegistryInfos, acrRegistryInfos_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ImageCacheName, imageCacheName_);
      DARABONBA_PTR_FROM_JSON(ImageRegistryCredentials, imageRegistryCredentials_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(NetworkConfig, networkConfigShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateImageCacheShrinkRequest() = default ;
    CreateImageCacheShrinkRequest(const CreateImageCacheShrinkRequest &) = default ;
    CreateImageCacheShrinkRequest(CreateImageCacheShrinkRequest &&) = default ;
    CreateImageCacheShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageCacheShrinkRequest() = default ;
    CreateImageCacheShrinkRequest& operator=(const CreateImageCacheShrinkRequest &) = default ;
    CreateImageCacheShrinkRequest& operator=(CreateImageCacheShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
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
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class ImageRegistryCredentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageRegistryCredentials& obj) { 
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Server, server_);
        DARABONBA_PTR_TO_JSON(SkipCertVerification, skipCertVerification_);
        DARABONBA_PTR_TO_JSON(UsePlainHttp, usePlainHttp_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, ImageRegistryCredentials& obj) { 
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Server, server_);
        DARABONBA_PTR_FROM_JSON(SkipCertVerification, skipCertVerification_);
        DARABONBA_PTR_FROM_JSON(UsePlainHttp, usePlainHttp_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
      };
      ImageRegistryCredentials() = default ;
      ImageRegistryCredentials(const ImageRegistryCredentials &) = default ;
      ImageRegistryCredentials(ImageRegistryCredentials &&) = default ;
      ImageRegistryCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageRegistryCredentials() = default ;
      ImageRegistryCredentials& operator=(const ImageRegistryCredentials &) = default ;
      ImageRegistryCredentials& operator=(ImageRegistryCredentials &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->password_ == nullptr
        && this->server_ == nullptr && this->skipCertVerification_ == nullptr && this->usePlainHttp_ == nullptr && this->username_ == nullptr; };
      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline ImageRegistryCredentials& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // server Field Functions 
      bool hasServer() const { return this->server_ != nullptr;};
      void deleteServer() { this->server_ = nullptr;};
      inline string getServer() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
      inline ImageRegistryCredentials& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


      // skipCertVerification Field Functions 
      bool hasSkipCertVerification() const { return this->skipCertVerification_ != nullptr;};
      void deleteSkipCertVerification() { this->skipCertVerification_ = nullptr;};
      inline bool getSkipCertVerification() const { DARABONBA_PTR_GET_DEFAULT(skipCertVerification_, false) };
      inline ImageRegistryCredentials& setSkipCertVerification(bool skipCertVerification) { DARABONBA_PTR_SET_VALUE(skipCertVerification_, skipCertVerification) };


      // usePlainHttp Field Functions 
      bool hasUsePlainHttp() const { return this->usePlainHttp_ != nullptr;};
      void deleteUsePlainHttp() { this->usePlainHttp_ = nullptr;};
      inline bool getUsePlainHttp() const { DARABONBA_PTR_GET_DEFAULT(usePlainHttp_, false) };
      inline ImageRegistryCredentials& setUsePlainHttp(bool usePlainHttp) { DARABONBA_PTR_SET_VALUE(usePlainHttp_, usePlainHttp) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline ImageRegistryCredentials& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      shared_ptr<string> password_ {};
      shared_ptr<string> server_ {};
      shared_ptr<bool> skipCertVerification_ {};
      shared_ptr<bool> usePlainHttp_ {};
      shared_ptr<string> username_ {};
    };

    class AcrRegistryInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AcrRegistryInfos& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, AcrRegistryInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      AcrRegistryInfos() = default ;
      AcrRegistryInfos(const AcrRegistryInfos &) = default ;
      AcrRegistryInfos(AcrRegistryInfos &&) = default ;
      AcrRegistryInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AcrRegistryInfos() = default ;
      AcrRegistryInfos& operator=(const AcrRegistryInfos &) = default ;
      AcrRegistryInfos& operator=(AcrRegistryInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AcrRegistryInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AcrRegistryInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->acrRegistryInfos_ == nullptr
        && this->clientToken_ == nullptr && this->imageCacheName_ == nullptr && this->imageRegistryCredentials_ == nullptr && this->images_ == nullptr && this->networkConfigShrink_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
    // acrRegistryInfos Field Functions 
    bool hasAcrRegistryInfos() const { return this->acrRegistryInfos_ != nullptr;};
    void deleteAcrRegistryInfos() { this->acrRegistryInfos_ = nullptr;};
    inline const vector<CreateImageCacheShrinkRequest::AcrRegistryInfos> & getAcrRegistryInfos() const { DARABONBA_PTR_GET_CONST(acrRegistryInfos_, vector<CreateImageCacheShrinkRequest::AcrRegistryInfos>) };
    inline vector<CreateImageCacheShrinkRequest::AcrRegistryInfos> getAcrRegistryInfos() { DARABONBA_PTR_GET(acrRegistryInfos_, vector<CreateImageCacheShrinkRequest::AcrRegistryInfos>) };
    inline CreateImageCacheShrinkRequest& setAcrRegistryInfos(const vector<CreateImageCacheShrinkRequest::AcrRegistryInfos> & acrRegistryInfos) { DARABONBA_PTR_SET_VALUE(acrRegistryInfos_, acrRegistryInfos) };
    inline CreateImageCacheShrinkRequest& setAcrRegistryInfos(vector<CreateImageCacheShrinkRequest::AcrRegistryInfos> && acrRegistryInfos) { DARABONBA_PTR_SET_RVALUE(acrRegistryInfos_, acrRegistryInfos) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImageCacheShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // imageCacheName Field Functions 
    bool hasImageCacheName() const { return this->imageCacheName_ != nullptr;};
    void deleteImageCacheName() { this->imageCacheName_ = nullptr;};
    inline string getImageCacheName() const { DARABONBA_PTR_GET_DEFAULT(imageCacheName_, "") };
    inline CreateImageCacheShrinkRequest& setImageCacheName(string imageCacheName) { DARABONBA_PTR_SET_VALUE(imageCacheName_, imageCacheName) };


    // imageRegistryCredentials Field Functions 
    bool hasImageRegistryCredentials() const { return this->imageRegistryCredentials_ != nullptr;};
    void deleteImageRegistryCredentials() { this->imageRegistryCredentials_ = nullptr;};
    inline const vector<CreateImageCacheShrinkRequest::ImageRegistryCredentials> & getImageRegistryCredentials() const { DARABONBA_PTR_GET_CONST(imageRegistryCredentials_, vector<CreateImageCacheShrinkRequest::ImageRegistryCredentials>) };
    inline vector<CreateImageCacheShrinkRequest::ImageRegistryCredentials> getImageRegistryCredentials() { DARABONBA_PTR_GET(imageRegistryCredentials_, vector<CreateImageCacheShrinkRequest::ImageRegistryCredentials>) };
    inline CreateImageCacheShrinkRequest& setImageRegistryCredentials(const vector<CreateImageCacheShrinkRequest::ImageRegistryCredentials> & imageRegistryCredentials) { DARABONBA_PTR_SET_VALUE(imageRegistryCredentials_, imageRegistryCredentials) };
    inline CreateImageCacheShrinkRequest& setImageRegistryCredentials(vector<CreateImageCacheShrinkRequest::ImageRegistryCredentials> && imageRegistryCredentials) { DARABONBA_PTR_SET_RVALUE(imageRegistryCredentials_, imageRegistryCredentials) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<string> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
    inline vector<string> getImages() { DARABONBA_PTR_GET(images_, vector<string>) };
    inline CreateImageCacheShrinkRequest& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline CreateImageCacheShrinkRequest& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // networkConfigShrink Field Functions 
    bool hasNetworkConfigShrink() const { return this->networkConfigShrink_ != nullptr;};
    void deleteNetworkConfigShrink() { this->networkConfigShrink_ = nullptr;};
    inline string getNetworkConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(networkConfigShrink_, "") };
    inline CreateImageCacheShrinkRequest& setNetworkConfigShrink(string networkConfigShrink) { DARABONBA_PTR_SET_VALUE(networkConfigShrink_, networkConfigShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateImageCacheShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateImageCacheShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateImageCacheShrinkRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateImageCacheShrinkRequest::Tags>) };
    inline vector<CreateImageCacheShrinkRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateImageCacheShrinkRequest::Tags>) };
    inline CreateImageCacheShrinkRequest& setTags(const vector<CreateImageCacheShrinkRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateImageCacheShrinkRequest& setTags(vector<CreateImageCacheShrinkRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    shared_ptr<vector<CreateImageCacheShrinkRequest::AcrRegistryInfos>> acrRegistryInfos_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> imageCacheName_ {};
    shared_ptr<vector<CreateImageCacheShrinkRequest::ImageRegistryCredentials>> imageRegistryCredentials_ {};
    // This parameter is required.
    shared_ptr<vector<string>> images_ {};
    // This parameter is required.
    shared_ptr<string> networkConfigShrink_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<vector<CreateImageCacheShrinkRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
