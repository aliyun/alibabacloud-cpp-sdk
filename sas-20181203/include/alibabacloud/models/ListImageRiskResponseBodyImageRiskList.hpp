// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGERISKRESPONSEBODYIMAGERISKLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGERISKRESPONSEBODYIMAGERISKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListImageRiskResponseBodyImageRiskListEndPointList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListImageRiskResponseBodyImageRiskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageRiskResponseBodyImageRiskList& obj) { 
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(EndPointList, endPointList_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(ImageAccessType, imageAccessType_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InternetURLs, internetURLs_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(RepoType, repoType_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TagImmutable, tagImmutable_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VpcURLs, vpcURLs_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageRiskResponseBodyImageRiskList& obj) { 
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(EndPointList, endPointList_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(ImageAccessType, imageAccessType_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InternetURLs, internetURLs_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(RepoType, repoType_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TagImmutable, tagImmutable_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VpcURLs, vpcURLs_);
    };
    ListImageRiskResponseBodyImageRiskList() = default ;
    ListImageRiskResponseBodyImageRiskList(const ListImageRiskResponseBodyImageRiskList &) = default ;
    ListImageRiskResponseBodyImageRiskList(ListImageRiskResponseBodyImageRiskList &&) = default ;
    ListImageRiskResponseBodyImageRiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageRiskResponseBodyImageRiskList() = default ;
    ListImageRiskResponseBodyImageRiskList& operator=(const ListImageRiskResponseBodyImageRiskList &) = default ;
    ListImageRiskResponseBodyImageRiskList& operator=(ListImageRiskResponseBodyImageRiskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->digest_ != nullptr
        && this->endPointList_ != nullptr && this->endpoints_ != nullptr && this->image_ != nullptr && this->imageAccessType_ != nullptr && this->imageId_ != nullptr
        && this->internetURLs_ != nullptr && this->regionId_ != nullptr && this->registryType_ != nullptr && this->repoId_ != nullptr && this->repoName_ != nullptr
        && this->repoNamespace_ != nullptr && this->repoType_ != nullptr && this->statistics_ != nullptr && this->tag_ != nullptr && this->tagImmutable_ != nullptr
        && this->uuid_ != nullptr && this->vpcURLs_ != nullptr; };
    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string digest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline ListImageRiskResponseBodyImageRiskList& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // endPointList Field Functions 
    bool hasEndPointList() const { return this->endPointList_ != nullptr;};
    void deleteEndPointList() { this->endPointList_ = nullptr;};
    inline const vector<Models::ListImageRiskResponseBodyImageRiskListEndPointList> & endPointList() const { DARABONBA_PTR_GET_CONST(endPointList_, vector<Models::ListImageRiskResponseBodyImageRiskListEndPointList>) };
    inline vector<Models::ListImageRiskResponseBodyImageRiskListEndPointList> endPointList() { DARABONBA_PTR_GET(endPointList_, vector<Models::ListImageRiskResponseBodyImageRiskListEndPointList>) };
    inline ListImageRiskResponseBodyImageRiskList& setEndPointList(const vector<Models::ListImageRiskResponseBodyImageRiskListEndPointList> & endPointList) { DARABONBA_PTR_SET_VALUE(endPointList_, endPointList) };
    inline ListImageRiskResponseBodyImageRiskList& setEndPointList(vector<Models::ListImageRiskResponseBodyImageRiskListEndPointList> && endPointList) { DARABONBA_PTR_SET_RVALUE(endPointList_, endPointList) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline string endpoints() const { DARABONBA_PTR_GET_DEFAULT(endpoints_, "") };
    inline ListImageRiskResponseBodyImageRiskList& setEndpoints(string endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ListImageRiskResponseBodyImageRiskList& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imageAccessType Field Functions 
    bool hasImageAccessType() const { return this->imageAccessType_ != nullptr;};
    void deleteImageAccessType() { this->imageAccessType_ = nullptr;};
    inline string imageAccessType() const { DARABONBA_PTR_GET_DEFAULT(imageAccessType_, "") };
    inline ListImageRiskResponseBodyImageRiskList& setImageAccessType(string imageAccessType) { DARABONBA_PTR_SET_VALUE(imageAccessType_, imageAccessType) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListImageRiskResponseBodyImageRiskList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // internetURLs Field Functions 
    bool hasInternetURLs() const { return this->internetURLs_ != nullptr;};
    void deleteInternetURLs() { this->internetURLs_ = nullptr;};
    inline string internetURLs() const { DARABONBA_PTR_GET_DEFAULT(internetURLs_, "") };
    inline ListImageRiskResponseBodyImageRiskList& setInternetURLs(string internetURLs) { DARABONBA_PTR_SET_VALUE(internetURLs_, internetURLs) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListImageRiskResponseBodyImageRiskList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline ListImageRiskResponseBodyImageRiskList& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline ListImageRiskResponseBodyImageRiskList& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline ListImageRiskResponseBodyImageRiskList& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline ListImageRiskResponseBodyImageRiskList& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // repoType Field Functions 
    bool hasRepoType() const { return this->repoType_ != nullptr;};
    void deleteRepoType() { this->repoType_ = nullptr;};
    inline string repoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
    inline ListImageRiskResponseBodyImageRiskList& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline ListImageRiskResponseBodyImageRiskList& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListImageRiskResponseBodyImageRiskList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // tagImmutable Field Functions 
    bool hasTagImmutable() const { return this->tagImmutable_ != nullptr;};
    void deleteTagImmutable() { this->tagImmutable_ = nullptr;};
    inline int32_t tagImmutable() const { DARABONBA_PTR_GET_DEFAULT(tagImmutable_, 0) };
    inline ListImageRiskResponseBodyImageRiskList& setTagImmutable(int32_t tagImmutable) { DARABONBA_PTR_SET_VALUE(tagImmutable_, tagImmutable) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListImageRiskResponseBodyImageRiskList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vpcURLs Field Functions 
    bool hasVpcURLs() const { return this->vpcURLs_ != nullptr;};
    void deleteVpcURLs() { this->vpcURLs_ = nullptr;};
    inline string vpcURLs() const { DARABONBA_PTR_GET_DEFAULT(vpcURLs_, "") };
    inline ListImageRiskResponseBodyImageRiskList& setVpcURLs(string vpcURLs) { DARABONBA_PTR_SET_VALUE(vpcURLs_, vpcURLs) };


  protected:
    // The digest value of the image.
    std::shared_ptr<string> digest_ = nullptr;
    // An array that consists of the details of the endpoint.
    std::shared_ptr<vector<Models::ListImageRiskResponseBodyImageRiskListEndPointList>> endPointList_ = nullptr;
    // The endpoint of Container Registry.
    std::shared_ptr<string> endpoints_ = nullptr;
    // The image of the container.
    std::shared_ptr<string> image_ = nullptr;
    // The registration status of the image repository. Valid values:
    // 
    // *   **IN_SAS**: The image repository is registered with Security Center.
    // *   **NOT_IN_SAS**: The image repository is not registered with Security Center.
    std::shared_ptr<string> imageAccessType_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The public endpoint of the image repository.
    std::shared_ptr<string> internetURLs_ = nullptr;
    // The region of the image repository.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the image repository. Valid values:
    // 
    // *   **acr**
    // *   **harbor**
    // *   **quay**
    // *   **CI/CD**: Jenkins
    std::shared_ptr<string> registryType_ = nullptr;
    // The ID of the image repository.
    std::shared_ptr<string> repoId_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The name of the namespace to which the repository belongs.
    std::shared_ptr<string> repoNamespace_ = nullptr;
    // The type of the repository. Valid values:
    // 
    // *   `PUBLIC`
    // *   `PRIVATE`
    std::shared_ptr<string> repoType_ = nullptr;
    // The statistics on a security event.
    std::shared_ptr<string> statistics_ = nullptr;
    // The tag that is added to the image.
    std::shared_ptr<string> tag_ = nullptr;
    // Indicates whether the image version is immutable. If the image version is immutable, only the image of the latest version in the image repository can be overwritten. Valid values:
    // 
    // *   **0**: The image version is mutable.
    // *   **1**: The image version is immutable.
    std::shared_ptr<int32_t> tagImmutable_ = nullptr;
    // The UUID of the image.
    std::shared_ptr<string> uuid_ = nullptr;
    // The endpoint of the image repository in the VPC.
    std::shared_ptr<string> vpcURLs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
