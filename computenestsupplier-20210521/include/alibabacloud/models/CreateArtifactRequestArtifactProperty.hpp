// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEARTIFACTREQUESTARTIFACTPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_CREATEARTIFACTREQUESTARTIFACTPROPERTY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class CreateArtifactRequestArtifactProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateArtifactRequestArtifactProperty& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CommodityVersion, commodityVersion_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoType, repoType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateArtifactRequestArtifactProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CommodityVersion, commodityVersion_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoType, repoType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateArtifactRequestArtifactProperty() = default ;
    CreateArtifactRequestArtifactProperty(const CreateArtifactRequestArtifactProperty &) = default ;
    CreateArtifactRequestArtifactProperty(CreateArtifactRequestArtifactProperty &&) = default ;
    CreateArtifactRequestArtifactProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateArtifactRequestArtifactProperty() = default ;
    CreateArtifactRequestArtifactProperty& operator=(const CreateArtifactRequestArtifactProperty &) = default ;
    CreateArtifactRequestArtifactProperty& operator=(CreateArtifactRequestArtifactProperty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->commodityVersion_ != nullptr && this->imageId_ != nullptr && this->regionId_ != nullptr && this->repoId_ != nullptr && this->repoName_ != nullptr
        && this->repoType_ != nullptr && this->tag_ != nullptr && this->url_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline CreateArtifactRequestArtifactProperty& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // commodityVersion Field Functions 
    bool hasCommodityVersion() const { return this->commodityVersion_ != nullptr;};
    void deleteCommodityVersion() { this->commodityVersion_ = nullptr;};
    inline string commodityVersion() const { DARABONBA_PTR_GET_DEFAULT(commodityVersion_, "") };
    inline CreateArtifactRequestArtifactProperty& setCommodityVersion(string commodityVersion) { DARABONBA_PTR_SET_VALUE(commodityVersion_, commodityVersion) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateArtifactRequestArtifactProperty& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateArtifactRequestArtifactProperty& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline CreateArtifactRequestArtifactProperty& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline CreateArtifactRequestArtifactProperty& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoType Field Functions 
    bool hasRepoType() const { return this->repoType_ != nullptr;};
    void deleteRepoType() { this->repoType_ = nullptr;};
    inline string repoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
    inline CreateArtifactRequestArtifactProperty& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline CreateArtifactRequestArtifactProperty& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateArtifactRequestArtifactProperty& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The commodity code of the service in Alibaba Cloud Marketplace.
    // 
    // >  This parameter is available only if the deployment package is an image.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The commodity version of the service in Alibaba Cloud Marketplace.
    // 
    // >  This parameter is available only if the deployment package is an image.
    std::shared_ptr<string> commodityVersion_ = nullptr;
    // The image ID.
    // 
    // >  This parameter is available only if the deployment package is an image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The region ID.
    // 
    // >  This parameter is available only if the deployment package is an image.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the image repository.
    // 
    // >  This parameter is available only if the deployment package is a container image or of the Helm chart type.
    std::shared_ptr<string> repoId_ = nullptr;
    // The name of the image repository.
    // 
    // >  This parameter is available only if the deployment package is a container image or of the Helm chart type.
    std::shared_ptr<string> repoName_ = nullptr;
    // The default repository type. Valid values:
    // 
    // *   `Public`: a public repository.
    // *   `Private`: a private repository.
    // 
    // You can specify the RepoType or Summary parameter. The RepoType parameter is optional.
    std::shared_ptr<string> repoType_ = nullptr;
    // The version tag of the image repository.
    // 
    // >  This parameter is available only if the deployment package is a container image or of the Helm chart type.
    std::shared_ptr<string> tag_ = nullptr;
    // The object URL of the deployment package.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
