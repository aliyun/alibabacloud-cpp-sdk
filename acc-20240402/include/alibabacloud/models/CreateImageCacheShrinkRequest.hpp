// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGECACHESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGECACHESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateImageCacheShrinkRequestAcrRegistryInfos.hpp>
#include <alibabacloud/models/CreateImageCacheShrinkRequestImageRegistryCredentials.hpp>
#include <alibabacloud/models/CreateImageCacheShrinkRequestTags.hpp>
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
    virtual bool empty() const override { this->acrRegistryInfos_ != nullptr
        && this->clientToken_ != nullptr && this->imageCacheName_ != nullptr && this->imageRegistryCredentials_ != nullptr && this->images_ != nullptr && this->networkConfigShrink_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr; };
    // acrRegistryInfos Field Functions 
    bool hasAcrRegistryInfos() const { return this->acrRegistryInfos_ != nullptr;};
    void deleteAcrRegistryInfos() { this->acrRegistryInfos_ = nullptr;};
    inline const vector<CreateImageCacheShrinkRequestAcrRegistryInfos> & acrRegistryInfos() const { DARABONBA_PTR_GET_CONST(acrRegistryInfos_, vector<CreateImageCacheShrinkRequestAcrRegistryInfos>) };
    inline vector<CreateImageCacheShrinkRequestAcrRegistryInfos> acrRegistryInfos() { DARABONBA_PTR_GET(acrRegistryInfos_, vector<CreateImageCacheShrinkRequestAcrRegistryInfos>) };
    inline CreateImageCacheShrinkRequest& setAcrRegistryInfos(const vector<CreateImageCacheShrinkRequestAcrRegistryInfos> & acrRegistryInfos) { DARABONBA_PTR_SET_VALUE(acrRegistryInfos_, acrRegistryInfos) };
    inline CreateImageCacheShrinkRequest& setAcrRegistryInfos(vector<CreateImageCacheShrinkRequestAcrRegistryInfos> && acrRegistryInfos) { DARABONBA_PTR_SET_RVALUE(acrRegistryInfos_, acrRegistryInfos) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImageCacheShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // imageCacheName Field Functions 
    bool hasImageCacheName() const { return this->imageCacheName_ != nullptr;};
    void deleteImageCacheName() { this->imageCacheName_ = nullptr;};
    inline string imageCacheName() const { DARABONBA_PTR_GET_DEFAULT(imageCacheName_, "") };
    inline CreateImageCacheShrinkRequest& setImageCacheName(string imageCacheName) { DARABONBA_PTR_SET_VALUE(imageCacheName_, imageCacheName) };


    // imageRegistryCredentials Field Functions 
    bool hasImageRegistryCredentials() const { return this->imageRegistryCredentials_ != nullptr;};
    void deleteImageRegistryCredentials() { this->imageRegistryCredentials_ = nullptr;};
    inline const vector<CreateImageCacheShrinkRequestImageRegistryCredentials> & imageRegistryCredentials() const { DARABONBA_PTR_GET_CONST(imageRegistryCredentials_, vector<CreateImageCacheShrinkRequestImageRegistryCredentials>) };
    inline vector<CreateImageCacheShrinkRequestImageRegistryCredentials> imageRegistryCredentials() { DARABONBA_PTR_GET(imageRegistryCredentials_, vector<CreateImageCacheShrinkRequestImageRegistryCredentials>) };
    inline CreateImageCacheShrinkRequest& setImageRegistryCredentials(const vector<CreateImageCacheShrinkRequestImageRegistryCredentials> & imageRegistryCredentials) { DARABONBA_PTR_SET_VALUE(imageRegistryCredentials_, imageRegistryCredentials) };
    inline CreateImageCacheShrinkRequest& setImageRegistryCredentials(vector<CreateImageCacheShrinkRequestImageRegistryCredentials> && imageRegistryCredentials) { DARABONBA_PTR_SET_RVALUE(imageRegistryCredentials_, imageRegistryCredentials) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<string> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
    inline vector<string> images() { DARABONBA_PTR_GET(images_, vector<string>) };
    inline CreateImageCacheShrinkRequest& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline CreateImageCacheShrinkRequest& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // networkConfigShrink Field Functions 
    bool hasNetworkConfigShrink() const { return this->networkConfigShrink_ != nullptr;};
    void deleteNetworkConfigShrink() { this->networkConfigShrink_ = nullptr;};
    inline string networkConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(networkConfigShrink_, "") };
    inline CreateImageCacheShrinkRequest& setNetworkConfigShrink(string networkConfigShrink) { DARABONBA_PTR_SET_VALUE(networkConfigShrink_, networkConfigShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateImageCacheShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateImageCacheShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateImageCacheShrinkRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateImageCacheShrinkRequestTags>) };
    inline vector<CreateImageCacheShrinkRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateImageCacheShrinkRequestTags>) };
    inline CreateImageCacheShrinkRequest& setTags(const vector<CreateImageCacheShrinkRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateImageCacheShrinkRequest& setTags(vector<CreateImageCacheShrinkRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<vector<CreateImageCacheShrinkRequestAcrRegistryInfos>> acrRegistryInfos_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageCacheName_ = nullptr;
    std::shared_ptr<vector<CreateImageCacheShrinkRequestImageRegistryCredentials>> imageRegistryCredentials_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> images_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> networkConfigShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<CreateImageCacheShrinkRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
