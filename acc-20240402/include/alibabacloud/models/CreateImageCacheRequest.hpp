// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGECACHEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGECACHEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateImageCacheRequestAcrRegistryInfos.hpp>
#include <alibabacloud/models/CreateImageCacheRequestImageRegistryCredentials.hpp>
#include <alibabacloud/models/CreateImageCacheRequestNetworkConfig.hpp>
#include <alibabacloud/models/CreateImageCacheRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
namespace Models
{
  class CreateImageCacheRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageCacheRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcrRegistryInfos, acrRegistryInfos_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ImageCacheName, imageCacheName_);
      DARABONBA_PTR_TO_JSON(ImageRegistryCredentials, imageRegistryCredentials_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(NetworkConfig, networkConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageCacheRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrRegistryInfos, acrRegistryInfos_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ImageCacheName, imageCacheName_);
      DARABONBA_PTR_FROM_JSON(ImageRegistryCredentials, imageRegistryCredentials_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(NetworkConfig, networkConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateImageCacheRequest() = default ;
    CreateImageCacheRequest(const CreateImageCacheRequest &) = default ;
    CreateImageCacheRequest(CreateImageCacheRequest &&) = default ;
    CreateImageCacheRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageCacheRequest() = default ;
    CreateImageCacheRequest& operator=(const CreateImageCacheRequest &) = default ;
    CreateImageCacheRequest& operator=(CreateImageCacheRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acrRegistryInfos_ != nullptr
        && this->clientToken_ != nullptr && this->imageCacheName_ != nullptr && this->imageRegistryCredentials_ != nullptr && this->images_ != nullptr && this->networkConfig_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr; };
    // acrRegistryInfos Field Functions 
    bool hasAcrRegistryInfos() const { return this->acrRegistryInfos_ != nullptr;};
    void deleteAcrRegistryInfos() { this->acrRegistryInfos_ = nullptr;};
    inline const vector<CreateImageCacheRequestAcrRegistryInfos> & acrRegistryInfos() const { DARABONBA_PTR_GET_CONST(acrRegistryInfos_, vector<CreateImageCacheRequestAcrRegistryInfos>) };
    inline vector<CreateImageCacheRequestAcrRegistryInfos> acrRegistryInfos() { DARABONBA_PTR_GET(acrRegistryInfos_, vector<CreateImageCacheRequestAcrRegistryInfos>) };
    inline CreateImageCacheRequest& setAcrRegistryInfos(const vector<CreateImageCacheRequestAcrRegistryInfos> & acrRegistryInfos) { DARABONBA_PTR_SET_VALUE(acrRegistryInfos_, acrRegistryInfos) };
    inline CreateImageCacheRequest& setAcrRegistryInfos(vector<CreateImageCacheRequestAcrRegistryInfos> && acrRegistryInfos) { DARABONBA_PTR_SET_RVALUE(acrRegistryInfos_, acrRegistryInfos) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImageCacheRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // imageCacheName Field Functions 
    bool hasImageCacheName() const { return this->imageCacheName_ != nullptr;};
    void deleteImageCacheName() { this->imageCacheName_ = nullptr;};
    inline string imageCacheName() const { DARABONBA_PTR_GET_DEFAULT(imageCacheName_, "") };
    inline CreateImageCacheRequest& setImageCacheName(string imageCacheName) { DARABONBA_PTR_SET_VALUE(imageCacheName_, imageCacheName) };


    // imageRegistryCredentials Field Functions 
    bool hasImageRegistryCredentials() const { return this->imageRegistryCredentials_ != nullptr;};
    void deleteImageRegistryCredentials() { this->imageRegistryCredentials_ = nullptr;};
    inline const vector<CreateImageCacheRequestImageRegistryCredentials> & imageRegistryCredentials() const { DARABONBA_PTR_GET_CONST(imageRegistryCredentials_, vector<CreateImageCacheRequestImageRegistryCredentials>) };
    inline vector<CreateImageCacheRequestImageRegistryCredentials> imageRegistryCredentials() { DARABONBA_PTR_GET(imageRegistryCredentials_, vector<CreateImageCacheRequestImageRegistryCredentials>) };
    inline CreateImageCacheRequest& setImageRegistryCredentials(const vector<CreateImageCacheRequestImageRegistryCredentials> & imageRegistryCredentials) { DARABONBA_PTR_SET_VALUE(imageRegistryCredentials_, imageRegistryCredentials) };
    inline CreateImageCacheRequest& setImageRegistryCredentials(vector<CreateImageCacheRequestImageRegistryCredentials> && imageRegistryCredentials) { DARABONBA_PTR_SET_RVALUE(imageRegistryCredentials_, imageRegistryCredentials) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<string> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
    inline vector<string> images() { DARABONBA_PTR_GET(images_, vector<string>) };
    inline CreateImageCacheRequest& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline CreateImageCacheRequest& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const CreateImageCacheRequestNetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, CreateImageCacheRequestNetworkConfig) };
    inline CreateImageCacheRequestNetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, CreateImageCacheRequestNetworkConfig) };
    inline CreateImageCacheRequest& setNetworkConfig(const CreateImageCacheRequestNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline CreateImageCacheRequest& setNetworkConfig(CreateImageCacheRequestNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateImageCacheRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateImageCacheRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateImageCacheRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateImageCacheRequestTags>) };
    inline vector<CreateImageCacheRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateImageCacheRequestTags>) };
    inline CreateImageCacheRequest& setTags(const vector<CreateImageCacheRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateImageCacheRequest& setTags(vector<CreateImageCacheRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<vector<CreateImageCacheRequestAcrRegistryInfos>> acrRegistryInfos_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageCacheName_ = nullptr;
    std::shared_ptr<vector<CreateImageCacheRequestImageRegistryCredentials>> imageRegistryCredentials_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> images_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateImageCacheRequestNetworkConfig> networkConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<CreateImageCacheRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
