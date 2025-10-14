// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPVERSIONRESPONSEBODYVERSIONCONTAINERSACRIMAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPVERSIONRESPONSEBODYVERSIONCONTAINERSACRIMAGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsEnterpriseRegistry, isEnterpriseRegistry_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TagUrl, tagUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsEnterpriseRegistry, isEnterpriseRegistry_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TagUrl, tagUrl_);
    };
    GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo() = default ;
    GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo(const GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo &) = default ;
    GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo(GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo &&) = default ;
    GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo() = default ;
    GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo& operator=(const GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo &) = default ;
    GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo& operator=(GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->instanceId_ == nullptr && return this->isEnterpriseRegistry_ == nullptr && return this->regionId_ == nullptr && return this->repoId_ == nullptr && return this->repoName_ == nullptr
        && return this->repoNamespace_ == nullptr && return this->tag_ == nullptr && return this->tagUrl_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isEnterpriseRegistry Field Functions 
    bool hasIsEnterpriseRegistry() const { return this->isEnterpriseRegistry_ != nullptr;};
    void deleteIsEnterpriseRegistry() { this->isEnterpriseRegistry_ = nullptr;};
    inline bool isEnterpriseRegistry() const { DARABONBA_PTR_GET_DEFAULT(isEnterpriseRegistry_, false) };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo& setIsEnterpriseRegistry(bool isEnterpriseRegistry) { DARABONBA_PTR_SET_VALUE(isEnterpriseRegistry_, isEnterpriseRegistry) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // tagUrl Field Functions 
    bool hasTagUrl() const { return this->tagUrl_ != nullptr;};
    void deleteTagUrl() { this->tagUrl_ = nullptr;};
    inline string tagUrl() const { DARABONBA_PTR_GET_DEFAULT(tagUrl_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo& setTagUrl(string tagUrl) { DARABONBA_PTR_SET_VALUE(tagUrl_, tagUrl) };


  protected:
    // The domain name of the Container Registry image.
    std::shared_ptr<string> domain_ = nullptr;
    // The ID of the Container Registry instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the image is an enterprise-level image.
    std::shared_ptr<bool> isEnterpriseRegistry_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the image repository.
    std::shared_ptr<string> repoId_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The namespace to which the image repository belongs.
    std::shared_ptr<string> repoNamespace_ = nullptr;
    // The tag value.
    std::shared_ptr<string> tag_ = nullptr;
    // The URL of the Container Registry image tag.
    std::shared_ptr<string> tagUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
